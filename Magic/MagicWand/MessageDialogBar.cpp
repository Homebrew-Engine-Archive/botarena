// MessageDialogBar.cpp : implementation file
//

#include "stdafx.h"
#include "MessageDialogBar.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CMessageDialogBar dialog
//

CMessageDialogBar::CMessageDialogBar()
	: CSizingControlBar()
{
	m_pSpeakObject.CoCreateInstance(CLSID_SpVoice);

	m_nComputerImage = -1;
	m_nHumanImage = -1;
	m_nDebugImage = -1;
	m_nBugImage = -1;
	m_nTurnNumber = 1;
	m_nTurnMessageNumber = 1;
	m_nMessageNumber = 1;
	m_bConcise = FALSE;
	m_bOpponentsOnly = FALSE;
	m_nShowTurnNumber = -1;
}

CMessageDialogBar::~CMessageDialogBar()
{
	for (size_t i = 0; i < m_Messages.size(); ++i)
		delete m_Messages[i];

	m_pSpeakObject.Release();
}

void CMessageDialogBar::ResetData()
{
	m_nTurnNumber = 1;
	m_nTurnMessageNumber = 1;
	m_nMessageNumber = 1; 

	m_TurnSelection.ResetContent();

	int nFirstItem = m_TurnSelection.AddString(_T("All Turns"));
	m_TurnSelection.SetItemData(nFirstItem, -1);
	if (m_nShowTurnNumber == -1)
		m_TurnSelection.SetCurSel(nFirstItem);
	
	int nItem = m_TurnSelection.AddString(_T("Current Turn"));
	m_TurnSelection.SetItemData(nItem, -2);
	if (m_nShowTurnNumber == -2)
		m_TurnSelection.SetCurSel(nItem);

	nItem = m_TurnSelection.AddString(_T("Current and Last Turn"));
	m_TurnSelection.SetItemData(nItem, -3);
	if (m_nShowTurnNumber == -3)
		m_TurnSelection.SetCurSel(nItem);

	nItem = m_TurnSelection.AddString(_T("Turn 1"));
	m_TurnSelection.SetItemData(nItem, 1);

	if (m_TurnSelection.GetCurSel() == -1)
	{
		m_TurnSelection.SetCurSel(nFirstItem);
		m_nShowTurnNumber = -1;
	}
}

void CMessageDialogBar::RemoveAllMessages()
{
	if (m_MessageList.GetSafeHwnd())
	{
		m_MessageList.DeleteAllItems();
		
		for (size_t i = 0; i < m_Messages.size(); ++i)
			delete m_Messages[i];

		m_Messages.clear();
	}
}

void CMessageDialogBar::AddMessage(LPCTSTR strMessage, int nImageIndex, int nTurnNumber,
								   MessageImportance importance)
{
	if (!GetSafeHwnd())
		return;

	CString strDrawManaText;
	CString strDrawText;
	PrepareTextWithSymbols(strMessage, strDrawManaText, strDrawText);

	if (nTurnNumber == -1)
		nTurnNumber = m_nTurnNumber;

	if (nTurnNumber != m_nTurnNumber)
	{
		m_nTurnNumber = nTurnNumber;
		m_nTurnMessageNumber = 1;

		CString strTurnNumber;
		strTurnNumber.Format(_T("Turn %d"), m_nTurnNumber);

		int nItem = m_TurnSelection.AddString(strTurnNumber);
		m_TurnSelection.SetItemData(nItem, m_nTurnNumber);

		if (m_nShowTurnNumber == -2)
			m_MessageList.DeleteAllItems();
		else
			if (m_nShowTurnNumber == -3)
				for (int i = m_MessageList.GetItemCount() - 1; i >= 0; --i)
					if (m_MessageList.GetItemData(i) < DWORD(m_nTurnNumber - 1))
						m_MessageList.DeleteItem(i);
	}
	else
		++m_nTurnMessageNumber;

	MessageItem* pNewItem = new MessageItem;
	pNewItem->strMessage = strDrawText + CMListCtrl2::s_strSeparator + strDrawManaText;
	pNewItem->nImageIndex = nImageIndex;
	pNewItem->nTurn = nTurnNumber;
	pNewItem->nTurnMessageNumber = m_nTurnMessageNumber;
	pNewItem->nMessageNumber = m_nMessageNumber;
	pNewItem->Importance = importance;

	m_Messages.push_back(pNewItem);

	if (((importance == MessageImportance::High) || !m_bConcise) && 
		((pNewItem->nImageIndex == m_nComputerImage) || !m_bOpponentsOnly) &&
		(m_nShowTurnNumber < 0))
	{
		CString strMessageNumber;
		strMessageNumber.Format(_T("%d"), m_nMessageNumber);

		int nItem = m_MessageList.InsertItem(m_MessageList.GetItemCount(), strMessageNumber, nImageIndex);

		CString strTurnNumber;
		strTurnNumber.Format(_T("%d"), m_nTurnNumber);

		m_MessageList.SetItemText(nItem, 1, strTurnNumber);

		m_MessageList.SetItemText2(nItem, 2, pNewItem->strMessage);

		m_MessageList.SetColumnWidth(2, LVSCW_AUTOSIZE);//TESTING

		m_MessageList.SetItemData(nItem, nTurnNumber);
		m_MessageList.EnsureVisible(m_MessageList.GetItemCount() - 1, FALSE);
	}

	++m_nMessageNumber;
}

void CMessageDialogBar::SpeakMessage(LPCTSTR strMessage, BOOL bWait)
{
	USES_CONVERSION;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	if (m_pSpeakObject && pMainWnd->GetView()->SpeechEnabled())
	{
		CString strTemp(strMessage);
		strTemp.Replace(_T('/'), _T(' '));
		strTemp.Replace(_T("(s)"), _T("s"));
		strTemp.Replace(_T('('), _T(' '));
		strTemp.Replace(_T(')'), _T(' '));

		if (!bWait)
			m_pSpeakObject->Speak(T2CW(strTemp), SPF_ASYNC | SPF_IS_NOT_XML, 0);
		else
			m_pSpeakObject->Speak(T2CW(strTemp), SPF_DEFAULT | SPF_IS_NOT_XML, 0);
	}
}

BOOL CMessageDialogBar::SpeechAPI()
{
	return (m_pSpeakObject ? TRUE : FALSE);
}

int CMessageDialogBar::GetComputerImage()
{
	return m_nComputerImage;
}

int CMessageDialogBar::GetHumanImage()
{
	return m_nHumanImage;
}

int CMessageDialogBar::GetDebugImage()
{
	return m_nDebugImage;
}

int CMessageDialogBar::GetBugImage()
{
	return m_nBugImage;
}

void CMessageDialogBar::UpdateMTGFont()
{
	m_MessageList.SetUseMTGSymbols(CCardStore::GetInstance()->GetShowMTGSymbols());
}

void CMessageDialogBar::UpdateList()
{
	m_MessageList.DeleteAllItems();

	for (size_t i = 0; i < m_Messages.size(); ++i)
	{
		const MessageItem& item(*m_Messages[i]);

		if (((item.Importance == MessageImportance::High) || !m_bConcise) && 
			((item.nImageIndex == m_nComputerImage) || !m_bOpponentsOnly) &&
			((m_nShowTurnNumber == -1) || 
				((m_nShowTurnNumber == -2) && (item.nTurn == m_nTurnNumber)) ||
				((m_nShowTurnNumber == -3) && ((item.nTurn == m_nTurnNumber) || (item.nTurn == m_nTurnNumber - 1))) ||
				(item.nTurn == m_nShowTurnNumber)))
		{
			CString strMessageNumber;
			strMessageNumber.Format(_T("%d"), item.nMessageNumber);

			int nItem = m_MessageList.InsertItem(m_MessageList.GetItemCount(), strMessageNumber, item.nImageIndex);

			CString strTurnNumber;
			strTurnNumber.Format(_T("%d"), item.nTurn);

			m_MessageList.SetItemText(nItem, 1, strTurnNumber);

			m_MessageList.SetItemText2(nItem, 2, item.strMessage);

			m_MessageList.SetItemData(nItem, item.nTurn);
		}
	}

	m_MessageList.SetColumnWidth(2, LVSCW_AUTOSIZE);//TESTING
	m_MessageList.EnsureVisible(m_MessageList.GetItemCount() - 1, FALSE);
}

//_____________________________________________________________________________
//
// CMessageDialogBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CMessageDialogBar, CSizingControlBar)
	ON_MESSAGE(WM_APP_GAME_MESSAGE, OnAddMessage)
	ON_MESSAGE(WM_APP_GAME_MESSAGE_HIGH_IMP, OnAddMessageHighImp)
	ON_MESSAGE(WM_APP_GAME_MESSAGE_LOW_IMP, OnAddMessageLowImp)
	ON_WM_CREATE()
    ON_WM_SIZE()
	ON_MESSAGE(WM_APP_GAME_SPEAK, OnSpeakMessage)
	ON_BN_CLICKED(IDC_CONCISE, OnConcise)
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_OPPONENTS_ONLY, OnOpponentsOnly)
	ON_CBN_SELCHANGE(IDC_TURN_SELECTION, OnSelchangeTurnSelection)
END_MESSAGE_MAP()

LRESULT CMessageDialogBar::OnAddMessage(WPARAM wParam, LPARAM lParam)
{
	CString* pstrMessage = (CString*)lParam;
	int nImageIndex = LOWORD(wParam);
	int nTurnNumber = HIWORD(wParam);

	AddMessage(*pstrMessage, nImageIndex, nTurnNumber, MessageImportance::Normal);

	delete pstrMessage;

	return 0;
}

LRESULT CMessageDialogBar::OnAddMessageHighImp(WPARAM wParam, LPARAM lParam)
{
	CString* pstrMessage = (CString*)lParam;
	int nImageIndex = LOWORD(wParam);
	int nTurnNumber = HIWORD(wParam);

	AddMessage(*pstrMessage, nImageIndex, nTurnNumber, MessageImportance::High);

	delete pstrMessage;

	return 0;
}

LRESULT CMessageDialogBar::OnAddMessageLowImp(WPARAM wParam, LPARAM lParam)
{
	CString* pstrMessage = (CString*)lParam;
	int nImageIndex = LOWORD(wParam);
	int nTurnNumber = HIWORD(wParam);

	AddMessage(*pstrMessage, nImageIndex, nTurnNumber, MessageImportance::Low);

	delete pstrMessage;

	return 0;
}

int CMessageDialogBar::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
    if (CSizingControlBar::OnCreate(lpCreateStruct) == -1)
        return -1;

	m_MessageList.Create(
		LVS_REPORT | LVS_SINGLESEL | WS_TABSTOP | LVS_NOSORTHEADER |
		WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 0, 0), this, IDC_MESSAGE_LIST);

	m_MessageList.ModifyStyleEx(0, WS_EX_CLIENTEDGE);

	m_MessageList.Initialize(IDC_MESSAGE_LIST, this);

	m_MessageList.InsertColumn(0, _T("ID"), LVCFMT_RIGHT);
	m_MessageList.InsertColumn(1, _T("Turn"), LVCFMT_RIGHT);
	m_MessageList.InsertColumn(2, _T("Message"), LVCFMT_LEFT);

	m_MessageList.SetColumnWidth(0, 40);
	m_MessageList.SetColumnWidth(1, LVSCW_AUTOSIZE_USEHEADER);
	m_MessageList.SetColumnWidth(2, LVSCW_AUTOSIZE_USEHEADER);

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 4, 1);
	m_nComputerImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_COMPUTER));
	m_nHumanImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_HUMAN));
	m_nDebugImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_DEBUG));
	m_nBugImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_BUG));

	m_MessageList.SetImageList(&m_ImageList, LVSIL_SMALL);

    if (!m_Font.CreatePointFont(80, _T("MS Sans Serif")))
        return -1;

	m_ConciseButton.Create(_T("Concise"), BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 80, 16), this, IDC_CONCISE);
    m_ConciseButton.SetFont(&m_Font);

	m_bConcise = g_pCoreApp->GetProfileInt(_T("Settings"), _T("Concise"), m_bConcise);
	m_ConciseButton.SetCheck(m_bConcise);

	m_OpponentsOnlyButton.Create(_T("Opponents Only"), BS_AUTOCHECKBOX | WS_CHILD | WS_VISIBLE,
		CRect(80, 0, 180, 16), this, IDC_OPPONENTS_ONLY);
    m_OpponentsOnlyButton.SetFont(&m_Font);

	m_bOpponentsOnly = g_pCoreApp->GetProfileInt(_T("Settings"), _T("OpponentsOnly"), m_bOpponentsOnly);
	m_OpponentsOnlyButton.SetCheck(m_bOpponentsOnly);

	m_nShowTurnNumber = g_pCoreApp->GetProfileInt(_T("Settings"), _T("ShowTurnNumber"), m_nShowTurnNumber);

	m_TurnSelection.Create(WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST,
		CRect(200, 0, 350, 200), this, IDC_TURN_SELECTION);
	m_TurnSelection.SetFont(&m_Font);

	UpdateMTGFont();

    return 0;
}

void CMessageDialogBar::OnSize(UINT nType, int cx, int cy) 
{
    CSizingControlBar::OnSize(nType, cx, cy);

    CRect rcClient;
    GetClientRect(rcClient);

	rcClient.top += 24;

	m_MessageList.MoveWindow(rcClient);

	m_MessageList.GetClientRect(rcClient);

	int nWidth = rcClient.Width() - m_MessageList.GetColumnWidth(0) - m_MessageList.GetColumnWidth(1);
	if (nWidth < 0)
		nWidth = 0;
	m_MessageList.SetColumnWidth(2, nWidth);
}

LRESULT CMessageDialogBar::OnSpeakMessage(WPARAM /*wParam*/, LPARAM lParam)
{
	CString* pstrMessage = (CString*)lParam;

	SpeakMessage(*pstrMessage);

	delete pstrMessage;

	return 0;
}

void CMessageDialogBar::OnConcise() 
{
	m_bConcise = m_ConciseButton.GetCheck();

	UpdateList();
}

void CMessageDialogBar::OnDestroy() 
{
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("Concise"), m_ConciseButton.GetCheck());
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("OpponentsOnly"), m_OpponentsOnlyButton.GetCheck());
	g_pCoreApp->WriteProfileInt(_T("Settings"), _T("ShowTurnNumber"), m_nShowTurnNumber);

	CSizingControlBar::OnDestroy();	
}

void CMessageDialogBar::OnOpponentsOnly() 
{
	m_bOpponentsOnly = m_OpponentsOnlyButton.GetCheck();

	UpdateList();
}

void CMessageDialogBar::OnSelchangeTurnSelection() 
{
	int nCurSel = m_TurnSelection.GetCurSel();
	if (nCurSel == -1)
		return;

	m_nShowTurnNumber = m_TurnSelection.GetItemData(nCurSel);

	UpdateList();
}