// ProgressStatusBar.cpp : implementation file
//

#include "stdafx.h"
#include "ProgressStatusBar.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CProgressStatusBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CProgressStatusBar, CStatusBar)
	ON_WM_CREATE()
	ON_MESSAGE(WM_APP_GAME_PROGRESS_HIDE, OnHideProgress)
	ON_MESSAGE(WM_APP_GAME_PROGRESS_SET, OnSetProgress)
	ON_MESSAGE(WM_APP_GAME_PROGRESS_SHOW, OnShowProgress)
	ON_MESSAGE(WM_APP_GAME_PROGRESS_STEPIT, OnStepProgress)
	ON_UPDATE_COMMAND_UI(ID_SEPARATOR, OnUpdateStatusText)
END_MESSAGE_MAP()

int CProgressStatusBar::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CStatusBar::OnCreate(lpCreateStruct) == -1)
		return -1;

	CRect rectProgress;
	rectProgress.left = 200;
	rectProgress.right = 400;
	rectProgress.top = 1;
	rectProgress.bottom = 18;

	m_ProgressCtrl.Create(PBS_SMOOTH, rectProgress, this, 1);
	m_ProgressCtrl.SetRange(1, 60);
	m_ProgressCtrl.SetStep(1);
	
	return 0;
}

LRESULT CProgressStatusBar::OnHideProgress(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
	m_ProgressCtrl.ShowWindow(SW_HIDE);
	return 0;
}

LRESULT CProgressStatusBar::OnSetProgress(WPARAM wParam, LPARAM /*lParam*/)
{
	m_ProgressCtrl.SetPos(wParam);

	return 0;
}

LRESULT CProgressStatusBar::OnShowProgress(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
	m_ProgressCtrl.SetPos(0);
	m_ProgressCtrl.ShowWindow(SW_SHOW);
	return 0;
}

LRESULT CProgressStatusBar::OnStepProgress(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
	m_ProgressCtrl.StepIt();

	return 0;
}

void CProgressStatusBar::OnUpdateStatusText(CCmdUI* pCmdUI) 
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->SetText(m_strPriorityPlayerText);
}
