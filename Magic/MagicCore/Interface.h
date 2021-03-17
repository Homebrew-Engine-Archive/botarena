#pragma once

class CGame;

//____________________________________________________________________________
//
struct SelectCardsData
{
	SelectCardsData()
		: pCardContainer(NULL)
		, nMinSelect(0)
		, nMaxSelect(0)
		, pCardFilter(NULL)
	{}

	const CCountedCardContainer*	pCardContainer;
	CString							strCaption;
	CString							strTitle;
	MinimumValue					nMinSelect;
	MaximumValue					nMaxSelect;
	CCountedCardContainer			SelectedCards;
	const CCardFilter*				pCardFilter;
};

//____________________________________________________________________________
//
struct OrderCardsData
{
	OrderCardsData()
		: pCardContainer(NULL)
		, bReadOnly(TRUE)
	{}

	CCountedCardContainer*	pCardContainer;
	CString			strCaption;
	BOOL			bReadOnly;
};

//____________________________________________________________________________
//
class CInterface
{
public:
	CInterface(CPlayer* pPlayer);
	virtual ~CInterface() 
	{}

	VIRTUAL(int, SelectAction)(const CActionContainer* pActionContainer) = 0;
	VIRTUAL(BOOL, SelectCard)(SelectCardsData* pSelectCardStruct) = 0;
	VIRTUAL(BOOL, OrderCards)(OrderCardsData* pOrderCardStruct) = 0;

protected:
	void SetPriorityPlayer();
	void RestorePriorityPlayer();

	CPlayer* m_pPlayer;
	CGame* m_pGame;

private:
	CPlayer* m_pPreviousPriorityPlayer;
};

//____________________________________________________________________________
//
enum WM_APP_INTERFACE_
{
	WM_APP_INTERFACE_SELECT_ACTION = WM_APP_INTERFACE,
	WM_APP_INTERFACE_SELECT_CARD,		
	WM_APP_INTERFACE_ORDER_CARD,		
};

class CORE_EXPORT CGUIInterface : public CInterface
{
public:
	CGUIInterface(CPlayer* pPlayer,
				  HWND hwndSelectActionOwner,
				  HANDLE hActionSelected,
				  HANDLE hQuit,
				  HWND hwndSelectCardOwner,
				  HWND hwndOrderCardOwner);
	virtual ~CGUIInterface();

	OVERRIDE(int, SelectAction)(const CActionContainer* pActionContainer);
	OVERRIDE(BOOL, SelectCard)(SelectCardsData* pSelectCardStruct);
	OVERRIDE(BOOL, OrderCards)(OrderCardsData* pOrderCardStruct);

protected:
	HWND	m_hwndSelectActionOwner;
	HANDLE	m_Events[2];
	HWND	m_hwndSelectCardOwner;
	HWND	m_hwndOrderCardOwner;
};

//____________________________________________________________________________
//
class CORE_EXPORT CNetInterface : public CInterface
{
public:
	static GUID GetSelectActionChecksum(CGame* pGame, const CActionContainer* pActionContainer);
	static GUID GetSelectCardChecksum(CGame* pGame, SelectCardsData* pSelectCardStruct);
	static GUID GetOrderCardChecksum(CGame* pGame, OrderCardsData* pOrderCardStruct);

	CNetInterface(CPlayer* pPlayer,
				  int nRemoteUserID,
				  HANDLE hExitEvent);
	virtual ~CNetInterface();

	int GetRemoteUserID() { return m_nRemoteUserID; }

	int SendGameReady();						// Send ready message to the owning player
	BOOL WaitForGameReady(HANDLE hStopEvent);	// Wait for ready message from the owning player

	int SendConceded();		// Local player conceded

	OVERRIDE(int, SelectAction)(const CActionContainer* pActionContainer);
	OVERRIDE(BOOL, SelectCard)(SelectCardsData* pSelectCardStruct);
	OVERRIDE(BOOL, OrderCards)(OrderCardsData* pOrderCardStruct);

	void EnqueueActionSelection(int nMoveIndex, GUID Checksum);
	void EnqueueCardSelection(LPCTSTR strSelectedCards, GUID Checksum);
	void EnqueueCardOrdering(LPCTSTR strOrderedCards, GUID Checksum);

	void SendSelectAction(const CActionContainer* pActionContainer, int nSelectedAction, GUID Checksum);
	void SendSelectCard(SelectCardsData* pSelectCardStruct, GUID Checksum);
	void SendOrderCard(OrderCardsData* pOrderCardStruct, GUID Checksum);

protected:
	BOOL DequeueActionSelection(int& nMoveIndex, GUID& Checksum);
	BOOL DequeueCardSelection(CString& strSelectedCards, GUID& Checksum);
	BOOL DequeueCardOrdering(CString& strOrderedCards, GUID& Checksum);

	int									m_nRemoteUserID;
	counted_ptr<CRemoteGameUser>		m_cpRemoteUser;
	HANDLE								m_hExitEvent;

	CCriticalSection					m_ActionSelectionCS;
	CEvent								m_ActionSelectionsEvent;
	std::list<std::pair<int, GUID>>		m_ActionSelections;

	CCriticalSection					m_CardSelectionsCS;
	CEvent								m_CardSelectionsEvent;
	std::list<std::pair<CString, GUID>>	m_CardSelections;

	CCriticalSection					m_CardOrderingsCS;
	CEvent								m_CardOrderingsEvent;
	std::list<std::pair<CString, GUID>>	m_CardOrderings;
};

//____________________________________________________________________________
//
class CORE_EXPORT CConsoleInterface : public CInterface
{
public:
	CConsoleInterface(CPlayer* pPlayer);

	OVERRIDE(int, SelectAction)(const CActionContainer* pActionContainer);
	OVERRIDE(BOOL, SelectCard)(SelectCardsData* pSelectCardStruct);
	OVERRIDE(BOOL, OrderCards)(OrderCardsData* pOrderCardStruct);

protected:
	CString GetInput(int nMinNumber, int nMaxNumber, LPCTSTR strOtherChars);
	void PrintState();
	void Configuration();

	int m_nDoneForPlayerTurn;
	bool m_bAutoUntap;
	bool m_bHideTricks;
};
