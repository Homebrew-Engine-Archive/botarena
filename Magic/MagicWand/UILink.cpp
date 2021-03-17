// UILink.cpp: implementation of the CUILink class.
//

#include "stdafx.h"
#include "UIElement.h"
#include "UILink.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
const CSize CUILink::s_BufferSize = CSize(30, 30);

CUILink::CUILink(LINK_TYPE LinkType, CUIElement* pUIElement1, CUIElement* pUIElement2,
				 LPCTSTR strToolTipText, COLORREF Color, int nWidth)
	: CUIElement(LINK_ELEMENT, LINK_LEVEL)
	, m_Color(Color)
	, m_nWidth(nWidth)
	, m_LinkType(LinkType)
	, m_pWaypoints(NULL)
	, m_nWaypointCount(0)
	, m_Pen(
		Gdiplus::Color(100, GetRValue(Color), GetGValue(Color), GetBValue(Color)),
		float(nWidth) + float(2.0))
{
	ATLASSERT(pUIElement1 && pUIElement2);

	if (m_LinkType == BLOCKED)
		m_Pen.SetStartCap(Gdiplus::LineCapArrowAnchor);

	m_pUIElement1 = NULL;	// Set by OnAssociatedElementAdded
	m_pUIElement2 = NULL;
	m_Rect1 = CRect(0, 0, 0, 0);
	m_Rect2 = CRect(0, 0, 0, 0);

	SetToolTipText(strToolTipText);

	AddAssociatedElement(pUIElement1);
	AddAssociatedElement(pUIElement2);

	Refresh();
}

CUILink::~CUILink()
{
	ClearWaypoints();
}

CRect CUILink::GetViewRect()
{
	return ((CMagicWandView*)m_pView)->GetViewRect();
}

void CUILink::ClearWaypoints()
{
	if (m_pWaypoints)
	{
		delete[] m_pWaypoints;
		m_pWaypoints = NULL;
	}

	m_nWaypointCount = 0;
	m_Path.Reset();
}

BOOL CUILink::UpdatePath()
{
	if (!m_pUIElement1 || !m_pUIElement2)
	{
		m_Rect1 = CRect();
		m_Rect2 = CRect();

		ClearWaypoints();
		return TRUE;
	}

	CRect Rect1 = m_pUIElement1->GetBoundRect();
	CRect Rect2 = m_pUIElement2->GetBoundRect();

	CRect rectInter;
	rectInter.IntersectRect(Rect1, Rect2);
	if (!rectInter.IsRectEmpty())
	{
		m_Rect1 = Rect1;
		m_Rect2 = Rect2;

		ClearWaypoints();
		return TRUE;
	}

	if ((Rect1 == m_Rect1) && (Rect2 == m_Rect2))
		return FALSE;

	m_Rect1 = Rect1;
	m_Rect2 = Rect2;

	CRect ViewRect = GetViewRect();

	std::vector<CPoint> waypoints;
	FindShortestPath(
		Rect1, s_BufferSize,
		Rect2, s_BufferSize,
		ViewRect.Size(),
		waypoints, FALSE);

	ClearWaypoints();
	if (waypoints.size())
	{
		m_pWaypoints = new Gdiplus::Point[waypoints.size()];
		m_nWaypointCount = waypoints.size();

		for (int i = 0; i < m_nWaypointCount; ++i)
		{
			m_pWaypoints[i].X = waypoints[i].x;
			m_pWaypoints[i].Y = waypoints[i].y;
		}
	}

	return TRUE;
}

void CUILink::Refresh()
{
	if (UpdatePath())
		InitializeBoundRegion();
}

void CUILink::InitializeBoundRegion()
{
	if (!m_nWaypointCount)
	{
		SetBoundRgn(CRgn(), FALSE);
		return;
	}

	m_Path.Reset();
	m_Path.AddCurve(m_pWaypoints, m_nWaypointCount);

	Gdiplus::Rect bounds;
	m_Path.GetBounds(&bounds, NULL, &m_Pen);

	CRgn boundRgn;
	boundRgn.CreateRectRgn(bounds.GetLeft(), bounds.GetTop(), bounds.GetRight(), bounds.GetBottom());
	SetBoundRgn(boundRgn, FALSE);
}

/*
BOOL CUILink::PtInElement(CPoint Point) const
{
	return m_Path.IsOutlineVisible(Point.x, Point.y, &m_Pen);
}
*/

void CUILink::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	if (!m_nWaypointCount)
		return;

	Gdiplus::Graphics graphics(pDC->GetSafeHdc());
	graphics.DrawCurve(&m_Pen, m_pWaypoints, m_nWaypointCount);
}

void CUILink::OnMoved(CSize MoveSize)
{
	for (int i = 0; i < m_nWaypointCount; ++i)
	{
		m_pWaypoints[i].X += MoveSize.cx;
		m_pWaypoints[i].Y += MoveSize.cy;
	}
}

void CUILink::OnAssociatedElementAdded(CUIElement* pElement)
{
	if (m_AssociatedElements.size() > 2)
	{
		ATLASSERT(FALSE);
		return;
	}

	ATLASSERT(!m_pUIElement1 || !m_pUIElement2);

	if (!m_pUIElement1)
		m_pUIElement1 = pElement;
	else
		m_pUIElement2 = pElement;

	Refresh();
}

void CUILink::OnAssociatedElementRemoved(CUIElement* pElement)
{
	ATLASSERT((pElement == m_pUIElement1) || (pElement == m_pUIElement2));

	if (pElement == m_pUIElement1)
		m_pUIElement1 = NULL;
	else
		m_pUIElement2 = NULL;

	Refresh();
}

void CUILink::OnAssociatedElementBoundRegionChanged(CUIElement* pElement)
{
	UNUSED(pElement);

	Refresh();
}