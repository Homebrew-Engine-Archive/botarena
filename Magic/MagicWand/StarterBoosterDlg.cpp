// StarterBoosterDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "Resource.h"
#include "StarterBoosterDlg.h"


// CStarterBoosterDlg dialog

IMPLEMENT_DYNAMIC(CStarterBoosterDlg, CDialog)

CStarterBoosterDlg::CStarterBoosterDlg(UINT nDialogId, CWnd* pParent /*=NULL*/)
	: CDialog(nDialogId, pParent)
	, m_bRemoveBasicLands(FALSE)
	, m_nDialogId(nDialogId)
{
}

CStarterBoosterDlg::~CStarterBoosterDlg()
{
}

void CStarterBoosterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EXPANSION, m_ExpansionList);
	DDX_Control(pDX, IDC_PRODUCT, m_ProductList);
	DDX_Check(pDX, IDC_REMOVE_BASIC_LANDS, m_bRemoveBasicLands);
	DDX_Control(pDX, IDC_SELECTIONS, m_SelectionList);
}

void CStarterBoosterDlg::AddModule(const CCardModule* pModule)
{
	CString strExpansionName(pModule->GetExpansionName());

	if (strExpansionName == _T("Token"))
		return;

	const CardProducts& products(pModule->GetProducts());
	if (!products.size())
		return;

	int nImageIndex = m_ImageList.Add(pModule->GetIcon());

	COMBOBOXEXITEM cbi;
	cbi.mask = CBEIF_IMAGE | CBEIF_TEXT | CBEIF_SELECTEDIMAGE | CBEIF_LPARAM;

	cbi.iItem = m_ExpansionList.GetCount();
	cbi.pszText = (LPTSTR)strExpansionName.LockBuffer();
	cbi.cchTextMax = strExpansionName.GetLength();
	cbi.iImage = nImageIndex;
	cbi.iSelectedImage = nImageIndex;
	cbi.lParam = reinterpret_cast<DWORD_PTR>(pModule);
	
	m_ExpansionList.InsertItem(&cbi);

	m_ModuleIcons[pModule] = nImageIndex;
}

BOOL CStarterBoosterDlg::OnInitDialog() 
{
	__super::OnInitDialog();

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 10, 1);
	m_ExpansionList.SetImageList(&m_ImageList);
	
	for (size_t i = 0; i < CCardStore::GetInstance()->GetModuleCount(); ++i)
		AddModule(CCardStore::GetInstance()->GetModule(i));

	for (size_t i = 0; i < CCardStore::GetInstance()->GetPseudoModuleCount(); ++i)
		AddModule(CCardStore::GetInstance()->GetPseudoModule(i));

	if (m_ExpansionList.GetCount())
	{
		m_ExpansionList.SetCurSel(0);
		OnCbnSelchangeExpansionList();
	}

	m_SelectionList.InsertColumn(0, _T("Core Set/Expansion"), LVCFMT_LEFT, 110);
	m_SelectionList.InsertColumn(1, _T("Product"), LVCFMT_LEFT, 200);	
	
	m_SelectionList.SetExtendedStyle(m_SelectionList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);

	m_SelectionList.SetImageList(&m_ImageList, LVSIL_SMALL);

	if (m_nDialogId == IDD_ADD_SEALED_DECK)
	{
		GetDlgItem(IDC_DECK)->SetWindowText(m_strDeck);
	}

	return TRUE;
}

void CStarterBoosterDlg::OnOK() 
{
	UpdateData(FROM_UI);

	std::auto_ptr<CMTRNG> apRandom;
	if (m_nDialogId == IDD_ADD_SEALED_DECK)
	{
		GetDlgItem(IDC_SEED)->GetWindowText(m_strSeed);	
		m_strSeed.Trim();

		GetDlgItem(IDC_DECK)->GetWindowText(m_strDeck);
		m_strDeck.Trim();
	}
	else
		m_strSeed.Empty();

	if (!m_strSeed.IsEmpty())
	{
		std::vector<unsigned long> seeds;
		for (int i = 0; i < m_strSeed.GetLength(); ++i)
			seeds.push_back(m_strSeed[i]);

		GUID computerId(GetComputerId());
		DWORD* pComputerId = (DWORD*)&computerId;
		seeds.push_back(pComputerId[0]);
		seeds.push_back(pComputerId[1]);
		seeds.push_back(pComputerId[2]);

		CString strComputerName(GetComputerName());
		for (int i = 0; i < strComputerName.GetLength(); ++i)
			seeds.push_back(strComputerName[i]);

		apRandom = std::auto_ptr<CMTRNG>(new CMTRNG(&(seeds[0]), seeds.size()));
	}
	else
	{	
		unsigned long seed = static_cast<unsigned long>(time(NULL));
		apRandom = std::auto_ptr<CMTRNG>(new CMTRNG(seed));
	}

	for (int i = 0; i < m_SelectionList.GetItemCount(); ++i)
	{
		SelectionEntry* pSelectionEntry = reinterpret_cast<SelectionEntry*>(m_SelectionList.GetItemData(i));

		CardEntries cards(pSelectionEntry->pModule->GenerateProduct(
			pSelectionEntry->nProductIndex, m_bRemoveBasicLands ? true : false, *apRandom));
		m_Cards.insert(m_Cards.end(), cards.begin(), cards.end());
	}

	__super::OnOK();
}

BEGIN_MESSAGE_MAP(CStarterBoosterDlg, CDialog)
	ON_CBN_SELCHANGE(IDC_EXPANSION, OnCbnSelchangeExpansionList)
	ON_BN_CLICKED(IDC_ADD, &CStarterBoosterDlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_REMOVE, &CStarterBoosterDlg::OnBnClickedRemove)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_SELECTIONS, &CStarterBoosterDlg::OnLvnItemchangedSelections)
	ON_NOTIFY(LVN_DELETEITEM, IDC_SELECTIONS, &CStarterBoosterDlg::OnLvnDeleteitemSelections)
END_MESSAGE_MAP()

// CStarterBoosterDlg message handlers

void CStarterBoosterDlg::OnCbnSelchangeExpansionList()
{
	int nIndex = m_ExpansionList.GetCurSel();
	CCardModule* pModule = reinterpret_cast<CCardModule*>(m_ExpansionList.GetItemData(nIndex));

	m_ProductList.ResetContent();

	const CardProducts& products(pModule->GetProducts());
	if (!products.size())
	{
		GetDlgItem(IDOK)->EnableWindow(FALSE);
		return;
	}

	for (size_t i = 0; i < products.size(); ++i)
	{
		int nIndex = m_ProductList.AddString(products[i].GetProductName());
		m_ProductList.SetItemData(nIndex, i);
	}

	m_ProductList.SetCurSel(0);

	GetDlgItem(IDC_ADD)->EnableWindow(TRUE);
}

void CStarterBoosterDlg::OnBnClickedAdd()
{
	int nIndex = m_ExpansionList.GetCurSel();
	if (nIndex == -1)
		return;
	CCardModule* pModule = reinterpret_cast<CCardModule*>(m_ExpansionList.GetItemData(nIndex));
	if (!pModule)
		return;

	int nProductIndex = m_ProductList.GetItemData(m_ProductList.GetCurSel());
	CString strProductName;
	m_ProductList.GetWindowText(strProductName);

	SelectionEntry* pSelectionEntry = new SelectionEntry;
	pSelectionEntry->nProductIndex = nProductIndex;
	pSelectionEntry->pModule = pModule;

	nIndex =
		m_SelectionList.InsertItem(m_SelectionList.GetItemCount(), pModule->GetExpansionName(), 
			m_ModuleIcons[pModule]);

	m_SelectionList.SetItemData(nIndex, reinterpret_cast<DWORD_PTR>(pSelectionEntry));
	m_SelectionList.SetItemText(nIndex, 1, strProductName);

	GetDlgItem(IDOK)->EnableWindow(m_SelectionList.GetItemCount());
}

void CStarterBoosterDlg::OnBnClickedRemove()
{
	while (m_SelectionList.GetSelectedCount())
	{
		int nItem = m_SelectionList.GetNextItem(-1, LVNI_SELECTED);
		m_SelectionList.DeleteItem(nItem);
	}

	GetDlgItem(IDOK)->EnableWindow(m_SelectionList.GetItemCount());
}

void CStarterBoosterDlg::OnLvnItemchangedSelections(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);

	GetDlgItem(IDC_REMOVE)->EnableWindow(m_SelectionList.GetSelectedCount());

	*pResult = 0;
}

void CStarterBoosterDlg::OnLvnDeleteitemSelections(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);

	SelectionEntry* pSelectionEntry = reinterpret_cast<SelectionEntry*>(pNMLV->lParam);
	if (pSelectionEntry)
		delete pSelectionEntry;

	*pResult = 0;
}
