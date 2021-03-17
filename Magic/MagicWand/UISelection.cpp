// UISelection.cpp: implementation of the CUISelection class.
//

#include "stdafx.h"
#include "UIElement.h"
#include "UISelection.h"

#define new DEBUG_NEW

CUISelection::CUISelection(CRect EnclosingRect, CardType cardColor)
	: CUIElement(SELECTION_ELEMENT, SELECTION_LEVEL)
	, m_pBrush(NULL)
	, m_EnclosingRect(EnclosingRect)
	, m_CardColor(cardColor)
	, m_fBrushDelta(0)
	, m_nBrushDirection(0)
{
	InitializeBoundRegion();
	CreateBrush();
}

void CUISelection::SetColor(CardType cardColor)
{
	m_CardColor = cardColor;
	m_nBrushDirection = 0;

	CreateBrush();
}

void CUISelection::SetEnclosingRect(CRect enclosingRect)
{
	if (m_EnclosingRect == enclosingRect)
		return;

	m_EnclosingRect = enclosingRect;
	InitializeBoundRegion();
	CreateBrush();
}

void CUISelection::InitializeBoundRegion()
{
	CRgn BoundRgn;

	CRect InnerRect = m_EnclosingRect;
	InnerRect.InflateRect(SELECTION_FRAME_MARGIN, SELECTION_FRAME_MARGIN);
	CRgn InnerRgn;
	InnerRgn.CreateRoundRectRgn(InnerRect.left, InnerRect.top,
		InnerRect.right, InnerRect.bottom,
		InnerRect.Width() / CORNER_RATIO, InnerRect.Width() / CORNER_RATIO);
	CRect OuterRect = InnerRect;
	OuterRect.InflateRect(SELECTION_FRAME_THICK, SELECTION_FRAME_THICK);
	CRgn OuterRgn;
	OuterRgn.CreateRoundRectRgn(OuterRect.left, OuterRect.top,
		OuterRect.right, OuterRect.bottom,
		OuterRect.Width() / CORNER_RATIO, OuterRect.Width() / CORNER_RATIO);
	BoundRgn.CreateRectRgn(0, 0, 0, 0);
	BoundRgn.CombineRgn(&OuterRgn, &InnerRgn, RGN_DIFF);

	SetBoundRgn(BoundRgn, FALSE);

	m_BoundRect = GetBoundRect();

	m_fBrushDelta = (Gdiplus::REAL)m_BoundRect.Width();
	m_fBrushDelta /= Gdiplus::REAL(s_nSteps);
}

#pragma push_macro("new")
#ifdef new
#undef new
#endif

void CUISelection::CreateBrush()
{
	static const Gdiplus::Color transparent(0, 0, 0, 0);
	static const int nAlpha = 128;
	static const SIZE brushRectDeltas[] = 
	{
		{ +1, 0 }, { +1, 0 },
		{ 0, +1 }, { 0, +1 },
		{ -1, 0 }, { -1, 0 },
		{ 0, -1 }
	};

	std::vector<Gdiplus::Color> colors;

	if ((m_CardColor & CardType::Red).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 255, 0, 0));

	if ((m_CardColor & CardType::Green).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 0, 255, 0));

	if ((m_CardColor & CardType::Blue).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 0, 0, 255));

	if ((m_CardColor & CardType::Black).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 0, 0, 0));

	if ((m_CardColor & CardType::White).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 255, 255, 255));

	if ((m_CardColor & CardType::Artifact).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 128, 128, 0));

	if ((m_CardColor & CardType::Misc).Any())
		colors.push_back(Gdiplus::Color(nAlpha, 255, 0, 255));

	if (!colors.size())
		colors.push_back(Gdiplus::Color(nAlpha, 128, 128, 0));

	/*
		A B C
		B T	A
		A C	B
	*/

	int nWidth = m_BoundRect.Width();
	int nHeight = m_BoundRect.Height();

	m_nBrushDirection = 0;
	m_fBrushPos.X = 0;
	m_fBrushPos.Y = 0;
	m_fBrushSize.Width = Gdiplus::REAL(nWidth * 2);
	m_fBrushSize.Height = Gdiplus::REAL(nHeight * 2);

	std::vector<Gdiplus::Point> pathPoints;
	std::vector<Gdiplus::Color> pathColors;
	int nCurrentColor = 0;
	Gdiplus::Point currentPoint(m_BoundRect.left, m_BoundRect.top);
	for (int i = 0; i < ARRAY_SIZE(brushRectDeltas); ++i)
	{
		//ATLTRACE(_T("Point[%d] (%d, %d) - color %d\n"), 
		//	i, currentPoint.X, currentPoint.Y, nCurrentColor);

		pathPoints.push_back(currentPoint);
		pathColors.push_back(colors[nCurrentColor]);

		if (nCurrentColor + 1 == colors.size())
			nCurrentColor = 0;
		else
			++nCurrentColor;

		currentPoint.X += brushRectDeltas[i].cx * nWidth;
		currentPoint.Y += brushRectDeltas[i].cy * nHeight;
	}

	Gdiplus::GraphicsPath path;
	path.AddLines(&pathPoints[0], pathPoints.size());

	if (m_pBrush)
		delete m_pBrush;
	m_pBrush = new Gdiplus::PathGradientBrush(&path);
	m_pBrush->SetCenterColor(transparent);

	int nColorCount = pathColors.size();
	m_pBrush->SetSurroundColors(&pathColors[0], &nColorCount);
	m_pBrush->SetGammaCorrection(TRUE);
}

#pragma pop_macro("new")

void CUISelection::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	CPoint origin(pDC->GetWindowOrg()); // weird GDI thing: it looks like SetWindowOrig() affects all drawing code but not affecting clipping setup. So here we need to shift our clipping region to match the changed window origin

	if (origin.x || origin.y)
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);
		clipRgn.CopyRgn(GetBoundRgn());
		clipRgn.OffsetRgn(-origin.x, -origin.y);

		pDC->SelectClipRgn(&clipRgn, RGN_AND);
	}
	else
		pDC->SelectClipRgn(const_cast<CRgn*>(GetBoundRgn()), RGN_AND);

	Gdiplus::Graphics graphics(pDC->GetSafeHdc());
	graphics.FillRectangle(m_pBrush, m_BoundRect.left, m_BoundRect.top, m_BoundRect.Width(), m_BoundRect.Height());
}

void CUISelection::OnMoved(CSize MoveSize)
{
	m_EnclosingRect += MoveSize;
	m_BoundRect += MoveSize;

	if (m_pBrush)
		m_pBrush->TranslateTransform(Gdiplus::REAL(MoveSize.cx), Gdiplus::REAL(MoveSize.cy), Gdiplus::MatrixOrderAppend);
}

void CUISelection::ShiftBrush()
{
	static const SIZE brushRectDeltas[] = 
	{
		{ +1, 0 },
		{ 0, +1 },
		{ -1, 0 },
		{ 0, -1 }
	};

	Gdiplus::PointF tempPos(m_fBrushPos);
	Gdiplus::REAL nDeltaX = brushRectDeltas[m_nBrushDirection].cx * m_fBrushDelta;
	Gdiplus::REAL nDeltaY = brushRectDeltas[m_nBrushDirection].cy * m_fBrushDelta;

	tempPos.X += nDeltaX;
	tempPos.Y += nDeltaY;

	if ((tempPos.X < 0) || (tempPos.Y < 0) || 
		(tempPos.X + m_BoundRect.Width() >= m_fBrushSize.Width) ||
		(tempPos.Y + m_BoundRect.Height() >= m_fBrushSize.Height))
	{
		++m_nBrushDirection;
		if (m_nBrushDirection >= ARRAY_SIZE(brushRectDeltas))
			m_nBrushDirection = 0;

		nDeltaX = brushRectDeltas[m_nBrushDirection].cx * m_fBrushDelta;
		nDeltaY = brushRectDeltas[m_nBrushDirection].cy * m_fBrushDelta;

		m_fBrushPos.X += nDeltaX;
		m_fBrushPos.Y += nDeltaY;
	}
	else
	{
		m_fBrushPos = tempPos;
	}

	m_pBrush->TranslateTransform(-nDeltaX, -nDeltaY, Gdiplus::MatrixOrderAppend);
}
