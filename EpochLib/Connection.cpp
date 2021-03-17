#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

CConnection::CConnection(CSocket::SocketType::Enum socketType)
{
	m_cpSocket = counted_ptr<CSocket>(new CSocket(socketType));
}

CConnection::CConnection(counted_ptr<CSocket> cpSocket)
	: m_cpSocket(cpSocket)
{
}

void CConnection::SetConnectionHub(counted_ptr<CConnectionHub> cpHub)
{
	m_cpHub = cpHub;
}

void CConnection::Connect(const CIPEndPoint& remoteEndPoint)
{
	m_cpSocket->Connect(remoteEndPoint);

	Start();
}

int CConnection::Send(BYTE buffer[], int nSize, CSocket::SocketFlags::Enum socketFlags)
{
	return m_cpSocket->Send(buffer, nSize, socketFlags);	
}

int CConnection::Send(BYTE buffer[], int nOffset, int nSize, CSocket::SocketFlags::Enum socketFlags)
{
	return m_cpSocket->Send(buffer, nOffset, nSize, socketFlags);
}

void CConnection::OnStopping(bool bTimeout)
{
	m_cpSocket->Close();
}

void CConnection::OnConnected()
{
	if (m_cpHub.GetPointer())
		m_cpHub->RegisterConnection(this);
}

void CConnection::OnDisconnecting()
{
	if (m_cpHub.GetPointer())
		m_cpHub->UnregisterConnection(this);
}
	
DWORD CConnection::Run(Threading::CAutoResetEvent& eventStopping)
{
	counted_ptr<Threading::CWaitThread> cpWaitThread = Threading::CThreadPool::Queue(eventStopping.GetHandle(), 
		Threading::CThreadPool::WaitCallback(this, &CConnection::OnStopping));

	OnConnected();

	BYTE receiveBuffer[4096];
	const int nBufferSize = ARRAY_SIZE(receiveBuffer);

	CIPEndPoint remoteEndPoint = m_cpSocket->GetRemoteEndPoint();

	try
	{
		int nReceived = 0;
		while (nReceived = m_cpSocket->Receive(receiveBuffer, nBufferSize))
			OnReceive(remoteEndPoint, receiveBuffer, nReceived);
	}
	catch (Exception::CSocketException& exception)
	{
		// WSAECONNABORTED is normal when the eventStopping is signalled (see CConnection::OnStopping())
		// WSAECONNRESET is normal when the peer have closed the connection
		if ((exception.GetErrorCode() != WSAECONNABORTED) && (exception.GetErrorCode() != WSAECONNRESET))
			exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
	}

	OnDisconnecting();

	m_cpSocket->Close();

	Threading::CThreadPool::Dequeue(cpWaitThread.GetPointer());

	OnDisconnected();

	return 0;
}

//_____________________________________________________________________________
//

CMessageConnection::~CMessageConnection()
{
	DestroyAllProtocolInstances();

	if (m_pBuffer)
		delete[] m_pBuffer;
}

void CMessageConnection::SetConnectionHub(counted_ptr<CMessageConnectionHub> cpHub)
{
	__super::SetConnectionHub(cpHub.GetPointer());
}

CProtocolInstance* CMessageConnection::CreateProtocolInstance(GUID guidProtocol)
{
	return CreateProtocolInstance(CProtocol::FindProtocol(guidProtocol));
}

CProtocolInstance* CMessageConnection::CreateProtocolInstance(CProtocol* pProtocol)
{
	if (!pProtocol)
		return NULL;

	CProtocolInstance* pInstance = new CProtocolInstance(pProtocol, this);

	{
		Threading::CScopedLock lock(m_csProtocolInstances);
		m_ProtocolInstances.push_back(pInstance);
	}
	return pInstance;
}

void CMessageConnection::DestroyAllProtocolInstances()
{
	Threading::CScopedLock lock(m_csProtocolInstances);
	for (std::list<CProtocolInstance*>::iterator it = m_ProtocolInstances.begin(); it != m_ProtocolInstances.end(); ++it)
		delete *it;

	m_ProtocolInstances.clear();
}

void CMessageConnection::DestroyProtocolInstance(CProtocolInstance* pProtocolInstance)
{
	Threading::CScopedLock lock(m_csProtocolInstances);

	for (std::list<CProtocolInstance*>::iterator it = m_ProtocolInstances.begin(); it != m_ProtocolInstances.end(); ++it)
		if (*it == pProtocolInstance)
		{
			delete pProtocolInstance;
			m_ProtocolInstances.erase(it);
			break;
		}
}

void CMessageConnection::SendMessage(std::auto_ptr<CMessage> apMessage, CSocket::SocketFlags::Enum socketFlags)
{
	CMessageBuffer messageBuffer;
	apMessage->Serialize(messageBuffer);
	BYTE* pBuffer = messageBuffer.GetNormalizedBuffer();
	int nSize = *reinterpret_cast<int*>(pBuffer);
	__super::Send(pBuffer, nSize, socketFlags);
}

CProtocolInstance* CMessageConnection::FindProtocolInstance(GUID guidProtocolInstance)
{
	Threading::CScopedLock lock(m_csProtocolInstances);

	for (std::list<CProtocolInstance*>::iterator it = m_ProtocolInstances.begin(); it != m_ProtocolInstances.end(); ++it)
		if ((*it)->GetInstanceGuid() == guidProtocolInstance)
			return *it;

	return NULL;
}

void CMessageConnection::OnDisconnecting()
{
	DestroyAllProtocolInstances();

	__super::OnDisconnecting();
}

void CMessageConnection::OnReceive(const CIPEndPoint& remoteEndPoint, BYTE pBuffer[], int nSize)
{
	if (!m_pBuffer)
	{
		m_nBufferSize = nSize * 2;
		m_pBuffer = new BYTE[m_nBufferSize];
	}
	else
		if (nSize > m_nBufferSize - m_nUsedBufferSize)
		{
			m_nBufferSize = (m_nUsedBufferSize + nSize) * 2;

			BYTE* pTemp = new BYTE[m_nBufferSize];

			if (m_pCurrentMessage)
			{
				m_nUsedBufferSize = static_cast<int>((m_pBuffer + m_nUsedBufferSize) - m_pCurrentMessage);

				if (m_nUsedBufferSize)
					CopyMemory(pTemp, m_pCurrentMessage, m_nUsedBufferSize);

				m_pCurrentMessage = pTemp;
			}

			m_pBuffer = pTemp;
		}

	CopyMemory(m_pBuffer + m_nUsedBufferSize, pBuffer, nSize);
	m_nUsedBufferSize += nSize;

	if (!m_pCurrentMessage)
		m_pCurrentMessage = m_pBuffer;

	do
	{
		if (!m_nCurrentMessageSize)
			m_nCurrentMessageSize = *reinterpret_cast<unsigned*>(m_pCurrentMessage);

		int nCurrentMessageSizeNow = static_cast<int>((m_pBuffer + m_nUsedBufferSize) - m_pCurrentMessage);
		if (nCurrentMessageSizeNow < m_nCurrentMessageSize)
			break;
		
		CMessage::Header* pHeader = reinterpret_cast<CMessage::Header*>(m_pCurrentMessage);

		GUID guidMessage = pHeader->networkRepresentation.guidMessage;

		std::auto_ptr<CMessage> apMessage(CreateStandardMessage(guidMessage));				// Create standard messages
		if (!apMessage.get())
			apMessage = CreateMessage(guidMessage);

		if (apMessage.get())
		{
			apMessage->SetRemoteEndPoint(remoteEndPoint);

			CMessageBuffer messageBuffer(m_pCurrentMessage);

			try
			{
				apMessage->Deserialize(messageBuffer);

				GUID guidProtocol = apMessage->GetProtocolGuid();
				if (guidProtocol != GUID_NULL)
				{
					CProtocolInstance* pInstance = NULL;
					if (apMessage->GetMessageGuid() == __uuidof(CBeginMessage))
					{
						CProtocol* pProtocol = CProtocol::FindProtocol(guidProtocol);
						if (pProtocol)
						{
							Threading::CScopedLock lock(m_csProtocolInstances);
							m_ProtocolInstances.push_back(new CProtocolInstance(pProtocol, this, apMessage));
						}
						else
						{
							LOG_WARNING(_T("Unknown protocol: %s."), Guid::ToString(apMessage->GetProtocolGuid()));
							//ATLASSERT(false);

							// TODO: reply abort?
						}
					}
					else
					{
						pInstance = FindProtocolInstance(apMessage->GetProtocolInstanceGuid());

						if (pInstance)
							pInstance->ReceiveMessage(apMessage);
						else
						{
							LOG_WARNING(_T("Unknown protocol instance: %s."), Guid::ToString(apMessage->GetProtocolInstanceGuid()));
							//ATLASSERT(false);

							// TODO: reply abort?
						}
					}
				}
				else
					OnMessage(apMessage.get(), NULL);
			}
			catch (Exception::CInvalidMessageException& exception)
			{
				exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
				ATLASSERT(false);
			}
		}
		else
		{
			LOG_ERROR(_T("Message construction failed: %s."), Guid::ToString(guidMessage));
			ATLASSERT(false);
		}
		
		m_pCurrentMessage += m_nCurrentMessageSize;		// Prepare for the next message
		m_nCurrentMessageSize = 0;

	} while (m_pBuffer + m_nUsedBufferSize > m_pCurrentMessage);
}

std::auto_ptr<CMessage> CMessageConnection::CreateStandardMessage(GUID guidMessage)
{
	if (guidMessage == __uuidof(CBeginMessage))
		return std::auto_ptr<CMessage>(new CBeginMessage);

	if (guidMessage == __uuidof(CEndMessage))
		return std::auto_ptr<CMessage>(new CEndMessage);

	if (guidMessage == __uuidof(CAbortMessage))
		return std::auto_ptr<CMessage>(new CAbortMessage);

	return std::auto_ptr<CMessage>();
}

//_____________________________________________________________________________
//

void CConnectionHub::RegisterConnection(counted_ptr<CConnection> cpConnection)
{
	Threading::CScopedLock lock(m_csConnections);
	m_Connections.insert(cpConnection);
}

void CConnectionHub::UnregisterConnection(counted_ptr<CConnection> cpConnection)
{
	Threading::CScopedLock lock(m_csConnections);
	m_Connections.erase(cpConnection);
}

void CConnectionHub::GetConnections(ConnectionSet& connections)
{
	Threading::CScopedLock lock(m_csConnections);
	connections.insert(m_Connections.begin(), m_Connections.end());
}

int CConnectionHub::GetSize()
{
	Threading::CScopedLock lock(m_csConnections);
	return static_cast<int>(m_Connections.size());
}

void CConnectionHub::Send(BYTE buffer[], int nSize, CSocket::SocketFlags::Enum socketFlags)
{
	Threading::CScopedLock lock(m_csConnections);
	for (ConnectionSet::iterator it = m_Connections.begin(); it != m_Connections.end(); ++it)
		(*it)->Send(buffer, nSize, socketFlags);
}

void CConnectionHub::Send(BYTE buffer[], int nOffset, int nSize, CSocket::SocketFlags::Enum socketFlags)
{
	Threading::CScopedLock lock(m_csConnections);
	for (ConnectionSet::iterator it = m_Connections.begin(); it != m_Connections.end(); ++it)
		(*it)->Send(buffer, nOffset, nSize, socketFlags);
}

void CConnectionHub::StopAllConnections()
{
	ConnectionSet connections;
	GetConnections(connections);

	for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
	{
		(*it)->Stop();
		(*it)->Join();
	}

#ifdef _DEBUG
	{
		Threading::CScopedLock lock(m_csConnections);
		ATLASSERT(!m_Connections.size());
	}
#endif
}

//_____________________________________________________________________________
//

void CMessageConnectionHub::SendMessage(std::auto_ptr<CMessage> apMessage, CSocket::SocketFlags::Enum socketFlags)
{
	Threading::CScopedLock lock(m_csConnections);

	CMessageBuffer messageBuffer;
	apMessage->Serialize(messageBuffer);
	BYTE* pBuffer = messageBuffer.GetNormalizedBuffer();
	int nSize = *reinterpret_cast<int*>(pBuffer);

	__super::Send(pBuffer, nSize, socketFlags);
}

/* Deprecated
Threading::CCriticalSection	CConnectionManager::s_csConnections;
std::set<CConnection*>		CConnectionManager::s_Connections;

void CConnectionManager::StopAllConnections()
{
	std::set<CConnection*> connections;
	{
		Threading::CScopedLock lock(s_csConnections);
		connections.insert(s_Connections.begin(), s_Connections.end());
	}

	for (std::set<CConnection*>::iterator it = connections.begin(); it != connections.end(); ++it)
		(*it)->Stop();
}
*/

//_____________________________________________________________________________
//

DWORD CAcceptor::Run(Threading::CAutoResetEvent& eventStopping)
{
	/*	Moved to constructor so that the server socket is avaiable before calling CThread::Start().
	try
	{
		m_cpServerSocket->Bind(m_ListeningEndPoint);
	}
	catch(Exception::CSocketException& exception)
	{
		if (exception.GetErrorCode() != WSAEADDRINUSE)
			throw;
z
		return exception.GetErrorCode();
	}
	*/

	m_cpServerSocket->Listen();

	HANDLE WaitHandles[] = { eventStopping.GetHandle(), m_eventReady.GetHandle() };

	counted_ptr<CAsyncAcceptThread> cpAsyncAcceptThread;
	do
	{
		if (Threading::CEvent::WaitAny(WaitHandles, ARRAY_SIZE(WaitHandles)) == WAIT_OBJECT_0)
		{
			if (cpAsyncAcceptThread != NULL)
				CSocket::CancelAccept(cpAsyncAcceptThread);
			break;
		}

		try
		{
			cpAsyncAcceptThread = m_cpServerSocket->Accept(CSocket::AcceptCallback(this, &CAcceptor::OnAccept));
		}
		catch(Exception::CRecoverableException& exception)
		{
			exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		}
		
	} while (true);

	try
	{
		m_cpServerSocket->Shutdown();
		m_cpServerSocket->Close();
	}
	catch(Exception::CSocketException&)
	{
	}

	return 0;
}

CConnection* CAcceptor::CreateConnection(counted_ptr<CSocket> cpAcceptedSocket)
{
	return m_CreateConnectionCallback(cpAcceptedSocket);
}

}	// namespace Networking
}	// namespace Epoch