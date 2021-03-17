// OrderCardDialog.cpp : implementation file
//

#include "stdafx.h"
#include "OrderCardDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// COrderCardDialog dialog
//

COrderCardDialog::COrderCardDialog(CWnd* pParent /*=NULL*/)
	: CDialog(COrderCardDialog::IDD, pParent)
{
	m_pCardContainer = NULL;
	m_bReadOnly = FALSE;
	m_strCaption = _T("Order Cards");
}

//_____________________________________________________________________________
//
// COrderCardDialog - Overrides
//

void COrderCardDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CARD, m_Card);
	DDX_Control(pDX, IDC_UP, m_Up);
	DDX_Control(pDX, IDC_DOWN, m_Down);
	DDX_Control(pDX, IDC_CARD_LIST, m_CardList);
}

BOOL COrderCardDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_CardList.InsertColumn(0, _T("Cards"), LVCFMT_LEFT, 100);
	//m_CardList.SetColumnWidth(0, LVSCW_AUTOSIZE_USEHEADER);

	for (int i = m_pCardContainer->GetSize() - 1; i >= 0; --i)
	{
		int nIndex = m_CardList.InsertItem(m_CardList.GetItemCount(), m_pCardContainer->GetAt(i)->GetCardName());
		CCard* pCard = m_pCardContainer->GetAt(i);
		m_CardList.SetItemData(nIndex, (DWORD)pCard);
	}

	m_CardBitmap.DeleteObject();
	m_CardBitmap.Attach(CCardStore::GetInstance()->GetBackBitmap());
	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);

	SetWindowText(m_strCaption);

	if (m_bReadOnly)
	{
		m_Up.ShowWindow(SW_HIDE);
		m_Down.ShowWindow(SW_HIDE);
	}

	// Workaround a problem with disappearing dialog
	SetTimer(0, 0, 0);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void COrderCardDialog::OnTimer(UINT nIDEvent) 
{
	__super::OnTimer(nIDEvent);
	KillTimer(0);
	::SetWindowPos(GetSafeHwnd(), HWND_TOPMOST, 0, 0, 0, 0, SWP_SHOWWINDOW | SWP_NOMOVE | SWP_NOSIZE);	
}

void COrderCardDialog::OnOK() 
{
	m_pCardContainer->RemoveAll();
	for (int i = 0; i < m_CardList.GetItemCount(); ++i)
	{
		CCard* pCard = (CCard*)m_CardList.GetItemData(i);
		m_pCardContainer->AddCard(pCard, CardPlacement::Bottom);
	}
	
	CDialog::OnOK();
}

//_____________________________________________________________________________
//
// COrderCardDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(COrderCardDialog, CDialog)
	ON_BN_CLICKED(IDC_DOWN, OnDown)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_CARD_LIST, OnItemchangedCardList)
	ON_BN_CLICKED(IDC_UP, OnUp)
	ON_WM_TIMER()
END_MESSAGE_MAP()

void COrderCardDialog::OnDown() 
{
	POSITION pos = m_CardList.GetFirstSelectedItemPosition();

	if (!pos)
		return;

	int nIndex = m_CardList.GetNextSelectedItem(pos);

	CString strText(m_CardList.GetItemText(nIndex, 0));
	DWORD dwData = m_CardList.GetItemData(nIndex);

	m_CardList.DeleteItem(nIndex);

	nIndex = m_CardList.InsertItem(nIndex + 1, strText);
	m_CardList.SetItemData(nIndex, dwData);
	m_CardList.SetItemState(nIndex, LVIS_SELECTED, LVIS_SELECTED);
}

void COrderCardDialog::OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	POSITION pos = m_CardList.GetFirstSelectedItemPosition();

	if (!pos)
	{
		m_Up.EnableWindow(FALSE);
		m_Down.EnableWindow(FALSE);
	}		
	else
	{
		int nIndex = m_CardList.GetNextSelectedItem(pos);

		m_Up.EnableWindow(nIndex != 0);
		m_Down.EnableWindow(nIndex < m_CardList.GetItemCount() - 1);

		CCard* pCard = (CCard*)m_CardList.GetItemData(nIndex);

#if 1	// 8/16/2001: Changed to support multiple pictures per card
		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCardByID(pCard->GetImageID());
#else
		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(pCard->GetPrintedCardName(), TRUE);
#endif

		m_CardBitmap.DeleteObject();
		m_CardBitmap.Attach(pCardEntry->GetBitmap(FALSE).GetHBITMAP());
		HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
		if (hPreviousBitmap)
			::DeleteObject(hPreviousBitmap);
	}

	*pResult = 0;
}

void COrderCardDialog::OnUp() 
{
	POSITION pos = m_CardList.GetFirstSelectedItemPosition();

	if (!pos)
		return;

	int nIndex = m_CardList.GetNextSelectedItem(pos);

	CString strText(m_CardList.GetItemText(nIndex, 0));
	DWORD dwData = m_CardList.GetItemData(nIndex);

	m_CardList.DeleteItem(nIndex);

	nIndex = m_CardList.InsertItem(nIndex - 1, strText);
	m_CardList.SetItemData(nIndex, dwData);
	m_CardList.SetItemState(nIndex, LVIS_SELECTED, LVIS_SELECTED);
}
