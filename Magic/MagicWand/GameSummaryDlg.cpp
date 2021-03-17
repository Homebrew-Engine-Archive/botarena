// GameSummaryDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "GameSummaryDlg.h"
#include "MainFrm.h"

// CGameSummaryDlg dialog

IMPLEMENT_DYNAMIC(CGameSummaryDlg, CDialog)

CGameSummaryDlg::CGameSummaryDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CGameSummaryDlg::IDD, pParent)
	, m_bConcise(TRUE)
	, m_bOpponentsOnly(FALSE)
	, m_nShowTurnNumber(-1)
{
	m_hIcon = g_pCoreApp->LoadIcon(IDR_MAINFRAME);
}

CGameSummaryDlg::~CGameSummaryDlg()
{
	if (m_hIcon)
		DeleteObject(m_hIcon);
}

void CGameSummaryDlg::UpdateList()
{
	m_Log.DeleteAllItems();

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CMessageDialogBar* pMessageBar = pMainWnd->GetMessageDialogBar(); 
	if (!pMessageBar)
		return;

	for (size_t i = 0; i < pMessageBar->m_Messages.size(); ++i)
	{
		const CMessageDialogBar::MessageItem& item(*(pMessageBar->m_Messages[i]));

		if (((item.Importance == MessageImportance::High) || !m_bConcise) && 
			((item.nImageIndex == pMessageBar->m_nComputerImage) || !m_bOpponentsOnly) &&
			((m_nShowTurnNumber == -1) || 
				((m_nShowTurnNumber == -2) && (item.nTurn == pMessageBar->m_nTurnNumber)) ||
				((m_nShowTurnNumber == -3) && ((item.nTurn == pMessageBar->m_nTurnNumber) || (item.nTurn == pMessageBar->m_nTurnNumber - 1))) ||
				(item.nTurn == m_nShowTurnNumber)))
		{
			CString strMessageNumber;
			strMessageNumber.Format(_T("%d"), item.nMessageNumber);

			int nItem = m_Log.InsertItem(m_Log.GetItemCount(), strMessageNumber, item.nImageIndex);

			CString strTurnNumber;
			strTurnNumber.Format(_T("%d"), item.nTurn);

			m_Log.SetItemText(nItem, 1, strTurnNumber);

			m_Log.SetItemText2(nItem, 2, item.strMessage);

			m_Log.SetItemData(nItem, item.nTurn);
		}
	}

	m_Log.EnsureVisible(m_Log.GetItemCount() - 1, FALSE);
}

void CGameSummaryDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATUS, m_strStatus);	
	DDX_Control(pDX, IDC_TAB, m_Tab);
	DDX_Control(pDX, IDC_TURN_SELECTION, m_TurnSelection);
	DDX_Check(pDX, IDC_CONCISE, m_bConcise);
	DDX_Check(pDX, IDC_OPPONENTS_ONLY, m_bOpponentsOnly);
}

BOOL CGameSummaryDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CMessageDialogBar* pMessageBar = pMainWnd->GetMessageDialogBar(); 

	m_Log.Initialize(IDC_LOG, this);

	m_Log.InsertColumn(0, _T("ID"), LVCFMT_RIGHT);
	m_Log.InsertColumn(1, _T("Turn"), LVCFMT_RIGHT);
	m_Log.InsertColumn(2, _T("Message"), LVCFMT_LEFT);

	m_Log.SetColumnWidth(0, 40);
	m_Log.SetColumnWidth(1, LVSCW_AUTOSIZE_USEHEADER);
	m_Log.SetColumnWidth(2, LVSCW_AUTOSIZE_USEHEADER);

	if (pMessageBar)
		m_Log.SetImageList(&(pMessageBar->m_ImageList), LVSIL_SMALL);
	
	m_Log.SetUseMTGSymbols(CCardStore::GetInstance()->GetShowMTGSymbols());

	// left, top, right, bottom
	SetResize(IDC_LOG, 0, 0, 1, 1);
	SetResize(IDC_STATUS, 0, 0, 1, 0);
	SetResize(IDCANCEL, 1, 1, 1, 1);
	SetResize(IDC_TAB, 0, 0, 1, 1);

	if (pMessageBar)
	{
		m_bConcise = pMessageBar->m_bConcise;
		m_bOpponentsOnly = pMessageBar->m_bOpponentsOnly;
		m_nShowTurnNumber = pMessageBar->m_nShowTurnNumber;

		UpdateData(TO_UI);

		int nCurSel = pMessageBar->m_TurnSelection.GetCurSel();
		for (int i = 0; i < pMessageBar->m_TurnSelection.GetCount(); ++i)
		{
			CString strText;
			pMessageBar->m_TurnSelection.GetLBText(i, strText);

			int nItem = m_TurnSelection.AddString(strText);
			m_TurnSelection.SetItemData(nItem, pMessageBar->m_TurnSelection.GetItemData(i));

			if (nCurSel == i)
				m_TurnSelection.SetCurSel(nItem);
		}

		UpdateList();
	}

	m_Tab.InsertItem(0, _T("Log"));

	return TRUE;
}

BEGIN_MESSAGE_MAP(CGameSummaryDlg, CDialogEx)
	ON_BN_CLICKED(IDC_CONCISE, OnBnClickedConcise)
	ON_BN_CLICKED(IDC_OPPONENTS_ONLY, OnBnClickedOpponentsOnly)
	ON_CBN_SELCHANGE(IDC_TURN_SELECTION, OnSelchangeTurnSelection)
END_MESSAGE_MAP()

// CGameSummaryDlg message handlers
void CGameSummaryDlg::OnBnClickedConcise()
{
	UpdateData(FROM_UI);

	UpdateList();
}

void CGameSummaryDlg::OnBnClickedOpponentsOnly()
{
	UpdateData(FROM_UI);

	UpdateList();
}

void CGameSummaryDlg::OnSelchangeTurnSelection() 
{
	int nCurSel = m_TurnSelection.GetCurSel();
	if (nCurSel == -1)
		return;

	m_nShowTurnNumber = m_TurnSelection.GetItemData(nCurSel);

	UpdateList();
}