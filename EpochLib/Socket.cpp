#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

CIPAddress CIPAddress::Any;
CIPAddress CIPAddress::Loopback(127, 0, 0, 1);
CIPAddress CIPAddress::Broadcast(255, 255, 255, 255);

void CIPAddress::Local(std::vector<CIPAddress>& addresses)
{
	hostent* pHostent = gethostbyname(NULL);
	if (!pHostent)
		THROW_LAST_SOCK(NULL);

	if (!pHostent->h_addr_list[0])
		throw Exception::CSocketException(WSAHOST_NOT_FOUND, 0, __FILE__, __FUNCTION__, __LINE__);

	for (int nAdapter = 0; pHostent->h_addr_list[nAdapter]; ++nAdapter)
		addresses.push_back(CIPAddress(*(reinterpret_cast<DWORD*>(pHostent->h_addr_list[nAdapter]))));
}

CIPAddress CIPAddress::Parse(LPCTSTR strAddress)
{
	StringArray subStrings;
	if (SplitString(strAddress, _T("."), subStrings) != 4)
		throw Exception::CFormatException(strAddress, __FILE__, __FUNCTION__, __LINE__);

	BYTE address[4];
	for (StringArray::iterator it = subStrings.begin(); it != subStrings.end(); ++it)
	{
		int nValue = _ttoi(*it);

		if ((nValue < 0) || (nValue > 255))
			throw Exception::CFormatException(strAddress, __FILE__, __FUNCTION__, __LINE__);

		address[it - subStrings.begin()] = static_cast<BYTE>(nValue);
	}

	return CIPAddress(address);
}

DWORD CIPAddress::NBO2HBO(DWORD dwAddress)
{
	BYTE nAddress0;
	BYTE nAddress1;
	BYTE nAddress2;
	BYTE nAddress3;

	MakeAddress(dwAddress, nAddress0, nAddress1, nAddress2, nAddress3);
	return MakeAddress(nAddress3, nAddress2, nAddress1, nAddress0);
}

DWORD CIPAddress::HBO2NBO(DWORD dwAddress)
{
	return NBO2HBO(dwAddress);
}

DWORD CIPAddress::MakeAddress(BYTE nAddress0, BYTE nAddress1, BYTE nAddress2, BYTE nAddress3)
{
	return static_cast<ULONG>(MAKELPARAM(MAKEWORD(nAddress0, nAddress1), MAKEWORD(nAddress2, nAddress3)));
}

void CIPAddress::MakeAddress(DWORD dwAddress,		// NBO
						     BYTE& nAddress0, BYTE& nAddress1, BYTE& nAddress2, BYTE& nAddress3)
{
	nAddress3 = HIBYTE(HIWORD(dwAddress));
	nAddress2 = LOBYTE(HIWORD(dwAddress));
	nAddress1 = HIBYTE(LOWORD(dwAddress));
	nAddress0 = LOBYTE(LOWORD(dwAddress));
}

//_____________________________________________________________________________
//

CIPEndPoint CIPEndPoint::Parse(LPCTSTR strIPEndPoint)
{
	CAtlString strTemp = strIPEndPoint;
	strTemp.Trim();
	int nIndex = strTemp.Find(_T(':'));
	if ((nIndex == -1) || (nIndex == strTemp.GetLength() - 1))
		throw Exception::CFormatException(strIPEndPoint, __FILE__, __FUNCTION__, __LINE__);

	CIPEndPoint IPEndPoint;
	IPEndPoint.m_IPAddress = CIPAddress::Parse(strTemp.Left(nIndex));
	IPEndPoint.m_nPort = _ttoi(strTemp.Mid(nIndex + 1));

	return IPEndPoint;
}

//_____________________________________________________________________________
//

bool CWinsock::s_bInitialized = false;

void CWinsock::Initialize()
{
	if (s_bInitialized)
		THROW_WIN32(ERROR_INVALID_STATE);

	WORD wVersionRequested = MAKEWORD(2, 2);
	WSADATA WSAData;
 
	int nError = WSAStartup(wVersionRequested, &WSAData);
	if (nError)
		throw Exception::CSocketException(nError, 0, __FILE__, __FUNCTION__, __LINE__);

	if (LOBYTE(WSAData.wVersion) != 2 ||
		HIBYTE(WSAData.wVersion ) != 2 )
	{
		WSACleanup();
		THROW_WIN32(ERROR_INVALID_FUNCTION);
	}

	s_bInitialized = true;

	LOG_DEBUG(_T("Winsock initialized."));
}

void CWinsock::Finalize()
{
	if (!s_bInitialized)
		THROW_WIN32(ERROR_INVALID_STATE);

	// TODO: close all connections and stop all threads

	if (WSACleanup() == SOCKET_ERROR)
		THROW_LAST_SOCK(NULL);

    s_bInitialized = false;

	LOG_DEBUG(_T("Winsock finalized."));
}

//_____________________________________________________________________________
//

HANDLE CSocketIoThread::GetIoObject()
{
	return reinterpret_cast<HANDLE>(m_cpSocket->GetSocket());
}

//_____________________________________________________________________________
//

int CSocket::MapOptionName(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName)
{
	switch(optionLevel)
	{
	case SocketOptionLevel::IP:
		switch(optionName)
		{
		case SocketOptionName::AddMembership: return IP_ADD_MEMBERSHIP;
		case SocketOptionName::AddSourceMembership: return IP_ADD_SOURCE_MEMBERSHIP;
		case SocketOptionName::BlockSource: return IP_BLOCK_SOURCE;
		case SocketOptionName::DontFragment: return IP_DONTFRAGMENT;
		case SocketOptionName::DropMembership: return IP_DROP_MEMBERSHIP;
		case SocketOptionName::DropSourceMembership: return IP_DROP_SOURCE_MEMBERSHIP;
		case SocketOptionName::HeaderIncluded: return IP_HDRINCL;
		case SocketOptionName::MulticastInterface: return IP_MULTICAST_IF;
		case SocketOptionName::MulticastLoopback: return IP_MULTICAST_LOOP;
		case SocketOptionName::MulticastTimeToLive: return IP_MULTICAST_TTL;
		case SocketOptionName::IPOptions: return IP_OPTIONS;
		case SocketOptionName::PacketInformation: return IP_PKTINFO;
		//case SocketOptionName::: return IP_RECEIVE_BROADCAST;
		case SocketOptionName::TypeOfService: return IP_TOS;
		case SocketOptionName::IpTimeToLive: return IP_TTL;
		case SocketOptionName::UnblockSource: return IP_UNBLOCK_SOURCE;
		default: throw Exception::CArgumentException(_T("optionName"), __FILE__, __FUNCTION__, __LINE__);
		}
		
	case SocketOptionLevel::IPv6:
		switch(optionName)
		{
		//case SocketOptionName::: return IPV6_UNICAST_HOPS;
		case SocketOptionName::MulticastInterface: return IPV6_MULTICAST_IF;
		//case SocketOptionName::: return IPV6_MULTICAST_HOPS;
		case SocketOptionName::MulticastLoopback: return IPV6_MULTICAST_LOOP;
		case SocketOptionName::AddMembership: return IPV6_ADD_MEMBERSHIP;
		case SocketOptionName::DropMembership: return IPV6_DROP_MEMBERSHIP;
		case SocketOptionName::PacketInformation: return IPV6_PKTINFO;
		//case SocketOptionName::: return IPV6_HOPLIMIT;
		//case SocketOptionName::: return IPV6_PROTECTION_LEVEL;
		case SocketOptionName::HeaderIncluded: return IPV6_HDRINCL;
		default: throw Exception::CArgumentException(_T("optionName"), __FILE__, __FUNCTION__, __LINE__);
		}

	case SocketOptionLevel::Socket:
		switch(optionName)
		{
		case SocketOptionName::AcceptConnection: return SO_ACCEPTCONN;
		case SocketOptionName::Broadcast: return SO_BROADCAST;
		//case SocketOptionName::: return SO_CONDITIONAL_ACCEPT;
		//case SocketOptionName::: return SO_CONNDATA;
		//case SocketOptionName::: return SO_CONNDATALEN;
		case SocketOptionName::ConnectTime: return SO_CONNECT_TIME;
		//case SocketOptionName::: return SO_CONNOPT;
		//case SocketOptionName::: return SO_CONNOPTLEN;
		//case SocketOptionName::: return SO_DISCDATA;
		//case SocketOptionName::: return SO_DISCDATALEN;
		//case SocketOptionName::: return SO_DISCOPT;
		//case SocketOptionName::: return SO_DISCOPTLEN;
		case SocketOptionName::Debug: return SO_DEBUG;
		case SocketOptionName::DontLinger: return SO_DONTLINGER;
		case SocketOptionName::DontRoute: return SO_DONTROUTE;
		case SocketOptionName::Error: return SO_ERROR;
		case SocketOptionName::ExclusiveAddressUse: return SO_EXCLUSIVEADDRUSE;
		//case SocketOptionName::: return SO_GROUP_ID;
		//case SocketOptionName::: return SO_GROUP_PRIORITY;
		case SocketOptionName::KeepAlive: return SO_KEEPALIVE;
		case SocketOptionName::Linger: return SO_LINGER;
		//case SocketOptionName::: return SO_MAX_MSG_SIZE;
		//case SocketOptionName::: return SO_MAXDG;
		//case SocketOptionName::: return SO_MAXPATHDG;
		case SocketOptionName::OutOfBandInline: return SO_OOBINLINE;
		//case SocketOptionName::: return SO_OPENTYPE;
		//case SocketOptionName::: return SO_PROTECT;
		case SocketOptionName::ProtocolInformation: return SO_PROTOCOL_INFO;
		case SocketOptionName::ReceiveBuffer: return SO_RCVBUF;
		case SocketOptionName::ReceiveLowWater: return SO_RCVLOWAT;
		case SocketOptionName::ReceiveTimeout: return SO_RCVTIMEO;
		case SocketOptionName::ReuseAddress: return SO_REUSEADDR;
		case SocketOptionName::SendBuffer: return SO_SNDBUF;
		case SocketOptionName::SendLowWater: return SO_SNDLOWAT;
		case SocketOptionName::SendTimeout: return SO_SNDTIMEO;
		//case SocketOptionName::: return SO_SYNCHRONOUS_ALERT;
		//case SocketOptionName::: return SO_SYNCHRONOUS_NONALERT;
		case SocketOptionName::Type: return SO_TYPE;
		//case SocketOptionName::: return SO_UPDATE_ACCEPT_CONTEXT;
		//case SocketOptionName::: return SO_UPDATE_CONNECT_CONTEXT;
		case SocketOptionName::UseLoopback: return SO_USELOOPBACK;
		default: throw Exception::CArgumentException(_T("optionName"), __FILE__, __FUNCTION__, __LINE__);
		}

	case SocketOptionLevel::Tcp:
		switch(optionName)
		{
		case SocketOptionName::Expedited: return TCP_EXPEDITED_1122;
		case SocketOptionName::NoDelay: return TCP_NODELAY;
		default: throw Exception::CArgumentException(_T("optionName"), __FILE__, __FUNCTION__, __LINE__);
		}

	case SocketOptionLevel::Udp:
		switch(optionName)
		{
		case SocketOptionName::ChecksumCoverage: return UDP_CHECKSUM_COVERAGE;
		case SocketOptionName::NoChecksum: return UDP_NOCHECKSUM;
		default: throw Exception::CArgumentException(_T("optionName"), __FILE__, __FUNCTION__, __LINE__);
		}

	default: throw Exception::CArgumentException(_T("optionLevel"), __FILE__, __FUNCTION__, __LINE__);
	}

	return 0;
}

void CSocket::SetBlocking(bool bBlock)
{
	int nMode = bBlock ? 0 : 1;
	if (ioctlsocket(m_Socket, FIONBIO, reinterpret_cast<u_long*>(&nMode)) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);
}

bool CSocket::GetConnected()
{
	try
	{
		DWORD dwSeconds = 0xffffffff;
		GetSocketOption(SocketOptionLevel::Socket, SocketOptionName::ConnectTime, dwSeconds);
		return dwSeconds != 0xffffffff;
	}
	catch(Exception::CSocketException& exception)
	{
		if (exception.GetErrorCode() != WSAENOTSOCK)
			throw;
	}

	return false;
}

CSocket::SocketType::Enum CSocket::GetSocketType()
{
	WSAPROTOCOL_INFO protocolInfo;
	memset(&protocolInfo, 0, sizeof(protocolInfo));
	GetSocketOption(SocketOptionLevel::Socket, SocketOptionName::ProtocolInformation, reinterpret_cast<BYTE*>(&protocolInfo), sizeof(protocolInfo));
	return static_cast<SocketType::Enum>(protocolInfo.iSocketType);
}

void CSocket::Bind(const CIPEndPoint& endPoint)
{
	if (m_Socket == INVALID_SOCKET)
		THROW_LAST_SOCK(m_Socket);

	sockaddr_in local;
	ZeroMemory(&local, sizeof(local));
	local.sin_family = AF_INET;
	local.sin_addr.S_un.S_addr = endPoint.GetIPAddress().GetAddress();
	local.sin_port = htons(endPoint.GetPort());

	if (bind(m_Socket, reinterpret_cast<sockaddr*>(&local), sizeof(local)) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	LOG_DEBUG(_T("Socket %08x bound to port %d."), m_Socket, endPoint.GetPort());
}

void CSocket::Listen(int nBackLog)
{
	if (listen(m_Socket, nBackLog) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	LOG_DEBUG(_T("Socket %08x listening."), m_Socket);
}

counted_ptr<CSocket> CSocket::Accept()
{
	sockaddr_in from;
	int nFromLen = sizeof(from);
	SOCKET IncomingSocket = accept(m_Socket, reinterpret_cast<sockaddr*>(&from), &nFromLen);

	if (IncomingSocket == INVALID_SOCKET)
		THROW_LAST_SOCK(m_Socket);

	return counted_ptr<CSocket>(new CSocket(IncomingSocket));
}

void CSocket::Connect(const CIPEndPoint& remoteEndPoint)
{
	if (m_Socket == INVALID_SOCKET)
		THROW_LAST_SOCK(m_Socket);

	sockaddr_in server;
	ZeroMemory(&server, sizeof(server));
	server.sin_addr.S_un.S_addr = remoteEndPoint.GetIPAddress().GetAddress();
	server.sin_port = htons(remoteEndPoint.GetPort());
	server.sin_family = AF_INET;

	if (connect(m_Socket, reinterpret_cast<sockaddr*>(&server), sizeof(server)) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	LOG_DEBUG(_T("Socket %08x connected to endpoint %s."), m_Socket, remoteEndPoint.ToString());
}

void CSocket::Shutdown(SocketShutdown::Enum how)
{
    if (shutdown(m_Socket, static_cast<int>(how)) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	LOG_DEBUG(_T("Socket %08x shutdown."), m_Socket);
}

void CSocket::Close()
{
	if (m_Socket == INVALID_SOCKET)
		return;

	if (closesocket(m_Socket) == SOCKET_ERROR)
	{
		int nError = WSAGetLastError();
		if (nError != WSAENOTSOCK)
			throw Exception::CSocketException(nError, m_Socket, __FILE__, __FUNCTION__, __LINE__);
	}
	else
		LOG_DEBUG(_T("Socket %08x closed."), m_Socket);

	m_Socket = INVALID_SOCKET;
}

void CSocket::Accept(counted_ptr<CAsyncAcceptThread> cpThread)
{
	if (!cpThread.GetPointer())
		THROW_HR(E_INVALIDARG);

	cpThread->m_cpSocket = counted_ptr<CSocket>(this);
	cpThread->m_cpAcceptedSocket = counted_ptr<CSocket>(new CSocket(SocketType::Stream));

	DWORD dwBytesReceived = 0;

	counted_ptr<Threading::CIoThread> cpIoThread(cpThread.GetPointer());

	Threading::CIoThread::COverlapped* pOverlapped = new Threading::CIoThread::COverlapped(cpIoThread.GetPointer());
	//cpIoThread->AddRef();

	if (AcceptEx(m_Socket, cpThread->m_cpAcceptedSocket->m_Socket, cpThread->m_cpAcceptedSocket->GetAcceptExBuffer(),
		0, s_nAcceptExAddrSize, s_nAcceptExAddrSize, &dwBytesReceived, pOverlapped->GetPointer()))
	{
		// Cannot get this to happen so cannot verify if the I/O completion port will be notified
		Threading::CThreadPool::Queue(cpIoThread.GetPointer());	// TODO: cpThread->OnAccept(); ?
		return;
	}

	int nError = WSAGetLastError();
	if (nError != ERROR_IO_PENDING)
	{
		delete pOverlapped;
		throw Exception::CSocketException(nError, m_Socket, __FILE__, __FUNCTION__, __LINE__);
	}

	Threading::CThreadPool::Queue(cpIoThread.GetPointer());
}

counted_ptr<CAsyncAcceptThread> CSocket::Accept(AcceptCallback acceptCallback)
{
	counted_ptr<CAsyncAcceptThread> cpThread(new CDelegateAsyncAcceptThread(acceptCallback));
//	cpThread->SetAutoRelease(true);
	Accept(cpThread);

	return cpThread;
}

void CSocket::CancelAccept(counted_ptr<CAsyncAcceptThread> cpThread)
{
	Threading::CThreadPool::Dequeue(cpThread.GetPointer());
	//cpThread.Release();	// This is to release the context given to the AcceptEx() in CSocket::Accept()
}

int CSocket::Send(BYTE buffer[], int nSize, SocketFlags::Enum socketFlags)
{
	return Send(buffer, 0, nSize, socketFlags);
}

int CSocket::Send(BYTE buffer[], int nOffset, int nSize, SocketFlags::Enum socketFlags)
{
	int nSent = send(m_Socket, reinterpret_cast<LPCSTR>(buffer + nOffset), nSize, static_cast<int>(socketFlags));
	
	if (nSent == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	return nSent;
}

int CSocket::SendTo(BYTE buffer[], int nSize, const CIPEndPoint& endPoint, SocketFlags::Enum socketFlags)
{
	return SendTo(buffer, 0, nSize, endPoint, socketFlags);
}

int CSocket::SendTo(BYTE buffer[], int nOffset, int nSize, const CIPEndPoint& endPoint, SocketFlags::Enum socketFlags)
{
	sockaddr_in server;
	ZeroMemory(&server, sizeof(server));
	server.sin_addr.S_un.S_addr = endPoint.GetIPAddress().GetAddress();
	server.sin_port = htons(endPoint.GetPort());
	server.sin_family = AF_INET;

	int nSent = sendto(m_Socket, reinterpret_cast<LPCSTR>(buffer + nOffset), nSize, static_cast<int>(socketFlags), reinterpret_cast<sockaddr*>(&server), sizeof(server));
	
	if (nSent == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	return nSent;
}

int CSocket::Receive(BYTE buffer[], int nSize, SocketFlags::Enum socketFlags)
{
	return Receive(buffer, 0, nSize, socketFlags);
}

int CSocket::Receive(BYTE buffer[], int nOffset, int nSize, SocketFlags::Enum socketFlags)
{
	int nReceived = recv(m_Socket, reinterpret_cast<LPSTR>(buffer + nOffset), nSize, static_cast<int>(socketFlags));
	
	if (nReceived == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	return nReceived;
}

void CSocket::Receive(counted_ptr<CAsyncReceiveThread> cpThread)
{
	if (!cpThread.GetPointer())
		THROW_HR(E_INVALIDARG);

	cpThread->m_cpSocket = counted_ptr<CSocket>(this);
	cpThread->m_dwReceivedCount = 0;

	counted_ptr<Threading::CIoThread> cpIoThread(cpThread.GetPointer());

	Threading::CIoThread::COverlapped* pOverlapped = new Threading::CIoThread::COverlapped(cpIoThread.GetPointer());
	cpIoThread->AddRef();

	if (!WSARecv(m_Socket, &(cpThread->m_WsaBuffer), 1, &(cpThread->m_dwReceivedCount), &(cpThread->m_dwFlags), pOverlapped->GetPointer(), NULL))
	{
		delete pOverlapped;
		cpThread->OnReceive(cpThread->m_pBuffer, cpThread->m_dwReceivedCount, cpThread->m_dwFlags);
		return;
	}

	int nError = WSAGetLastError();
	if (nError != ERROR_IO_PENDING)
	{
		delete pOverlapped;
		throw Exception::CSocketException(nError, m_Socket, __FILE__, __FUNCTION__, __LINE__);
	}

	Threading::CThreadPool::Queue(cpIoThread.GetPointer());	
}

void CSocket::Receive(ReceiveCallback receiveCallback, DWORD dwFlags)
{
	counted_ptr<CAsyncReceiveThread> cpThread = counted_ptr<CAsyncReceiveThread>(new CDelegateAsyncReceiveThread(receiveCallback, dwFlags));
//	cpThread->SetAutoRelease(true);
	Receive(cpThread);
}

int CSocket::ReceiveFrom(BYTE buffer[], int nSize, CIPEndPoint& endPoint, SocketFlags::Enum socketFlags)
{
	return ReceiveFrom(buffer, 0, nSize, endPoint, socketFlags);
}

int CSocket::ReceiveFrom(BYTE buffer[], int nOffset, int nSize, CIPEndPoint& endPoint, SocketFlags::Enum socketFlags)
{
	sockaddr_in from;
	int nFromLen = sizeof(from);

	int nReceived = recvfrom(m_Socket, reinterpret_cast<LPSTR>(buffer + nOffset), nSize, static_cast<int>(socketFlags), reinterpret_cast<sockaddr*>(&from), &nFromLen);
	
	if (nReceived == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);	

	endPoint = CIPEndPoint(CIPAddress(from.sin_addr.S_un.S_addr), ntohs(from.sin_port));

	return nReceived;
}

void CSocket::SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, int nOptionValue)
{
	SetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&nOptionValue), sizeof(nOptionValue));
}

void CSocket::SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, DWORD dwOptionValue)
{
	SetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&dwOptionValue), sizeof(dwOptionValue));
}

void CSocket::SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, bool bOptionValue)
{
	BOOL bTemp = bOptionValue;
	SetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&bTemp), sizeof(bTemp));
}

void CSocket::SetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, BYTE optionValue[], int nOptionLen)
{
	int nMappedOptionName = MapOptionName(optionLevel, optionName);

	if (setsockopt(m_Socket, static_cast<int>(optionLevel), nMappedOptionName, reinterpret_cast<char*>(optionValue), nOptionLen) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);
}

void CSocket::GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, int& nOptionValue)
{
	GetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&nOptionValue), sizeof(nOptionValue));
}

void CSocket::GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, DWORD& dwOptionValue)
{
	GetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&dwOptionValue), sizeof(dwOptionValue));
}

void CSocket::GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, bool& bOptionValue)
{
	BOOL bTemp = FALSE;
	GetSocketOption(optionLevel, optionName, reinterpret_cast<BYTE*>(&bTemp), sizeof(bTemp));
	bOptionValue = bTemp ? true : false;
}

void CSocket::GetSocketOption(SocketOptionLevel::Enum optionLevel, SocketOptionName::Enum optionName, BYTE optionValue[], int nOptionLen)
{
	int nMappedOptionName = MapOptionName(optionLevel, optionName);

	if (getsockopt(m_Socket, static_cast<int>(optionLevel), nMappedOptionName, reinterpret_cast<char*>(optionValue), &nOptionLen) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);
}

CIPEndPoint CSocket::GetLocalEndPoint()
{
	if (m_pAcceptExBuffer)
	{
		sockaddr_in* pLocal = NULL;
		sockaddr_in* pRemote = NULL;
		int nLocalLen = 0;
		int nRemoteLen = 0;

		GetAcceptExSockaddrs(m_pAcceptExBuffer, 0, s_nAcceptExAddrSize, s_nAcceptExAddrSize,
			reinterpret_cast<sockaddr**>(&pLocal), &nLocalLen,
			reinterpret_cast<sockaddr**>(&pRemote), &nRemoteLen);

		return CIPEndPoint(CIPAddress(pLocal->sin_addr.S_un.S_addr), ntohs(pLocal->sin_port));
	}

	sockaddr_in local;
	int nLocalLen = sizeof(local);
	if (getsockname(m_Socket, reinterpret_cast<sockaddr*>(&local), &nLocalLen) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	return CIPEndPoint(CIPAddress(local.sin_addr.S_un.S_addr), ntohs(local.sin_port));
}

CIPEndPoint CSocket::GetRemoteEndPoint()
{
	if (m_pAcceptExBuffer)
	{
		sockaddr_in* pLocal = NULL;
		sockaddr_in* pRemote = NULL;
		int nLocalLen = 0;
		int nRemoteLen = 0;

		GetAcceptExSockaddrs(m_pAcceptExBuffer, 0, s_nAcceptExAddrSize, s_nAcceptExAddrSize,
			reinterpret_cast<sockaddr**>(&pLocal), &nLocalLen,
			reinterpret_cast<sockaddr**>(&pRemote), &nRemoteLen);

		return CIPEndPoint(CIPAddress(pRemote->sin_addr.S_un.S_addr), ntohs(pRemote->sin_port));
	}

	sockaddr_in from;
	int nFromLen = sizeof(from);

	if (getpeername(m_Socket, reinterpret_cast<sockaddr*>(&from), &nFromLen) == SOCKET_ERROR)
		THROW_LAST_SOCK(m_Socket);

	return CIPEndPoint(CIPAddress(from.sin_addr.S_un.S_addr), ntohs(from.sin_port));
}

BYTE* CSocket::GetAcceptExBuffer()
{
	if (!m_pAcceptExBuffer)
	{
		m_pAcceptExBuffer = new BYTE[s_nAcceptExBufferSize];
		if (!m_pAcceptExBuffer)
			THROW_HR(E_OUTOFMEMORY);
	}

	return m_pAcceptExBuffer;
}

void CSocket::FreeAcceptExBuffer()
{
	if (m_pAcceptExBuffer)
	{
		delete[] m_pAcceptExBuffer;
		m_pAcceptExBuffer = NULL;
	}
}

}	// namespace Networking
}	// namespace Epoch
