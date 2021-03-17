#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CInterface::CInterface(CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pGame(pPlayer->GetGame())
	, m_pPreviousPriorityPlayer(NULL)
{
}

void CInterface::SetPriorityPlayer()
{
	m_pPreviousPriorityPlayer = m_pGame->GetPriorityPlayer();
	if (m_pPreviousPriorityPlayer->GetInterface() != this)
	{
		int nPlayerCount = m_pGame->GetPlayerCount();
		for (int i = 0; i < nPlayerCount; ++i)
			if (m_pGame->GetPlayer(i)->GetInterface() == this)
			{
				m_pGame->SetPriorityPlayer(m_pGame->GetPlayer(i));
				break;
			}
	}
}

void CInterface::RestorePriorityPlayer()
{
	if (m_pPreviousPriorityPlayer && m_pPreviousPriorityPlayer != m_pGame->GetPriorityPlayer())
	{
		m_pGame->SetPriorityPlayer(m_pPreviousPriorityPlayer);
		m_pPreviousPriorityPlayer = NULL;
	}
}

//____________________________________________________________________________
//
CGUIInterface::CGUIInterface(CPlayer* pPlayer,
							 HWND hwndSelectActionOwner,
							 HANDLE hActionSelected,
							 HANDLE hQuit,
							 HWND hwndSelectCardOwner,
							 HWND hwndOrderCardOwner)
							 : CInterface(pPlayer)
{
	m_hwndSelectActionOwner = hwndSelectActionOwner;
	m_Events[0] = hActionSelected;
	m_Events[1] = hQuit;
	m_hwndSelectCardOwner = hwndSelectCardOwner;
	m_hwndOrderCardOwner = hwndOrderCardOwner;
}

CGUIInterface::~CGUIInterface()
{
}

int CGUIInterface::SelectAction(const CActionContainer* pActionContainer)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();
	
#ifdef _MY_DEBUG
	/*
	static DWORD dwTimeLast = GetTickCount();
	ATLTRACE(_T("Time: Core: %d milliseconds\n"), GetTickCount() - dwTimeLast);
	DWORD dwSelectionStarted = GetTickCount();
	*/

	if (false)
	{
		for (int i = 0; i < pActionContainer->GetSize(); ++i)
			ATLTRACE(_T("%d) %s (%d)\n"), i, pActionContainer->GetAt(i)->GetActionName(), pActionContainer->GetAt(i)->IsTrick());
		ATLTRACE(_T("\n"));
	}
#endif

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ? 
		CNetInterface::GetSelectActionChecksum(m_pGame, pActionContainer) :
		GUID_NULL);

	int nSelectedAction = -1;

	// Changed from PostMessage to SendMessage to make sure the pActionContainer is still valid when the select action owner receives the message
	::SendMessage(m_hwndSelectActionOwner, WM_APP_INTERFACE_SELECT_ACTION, (WPARAM)&nSelectedAction, (LPARAM)pActionContainer);

	DWORD dwWaitResult = ::WaitForMultipleObjects(2, m_Events, FALSE, INFINITE);

	if (dwWaitResult != WAIT_OBJECT_0)
		nSelectedAction = -1;

	// Send action selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendSelectAction(pActionContainer, nSelectedAction, checksum);
	}

#ifdef _MY_DEBUG
	/*
	DWORD dwSelectionEnded = GetTickCount();
	ATLTRACE(_T("Time: Selection: %d milliseconds\n"), dwSelectionEnded - dwSelectionStarted);
	dwTimeLast = dwSelectionEnded;
	*/
#endif

	RestorePriorityPlayer();

	return nSelectedAction;
}

BOOL CGUIInterface::SelectCard(SelectCardsData* pSelectCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ? 
		CNetInterface::GetSelectCardChecksum(m_pGame, pSelectCardStruct) :
		GUID_NULL);

	m_pGame->Log(_T("(Select card interface)\n"));

	::SendMessage(
			m_hwndSelectCardOwner, WM_APP_INTERFACE_SELECT_CARD, NULL, (LPARAM)pSelectCardStruct);

	// Send selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendSelectCard(pSelectCardStruct, checksum);
	}

	RestorePriorityPlayer();

	return TRUE;
}

BOOL CGUIInterface::OrderCards(OrderCardsData* pOrderCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ?
		CNetInterface::GetOrderCardChecksum(m_pGame, pOrderCardStruct) :
		GUID_NULL);

	m_pGame->Log(_T("(Order card interface)\n"));

	::SendMessage(
			m_hwndOrderCardOwner, WM_APP_INTERFACE_ORDER_CARD, NULL, (LPARAM)pOrderCardStruct);

	// Send action selection to remote player(s)
	// Send selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendOrderCard(pOrderCardStruct, checksum);
	}

	RestorePriorityPlayer();

	return TRUE;
}

//____________________________________________________________________________
//
/*

	CNetInterface
	  (3) SendSelectAction(SelectedMove, checksum)
	  ...
	->(5) CRemoteGameUser::OnReceive(MoveSelection)
	<-(6) EnqueueActionSelection(MoveSelection)
	  ...
	->(7) Call SelectAction(MoveContainer)
	  (8) DequeueActionSelection(SelectedMove, RemoteChecksum)
	  (9) Compare LocalChecksum and RemoteChecksum
	<-(10) Return remote selection to caller



	------------------------------------------------------------



	CGUIInterface
	->(1) Call SelectAction(MoveContainer)
	  (2) User selects move from CSelectionDialogBar
	<-(4) Return local selection to caller

*/

CNetInterface::CNetInterface(CPlayer* pPlayer,
							 int nRemoteUserID,
							 HANDLE hExitEvent)
	: CInterface(pPlayer)
	, m_nRemoteUserID(nRemoteUserID)
	, m_ActionSelectionsEvent(FALSE, TRUE)
	, m_CardSelectionsEvent(FALSE, TRUE)
	, m_CardOrderingsEvent(FALSE, TRUE)
	, m_hExitEvent(hExitEvent)
{
	m_cpRemoteUser = g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID);
}

CNetInterface::~CNetInterface()
{
}

int CNetInterface::SendGameReady()
{
	return m_cpRemoteUser->SendGameReady();
}

BOOL CNetInterface::WaitForGameReady(HANDLE hStopEvent)
{
	return m_cpRemoteUser->WaitForGameReady(hStopEvent);
}

int CNetInterface::SendConceded()
{
	return m_cpRemoteUser->SendConceded();
}

int CNetInterface::SelectAction(const CActionContainer* pActionContainer)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	int nMoveIndex = -1;
	GUID RemoteChecksum = GUID_NULL;

	if (DequeueActionSelection(nMoveIndex, RemoteChecksum))
	{
		GUID LocalChecksum = GetSelectActionChecksum(m_pGame, pActionContainer);
		if (LocalChecksum != RemoteChecksum)
		{
			m_pGame->Log(_T("Local game state inconsistent with remote game state (SelectAction).\n"));
			MessageBox(NULL, _T("Local game state inconsistent with remote game state (SelectAction)."), _T("checksum Error"), MB_OK | MB_ICONERROR);
			m_pGame->Stop();
			return -1;
		}
	}

	RestorePriorityPlayer();

	return nMoveIndex;
}

BOOL CNetInterface::SelectCard(SelectCardsData* pSelectCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	CString strSelectedCards;
	GUID RemoteChecksum = GUID_NULL;

	if (DequeueCardSelection(strSelectedCards, RemoteChecksum))
	{
		GUID LocalChecksum = GetSelectCardChecksum(m_pGame, pSelectCardStruct);

		// Select cards

		StringArray cardNames;
		SplitString(strSelectedCards, _T("|"), cardNames);

		for (size_t i = 0; i < cardNames.size(); ++i)
		{
			BOOL bFound = FALSE;
			for (int j = 0; j < pSelectCardStruct->pCardContainer->GetSize(); ++j)
			{
				if (pSelectCardStruct->pCardContainer->GetAt(j)->GetCardName() == (LPCTSTR)cardNames[i])
				{
					bFound = TRUE;
					pSelectCardStruct->SelectedCards.AddCard(pSelectCardStruct->pCardContainer->GetAt(j), CardPlacement::Top);
					break;
				}
			}

			if (!bFound)
			{
				m_pGame->Log(_T("Local game state inconsistent with remote game state (SelectCard1).\n"));
				MessageBox(NULL, _T("Local game state inconsistent with remote game state (SelectCard1)."), _T("checksum Error"), MB_OK | MB_ICONERROR);
				m_pGame->Stop();
				return FALSE;
			}
		}

		if (LocalChecksum != RemoteChecksum)
		{
			m_pGame->Log(_T("Local game state inconsistent with remote game state (SelectCard2).\n"));
			MessageBox(NULL, _T("Local game state inconsistent with remote game state (SelectCard2)."), _T("checksum Error"), MB_OK | MB_ICONERROR);
			m_pGame->Stop();
			return FALSE;
		}

		RestorePriorityPlayer();

		return TRUE;
	}

	RestorePriorityPlayer();

	return FALSE;
}

BOOL CNetInterface::OrderCards(OrderCardsData* pOrderCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	CString strOrderedCards;
	GUID RemoteChecksum = GUID_NULL;

	if (DequeueCardOrdering(strOrderedCards, RemoteChecksum))
	{
		if (pOrderCardStruct->bReadOnly)
			return TRUE;

		GUID LocalChecksum = GetOrderCardChecksum(m_pGame, pOrderCardStruct);

		// Order cards

		StringArray cardNames;
		SplitString(strOrderedCards, _T("|"), cardNames);
		CCountedCardContainer TempContainer;

		// bottom (index=0), .... ,top (index=n-1)
		for (size_t i = 0; i < cardNames.size(); ++i)
		{
			BOOL bFound = FALSE;
			for (int j = 0; j < pOrderCardStruct->pCardContainer->GetSize(); ++j)
			{
				if (pOrderCardStruct->pCardContainer->GetAt(j)->GetCardName() == (LPCTSTR)cardNames[i])
				{
					bFound = TRUE;
					TempContainer.AddCard(pOrderCardStruct->pCardContainer->GetAt(j), CardPlacement::Top);
					break;
				}
			}

			if (!bFound)
			{
				m_pGame->Log(_T("Local game state inconsistent with remote game state (OrderCards1).\n"));
				MessageBox(NULL, _T("Local game state inconsistent with remote game state (OrderCards1)."), _T("checksum Error"), MB_OK | MB_ICONERROR);
				m_pGame->Stop();
				return FALSE;
			}
		}

		pOrderCardStruct->pCardContainer->RemoveAll();
		pOrderCardStruct->pCardContainer->AddCards(TempContainer, CardPlacement::Top);

		if (LocalChecksum != RemoteChecksum)
		{
			m_pGame->Log(_T("Local game state inconsistent with remote game state (OrderCards2).\n"));
			MessageBox(NULL, _T("Local game state inconsistent with remote game state (OrderCards2)."), _T("checksum Error"), MB_OK | MB_ICONERROR);
			m_pGame->Stop();
			return FALSE;
		}

		RestorePriorityPlayer();

		return TRUE;
	}

	RestorePriorityPlayer();

	return FALSE;
}

void CNetInterface::EnqueueActionSelection(int nMoveIndex, GUID checksum)
{
	m_ActionSelectionCS.Lock();

	if (!m_ActionSelections.size())
		m_ActionSelectionsEvent.SetEvent();

	m_ActionSelections.push_back(std::make_pair(nMoveIndex, checksum));

	m_ActionSelectionCS.Unlock();
}

BOOL CNetInterface::DequeueActionSelection(int& nMoveIndex, GUID& checksum)
{
	HANDLE Events[] = { m_hExitEvent, m_ActionSelectionsEvent };
	DWORD dwResult = WaitForMultipleObjects(ARRAY_SIZE(Events), Events, FALSE, INFINITE);
	if (dwResult == WAIT_OBJECT_0)
		return FALSE;

	m_ActionSelectionCS.Lock();

	ATLASSERT(m_ActionSelections.size());

	std::pair<int, GUID> front = m_ActionSelections.front();
	m_ActionSelections.pop_front();

	nMoveIndex = front.first;
	checksum = front.second;

	if (!m_ActionSelections.size())
		m_ActionSelectionsEvent.ResetEvent();

	m_ActionSelectionCS.Unlock();

	return TRUE;
}

void CNetInterface::EnqueueCardSelection(LPCTSTR strSelectedCards, GUID checksum)
{
	m_CardSelectionsCS.Lock();

	if (!m_CardSelections.size())
		m_CardSelectionsEvent.SetEvent();

	m_CardSelections.push_back(std::make_pair(strSelectedCards, checksum));

	m_CardSelectionsCS.Unlock();
}

BOOL CNetInterface::DequeueCardSelection(CString& strSelectedCards, GUID& checksum)
{
	HANDLE Events[] = { m_hExitEvent, m_CardSelectionsEvent };
	DWORD dwResult = WaitForMultipleObjects(ARRAY_SIZE(Events), Events, FALSE, INFINITE);
	if (dwResult == WAIT_OBJECT_0)
		return FALSE;

	m_CardSelectionsCS.Lock();

	ATLASSERT(m_CardSelections.size());

	std::pair<CString, GUID> front = m_CardSelections.front();
	m_CardSelections.pop_front();

	strSelectedCards = front.first;
	checksum = front.second;

	if (!m_CardSelections.size())
		m_CardSelectionsEvent.ResetEvent();

	m_CardSelectionsCS.Unlock();

	return TRUE;
}

void CNetInterface::EnqueueCardOrdering(LPCTSTR strOrderedCards, GUID checksum)
{
	m_CardOrderingsCS.Lock();

	if (!m_CardOrderings.size())
		m_CardOrderingsEvent.SetEvent();

	m_CardOrderings.push_back(std::make_pair(strOrderedCards, checksum));

	m_CardOrderingsCS.Unlock();
}

BOOL CNetInterface::DequeueCardOrdering(CString& strOrderedCards, GUID& checksum)
{
	HANDLE Events[] = { m_hExitEvent, m_CardOrderingsEvent };
	DWORD dwResult = WaitForMultipleObjects(ARRAY_SIZE(Events), Events, FALSE, INFINITE);
	if (dwResult == WAIT_OBJECT_0)
		return FALSE;

	m_CardOrderingsCS.Lock();

	ATLASSERT(m_CardOrderings.size());

	std::pair<CString, GUID> front = m_CardOrderings.front();
	m_CardOrderings.pop_front();

	strOrderedCards = front.first;
	checksum = front.second;

	if (!m_CardOrderings.size())
		m_CardOrderingsEvent.ResetEvent();

	m_CardOrderingsCS.Unlock();

	return TRUE;
}

GUID CNetInterface::GetSelectActionChecksum(CGame* pGame, const CActionContainer* pActionContainer)
{
#ifdef NO_CHECKSUM
	return GUID_NULL;
#else
#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T(" SELECT ACTION CHECKSUM\n"));
#endif

	CMD5Checksum checksum;
	pGame->GetChecksum(checksum);

	StringArray strings;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
#ifdef LOG_CHECKSUM
		if (pGame->IsDeveloper())
			pGame->Log(_T("  [Move:%s(%d)]"), pActionContainer->GetAt(i)->GetActionName(), i);
#endif
		strings.push_back(pActionContainer->GetAt(i)->GetActionName());
	}

	checksum.Update(strings);

	GUID finalChecksum = checksum.GetFinalChecksum();

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T("\n SELECT ACTION FINAL CHECKSUM: %s\n"), Guid(finalChecksum).ToString());
#endif

	return finalChecksum;
#endif
}

GUID CNetInterface::GetSelectCardChecksum(CGame* pGame, SelectCardsData* pSelectCardStruct)
{
#ifdef NO_CHECKSUM
	return GUID_NULL;
#else

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T(" SELECT CARD CHECKSUM\n"));
#endif

	CMD5Checksum checksum;
	pGame->GetChecksum(checksum);

	StringArray strings;

	for (int i = 0; i < pSelectCardStruct->pCardContainer->GetSize(); ++i)
	{
#ifdef LOG_CHECKSUM
		if (pGame->IsDeveloper())
			pGame->Log(_T("  [Card:%s(%d)]"), 
				pSelectCardStruct->pCardContainer->GetAt(i)->GetCardName(), i);
#endif

		strings.push_back(pSelectCardStruct->pCardContainer->GetAt(i)->GetCardName());
	}

	checksum.Update(strings);

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T("\n  [MinSelect:%04x][MaxSelect:%04x]\n"), 
			static_cast<WORD>(GET_INTEGER(pSelectCardStruct->nMinSelect)),
			static_cast<WORD>(GET_INTEGER(pSelectCardStruct->nMaxSelect)));
#endif

	checksum.Update(
		static_cast<DWORD>(
			MAKELPARAM(static_cast<WORD>(GET_INTEGER(pSelectCardStruct->nMinSelect)),
					   static_cast<WORD>(GET_INTEGER(pSelectCardStruct->nMaxSelect)))));

	GUID finalChecksum = checksum.GetFinalChecksum();

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T(" SELECT CARD FINAL CHECKSUM: %s\n"), Guid(finalChecksum).ToString());
#endif

	return finalChecksum;
#endif
}

GUID CNetInterface::GetOrderCardChecksum(CGame* pGame, OrderCardsData* pOrderCardStruct)
{
#ifdef NO_CHECKSUM
	return GUID_NULL;
#else

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T(" ORDER CARD CHECKSUM\n"));
#endif

	CMD5Checksum checksum;
	pGame->GetChecksum(checksum);

	StringArray strings;

	for (int i = 0; i < pOrderCardStruct->pCardContainer->GetSize(); ++i)
	{
#ifdef LOG_CHECKSUM
		if (pGame->IsDeveloper())
			pGame->Log(_T("  [Card:%s(%d)]"), 
				pOrderCardStruct->pCardContainer->GetAt(i)->GetCardName(), i);
#endif
		strings.push_back(pOrderCardStruct->pCardContainer->GetAt(i)->GetCardName());
	}

	checksum.Update(strings);

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T("\n  [ReadOnly:%02x]\n"), static_cast<BYTE>(pOrderCardStruct->bReadOnly));
#endif

	checksum.Update(static_cast<BYTE>(pOrderCardStruct->bReadOnly));

	GUID finalChecksum = checksum.GetFinalChecksum();

#ifdef LOG_CHECKSUM
	if (pGame->IsDeveloper())
		pGame->Log(_T(" ORDER CARD CHECKSUM: %s\n"), Guid(finalChecksum).ToString());
#endif

	return finalChecksum;
#endif
}

void CNetInterface::SendSelectAction(const CActionContainer* pActionContainer, int nSelectedAction, GUID checksum)
{
	m_cpRemoteUser->SendSelectAction(nSelectedAction, checksum);
}

void CNetInterface::SendSelectCard(SelectCardsData* pSelectCardStruct, GUID checksum)
{
	CString strSelectedCards;

	for (int i = 0; i < pSelectCardStruct->SelectedCards.GetSize(); ++i)
	{
		if (i)
			strSelectedCards += _T("|");
		strSelectedCards += pSelectCardStruct->SelectedCards.GetAt(i)->GetCardName();
	}

	m_cpRemoteUser->SendSelectCard(strSelectedCards, checksum);
}

void CNetInterface::SendOrderCard(OrderCardsData* pOrderCardStruct, GUID checksum)
{
	CString strOrderedCards;

	for (int i = 0; i < pOrderCardStruct->pCardContainer->GetSize(); ++i)
	{
		if (i)
			strOrderedCards += _T("|");
		strOrderedCards += pOrderCardStruct->pCardContainer->GetAt(i)->GetCardName();
	}

	m_cpRemoteUser->SendOrderCard(strOrderedCards, checksum);
}

//____________________________________________________________________________
//
CConsoleInterface::CConsoleInterface(CPlayer* pPlayer)
	: CInterface(pPlayer)
	, m_nDoneForPlayerTurn(-1)
	, m_bAutoUntap(true)
	, m_bHideTricks(false)
{
}

int CConsoleInterface::SelectAction(const CActionContainer* pActionContainer)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();	

	bool bSelectPass = false;

	if (m_nDoneForPlayerTurn != -1)
	{
		if (m_pGame->GetCurrentNode()->GetNodeId() != NodeId::DeclareBlockersStep1)
		{
			if (m_pPlayer->GetPlayerTurnNumber() > m_nDoneForPlayerTurn)
				m_nDoneForPlayerTurn = -1;
			else
				if (m_pPlayer->GetPlayerTurnNumber() == m_nDoneForPlayerTurn)
				{
					bSelectPass = m_pGame->GetStack().GetStackSize() == 0;

					if (!bSelectPass)
						m_nDoneForPlayerTurn = -1;
				}
		}
		else
			m_nDoneForPlayerTurn = -1;
	}

	int nSelectedAction = 0;

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ?
		CNetInterface::GetSelectActionChecksum(m_pGame, pActionContainer) :
		GUID_NULL);

	if (pActionContainer->GetSize() > 1)
	do
	{
		int nPassAction = -1;

		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			CAction* pAction = pActionContainer->GetAt(i).GetPointer();
			if (pAction->IsNodeAction())
			{
				CNodeAction* pNodeAction = (CNodeAction*)pAction;

				if (pNodeAction->GetNodeId() == NodeId::BeginningOfCombatStep)
					continue;

				if (nPassAction != -1)
				{
					nPassAction = -1;
					break;
				}

				nPassAction = i;
			}
			else
			if (pAction->IsStackPassAction())
			{
				if (nPassAction != -1)
				{
					nPassAction = -1;
					break;
				}

				nPassAction = i;
			}
		}

		if (nPassAction != -1 && bSelectPass)
		{
			nSelectedAction = nPassAction;
			break;
		}

		if (m_bHideTricks)
		{
			int nNontrick = -1;
			for (int i = 0; i < pActionContainer->GetSize(); ++i)
			{
				if (!pActionContainer->GetAt(i)->IsTrick())
					if (nNontrick != -1)
					{
						nNontrick = -1;
						break;
					}
					else
						nNontrick = i;
			}

			if (nNontrick != -1)
			{
				nSelectedAction = nNontrick;
				break;
			}
		}

		if (m_bAutoUntap)
		{
			int nUntap = -1;
			for (int i = 0; i < pActionContainer->GetSize(); ++i)
			{
				if (pActionContainer->GetAt(i)->IsUntapAction())
				{
					nUntap = i;
					break;
				}
			}

			if (nUntap != -1)
			{
				nSelectedAction = nUntap;
				break;
			}
		}

		PrintState();

		bool bDone;
		do
		{
			bDone = true;
			_tprintf(_T("Please select:\n"));

			for (int i = 0; i < pActionContainer->GetSize(); ++i)
			{
				if (m_bHideTricks && pActionContainer->GetAt(i)->IsTrick())
					continue;

				if (i == nPassAction)
					_tprintf(_T("%cp) %s\n"), 
						pActionContainer->GetAt(i)->IsTrick() ? _T('?') : _T(' '), pActionContainer->GetAt(i)->GetActionName());
				else
					_tprintf(_T("%c%d) %s\n"), 
						pActionContainer->GetAt(i)->IsTrick() ? _T('?') : _T(' '),
						i + 1, pActionContainer->GetAt(i)->GetActionName());
			}

			if (nPassAction != -1)
				_tprintf(_T(" d) done for the turn\n"));
			_tprintf(_T(" c) configuration\n"));
			_tprintf(_T(" q) quit\n"));

			CString strInput(GetInput(1, pActionContainer->GetSize(),
				nPassAction != -1 ? _T("pqdc") : _T("cq")));

			if (_istdigit(strInput[0]))
				nSelectedAction = _ttoi(strInput) - 1;
			else
			switch(strInput[0])
			{
			case _T('c'): 
				Configuration(); 
				bDone = false;
				break;
			case _T('d'): m_nDoneForPlayerTurn = m_pPlayer->GetPlayerTurnNumber(); // fall through to pass
			case _T('p'): nSelectedAction = nPassAction; break;
			default:
			case _T('q'): nSelectedAction = -1; break;
			}

		} while (!bDone);

	} while (false);

	// Send action selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendSelectAction(pActionContainer, nSelectedAction, checksum);
	}

	RestorePriorityPlayer();

	return nSelectedAction;
}

BOOL CConsoleInterface::SelectCard(SelectCardsData* pSelectCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ?
		CNetInterface::GetSelectCardChecksum(m_pGame, pSelectCardStruct) :
		GUID_NULL);

	_tprintf(_T("%s\n"), pSelectCardStruct->strCaption);
	
	do
	{
		_tprintf(_T("%s:\n"), pSelectCardStruct->strTitle);

		for (int i = 0; i < pSelectCardStruct->pCardContainer->GetSize(); ++i)
		{
			const CCard* pCard = pSelectCardStruct->pCardContainer->GetAt(i);
			_tprintf(_T("%s%d) %s\n"),
				pSelectCardStruct->SelectedCards.HasCard(pCard) ? _T("*") : _T(" "),
				i + 1,
				pCard->GetCardType().IsCreature() ? 
					((CCreatureCard*)pCard)->GetCreatureName(TRUE) : pCard->GetCardName());
		}

		_tprintf(_T(" d) done\n"));

		CString strInput(GetInput(1, pSelectCardStruct->pCardContainer->GetSize(), _T("d")));

		if (_istdigit(strInput[0]))
		{
			int nSelection = _ttoi(strInput) - 1;

			CCard* pCard = pSelectCardStruct->pCardContainer->GetAt(nSelection);

			if (pSelectCardStruct->SelectedCards.HasCard(pCard))
				pSelectCardStruct->SelectedCards.RemoveCard(pCard);
			else
				pSelectCardStruct->SelectedCards.AddCard(pCard, CardPlacement::Top);

			continue;
		}

		if (GET_INTEGER(pSelectCardStruct->nMaxSelect) || GET_INTEGER(pSelectCardStruct->nMinSelect))
		{
			int nCount = pSelectCardStruct->SelectedCards.GetSize();
			if (nCount < GET_INTEGER(pSelectCardStruct->nMinSelect))
			{
				_tprintf(_T("Please select at least %d card(s)\n"), GET_INTEGER(pSelectCardStruct->nMinSelect));
				continue;
			}
		
			if (nCount > GET_INTEGER(pSelectCardStruct->nMaxSelect))
			{
				_tprintf(_T("Please select no more than %d card(s)\n"), GET_INTEGER(pSelectCardStruct->nMaxSelect));
				continue;
			}

			break;
		}
		
	} while (true);

	// Send selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendSelectCard(pSelectCardStruct, checksum);
	}

	RestorePriorityPlayer();

	return TRUE;
}

BOOL CConsoleInterface::OrderCards(OrderCardsData* pOrderCardStruct)
{
	ATLASSERT(!m_pGame->IsThinking());
	SetPriorityPlayer();

	std::list<CNetInterface*> remoteInterfaces;
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			remoteInterfaces.push_back(pNetInterface);
	}

	GUID checksum = (remoteInterfaces.size() ? 
		CNetInterface::GetOrderCardChecksum(m_pGame, pOrderCardStruct) :
		GUID_NULL);
	
	do
	{
		_tprintf(_T("%s%s:\n"), pOrderCardStruct->strCaption,
			!pOrderCardStruct->bReadOnly ? _T("(enter # to move card up)") : _T(""));	

		for (int i = 0; i < pOrderCardStruct->pCardContainer->GetSize(); ++i)
		{
			const CCard* pCard = pOrderCardStruct->pCardContainer->GetAt(i);

			if (i == 0)
				_tprintf(_T("    "));
			else
				_tprintf(_T(" %d) "), i + 1); 

			_tprintf(_T("%s%s\n"),
				pCard->GetCardType().IsCreature() ? 
					((CCreatureCard*)pCard)->GetCreatureName(TRUE) : pCard->GetCardName(),
					!i ? _T(" (top)") : (i == pOrderCardStruct->pCardContainer->GetSize() - 1 ? _T(" (bottom)") : _T("")));
		}

		_tprintf(_T(" d) done\n"));

		CString strInput(GetInput(
			2, pOrderCardStruct->bReadOnly ? -1 : pOrderCardStruct->pCardContainer->GetSize(), _T("d")));

		if (_istdigit(strInput[0]))
		{
			if (!pOrderCardStruct->bReadOnly)
			{
				int nSelection = _ttoi(strInput) - 1;

				CCard* pCard = pOrderCardStruct->pCardContainer->GetAt(nSelection);
				pOrderCardStruct->pCardContainer->RemoveAt(nSelection);
				pOrderCardStruct->pCardContainer->InsertAt(nSelection - 1, pCard);
			}
		}
		else
			if (strInput == _T("d"))
				break;

	} while (true);

	// Send action selection to remote player(s)
	for (std::list<CNetInterface*>::const_iterator i = remoteInterfaces.begin(); i != remoteInterfaces.end(); ++i)
	{
		(*i)->SendOrderCard(pOrderCardStruct, checksum);
	}

	RestorePriorityPlayer();

	return TRUE;
}

CString CConsoleInterface::GetInput(int nMinNumber, int nMaxNumber, LPCTSTR strOtherChars)
{
	do
	{
		TCHAR strInput[256];
		if (!_getts_s(strInput, ARRAY_SIZE(strInput) - 1))
			continue;

		CString strTemp(strInput);
		strTemp.Trim();

		if (strTemp.IsEmpty())
			continue;

		if (_istdigit(strTemp[0]))
		{
			int nNumber = _ttoi(strTemp);
			if (nNumber < nMinNumber || nNumber > nMaxNumber)
			{
				_tprintf(_T("Invalid input\n"));
				continue;
			}

			return strTemp;
		}

		if (strTemp.GetLength() == 1)
		{
			strTemp = strTemp.MakeLower();
			CString strTemp2(strOtherChars);
			strTemp2 = strTemp2.MakeLower();
			for (int i = 0; i < strTemp2.GetLength(); ++i)
				if (strTemp[0] == strTemp2[i])
					return strTemp;
		}

		_tprintf(_T("Invalid Input\n"));

	} while (true);

	return _T("");
}

void CConsoleInterface::PrintState()
{
	_tprintf(_T("\n"));

	StringArray lines;

	// Player info
	for (int i = m_pGame->GetPlayerCount() - 1; i >= 0; --i)
	{
		const CPlayer* pPlayer = m_pGame->GetPlayer(i);
		pPlayer->GetState(lines, FALSE, pPlayer == m_pGame->GetPriorityPlayer());
	}

	// Stack info
	m_pGame->GetStack().GetState(lines);

	for (size_t j = 0; j < lines.size(); ++j)
		_tprintf(_T("%s\n"), lines[j]);

	_tprintf(_T("%s's %s\n"),
		m_pGame->GetActivePlayer()->GetPlayerName(),
		m_pGame->GetActivePlayer()->GetGraph()->GetCurrentNode()->GetNodeName());
}

void CConsoleInterface::Configuration()
{
	do
	{
		_tprintf(_T("\nConfiguration\nPlease select:\n"));

		_tprintf(_T(" u) Auto untap: %s\n"),
			m_bAutoUntap ? _T("ON") : _T("OFF"));
		_tprintf(_T(" h) Hide questionable selections: %s\n"),
			m_bHideTricks ? _T("ON") : _T("OFF"));
		_tprintf(_T(" v) Verbose output: %s\n"),
			m_pGame->GetVerboseConsoleOutput() ? _T("ON") : _T("OFF"));

		_tprintf(_T(" d) done\n"));

		CString strInput(GetInput(-1, 0, _T("uhvd")));

		switch(strInput[0])
		{
		case _T('d'): return;
		case _T('u'): m_bAutoUntap = !m_bAutoUntap; break;
		case _T('h'): m_bHideTricks = !m_bHideTricks; break;
		case _T('v'): m_pGame->SetVerboseConsoleOutput(!m_pGame->GetVerboseConsoleOutput()); break;
		}

	} while (true);
}