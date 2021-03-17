// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MagicWand.h"
#include "MainFrm.h"
#include "resource.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CMainFrame
//

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

UINT CMainFrame::s_Indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	IDC_INDICATOR_TURN,
	IDC_INDICATOR_CONNECTED,
//	ID_INDICATOR_CAPS,
//	ID_INDICATOR_NUM,
//	ID_INDICATOR_SCRL,
};

CMainFrame::CMainFrame()
{
	m_nBusyState = 0;
	m_hCursorAppStarting = LoadCursor(NULL, IDC_APPSTARTING);
	m_hCursorWait = LoadCursor(NULL, IDC_WAIT);
	m_bFullScreen = FALSE;
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::IsFullScreen()
{
     return m_bFullScreen;
}

void CMainFrame::FullScreen()
{
   if (!IsFullScreen())
		OnViewFullScreen();
}

void CMainFrame::ShowSelections()
{
	ShowControlBar(&m_wndSelectionBar, TRUE, FALSE);
}

void CMainFrame::HideSelections()
{
	ShowControlBar(&m_wndSelectionBar, FALSE, FALSE);
}

void CMainFrame::DockControlBarLeftOf(CControlBar* Bar, CControlBar* LeftOf)
{
	CRect rect;
	DWORD dw;
	UINT n;

	// get MFC to adjust the dimensions of all docked ToolBars
	// so that GetWindowRect will be accurate
	RecalcLayout();
	LeftOf->GetWindowRect(&rect);
	rect.OffsetRect(1,0);
	dw=LeftOf->GetBarStyle();
	n = 0;
	n = (dw&CBRS_ALIGN_TOP) ? AFX_IDW_DOCKBAR_TOP : n;
	n = (dw&CBRS_ALIGN_ANY && n==0) ? AFX_IDW_DOCKBAR_BOTTOM : n;
	n = (dw&CBRS_ALIGN_LEFT && n==0) ? AFX_IDW_DOCKBAR_LEFT : n;
	n = (dw&CBRS_ALIGN_RIGHT && n==0) ? AFX_IDW_DOCKBAR_RIGHT : n;

	// When we take the default parameters on rect, DockControlBar will dock
	// each Toolbar on a seperate line.  By calculating a rectangle, we in effect
	// are simulating a Toolbar being dragged to that location and docked.
	DockControlBar(Bar,n,&rect);
}

void CMainFrame::CopyToClipboard(LPCTSTR strText) const
{
	CSharedFile	sf(GMEM_MOVEABLE|GMEM_DDESHARE|GMEM_ZEROINIT);

	sf.Write(strText, (_tcslen(strText) + 1) * 2);

	HGLOBAL hMem = sf.Detach();
	if (!hMem)
		return;

	COleDataSource*	pSource = new COleDataSource();
	pSource->CacheGlobalData(CF_UNICODETEXT, hMem);
	pSource->SetClipboard();
}

void CMainFrame::GetCardRulings(LPCTSTR strCardName) const
{
	CString strUrl;
	strUrl.Format(_T("http://www.crystalkeep.com/cgi-bin/magicsearch.cgi?cardName=%s"),
		strCardName);

	ShellExecute(NULL, _T("open"), strUrl, NULL, NULL, SW_SHOWNORMAL);
}

#ifdef _MY_DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_MY_DEBUG

//_____________________________________________________________________________
//
// CMainFrame - Overrides
//

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.style &= ~FWS_ADDTOTITLE; 

	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;

	// Modify the Window class or styles here by modifying
	// the CREATESTRUCT cs

	return TRUE;
}

//_____________________________________________________________________________
//
// CMainFrame - Generated message map functions
//

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_COMMAND(IDM_AUTO_MOVE, OnAutoMove)
	ON_COMMAND(IDM_AUTO_UNTAP, OnAutoUntap)
	ON_WM_CLOSE()
	ON_WM_CREATE()
	ON_WM_GETMINMAXINFO()
	ON_COMMAND(IDM_NO_FULLSCREEN, OnNoFullscreen)
	ON_WM_SETFOCUS()
    ON_WM_SETCURSOR()
	ON_COMMAND(IDM_SHOW_TRICK, OnShowTrick)
	ON_MESSAGE(WM_APP_GAME_THINKING_STARTED, OnThinkingStarted)
	ON_MESSAGE(WM_APP_GAME_THINKING_STOPPED, OnThinkingStopped)
	ON_UPDATE_COMMAND_UI(IDM_AUTO_MOVE, OnUpdateAutoMove)
	ON_UPDATE_COMMAND_UI(IDM_AUTO_UNTAP, OnUpdateAutoUntap)
	ON_UPDATE_COMMAND_UI(IDC_DETAILS, OnUpdateDetails)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_TRICK, OnUpdateShowTrick)
	ON_UPDATE_COMMAND_UI(IDC_INDICATOR_TURN, OnUpdateTurn) 
	ON_UPDATE_COMMAND_UI(IDC_INDICATOR_CONNECTED, OnUpdateConnected) 
	ON_UPDATE_COMMAND_UI(IDM_VIEW_FULLSCREEN, OnUpdateViewFullScreen)
	ON_UPDATE_COMMAND_UI_RANGE(IDM_VIEW_CHATS, IDM_VIEW_STATISTIC, OnUpdateViewToolbars)
	ON_COMMAND_RANGE(IDM_VIEW_CHATS, IDM_VIEW_STATISTIC, OnViewToolbars)
	ON_COMMAND(IDM_VIEW_FULLSCREEN, OnViewFullScreen)
	ON_MESSAGE(WM_APP_NET_MESSAGE, OnNetMessage)
END_MESSAGE_MAP()

void CMainFrame::OnAutoMove() 
{
	m_wndSelectionBar.SetAutoMove(!m_wndSelectionBar.AutoMove());	
}

void CMainFrame::OnAutoUntap() 
{
	m_wndSelectionBar.SetAutoUntap(!m_wndSelectionBar.AutoUntap());	
}

void CMainFrame::OnClose() 
{
	if (IsFullScreen())
		ShowControlBar(&m_wndToolBar, TRUE, FALSE);

	SaveBarState(_T("BarStates\\BarState"));
	CSizingControlBar::GlobalSaveState(_T("BarStates\\SizeBarState"));
	
	CFrameWnd::OnClose();
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	SetWindowText(g_MagicWandApp.GetProductName());

	// Create tool bars and status bar
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	m_wndToolBar.SetWindowText(_T("BotArena"));

	if (!m_wndNetworkToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC,
		CRect(0, 0, 0, 0),
		IDW_NETWORK)	// NOTE: Important to assign a unique ID here otherwise LoadBarState() will not function properly
		|| !m_wndNetworkToolBar.LoadToolBar(IDR_NET))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}
	m_wndNetworkToolBar.EnableDocking(CBRS_ALIGN_ANY);
	m_wndNetworkToolBar.SetWindowText(_T("Network"));

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(s_Indicators, ARRAY_SIZE(s_Indicators)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}
	m_wndStatusBar.SetPaneInfo(1, IDC_INDICATOR_TURN, SBPS_NORMAL, 300);
	m_wndStatusBar.SetPaneInfo(2, IDC_INDICATOR_CONNECTED, SBPS_NORMAL, 110);

	// Dock tool bars

	EnableDocking(CBRS_ALIGN_ANY);				// NOTE: EnableDocking() cannot be called before the status bar creation or otherwise the status bar will not be at the bottom-most position
	DockControlBar(&m_wndToolBar, AFX_IDW_DOCKBAR_TOP);
	DockControlBarLeftOf(&m_wndNetworkToolBar, &m_wndToolBar);

	// Create dialog bars

	if (!m_wndMessageBar.Create(_T("Messages"), this, CSize(400, 125), TRUE, IDW_MESSAGE))
	{
		TRACE0("Failed to create dialogbar\n");
		return -1;		// fail to create
	}
	m_wndMessageBar.SetBarStyle(m_wndMessageBar.GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	m_wndMessageBar.EnableDocking(CBRS_ALIGN_ANY);

	if (!m_wndSelectionBar.Create(_T("Actions"), this, CSize(400, 125), TRUE, IDW_SELECTIONS))
	{
		TRACE0("Failed to create dialogbar\n");
		return -1;		// fail to create
	}
	m_wndSelectionBar.SetBarStyle(m_wndSelectionBar.GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	m_wndSelectionBar.EnableDocking(CBRS_ALIGN_ANY);

	if (!m_wndGraph.Create(this,
		CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC,
		IDW_GRAPH))
	{
		TRACE0("Failed to create dialog bar m_wndGraph\n");
		return -1;		// fail to create
	}
	m_wndGraph.SetWindowText(_T("Ready"));
	m_wndGraph.EnableDocking(CBRS_ALIGN_ANY);

	if (!m_wndPreviewBar.Create(_T("Preview"), this, CSize(CCardStore::LargeCardWidth + 8, CCardStore::LargeCardHeight + 8), TRUE, IDW_PREVIEW))
	{
		TRACE0("Failed to create dialog bar m_wndPreviewBar\n");
		return -1;		// fail to create
	}
	m_wndPreviewBar.m_szMin = CSize(CCardStore::LargeCardWidth + 8, CCardStore::LargeCardHeight + 8);
	m_wndPreviewBar.SetBarStyle(m_wndPreviewBar.GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	m_wndPreviewBar.EnableDocking(CBRS_ALIGN_ANY);

	if (!m_wndChatBar.Create(_T("Chats"), this, CSize(400, 100), TRUE, IDW_CHAT))
	{
		TRACE0("Failed to create dialog bar m_wndChatBar\n");
		return -1;		// fail to create
	}
	m_wndChatBar.SetBarStyle(m_wndChatBar.GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	m_wndChatBar.EnableDocking(CBRS_ALIGN_ANY);

	if (!m_wndStatisticBar.Create(this,
		CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC,
		IDW_STATISTIC))
	{
		TRACE0("Failed to create dialog bar m_wndStatisticBar\n");
		return -1;		// fail to create
	}
	m_wndStatisticBar.EnableDocking(CBRS_ALIGN_ANY);

	// Dock dialog bars

	DockControlBar(&m_wndMessageBar, AFX_IDW_DOCKBAR_BOTTOM);       
	DockControlBarLeftOf(&m_wndSelectionBar, &m_wndMessageBar);      
	DockControlBarLeftOf(&m_wndGraph, &m_wndSelectionBar);
	DockControlBarLeftOf(&m_wndStatisticBar, &m_wndGraph);       

	CRect rcWindow;
	GetWindowRect(rcWindow);
	FloatControlBar(&m_wndPreviewBar, CPoint(rcWindow.right - 200, rcWindow.top + rcWindow.Height() / 2), CBRS_ALIGN_TOP);

	FloatControlBar(&m_wndChatBar, CPoint(rcWindow.right - 200, rcWindow.top + 100), CBRS_ALIGN_TOP);
	//DockControlBar(&m_wndPreviewBar, AFX_IDW_DOCKBAR_RIGHT);       

//	CRect rcWindow;
//	GetWindowRect(rcWindow);
//	FloatControlBar(&m_wndGraph, CPoint(rcWindow.right - 190, rcWindow.top + rcWindow.Height() / 2), CBRS_ALIGN_BOTTOM);       

	// Load previous bar stats

	CSizingControlBar::GlobalLoadState(_T("BarStates\\SizeBarState"));
	LoadBarState(_T("BarStates\\BarState"));

	// Start net manager

	g_pCoreApp->GetNetManager()->SetSendMessage(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->Start();

	return 0;
}

void CMainFrame::OnGetMinMaxInfo(MINMAXINFO FAR* lpMMI) 
{
	if (IsFullScreen())
    {
        lpMMI->ptMaxSize.y = m_FullScreenWindowRect.Height();
	    lpMMI->ptMaxTrackSize.y = lpMMI->ptMaxSize.y;
	    lpMMI->ptMaxSize.x = m_FullScreenWindowRect.Width();
	    lpMMI->ptMaxTrackSize.x = lpMMI->ptMaxSize.x;
    }
	else
	{
		lpMMI->ptMinTrackSize.x = 1024;
		lpMMI->ptMinTrackSize.y = 576;
	}
}

void CMainFrame::OnNoFullscreen() 
{
    if (IsFullScreen())
		OnViewFullScreen();
}

void CMainFrame::OnSetFocus(CWnd* /*pOldWnd*/)
{
	// forward focus to the view window
	GetView()->SetFocus();
}

BOOL CMainFrame::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{
	if (!m_nBusyState)
		return CFrameWnd::OnSetCursor(pWnd, nHitTest, message);

	if (m_nBusyState == 1)
		SetCursor(m_hCursorAppStarting);
	else
		SetCursor(m_hCursorWait);

	return TRUE;
}

void CMainFrame::OnShowTrick() 
{
	m_wndSelectionBar.SetShowTrick(!m_wndSelectionBar.ShowTrick());
}

LRESULT CMainFrame::OnThinkingStarted(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	m_nBusyState = 1;

	return 0;
}

LRESULT CMainFrame::OnThinkingStopped(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	m_nBusyState = 0;

	return 0;
}

LRESULT CMainFrame::OnNetMessage(WPARAM wParam, LPARAM lParam)
{	
	CString* pstrMessage = (CString*)wParam;
	if (pstrMessage)
	{
		MessageBox(*pstrMessage, NULL, (UINT)lParam);
		delete pstrMessage;
	}

	return 0;
}

void CMainFrame::OnUpdateAutoMove(CCmdUI* pCmdUI) 
{
	pCmdUI->SetCheck(m_wndSelectionBar.AutoMove());	
}

void CMainFrame::OnUpdateAutoUntap(CCmdUI* pCmdUI) 
{
	pCmdUI->SetCheck(m_wndSelectionBar.AutoUntap());	
}

void CMainFrame::OnUpdateDetails(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable();
}

void CMainFrame::OnUpdateShowTrick(CCmdUI* pCmdUI) 
{
	pCmdUI->SetCheck(m_wndSelectionBar.ShowTrick());
}

void CMainFrame::OnUpdateTurn(CCmdUI *pCmdUI)
{
	m_wndStatusBar.SetPaneText(
		m_wndStatusBar.CommandToIndex(IDC_INDICATOR_TURN),
			GetView()->GetCurrentNodeText());
	pCmdUI->Enable();
} 

void CMainFrame::OnUpdateConnected(CCmdUI *pCmdUI)
{
	CString strConnected;
	strConnected.Format(_T("%d Connected User(s)"), g_pCoreApp->GetNetManager()->GetConnectedCount());

	m_wndStatusBar.SetPaneText(
		m_wndStatusBar.CommandToIndex(IDC_INDICATOR_CONNECTED),
			strConnected);
	pCmdUI->Enable();
} 

void CMainFrame::OnUpdateViewFullScreen(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable();

	if (IsFullScreen())
		pCmdUI->SetCheck();
	else
        pCmdUI->SetCheck(0);
}

void CMainFrame::OnViewToolbars(UINT nID) 
{
	CControlBar* pBar = NULL;

	switch(nID)
	{
	default: return;

	case IDM_VIEW_CHATS: pBar = &m_wndChatBar; break;
	case IDM_VIEW_GRAPHBAR: pBar = &m_wndGraph; break;
	case IDM_VIEW_MESSAGEBAR: pBar = &m_wndMessageBar; break;
	case IDM_VIEW_SELECTIONS: pBar = &m_wndSelectionBar; break;
	case IDM_VIEW_PREVIEW: pBar = &m_wndPreviewBar; break;
	case IDM_VIEW_NETWORK_TOOLBAR: pBar = &m_wndNetworkToolBar; break;
	case IDM_VIEW_STATISTIC: pBar = &m_wndStatisticBar; break;
	}

	ShowControlBar(pBar, !pBar->IsVisible(), FALSE);
}

void CMainFrame::OnViewFullScreen() 
{
	CRect rectDesktop;
    WINDOWPLACEMENT wpNew;

	static BOOL bToolBarVisible;
	static BOOL bNetworkToolBarVisible;
	static BOOL bStatusBarVisible;
	static BOOL bSelectionBarVisible;
	static BOOL bChatBarVisible;
	static BOOL bMessageBarVisible;
	static BOOL bStatisticBarVisible;
	static BOOL bGraphVisible;
	static BOOL bPreviewVisible;

    if (!IsFullScreen())
    {
		bToolBarVisible = m_wndToolBar.IsVisible();
		bNetworkToolBarVisible = m_wndNetworkToolBar.IsVisible();
		bStatusBarVisible = m_wndStatusBar.IsVisible();
		bSelectionBarVisible = m_wndSelectionBar.IsVisible();
		bChatBarVisible = m_wndChatBar.IsVisible();
		bMessageBarVisible = m_wndMessageBar.IsVisible();
		bStatisticBarVisible = m_wndStatisticBar.IsVisible();
		bGraphVisible = m_wndGraph.IsVisible();
		bPreviewVisible = m_wndPreviewBar.IsVisible();

		ShowControlBar(&m_wndToolBar, FALSE, FALSE);
		ShowControlBar(&m_wndNetworkToolBar, FALSE, FALSE);
		ShowControlBar(&m_wndStatusBar, TRUE, FALSE); //changed 28-01-2011 Now Status bar is showed on full screen by default
		ShowControlBar(&m_wndSelectionBar, TRUE, FALSE); //changed 28-01-2011 Now Action Window is showed on full screen by default
		ShowControlBar(&m_wndChatBar, FALSE, FALSE);
		ShowControlBar(&m_wndMessageBar, TRUE, FALSE); //changed 28-01-2011 Now Game log window is showed on full screen by default
		ShowControlBar(&m_wndStatisticBar, FALSE, FALSE);
		ShowControlBar(&m_wndGraph, FALSE, FALSE);
		ShowControlBar(&m_wndPreviewBar, FALSE, FALSE);

		ModifyStyle(WS_THICKFRAME, 0);

		// We'll need these to restore the original state.
		GetWindowPlacement(&m_wpPrev);

		m_wpPrev.length = sizeof m_wpPrev;

		//Adjust RECT to new size of window
		::GetWindowRect(::GetDesktopWindow(), &rectDesktop);
		::AdjustWindowRectEx(&rectDesktop, GetStyle(), TRUE, GetExStyle());

		rectDesktop.InflateRect(2, 2);

		// Remember this for OnGetMinMaxInfo()
		m_FullScreenWindowRect = rectDesktop;

		wpNew = m_wpPrev;
		wpNew.showCmd = SW_SHOWNORMAL;
		wpNew.rcNormalPosition = rectDesktop;

		m_bFullScreen=TRUE;
    }
    else
    {
		ModifyStyle(0, WS_THICKFRAME);

		ShowControlBar(&m_wndToolBar, bToolBarVisible, TRUE);
		ShowControlBar(&m_wndNetworkToolBar, bNetworkToolBarVisible, TRUE);
		ShowControlBar(&m_wndStatusBar, bStatusBarVisible, TRUE);
		ShowControlBar(&m_wndSelectionBar, bSelectionBarVisible, TRUE);
		ShowControlBar(&m_wndChatBar, bChatBarVisible, TRUE);
		ShowControlBar(&m_wndMessageBar, bMessageBarVisible, TRUE);
		ShowControlBar(&m_wndStatisticBar, bStatisticBarVisible, TRUE);
		ShowControlBar(&m_wndGraph, bGraphVisible, TRUE);
		ShowControlBar(&m_wndPreviewBar, bPreviewVisible, TRUE);

		wpNew = m_wpPrev;

		m_bFullScreen = FALSE;
     }
    
     SetWindowPlacement(&wpNew);
}

void CMainFrame::OnUpdateViewToolbars(CCmdUI* pCmdUI) 
{
	CControlBar* pBar = NULL;

	switch(pCmdUI->m_nID)
	{
	default: return;

	case IDM_VIEW_SELECTIONS: pBar = &m_wndSelectionBar; break;
	case IDM_VIEW_MESSAGEBAR: pBar = &m_wndMessageBar; break;
	case IDM_VIEW_GRAPHBAR: pBar = &m_wndGraph; break;
	case IDM_VIEW_PREVIEW: pBar = &m_wndPreviewBar; break;
	case IDM_VIEW_NETWORK_TOOLBAR: pBar = &m_wndNetworkToolBar; break;
	case IDM_VIEW_CHATS: pBar = &m_wndChatBar; break;
	case IDM_VIEW_STATISTIC: pBar = &m_wndStatisticBar; break;
	}

	pCmdUI->SetCheck(pBar->IsVisible());
}
