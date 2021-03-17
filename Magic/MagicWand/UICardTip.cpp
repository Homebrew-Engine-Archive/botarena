f// CardTip.cpp : implementation file
//

#include "stdafx.h"
#include "UICardTip.h"
#include "memdc.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
// CCardTip
//

CString CCardTip::s_strWndClass;

CCardTip::CCardTip()
	: m_SmallSymbols(CCardStore::GetInstance()->GetSmallSymbols())
{
	m_bShow = FALSE;
	m_strTip = _T("");
	m_pParentWnd = NULL;

	// Register the window class if it has not already been registered by
	// previous instantiation of CCardTip.
	if (s_strWndClass.IsEmpty())
	{
		s_strWndClass = AfxRegisterWndClass(
			CS_SAVEBITS | CS_HREDRAW | CS_VREDRAW);
	}
}

CCardTip::~CCardTip()
{
}

#pragma push_macro("new")
#ifdef new
#undef new
#endif

BOOL CCardTip::Create(CWnd* pParentWnd)
{
	ASSERT_VALID(pParentWnd);
	m_pParentWnd = pParentWnd;

	if (CreateEx(0, s_strWndClass, _T("MagicWand Tips"), 
		WS_POPUP | WS_BORDER, 0, 0, 0, 0,
		m_pParentWnd->GetSafeHwnd(), NULL, NULL))
	{
		m_apTextFont.reset(new Gdiplus::Font(_T("mplantin"), TEXTFONTHEIGHT, Gdiplus::FontStyleRegular, Gdiplus::UnitPixel));
		SetTimer(0, 2500, NULL);

		return TRUE;
	}
	return FALSE;
}

#pragma pop_macro("new")

void CCardTip::Show(CPoint point, const CString& strTip)
{
	ATLASSERT(::IsWindow(m_hWnd));

	// Invalidate if new
	if (m_strTip != strTip)
	{
		m_strTip = strTip;
		InvalidateRect(NULL);

		//TRACE1("CCardTip::Show() - m_strTip = '%s'\n", m_strTip);
	}

	CClientDC dc(this);

	CRect newWindowRect;

	if (CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		Gdiplus::RectF layoutRect((Gdiplus::REAL)point.x, (Gdiplus::REAL)point.y, WIDTH, 1);

		DrawMagicText(
			Gdiplus::Graphics(dc.GetSafeHdc()), RGB(0, 0, 0), 
			*m_apTextFont.get(),
			m_SmallSymbols,
			m_strTip,
			layoutRect, Gdiplus::SizeF(5, 5), TRUE);

		newWindowRect = ToRect(layoutRect);
	}
	else
	{
		Gdiplus::RectF boundingRect((Gdiplus::REAL)point.x + 5, (Gdiplus::REAL)point.y + 5, WIDTH, 0);
		Gdiplus::RectF layoutRect;

		Gdiplus::Graphics graphics(dc.GetSafeHdc());
		graphics.MeasureString(m_strTip, -1, m_apTextFont.get(), 
			boundingRect, &layoutRect);

		newWindowRect = ToRect(layoutRect);
		newWindowRect.InflateRect(5, 5);
	}

	newWindowRect.InflateRect(1, 1);

	CRect clientRect;
	m_pParentWnd->GetClientRect(&clientRect);
	m_pParentWnd->ClientToScreen(&clientRect);
	if (newWindowRect.right > clientRect.right)
		newWindowRect.OffsetRect(clientRect.right - newWindowRect.right, 0);

	if (newWindowRect.bottom > clientRect.bottom)
		newWindowRect.OffsetRect(0, clientRect.bottom - newWindowRect.bottom);

	// Adjust window position and visibility.
	CRect windowRect;
	GetWindowRect(windowRect);
	int nSWPFlags = SWP_SHOWWINDOW | SWP_NOACTIVATE;

	if (windowRect == newWindowRect)
	{
		nSWPFlags |= SWP_NOMOVE | SWP_NOSIZE;
	}

	SetWindowPos(&wndTopMost, 
		newWindowRect.left, newWindowRect.top, newWindowRect.Width(), newWindowRect.Height(),
		nSWPFlags);

	GetCursorPos(&m_ShowPoint);

	m_bShow = TRUE;
}

void CCardTip::Hide()
{
	if (!m_bShow)
		return;

	ATLASSERT(::IsWindow(m_hWnd));
	ShowWindow(SW_HIDE);

	ReleaseCapture();

	m_bShow = FALSE;
}

//____________________________________________________________________________
//
// CCardTip - Overrides
//

BOOL CCardTip::PreTranslateMessage( MSG* pMsg )
{
	switch (pMsg->message)
	{
		case WM_LBUTTONDOWN:
		case WM_LBUTTONUP:
		case WM_LBUTTONDBLCLK:
		case WM_RBUTTONDOWN:
		case WM_RBUTTONUP:
		case WM_RBUTTONDBLCLK:
		case WM_MOUSEMOVE:
			//ATLTRACE("CCardTip::PreTranslateMessage()\n");
			CPoint point((short)LOWORD(pMsg->lParam), (short)HIWORD(pMsg->lParam));
			ClientToScreen(&point);
			m_pParentWnd->ScreenToClient(&point);
			m_pParentWnd->SendMessage(pMsg->message, pMsg->wParam, MAKELPARAM(point.x, point.y));
			return TRUE;
	}
	return CWnd::PreTranslateMessage(pMsg);
}

//____________________________________________________________________________
//
// CCardTip - Generated message map functions
//

BEGIN_MESSAGE_MAP(CCardTip, CWnd)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()

void CCardTip::OnPaint() 
{
	CPaintDC dc2(this);
	CMemDC dc(&dc2);

	CRect rcClient;
	GetClientRect(rcClient);

	// Draw background
	dc.FillSolidRect(rcClient, RGB(255, 255, 255));

	// Draw text of item
	ATLASSERT(!m_strTip.IsEmpty());

	if (!CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		Gdiplus::Graphics graphics(dc.GetSafeHdc());
		Gdiplus::SolidBrush brush(Gdiplus::Color(0, 0, 0));

		graphics.SetTextRenderingHint(Gdiplus::TextRenderingHintAntiAlias);

		rcClient.InflateRect(-5, -5);
		graphics.DrawString(m_strTip, -1, m_apTextFont.get(), ToRectF(rcClient), NULL, &brush);

		return;
	}

	DrawMagicText(
		Gdiplus::Graphics(dc.GetSafeHdc()), RGB(0,0,0), 
		*m_apTextFont.get(),
		m_SmallSymbols,
		m_strTip,
		ToRectF(rcClient), 
		Gdiplus::SizeF(5, 5), FALSE, NULL, TRUE);

	// Do not call CWnd::OnPaint() for painting messages
}

void CCardTip::OnTimer(UINT nIDEvent) 
{
	if (m_bShow)
	{
		CPoint point;
		GetCursorPos(&point);

		if (point != m_ShowPoint)
			Hide();
	}
}