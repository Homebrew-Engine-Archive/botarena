// UsageEntryDialog.cpp : implementation file
//

#include "stdafx.h"
#include "UsageEntryDialog.h"
#include "EditUsageEntryDialog.h"
#include ".\usageentrydialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CUsageEntryDialog dialog
//

CUsageEntryDialog::CUsageEntryDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CUsageEntryDialog::IDD, pParent)
	, m_bOverrideThisUPInStack(TRUE)
{
	m_strCardName = _T("");
	m_strUniqueChildAbilityName = _T("");
	m_bChanged = FALSE;
	m_pUsageAbility = NULL;
	m_pTempUsageAbility = NULL;
	m_nUsableIndex = -1;
	m_nNotUsableIndex = -1;
	m_bHasPredefinedUsage = FALSE;
}

void CUsageEntryDialog::SetUsageAbility(CUsageAbility* pUsageAbility)
{
	m_pUsageAbility = pUsageAbility;

	m_strCardName = pUsageAbility->GetUsageCard()->GetCardName();
	m_strUniqueChildAbilityName = pUsageAbility->GetUniqueChildAbilityName();
}

void CUsageEntryDialog::UpdateControls()
{
	int nSelectedCount = m_EntryList.GetSelectedCount();

	m_RemoveButton.EnableWindow(nSelectedCount == 1);
	m_PropertiesButton.EnableWindow(nSelectedCount == 1);
	m_UsePreDefinedButton.EnableWindow(m_bHasPredefinedUsage);

	if (nSelectedCount == 1)
	{
		int nIndex = m_EntryList.GetNextItem(-1, LVNI_SELECTED);

		m_MoveUpButton.EnableWindow(nIndex != 0);
		m_MoveDownButton.EnableWindow(nIndex < m_EntryList.GetItemCount() - 1);		
	}
	else
	{
		m_MoveUpButton.EnableWindow(FALSE);
		m_MoveDownButton.EnableWindow(FALSE);		
	}
}

void CUsageEntryDialog::UpdateList()
{
	m_EntryList.DeleteAllItems();

	for (CUsageCard::UsageAbilityArray::size_type i = 0; i < m_pTempUsageAbility->GetEntryCount(); ++i)
	{
		CUsageEntry* pEntry = m_pTempUsageAbility->GetEntry(i);

		CString strNodes;
		for (int j = 0; j < pEntry->m_nCount; ++j)
		{
			if (!strNodes.IsEmpty())
				strNodes += _T(" and ");
			strNodes += pEntry->m_Items[j].ToString();
		}

		int nIndex = m_EntryList.InsertItem(m_EntryList.GetItemCount(), strNodes);
		m_EntryList.SetItemText(nIndex, 1, pEntry->m_bUsable ? _T("Usable") : _T("Not usable"));

		m_EntryList.SetItemData(nIndex, (DWORD)pEntry);
	}

	if (m_pTempUsageAbility->GetDefaultUsage())
		m_DefaultUsageList.SetCurSel(m_nUsableIndex);
	else
		m_DefaultUsageList.SetCurSel(m_nNotUsableIndex);
}

//_____________________________________________________________________________
//
// CUsageEntryDialog - Overrides
//

void CUsageEntryDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_USAGE, m_DefaultUsageList);
	DDX_Control(pDX, IDC_PROPERTIES, m_PropertiesButton);
	DDX_Control(pDX, IDC_MOVE_UP, m_MoveUpButton);
	DDX_Control(pDX, IDC_MOVE_DOWN, m_MoveDownButton);
	DDX_Control(pDX, IDC_REMOVE_ENTRY, m_RemoveButton);
	DDX_Control(pDX, IDC_ADD_ENTRY, m_AddButton);
	DDX_Control(pDX, IDC_USAGE_ENTRY_LIST, m_EntryList);
	DDX_Text(pDX, IDC_CARD_NAME, m_strCardName);
	DDX_Text(pDX, IDC_ABILITY_ID, m_strUniqueChildAbilityName);
	DDX_Control(pDX, IDC_USE_PREDEFINED, m_UsePreDefinedButton);
	DDX_Check(pDX, IDC_OVERRIDE_THIS_U_P_IN_STACK, m_bOverrideThisUPInStack);
}

void CUsageEntryDialog::OnCancel() 
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

	delete m_pTempUsageAbility;
	
	CDialogEx::OnCancel();
}

BOOL CUsageEntryDialog::OnInitDialog() 
{
	CDialogEx::OnInitDialog();

	m_EntryList.InsertColumn(0, _T("Condition"), LVCFMT_LEFT, 310);
	m_EntryList.InsertColumn(1, _T("Usage"), LVCFMT_LEFT, 80);

	m_EntryList.SetExtendedStyle(m_EntryList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);
	//m_EntryList.ColorSortColumn(FALSE);
	m_EntryList.GetProfile();

	m_pTempUsageAbility = m_pUsageAbility->Clone();

	m_nUsableIndex = m_DefaultUsageList.AddString(_T("Usable"));
	m_DefaultUsageList.SetItemData(m_nUsableIndex, TRUE);

	m_nNotUsableIndex = m_DefaultUsageList.AddString(_T("Not usable"));
	m_DefaultUsageList.SetItemData(m_nNotUsableIndex, FALSE);

	const CAbility* pAbility = m_pTempUsageAbility->GetCardAbility();
	if (pAbility)
		m_bHasPredefinedUsage = m_pTempUsageAbility->HasPredefinedUsage(pAbility);

	m_bOverrideThisUPInStack = m_pTempUsageAbility->GetOverrideThisInNonEmptyStack();

	UpdateList();
	UpdateControls();

	m_bChanged = FALSE;
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CUsageEntryDialog::OnOK() 
{
	m_pUsageAbility->Copy(*m_pTempUsageAbility);

	delete m_pTempUsageAbility;
	
	CDialogEx::OnOK();
}

//_____________________________________________________________________________
//
// CUsageEntryDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CUsageEntryDialog, CDialogEx)
	ON_BN_CLICKED(IDC_ADD_ENTRY, OnAddEntry)
	ON_NOTIFY(NM_DBLCLK, IDC_USAGE_ENTRY_LIST, OnDblclkUsageEntryList)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_USAGE_ENTRY_LIST, OnItemchangedUsageEntryList)
	ON_BN_CLICKED(IDC_MOVE_DOWN, OnMoveDown)
	ON_BN_CLICKED(IDC_MOVE_UP, OnMoveUp)
	ON_BN_CLICKED(IDC_PROPERTIES, OnProperties)
	ON_BN_CLICKED(IDC_REMOVE_ENTRY, OnRemoveEntry)
	ON_CBN_SELCHANGE(IDC_USAGE, OnSelchangeUsage)
	ON_BN_CLICKED(IDC_USE_PREDEFINED, OnBnClickedUsePredefined)
	ON_BN_CLICKED(IDC_OVERRIDE_THIS_U_P_IN_STACK, OnBnClickedOverrideThisUPInStack)
END_MESSAGE_MAP()

void CUsageEntryDialog::OnAddEntry() 
{
	CEditUsageEntryDialog NewEntryDlg;
	NewEntryDlg.SetCaption(IDS_NEW_USAGE_ENTRY);
	NewEntryDlg.SetAbilityID(m_pTempUsageAbility->GetUniqueChildAbilityName());
	NewEntryDlg.AddComparer(m_pTempUsageAbility->GetUsageCard()->GetCardType());

	if (NewEntryDlg.DoModal() == IDOK)
	{
		CUsageEntry* pEntry(new CUsageEntry);
		if (pEntry)
		{
			pEntry->m_bUsable = NewEntryDlg.m_SelectedUsage;
			pEntry->m_nCount = (NewEntryDlg.m_bAnd ? 2 : 1);
			pEntry->m_Items[0] = NewEntryDlg.m_SelectedNode;
			pEntry->m_Items[1] = NewEntryDlg.m_SelectedNode2;

			CString strNodes;
			for (int j = 0; j < pEntry->m_nCount; ++j)
			{
				if (!strNodes.IsEmpty())
					strNodes += _T(" and ");
				strNodes += pEntry->m_Items[j].ToString();
			}

			int nIndex = m_EntryList.InsertItem(m_EntryList.GetItemCount(), strNodes);

			m_EntryList.SetItemText(nIndex, 1, pEntry->m_bUsable ? _T("Usable") : _T("Not usable"));

			m_EntryList.SetItemData(nIndex, (DWORD)pEntry);

			m_pTempUsageAbility->AddEntry(pEntry);

			m_bChanged = TRUE;
		}
	}
}

void CUsageEntryDialog::OnDblclkUsageEntryList(NMHDR* /*pNMHDR*/, LRESULT* pResult) 
{
	OnProperties();
	
	*pResult = 0;
}

void CUsageEntryDialog::OnItemchangedUsageEntryList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	UpdateControls();

	*pResult = 0;
}

void CUsageEntryDialog::OnMoveDown() 
{
	if (m_EntryList.GetSelectedCount() == 1)
	{
		int nIndex = m_EntryList.GetNextItem(-1, LVNI_SELECTED);
		if (nIndex < m_EntryList.GetItemCount() - 1)
		{
			CUsageEntry* pUsageEntry = (CUsageEntry*)m_EntryList.GetItemData(nIndex);

			if (m_pTempUsageAbility->MoveEntry(pUsageEntry, FALSE))
			{
				m_EntryList.DeleteItem(nIndex);

				CString strNodes;
				for (int j = 0; j < pUsageEntry->m_nCount; ++j)
				{
					if (!strNodes.IsEmpty())
						strNodes += _T(" and ");
					strNodes += pUsageEntry->m_Items[j].ToString();
				}

				int nIndex2 = m_EntryList.InsertItem(nIndex + 1, strNodes);
				m_EntryList.SetItemText(nIndex2, 1, pUsageEntry->m_bUsable ? _T("Usable") : _T("Not usable"));

				m_EntryList.SetItemData(nIndex2, (DWORD)pUsageEntry);

				m_EntryList.SelectItem(nIndex2);

				m_bChanged = TRUE;
			}
		}
	}
}

void CUsageEntryDialog::OnMoveUp() 
{
	if (m_EntryList.GetSelectedCount() == 1)
	{
		int nIndex = m_EntryList.GetNextItem(-1, LVNI_SELECTED);
		if (nIndex)
		{
			CUsageEntry* pUsageEntry = (CUsageEntry*)m_EntryList.GetItemData(nIndex);

			if (m_pTempUsageAbility->MoveEntry(pUsageEntry, TRUE))
			{
				m_EntryList.DeleteItem(nIndex);

				CString strNodes;
				for (int j = 0; j < pUsageEntry->m_nCount; ++j)
				{
					if (!strNodes.IsEmpty())
						strNodes += _T(" and ");
					strNodes += pUsageEntry->m_Items[j].ToString();
				}

				int nIndex2 = m_EntryList.InsertItem(nIndex - 1, strNodes);
				m_EntryList.SetItemText(nIndex2, 1, pUsageEntry->m_bUsable ? _T("Usable") : _T("Not usable"));

				m_EntryList.SetItemData(nIndex2, (DWORD)pUsageEntry);

				m_EntryList.SelectItem(nIndex2);

				m_bChanged = TRUE;
			}
		}
	}
}

void CUsageEntryDialog::OnProperties() 
{
	if (m_EntryList.GetSelectedCount() == 1)
	{
		int nIndex = m_EntryList.GetNextItem(-1, LVNI_SELECTED);

		CUsageEntry* pUsageEntry = (CUsageEntry*)m_EntryList.GetItemData(nIndex);

		CEditUsageEntryDialog EntryDlg;
		
		EntryDlg.SetCaption(IDS_USAGE_ENTRY);
		EntryDlg.SetAbilityID(m_pTempUsageAbility->GetUniqueChildAbilityName());
		EntryDlg.AddComparer(m_pTempUsageAbility->GetUsageCard()->GetCardType());

		EntryDlg.m_SelectedNode = pUsageEntry->m_Items[0];
		EntryDlg.m_SelectedNode2 = pUsageEntry->m_Items[1];
		EntryDlg.m_SelectedUsage = pUsageEntry->m_bUsable;
		EntryDlg.m_bAnd = pUsageEntry->m_nCount == 1 ? FALSE : TRUE;

		if (EntryDlg.DoModal() == IDOK)
		{
			pUsageEntry->m_Items[0] = EntryDlg.m_SelectedNode;
			pUsageEntry->m_bUsable = EntryDlg.m_SelectedUsage;
			pUsageEntry->m_nCount = (EntryDlg.m_bAnd ? 2 : 1);
			if (EntryDlg.m_bAnd)
				pUsageEntry->m_Items[1] = EntryDlg.m_SelectedNode2;

			CString strNodes;
			for (int j = 0; j < pUsageEntry->m_nCount; ++j)
			{
				if (!strNodes.IsEmpty())
					strNodes += _T(" and ");
				strNodes += pUsageEntry->m_Items[j].ToString();
			}

			m_EntryList.SetItemText(nIndex, 0, strNodes);
			m_EntryList.SetItemText(nIndex, 1, pUsageEntry->m_bUsable ? _T("Usable") : _T("Not usable"));
		}
	}
}

void CUsageEntryDialog::OnRemoveEntry() 
{
	if (m_EntryList.GetSelectedCount() == 1)
	{
		int nIndex = m_EntryList.GetNextItem(-1, LVNI_SELECTED);
		CUsageEntry* pUsageEntry = (CUsageEntry*)m_EntryList.GetItemData(nIndex);

		if (m_pTempUsageAbility->RemoveEntry(pUsageEntry))
			m_EntryList.DeleteItem(nIndex);

		m_bChanged = TRUE;
	}
}

void CUsageEntryDialog::OnSelchangeUsage() 
{
	m_bChanged = TRUE;

	m_pTempUsageAbility->SetDefaultUsage(m_DefaultUsageList.GetItemData(m_DefaultUsageList.GetCurSel()));		
}

void CUsageEntryDialog::OnBnClickedUsePredefined()
{
	if (!m_bHasPredefinedUsage)
		return;

	if (m_pTempUsageAbility->GetEntryCount())
		if (MessageBox(_T("Remove existing settings and use pre-defined settings on this ability?"),
					_T("Use Pre-defined Settings"),
					MB_ICONQUESTION | MB_YESNO) != IDYES)
			return;

	const CAbility* pAbility = m_pTempUsageAbility->GetCardAbility();

	if (!pAbility)
	{
		MessageBox(_T("Error creating card and ability objects"), _T("Error"), MB_ICONERROR | MB_OK);
		return;
	}

	if (!m_pTempUsageAbility->HasPredefinedUsage(pAbility))
	{
		MessageBox(_T("No pre-defined usage pattern"), _T("Error"), MB_ICONERROR | MB_OK);
		return;
	}

	m_pTempUsageAbility->SetPredefinedUsage(pAbility);

	m_bChanged = TRUE;

	UpdateList();
	UpdateControls();

	m_bOverrideThisUPInStack = m_pTempUsageAbility->GetOverrideThisInNonEmptyStack();
	UpdateData(TO_UI);
}

void CUsageEntryDialog::OnBnClickedOverrideThisUPInStack()
{
	UpdateData(FROM_UI);

	m_pTempUsageAbility->SetOverrideThisInNonEmptyStack(m_bOverrideThisUPInStack);
}
