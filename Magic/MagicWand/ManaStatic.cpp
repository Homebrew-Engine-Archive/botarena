// ManaStatic.cpp : implementation file
//

#include "stdafx.h"
#include "ManaStatic.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CManaStatic - Generated message map functions
//

BEGIN_MESSAGE_MAP(CManaStatic, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

void CManaStatic::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	CRect rcClient;
	GetClientRect(&rcClient);

	if (CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		DrawMagicText(
			Gdiplus::Graphics(dc.GetSafeHdc()), 
			RGB(0,0,0), 
			*(CCardStore::GetInstance()->GetSmallFont()),
			CCardStore::GetInstance()->GetSmallSymbols(),
			m_strExtra,
			ToRectF(rcClient),
			Gdiplus::SizeF(0, 0));
	}
	else
	{
		CString str;
		GetWindowText(str);

		Gdiplus::Graphics graphics(dc.GetSafeHdc());
		Gdiplus::SolidBrush brush(Gdiplus::Color(0, 0, 0));
		graphics.DrawString(str, -1, CCardStore::GetInstance()->GetSmallFont(), 
			Gdiplus::PointF(Gdiplus::REAL(rcClient.left), Gdiplus::REAL(rcClient.top)), &brush);
	}
}
