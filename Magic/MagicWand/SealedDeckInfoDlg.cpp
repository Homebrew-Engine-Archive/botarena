// SealedDeckInfoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "SealedDeckInfoDlg.h"


// CSealedDeckInfoDlg dialog

IMPLEMENT_DYNAMIC(CSealedDeckInfoDlg, CDialog)

CSealedDeckInfoDlg::CSealedDeckInfoDlg(const CDeck& deck, CWnd* pParent /*=NULL*/)
	: CDialog(CSealedDeckInfoDlg::IDD, pParent)
	, m_Deck(deck)
{

}

CSealedDeckInfoDlg::~CSealedDeckInfoDlg()
{
}

void CSealedDeckInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INFO, m_InfoList);
}

void CSealedDeckInfoDlg::AddInfo(LPCTSTR strName, LPCTSTR strValue, int nImage)
{
	int nIndex = m_InfoList.InsertItem(m_InfoList.GetItemCount(), strValue, nImage);
	m_InfoList.SetItemText(nIndex, 1, strName);
}

void CSealedDeckInfoDlg::AddInfo(LPCTSTR strName, int nValue, int nImage)
{
	CString strValue;
	strValue.Format(_T("%d"), nValue);
	AddInfo(strName, strValue, nImage);
}

BOOL CSealedDeckInfoDlg::OnInitDialog() 
{
	__super::OnInitDialog();

	if (!m_Deck.GetSealed())
		return TRUE;

	if (!m_strCaption.IsEmpty())
		SetWindowText(m_strCaption);

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 2, 1);
	int nOkayImage = m_ImageList.Add(g_pCoreApp->LoadIconW(IDI_SOKAY));
	int nStopImage = m_ImageList.Add(g_pCoreApp->LoadIconW(IDI_SSTOP));

	m_InfoList.InsertColumn(0, _T("Value"), LVCFMT_LEFT, 200);
	m_InfoList.InsertColumn(1, _T("Name"), LVCFMT_LEFT, 100);	
	m_InfoList.SetExtendedStyle(m_InfoList.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);
	m_InfoList.SetImageList(&m_ImageList, LVSIL_SMALL);

	CUIntArray orders;
	orders.Add(1);
	orders.Add(0);
	m_InfoList.SetColumnOrders(orders);

	if (!m_strPlayerName.IsEmpty())
		AddInfo(_T("Player"), m_strPlayerName);

	if (!m_strDeckName.IsEmpty())
		AddInfo(_T("Deck"), m_strDeckName);

	AddInfo(_T("Status"), m_Deck.GetStatus().ToString(),
		m_Deck.GetStatus() == CDeck::DeckStatus::Okay ? nOkayImage : nStopImage);

	AddInfo(_T("Seed"), m_Deck.GetSealSeed().IsEmpty() ? _T("<none>") : m_Deck.GetSealSeed());
	AddInfo(_T("Creation Date"), m_Deck.GetSealCreationDateString(true));
	AddInfo(_T("Modification Date"), m_Deck.GetSealModificationDateString(true));

	CString strComputer;
	strComputer.Format(_T("%s %s"), m_Deck.GetSealComputerName(), m_Deck.GetSealComputerId().ToString());
	AddInfo(_T("Generated On"), strComputer);

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

BEGIN_MESSAGE_MAP(CSealedDeckInfoDlg, CDialog)
END_MESSAGE_MAP()


// CSealedDeckInfoDlg message handlers
