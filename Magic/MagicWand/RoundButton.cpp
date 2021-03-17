// RoundButton.cpp : implementation file
//
// Round Buttons!
//
// Written by Chris Maunder (Chris.Maunder@cbr.clw.csiro.au)
// Copyright (c) 1997,1998.
// 
// Modified: 2 Feb 1998 - Fix vis problem, CRgn resource leak,
//                        button reposition code redone. CJM.
//
// This code may be used in compiled form in any way you desire. This
// file may be redistributed unmodified by any means PROVIDING it is 
// not sold for profit without the authors written consent, and 
// providing that this notice and the authors name is included. If 
// the source code in this file is used in any commercial application 
// then a simple email would be nice.
//
// This file is provided "as is" with no expressed or implied warranty.
// The author accepts no liability if it causes any damage to your
// computer, causes your pet cat to fall ill, increases baldness or
// makes you car start emitting strange noises when you start it up.
//
// Expect bugs.
// 
// Please use and enjoy. Please let me know of any bugs/mods/improvements 
// that you have found/implemented and I will fix/incorporate them into this
// file. 
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "math.h"
#include "RoundButton.h"
#include "Memdc.h"

#define new DEBUG_NEW

// Calculate colour for a point at the given angle by performing a linear
// interpolation between the colours crBright and crDark based on the cosine
// of the angle between the light source and the point.
//
// Angles are measured from the +ve x-axis (i.e. (1,0) = 0 degrees, (0,1) = 90 degrees )
// But remember: +y points down!

COLORREF GetColour(double dAngle, COLORREF crBright, COLORREF crDark)
{
#define Rad2Deg	180.0/3.1415 

// For better light-continuity along the edge of a stretched button: 
//	LIGHT_SOURCE_ANGLE == -1.88
	
//#define LIGHT_SOURCE_ANGLE	-2.356		// -2.356 radians = -135 degrees, i.e. From top left
#define LIGHT_SOURCE_ANGLE	-1.88

	ATLASSERT(dAngle > -3.1416 && dAngle < 3.1416);
	double dAngleDifference = LIGHT_SOURCE_ANGLE - dAngle;

	if (dAngleDifference < -3.1415) dAngleDifference = 6.293 + dAngleDifference;
	else if (dAngleDifference > 3.1415) dAngleDifference = 6.293 - dAngleDifference;

	double Weight = 0.5*(cos(dAngleDifference)+1.0);

	BYTE Red   = (BYTE) (Weight*GetRValue(crBright) + (1.0-Weight)*GetRValue(crDark));
	BYTE Green = (BYTE) (Weight*GetGValue(crBright) + (1.0-Weight)*GetGValue(crDark));
	BYTE Blue  = (BYTE) (Weight*GetBValue(crBright) + (1.0-Weight)*GetBValue(crDark));

	//ATLTRACE("LightAngle = %0.0f, Angle = %3.0f, Diff = %3.0f, Weight = %0.2f, RGB %3d,%3d,%3d\n", 
	//	  LIGHT_SOURCE_ANGLE*Rad2Deg, dAngle*Rad2Deg, dAngleDifference*Rad2Deg, Weight,Red,Green,Blue);

	return RGB(Red, Green, Blue);
}

void InitParameters(CPoint p, LONG lRadius, 
					COLORREF crBright, COLORREF crDark,
					COLORREF crBright2, COLORREF crDark2,
					CArray<POINT>& Outer,
					CArray<COLORREF>& Color,
					CArray<COLORREF>& Color2,
					CArray<COLORREF>& Color3,
					CArray<COLORREF>& Color4)
{
	LONG lError, lXoffset, lYoffset;

	//Check to see that the coordinates are valid
	ATLASSERT( (p.x + lRadius <= LONG_MAX) && (p.y + lRadius <= LONG_MAX) );
	ATLASSERT( (p.x - lRadius >= LONG_MIN) && (p.y - lRadius >= LONG_MIN) );

	//Set starting values
	lXoffset = lRadius;
	lYoffset = 0;
	lError   = -lRadius;

	CPoint pt1(-1, -1), pt2(-1, -1), pt3(-1, -1), pt4(-1, -1), pt5(-1, -1), pt6(-1, -1), pt7(-1, -1), pt8(-1, -1);
	CPoint pt;

	do {
		const double Pi_on_2 = PI * 0.5,
					 Three_Pi_on_2 = PI * 1.5;
		double   dAngle = atan2((double)lYoffset, (double)lXoffset);

		//Draw the current pixel, reflected across all eight arcs

		pt.x = p.x + lXoffset;
		pt.y = p.y + lYoffset;
		if (pt1 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(dAngle, crBright, crDark));
			Color2.Add(GetColour(dAngle, crBright2, crDark2));
			Color3.Add(GetColour(dAngle, crDark, crBright));
			Color4.Add(GetColour(dAngle, crDark2, crBright2));
			pt1 = pt;
		}

		
//		pDC->SetPixelV(p.x + lYoffset, p.y + lXoffset, crColour);
		pt.x = p.x + lYoffset;
		pt.y = p.y + lXoffset;
		if (pt2 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(Pi_on_2 - dAngle, crBright, crDark));
			Color2.Add(GetColour(Pi_on_2 - dAngle, crBright2, crDark2));
			Color3.Add(GetColour(Pi_on_2 - dAngle, crDark, crBright));
			Color4.Add(GetColour(Pi_on_2 - dAngle, crDark2, crBright2));
			pt2 = pt;
		}

		
//		pDC->SetPixelV(p.x - lYoffset, p.y + lXoffset, crColour);
		pt.x = p.x - lYoffset;
		pt.y = p.y + lXoffset;
		if (pt3 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(Pi_on_2 + dAngle, crBright, crDark));
			Color2.Add(GetColour(Pi_on_2 + dAngle, crBright2, crDark2));
			Color3.Add(GetColour(Pi_on_2 + dAngle, crDark, crBright));
			Color4.Add(GetColour(Pi_on_2 + dAngle, crDark2, crBright2));
			pt3 = pt;
		}

		
//		pDC->SetPixelV(p.x - lXoffset, p.y + lYoffset, crColour);
		pt.x = p.x - lXoffset;
		pt.y = p.y + lYoffset;
		if (pt4 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(PI - dAngle, crBright, crDark));
			Color2.Add(GetColour(PI - dAngle, crBright2, crDark2));
			Color3.Add(GetColour(PI - dAngle, crDark, crBright));
			Color4.Add(GetColour(PI - dAngle, crDark2, crBright2));
			pt4 = pt;
		}

		
//		pDC->SetPixelV(p.x - lXoffset, p.y - lYoffset, crColour);
		pt.x = p.x - lXoffset;
		pt.y = p.y - lYoffset;
		if (pt5 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(-PI + dAngle, crBright, crDark));
			Color2.Add(GetColour(-PI + dAngle, crBright2, crDark2));
			Color3.Add(GetColour(-PI + dAngle, crDark, crBright));
			Color4.Add(GetColour(-PI + dAngle, crDark2, crBright2));
			pt5 = pt;
		}

		
//		pDC->SetPixelV(p.x - lYoffset, p.y - lXoffset, crColour);
		pt.x = p.x - lYoffset;
		pt.y = p.y - lXoffset;
		if (pt6 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(-Pi_on_2 - dAngle, crBright, crDark));
			Color2.Add(GetColour(-Pi_on_2 - dAngle, crBright2, crDark2));
			Color3.Add(GetColour(-Pi_on_2 - dAngle, crDark, crBright));
			Color4.Add(GetColour(-Pi_on_2 - dAngle, crDark2, crBright2));
			pt6 = pt;
		}

		
//		pDC->SetPixelV(p.x + lYoffset, p.y - lXoffset, crColour);
		pt.x = p.x + lYoffset;
		pt.y = p.y - lXoffset;
		if (pt7 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(-Pi_on_2 + dAngle, crBright, crDark));
			Color2.Add(GetColour(-Pi_on_2 + dAngle, crBright2, crDark2));
			Color3.Add(GetColour(-Pi_on_2 + dAngle, crDark, crBright));
			Color4.Add(GetColour(-Pi_on_2 + dAngle, crDark2, crBright2));
			pt7 = pt;
		}

		
//		pDC->SetPixelV(p.x + lXoffset, p.y - lYoffset, crColour);
		pt.x = p.x + lXoffset;
		pt.y = p.y - lYoffset;
		if (pt8 != pt)
		{
			Outer.Add(pt);
			Color.Add(GetColour(-dAngle, crBright, crDark));
			Color2.Add(GetColour(-dAngle, crBright2, crDark));
			Color3.Add(GetColour(-dAngle, crDark, crBright));
			Color4.Add(GetColour(-dAngle, crDark, crBright2));
			pt8 = pt;
		}


		//Advance the error term and the constant X axis step
		lError += lYoffset++;

		//Check to see if error term has overflowed
		if ((lError += lYoffset) >= 0)
			lError -= --lXoffset * 2;

	} while (lYoffset <= lXoffset);	//Continue until halfway point
}

void DrawCircle(CDC* pDC, CPoint Center,
				const CArray<POINT>& Outer,
				const CArray<COLORREF>& Color)
{
	for (int i = 0; i < Outer.GetSize(); ++i)
	{
		CPen Pen(PS_SOLID, 0, Color[i]);
		CPen* pOldPen = pDC->SelectObject(&Pen);
		pDC->MoveTo(Center);
		pDC->LineTo(Outer[i]);
		pDC->SelectObject(pOldPen);
	}
} 

int CRoundButton::AddButtonIcon(UINT uID)
{
	int nImageIndex = m_ImageList.Add(::AfxGetApp()->LoadIcon(uID)); 
	if (m_nImageIndex == -1)
		m_nImageIndex = nImageIndex;

	return nImageIndex;
}

void CRoundButton::UseButtonIcon(int nIndex)
{
	m_nImageIndex = nIndex;

	if (GetSafeHwnd())
		Invalidate();
}

/////////////////////////////////////////////////////////////////////////////
// CRoundButton

CRoundButton::CRoundButton()
{
	m_bDrawDashedFocusCircle = TRUE;

	m_ClrButtonFace = ::GetSysColor(COLOR_BTNFACE);
	m_ClrShadow = ::GetSysColor(COLOR_3DSHADOW);
	m_ClrLight = ::GetSysColor(COLOR_3DLIGHT);
	m_ClrDarkShadow = ::GetSysColor(COLOR_3DDKSHADOW);
	m_ClrHighLight = ::GetSysColor(COLOR_3DHIGHLIGHT);

	m_bTextShadow = FALSE;

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 1, 1);

	m_nImageIndex = -1;

	m_bHideIconWhenDisabled = TRUE;
}

CRoundButton::~CRoundButton()
{
	m_Rgn.DeleteObject();
}

void CRoundButton::SetColor(COLORREF FaceColor, COLORREF DarkShadowColor)
{
	SetHighLightColor(RGB(255, 255, 255));
	SetFaceColor(FaceColor);
	SetDarkShadowColor(DarkShadowColor);

	SetLightColor(RGB((GetRValue(FaceColor) + 255) / 2, (GetGValue(FaceColor) + 255) / 2, (GetBValue(FaceColor) + 255) / 2));
	SetShadowColor(RGB((GetRValue(FaceColor) + GetRValue(DarkShadowColor)) / 2, (GetGValue(FaceColor) + GetGValue(DarkShadowColor)) / 2, (GetBValue(FaceColor) + GetBValue(DarkShadowColor)) / 2));
}

BEGIN_MESSAGE_MAP(CRoundButton, CButton)
	//{{AFX_MSG_MAP(CRoundButton)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRoundButton message handlers

void CRoundButton::PreSubclassWindow() 
{
	CButton::PreSubclassWindow();

	ModifyStyle(0, BS_OWNERDRAW);

//    if (!m_Font.CreateStockObject(DEFAULT_GUI_FONT))
	m_Font.CreatePointFont(80, _T("MS Sans Serif"));

	m_Pen1.CreatePen(PS_SOLID, 0, m_ClrHighLight);
	m_Pen2.CreatePen(PS_SOLID, 0, m_ClrLight);
	m_Pen3.CreatePen(PS_SOLID, 0, m_ClrShadow);
	m_Pen4.CreatePen(PS_SOLID, 0, m_ClrDarkShadow);
	
	CRect rect;
	GetClientRect(rect);

	// set m_bStretch if the button is not square and landscape 
	m_bStretch = rect.Width() > rect.Height() ? TRUE : FALSE;

	// Resize the window to make it square if it is not stretched
	if(!m_bStretch)	rect.bottom = rect.right = std::min(rect.bottom, rect.right);

	// Get the vital statistics of the window
	// m_ptLeft/m_ptRight are the centerpoints of the left/right arcs of stretched buttons
	m_ptCentre = m_ptLeft = m_ptRight = rect.CenterPoint();

	m_nRadius  = rect.bottom/2-1;

	// Set the window region so mouse clicks only activate the round section 
	// of the button

	if (!m_bStretch)
	{
		CRect rect1(rect);
		++rect1.left;
		++rect1.bottom;

		CRect rectRgn(rect1);
		m_Rgn.CreateEllipticRgnIndirect(rectRgn);
		
		rectRgn.InflateRect(-1, -1);
		m_Rgn1.CreateEllipticRgnIndirect(rectRgn);

		rectRgn.InflateRect(-1, -1);
		m_Rgn2.CreateEllipticRgnIndirect(rectRgn);

		InitParameters(m_ptCentre, m_nRadius * 2,
			m_ClrHighLight, m_ClrDarkShadow,
			m_ClrLight, m_ClrShadow,
			m_LeftOuter, m_Color, m_Color2, m_Color3, m_Color4);
	}
	else
	{
		CRect rect1(rect);
		++rect1.left;
		++rect1.bottom;

		m_ptLeft.x = m_nRadius;
		m_ptRight.x = rect1.right - m_nRadius;

		CRect rectLeft(rect1.left, rect1.top, rect1.left + 2 * m_nRadius, rect1.bottom);
		CRect rectRight(rect1.right - 2 * m_nRadius, rect1.top, rect1.right, rect1.bottom);
		CRect rectCenter(rect1.left + m_nRadius, rect1.top, rect1.right - m_nRadius, rect1.bottom);
		
		m_Rgn3.CreateRectRgn(rect1.left, rect1.top, rect1.left + m_nRadius, rect1.bottom);
		ATLASSERT(m_Rgn3.GetSafeHandle());

		InitParameters(m_ptLeft, m_nRadius * 2,
			m_ClrHighLight, m_ClrDarkShadow,
			m_ClrLight, m_ClrShadow,
			m_LeftOuter, m_Color, m_Color2, m_Color3, m_Color4);

		for (int i = 0; i < m_LeftOuter.GetSize(); ++i)
		{
			POINT pt = m_LeftOuter[i];
			pt.x += (m_ptRight.x - m_ptLeft.x);
			m_RightOuter.Add(pt);
		}

		{
			CRgn RgnLeft;
			RgnLeft.CreateEllipticRgn(rectLeft.left, rectLeft.top, rectLeft.right, rectLeft.bottom);

			CRgn RgnRight;
			RgnRight.CreateEllipticRgn(rectRight.left, rectRight.top, rectRight.right, rectRight.bottom);

			CRgn RgnCenter;
			RgnCenter.CreateRectRgn(rectCenter.left, rectCenter.top, rectCenter.right, rectCenter.bottom);
			
			CRgn RgnCircles;
			RgnCircles.CreateRectRgn(0, 0, 0, 0);
			RgnCircles.CombineRgn(&RgnLeft, &RgnRight, RGN_OR);

			m_Rgn.CreateRectRgn(0, 0, 0, 0);
			m_Rgn.CombineRgn(&RgnCircles, &RgnCenter, RGN_OR);
		}

		rectLeft.InflateRect(-1, -1);
		rectRight.InflateRect(-1, -1);
		rectCenter.InflateRect(0, -1);

		{
			CRgn RgnLeft;
			RgnLeft.CreateEllipticRgn(rectLeft.left, rectLeft.top, rectLeft.right, rectLeft.bottom);

			CRgn RgnRight;
			RgnRight.CreateEllipticRgn(rectRight.left, rectRight.top, rectRight.right, rectRight.bottom);

			CRgn RgnCenter;
			RgnCenter.CreateRectRgn(rectCenter.left, rectCenter.top, rectCenter.right, rectCenter.bottom);
			
			CRgn RgnCircles;
			RgnCircles.CreateRectRgn(0, 0, 0, 0);
			RgnCircles.CombineRgn(&RgnLeft, &RgnRight, RGN_OR);

			m_Rgn1.CreateRectRgn(0, 0, 0, 0);
			m_Rgn1.CombineRgn(&RgnCircles, &RgnCenter, RGN_OR);
		}

		rectLeft.InflateRect(-1, -1);
		rectRight.InflateRect(-1, -1);
		rectCenter.InflateRect(0, -1);

		{
			CRgn RgnLeft;
			RgnLeft.CreateEllipticRgn(rectLeft.left, rectLeft.top, rectLeft.right, rectLeft.bottom);

			CRgn RgnRight;
			RgnRight.CreateEllipticRgn(rectRight.left, rectRight.top, rectRight.right, rectRight.bottom);

			CRgn RgnCenter;
			RgnCenter.CreateRectRgn(rectCenter.left, rectCenter.top, rectCenter.right, rectCenter.bottom);
			
			CRgn RgnCircles;
			RgnCircles.CreateRectRgn(0, 0, 0, 0);
			RgnCircles.CombineRgn(&RgnLeft, &RgnRight, RGN_OR);

			m_Rgn2.CreateRectRgn(0, 0, 0, 0);
			m_Rgn2.CombineRgn(&RgnCircles, &RgnCenter, RGN_OR);
		}
	}

	CRgn Rgn;
	Rgn.CreateRectRgn(0, 0, 0, 0);
	Rgn.CopyRgn(&m_Rgn);

	ATLASSERT(m_Rgn.GetSafeHandle());

	SetWindowRgn(NULL, FALSE);
	SetWindowRgn((HRGN)Rgn.Detach(), TRUE);

	ATLASSERT(m_Rgn1.GetSafeHandle());
	ATLASSERT(m_Rgn2.GetSafeHandle());

	// Convert client coords to the parents client coords
	ClientToScreen(rect);
	CWnd* pParent = GetParent();
	if (pParent) pParent->ScreenToClient(rect);

	// Resize the window if it is not stretched
	if(!m_bStretch)	MoveWindow(rect.left, rect.top, rect.Width(), rect.Height(), TRUE);
}

void CRoundButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	ATLASSERT(lpDrawItemStruct != NULL);

	CDC* pDC = CDC::FromHandle(lpDrawItemStruct->hDC);
	int nSavedDC = pDC->SaveDC();

	CRect rect = lpDrawItemStruct->rcItem;

	//CMemDC pDC(pDC1, rect, TRUE);

	UINT state = lpDrawItemStruct->itemState;
	UINT nStyle = GetStyle();

	pDC->SelectClipRgn(&m_Rgn);
	pDC->SelectStockObject(NULL_BRUSH);

	// Draw the focus circle around the button for non-stretched buttons
//	if ((state & ODS_FOCUS) && m_bDrawDashedFocusCircle && !m_bStretch)
//		DrawCircle(pDC, m_ptCentre, nRadius--, RGB(0,0,0));

	if ((state & ODS_SELECTED))
	{
		DrawCircle(pDC, m_ptLeft, m_LeftOuter, m_Color3);
		if (m_bStretch)
		{
			pDC->SelectClipRgn(&m_Rgn3, RGN_DIFF);
			DrawCircle(pDC, m_ptRight, m_RightOuter, m_Color4);
		}

		pDC->SelectClipRgn(&m_Rgn1);

		DrawCircle(pDC, m_ptLeft, m_LeftOuter, m_Color3);
		if (m_bStretch)
		{
			pDC->SelectClipRgn(&m_Rgn3, RGN_DIFF);
			DrawCircle(pDC, m_ptRight, m_RightOuter, m_Color4);
		}

		pDC->SelectClipRgn(&m_Rgn2);

		pDC->SelectStockObject(NULL_PEN);
		pDC->FillSolidRect(rect, m_ClrButtonFace);

		pDC->SelectClipRgn(&m_Rgn);

		if (m_bStretch)
		{
			pDC->SelectObject(&m_Pen4);
			pDC->MoveTo(m_ptLeft.x, 0);
			pDC->LineTo(m_ptRight.x, 0);

			pDC->SelectObject(&m_Pen3);
			pDC->MoveTo(m_ptLeft.x, 1);
			pDC->LineTo(m_ptRight.x, 1);

			pDC->SelectObject(&m_Pen2);
			pDC->MoveTo(m_ptLeft.x, rect.bottom - 2);
			pDC->LineTo(m_ptRight.x, rect.bottom - 2);

			pDC->SelectObject(&m_Pen1);
			pDC->MoveTo(m_ptLeft.x, rect.bottom - 1);
			pDC->LineTo(m_ptRight.x, rect.bottom - 1);
		}
	}
	else
	{
		DrawCircle(pDC, m_ptLeft, m_LeftOuter, m_Color);
		if (m_bStretch)
		{
			pDC->SelectClipRgn(&m_Rgn3, RGN_DIFF);
			DrawCircle(pDC, m_ptRight, m_RightOuter, m_Color);
		}

		pDC->SelectClipRgn(&m_Rgn1);

		DrawCircle(pDC, m_ptLeft, m_LeftOuter, m_Color2);
		if (m_bStretch)
		{
			pDC->SelectClipRgn(&m_Rgn3, RGN_DIFF);
			DrawCircle(pDC, m_ptRight, m_RightOuter, m_Color2);
		}

		pDC->SelectClipRgn(&m_Rgn2);

		pDC->SelectStockObject(NULL_PEN);
		pDC->FillSolidRect(rect, m_ClrButtonFace);

		pDC->SelectClipRgn(&m_Rgn);

		if (m_bStretch)
		{
			pDC->SelectObject(&m_Pen1);
			pDC->MoveTo(m_ptLeft.x, 0);
			pDC->LineTo(m_ptRight.x, 0);

			pDC->SelectObject(&m_Pen2);
			pDC->MoveTo(m_ptLeft.x, 1);
			pDC->LineTo(m_ptRight.x, 1);

			pDC->SelectObject(&m_Pen3);
			pDC->MoveTo(m_ptLeft.x, rect.bottom - 2);
			pDC->LineTo(m_ptRight.x, rect.bottom - 2);

			pDC->SelectObject(&m_Pen4);
			pDC->MoveTo(m_ptLeft.x, rect.bottom - 1);
			pDC->LineTo(m_ptRight.x, rect.bottom - 1);
		}
	}

	// draw the text if there is any
	CString strText;
	GetWindowText(strText);

	if (!strText.IsEmpty())
	{
		pDC->SelectObject(&m_Font);

		pDC->SelectClipRgn(&m_Rgn2);

		CSize Extent = pDC->GetTextExtent(strText);
		CPoint pt = CPoint( m_ptCentre.x - Extent.cx/2, m_ptCentre.y - Extent.cy/2 );

		if (state & ODS_SELECTED) pt.Offset(1,1);

		pDC->SetBkMode(TRANSPARENT);

		if (state & ODS_DISABLED)
			pDC->DrawState(pt, Extent, strText, DSS_DISABLED, TRUE, 0, (HBRUSH)NULL);
		else
		{
			// changed this code to give the text a 3d-look
			COLORREF oldcol = pDC->SetTextColor(m_ClrHighLight);
			pDC->TextOut(pt.x, pt.y, strText);

			if (m_bTextShadow)
			{
				pDC->SetTextColor(m_ClrDarkShadow);
				pDC->TextOut(pt.x-1, pt.y-1, strText);
				pDC->SetTextColor(oldcol);
			}
		}
	}

	if (m_nImageIndex != -1)
	{
		if (!(state & ODS_DISABLED) || !m_bHideIconWhenDisabled)
		{
			CPoint pt(m_ptCentre);
			pt.Offset(-8, -8);
			m_ImageList.Draw(pDC, m_nImageIndex, pt, ILD_TRANSPARENT);
		}
	}	

	// Draw the focus circle on the inside of the button if it is non-stretched
//	if ((state & ODS_FOCUS) && m_bDrawDashedFocusCircle && !m_bStretch)
//		DrawCircle(pDC, m_ptCentre, nRadius-2, RGB(0,0,0), TRUE);

	pDC->SelectClipRgn(NULL);

	pDC->RestoreDC(nSavedDC);
}

BOOL CRoundButton::OnEraseBkgnd(CDC* /*pDC*/) 
{
	return TRUE;
}
