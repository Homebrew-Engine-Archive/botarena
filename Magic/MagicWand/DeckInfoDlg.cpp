// DeckInfoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "DeckInfoDlg.h"


// CDeckInfoDlg dialog

IMPLEMENT_DYNAMIC(CDeckInfoDlg, CDialog)

CDeckInfoDlg::CDeckInfoDlg(const CDeck& deck, CWnd* pParent /*=NULL*/)
	: CDialog(CDeckInfoDlg::IDD, pParent)
	, m_Deck(deck)
	, m_strHeader(_T(""))
	, m_bPreconstructed(FALSE)
	, m_bNoCardLimit(FALSE)
{

}

CDeckInfoDlg::~CDeckInfoDlg()
{
}

void CDeckInfoDlg::AddInfo(LPCTSTR strName, LPCTSTR strValue)
{
	int nIndex = m_InfoList.InsertItem(m_InfoList.GetItemCount(), strName);
	m_InfoList.SetItemText(nIndex, 1, strValue);
}

void CDeckInfoDlg::AddInfo(LPCTSTR strName, int nValue)
{
	CString strValue;
	strValue.Format(_T("%d"), nValue);
	AddInfo(strName, strValue);
}

void CDeckInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_HEADER, m_strHeader);
	DDX_Check(pDX, IDC_PRECONSTRUCTED, m_bPreconstructed);
	DDX_Check(pDX, IDC_NO_CARD_LIMIT, m_bNoCardLimit);
	DDX_Control(pDX, IDC_INFO, m_InfoList);
}

BOOL CDeckInfoDlg::OnInitDialog() 
{
	__super::OnInitDialog();

	m_InfoList.InsertColumn(0, _T("Name"), LVCFMT_LEFT, 100);
	m_InfoList.InsertColumn(1, _T("Value"), LVCFMT_LEFT, 200);	
	m_InfoList.SetExtendedStyle(m_InfoList.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);

	if (!m_strDeckName.IsEmpty())
		AddInfo(_T("Deck"), m_strDeckName);

	AddInfo(_T("Cards"), m_Deck.GetDeckCardCount());
	AddInfo(_T("Planeswalkers"), m_Deck.GetPlaneswalkerCount());
	AddInfo(_T("Creatures"), m_Deck.GetCreatureCount());
	AddInfo(_T("Instants"), m_Deck.GetInstantCount());
	AddInfo(_T("Sorceries"), m_Deck.GetSorceryCount());
	AddInfo(_T("Enchantments"), m_Deck.GetEnchantmentCount());
	AddInfo(_T("Artifacts"), m_Deck.GetArtifactCount());
	AddInfo(_T("Lands"), m_Deck.GetLandCount());

	AddInfo(_T("Sideboards"), m_Deck.GetSideboardCardCount());

	return TRUE;
}

BEGIN_MESSAGE_MAP(CDeckInfoDlg, CDialog)
END_MESSAGE_MAP()


// CDeckInfoDlg message handlers
