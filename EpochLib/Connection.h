#pragma once

#include <set>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Networking {

class CConnectionHub;

class EPOCH_EXPORT CConnection : public Threading::CThread
{
public:
	CConnection(CSocket::SocketType::Enum socketType = CSocket::SocketType::Stream);
	CConnection(counted_ptr<CSocket> cpSocket);

	void SetConnectionHub(counted_ptr<CConnectionHub> cpHub);

	void Connect(const CIPEndPoint& remoteEndPoint);

	int Send(BYTE buffer[], int nSize, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);
	int Send(BYTE buffer[], int nOffset, int nSize, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);

	CIPEndPoint GetRemoteEndPoint()	{ return m_cpSocket->GetRemoteEndPoint(); }

	counted_ptr<CSocket> GetSocket() { return m_cpSocket; }

protected:
	virtual DWORD Run(Threading::CAutoResetEvent& eventStopping);
   
	virtual void OnConnected();			// If overriden, call to the base class implementation is required
	virtual void OnDisconnecting();		// "
	virtual void OnDisconnected() {};	// "

	virtual void OnReceive(const CIPEndPoint& remoteEndPoint, BYTE pBuffer[], int nSize) = 0;

	counted_ptr<CSocket>		m_cpSocket;
	counted_ptr<CConnectionHub>	m_cpHub;

private:
	void OnStopping(bool bTimeout);
};

//_____________________________________________________________________________
//

class CProtocol;
class CMessageConnectionHub;

class EPOCH_EXPORT CMessageConnection : public CConnection
{
	friend class CProtocolInstance;
public:
	CMessageConnection(CSocket::SocketType::Enum socketType = CSocket::SocketType::Stream)
		: CConnection(socketType)
		, m_pBuffer(NULL)
		, m_nBufferSize(0)
		, m_nUsedBufferSize(0)
		, m_nCurrentMessageSize(0)
		, m_pCurrentMessage(NULL)
	{
	}

	CMessageConnection(counted_ptr<CSocket> cpSocket)
		: CConnection(cpSocket)
		, m_pBuffer(NULL)
		, m_nBufferSize(0)
		, m_nUsedBufferSize(0)
		, m_nCurrentMessageSize(0)
		, m_pCurrentMessage(NULL)
	{
	}

	virtual ~CMessageConnection();

	void SetConnectionHub(counted_ptr<CMessageConnectionHub> cpHub);

	CProtocolInstance* CreateProtocolInstance(GUID guidProtocol);
	CProtocolInstance* CreateProtocolInstance(CProtocol* pProtocol);

	virtual std::auto_ptr<CMessage> CreateMessage(GUID guidMessage) = 0;

	void SendMessage(std::auto_ptr<CMessage> apMessage, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);

protected:
	virtual void OnMessage(CMessage* pMessage, CProtocolInstance* pProtocolInstance) {}
	virtual void OnDisconnecting();
	
private:
	void DestroyAllProtocolInstances();
	void DestroyProtocolInstance(CProtocolInstance* pProtocolInstance);
	CProtocolInstance* FindProtocolInstance(GUID guidProtocolInstance);
	std::auto_ptr<CMessage> CreateStandardMessage(GUID guidMessage);

	virtual void OnReceive(const CIPEndPoint& remoteEndPoint, BYTE pBuffer[], int nSize);

	BYTE*	m_pBuffer;
	int		m_nBufferSize;
	int		m_nUsedBufferSize;
	int		m_nCurrentMessageSize;
	BYTE*	m_pCurrentMessage;
	Threading::CCriticalSection		m_csProtocolInstances;
	std::list<CProtocolInstance*>	m_ProtocolInstances;
};

//_____________________________________________________________________________
//

struct EPOCH_EXPORT greater_connection : public std::binary_function <counted_ptr<CConnection>, counted_ptr<CConnection>, bool> 
{
    bool operator()(const counted_ptr<CConnection>& _Left, const counted_ptr<CConnection>& _Right) const
	{
		return _Left.GetPointer() > _Right.GetPointer();
	}
};

typedef std::set<counted_ptr<CConnection>, greater_connection> ConnectionSet;

class EPOCH_EXPORT CConnectionHub : public CReferenceCounted<>
{
public:
	void RegisterConnection(counted_ptr<CConnection> cpConnection);
	void UnregisterConnection(counted_ptr<CConnection> cpConnection);

	void GetConnections(ConnectionSet& connections);
	int GetSize();

	void Send(BYTE buffer[], int nSize, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);
	void Send(BYTE buffer[], int nOffset, int nSize, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);

	void StopAllConnections();

protected:
	Threading::CCriticalSection	m_csConnections;
	ConnectionSet				m_Connections;
};

class EPOCH_EXPORT CMessageConnectionHub : public CConnectionHub
{
public:
	void SendMessage(std::auto_ptr<CMessage> apMessage, CSocket::SocketFlags::Enum socketFlags = CSocket::SocketFlags::None);
};

/* Deprecated
class CConnectionManager
{
public:
	static void RegisterConnection(CConnection* pConnection)
	{
		Threading::CScopedLock lock(s_csConnections);
		s_Connections.insert(pConnection);
	}

	static void UnregisterConnection(CConnection* pConnection)
	{
		Threading::CScopedLock lock(s_csConnections);
		s_Connections.erase(pConnection);
	}

	static int GetConnectionCount()
	{
		Threading::CScopedLock lock(s_csConnections);
		return static_cast<int>(s_Connections.size());
	}

	static void StopAllConnections();

protected:
	static Threading::CCriticalSection	s_csConnections;
	static std::set<CConnection*>		s_Connections;
};
*/

//_____________________________________________________________________________
//

class EPOCH_EXPORT CAcceptor : public Threading::CThread
{
public:
	typedef FastDelegate<CConnection* ( counted_ptr<CSocket> ) > CreateConnectionCallback;

	CAcceptor(const CIPEndPoint& listeningEndPoint,
			  CreateConnectionCallback createConnectionCallback)
  		: m_ListeningEndPoint(listeningEndPoint)
		, m_cpServerSocket(counted_ptr<CSocket>(new CSocket))
		, m_CreateConnectionCallback(createConnectionCallback)
		, m_eventReady(true)
	{
		m_cpServerSocket->Bind(m_ListeningEndPoint);
	}

	counted_ptr<CSocket> GetSocket()
	{
		return m_cpServerSocket;
	}

protected:
	void OnAccept(counted_ptr<CSocket> cpAcceptedSocket)
	{
		if (!cpAcceptedSocket->GetConnected())
			return;

		CConnection* pNewConnection = CreateConnection(cpAcceptedSocket);
		if (!pNewConnection)
			cpAcceptedSocket->Close();
		else
			pNewConnection->Start();

		m_eventReady.Set();
	}

	virtual DWORD Run(Threading::CAutoResetEvent& eventStopping);
	virtual CConnection* CreateConnection(counted_ptr<CSocket> cpAcceptedSocket);

	CIPEndPoint					m_ListeningEndPoint;
	counted_ptr<CSocket>		m_cpServerSocket;
	CreateConnectionCallback	m_CreateConnectionCallback;
	Threading::CAutoResetEvent	m_eventReady;
};

}	// namespace Networking
}	// namespace Epoch

#pragma warning( pop )