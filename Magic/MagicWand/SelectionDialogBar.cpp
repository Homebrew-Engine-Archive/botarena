// SelectionDialogBar.cpp : implementation file
//

#include "stdafx.h"
#include "SelectionDialogBar.h"
#include "MainFrm.h"
#include "MagicWandView.h"
#include "SelectionTimerDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CSelectionDialogBar dialog
//

CSelectionDialogBar::CSelectionDialogBar()
	: CSizingControlBar()
	, m_nFirstUndoMove(-1)
	, m_nDoneForPlayerTurn(-1)
{
	m_hMoveSelected = NULL;
	m_pMoveContainer = NULL;
	m_pnSelectedMove = NULL;

	m_hMoveSelected = CreateEvent(NULL, FALSE, FALSE, NULL);

	m_bUpdating = FALSE;

	m_pStackDialog = NULL;

	m_nSelectionTimerCountdown = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SELECTION_TIMER_COUNTDOWN, 3);
	m_bDelaySelectInMain = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DELAY_SELECT_IN_MAIN, 0) ? TRUE : FALSE;
	m_bDelaySelectInOthers = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DELAY_SELECT_IN_OTHERS, 0) ? TRUE : FALSE;
	m_hwndSelectionTimer = NULL;
}

CSelectionDialogBar::~CSelectionDialogBar()
{
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SELECTION_TIMER_COUNTDOWN, m_nSelectionTimerCountdown);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DELAY_SELECT_IN_MAIN, m_bDelaySelectInMain ? 1 : 0);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DELAY_SELECT_IN_OTHERS, m_bDelaySelectInOthers ? 1 : 0);
}

void CSelectionDialogBar::Quit()
{
	SelectMove(-1);
	return;
}

void CSelectionDialogBar::SelectMove(int nMoveIndex)
{
	if (!m_pMoveContainer || m_bUpdating || !GetSafeHwnd())
		return;

	if (m_hwndSelectionTimer)
		::PostMessage(m_hwndSelectionTimer, WM_CLOSE, 0, 0);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CGraphDialogBar* pGraph = pMainWnd->GetGraphDialogBar();

	if (pGraph->GetSafeHwnd())
		pGraph->SetWindowText(_T("Thinking..."));

	CMagicWandView* pView = pMainWnd->GetView();
	pView->SetBeginningCombat(-1);
	pView->SetDefaultAction(-1);

	*m_pnSelectedMove = nMoveIndex;
	m_pMoveContainer = NULL;
	m_pnSelectedMove = NULL;
	m_nFirstUndoMove = -1;

	if (m_SelectionList.GetSafeHwnd())
		m_SelectionList.DeleteAllItems();
	//m_SelectionList.UpdateWindow();

	if (m_pStackDialog)
	{
		if (!m_pStackDialog->GetSafeHwnd())
			m_pStackDialog = NULL;
		else
			m_pStackDialog->ShowWindow(SW_HIDE);
	}

	pView->RemoveSelections();

	if (m_ShowTrickButton.GetSafeHwnd())
		pView->GetGame()->TrickInManaControl(m_ShowTrickButton.GetCheck() == BST_CHECKED);
	
	pView->UpdateWindow();////changed 28-01-2011 Now Action window is not removed from screen after you play a card...

	SetEvent(m_hMoveSelected);

	/*if (pMainWnd->IsFullScreen())
		pMainWnd->HideSelections();*/
}

void CSelectionDialogBar::HighlightMove(int nMoveIndex)
{
	m_bUpdating = TRUE;

	int nItemIndex = -1;
	for (int i = 0; i < m_SelectionList.GetItemCount(); ++i)
		if (m_SelectionList.GetItemData(i) == nMoveIndex)
		{
			nItemIndex = i;
			break;
		}

	if (nItemIndex != -1)
	{
		m_SelectionList.SelectItem(nItemIndex);
		m_SelectionList.FocusItem(nItemIndex);
		m_SelectionList.SetFocus();
	}

	m_bUpdating = FALSE;
}

int CSelectionDialogBar::AddSelectionToMenu(CMenu* pMenu, CCard* pCard,
											BOOL bSingleMoveIsDefault,
											BOOL bSingleTapUnTapIsDefault)
{
	ATLASSERT(!bSingleMoveIsDefault || !bSingleTapUnTapIsDefault);

	if (!m_pMoveContainer)
		return 0;

	int nCount = 0;
	int nTapUntap = -1;
	BOOL bMultiTapUntapFound = FALSE;
	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if (m_ShowTrickButton.GetCheck() || !pAction->IsTrick())
		{
			if (pAction->GetOriginatingCard() == pCard 
				//|| pAction->GetAssociatedCard() == pCard
				)
			{
				pMenu->AppendMenu(MF_STRING, IDM_MOVE_FIRST + i, pAction->GetActionText());
				++nCount;

				if ((pAction->IsTapAction() || pAction->IsUntapAction()) && !bMultiTapUntapFound)
					if (nTapUntap == -1)
						nTapUntap = i;
					else
						bMultiTapUntapFound = TRUE;

				if (nCount == 10)
				{
					pMenu->AppendMenu(MF_STRING, IDM_VIEW_SELECTIONS2, _T("More actions..."));
					break;
				}
			}
		}
	}

	if (nCount)
	{
		pMenu->AppendMenu(MF_SEPARATOR, 0, _T(""));

		if ((bSingleMoveIsDefault || bSingleTapUnTapIsDefault))
		{
			if ((nCount == 1) && bSingleMoveIsDefault)
			{
				pMenu->SetDefaultItem(pMenu->GetMenuItemID(0));
			}
			else
				if (!bMultiTapUntapFound && (nTapUntap != -1) && bSingleTapUnTapIsDefault)
				{
					pMenu->SetDefaultItem(IDM_MOVE_FIRST + nTapUntap);
				}
		}
	}

	return nCount;
}

BOOL CSelectionDialogBar::HasMove(const CCard* pCard, BOOL bTricks) const
{
	if (!m_pMoveContainer)
		return FALSE;

	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if (!pAction->IsTrick() || bTricks)
		{
			if (pAction->GetOriginatingCard() == pCard 
				//|| pAction->GetAssociatedCard() == pCard
				)
				return TRUE;
		}
	}

	return FALSE;
}

int CSelectionDialogBar::GetMoveIndex(CCard* pSrcCard, CCard* pDesCard, BOOL bTricks) const
{
	if (!m_pMoveContainer)
		return -1;

	int nMoveIndex = -1;
	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if (bTricks || !pAction->IsTrick())
		{
			if ((pAction->GetOriginatingCard() == pSrcCard) &&
				(pAction->GetAssociatedCard() == pDesCard))
			{
				if (nMoveIndex != -1)
					return -1;	// Only return unique matches

				nMoveIndex = i;
			}
		}
	}

	return nMoveIndex;
}

int CSelectionDialogBar::GetMoveIndex(CCard* pSrcCard, CPlayer* pDesPlayer, BOOL bTricks) const
{
	if (!m_pMoveContainer)
		return -1;

	int nMoveIndex = -1;
	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if (bTricks || !pAction->IsTrick())
		{
			if ((pAction->GetOriginatingCard() == pSrcCard) &&
				(pAction->GetAssociatedPlayer() == pDesPlayer))
			{
				if (nMoveIndex != -1)
					return -1;	// Only return unique matches

				nMoveIndex = i;
			}
		}
	}

	return nMoveIndex;
}

BOOL CSelectionDialogBar::AutoMove() const
{
	return m_AutoMoveButton.GetCheck();
}

BOOL CSelectionDialogBar::AutoUntap() const
{
	return m_AutoUntapButton.GetCheck();
}

BOOL CSelectionDialogBar::ShowTrick() const
{
	return m_ShowTrickButton.GetCheck();
}

void CSelectionDialogBar::SetAutoMove(BOOL bAutoMove)
{
	m_AutoMoveButton.SetCheck(bAutoMove);
}

void CSelectionDialogBar::SetAutoUntap(BOOL bAutoUntap)
{
	m_AutoUntapButton.SetCheck(bAutoUntap);
}

void CSelectionDialogBar::SetShowTrick(BOOL bShowTrick)
{
	m_ShowTrickButton.SetCheck(bShowTrick);
	OnShowTricks();
}

void CSelectionDialogBar::SetDoneForPlayerTurn()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CMagicWandView* pView = pMainWnd->GetView();
	CGame* pGame = pView->GetGame();
	m_nDoneForPlayerTurn = pGame->GetPriorityPlayer()->GetPlayerTurnNumber();
}

void CSelectionDialogBar::UpdateMTGFont()
{
	m_SelectionList.SetUseMTGSymbols(CCardStore::GetInstance()->GetShowMTGSymbols());
}

void CSelectionDialogBar::UpdateList()
{
	if (!m_pMoveContainer)
		return;

	m_bUpdating = TRUE;

	m_SelectionList.DeleteAllItems();

	int nBeginningCombat = -1;
	int nDefaultMove = -1;
	bool bShowBar = false;

	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if ((m_ShowTrickButton.GetCheck() || !pAction->IsTrick())
			//&& !pAction->IsHidden()	Deprecated
			)
		{
			int nImageIndex = 0;
			if (pAction->IsTrick())
				nImageIndex = 2;
			else
				if (pAction->IsDefaultAction())
					nImageIndex = 1;
				else
					if (pAction->IsBeginningCombat())
						nImageIndex = 3;

			int nIndex =
				m_SelectionList.InsertItem2(m_SelectionList.GetItemCount(), pAction->GetActionText(), nImageIndex);
			m_SelectionList.SetItemData(nIndex, i);
			//m_SelectionList.SetColumnWidth(0, LVSCW_AUTOSIZE);		//Horizontal scroll bar (slow down the game a lot)
		}

		if (pAction->IsBeginningCombat())
		{
			ATLASSERT(nBeginningCombat == -1);
			nBeginningCombat = i;
		}
		else
		if (pAction->IsDefaultAction())
		{
			VERIFY(nDefaultMove == -1);
			nDefaultMove = i;
		}
		else
		if (!pAction->GetOriginatingCard() /*&& !pAction->GetAssociatedCard()*/)
			bShowBar = true;
	}

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
//	pMainWnd->ShowControlBar(pMainWnd->GetSelectionDialogBar(), TRUE, FALSE);
	CMagicWandView* pView = pMainWnd->GetView();
	pView->SetBeginningCombat(nBeginningCombat);
	pView->SetDefaultAction(nDefaultMove);
	pView->RefreshCards();

	if (nBeginningCombat != -1)
		pMainWnd->GetGraphDialogBar()->EnableAttackButton();

	m_SelectionList.SortColumn(0, m_SelectionList.GetSortOrder());
	m_SelectionList.SetColumnWidth(0, LVSCW_AUTOSIZE);//Horizontal Scroll bar

	m_bUpdating = FALSE;

	if (bShowBar)
		pMainWnd->ShowSelections();
}

void CSelectionDialogBar::ShowSelectionTimerDialog(int nMoveIndex)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CMagicWandView* pView = pMainWnd->GetView();

	CSelectionTimerDialog* pSelectionTimerDialog = new CSelectionTimerDialog(pView);
	pSelectionTimerDialog->m_nMaxSeconds = m_nSelectionTimerCountdown;
	pSelectionTimerDialog->m_nMoveIndex = nMoveIndex;
	pSelectionTimerDialog->m_strAutoMove = m_pMoveContainer->GetAt(nMoveIndex)->GetActionText();
	pSelectionTimerDialog->Create(CSelectionTimerDialog::IDD, pView);

	m_hwndSelectionTimer = pSelectionTimerDialog->GetSafeHwnd();

	CRect ViewRect;
	pView->GetWindowRect(&ViewRect);

	CRect TimerRect;
	pSelectionTimerDialog->GetWindowRect(TimerRect);

	CRect NewTimerRect;
	NewTimerRect.bottom = ViewRect.bottom - 4;
	NewTimerRect.right = ViewRect.right - 40;
	NewTimerRect.top = NewTimerRect.bottom - TimerRect.Height();
	NewTimerRect.left = NewTimerRect.right - TimerRect.Width();

	pSelectionTimerDialog->MoveWindow(&NewTimerRect, FALSE);
	pSelectionTimerDialog->ShowWindow(SW_SHOW);
}

void CSelectionDialogBar::SelectFirstUndoMove()
{
	ATLASSERT(m_nFirstUndoMove != -1);
	if (m_nFirstUndoMove == -1)
		return;

	SelectMove(m_nFirstUndoMove);
}

#ifdef GUI_COMBAT_WIP
BOOL CSelectionDialogBar::HandleCombatDamageAssignments()
{
	if (!m_pMoveContainer)
		return FALSE;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CMagicWandView* pView = pMainWnd->GetView();
	CGame* pGame = pView->GetGame();

	if (pGame->GetCurrentNode()->GetNodeId() != NodeId::CombatDamageStep1a &&
		pGame->GetCurrentNode()->GetNodeId() != NodeId::CombatDamageStep2a)
	{
		m_CombatDamageAssignments.clear();
		return FALSE;
	}

	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		ATLASSERT(pAction->IsCombatDamageAssignment());

		if (!pAction->IsCombatDamageAssignment())
		{
			ATLASSERT(false);
			return FALSE;
		}

		const CCombatDamageAssignmentAction* pAssignmentAction = (const CCombatDamageAssignmentAction*)pAction;

		ATLASSERT(!pAssignmentAction->IsSimpleAssignment());

		if (pAssignmentAction->IsSimpleAssignment())
		{
			ATLASSERT(false);
			return FALSE;
		}

		const CSubjectGroup& subjects(pAssignmentAction->GetSubjectGroup());
		const CCard* pSourceCard = subjects.GetSourceCard();

		ContextValue totalValue(subjects.GetTotalValue());
		int nPoints = -totalValue.nValue1;

		ATLASSERT(nPoints);
		if (!nPoints)
		{
			ATLASSERT(false);
			return FALSE;
		}

		CombatDamageAssignments::iterator it = m_CombatDamageAssignments.find(pSourceCard);
		if (it == m_CombatDamageAssignments.end())
		{
			CombatDamageAssignment assignment;
			assignment.pSourceCard = pSourceCard;
			assignment.nPoints = nPoints;
			assignment.nAssignedPoints = 0;
			assignment.subjects = subjects;
			assignment.subjects.RemoveAllValues();
			m_CombatDamageAssignments[pSourceCard] = assignment;
		}
		else
		{
			ATLASSERT(it->second.nPoints == nPoints);
			if (it->second.nPoints != nPoints)
				return FALSE;

			if (it->second.nPoints == it->second.nAssignedPoints)
			{
				if (subjects == it->second.subjects)
				{
					m_CombatDamageAssignments.erase(it);
					SelectMove(i);
					return TRUE;
				}
			}

			for (CSubjectGroup::CardSubjectIterator i = subjects.CardSubjectBegin(); i != subjects.CardSubjectEnd(); ++i)
			{
				const CCard* pCard = i->GetPointer();
				if (!it->second.subjects.HasSubject(pCard))
					it->second.subjects.AddSubject(pCard);
			}
			
			for (CSubjectGroup::PlayerSubjectIterator i = subjects.PlayerSubjectBegin(); i != subjects.PlayerSubjectEnd(); ++i)
			{
				const CPlayer* pPlayer = *i;
				if (!it->second.subjects.HasSubject(pPlayer))
					it->second.subjects.AddSubject(pPlayer);
			}
		}
	}

	for (CombatDamageAssignments::iterator it = m_CombatDamageAssignments.begin();
		 it != m_CombatDamageAssignments.end();
		 )
	{
		bool bFound = false;
		for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
		{
			const CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();
			const CCombatDamageAssignmentAction* pAssignmentAction = (const CCombatDamageAssignmentAction*)pAction;
			const CSubjectGroup& subjects(pAssignmentAction->GetSubjectGroup());
			const CCard* pSourceCard = subjects.GetSourceCard();

			if (pSourceCard == it->second.pSourceCard)
			{
				bFound = true;
				break;
			}
		}

		if (!bFound)
			m_CombatDamageAssignments.erase(it++);
		else
			++it;
	}

	return FALSE;
}
#endif

//_____________________________________________________________________________
//
// CSelectionDialogBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CSelectionDialogBar, CSizingControlBar)
    ON_WM_CREATE()
	ON_NOTIFY(NM_DBLCLK, IDC_SELECTION_LIST, OnDblclkSelectionList)
	ON_WM_DESTROY()
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_SELECTION_LIST, OnItemchangedSelectionList)
	ON_MESSAGE(WM_APP_INTERFACE_SELECT_ACTION, OnSelectMoves)
	ON_BN_CLICKED(IDC_SHOW_TRICKS, OnShowTricks)
    ON_WM_SIZE()
END_MESSAGE_MAP()

int CSelectionDialogBar::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
    if (CSizingControlBar::OnCreate(lpCreateStruct) == -1)
        return -1;

	m_SelectionList.Create(LVS_REPORT | LVS_SINGLESEL | WS_TABSTOP | WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 0, 0), this, IDC_SELECTION_LIST);
	m_SelectionList.ModifyStyleEx(0, WS_EX_CLIENTEDGE);

	m_SelectionList.Initialize(IDC_SELECTION_LIST, this);

	m_SelectionList.InsertColumn(0, _T("Actions"), LVCFMT_LEFT);

	m_SelectionList.SetBar(this);

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 4, 1);
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_MOVE));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_PASS));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_TRICK_MOVE));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_ATTACK));
	
	m_SelectionList.SetImageList(&m_ImageList, LVSIL_SMALL);

	m_SelectionList.SetColumnWidth(0, LVSCW_AUTOSIZE_USEHEADER);
	//m_SelectionList.ColorSortColumn(FALSE);
	m_SelectionList.SortColumn(0);

    if (!m_Font.CreatePointFont(80, _T("MS Sans Serif")))
        return -1;

	m_ShowTrickButton.Create(_T("All Actions"), BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 80, 16), this, IDC_SHOW_TRICKS);
    m_ShowTrickButton.SetFont(&m_Font);
#if 0
	m_ShowTrickButton.SetCheck(0);
#else
	m_ShowTrickButton.SetCheck(
		g_pCoreApp->GetProfileInt(_T("Settings"), _T("Tricks"), 0));
#endif

	m_AutoUntapButton.Create(_T("Untap"), BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE,
		CRect(80, 0, 160, 16), this, IDC_AUTO_UNTAP);
    m_AutoUntapButton.SetFont(&m_Font);
	m_AutoUntapButton.SetCheck(
		g_pCoreApp->GetProfileInt(_T("Settings"), _T("Untap"), 1));

	m_AutoMoveButton.Create(_T("Auto"), BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE,
		CRect(160, 0, 240, 16), this, IDC_AUTO_SELECT);
    m_AutoMoveButton.SetFont(&m_Font);
	m_AutoMoveButton.SetCheck(
		g_pCoreApp->GetProfileInt(_T("Settings"), _T("Auto"), 0));

	UpdateMTGFont();

    return 0;
}

void CSelectionDialogBar::OnDblclkSelectionList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	LPNMITEMACTIVATE lpnmitem = (LPNMITEMACTIVATE)pNMHDR;

	if (lpnmitem->iItem >= 0)
		SelectMove(m_SelectionList.GetItemData(lpnmitem->iItem));
		
	*pResult = 0;
}

void CSelectionDialogBar::OnDestroy() 
{
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("Tricks"), m_ShowTrickButton.GetCheck());
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("Untap"), m_AutoUntapButton.GetCheck());
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("Auto"), m_AutoMoveButton.GetCheck());

	CSizingControlBar::OnDestroy();	
}

void CSelectionDialogBar::OnItemchangedSelectionList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	*pResult = 0;

	if (!m_pMoveContainer || m_bUpdating)
		return;

	int nIndex = m_SelectionList.GetItemData(pNMListView->iItem);
	const CAction* pAction = m_pMoveContainer->GetAt(nIndex).GetPointer();

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CMagicWandView* pView = pMainWnd->GetView();

	CCard* pCard = pAction->GetOriginatingCard();
	if (!pCard)
		pCard = pAction->GetAssociatedCard();

	if (pCard)
	{
		pView->RemoveSelections();
		pView->SelectCard(pCard);
	}

	// Use preview to show the associated card if any

	pCard = pAction->GetAssociatedCard();
	if (!pCard)
		pCard = pAction->GetOriginatingCard();

	if (pCard)
	{
		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCardByID(pCard->GetImageID());
		if (pCardEntry)
			pMainWnd->GetPreviewBar()->SetBitmap(pCardEntry);
	}
}

LRESULT CSelectionDialogBar::OnSelectMoves(WPARAM wParam, LPARAM lParam)
{
	VERIFY(!m_pMoveContainer && !m_pnSelectedMove);

	m_pMoveContainer = (const CActionContainer*)lParam;
	m_pnSelectedMove = (int*)wParam;

	UpdateData(FROM_UI);

	VERIFY(m_pMoveContainer->GetSize());

	int nFirstUntapIndex = -1;
	//int nFirstSimpleCombatDamageAssignment = -1;
	int nDisplayMoveCount = 0;
	int nDefaultMove = -1;
	m_nFirstUndoMove = -1;

	BOOL bShowTrick = m_ShowTrickButton.GetCheck();
	int nIndex = -1;
	for (int i = 0; i < m_pMoveContainer->GetSize(); ++i)
	{
		CAction* pAction = m_pMoveContainer->GetAt(i).GetPointer();

		if ((bShowTrick || !pAction->IsTrick())
			//&& !m_pMoveContainer->GetMove(i)->IsHidden()	Deprecated
			)
		{
			if (nIndex == -1)
				nIndex = i;
			++nDisplayMoveCount;
		}

		if (pAction->IsDefaultAction())
		{
			ATLASSERT(nDefaultMove == -1);
			nDefaultMove = i;
		}

		if (pAction->IsUntapAction())
		{
			if (nFirstUntapIndex == -1)
				nFirstUntapIndex = i;
		}
		/*
		else
		if (pAction->IsCombatDamageAssignment())
		{
			if (((CCombatDamageAssignmentAction*)pAction)->IsSimpleAssignment() &&
				nFirstSimpleCombatDamageAssignment == -1)
				nFirstSimpleCombatDamageAssignment = i;
		}*/
		else
		if (pAction->IsUndo())
		{
			if (m_nFirstUndoMove == -1)
				m_nFirstUndoMove = i;
		}
	}
	int nFirstMoveIndex = nIndex;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CMagicWandView* pView = pMainWnd->GetView();
	CGame* pGame = pView->GetGame();

	BOOL bPreCombat = FALSE;
	CNode* pCurrentNode = pGame->GetCurrentNode();
	if (pCurrentNode->GetNodeId() == NodeId::MainPhaseStep)
		bPreCombat = ((CMainNode*)pCurrentNode)->IsPreCombat();

	if (!pMainWnd->GetGraphDialogBar()->AlwaysStopNode(
			!pGame->GetActivePlayer()->IsLocal(),
			pCurrentNode->GetNodeId(),
			bPreCombat))
	{
		int nAutoSelectMove = -1;

		if (m_AutoMoveButton.GetCheck() && (nDisplayMoveCount == 1))
			nAutoSelectMove = nFirstMoveIndex;
		else
			if ((pGame->GetCurrentNode()->GetNodeId() == NodeId::UntapStep) &&
				m_AutoUntapButton.GetCheck() && nFirstUntapIndex != -1)
				nAutoSelectMove = nFirstUntapIndex;
		/*
			else
				if (m_AutoMoveButton.GetCheck() && (nFirstSimpleCombatDamageAssignment != -1))
					nAutoSelectMove = nFirstSimpleCombatDamageAssignment;
		*/

		if (nAutoSelectMove != -1)
		{
			if (m_nSelectionTimerCountdown &&
				((m_bDelaySelectInMain && (pGame->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep)) ||
				 (m_bDelaySelectInOthers && (pGame->GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep))))
				ShowSelectionTimerDialog(nAutoSelectMove);
			else
			{
				SelectMove(nAutoSelectMove);
				return 0;
			}
		}
	}

	if (pGame->GetStack().GetStackSize())
	{
		if (!m_pStackDialog)
		{
			m_pStackDialog = new CStackDialog;
			m_pStackDialog->Create(CStackDialog::IDD, ::AfxGetMainWnd());
		}
		m_pStackDialog->InitDialog(pGame);
		m_pStackDialog->ShowWindow(SW_SHOW);

		m_nDoneForPlayerTurn = -1;
	}
	else
		if (nDefaultMove != -1)
		{
			bool bSelect = false;
			if (m_nDoneForPlayerTurn != -1)
			{
				if (pGame->GetCurrentNode()->GetNodeId() != NodeId::DeclareBlockersStep1)
				{
					if (pGame->GetPriorityPlayer()->GetPlayerTurnNumber() > m_nDoneForPlayerTurn)
						m_nDoneForPlayerTurn = -1;
					else
						if (pGame->GetPriorityPlayer()->GetPlayerTurnNumber() == m_nDoneForPlayerTurn)
							bSelect = true;
				}
				else
					m_nDoneForPlayerTurn = -1;
			}

			if (bSelect || pMainWnd->GetGraphDialogBar()->AlwaysPassNode(
					!pGame->GetActivePlayer()->IsLocal(),
					pCurrentNode->GetNodeId(),
					bPreCombat))
			{
				SelectMove(nDefaultMove);
				return 0;
			}
		}	

#ifdef GUI_COMBAT_WIP
	if (nDefaultMove == -1)
		if (HandleCombatDamageAssignments())
			return 0;
#endif

	UpdateList();

//	pMainWnd->GetGraphDialogBar()->Blink();	// 11/10/2003: Removed
	pMainWnd->GetGraphDialogBar()->SetWindowText(_T("Ready"));

	return 0;
}

void CSelectionDialogBar::OnShowTricks() 
{
	UpdateData(FROM_UI);

	UpdateList();
}

void CSelectionDialogBar::OnSize(UINT nType, int cx, int cy) 
{
    CSizingControlBar::OnSize(nType, cx, cy);

    CRect rcClient;
    GetClientRect(rcClient);

	rcClient.top += 18;

	m_SelectionList.MoveWindow(rcClient);

	m_SelectionList.GetClientRect(rcClient);
	m_SelectionList.SetColumnWidth(0, rcClient.Width());
}
