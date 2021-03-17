// MListCtrl.h : header file
//

#pragma once

#include "ListViewCtrlEx.h"

//____________________________________________________________________________
//
// CMListCtrl2
//
class CMListCtrl2 : public CListCtrlEx
{
public:
	static const TCHAR s_strSeparator[];

	CMListCtrl2();

	void Initialize(UINT nID, CWnd* pParent);

	void SetUseMTGSymbols(BOOL bEnable);

	int InsertItem2(int nItem, LPCTSTR strItem, int nImage = -1);
	BOOL SetItemText2(int nItem, int nSubItem, LPCTSTR strText);

protected:
	virtual bool DrawSubItemText(HDC hdc, int nItem, int nSubitem, LPCTSTR strText, const CRect& itemRect, const CRect& subitemRect, int iStateId);

	static const LPCTSTR s_strFont;

	virtual bool DrawSubItemText(LPNMLVCUSTOMDRAW pCustomDraw, const CRect& subitemRect, COLORREF textColor, COLORREF backgroundColor);

	std::auto_ptr<Gdiplus::Font> m_apTextFont;
	CFont m_Font;

	const CMTGSymbol* m_pSmallSymbols;
	BOOL	m_bUseMTGSymbols;
};
