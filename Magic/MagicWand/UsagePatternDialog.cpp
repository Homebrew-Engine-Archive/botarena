// PatternDialog.cpp : implementation file
//

#include "stdafx.h"
#include "UsagePatternDialog.h"
#include "CardDialog.h"
#include "UsageAbilityDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CUsagePatternDialog dialog
//

CUsagePatternDialog::CUsagePatternDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CUsagePatternDialog::IDD, pParent)
{
}

//_____________________________________________________________________________
//
// CUsagePatternDialog - Overrides
//

void CUsagePatternDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_REMOVE_CARD, m_RemoveButton);
	DDX_Control(pDX, IDC_PROPERTIES, m_PropertiesButton);
	DDX_Control(pDX, IDC_CARD, m_Card);
}

BOOL CUsagePatternDialog::OnInitDialog() 
{
	CDialogEx::OnInitDialog();

	m_CardList.SubclassDlgItem(IDC_CARD_LIST, this);

	m_CardList.InsertColumn(0, _T("Card"), LVCFMT_LEFT, 133);
	m_CardList.InsertColumn(1, _T("Pattern"), LVCFMT_LEFT, 63);

	m_CardBitmap.DeleteObject();
	m_CardBitmap.Attach(CCardStore::GetInstance()->GetBackBitmap());
	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);

	for (CUsagePattern::UsageCardArray::size_type i = 0; i < CUsagePattern::GetInstance()->GetCardCount(FALSE); ++i)
	{
		CUsageCard* pUsageCard = CUsagePattern::GetInstance()->GetCard(FALSE, i);
		int nIndex = m_CardList.InsertItem(m_CardList.GetItemCount(), pUsageCard->GetCardName());
		m_CardList.SetItemText(nIndex, 1, pUsageCard->IsEnabled() ? _T("Enabled") : _T("Disabled"));
		m_CardList.SetItemData(nIndex, (DWORD)pUsageCard);
	}

	m_PropertiesButton.EnableWindow(FALSE);
	m_RemoveButton.EnableWindow(FALSE);

	m_CardList.SetExtendedStyle(m_CardList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);
	//m_CardList.ColorSortColumn(FALSE);

	if (!m_CardList.GetProfile())
		m_CardList.SortColumn(0);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

//_____________________________________________________________________________
//
// CUsagePatternDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CUsagePatternDialog, CDialogEx)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_CARD_LIST, OnItemchangedCardList)
	ON_BN_CLICKED(IDC_ADD_CARD, OnAddCard)
	ON_BN_CLICKED(IDC_REMOVE_CARD, OnRemoveCard)
	ON_BN_CLICKED(IDC_PROPERTIES, OnProperties)
	ON_NOTIFY(NM_DBLCLK, IDC_CARD_LIST, OnDblclkCardList)
END_MESSAGE_MAP()

void CUsagePatternDialog::OnAddCard() 
{
	CCardDialog CardDlg;

	CardDlg.SetMinSelections(0);
	CardDlg.SetMaxSelections(1);

	if (CardDlg.DoModal() == IDOK)
	{
		StringArray SelectedCards;
		CardDlg.GetSelectedCards(SelectedCards);

		if (SelectedCards.size())
		{
			int nIndex;
			CUsageCard* pUsageCard = CUsagePattern::GetInstance()->GetCard(FALSE, SelectedCards[0]);
			if (!pUsageCard)
			{
				pUsageCard = CUsagePattern::GetInstance()->AddCard(FALSE, SelectedCards[0]);

				if (pUsageCard)
				{
					nIndex = m_CardList.InsertItem(m_CardList.GetItemCount(), pUsageCard->GetCardName());
					m_CardList.SetItemText(nIndex, 1, pUsageCard->IsEnabled() ? _T("Enabled") : _T("Disabled"));
					m_CardList.SetItemData(nIndex, (DWORD)pUsageCard);
				}
			}
			else
			{
				LVFINDINFO FindInfo;
				FindInfo.flags = LVFI_PARAM;
				FindInfo.lParam = (LPARAM)pUsageCard;
				nIndex = m_CardList.FindItem(&FindInfo);
				VERIFY(nIndex != -1);
			}

			m_CardList.DeselectAllItems();
			m_CardList.SelectItem(nIndex);

			m_CardList.Sort();

			OnProperties();
		}
	}
}

void CUsagePatternDialog::OnDblclkCardList(NMHDR* /*pNMHDR*/, LRESULT* pResult) 
{
	OnProperties();
	
	*pResult = 0;
}

void CUsagePatternDialog::OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	if (m_CardList.GetSelectedCount() == 1)
	{
		CUsageCard* pUsageCard = (CUsageCard*)m_CardList.GetItemData(m_CardList.GetNextItem(-1, LVNI_SELECTED));

		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(pUsageCard->GetCardName(), TRUE);

		m_CardBitmap.DeleteObject();
		m_CardBitmap.Attach(pCardEntry->GetBitmap(FALSE));
		HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
		if (hPreviousBitmap)
			::DeleteObject(hPreviousBitmap);

		m_PropertiesButton.EnableWindow(TRUE);
	}
	else
		m_PropertiesButton.EnableWindow(FALSE);

	m_RemoveButton.EnableWindow(m_CardList.GetSelectedCount());
	
	*pResult = 0;
}

void CUsagePatternDialog::OnProperties() 
{
	if (m_CardList.GetSelectedCount() == 1)
	{
		int nIndex = m_CardList.GetNextItem(-1, LVNI_SELECTED);
		CUsageCard* pUsageCard = (CUsageCard*)m_CardList.GetItemData(nIndex);

		CUsageAbilityDialog AbilityDlg;

		AbilityDlg.SetUsageCard(pUsageCard);

		if (AbilityDlg.DoModal() == IDOK)
		{
			/* 11/18/2003 to allow 'always disable usage'
			if (!pUsageCard->HasEntries())
			{
				CUsagePattern::GetInstance()->RemoveCard(pUsageCard);
				m_CardList.DeleteItem(nIndex);
			}
			else
			*/
			m_CardList.SetItemText(nIndex, 1, pUsageCard->IsEnabled() ? _T("Enabled") : _T("Disabled"));
		}

/*
		CUsageEntryDialog EntryDlg;

		EntryDlg.SetUsageCard(pUsageCard);

		if (EntryDlg.DoModal() == IDOK)
		{
			pUsageCard->SetEnable(EntryDlg.m_bEnabled);

			m_CardList.SetItemText(nIndex, 1, pUsageCard->IsEnabled() ? _T("Enabled") : _T("Disabled"));
		}
*/
	}
}

void CUsagePatternDialog::OnRemoveCard() 
{
	std::list<CUsageCard*> RemoveList;

	POSITION pos = m_CardList.GetFirstSelectedItemPosition();
	while (pos)
	{
		int nItem = m_CardList.GetNextSelectedItem(pos);

		CUsageCard* pUsageCard = (CUsageCard*)m_CardList.GetItemData(nItem);
		RemoveList.push_back(pUsageCard);
	}

	for (std::list<CUsageCard*>::iterator it = RemoveList.begin(); it != RemoveList.end(); ++it)
	{
		LVFINDINFO FindInfo;
		FindInfo.flags = LVFI_PARAM;
		FindInfo.lParam = (LPARAM)*it;
		int nIndex = m_CardList.FindItem(&FindInfo);

		if ((nIndex != -1) &&
			CUsagePattern::GetInstance()->RemoveCard(*it))
			m_CardList.DeleteItem(nIndex);
	}
}
