#include "stdafx.h"
#include "ListViewCtrlEx.h"
#include "Resource.h"
#include "DialogEx.h"
//#include "memdc.h"

//____________________________________________________________________________
//
// Definition of "workhorse" class "CListBase" 
//

//static
int CALLBACK CListBase::DefaultCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
	CListCtrlEx* pListCtrl = (CListCtrlEx*)lParamSort;
	int nSortColumn = pListCtrl->GetSortColumn();
	BOOL bAscending = pListCtrl->GetSortOrder(); 
   
	CString strItem1 = pListCtrl->GetItemText(lParam1, nSortColumn);
	CString strItem2 = pListCtrl->GetItemText(lParam2, nSortColumn);

	return bAscending ? strItem1.CollateNoCase(strItem2) : strItem2.CollateNoCase(strItem1);
}

CListBase::CListBase(CListCtrlEx* pListCtrl)
	: m_pListCtrl(pListCtrl)
	, m_pParent(NULL)
	, m_nID(-1)
	, m_nSortColumn(-1)
	, m_bSortAscending(TRUE)
	, m_pfnCompare(NULL)
	, m_bSaveProfile(TRUE)
	, m_hTheme(NULL)
{
	ATLASSERT(m_pListCtrl);
}

CListBase::~CListBase()
{
	if (m_hTheme)
		CloseThemeData(m_hTheme);
}

void CListBase::Initialize(UINT nID, CWnd* pParent)
{
	m_nID = nID;
	m_pParent = pParent;

	if (!m_pListCtrl->GetSafeHwnd())
		m_pListCtrl->SubclassDlgItem(m_nID, m_pParent);

	m_pListCtrl->SetExtendedStyle(
		m_pListCtrl->GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_SUBITEMIMAGES |
		LVS_EX_DOUBLEBUFFER);

	SetWindowTheme(m_pListCtrl->GetSafeHwnd(), L"explorer", NULL);
	m_hTheme = OpenThemeData(m_pListCtrl->GetSafeHwnd(), L"ListView");
}

void CListBase::SortColumn(int nCol, BOOL bAscending)
{
	if (nCol == -1)
		return;

	m_nSortColumn = nCol;
	m_bSortAscending = bAscending;

	if (m_pfnCompare)
		m_pListCtrl->SortItems(m_pfnCompare, (LPARAM)m_pListCtrl);
	else
		m_pListCtrl->SendMessage(LVM_SORTITEMSEX, (WPARAM)m_pListCtrl, (LPARAM)DefaultCompareProc);

	SetSortIcon();
}

void CListBase::SetSortIcon()
{
	CHeaderCtrl* pHeaderCtrl = m_pListCtrl->GetHeaderCtrl();
	ATLASSERT(pHeaderCtrl);

	for (int i = 0; i < m_pListCtrl->GetColumnCount(); ++i)
	{
		HDITEM hdrItem;

		hdrItem.mask = HDI_FORMAT;
		if (pHeaderCtrl->GetItem(i, &hdrItem))
		{
			if (m_nSortColumn != -1 && i == m_nSortColumn)
			{
				if (m_bSortAscending)
				{
					hdrItem.fmt &= ~HDF_SORTDOWN;
					hdrItem.fmt |= HDF_SORTUP;
				}
				else
				{
					hdrItem.fmt &= ~HDF_SORTUP;
					hdrItem.fmt |= HDF_SORTDOWN;
				}
			}
			else
				hdrItem.fmt &= ~HDF_SORTDOWN & ~HDF_SORTUP;

			pHeaderCtrl->SetItem(i, &hdrItem);
		}
	}
}

BOOL CListBase::WriteProfile(LPCTSTR strKey)
{
	CWinApp* pWinApp = ::AfxGetApp();
	if (!pWinApp)
		return FALSE;
	
	CString strListCtrlKey;
	if (!strKey || !_tcslen(strKey))
	{
		CDialogEx* pDialog = (CDialogEx*)GetWindowLong(m_pListCtrl->GetParent()->GetSafeHwnd(), GWL_USERDATA);

		if (!pDialog)
			return FALSE;

		strListCtrlKey.Format(REG_LISTCTRL_KEY, pDialog->GetDlgID(), m_pListCtrl->GetDlgCtrlID());
	}
	else
		strListCtrlKey = strKey;

	pWinApp->WriteProfileInt(strListCtrlKey, REG_LISTCTRL_SORT_COL_ENTRY, GetSortColumn());
	pWinApp->WriteProfileInt(strListCtrlKey, REG_LISTCTRL_SORT_ORDER_ENTRY, GetSortOrder());

	for (int i = 0; i < m_pListCtrl->GetColumnCount(); ++i)
	{
		CString strWidthKey;
		strWidthKey.Format(REG_LISTCTRL_WIDTH_ENTRY, i);

		pWinApp->WriteProfileInt(strListCtrlKey, strWidthKey, m_pListCtrl->GetColumnWidth(i));
	}

	CUIntArray ColumnOrders;
	if (!m_pListCtrl->GetColumnOrders(ColumnOrders))
		return FALSE;

	for (int i = 0; i < ColumnOrders.GetSize(); ++i)
	{
		CString strColumnOrderKey;
		strColumnOrderKey.Format(REG_LISTCTRL_COLUMN_ORDER_ENTRY, i);

		pWinApp->WriteProfileInt(strListCtrlKey, strColumnOrderKey, ColumnOrders[i]);
	}

	return TRUE;
}

BOOL CListBase::GetProfile(LPCTSTR strKey)
{
	CWinApp* pWinApp = ::AfxGetApp();
	if (!pWinApp)
		return FALSE;
	
	CString strListCtrlKey;
	if (!strKey || !_tcslen(strKey))
	{
		CDialogEx* pDialog = (CDialogEx*)GetWindowLong(m_pListCtrl->GetParent()->GetSafeHwnd(), GWL_USERDATA);

		if (!pDialog)
			return FALSE;

		strListCtrlKey.Format(REG_LISTCTRL_KEY, pDialog->GetDlgID(), m_pListCtrl->GetDlgCtrlID());
	}
	else
		strListCtrlKey = strKey;

	for (int i = 0; i < m_pListCtrl->GetColumnCount(); ++i)
	{
		CString strWidthKey;
		strWidthKey.Format(REG_LISTCTRL_WIDTH_ENTRY, i);

		int nWidth = pWinApp->GetProfileInt(strListCtrlKey, strWidthKey, -1);
		if (nWidth == -1)
			return FALSE;

		m_pListCtrl->SetColumnWidth(i, nWidth);
	}

	SortColumn(
		pWinApp->GetProfileInt(strListCtrlKey, REG_LISTCTRL_SORT_COL_ENTRY, -1),
		pWinApp->GetProfileInt(strListCtrlKey, REG_LISTCTRL_SORT_ORDER_ENTRY, TRUE) ? TRUE : FALSE);

	CUIntArray ColumnOrders;

	for (int i = 0; i < m_pListCtrl->GetColumnCount(); ++i)
	{
		CString strColumnOrderKey;
		strColumnOrderKey.Format(REG_LISTCTRL_COLUMN_ORDER_ENTRY, i);

		int nOrder = pWinApp->GetProfileInt(strListCtrlKey, strColumnOrderKey, -1);
		if (nOrder == -1)
			return FALSE;

		ColumnOrders.Add(nOrder);
	}

	if (!m_pListCtrl->SetColumnOrders(ColumnOrders))
		return FALSE;

	return TRUE;
}

int CListBase::GetColumnCount()
{
	CHeaderCtrl* pHeaderCtrl = m_pListCtrl->GetHeaderCtrl();
	ATLASSERT(pHeaderCtrl);
	return pHeaderCtrl->GetItemCount();
}

void CListBase::DeselectAllItems()
{
	POSITION pos = m_pListCtrl->GetFirstSelectedItemPosition();
	while (pos)
	{
		int nItem = m_pListCtrl->GetNextSelectedItem(pos);
		m_pListCtrl->SetItem(nItem, 0, LVIF_STATE, NULL, 0, 0, LVIS_SELECTED, (LPARAM)m_pListCtrl->GetItemData(nItem));
	}
}

BOOL CListBase::SelectItem(int nItem)
{
	return m_pListCtrl->SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED, LVIS_SELECTED, (LPARAM)m_pListCtrl->GetItemData(nItem));	
}

BOOL CListBase::FocusItem(int nItem)
{
	return m_pListCtrl->SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_FOCUSED, LVIS_FOCUSED, (LPARAM)m_pListCtrl->GetItemData(nItem));
}

BOOL CListBase::GetColumnOrders(CUIntArray& ColumnOrders)
{
	ColumnOrders.RemoveAll();

	int nColumnCount = GetColumnCount();
	int* pOrders = new int[ nColumnCount ];
	if (!pOrders)
		return FALSE;

	if (!m_pListCtrl->GetColumnOrderArray(pOrders, nColumnCount))
	{
		delete[] pOrders;
		return FALSE;
	}

	for (int i = 0; i < nColumnCount; ++i)
		ColumnOrders.Add(pOrders[i]);

	delete[] pOrders;
	
	return TRUE;
}

BOOL CListBase::SetColumnOrders(const CUIntArray& ColumnOrders)
{
	if (ColumnOrders.GetSize() != m_pListCtrl->GetColumnCount())
		return FALSE;

	int nColumnCount = ColumnOrders.GetSize();
	int* pOrders = new int[ nColumnCount ];
	if (!pOrders)
		return FALSE;

	for (int i = 0; i < nColumnCount; ++i)
		pOrders[i] = ColumnOrders[i];

	if (!m_pListCtrl->SetColumnOrderArray(nColumnCount, pOrders))
	{
		delete[] pOrders;
		return FALSE;
	}

	delete[] pOrders;
	
	return TRUE;
}

// A column header has been clicked 
BOOL CListBase::OnColumnclick(NMHDR* pNMHDR, LRESULT *pResult)
{
	NM_LISTVIEW* pNMListView = reinterpret_cast<NM_LISTVIEW*>(pNMHDR);
	int nSortColumn = pNMListView->iSubItem;

	if (nSortColumn == m_nSortColumn)
		SortColumn(nSortColumn, !m_bSortAscending);
	else
		SortColumn(nSortColumn, TRUE);

	*pResult = 0;

	return TRUE;
}

// A list view (sub)item will be drawn 
void CListBase::OnCustomDraw(NMHDR* pNMHDR, LRESULT* pResult)
{
	static CRect s_ItemRect; // XPSP3 doesn't set subitem's top and bottom values correctly

	ATLASSERT(m_pListCtrl->GetHeaderCtrl());

	NMLVCUSTOMDRAW* pNMLVCustomDraw = reinterpret_cast<NMLVCUSTOMDRAW*>(pNMHDR);
	
	switch (pNMLVCustomDraw->nmcd.dwDrawStage)
	{
	case CDDS_PREPAINT:
		*pResult = CDRF_NOTIFYITEMDRAW;
		break;

	case CDDS_ITEMPREPAINT:

		if (!m_pListCtrl->GetItemRect(pNMLVCustomDraw->nmcd.dwItemSpec, &s_ItemRect, LVIR_BOUNDS))
		{
			*pResult = CDRF_DODEFAULT;
			break;
		}

		*pResult = CDRF_NOTIFYSUBITEMDRAW;
		break;

	case CDDS_ITEMPREPAINT | CDDS_SUBITEM:
		if(m_hTheme){
			CString strText(m_pListCtrl->GetItemText(pNMLVCustomDraw->nmcd.dwItemSpec, pNMLVCustomDraw->iSubItem));
			strText.Trim();

			CRect subitemRect;
			if (pNMLVCustomDraw->iSubItem)
				m_pListCtrl->GetSubItemRect(pNMLVCustomDraw->nmcd.dwItemSpec, pNMLVCustomDraw->iSubItem, LVIR_BOUNDS, subitemRect);
			else
			{
				CRect iconRect;
				m_pListCtrl->GetItemRect(pNMLVCustomDraw->nmcd.dwItemSpec, &iconRect, LVIR_ICON);
				m_pListCtrl->GetItemRect(pNMLVCustomDraw->nmcd.dwItemSpec, &subitemRect, LVIR_LABEL);

				subitemRect.left = MIN(iconRect.left, subitemRect.left) - 3;
			}

			subitemRect.top = s_ItemRect.top;
			subitemRect.bottom = s_ItemRect.bottom;

			if (!subitemRect.Width())
			{
				*pResult = CDRF_DODEFAULT;
				break;
			}

			int iStateId;
			if (!pNMLVCustomDraw->iStateId)
			{
				if (pNMLVCustomDraw->nmcd.uItemState & CDIS_DISABLED)
					iStateId = LISS_DISABLED;
				else
				{
					BOOL bItemSelected;
					if (m_pListCtrl->GetStyle() & LVS_SHOWSELALWAYS)
						bItemSelected = (m_pListCtrl->GetItemState(pNMLVCustomDraw->nmcd.dwItemSpec, LVIS_SELECTED) & LVIS_SELECTED);
					else
						bItemSelected = (pNMLVCustomDraw->nmcd.uItemState & CDIS_SELECTED);

					CPoint point;
					GetCursorPos(&point);
					m_pListCtrl->ScreenToClient(&point);
					
					if (s_ItemRect.PtInRect(point))
					{
						if (bItemSelected)
							iStateId = LISS_HOTSELECTED;
						else
							iStateId = LISS_HOT;
					}
					else
						if (bItemSelected)
							iStateId = (pNMLVCustomDraw->nmcd.uItemState & CDIS_FOCUS) ? LISS_SELECTED : LISS_SELECTEDNOTFOCUS;
						else
							iStateId = LISS_NORMAL;
				}
			}
			else
				iStateId = pNMLVCustomDraw->iStateId;

			//if (pNMLVCustomDraw->iSubItem == 0)
			//{
			//	CString strState;
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_SELECTED)
			//		strState += _T("CDIS_SELECTED ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_GRAYED)
			//		strState += _T("CDIS_GRAYED ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_DISABLED)
			//		strState += _T("CDIS_DISABLED ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_CHECKED)
			//		strState += _T("CDIS_CHECKED ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_FOCUS)
			//		strState += _T("CDIS_FOCUS ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_DEFAULT)
			//		strState += _T("CDIS_DEFAULT ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_HOT)
			//		strState += _T("CDIS_HOT ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_MARKED)
			//		strState += _T("CDIS_MARKED ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_INDETERMINATE)
			//		strState += _T("CDIS_INDETERMINATE ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_SHOWKEYBOARDCUES)
			//		strState += _T("CDIS_SHOWKEYBOARDCUES ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_NEARHOT)
			//		strState += _T("CDIS_NEARHOT ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_OTHERSIDEHOT)
			//		strState += _T("CDIS_OTHERSIDEHOT ");
			//	if (pNMLVCustomDraw->nmcd.uItemState & CDIS_DROPHILITED)
			//		strState += _T("CDIS_DROPHILITED ");

			//	CString strStateId;
			//	switch(iStateId)
			//	{
			//	case LISS_NORMAL: strStateId = _T("LISS_NORMAL "); break;
			//	case LISS_HOT: strStateId = _T("LISS_HOT "); break;
			//	case LISS_SELECTED: strStateId = _T("LISS_SELECTED "); break;
			//	case LISS_DISABLED: strStateId = _T("LISS_DISABLED "); break;
			//	case LISS_SELECTEDNOTFOCUS: strStateId = _T("LISS_SELECTEDNOTFOCUS "); break;
			//	case LISS_HOTSELECTED: strStateId = _T("LISS_HOTSELCTED "); break;
			//	}

			//	ATLTRACE(_T("Item %d %s\n"), pNMLVCustomDraw->nmcd.dwItemSpec, strStateId);
			//}


			//---------- Removed to "fix" search boxes text----------------

			//CRgn oldClipRegion;
			//oldClipRegion.CreateRectRgnIndirect(&subitemRect);
			//GetClipRgn(pNMLVCustomDraw->nmcd.hdc, oldClipRegion);

			//CRgn clipRgn;

			////clipRgn.CreateRectRgnIndirect(&subitemRect);
			//clipRgn.CreateRectRgn(0, 0, subitemRect.right, subitemRect.bottom); // HACK: double buffer option is affecting how clip rgn can be used because of memory DC

			//SelectClipRgn(pNMLVCustomDraw->nmcd.hdc, clipRgn);

			if (DrawSubItemText(pNMLVCustomDraw->nmcd.hdc, pNMLVCustomDraw->nmcd.dwItemSpec, pNMLVCustomDraw->iSubItem, strText, s_ItemRect, subitemRect, iStateId))
				*pResult = CDRF_SKIPDEFAULT;
			else
				*pResult = CDRF_DODEFAULT;

			//SelectClipRgn(pNMLVCustomDraw->nmcd.hdc, oldClipRegion); //---------- Removed to "fix" search boxes text----------------

			break;
		} else
		{
			CRect subitemRect(pNMLVCustomDraw->nmcd.rc);
			if (!subitemRect.Width())
			{
				*pResult = CDRF_DODEFAULT;
				break;
			}
			if (!subitemRect.top && !subitemRect.bottom)
			{
				subitemRect.top = s_ItemRect.top;
				subitemRect.bottom = s_ItemRect.bottom;
			}

			BOOL bShowSelectionAlways = ((m_pListCtrl->GetStyle() & LVS_SHOWSELALWAYS) != 0);
			BOOL bItemSelected;
			
			if (!bShowSelectionAlways)
				bItemSelected = (pNMLVCustomDraw->nmcd.uItemState & CDIS_SELECTED);
			else
				bItemSelected = (m_pListCtrl->GetItemState(pNMLVCustomDraw->nmcd.dwItemSpec, LVIS_SELECTED) & LVIS_SELECTED);

			BOOL bLVHasFocus		= m_pListCtrl->GetFocus() == m_pListCtrl;
			BOOL bAlwaysSelected	= !bLVHasFocus && bItemSelected && bShowSelectionAlways;
			BOOL bSelected			= bLVHasFocus && bItemSelected;
			BOOL bCtrlDisabled		= !m_pListCtrl->IsWindowEnabled();
			COLORREF clrText;
			COLORREF clrTextBk;

			if (bSelected)
			{
				clrText = GetSysColor(COLOR_HIGHLIGHTTEXT);
				clrTextBk = GetSysColor(COLOR_HIGHLIGHT);
			}
			else
				if (bAlwaysSelected)
				{
					clrText = GetSysColor(COLOR_WINDOWTEXT);
					clrTextBk = GetSysColor(COLOR_3DFACE);
				}
				else
				{
					clrText = m_pListCtrl->GetTextColor();
					clrTextBk = bCtrlDisabled ? GetSysColor(COLOR_3DFACE) : m_pListCtrl->GetBkColor();
				}
				
			if (DrawSubItemText(pNMLVCustomDraw, subitemRect, clrText, clrTextBk))
				*pResult = CDRF_SKIPDEFAULT;
			else
				*pResult = CDRF_DODEFAULT;

			break;
		}
	}

	return;
}

void CListBase::OnDestroy() 
{
	if (m_bSaveProfile)
		WriteProfile();
}

void CListBase::DrawSubItemBackground(HDC hdc, const CRect& itemRect, const CRect& subitemRect, int iStateId)
{
	if (m_hTheme && IsThemePartDefined(m_hTheme, LVP_LISTITEM, iStateId))
	{
		if (iStateId == LISS_HOT) // looks like LISS_HOT is drawn in post paint
			return;

		if (IsThemeBackgroundPartiallyTransparent(m_hTheme, LVP_LISTITEM, iStateId))
			DrawThemeParentBackground(m_pListCtrl->GetSafeHwnd(), hdc, &subitemRect);

		DrawThemeBackground(m_hTheme, hdc, LVP_LISTITEM, iStateId, &itemRect, &subitemRect);
	}
	else
	{
		COLORREF clrTextBk;
		if (iStateId == LISS_SELECTED || iStateId == LISS_HOTSELECTED)
			clrTextBk = GetSysColor(COLOR_HIGHLIGHT);
		else
			if ((iStateId == LISS_SELECTEDNOTFOCUS) || (iStateId == LISS_DISABLED))
				clrTextBk = GetSysColor(COLOR_3DFACE);
			else
				clrTextBk = m_pListCtrl->GetBkColor();

		Gdiplus::Graphics graphics(hdc);
		Gdiplus::SolidBrush brush(Gdiplus::Color(GetRValue(clrTextBk), GetGValue(clrTextBk), GetBValue(clrTextBk)));
		graphics.FillRectangle(&brush, ToRectF(subitemRect));
	}
}

CRect CListBase::DrawSubItemImage(HDC hdc, int nItem, int nSubitem, const CRect& subitemRect, int iStateId)
{
	CImageList* pimglst = m_pListCtrl->GetImageList(LVSIL_SMALL);
	if (!pimglst)
		return subitemRect;

	LVITEM item;
	item.mask = LVIF_IMAGE;
	item.iItem = nItem;
	item.iSubItem = nSubitem;
	item.stateMask = 0;
	m_pListCtrl->GetItem(&item);

	if (item.iImage < 0)
		return subitemRect;

	IMAGEINFO imgInfo;
	if (!pimglst->GetImageInfo(item.iImage, &imgInfo))
		return subitemRect;

	CSize imgSize(imgInfo.rcImage.right - imgInfo.rcImage.left, imgInfo.rcImage.bottom - imgInfo.rcImage.top);

	CDC* pDC = CDC::FromHandle(hdc);
	if (!pimglst->Draw(
		pDC, item.iImage, subitemRect.TopLeft(), 
		//iStateId == LISS_SELECTED ? ILD_SELECTED : ILD_NORMAL))
		ILD_NORMAL))
		return subitemRect;
	
	CRect newSubitemRect(subitemRect);
	newSubitemRect.left += imgSize.cx;
	return newSubitemRect;
}

//____________________________________________________________________________
//
// Definition of class "CListCtrlEx" 
//

IMPLEMENT_DYNCREATE(CListCtrlEx, CListCtrl)

CListCtrlEx::CListCtrlEx()
	: CListBase(this)
{
}

void CListCtrlEx::OnDestroy() 
{
	CListBase::OnDestroy();
	CListCtrl::OnDestroy();
}

// A column header has been clicked 
BOOL CListCtrlEx::OnColumnclick(NMHDR* pNMHDR, LRESULT*pResult)
{
	return CListBase::OnColumnclick(pNMHDR, pResult);
}

// A list view (sub)item will be drawn 
void CListCtrlEx::OnCustomDraw(NMHDR* pNMHDR, LRESULT*pResult)
{
	CListBase::OnCustomDraw(pNMHDR, pResult);
}

// Table of message handlers 
BEGIN_MESSAGE_MAP(CListCtrlEx, CListCtrl)
	ON_WM_DESTROY()
	ON_NOTIFY_REFLECT_EX(LVN_COLUMNCLICK, OnColumnclick)
	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnCustomDraw)
END_MESSAGE_MAP()

//____________________________________________________________________________
//
// Definition of class "CListViewEx" 
//

IMPLEMENT_DYNCREATE(CListViewEx, CListView)

CListViewEx::CListViewEx()
	: CListBase(static_cast<CListCtrlEx*>(&GetListCtrl()))
{
}

void CListViewEx::OnDestroy() 
{
	CListBase::OnDestroy();
	CListView::OnDestroy();
}

// A column header has been clicked 
BOOL CListViewEx::OnColumnclick(NMHDR* pNMHDR, LRESULT*pResult)
{
	return CListBase::OnColumnclick(pNMHDR, pResult);
}

// A list view (sub)item will be drawn 
void CListViewEx::OnCustomDraw(NMHDR* pNMHDR, LRESULT*pResult)
{
	CListBase::OnCustomDraw(pNMHDR, pResult);
}

// Table of message handlers 
BEGIN_MESSAGE_MAP(CListViewEx, CListView)
	ON_WM_DESTROY()
	ON_NOTIFY_REFLECT_EX(LVN_COLUMNCLICK, OnColumnclick)
	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnCustomDraw)
END_MESSAGE_MAP()
