#pragma once

#include <Exception.h>
#include <Threading.h>

namespace Epoch {
namespace Networking {

class EPOCH_EXPORT CWinsock
{
public:
	static void Initialize();
	static void Finalize();

	CWinsock()
	{
		Initialize();
	}

	~CWinsock()
	{
		Finalize();
	}

protected:
	static bool s_bInitialized;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CIPAddress
{
public:
	static CIPAddress Any;
	static CIPAddress Loopback;
	static CIPAddress Broadcast;

	static void Local(std::vector<CIPAddress>& addresses);
	static CIPAddress Parse(LPCTSTR strAddress);
	static DWORD HBO2NBO(DWORD dwAddress);
	static DWORD NBO2HBO(DWORD dwAddress);

	CIPAddress()
		: m_dwAddress(0)
	{}

	CIPAddress(BYTE nAddress0, BYTE nAddress1, BYTE nAddress2, BYTE nAddress3)	// in HBO
	{
		m_dwAddress = MakeAddress(nAddress0, nAddress1, nAddress2, nAddress3);
	}

	CIPAddress(BYTE address[4])	// in HBO
	{
		m_dwAddress = MakeAddress(address[0], address[1], address[2], address[3]);
	}

	CIPAddress(DWORD dwAddress)	// in NBO
		: m_dwAddress(dwAddress)
	{}

	CIPAddress(const CIPAddress& address)
	{
		m_dwAddress = address.m_dwAddress;
	}

	CIPAddress& operator=(const CIPAddress& address)
	{
		if (&address != this)
			m_dwAddress = address.m_dwAddress;

		return *this;
	}

	DWORD GetAddress() const	// in NBO
	{
		return m_dwAddress;
	}

	CAtlString ToString() const
	{
		BYTE nAddress0;
		BYTE nAddress1;
		BYTE nAddress2;
		BYTE nAddress3;

		MakeAddress(m_dwAddress, nAddress0, nAddress1, nAddress2, nAddress3);

		CAtlString strTemp;
		strTemp.Format(_T("%d.%d.%d.%d"), nAddress0, nAddress1, nAddress2, nAddress3);

		return strTemp;
	}

	bool operator==(const CIPAddress& address)
	{
		return m_dwAddress == address.m_dwAddress;
	}

protected:
	static DWORD MakeAddress(BYTE nAddress0, BYTE nAddress1, BYTE nAddress2, BYTE nAddress3);		// returns address in NBO
	static void MakeAddress(DWORD dwAddress,														// in NBO
						    BYTE& nAddress0, BYTE& nAddress1, BYTE& nAddress2, BYTE& nAddress3);

	DWORD m_dwAddress;	// In Network Byte Order
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CIPEndPoint
{
public:
	static CIPEndPoint Parse(LPCTSTR strIPEndPoint);

	CIPEndPoint()
		: m_nPort(0)
	{}

	CIPEndPoint(const CIPAddress& address, int nPort)
		: m_IPAddress(address)
		, m_nPort(nPort)
	{}

	CIPAddress GetIPAddress() const					{ return m_IPAddress; }
	void SetIPAddress(const CIPAddress& address)	{ m_IPAddress = address; }

	int GetPort() const								{ return m_nPort; }
	void SetPort(int nPort)							{ m_nPort = nPort; }

	CAtlString ToString() const
	{
		CAtlString strTemp;
		strTemp.Format(_T("%s:%d"), m_IPAddress.ToString(), m_nPort);
		return strTemp;
	}

	bool operator==(const CIPEndPoint& endPoint)
	{
		return (m_IPAddress == endPoint.m_IPAddress)
			&& (m_nPort == endPoint.m_nPort);
	}

protected:
	CIPAddress	m_IPAddress;
	int			m_nPort;
};

//_____________________________________________________________________________
//

class CSocket;

class EPOCH_EXPORT CSocketIoThread : public Threading::CIoThread
{
	friend class CSocket;
public:
	virtual HANDLE GetIoObject();

protected:
	counted_ptr<CSocket>	m_cpSocket;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CAsyncAcceptThread : public CSocketIoThread
{
	friend class CSocket;
protected:
	virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
	{
		if (m_dwErrorCode != ERROR_SUCCESS)
			return 0;

		OnAccept(m_cpAcceptedSocket);
		return 0;
	}

	virtual void OnAccept(counted_ptr<CSocket> cpAcceptedSocket) = 0;

	counted_ptr<CSocket>	m_cpAcceptedSocket;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CAsyncReceiveThread : public CSocketIoThread
{
	friend class CSocket;
public:
	CAsyncReceiveThread(DWORD dwFlags = 0)
		: m_dwReceivedCount(0)
		, m_dwFlags(dwFlags)
	{
		m_WsaBuffer.buf = reinterpret_cast<char*>(m_pBuffer);
		m_WsaBuffer.len = ARRAY_SIZE(m_pBuffer);
	}

protected:
	static const int c_nBufferSize = 4096;

	virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
	{
		OnReceive(m_pBuffer, m_dwReceivedCount, m_dwFlags);
		return 0;
	}

	virtual void OnReceive(BYTE pBuffer[], DWORD dwReceivedCount, DWORD dwFlags) = 0;

	WSABUF				m_WsaBuffer;
	BYTE				m_pBuffer[c_nBufferSize];
	DWORD				m_dwReceivedCount;
	DWORD				m_dwFlags;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CSocket
	: public CReferenceCounted<>
{
public:
	typedef FastDelegate<void ( counted_ptr<CSocket> ) >	AcceptCallback;
	typedef FastDelegate<void ( BYTE[], DWORD, DWORD ) >	ReceiveCallback;

	struct SocketType
	{
		enum Enum
		{
			Unknown		= 0,
			Stream		= SOCK_STREAM,
			Dgram		= SOCK_DGRAM,
			Raw			= SOCK_RAW,
			Rdm			= SOCK_RDM,
			Seqpacket	= SOCK_SEQPACKET,
		};
	};

	struct SocketShutdown
	{
		enum Enum
		{
			Receive	= SD_RECEIVE,
			Send	= SD_SEND,
			Both	= SD_BOTH
		};
	};

	struct SocketFlags
	{
        enum Enum
		{
			DontRoute			= MSG_DONTROUTE,	// send without using routing tables
			MaxIOVectorLength	= MSG_MAXIOVLEN,
			None				= 0,
			OutOfBand			= MSG_OOB,			// process out-of-band data
			Partial				= MSG_PARTIAL,		// partial send or recv for message xport
			Peek				= MSG_PEEK,			// peek at incoming message
		};
	};

	struct SocketOptionLevel
	{
		enum Enum
		{
			IP		= IPPROTO_IP,
			IPv6	= IPPROTO_IPV6,
			Socket	= SOL_SOCKET,
			Tcp		= IPPROTO_TCP,
			Udp		= IPPROTO_UDP
		};
	};

	struct SocketOptionName
	{
		enum Enum
		{
			AcceptConnection = 1,
			AddMembership,
			AddSourceMembership,
			BlockSource,
			Broadcast,
			BsdUrgent,
			ChecksumCoverage,
			ConnectTime,
			Debug,
			DontFragment,
			DontLinger,
			DontRoute,
			DropMembership,
			DropSourceMembership,
			Error,
			ExclusiveAddressUse,
			Expedited,
			HeaderIncluded,
			IPOptions,
			IpTimeToLive,
			KeepAlive,
			Linger,
			MaxConnections,
			MulticastInterface,
			MulticastLoopback,
			MulticastTimeToLive,
			NoChecksum,
			NoDelay,
			OutOfBandInline,
			PacketInformation,
			ProtocolInformation,
			ReceiveBuffer,
			ReceiveLowWater,
			ReceiveTimeout,
			ReuseAddress,
			SendBuffer,
			SendLowWater,
			SendTimeout,
			Type,
			TypeOfService,
			UnblockSource,
			UseLoopback,
		};
	};

	CSocket(SocketType::Enum socketType = SocketType::Stream)
		: m_pAcceptExBuffer(NULL)
	{
		m_Socket = socket(AF_INET, static_cast<int>(socketType), 0);
		LOG_DEBUG(_T("Socket %08x opened."), m_Socket);
	}

	CSocket(SOCKET socket)
		: m_Socket(socket)
	{
		LOG_DEBUG(_T("Socket %08x opened."), m_Socket);
	}

	CSocket& operator=(const CSocket& socket)
	{
		if (&socket != this)
		{
			m_Socket = socket.m_Socket;	// duplicate handle?
			
			if (socket.m_pAcceptExBuffer)
				memcpy(GetAcceptExBuffer(), socket.m_pAcceptExBuffer, s_nAcceptExBufferSize);
			else
				FreeAcceptExBuffer();
		}

		return *this;
	}

	virtual ~CSocket()
	{
		FreeAcceptExBuffer();
		try
		{
			Close();
		}
		catch(Exception::CSocketException& exception)
		{
			exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		}
	}

	void SetBlocking(bool bBlock);

	bool GetConnected();
	SocketType::Enum GetSocketType();

	void Bind(const CIPEndPoint& endPoint);
	void Listen(int nBackLog = SOMAXCONN);

	counted_ptr<CSocket> Accept();
	void Accept(counted_ptr<CAsyncAcceptThread> cpThread);
	counted_ptr<CAsyncAcceptThread> Accept(AcceptCallback acceptCallback);

	static void CancelAccept(counted_ptr<CAsyncAcceptThread> cpThread);

	void Connect(const CIPEndPoint& remoteEndPoint);
	void Shutdown(SocketShutdown::Enum how = SocketShutdown::Both);
	void Close();

	int Send(BYTE buffer[], int nSize, SocketFlags::Enum socketFlags = SocketFlags::None);
	int Send(BYTE buffer[], int nOffset, int nSize, SocketFlags::Enum socketFlags = SocketFlags::None);

	int SendTo(BYTE buffer[], int nSize, const CIPEndPoint& endPoint, SocketFlags::Enum socketFlags = SocketFlags::None);
	int SendTo(BYTE buffer[], int nOffset, int nSize, const CIPEndPoint& endPoint, SocketFlags::Enum socketFlags = SocketFlags::None);

	int Receive(BYTE buffer[], int nSize, SocketFlags::Enum socketFlags = SocketFlags::None);
	int Receive(BYTE buffer[], int nOffset, int nSize, SocketFlags::Enum socketFlags = SocketFlags::None);
	void Receive(counted_ptr<CAsyncReceiveThread> cpThread);
	void Receive(ReceiveCallback receiveCallback, DWORD dwFlags = 0);

	int ReceiveFrom(BYTE buffer[], int nSize, CIPEndPoint& endPoint, SocketFlags::Enum socketFlags = SocketFlags::None);
	int ReceiveFrom(BYTE buffer[], int nOffset, int nSize, CIPEndPoint& endPoint, SocketFlags::Enum socketFlags = SocketFlags::None);

	SOCKET GetSocket() { return m_Socket; }

	void SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, int nOptionValue);
	void SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, DWORD dwOptionValue);
	void SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, bool bOptionValue);
	void SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, BYTE optionValue[], int nOptionLen);

	void GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, int& nOptionValue);
	void GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, DWORD& dwOptionValue);
	void GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, bool& bOptionValue);
	void GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, BYTE optionValue[], int nOptionLen);

	CIPEndPoint GetLocalEndPoint();
	CIPEndPoint GetRemoteEndPoint();

protected:
	static const int s_nAcceptExAddrSize = sizeof(sockaddr_in) + 16;
	static const int s_nAcceptExBufferSize = s_nAcceptExAddrSize * 2;

	static int MapOptionName(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName);

	class CDelegateAsyncAcceptThread : public CAsyncAcceptThread
	{
	public:
		CDelegateAsyncAcceptThread(AcceptCallback acceptCallback)
			: m_AcceptCallback(acceptCallback)
		{}

	protected:
		virtual void OnAccept(counted_ptr<CSocket> cpAcceptedSocket)
		{
			m_AcceptCallback(cpAcceptedSocket);
		}

		AcceptCallback	m_AcceptCallback;
	};

	class CDelegateAsyncReceiveThread : public CAsyncReceiveThread
	{
	public:
		CDelegateAsyncReceiveThread(ReceiveCallback receiveCallback, DWORD dwFlags = 0)
			: CAsyncReceiveThread(dwFlags)
			, m_ReceiveCallback(receiveCallback)
		{}

	protected:
		virtual void OnReceive(BYTE pBuffer[], DWORD dwReceivedCount, DWORD dwFlags)
		{
			m_ReceiveCallback(pBuffer, dwReceivedCount, dwFlags);
		}

		ReceiveCallback m_ReceiveCallback;
	};

	BYTE* GetAcceptExBuffer();
	void FreeAcceptExBuffer();
	
	SOCKET	m_Socket;
	BYTE*	m_pAcceptExBuffer;
};

}	// namespace Networking
}	// namespace Epoch
