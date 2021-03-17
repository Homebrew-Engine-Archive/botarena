// MListCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "MListCtrl2.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
// CMListCtrl2
//

const TCHAR CMListCtrl2::s_strSeparator[] = _T("|");
const LPCTSTR CMListCtrl2::s_strFont = _T("MPlantin");

CMListCtrl2::CMListCtrl2()
	: m_pSmallSymbols(NULL)
	, m_bUseMTGSymbols(FALSE)
{
}

#pragma push_macro("new")
#ifdef new
#undef new
#endif

void CMListCtrl2::Initialize(UINT nID, CWnd* pParent)
{
	__super::Initialize(nID, pParent);

	if(!m_hTheme)
	{
		SetExtendedStyle(GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP);
		CFont* pFont = GetFont();
		LOGFONT logfont;
		pFont->GetLogFont(&logfont);
		_tcscpy_s<>(logfont.lfFaceName, s_strFont);

		m_Font.CreateFontIndirect(&logfont);
		SetFont(&m_Font);

		m_apTextFont.reset(new Gdiplus::Font(s_strFont, (Gdiplus::REAL)abs(logfont.lfHeight), Gdiplus::FontStyleRegular, Gdiplus::UnitPixel));
	}
	m_bUseMTGSymbols = CCardStore::GetInstance()->GetShowMTGSymbols();
}

#pragma pop_macro("new")

void CMListCtrl2::SetUseMTGSymbols(BOOL bEnable)
{
	m_bUseMTGSymbols = bEnable;
	Invalidate();
}

int CMListCtrl2::InsertItem2(int nItem, LPCTSTR strItem, int nImage)
{
	CString strFull = strItem;

	if (strFull.Find(s_strSeparator) == -1)
	{
		CString strDrawManaText;
		CString strDrawText;
		PrepareTextWithSymbols(strItem, strDrawManaText, strDrawText);
		
		if (!_tcscmp(strDrawManaText, strDrawText) || !_tcslen(strDrawManaText))
			strFull = strItem;
		else
			strFull = strDrawText + s_strSeparator + strDrawManaText;
	}

	strFull.Replace(_T('\n'), _T(' '));
	strFull.Replace(_T('\r'), _T(' '));
	strFull.Replace(_T('\t'), _T(' '));

	if (nImage == -1)
		return CListCtrlEx::InsertItem(nItem, strFull);

	return CListCtrlEx::InsertItem(nItem, strFull, nImage);
}

BOOL CMListCtrl2::SetItemText2(int nItem, int nSubItem, LPCTSTR strText)
{
	CString strFull = strText;

	if (strFull.Find(s_strSeparator) == -1)
	{
		CString strDrawManaText;
		CString strDrawText;
		PrepareTextWithSymbols(strText, strDrawManaText, strDrawText);

		CString strFull;
		if (!_tcscmp(strDrawManaText, strDrawText) || !_tcslen(strDrawManaText))
			strFull = strText;
		else
			strFull = strDrawText + s_strSeparator + strDrawManaText;
	}

	strFull.Replace(_T('\n'), _T(' '));
	strFull.Replace(_T('\r'), _T(' '));
	strFull.Replace(_T('\t'), _T(' '));

	return CListCtrlEx::SetItemText(nItem, nSubItem, strFull);
}

bool CMListCtrl2::DrawSubItemText(HDC hdc, int nItem, int nSubitem, LPCTSTR strText, const CRect& itemRect, const CRect& subitemRect, int iStateId)
{
	CString strLabel(strText);
	CString strTemp;

	int nSecondStringAt = strLabel.Find(s_strSeparator);
	if (nSecondStringAt == -1)
		strTemp = strLabel;
	else
		strTemp = m_bUseMTGSymbols ? strLabel.Mid(nSecondStringAt + 1) : strLabel.Left(nSecondStringAt);

	DrawSubItemBackground(hdc, itemRect, subitemRect, iStateId);
	CRect textRect(DrawSubItemImage(hdc, nItem, nSubitem, subitemRect, iStateId));
	textRect.DeflateRect(CSize(1, 1));

	if (!m_pSmallSymbols || !m_pSmallSymbols->IsValid())
		m_pSmallSymbols = &CCardStore::GetInstance()->GetSmallSymbols();

	DrawMagicText(m_hTheme, hdc,
					LVP_LISTITEM,
					iStateId,
					*m_pSmallSymbols,
					strTemp, textRect);	

	return true;
}
#pragma push_macro("new")
#ifdef new
#undef new
#endif
bool CMListCtrl2::DrawSubItemText(LPNMLVCUSTOMDRAW pCustomDraw, const CRect& subitemRect, COLORREF textColor, COLORREF backgroundColor)
{
	CString strLabel(GetItemText(pCustomDraw->nmcd.dwItemSpec, pCustomDraw->iSubItem));
	if (strLabel.IsEmpty())
		return false;

	int nSecondStringAt = strLabel.Find(s_strSeparator);
	if (nSecondStringAt == -1)
		return false;

	CString strTemp = m_bUseMTGSymbols ? strLabel.Mid(nSecondStringAt + 1) : strLabel.Left(nSecondStringAt);

	Gdiplus::RectF layoutRect(ToRectF(subitemRect));

	Gdiplus::Graphics graphics(pCustomDraw->nmcd.hdc);

	Gdiplus::SolidBrush brush(Gdiplus::Color(GetRValue(backgroundColor), GetGValue(backgroundColor), GetBValue(backgroundColor)));
	graphics.FillRectangle(&brush, layoutRect);

	layoutRect.Y += 1;

	if (!m_pSmallSymbols || !m_pSmallSymbols->IsValid())
		m_pSmallSymbols = &CCardStore::GetInstance()->GetSmallSymbols();

	DrawMagicText(graphics, textColor, 
				 *m_apTextFont.get(),
				 *m_pSmallSymbols,
				 strTemp, layoutRect, 
				 Gdiplus::SizeF(0, 0), FALSE, NULL, TRUE);	

	return true;
}

#pragma pop_macro("new")
