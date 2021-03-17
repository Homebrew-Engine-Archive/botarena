// SelectionTimerDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "SelectionTimerDialog.h"
#include "MainFrm.h"

// CSelectionTimerDialog dialog

IMPLEMENT_DYNAMIC(CSelectionTimerDialog, CDialog)
CSelectionTimerDialog::CSelectionTimerDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CSelectionTimerDialog::IDD, pParent)
	, m_nCountdown(0)
	, m_nMaxSeconds(3)
	, m_nTimer(0)
	, m_nMoveIndex(-1)
	, m_strAutoMove(_T(""))
{
}

CSelectionTimerDialog::~CSelectionTimerDialog()
{
}

void CSelectionTimerDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_COUNTDOWN, m_nCountdown);
	DDX_Text(pDX, IDC_AUTO_MOVE, m_strAutoMove);
}


BEGIN_MESSAGE_MAP(CSelectionTimerDialog, CDialog)
	ON_BN_CLICKED(IDC_SELECT_NOW, OnBnClickedSelectNow)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CSelectionTimerDialog message handlers

BOOL CSelectionTimerDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_nCountdown = m_nMaxSeconds;

	m_nTimer = SetTimer(1, 1000, NULL);

	UpdateData(TO_UI);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CSelectionTimerDialog::OnCancel()
{
	KillTimer(m_nTimer);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	pSelectionBar->ResetSelectionTimerWindow();

	CDialog::OnCancel();
}

void CSelectionTimerDialog::OnBnClickedSelectNow()
{
	KillTimer(m_nTimer);
	
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	pSelectionBar->ResetSelectionTimerWindow();
	if (pSelectionBar->IsSelectingMove())
		pSelectionBar->SelectMove(m_nMoveIndex);

	EndDialog(IDCANCEL);
}

void CSelectionTimerDialog::OnTimer(UINT nIDEvent)
{
	--m_nCountdown;

	UpdateData(TO_UI);

	if (!m_nCountdown)
	{
		KillTimer(m_nTimer);
		
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
		pSelectionBar->ResetSelectionTimerWindow();
		if (pSelectionBar->IsSelectingMove())
			pSelectionBar->SelectMove(m_nMoveIndex);

		EndDialog(IDCANCEL);
	}

	CDialog::OnTimer(nIDEvent);
}

void CSelectionTimerDialog::PostNcDestroy()
{
	CDialog::PostNcDestroy();

	delete this;
}
