// ChatDialogBar.cpp : implementation file
//

#include "stdafx.h"
#include "ChatDialogBar.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//

BEGIN_MESSAGE_MAP(CChatEdit, CEdit)
	ON_WM_CHAR()
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
END_MESSAGE_MAP()

void CChatEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CEdit::OnChar(nChar, nRepCnt, nFlags);

	if (nChar == VK_RETURN)
	{
		CChatDialogBar* pParent = dynamic_cast<CChatDialogBar*>(GetParent());
		if (pParent)
			pParent->OnSend();
	}
}

/*
BOOL CChatEdit::PreTranslateMessage(MSG* pMsg)
{
	BOOL bResult = __super::PreTranslateMessage(pMsg);

	if (pMsg->message == WM_CHAR)
	{
		ATLTRACE(_T("key: %c, result = %d\n"),
			pMsg->wParam, bResult);
	}
	else
		if (pMsg->message == WM_KEYDOWN)
		{
			ATLTRACE(_T("key: %c, result = %d\n"),
				pMsg->wParam, bResult);
		}

	return bResult;
}
*/

void CChatEdit::OnSetFocus(CWnd* pNewWnd)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	m_hSavedAccel = pMainWnd->m_hAccelTable;

	pMainWnd->m_hAccelTable = NULL;

	__super::OnSetFocus(pNewWnd);
}

void CChatEdit::OnKillFocus(CWnd* pNewWnd)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->m_hAccelTable = m_hSavedAccel;

	__super::OnKillFocus(pNewWnd);
}

//_____________________________________________________________________________
//
// CChatDialogBar dialog
//

CChatDialogBar::CChatDialogBar()
	: CSizingControlBar()
{
	m_nDestination = 0;
}

CChatDialogBar::~CChatDialogBar()
{
	g_pCoreApp->GetNetManager()->SetSendChatMessage(NULL);
	g_pCoreApp->GetNetManager()->SetSendGameRequest(NULL);
	g_pCoreApp->GetNetManager()->SetSendGameCancelRequest(NULL);
}

void CChatDialogBar::RemoveAllMessages()
{
	m_MessageList.DeleteAllItems();
}

void CChatDialogBar::AddMessage(LPCTSTR strMessage)
{
	m_MessageList.InsertItem(m_MessageList.GetItemCount(), strMessage);
	m_MessageList.SetColumnWidth(0, LVSCW_AUTOSIZE);
	m_MessageList.EnsureVisible(m_MessageList.GetItemCount() - 1, TRUE);
}

void CChatDialogBar::AddRemoteUser(LPCTSTR strRemoteUserName, int nRemoteUserID)
{
	int nIndex = m_Destinations.AddString(strRemoteUserName);
	m_Destinations.SetItemData(nIndex, nRemoteUserID);

	CString strMessage;
	strMessage.Format(_T("%s connected."), strRemoteUserName);
	AddMessage(strMessage);
}

void CChatDialogBar::RemoveRemoteUser(LPCTSTR strRemoteUserName, int nRemoteUserID)
{
	for (int i = 0; i < m_Destinations.GetCount(); ++i)
		if (m_Destinations.GetItemData(i) == nRemoteUserID)
		{
			m_Destinations.DeleteString(i);

			if (m_Destinations.GetCurSel() == -1)
				m_Destinations.SetCurSel(0);

			CString strMessage;
			strMessage.Format(_T("%s disconnected."), strRemoteUserName);
			AddMessage(strMessage);

			break;
		}
}

//_____________________________________________________________________________
//
// CChatDialogBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CChatDialogBar, CSizingControlBar)
	ON_MESSAGE(WM_APP_NET_CHAT_MESSAGE, OnAddChatMessage)
	ON_MESSAGE(WM_APP_NET_GAME_REQUEST, OnGameRequest)
	ON_MESSAGE(WM_APP_NET_GAME_REQUEST_CANCELLED, OnGameRequestCancelled)
	ON_WM_CREATE()
    ON_WM_SIZE()
	ON_BN_CLICKED(IDC_SEND, OnSend)
END_MESSAGE_MAP()

LRESULT CChatDialogBar::OnAddChatMessage(WPARAM wParam, LPARAM lParam)
{
	CString* pstrFrom = reinterpret_cast<CString*>(wParam);
	CString* pstrMessage = reinterpret_cast<CString*>(lParam);

	CString strMessage;
	strMessage.Format(_T("%s: %s"),
		*pstrFrom,
		*pstrMessage);

	delete pstrMessage;
	delete pstrFrom;

	AddMessage(strMessage);

	return 0;
}

LRESULT CChatDialogBar::OnGameRequest(WPARAM wParam, LPARAM lParam)
{
	CString* pstrRemoteUserName = reinterpret_cast<CString*>(wParam);

	CString strMessage;
	strMessage.Format(_T("%s has requested a game."), *pstrRemoteUserName);

	delete pstrRemoteUserName;

	AddMessage(strMessage);

	return 0;
}

LRESULT CChatDialogBar::OnGameRequestCancelled(WPARAM wParam, LPARAM lParam)
{
	CString* pstrRemoteUserName = reinterpret_cast<CString*>(wParam);

	CString strMessage;
	strMessage.Format(_T("%s cancelled the request."), *pstrRemoteUserName);

	delete pstrRemoteUserName;

	AddMessage(strMessage);

	return 0;
}

int CChatDialogBar::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
    if (CSizingControlBar::OnCreate(lpCreateStruct) == -1)
        return -1;

	m_MessageList.Create(
		LVS_REPORT | LVS_SINGLESEL | WS_TABSTOP | LVS_NOCOLUMNHEADER |
		WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 0, 0), this, IDC_MESSAGE_LIST);
	m_MessageList.ModifyStyleEx(0, WS_EX_CLIENTEDGE);
	m_MessageList.SetExtendedStyle(m_MessageList.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	m_MessageList.InsertColumn(0, _T("Message"), LVCFMT_LEFT);
	m_MessageList.SetColumnWidth(0, LVSCW_AUTOSIZE);

    if (!m_Font.CreatePointFont(80, _T("MS Sans Serif")))
        return -1;

	m_MessageEdit.Create(WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL | ES_WANTRETURN | ES_MULTILINE,
		CRect(0, 0, 0, 0), this, IDC_MESSAGE);
	m_MessageEdit.SetFont(&m_Font);
	m_MessageEdit.ModifyStyleEx(0, WS_EX_CLIENTEDGE);
	m_MessageEdit.SetLimitText(255);

	m_SendButton.Create(_T("Send"), BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE,
		CRect(0, 0, 0, 0), this, IDC_SEND);
    m_SendButton.SetFont(&m_Font);

	m_Destinations.Create(WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST,
		CRect(200, 0, 0, 300), this, IDC_DESTINATIONS);
	m_Destinations.SetFont(&m_Font);

	m_Destinations.AddString(_T("<All>"));
	m_Destinations.SetCurSel(0);
	m_Destinations.SetItemData(0, -1);

	g_pCoreApp->GetNetManager()->SetSendChatMessage(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendGameRequest(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendGameCancelRequest(GetSafeHwnd());

	return 0;
}

void CChatDialogBar::OnSize(UINT nType, int cx, int cy) 
{
    CSizingControlBar::OnSize(nType, cx, cy);

    CRect rcClient;
    GetClientRect(rcClient);
	rcClient.InflateRect(-4, -4);

	CRect rcMessageList(rcClient);
	rcMessageList.bottom -= 26;
	m_MessageList.MoveWindow(rcMessageList);
	
	CRect rcDestinations(rcClient);
	rcDestinations.top = rcDestinations.bottom - 20;
	rcDestinations.left = rcDestinations.right - 100;
	m_Destinations.MoveWindow(rcDestinations);

	CRect rcSendButton(rcClient);
	rcSendButton.right = rcDestinations.left - 8;
	rcSendButton.left = rcSendButton.right - 50;
	rcSendButton.top = rcDestinations.top;
	m_SendButton.MoveWindow(rcSendButton);

	CRect rcMessageEdit(rcClient);
	rcMessageEdit.top = rcDestinations.top;
	rcMessageEdit.right = rcSendButton.left - 8;
	m_MessageEdit.MoveWindow(rcMessageEdit);
}

void CChatDialogBar::OnSend() 
{
	CString strMessage;
	m_MessageEdit.GetWindowText(strMessage);

	m_MessageEdit.SetWindowText(_T(""));

	strMessage.Trim();
	if (strMessage.IsEmpty())
		return;

	CString strLocalMessage;
	strLocalMessage.Format(_T("%s: %s"),
		g_pCoreApp->GetNetManager()->GetUserName(),
		strMessage);
	AddMessage(strLocalMessage);

	int nRemoteUserID = m_Destinations.GetItemData(m_Destinations.GetCurSel());

	if (nRemoteUserID != -1)
	{
		// Send to one specific user

		CRemoteGameUser* pRemoteUser =
			dynamic_cast<CRemoteGameUser*>(g_pCoreApp->GetNetManager()->GetRemoteUser(nRemoteUserID));
		if (pRemoteUser)
			pRemoteUser->SendChatMessage(strMessage);
		return;
	}

	// Send to all connected users

	g_pCoreApp->GetNetManager()->SendChatMessageToAll(strMessage);

	/* Replaced by SendChatMessageToAll()
	for (int i = 0; i < m_Destinations.GetCount(); ++i)
	{
		int nRemoteUserID = m_Destinations.GetItemData(i);
		if (nRemoteUserID != -1)
		{
			CRemoteGameUser* pRemoteUser = 
				dynamic_cast<CRemoteGameUser*>(g_pCoreApp->GetNetManager()->GetRemoteUser(nRemoteUserID));
			if (pRemoteUser)
				pRemoteUser->SendChatMessage(strMessage);
		}
	}
	*/
}
