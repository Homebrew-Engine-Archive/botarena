// CardDialog.cpp : implementation file
//

#include "stdafx.h"
#include "CardDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CCardDialog dialog
//

CCardDialog::CCardDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCardDialog::IDD, pParent)
{
	m_pCardContainer = NULL;
	m_strTitle = _T("Cards");
	m_strCaption = _T("Cards");
	m_nMinSelect = 0;
	m_nMaxSelect = 0;
	m_pSelectedCards = NULL;
	m_pCardFilter = NULL;
	m_bSorting = TRUE;
}

void CCardDialog::GetSelectedCards(StringArray& selectedCards)
{
	selectedCards = m_SelectedCards;
}

//_____________________________________________________________________________
//
// CCardDialog - Overrides
//

void CCardDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CARD, m_Card);
}

void CCardDialog::OnCancel() 
{
	if (m_nMinSelect)
		return;
	
	CDialogEx::OnCancel();
}

BOOL CCardDialog::OnInitDialog() 
{
	CDialogEx::OnInitDialog();
	
	m_CardList.SubclassDlgItem(IDC_CARD_LIST, this);

	m_CardList.InsertColumn(0, m_strTitle, LVCFMT_LEFT, 100);
	m_CardList.SetColumnWidth(0, 170);

	if (m_pCardContainer)
		for (int i = 0; i < m_pCardContainer->GetSize(); ++i)
		{
			int nIndex = m_CardList.InsertItem(m_CardList.GetItemCount(), m_pCardContainer->GetAt(i)->GetCardName());
			m_CardList.SetItemData(nIndex, (DWORD)m_pCardContainer->GetAt(i));
		}
	else
	{
		const StringArray& cardClassNames = CCardFactory::GetInstance()->GetCardClassNames();
		for (StringArray::size_type i = 0; i < cardClassNames.size(); ++i)
		{
			counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, cardClassNames[i], -1));
			if (!cpCard.GetPointer())
				continue;

			m_CardList.InsertItem(m_CardList.GetItemCount(), cpCard->GetPrintedCardName());
		}
	}

	SetWindowText(m_strCaption);

	m_CardBitmap.DeleteObject();
	m_CardBitmap.Attach(CCardStore::GetInstance()->GetBackBitmap());
	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);

	if (m_nMaxSelect == 1)
		m_CardList.ModifyStyle(0, LVS_SINGLESEL);

	m_CardList.SetExtendedStyle(m_CardList.GetExtendedStyle() | LVS_EX_FULLROWSELECT);
	//m_CardList.ColorSortColumn(FALSE);

	if (m_bSorting)
	{
		if (!m_CardList.GetProfile())
			m_CardList.SortColumn(0);
	}
	else
		m_CardList.ModifyStyle(0, LVS_NOSORTHEADER);

	// Workaround a problem with disappearing dialog
	SetTimer(0, 0, 0);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CCardDialog::OnTimer(UINT nIDEvent) 
{
	__super::OnTimer(nIDEvent);
	KillTimer(0);
	::SetWindowPos(GetSafeHwnd(), HWND_TOPMOST, 0, 0, 0, 0, SWP_SHOWWINDOW | SWP_NOMOVE | SWP_NOSIZE);	
}

void CCardDialog::OnOK() 
{
	if (m_nMaxSelect || m_nMinSelect)
	{
		int nCount = m_CardList.GetSelectedCount();
		if (nCount < m_nMinSelect)
		{
			CString strTemp;
			strTemp.Format(_T("Please select at least %d card(s)"), m_nMinSelect);
			MessageBox(strTemp, _T("Select Cards"), MB_OK | MB_ICONERROR);
			return;
		}
	
		if (nCount > m_nMaxSelect)
		{
			CString strTemp;
			strTemp.Format(_T("Please select no more than %d card(s)"), m_nMaxSelect);
			MessageBox(strTemp, _T("Select Cards"), MB_OK | MB_ICONERROR);
			return;
		}

		m_SelectedCards.clear();

		for (UINT i = 0, nIndex = -1; i < m_CardList.GetSelectedCount(); ++i)
		{
			nIndex = m_CardList.GetNextItem(nIndex, LVNI_SELECTED);

			if (m_pSelectedCards)
				m_pSelectedCards->AddCard((CCard*)m_CardList.GetItemData(nIndex), CardPlacement::Top);

			m_SelectedCards.push_back(m_CardList.GetItemText(nIndex, 0));
		}
	}

	CDialogEx::OnOK();
}

//_____________________________________________________________________________
//
// CCardDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CCardDialog, CDialogEx)
	ON_NOTIFY(NM_DBLCLK, IDC_CARD_LIST, OnDblclkCardList)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_CARD_LIST, OnItemchangedCardList)
	ON_WM_TIMER()
END_MESSAGE_MAP()

void CCardDialog::OnDblclkCardList(NMHDR* /*pNMHDR*/, LRESULT* pResult) 
{
	*pResult = 0;
	if (m_nMaxSelect == 1)
	{
		int nIndex = m_CardList.GetNextItem(-1, LVNI_SELECTED);
		CCard* pCard = (CCard*)m_CardList.GetItemData(nIndex);

		if (m_pCardFilter && !m_pCardFilter->IsCardIncluded(pCard))
			return;

		OnOK();
	}
}

void CCardDialog::OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	*pResult = 0;

	if (m_CardList.GetSelectedCount() == 1)
	{
		int nIndex = m_CardList.GetNextItem(-1, LVNI_SELECTED);
		CCard* pCard = (CCard*)m_CardList.GetItemData(nIndex);

#if 1	// 8/16/2001: Changed to support multiple pictures per card

		CCardEntry* pCardEntry = NULL;

		if (pCard)
			pCardEntry = CCardStore::GetInstance()->GetCardByID(pCard->GetImageID());
		else
			pCardEntry = CCardStore::GetInstance()->GetCard(m_CardList.GetItemText(nIndex, 0), FALSE);
#else
		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(pCard->GetPrintedCardName(), TRUE);
#endif

		if (pCardEntry)
		{
			m_CardBitmap.DeleteObject();
			m_CardBitmap.Attach(pCardEntry->GetBitmap(FALSE).GetHBITMAP());
			HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
			if (hPreviousBitmap)
				::DeleteObject(hPreviousBitmap);
		}
	}

	for (UINT i = 0, nIndex = -1; i < m_CardList.GetSelectedCount(); ++i)
	{
		nIndex = m_CardList.GetNextItem(nIndex, LVNI_SELECTED);

		CCard* pCard = (CCard*)m_CardList.GetItemData(nIndex);

		if (m_pCardFilter && !m_pCardFilter->IsCardIncluded(pCard))
		{
			GetDlgItem(IDOK)->EnableWindow(FALSE);
			return;
		}
	}

	GetDlgItem(IDOK)->EnableWindow(TRUE);
}
