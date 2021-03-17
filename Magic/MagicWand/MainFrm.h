// MainFrm.h : interface of the CMainFrame class
//

#pragma once

#include "MagicWandView.h"
#include "MessageDialogBar.h"
#include "SelectionDialogBar.h"
#include "ProgressStatusBar.h"
#include "GraphDialogBar.h"
#include "PreviewBar.h"
#include "ChatDialogBar.h"
#include "PlayerStatisticDialogBar.h"

//_____________________________________________________________________________
//
// CMainFrame
//

class CMainFrame : public CFrameWnd
{
public:
	virtual ~CMainFrame();

	CMessageDialogBar* GetMessageDialogBar()		{ return &m_wndMessageBar; }
	CSelectionDialogBar* GetSelectionDialogBar()	{ return &m_wndSelectionBar; }
	CProgressStatusBar* GetStatusBar()				{ return &m_wndStatusBar; }
	CMagicWandView* GetView()						{ return (CMagicWandView*)(GetActiveView()); }
	CGraphDialogBar* GetGraphDialogBar()			{ return &m_wndGraph; }
	CPreviewBar* GetPreviewBar()					{ return &m_wndPreviewBar; }
	CChatDialogBar* GetChatBar()					{ return &m_wndChatBar; }
	CPlayerStatisticDialogBar* GetStatisticBar()	{ return &m_wndStatisticBar; }

	void SetBusyState(int nState)					{ m_nBusyState = nState; }

    BOOL IsFullScreen();
	void FullScreen();
	void ShowSelections();
	void HideSelections();

	void CopyToClipboard(LPCTSTR strText) const;
	void GetCardRulings(LPCTSTR strCardName) const;

protected:
	DECLARE_DYNCREATE(CMainFrame)

	static UINT s_Indicators[];

	CMainFrame();					// create from serialization only
	void DockControlBarLeftOf(CControlBar* Bar,CControlBar* LeftOf);

	CProgressStatusBar	m_wndStatusBar;
	CToolBar			m_wndToolBar;
	CToolBar			m_wndNetworkToolBar;
	CMessageDialogBar	m_wndMessageBar;
	CSelectionDialogBar	m_wndSelectionBar;
	CPreviewBar			m_wndPreviewBar;
	CChatDialogBar		m_wndChatBar;
	CGraphDialogBar		m_wndGraph;
	CPlayerStatisticDialogBar	m_wndStatisticBar;

    BOOL				m_bFullScreen;
	WINDOWPLACEMENT		m_wpPrev;
    CRect				m_FullScreenWindowRect;

	HCURSOR				m_hCursorAppStarting;
	HCURSOR				m_hCursorWait;
	int					m_nBusyState;

// Overrides
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
#ifdef _MY_DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	afx_msg void OnAutoMove();
	afx_msg void OnAutoUntap();
	afx_msg void OnClose();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnGetMinMaxInfo(MINMAXINFO FAR* lpMMI);
	afx_msg void OnNoFullscreen();
	afx_msg void OnSetFocus(CWnd *pOldWnd);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnShowTrick();
	afx_msg LRESULT OnThinkingStarted(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnThinkingStopped(WPARAM wParam, LPARAM lParam);
	afx_msg void OnUpdateAutoMove(CCmdUI* pCmdUI);
	afx_msg void OnUpdateAutoUntap(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDetails(CCmdUI* pCmdUI);
	afx_msg void OnUpdateShowTrick(CCmdUI* pCmdUI);
	afx_msg void OnUpdateTurn(CCmdUI *pCmdUI);
	afx_msg void OnUpdateConnected(CCmdUI *pCmdUI);
	afx_msg void OnUpdateViewFullScreen(CCmdUI* pCmdUI);
	afx_msg void OnUpdateViewToolbars(CCmdUI* pCmdUI);
	afx_msg void OnViewFullScreen();
	afx_msg void OnViewToolbars(UINT nID);
	afx_msg LRESULT OnNetMessage(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
};
