// UsageAbilityDialog.cpp : implementation file
//

#include "stdafx.h"
#include "UsageAbilityDialog.h"
#include "UsageEntryDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CUsageAbilityDialog dialog
//

CUsageAbilityDialog::CUsageAbilityDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CUsageAbilityDialog::IDD, pParent)
{
	m_strCardName = _T("");
	m_bEnabled = TRUE;
	m_bChanged = FALSE;
	m_pUsageCard = NULL;
	m_pTempUsageCard = NULL;
}

void CUsageAbilityDialog::SetUsageCard(CUsageCard* pUsageCard)
{
	m_pUsageCard = pUsageCard;

	m_strCardName = pUsageCard->GetCardName();
	m_bEnabled = m_pUsageCard->IsEnabled();
}

void CUsageAbilityDialog::UpdateControls()
{
	UpdateData(FROM_UI);

	m_AbilityList.EnableWindow(m_bEnabled);
	m_PropertiesButton.EnableWindow(m_bEnabled && (m_AbilityList.GetSelectedCount() == 1));
}

//_____________________________________________________________________________
//
// CUsageAbilityDialog - Overrides
//

void CUsageAbilityDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PROPERTIES, m_PropertiesButton);
	DDX_Control(pDX, IDC_ABILITY_LIST, m_AbilityList);
	DDX_Text(pDX, IDC_CARD_NAME, m_strCardName);
	DDX_Check(pDX, IDC_ENABLED, m_bEnabled);
}

void CUsageAbilityDialog::OnCancel() 
{
	if (m_bChanged)
	{
		int nResult =
			MessageBox(_T("Do you want to save the changes?"), _T("Usage Pattern"), MB_YESNOCANCEL | MB_ICONQUESTION);

		if (nResult == IDCANCEL)
			return;

		if (nResult == IDYES)
		{
			OnOK();
			return;
		}
	}

	delete m_pTempUsageCard;

	CDialogEx::OnCancel();
}

BOOL CUsageAbilityDialog::OnInitDialog() 
{
	CDialogEx::OnInitDialog();
	
	m_AbilityList.InsertColumn(0, _T("Ability"), LVCFMT_LEFT, 230);
	m_AbilityList.InsertColumn(1, _T("Settings"), LVCFMT_LEFT, 80);	
	
	m_AbilityList.SetExtendedStyle(m_AbilityList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);

	m_pTempUsageCard = m_pUsageCard->Clone();

	for (CUsageCard::UsageAbilityArray::size_type i = 0; i < m_pTempUsageCard->GetAbilityCount(); ++i)
	{
		CUsageAbility* pUsageAbility = m_pTempUsageCard->GetAbility(i);
		int nIndex =
			m_AbilityList.InsertItem(m_AbilityList.GetItemCount(),
				pUsageAbility->GetUniqueChildAbilityName());

		CString strEntryCount;
		strEntryCount.Format(_T("%d"), pUsageAbility->GetEntryCount());
		m_AbilityList.SetItemText(nIndex, 1, strEntryCount);

		m_AbilityList.SetItemData(nIndex, (DWORD)pUsageAbility);
	}

	//m_AbilityList.ColorSortColumn(FALSE);

	if (!m_AbilityList.GetProfile())
		m_AbilityList.SortColumn(0);

	UpdateControls();

	m_bChanged = FALSE;

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CUsageAbilityDialog::OnOK() 
{
	m_pUsageCard->Copy(*m_pTempUsageCard);

	delete m_pTempUsageCard;
	
	CDialogEx::OnOK();
}

//_____________________________________________________________________________
//
// CUsageAbilityDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CUsageAbilityDialog, CDialogEx)
	ON_NOTIFY(NM_DBLCLK, IDC_ABILITY_LIST, OnDblclkAbilityList)
	ON_BN_CLICKED(IDC_ENABLED, OnEnabled)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_ABILITY_LIST, OnItemchangedAbilityList)
	ON_BN_CLICKED(IDC_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

void CUsageAbilityDialog::OnDblclkAbilityList(NMHDR* /*pNMHDR*/, LRESULT* pResult) 
{
	OnProperties();	
	
	*pResult = 0;
}

void CUsageAbilityDialog::OnEnabled() 
{
	UpdateData(FROM_UI);

	m_bChanged = TRUE;

	m_pTempUsageCard->SetEnable(m_bEnabled);

	UpdateControls();	
}

void CUsageAbilityDialog::OnItemchangedAbilityList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	UpdateControls();
	
	*pResult = 0;
}

void CUsageAbilityDialog::OnProperties() 
{
	if (m_AbilityList.GetSelectedCount() == 1)
	{
		int nIndex = m_AbilityList.GetNextItem(-1, LVNI_SELECTED);

		CUsageAbility* pUsageAbility = (CUsageAbility*)m_AbilityList.GetItemData(nIndex);

		CUsageEntryDialog EntryDlg;

		EntryDlg.SetUsageAbility(pUsageAbility);

		if (EntryDlg.DoModal() == IDOK)
		{
			m_bChanged = TRUE;

			CString strEntryCount;
			strEntryCount.Format(_T("%d"), pUsageAbility->GetEntryCount());
			m_AbilityList.SetItemText(nIndex, 1, strEntryCount);
		}
	}
}
