#include "stdafx.h"

#define new DEBUG_NEW

#define REG_SETTINGS_PORT						_T("Port")
#define REG_SETTINGS_USER_NAME					_T("UserName")
#define REG_SETTINGS_ALLOW_CONN					_T("AllowConnections")
#define REG_SETTINGS_MAX_CONN					_T("MaxConnections")
#define REG_SETTINGS_ANNOUNCE_NEW_CONN			_T("AnnounceNewConnections")
#define REG_SETTINGS_ANNOUNCE_DISCONNECT		_T("AnnounceDisconnect")
#define REG_SETTINGS_LAST_IP					_T("LastIP")
#define REG_SETTINGS_LAST_PORT					_T("LastPort")

//_____________________________________________________________________________
//

class __declspec(uuid("{A03709EB-493D-41f0-8783-2E2828630752}"))
	CChatMessage : public CMessage
{
public:
	CChatMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CChatMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_strUserName);
		buffer.Add(m_strText);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_strText);
		buffer.Remove(m_strUserName);
		__super::Deserialize(buffer);
	}

	CAtlString	m_strText;
	CAtlString	m_strUserName;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{26EAA9CA-B017-47ae-96CA-60DBD4EA4ECA}"))
	CUserInfoMessage : public CMessage
{
public:
	CUserInfoMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CUserInfoMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_strUserName);
		buffer.Add(m_dwForeignVersionMS);
		buffer.Add(m_dwForeignVersionLS);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_dwForeignVersionLS);
		buffer.Remove(m_dwForeignVersionMS);
		buffer.Remove(m_strUserName);
		__super::Deserialize(buffer);
	}

	CAtlString	m_strUserName;
	DWORD		m_dwForeignVersionMS;
	DWORD		m_dwForeignVersionLS;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{D34D0105-F82B-4bc7-95A7-9733949C073A}"))
	CGameRequestMessage : public CMessage
{
public:
	CGameRequestMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameRequestMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_nStartPreference);
		buffer.Add(m_nRandom);
		buffer.Add(m_uSeed);
		buffer.Add(m_strDeckEntries);
		buffer.Add(m_bMulligan);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_bMulligan);
		buffer.Remove(m_strDeckEntries);
		buffer.Remove(m_uSeed);
		buffer.Remove(m_nRandom);
		buffer.Remove(m_nStartPreference);
		__super::Deserialize(buffer);
	}

	int			m_nStartPreference;
	int			m_nRandom;
	unsigned	m_uSeed;
	CAtlString	m_strDeckEntries;
	BOOL		m_bMulligan;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{DD37B40D-F212-4a4d-847A-66B9C614C393}"))
	CGameRequestRejectedMessage : public CMessage
{
public:
	CGameRequestRejectedMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameRequestRejectedMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class __declspec(uuid("{40FD2D90-BF7B-4ac7-B577-8BB908ABFAE8}"))
	CGameReadyMessage : public CMessage
{
public:
	CGameReadyMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameReadyMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class __declspec(uuid("{CD8A2D75-B3BE-4eab-8861-8656CD4942BA}"))
	CGameCancelRequestMessage : public CMessage
{
public:
	CGameCancelRequestMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameCancelRequestMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class __declspec(uuid("{CED6239A-4C12-48e3-8714-66F547A7C50C}"))
	CGameSelectActionMessage : public CMessage
{
public:
	CGameSelectActionMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameSelectActionMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_guidChecksum);
		buffer.Add(m_nSelectedMove);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_nSelectedMove);
		buffer.Remove(m_guidChecksum);
		__super::Deserialize(buffer);
	}

	GUID	m_guidChecksum;
	int		m_nSelectedMove;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{31D41C4C-967B-49cd-B82C-001764D0FA56}"))
	CGameSelectCardsMessage : public CMessage
{
public:
	CGameSelectCardsMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameSelectCardsMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_guidChecksum);
		buffer.Add(m_strSelectedCards);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_strSelectedCards);
		buffer.Remove(m_guidChecksum);
		__super::Deserialize(buffer);
	}

	GUID		m_guidChecksum;
	CAtlString	m_strSelectedCards;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{2753CA92-51EE-420f-9CEA-4866B119B589}"))
	CGameOrderCardsMessage : public CMessage
{
public:
	CGameOrderCardsMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameOrderCardsMessage), pProtocolInstance)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_guidChecksum);
		buffer.Add(m_strOrderedCards);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_strOrderedCards);
		buffer.Remove(m_guidChecksum);
		__super::Deserialize(buffer);
	}

	GUID		m_guidChecksum;
	CAtlString	m_strOrderedCards;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{0DCD0154-B01F-4f10-8A2B-58E4DD4D0A0A}"))
	CGameConcededMessage : public CMessage
{
public:
	CGameConcededMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CGameConcededMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class __declspec(uuid("{C748A14C-76BE-41a6-8DE4-0E00884590DC}"))
	CFileInfoMessage : public CMessage
{
public:
	CFileInfoMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CFileInfoMessage), pProtocolInstance)
		, m_ullFileSize(0)
		, m_nFileType(0)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_strFileName);
		buffer.Add(m_ullFileSize);
		buffer.Add(m_nFileType);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_nFileType);
		buffer.Remove(m_ullFileSize);
		buffer.Remove(m_strFileName);
		__super::Deserialize(buffer);
	}

	CAtlString			m_strFileName;
	unsigned __int64	m_ullFileSize;
	int					m_nFileType;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{1FE7D008-BD50-4234-AC0F-F01710C27331}"))
	CFileFragmentMessage : public CMessage
{
public:
	CFileFragmentMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CFileFragmentMessage), pProtocolInstance)
		, m_nSize(0)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_nSize, m_Buffer);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_nSize, m_Buffer);
		__super::Deserialize(buffer);
	}

	BYTE	m_Buffer[4096];
	int		m_nSize;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{D9C205E4-8D46-46fc-849D-27C6455FB880}"))
	CFileChecksumMessage : public CMessage
{
public:
	CFileChecksumMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CFileChecksumMessage), pProtocolInstance)
		, m_guidChecksum(GUID_NULL)
	{}

	virtual void Serialize(CMessageBuffer& buffer)
	{
		__super::Serialize(buffer);
		buffer.Add(m_guidChecksum);
	}

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		buffer.Remove(m_guidChecksum);
		__super::Deserialize(buffer);
	}

	GUID	m_guidChecksum;
};

//_____________________________________________________________________________
//

class __declspec(uuid("{EC218FFE-07BA-44a2-A9E6-B0FEAFD3653D}"))
	CFileReceivedMessage : public CMessage
{
public:
	CFileReceivedMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CFileReceivedMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class __declspec(uuid("{1D078632-DBAA-45eb-83BA-B86E020BB940}")) 
	CFileTransferProtocol : public CProtocol
{
public:
	CFileTransferProtocol()
		: CProtocol(__uuidof(CFileTransferProtocol))
	{
		counted_ptr<CProtocolNode> cpFragmentNode = counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CFileFragmentMessage), CProtocolNode::Direction::Outgoing, 1000));

		AddNode(counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CFileInfoMessage), CProtocolNode::Direction::Outgoing)))
			->AppendNode(cpFragmentNode)
			->AppendNode(counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CFileChecksumMessage), CProtocolNode::Direction::Outgoing)))
			->AppendNode(counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CFileReceivedMessage), CProtocolNode::Direction::Incoming)))
			->AppendEndNode(CProtocolNode::Direction::Outgoing);

		cpFragmentNode->AppendNode(cpFragmentNode);
	}

protected:
	virtual void OnBegin(CProtocolInstance* pProtocolInstance)
	{
		LOG_DEBUG(_T("On File Transfer Protocol Begin."));		
	}

	virtual void OnEnd(CProtocolInstance* pProtocolInstance)
	{
		LOG_DEBUG(_T("On File Transfer Protocol End."));
	}

	virtual void OnAbort(CProtocolInstance* pProtocolInstance, bool bLocal, CAbortMessage::AbortReason::Enum reason, int nCode)
	{
		LOG_DEBUG(_T("On File Transfer Protocol Abort: Local? %d, Reason: %s, Code: %08x."), bLocal, CAbortMessage::ToString(reason), nCode);
	}
};

//_____________________________________________________________________________
//

CConnection* CMyAcceptor::CreateConnection(counted_ptr<CSocket> cpAcceptedSocket)
{
	if (!m_pNetManager->GetAllowConnections() ||
		(m_cpHub->GetSize() >= m_pNetManager->GetMaxConnections()))
		return NULL;

	CConnection* pNewConnection = __super::CreateConnection(cpAcceptedSocket);
	dynamic_cast<CRemoteGameUser*>(pNewConnection)->SetConnectionHub(m_cpHub);
	dynamic_cast<CRemoteGameUser*>(pNewConnection)->SetNetManager(m_pNetManager);
	return pNewConnection;
}

//_____________________________________________________________________________
//

int CRemoteGameUser::s_nNextID = 0;

std::auto_ptr<CMessage> CRemoteGameUser::CreateMessage(GUID guidMessage)
{
	if (guidMessage == __uuidof(CChatMessage))
		return std::auto_ptr<CMessage>(new CChatMessage);
	else
	if (guidMessage == __uuidof(CUserInfoMessage))
		return std::auto_ptr<CMessage>(new CUserInfoMessage);
	else
	if (guidMessage == __uuidof(CGameRequestMessage))
		return std::auto_ptr<CMessage>(new CGameRequestMessage);
	else
	if (guidMessage == __uuidof(CGameRequestRejectedMessage))
		return std::auto_ptr<CMessage>(new CGameRequestRejectedMessage);
	else
	if (guidMessage == __uuidof(CGameReadyMessage))
		return std::auto_ptr<CMessage>(new CGameReadyMessage);
	else
	if (guidMessage == __uuidof(CGameCancelRequestMessage))
		return std::auto_ptr<CMessage>(new CGameCancelRequestMessage);
	else
	if (guidMessage == __uuidof(CGameSelectActionMessage))
		return std::auto_ptr<CMessage>(new CGameSelectActionMessage);
	else
	if (guidMessage == __uuidof(CGameSelectCardsMessage))
		return std::auto_ptr<CMessage>(new CGameSelectCardsMessage);
	else
	if (guidMessage == __uuidof(CGameOrderCardsMessage))
		return std::auto_ptr<CMessage>(new CGameOrderCardsMessage);
	else
	if (guidMessage == __uuidof(CGameConcededMessage))
		return std::auto_ptr<CMessage>(new CGameConcededMessage);
	else
	if (guidMessage == __uuidof(CFileInfoMessage))
		return std::auto_ptr<CMessage>(new CFileInfoMessage);
	else
		if (guidMessage == __uuidof(CFileFragmentMessage))
		return std::auto_ptr<CMessage>(new CFileFragmentMessage);
	else
		if (guidMessage == __uuidof(CFileChecksumMessage))
		return std::auto_ptr<CMessage>(new CFileChecksumMessage);
	else
		if (guidMessage == __uuidof(CFileReceivedMessage))
		return std::auto_ptr<CMessage>(new CFileReceivedMessage);

	return std::auto_ptr<CMessage>();	
}

void CRemoteGameUser::SetNetManager(CNetManager* pNetManager)
{
	m_pNetManager = pNetManager;
	m_pNetManager->GetVersionInfo(m_dwVersionMS, m_dwVersionLS);
}

int CRemoteGameUser::SendChatMessage(LPCTSTR strText)
{
	try
	{
		std::auto_ptr<CMessage> apChatMessage(new CChatMessage);
		static_cast<CChatMessage*>(apChatMessage.get())->m_strUserName = m_pNetManager->GetUserName();
		static_cast<CChatMessage*>(apChatMessage.get())->m_strText = strText;
		SendMessage(apChatMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendGameRequest(CString strDeckEntries, int nStartPreference,
									 int& nRandom,
									 unsigned& uSeed,
									 BOOL bMulligan)
{
	Threading::CScopedLock lock(m_pNetManager->m_csGameRequests);

	if (m_pNetManager->m_nAcceptGameRequestFrom != -1)
		return ERROR_INVALID_STATE;				// Already waiting for a remote user to reply an existing game request

	// Send request

	try
	{
		nRandom = rand();

		if (!uSeed)
			uSeed = (unsigned)time(NULL);

		std::auto_ptr<CMessage> apGameRequestMessage(new CGameRequestMessage);
		static_cast<CGameRequestMessage*>(apGameRequestMessage.get())->m_strDeckEntries = strDeckEntries;
		static_cast<CGameRequestMessage*>(apGameRequestMessage.get())->m_nStartPreference = nStartPreference;
		static_cast<CGameRequestMessage*>(apGameRequestMessage.get())->m_nRandom = nRandom;
		static_cast<CGameRequestMessage*>(apGameRequestMessage.get())->m_uSeed = uSeed;
		static_cast<CGameRequestMessage*>(apGameRequestMessage.get())->m_bMulligan = bMulligan;
		SendMessage(apGameRequestMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	// Reset game events

	ResetGameReadyEvent();
	ResetConcededEvent();

	// Clean up pending requests

	for (std::vector<CNetManager::GameRequestEntry>::iterator it = m_pNetManager->m_GameRequests.begin();
		it != m_pNetManager->m_GameRequests.end(); ++it)
	{
		if (it->cpConnection.GetPointer() == this)
		{
			// Notify request granted

			if (m_pNetManager->m_hwndSendGameRequestGranted)
			{
				CNetManager::GameRequestEntry* pEntry = new CNetManager::GameRequestEntry;
				*pEntry = *it;

				PostMessage(m_pNetManager->m_hwndSendGameRequestGranted, WM_APP_NET_GAME_REQUEST_GRANTED,
					reinterpret_cast<WPARAM>(pEntry), 0);
			}
		}
		else
		{
			// Send rejected to others

			try
			{
				it->cpConnection->SendMessage(
					std::auto_ptr<CGameRequestRejectedMessage>(new CGameRequestRejectedMessage));
			}
			catch (CSocketException& exception)
			{
				exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
			}
		}
	}

	m_pNetManager->m_GameRequests.clear();

	// Wait for this user to reply

	m_pNetManager->m_nAcceptGameRequestFrom = m_nRemoteUserID;

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendCancelGameRequest()
{
	try
	{
		SendMessage(std::auto_ptr<CGameCancelRequestMessage>(new CGameCancelRequestMessage));
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendGameReady()		// Local player ready
{
	try
	{
		SendMessage(std::auto_ptr<CGameReadyMessage>(new CGameReadyMessage));
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

bool CRemoteGameUser::WaitForGameReady(HANDLE hExitEvent)
{
	HANDLE Events[] = { hExitEvent, m_eventGameReady.GetHandle() };

	DWORD dwResult = WaitForMultipleObjects(ARRAY_SIZE(Events), Events, FALSE, INFINITE);
	if (dwResult == WAIT_OBJECT_0)
		return FALSE;

	return true;
}

int CRemoteGameUser::SendConceded()			// Local player conceded
{
	try
	{
		SendMessage(std::auto_ptr<CGameConcededMessage>(new CGameConcededMessage));
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendSelectAction(int nSelectedAction, GUID Checksum)
{
	try
	{
		std::auto_ptr<CMessage> apSelectActionMessage(new CGameSelectActionMessage);
		static_cast<CGameSelectActionMessage*>(apSelectActionMessage.get())->m_guidChecksum = Checksum;
		static_cast<CGameSelectActionMessage*>(apSelectActionMessage.get())->m_nSelectedMove = nSelectedAction;
		SendMessage(apSelectActionMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendSelectCard(LPCTSTR strSelectedCards, GUID Checksum)
{
	try
	{
		std::auto_ptr<CMessage> apSelectCardsMessage(new CGameSelectCardsMessage);
		static_cast<CGameSelectCardsMessage*>(apSelectCardsMessage.get())->m_guidChecksum = Checksum;
		static_cast<CGameSelectCardsMessage*>(apSelectCardsMessage.get())->m_strSelectedCards = strSelectedCards;
		SendMessage(apSelectCardsMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendOrderCard(LPCTSTR strOrderedCards, GUID Checksum)
{
	try
	{
		std::auto_ptr<CMessage> apOrderCardsMessage(new CGameOrderCardsMessage);
		static_cast<CGameOrderCardsMessage*>(apOrderCardsMessage.get())->m_guidChecksum = Checksum;
		static_cast<CGameOrderCardsMessage*>(apOrderCardsMessage.get())->m_strOrderedCards = strOrderedCards;
		SendMessage(apOrderCardsMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

int CRemoteGameUser::SendFile(LPCTSTR strFilePath, FileType fileType)
{
	class CSendFileThread : public Threading::CThread
	{
	public:
		CSendFileThread(CRemoteGameUser* pConnection, FILE* pFile, LPCTSTR strFilePath, FileType fileType)
			: m_cpConnection(pConnection)
			, m_pFile(pFile)
			, m_strFilePath(strFilePath)
			, m_FileType(fileType)
		{
		}

		virtual ~CSendFileThread()
		{
			LOG_INFORMATION(_T("Send file thread exiting"));
		}

	protected:
		virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
		{
			CProtocolInstance* pProtocolInstance = m_cpConnection->CreateProtocolInstance(
				CProtocol::FindProtocol(__uuidof(CFileTransferProtocol)));

			LOG_INFORMATION(_T("Sending file: %s."), m_strFilePath);

			// Send file info

			std::auto_ptr<CMessage> apInfoMessage = std::auto_ptr<CFileInfoMessage>(new CFileInfoMessage(pProtocolInstance));
			static_cast<CFileInfoMessage*>(apInfoMessage.get())->m_strFileName = PathStripPath(m_strFilePath);
			static_cast<CFileInfoMessage*>(apInfoMessage.get())->m_ullFileSize = GetFileSize(m_strFilePath);
			static_cast<CFileInfoMessage*>(apInfoMessage.get())->m_nFileType = m_FileType;

			pProtocolInstance->SendMessage(apInfoMessage);

			// Send file fragments

			CMD5Checksum checksum;

			BYTE buffer[4096];
			size_t nRead = 0;
			while (nRead = fread(buffer, 1, ARRAY_SIZE(buffer), m_pFile))
			{
				if (eventStopping.Wait(0))
				{
					fclose(m_pFile);
					return 0;
				}

				LOG_DEBUG(_T("Sending %d bytes..."), nRead);

				std::auto_ptr<CMessage> apFragmentMessage = std::auto_ptr<CFileFragmentMessage>(new CFileFragmentMessage(pProtocolInstance));
				memcpy(static_cast<CFileFragmentMessage*>(apFragmentMessage.get())->m_Buffer, buffer, nRead);
				static_cast<CFileFragmentMessage*>(apFragmentMessage.get())->m_nSize = static_cast<int>(nRead);

				pProtocolInstance->SendMessage(apFragmentMessage);

				checksum.Update(buffer, static_cast<unsigned>(nRead));
			}

			fclose(m_pFile);

			// Send checksum

			std::auto_ptr<CMessage> apChecksumMessage = std::auto_ptr<CFileChecksumMessage>(new CFileChecksumMessage(pProtocolInstance));
			static_cast<CFileChecksumMessage*>(apChecksumMessage.get())->m_guidChecksum = checksum.GetFinalChecksum();
			LOG_INFORMATION(_T("File checksum: %s."), Guid::ToString(static_cast<CFileChecksumMessage*>(apChecksumMessage.get())->m_guidChecksum));
			pProtocolInstance->SendMessage(apChecksumMessage);

			return 0;
		}

		counted_ptr<CRemoteGameUser> m_cpConnection;
		FILE* m_pFile;
		CString m_strFilePath;
		FileType m_FileType;
	};

	if (!PathFileExists(strFilePath))
	{
		LOG_ERROR(_T("File not found: %s."), strFilePath);
		return ERROR_FILE_NOT_FOUND;
	}

	FILE* pFile = NULL;
	if (_tfopen_s(&pFile, strFilePath, _T("rb")))
	{
		int nError = GetLastError();
		LOG_ERROR(_T("Cannot open file for reading: %s."), GetErrorMessage(HRESULT_FROM_WIN32(nError)));
		return nError;
	}

	CSendFileThread* pThread = new CSendFileThread(this, pFile, strFilePath, fileType);
	pThread->Start();

	return ERROR_SUCCESS;
}

void CRemoteGameUser::OnConnected()
{
	__super::OnConnected();
	LOG_DEBUG(_T("OnConnect."));

	LOG_INFORMATION(_T("Connected to %s."), m_cpSocket->GetRemoteEndPoint().ToString());

	std::auto_ptr<CMessage> apUserInfoMessage(new CUserInfoMessage);
	static_cast<CUserInfoMessage*>(apUserInfoMessage.get())->m_strUserName = m_pNetManager->GetUserName();
	static_cast<CUserInfoMessage*>(apUserInfoMessage.get())->m_dwForeignVersionLS = m_dwVersionLS;
	static_cast<CUserInfoMessage*>(apUserInfoMessage.get())->m_dwForeignVersionMS = m_dwVersionMS;
	SendMessage(apUserInfoMessage);
}

void CRemoteGameUser::OnDisconnecting()
{
	LOG_DEBUG(_T("OnDisconnecting."));

	m_pNetManager->OnDisconnectedFrom(counted_ptr<CRemoteGameUser>(this, true));

	__super::OnDisconnecting();
}

void CRemoteGameUser::OnMessage(CMessage* pReceivedMessage, CProtocolInstance* pProtocolInstance) 
{
	LOG_DEBUG(_T("OnMessage: %s"), Guid::ToString(pReceivedMessage->GetMessageGuid()));	

	if (pReceivedMessage->GetMessageGuid() == __uuidof(CChatMessage))
	{
		CChatMessage* pMessage = reinterpret_cast<CChatMessage*>(pReceivedMessage);

		m_pNetManager->OnReceiveChatMessage(pMessage->m_strUserName, pMessage->m_strText);
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CUserInfoMessage))
	{
		CUserInfoMessage* pMessage = reinterpret_cast<CUserInfoMessage*>(pReceivedMessage);

		m_strRemoteUserName = pMessage->m_strUserName;

		if ((pMessage->m_dwForeignVersionLS != m_dwVersionLS) ||
			(pMessage->m_dwForeignVersionMS != m_dwVersionMS))
		{
			if (!m_bAccepted)
				m_pNetManager->OnIncorrectVersion(pMessage->m_dwForeignVersionMS, pMessage->m_dwForeignVersionLS);

			Stop();
			return;
		}
		
		if (m_bAccepted)
			m_pNetManager->OnConnectedBy(counted_ptr<CRemoteGameUser>(this, true));
		else
			m_pNetManager->OnConnectedTo(counted_ptr<CRemoteGameUser>(this, true));

		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameRequestMessage))
	{
		CGameRequestMessage* pMessage = reinterpret_cast<CGameRequestMessage*>(pReceivedMessage);

		Threading::CScopedLock lock(m_pNetManager->m_csGameRequests);

		if (!m_pGame && (m_pNetManager->m_nAcceptGameRequestFrom == -1))
		{
			// We haven't initiated any game request so just queue up this request

			CNetManager::GameRequestEntry Request;
			Request.cpConnection = counted_ptr<CRemoteGameUser>(this, true);
			Request.nStartPreference = pMessage->m_nStartPreference;
			Request.strDeckEntries = pMessage->m_strDeckEntries;
			Request.nRandom = pMessage->m_nRandom;
			Request.uSeed = pMessage->m_uSeed;
			Request.bMulligan = pMessage->m_bMulligan;

			// Replace any previous requests

			for (std::vector<CNetManager::GameRequestEntry>::iterator it = m_pNetManager->m_GameRequests.begin();
				it != m_pNetManager->m_GameRequests.end(); ++it)
				if (it->cpConnection.GetPointer() == this)
				{
					m_pNetManager->m_GameRequests.erase(it);
					break;
				}

			// Queue up request

			m_pNetManager->m_GameRequests.push_back(Request);

			if (m_pNetManager->m_hwndSendGameRequest)
			{
				CString* pstrRemoteUserName = new CString(m_strRemoteUserName);

				PostMessage(m_pNetManager->m_hwndSendGameRequest, WM_APP_NET_GAME_REQUEST,
					reinterpret_cast<WPARAM>(pstrRemoteUserName), m_nRemoteUserID);
			}
		}
		else
		if (!m_pGame && (m_pNetManager->m_nAcceptGameRequestFrom == m_nRemoteUserID))
		{
			ATLASSERT(!m_pNetManager->m_GameRequests.size());	// Should have cleaned up in SendGameRequest()

			// We have initiated the request and the request is granted from this remote user

			// Notify request granted

			if (m_pNetManager->m_hwndSendGameRequestGranted)
			{
				CNetManager::GameRequestEntry* pEntry = new CNetManager::GameRequestEntry;
				pEntry->cpConnection = counted_ptr<CRemoteGameUser>(this, true);
				pEntry->nStartPreference = pMessage->m_nStartPreference;
				pEntry->strDeckEntries = pMessage->m_strDeckEntries;
				pEntry->nRandom = pMessage->m_nRandom;
				pEntry->uSeed = pMessage->m_uSeed;					
				pEntry->bMulligan = pMessage->m_bMulligan;

				PostMessage(m_pNetManager->m_hwndSendGameRequestGranted, WM_APP_NET_GAME_REQUEST_GRANTED,
					reinterpret_cast<WPARAM>(pEntry), 0);
			}
		}
		else
		{
			ATLASSERT(!m_pNetManager->m_GameRequests.size());	// Should have cleaned up in SetAcceptRequestFrom()

			// Request rejected because we are waiting for user (m_nAcceptGameRequestFrom) to reply

			try
			{
				SendMessage(std::auto_ptr<CGameRequestRejectedMessage>(new CGameRequestRejectedMessage));
			}
			catch (CSocketException& exception)
			{
				exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
			}
		}

		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameRequestRejectedMessage))
	{
		CGameRequestRejectedMessage* pMessage = reinterpret_cast<CGameRequestRejectedMessage*>(pReceivedMessage);

		Threading::CScopedLock lock(m_pNetManager->m_csGameRequests);

		if (m_pNetManager->m_nAcceptGameRequestFrom == m_nRemoteUserID)
		{
			// Request rejected

			m_pNetManager->m_nAcceptGameRequestFrom = -1;

			if (m_pNetManager->m_hwndSendGameRequestRejected)
				PostMessage(m_pNetManager->m_hwndSendGameRequestRejected, WM_APP_NET_GAME_REQUEST_REJECTED, 0, 0);
		}

		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameCancelRequestMessage))
	{
		CGameCancelRequestMessage* pMessage = reinterpret_cast<CGameCancelRequestMessage*>(pReceivedMessage);

		Threading::CScopedLock lock(m_pNetManager->m_csGameRequests);

		if (m_pNetManager->m_nAcceptGameRequestFrom == -1)
		{
			// Remove request

			for (std::vector<CNetManager::GameRequestEntry>::iterator it = m_pNetManager->m_GameRequests.begin();
				it != m_pNetManager->m_GameRequests.end(); ++it)
				if (it->cpConnection.GetPointer() == this)
				{
					m_pNetManager->m_GameRequests.erase(it);

					if (m_pNetManager->m_hwndSendGameCancelRequest)
					{
						CString* pstrRemoteUserName = new CString(m_strRemoteUserName);

						PostMessage(m_pNetManager->m_hwndSendGameCancelRequest, WM_APP_NET_GAME_REQUEST_CANCELLED,
							reinterpret_cast<WPARAM>(pstrRemoteUserName), m_nRemoteUserID);
					}

					break;
				}
		}
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameReadyMessage))
	{
		SetGameReadyEvent();
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameConcededMessage))
	{
		SetConcededEvent();

		if (m_pNetManager->m_hwndSendGameConceded)
		{
			CString* pstrRemoteUserName = new CString(m_strRemoteUserName);

			PostMessage(m_pNetManager->m_hwndSendGameConceded, WM_APP_NET_GAME_CONCEDED,
				reinterpret_cast<WPARAM>(pstrRemoteUserName), m_nRemoteUserID);
		}
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameSelectActionMessage))
	{
		if (m_pGame)
		{
			CGameSelectActionMessage* pMessage = reinterpret_cast<CGameSelectActionMessage*>(pReceivedMessage);

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(m_pGame->GetPlayer(i)->GetInterface());
				if (pNetInterface && pNetInterface->GetRemoteUserID() == m_nRemoteUserID)
				{
					pNetInterface->EnqueueActionSelection(pMessage->m_nSelectedMove, pMessage->m_guidChecksum);
					break;
				}
			}
		}
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameSelectCardsMessage))
	{
		if (m_pGame)
		{
			CGameSelectCardsMessage* pMessage = reinterpret_cast<CGameSelectCardsMessage*>(pReceivedMessage);

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(m_pGame->GetPlayer(i)->GetInterface());
				if (pNetInterface && pNetInterface->GetRemoteUserID() == m_nRemoteUserID)
				{
					pNetInterface->EnqueueCardSelection(pMessage->m_strSelectedCards, pMessage->m_guidChecksum);
					break;
				}
			}
		}
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CGameOrderCardsMessage))
	{
		if (m_pGame)
		{
			CGameOrderCardsMessage* pMessage = reinterpret_cast<CGameOrderCardsMessage*>(pReceivedMessage);

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(m_pGame->GetPlayer(i)->GetInterface());
				if (pNetInterface && pNetInterface->GetRemoteUserID() == m_nRemoteUserID)
				{
					pNetInterface->EnqueueCardOrdering(pMessage->m_strOrderedCards, pMessage->m_guidChecksum);
					break;
				}
			}
		}
		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CFileInfoMessage))
	{
		CFileInfoMessage* pMessage = reinterpret_cast<CFileInfoMessage*>(pReceivedMessage);

		LOG_INFORMATION(_T("File name: %s."), pMessage->m_strFileName);
		LOG_INFORMATION(_T("File size: %I64d."), pMessage->m_ullFileSize);
		LOG_INFORMATION(_T("File type: %d"), pMessage->m_nFileType);

		CAtlString strFileName = pMessage->m_strFileName;
		CAtlString strReceivingFilePath;
		
		if (pMessage->m_nFileType == FILETYPE_AVATAR)
		{
			strReceivingFilePath = g_pCoreApp->GetAppDataPath();
			strReceivingFilePath += _T("\\RemoteAvatar");
			strReceivingFilePath += PathFindExtension(strFileName);
		}
		else
			do
			{
				strReceivingFilePath = g_pCoreApp->GetAppDataPath();
				strReceivingFilePath += _T("\\") + strFileName;
				if (!PathFileExists(strReceivingFilePath))
					break;

				strFileName = _T("Copy of ") + strFileName;
				
			} while (true);

		FILE* pFile = NULL;
		if (_tfopen_s(&pFile, strReceivingFilePath, _T("wb")))
		{
			HRESULT hr = AtlHresultFromLastError();
			LOG_ERROR(_T("Cannot open file %s for writing: %s."), strReceivingFilePath, GetErrorMessage(hr));
			pProtocolInstance->SendAbortMessage(CAbortMessage::AbortReason::User, hr);
			return;
		}

		LOG_INFORMATION(_T("Writing to file: %s."), strReceivingFilePath);

		SendFileContext* pContext = new SendFileContext;

		pContext->pFile = pFile;
		pContext->strFilePath = strReceivingFilePath;
		pContext->fileType = (FileType)pMessage->m_nFileType;

		pProtocolInstance->SetContext(pContext);
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CFileFragmentMessage))
	{
		CFileFragmentMessage* pMessage = reinterpret_cast<CFileFragmentMessage*>(pReceivedMessage);

		LOG_DEBUG(_T("File fragment size: %d."), pMessage->m_nSize);

		SendFileContext* pContext = reinterpret_cast<SendFileContext*>(pProtocolInstance->GetContext());

		if (!pContext || static_cast<int>(fwrite(pMessage->m_Buffer, 1, pMessage->m_nSize, pContext->pFile)) < pMessage->m_nSize)
		{
			HRESULT hr = AtlHresultFromLastError();
			LOG_ERROR(_T("Writing failed: %s."), GetErrorMessage(hr));
			pProtocolInstance->SendAbortMessage(CAbortMessage::AbortReason::User, hr);
			return;
		}			
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CFileChecksumMessage))
	{
		CFileChecksumMessage* pMessage = reinterpret_cast<CFileChecksumMessage*>(pReceivedMessage);

		LOG_DEBUG(_T("File received."));
		LOG_INFORMATION(_T("File checksum: %s."), Guid::ToString(pMessage->m_guidChecksum));

		SendFileContext* pContext = reinterpret_cast<SendFileContext*>(pProtocolInstance->GetContext());

		BOOL bSucceeded = FALSE;
		if (pContext)
		{
			fclose(pContext->pFile);
			GUID guidChecksum = CMD5Checksum::GetMD5FromFile(pContext->strFilePath);

			bSucceeded = (guidChecksum == pMessage->m_guidChecksum);

			LOG_INFORMATION(_T("Received file checksum: %s (%s)."), Guid::ToString(guidChecksum),
				bSucceeded ? _T("Succeeded") : _T("FAILED"));
		}
		
		pProtocolInstance->SendMessage(std::auto_ptr<CFileReceivedMessage>(new CFileReceivedMessage(pProtocolInstance)));			

		if (bSucceeded)
		{
			if (pContext->fileType == FILETYPE_AVATAR)
			{
				m_AvatarBitmap.Load(pContext->strFilePath);
				m_AvatarBitmap.Refresh();
			}

			if (m_pNetManager->m_hwndSendFileReceived)
			{
				CNetManager::FileReceivedData* pData = new CNetManager::FileReceivedData;
				pData->fileType = pContext->fileType;
				pData->strFilePath = pContext->strFilePath;
				pData->nFromRemoteUserID = m_nRemoteUserID;

				PostMessage(m_pNetManager->m_hwndSendFileReceived, WM_APP_NET_FILE_RECEIVED, (WPARAM)pData, 0);
			}
		}

		if (pContext)
			delete pContext;

		return;
	}
	else
	if (pReceivedMessage->GetMessageGuid() == __uuidof(CFileReceivedMessage))
	{
		LOG_INFORMATION(_T("File reception acknowledged."));
		return;
	}
}

//_____________________________________________________________________________
//

CNetManager::CNetManager()
	: m_nMaxConnections(s_nDefaultMaxConnections)
	, m_bAllowConnections(true)
	, m_bAnnounceNewConnections(true)
	, m_bAnnounceDisconnect(true)
	, m_hwndSendChatMessage(NULL)
	, m_hwndSendGameRequestGranted(NULL)
	, m_hwndSendGameRequestRejected(NULL)
	, m_hwndSendGameRequest(NULL)
	, m_hwndSendGameCancelRequest(NULL)
	, m_hwndSendGameConceded(NULL)
	, m_cpHub(counted_ptr<CMessageConnectionHub>(new CMessageConnectionHub))
	, m_ListeningEndPoint(CIPAddress::Any, s_nDefaultPort)
	, m_nAcceptGameRequestFrom(-1)		// Everyone
	, m_hwndUPnPConfigurationResult(NULL)
	, m_hwndSendMessage(NULL)
	, m_hwndSendFileReceived(NULL)
	, m_dwVersionMS(0)
	, m_dwVersionLS(0)
{
	// Get network settings from registry

	m_ListeningEndPoint.SetPort(g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_PORT, s_nDefaultPort));
	m_strUserName = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_USER_NAME, _T("User"));
	m_nMaxConnections = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MAX_CONN, s_nDefaultMaxConnections);
	m_bAllowConnections = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ALLOW_CONN, 1) ? TRUE : FALSE;
	m_bAnnounceNewConnections = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANNOUNCE_NEW_CONN, 1) ? TRUE : FALSE;
	m_bAnnounceDisconnect = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANNOUNCE_DISCONNECT, 1) ? TRUE : FALSE;
	m_LastRemoteEndPoint.SetIPAddress(CIPAddress(g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LAST_IP, 0)));
	m_LastRemoteEndPoint.SetPort(g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LAST_PORT, s_nDefaultPort));
}

CNetManager::~CNetManager()
{
	// Stop listening

	if (m_cpAcceptor != NULL)
	{
		m_cpAcceptor->Stop();
		m_cpAcceptor->Join();
	}

	DisconnectAll();

	if (m_apPortMapper.get())
		m_apPortMapper->Disconnect();
}

void CNetManager::Start()
{
	// Start listening

	try
	{
		m_cpAcceptor = counted_ptr<CMyAcceptor>(new CMyAcceptor(m_ListeningEndPoint, m_cpHub, this));
	}
	catch(Exception::CSocketException& exception)
	{
		if (m_hwndSendMessage)
		{
			CString* pstrMessage = new CString;
			pstrMessage->Format(_T("Could not listen on port %d: %s"), m_ListeningEndPoint.GetPort(), exception.GetMessage());
			PostMessage(m_hwndSendMessage, WM_APP_NET_MESSAGE,
				reinterpret_cast<WPARAM>(pstrMessage), MB_OK | MB_ICONEXCLAMATION);		
		}
		return;
	}

	CProtocol::AddProtocol(std::auto_ptr<CProtocol>(new CFileTransferProtocol));

	m_cpAcceptor->Start();
}

void CNetManager::SetUserName(LPCTSTR strUserName)
{
	m_strUserName = strUserName;

	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_USER_NAME, m_strUserName);
}

void CNetManager::SetVersionInfo(DWORD dwVersionMS, DWORD dwVersionLS)
{
	m_dwVersionMS = dwVersionMS;
	m_dwVersionLS = dwVersionLS;
}

void CNetManager::GetVersionInfo(DWORD& dwVersionMS, DWORD& dwVersionLS)
{
	dwVersionMS = m_dwVersionMS;
	dwVersionLS = m_dwVersionLS;
}

void CNetManager::SetAllowConnections(bool bAllowConnections)
{
	if (m_bAllowConnections == bAllowConnections)
		return;

	m_bAllowConnections = bAllowConnections;

	if (!m_bAllowConnections)
		m_cpHub->StopAllConnections();

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ALLOW_CONN, m_bAllowConnections ? 1 : 0);
}

void CNetManager::SetMaxConnections(int nMaxConnections)
{
	m_nMaxConnections = nMaxConnections;

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MAX_CONN, m_nMaxConnections);	
}

void CNetManager::SetAnnounceNewConnections(bool bAnnounce)
{
	m_bAnnounceNewConnections = bAnnounce;

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANNOUNCE_NEW_CONN, m_bAnnounceNewConnections ? 1 : 0);
}

void CNetManager::SetAnnounceDisconnect(bool bAnnounce)
{
	m_bAnnounceDisconnect = bAnnounce;

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANNOUNCE_DISCONNECT, m_bAnnounceDisconnect ? 1 : 0);
}

void CNetManager::SetPort(int nPort)
{
	m_ListeningEndPoint.SetPort(nPort);

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_PORT, nPort);
}

void CNetManager::ConfigureUPnP()
{
/*
//#ifndef _MY_DEBUG // Don't know why the InvokeAction call will fail in debug mode but not in release and not in 'start without debugging'.
// Seems like this bug has been fixed in the latest VS2005 and April 2005 SDK

	m_apPortMapper = std::auto_ptr<CPortMapper>(new CPortMapper(this));
	if (m_apPortMapper->Supported())
		m_apPortMapper->ConfigureGateway(m_ListeningEndPoint.GetPort(), true, false);	// TCP only
	else
	{
		LOG_INFORMATION(_T("UPnP not supported on this machine."));
		m_apPortMapper.reset();
	}
//#endif
*/
}

void CNetManager::SetLastRemoteEndPoint(const CIPEndPoint& lastRemoteEndPoint)
{
	m_LastRemoteEndPoint = lastRemoteEndPoint;

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LAST_IP, m_LastRemoteEndPoint.GetIPAddress().GetAddress());
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LAST_PORT, m_LastRemoteEndPoint.GetPort());		
}

int CNetManager::ConnectToRemoteUser(const CIPEndPoint& remoteEndPoint)
{
	{
		ConnectionSet connections;
		m_cpHub->GetConnections(connections);

		for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
			if ((*it)->GetRemoteEndPoint() == remoteEndPoint)
				return ERROR_ALREADY_EXISTS;
	}

	LOG_DEBUG(_T("Connecting to %s..."), remoteEndPoint.ToString());

	counted_ptr<CRemoteGameUser> cpConnection = counted_ptr<CRemoteGameUser>(new CRemoteGameUser);
	cpConnection->SetConnectionHub(m_cpHub);
	cpConnection->SetNetManager(this);

	try
	{
		cpConnection->Connect(remoteEndPoint);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	SetLastRemoteEndPoint(remoteEndPoint);

	return ERROR_SUCCESS;
}

void CNetManager::GetAllRemoteUserIDs(IntArray& remoteUserIDs)
{
	remoteUserIDs.clear();

	ConnectionSet connections;
	m_cpHub->GetConnections(connections);

	for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
		remoteUserIDs.push_back(static_cast<CRemoteGameUser*>((*it).GetPointer())->GetRemoteUserID());
}

CRemoteGameUser* CNetManager::GetRemoteUser(int nRemoteUserID)
{
	ConnectionSet connections;
	m_cpHub->GetConnections(connections);

	for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
		if (static_cast<CRemoteGameUser*>((*it).GetPointer())->GetRemoteUserID() == nRemoteUserID)
			return static_cast<CRemoteGameUser*>((*it).GetPointer());

	return NULL;
}

int CNetManager::SendChatMessageToAll(LPCTSTR strText)
{
	try
	{
		std::auto_ptr<CMessage> apChatMessage(new CChatMessage);
		static_cast<CChatMessage*>(apChatMessage.get())->m_strUserName = m_strUserName;
		static_cast<CChatMessage*>(apChatMessage.get())->m_strText = strText;
		m_cpHub->SendMessage(apChatMessage);
	}
	catch (CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return exception.GetErrorCode();
	}

	return ERROR_SUCCESS;
}

void CNetManager::DisconnectAll()
{
	m_cpHub->StopAllConnections();
}

void CNetManager::OnConnectedTo(counted_ptr<CRemoteGameUser> cpConnection)
{
	CString* pstrName = new CString(cpConnection->GetRemoteUserName());

	if (m_hwndSendConnectedTo)
		PostMessage(m_hwndSendConnectedTo, WM_APP_NET_CONNECTED_TO,
			reinterpret_cast<WPARAM>(pstrName),
			cpConnection->GetRemoteUserID());
}

void CNetManager::OnConnectedBy(counted_ptr<CRemoteGameUser> cpConnection)
{
	CString* pstrName = new CString(cpConnection->GetRemoteUserName());

	if (m_hwndSendConnectedBy)
		PostMessage(m_hwndSendConnectedBy, WM_APP_NET_CONNECTED_BY,
			reinterpret_cast<WPARAM>(pstrName),
			cpConnection->GetRemoteUserID());
}

void CNetManager::OnIncorrectVersion(DWORD dwForeignVersionMS, DWORD dwForeignVersionLS)
{
	if (m_hwndSendConnectedTo)
		PostMessage(m_hwndSendConnectedTo, WM_APP_NET_INCORRECT_VERSION,
					dwForeignVersionMS, dwForeignVersionLS);
}

void CNetManager::OnDisconnectedFrom(counted_ptr<CRemoteGameUser> cpConnection)
{
	// Clean up game request

	{
		Threading::CScopedLock lock(m_csGameRequests);
	
		for (std::vector<CNetManager::GameRequestEntry>::iterator it = m_GameRequests.begin();
			it != m_GameRequests.end(); ++it)
			if (it->cpConnection == cpConnection)
			{
				m_GameRequests.erase(it);
				break;
			}
	}

	// Notify disconnect

	CString* pstrName = new CString(cpConnection->GetRemoteUserName());

	if (m_hwndSendDisconnect)
		PostMessage(m_hwndSendDisconnect, WM_APP_NET_DISCONNECT,
			reinterpret_cast<WPARAM>(pstrName),
			cpConnection->GetRemoteUserID());	// For referenece
}

void CNetManager::OnReceiveChatMessage(LPCTSTR strUserName, LPCTSTR strText)
{
	if (m_hwndSendChatMessage)
	{
		CString* pstrText = new CString(strText);
		CString* pstrUserName = new CString(strUserName);

		PostMessage(m_hwndSendChatMessage, WM_APP_NET_CHAT_MESSAGE,
			reinterpret_cast<WPARAM>(pstrUserName),
			reinterpret_cast<LPARAM>(pstrText));
	}	
}

void CNetManager::ResetGameState()
{
	Threading::CScopedLock lock(m_csGameRequests);

	for (std::vector<CNetManager::GameRequestEntry>::iterator it = m_GameRequests.begin();
		it != m_GameRequests.end(); ++it)
	{
		// Send rejected

		try
		{
			it->cpConnection->SendMessage(std::auto_ptr<CGameRequestRejectedMessage>(new CGameRequestRejectedMessage));
		}
		catch (CSocketException& exception)
		{
			exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		}
	}

	m_GameRequests.clear();

	m_nAcceptGameRequestFrom = -1;	// Accept anyone
}

int CNetManager::GetConnectedToCount()
{
	ConnectionSet connections;
	m_cpHub->GetConnections(connections);

	int nCount = 0;
	for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
		if (static_cast<CRemoteGameUser*>((*it).GetPointer())->IsInitiator())
			++nCount;

	return nCount;
}

int CNetManager::GetConnectedByCount()
{
	ConnectionSet connections;
	m_cpHub->GetConnections(connections);

	int nCount = 0;
	for (ConnectionSet::iterator it = connections.begin(); it != connections.end(); ++it)
		if (!static_cast<CRemoteGameUser*>((*it).GetPointer())->IsInitiator())
			++nCount;

	return nCount;
}

void CNetManager::CPortMapper::OnConfigurationFinished(HRESULT hr)
{
	__super::OnConfigurationFinished(hr);

	if (m_pThis->m_hwndUPnPConfigurationResult)
	{
		CString* pstrResult = new CString(Exception::CUPnPException::GetErrorMessage(hr));
		::PostMessage(m_pThis->m_hwndUPnPConfigurationResult, WM_APP_NET_UPNP_CONFIG_RESULT,
			reinterpret_cast<WPARAM>(pstrResult), hr);
	}
}
