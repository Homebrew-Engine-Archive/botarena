// GameSettingsDialog.cpp : implementation file
//

#include "stdafx.h"
#include "GameSettingsDialog.h"
#include "Resource.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CGameSettingsDialog dialog
//

CGameSettingsDialog::CGameSettingsDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CGameSettingsDialog::IDD, pParent)
	, m_nSelectionTimerCountdown(3)
	, m_bDelaySelectInMain(FALSE)
	, m_bDelaySelectInOthers(FALSE)
	, m_bAutoSelectSingleMove(FALSE)
	, m_bAutoSelectUntapMoves(FALSE)
	, m_bShowAllMoves(FALSE)
	, m_bConservative(FALSE)
	, m_bOverkill(TRUE)
	, m_strComputerPlayerName(_T(""))
{
	m_nDblClk = -1;
	m_bExtraCareful = TRUE;
	m_bBoostProcess = FALSE;
}

//_____________________________________________________________________________
//
// CGameSettingsDialog - Overrides
//

void CGameSettingsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MAX_TIME, m_MaxTime);
	DDX_Radio(pDX, IDC_DBLCLK_PERFORM, m_nDblClk);
	DDX_Check(pDX, IDC_EXTRA_CAREFUL, m_bExtraCareful);
	DDX_Check(pDX, IDC_BOOST_PROCESS, m_bBoostProcess);
	DDX_Text(pDX, IDC_SELECTION_TIMER_COUNTDOWN, m_nSelectionTimerCountdown);
	DDX_Check(pDX, IDC_DELAY_SELECT_IN_MAIN, m_bDelaySelectInMain);
	DDX_Check(pDX, IDC_DELAY_SELECT_IN_OTHERS, m_bDelaySelectInOthers);
	DDX_Check(pDX, IDC_AUTO_SELECT_SINGLE_MOVE, m_bAutoSelectSingleMove);
	DDX_Check(pDX, IDC_AUTO_SELECT_UNTAP_MOVES, m_bAutoSelectUntapMoves);
	DDX_Check(pDX, IDC_SHOW_ALL_MOVES, m_bShowAllMoves);
	DDX_Check(pDX, IDC_CONSERVATIVE, m_bConservative);
	DDX_Check(pDX, IDC_OVERKILL, m_bOverkill);
	DDX_Text(pDX, IDC_COMPUTER_PLAYER_NAME, m_strComputerPlayerName);
}

BOOL CGameSettingsDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();

	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("5 Seconds")), 5 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("15 Seconds")), 15 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("30 Seconds")), 30 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("45 Seconds")), 45 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("1 Minute")), 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("2 Minutes")), 2 * 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("3 Minutes")), 3 * 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("5 Minutes")), 5 * 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("10 Minutes")), 10 * 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("1 Hour")), 60 * 60 * 1000);
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("2 Hours")), 2 * 60 * 60 * 1000);
	//m_MaxTime.SetItemData(m_MaxTime.AddString(_T("Unlimited")), std::numeric_limits<DWORD_PTR>::max());
	m_MaxTime.SetItemData(m_MaxTime.AddString(_T("Test Mode")), 1 * 1000);

	switch(m_dwMaxDuration)
	{
	case 5 * 1000: m_MaxTime.SetCurSel(0); break;
	case 15 * 1000: m_MaxTime.SetCurSel(1); break;
	case 30 * 1000: m_MaxTime.SetCurSel(2); break;
	case 45 * 1000: m_MaxTime.SetCurSel(3); break;
	case 60 * 1000: m_MaxTime.SetCurSel(4); break;
	case 2 * 60 * 1000: m_MaxTime.SetCurSel(5); break;
	case 3 * 60 * 1000: m_MaxTime.SetCurSel(6); break;
	case 5 * 60 * 1000: m_MaxTime.SetCurSel(7); break;
	case 10 * 60 * 1000: m_MaxTime.SetCurSel(8); break;
	case 60 * 60 * 1000: m_MaxTime.SetCurSel(9); break;
	case 2 * 60 * 60 * 1000: m_MaxTime.SetCurSel(10); break;
	case 1 * 1000: m_MaxTime.SetCurSel(11); break;
	default:
		if (m_dwMaxDuration == std::numeric_limits<DWORD_PTR>::max())
			m_MaxTime.SetCurSel(11);
		else
			m_MaxTime.SetCurSel(3);

		break;
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CGameSettingsDialog::OnOK() 
{
	m_dwMaxDuration = (DWORD)m_MaxTime.GetItemData(m_MaxTime.GetCurSel());
	
	CDialog::OnOK();
}

//_____________________________________________________________________________
//
// CGameSettingsDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CGameSettingsDialog, CDialog)
END_MESSAGE_MAP()
