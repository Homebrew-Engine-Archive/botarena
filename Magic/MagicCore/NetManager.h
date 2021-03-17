#pragma once

//____________________________________________________________________________
//
enum WM_APP_NET_
{
	WM_APP_NET_MESSAGE = WM_APP_NET,
	WM_APP_NET_DISCONNECT,
	WM_APP_NET_CONNECTED_TO,
	WM_APP_NET_CONNECTED_BY,
	WM_APP_NET_INCORRECT_VERSION,
	WM_APP_NET_CHAT_MESSAGE,
	WM_APP_NET_GAME_REQUEST_GRANTED,
	WM_APP_NET_GAME_REQUEST_REJECTED,
	WM_APP_NET_GAME_REQUEST,
	WM_APP_NET_GAME_REQUEST_CANCELLED,
	WM_APP_NET_GAME_CONCEDED,
	WM_APP_NET_UPNP_CONFIG_RESULT,
	WM_APP_NET_FILE_RECEIVED
};

//_____________________________________________________________________________
//

class CNetManager;

enum FileType
{
	FILETYPE_UNKNOWN = 0,
	FILETYPE_AVATAR,
};

class CORE_EXPORT CRemoteGameUser : public CMessageConnection
{
public:
	static CConnection* CreateProtocolConnection(counted_ptr<CSocket> cpSocket)
	{
		return new CRemoteGameUser(cpSocket);
	}

	CRemoteGameUser(CSocket::SocketType::Enum socketType = CSocket::SocketType::Stream)
		: CMessageConnection(socketType)
		, m_pGame(NULL)
		, m_bAccepted(false)
		, m_nRemoteUserID(s_nNextID++)
	{
	}

	CRemoteGameUser(counted_ptr<CSocket> cpSocket)
		: CMessageConnection(cpSocket)
		, m_pGame(NULL)
		, m_bAccepted(true)
		, m_nRemoteUserID(s_nNextID++)
	{
	}

	virtual ~CRemoteGameUser()
	{
	}

	virtual std::auto_ptr<CMessage> CreateMessage(GUID guidMessage);

	void SetNetManager(CNetManager* pNetManager);
	void SetGame(CGame* pGame)	{ m_pGame = pGame; }

	int GetRemoteUserID()		{ return m_nRemoteUserID; }
	CString GetRemoteUserName()	{ return m_strRemoteUserName; }

	bool IsInitiator()			{ return !m_bAccepted; }

	int SendChatMessage(LPCTSTR strText);

	int SendGameRequest(CString strDeckEntries, int nStartPreference,
						int& nRandom,
						unsigned& uSeed,
						BOOL bMulligan);
	int SendCancelGameRequest();

	int SendGameReady();		// Local player ready

	void SetGameReadyEvent()	{ m_eventGameReady.Set(); }
	void ResetGameReadyEvent()	{ m_eventGameReady.Reset(); }
	bool WaitForGameReady(HANDLE hExitEvent);

	int SendConceded();			// Local player conceded

	void SetConcededEvent()		{ m_eventConceded.Set(); }
	void ResetConcededEvent()	{ m_eventConceded.Reset(); }
	bool IsConceded()			{ return m_eventConceded.Wait(0); }

	int SendSelectAction(int nSelectedAction, GUID Checksum);
	int SendSelectCard(LPCTSTR strSelectedCards, GUID Checksum);
	int SendOrderCard(LPCTSTR strOrderedCards, GUID Checksum);

	int SendFile(LPCTSTR strFilePath, FileType fileType);

	CGdipBitmap GetAvatarBitmap() const { return m_AvatarBitmap; }

protected:
	virtual void OnConnected();
	virtual void OnDisconnecting();
	virtual void OnDisconnected()
	{
		LOG_DEBUG(_T("OnDisconnect."));
		__super::OnDisconnected();
	}

	virtual void OnMessage(CMessage* pReceivedMessage, CProtocolInstance* pProtocolInstance);

	static int s_nNextID;

	struct SendFileContext
	{
		FILE* pFile;
		FileType fileType;
		CString strFilePath;
	};

	CNetManager*	m_pNetManager;

	bool			m_bAccepted;
	DWORD			m_dwVersionMS;
	DWORD			m_dwVersionLS;
	CString			m_strRemoteUserName;
	int				m_nRemoteUserID;

	Threading::CManualResetEvent	m_eventGameReady;
	Threading::CManualResetEvent	m_eventConceded;

	CGdipBitmap m_AvatarBitmap;

	CGame* m_pGame;
};

//_____________________________________________________________________________
//

class CMyAcceptor : public CAcceptor
{
public:
	CMyAcceptor(
		const CIPEndPoint& listeningEndPoint,
		counted_ptr<CMessageConnectionHub> cpHub,
		CNetManager* pNetManager)
		: CAcceptor(listeningEndPoint, CAcceptor::CreateConnectionCallback(CRemoteGameUser::CreateProtocolConnection))
		, m_cpHub(cpHub)
		, m_pNetManager(pNetManager)
	{}

protected:
	virtual CConnection* CreateConnection(counted_ptr<CSocket> cpAcceptedSocket);

	counted_ptr<CMessageConnectionHub>	m_cpHub;
	CNetManager*						m_pNetManager;
};

//_____________________________________________________________________________
//

class CORE_EXPORT CNetManager
{
	friend class CRemoteGameUser;
public:
	struct GameRequestEntry
	{
		counted_ptr<CRemoteGameUser> cpConnection;
		CString		strDeckEntries;
		int			nStartPreference;
		int			nRandom;
		unsigned	uSeed;
		BOOL		bMulligan;
	};

	struct FileReceivedData
	{
		CString		strFilePath;
		FileType	fileType;
		int			nFromRemoteUserID;
	};

	CNetManager();
	~CNetManager();

	void Start();

	void SetUserName(LPCTSTR strUserName);
	CString GetUserName()												{ return m_strUserName; }

	void SetVersionInfo(DWORD dwVersionMS, DWORD dwVersionLS);
	void GetVersionInfo(DWORD& dwVersionMS, DWORD& dwVersionLS);

	void SetSendMessage(HWND hwndSendMessage)							{ m_hwndSendMessage = hwndSendMessage; }
	void SetSendConnectedTo(HWND hwndSendConnectedTo)					{ m_hwndSendConnectedTo = hwndSendConnectedTo; }
	void SetSendConnectedBy(HWND hwndSendConnectedBy)					{ m_hwndSendConnectedBy = hwndSendConnectedBy; }
	void SetSendDisconnect(HWND hwndSendDisconnect)						{ m_hwndSendDisconnect = hwndSendDisconnect; }
	void SetSendChatMessage(HWND hwndSendChatMessage)					{ m_hwndSendChatMessage = hwndSendChatMessage; }
	void SetSendGameRequest(HWND hwndSendGameRequest)					{ m_hwndSendGameRequest = hwndSendGameRequest; }
	void SetSendGameConceded(HWND hwndSendGameConceded)					{ m_hwndSendGameConceded = hwndSendGameConceded; }
	void SetSendGameCancelRequest(HWND hwndSendGameCancelRequest)		{ m_hwndSendGameCancelRequest = hwndSendGameCancelRequest; }
	void SetSendGameRequestGranted(HWND hwndSendGameRequestGranted)		{ m_hwndSendGameRequestGranted = hwndSendGameRequestGranted; }
	void SetSendGameRequestRejected(HWND hwndSendGameRequestRejected)	{ m_hwndSendGameRequestRejected = hwndSendGameRequestRejected; }
	void SetUPnPConfigurationResult(HWND hwndUPnPConfigurationResult)	{ m_hwndUPnPConfigurationResult = hwndUPnPConfigurationResult; }
	void SetSendFileReceived(HWND hwndSendFileReceived)					{ m_hwndSendFileReceived = hwndSendFileReceived; }

	void SetAllowConnections(bool bAllowConnections);
	bool GetAllowConnections()											{ return m_bAllowConnections; }

	void SetMaxConnections(int nMaxConnections);
	int GetMaxConnections()												{ return m_nMaxConnections; }

	void SetAnnounceNewConnections(bool bAnnounce);
	bool GetAnnounceNewConnections()									{ return m_bAnnounceNewConnections; }

	void SetAnnounceDisconnect(bool bAnnounce);
	bool GetAnnounceDisconnect()										{ return m_bAnnounceDisconnect; }

	void SetPort(int nPort);

	void ConfigureUPnP();

	int ConnectToRemoteUser(const CIPEndPoint& remoteEndPoint);
	void GetAllRemoteUserIDs(IntArray& remoteUserIDs);
	CRemoteGameUser* GetRemoteUser(int nRemoteUserID);
	int SendChatMessageToAll(LPCTSTR strText);
	void DisconnectAll();

	void ResetGameState();

	CIPEndPoint GetListeningEndPoint()	{ return m_ListeningEndPoint; }
	CIPEndPoint GetLastRemoteEndPoint()	{ return m_LastRemoteEndPoint; }
	void SetLastRemoteEndPoint(const CIPEndPoint& lastRemoteEndPoint);

	int GetConnectedToCount();
	int GetConnectedByCount();
	int GetConnectedCount()				{ return m_cpHub->GetSize(); }

protected:
	class CPortMapper : public CUPnPScopedPortMapper
	{
	public:
		CPortMapper(CNetManager* pThis)
			: m_pThis(pThis)
		{}

	protected:
		virtual void OnConfigurationFinished(HRESULT hr);

		CNetManager* m_pThis;
	};

	void OnConnectedTo(counted_ptr<CRemoteGameUser> cpConnection);
	void OnConnectedBy(counted_ptr<CRemoteGameUser> cpConnection);
	void OnIncorrectVersion(DWORD dwForeignVersionMS, DWORD dwForeignVersionLS);
	void OnDisconnectedFrom(counted_ptr<CRemoteGameUser> cpConnection);

	void OnReceiveChatMessage(LPCTSTR strUserName, LPCTSTR strText);

	static const int s_nDefaultMaxConnections = 5;
	static const int s_nDefaultPort = 65521;		// Highest prime number under 65536

	CString		m_strUserName;
	DWORD		m_dwVersionMS;
	DWORD		m_dwVersionLS;

	HWND		m_hwndSendMessage;
	HWND		m_hwndSendConnectedTo;
	HWND		m_hwndSendConnectedBy;
	HWND		m_hwndSendDisconnect;
	HWND		m_hwndSendChatMessage;
	HWND		m_hwndSendGameRequest;
	HWND		m_hwndSendGameCancelRequest;
	HWND		m_hwndSendGameRequestGranted;
	HWND		m_hwndSendGameRequestRejected;
	HWND		m_hwndSendGameConceded;
	HWND		m_hwndUPnPConfigurationResult;
	HWND		m_hwndSendFileReceived;

	int			m_nMaxConnections;
	bool		m_bAllowConnections;
	bool		m_bAnnounceNewConnections;
	bool		m_bAnnounceDisconnect;

	CIPEndPoint	m_ListeningEndPoint;
	CIPEndPoint	m_LastRemoteEndPoint;

	counted_ptr<CMessageConnectionHub>	m_cpHub;
	counted_ptr<CMyAcceptor>			m_cpAcceptor;

	Threading::CCriticalSection			m_csGameRequests;
	int									m_nAcceptGameRequestFrom;
	std::vector<GameRequestEntry>		m_GameRequests;

	std::auto_ptr<CPortMapper>			m_apPortMapper;
};