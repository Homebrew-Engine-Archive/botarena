#include "stdafx.h"
#include "UIElementGroup.h"

#define new DEBUG_NEW

CUIElementGroup::CUIElementGroup(ALTITUDE_TYPE nAltitude)
	: CUIElement(GROUP_ELEMENT, nAltitude)
{
}

CUIElementGroup::~CUIElementGroup()
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		RemoveAssociatedElement(pElement);
		delete pElement;
	}
}

BOOL CUIElementGroup::CanBeDragged(CPoint point)
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		if (pElement->CanBeDragged(point))
			return TRUE;
	}

	return FALSE;
}

void CUIElementGroup::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	CPoint origin(pDC->GetWindowOrg()); // weird GDI thing: it looks like SetWindowOrig() affects all drawing code but not affecting clipping setup. So here we need to shift our clipping region to match the changed window origin
	CRgn* pClipRgn = NULL;
	CRgn clipRgn;
	if (origin.x || origin.y)
	{
		clipRgn.CreateRectRgn(0, 0, 0, 0);
		clipRgn.CopyRgn(pClipRegion);
		clipRgn.OffsetRgn(-origin.x, -origin.y);
		pClipRgn = &clipRgn;
	}
	else
		pClipRgn = const_cast<CRgn*>(pClipRegion);

	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		pElement->Draw(pDC, pClipRegion);

		pDC->SelectClipRgn(pClipRgn);
	}
}

BOOL CUIElementGroup::HasTransparentRegion() const
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		if (pElement->HasTransparentRegion())
			return TRUE;
	}

	return FALSE;
}

void CUIElementGroup::OnMoved(CSize moveSize)
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		pElement->Move(moveSize);
	}
}

CString CUIElementGroup::UpdateToolTipText(CPoint point)
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];
		if (pElement->PtInElement(point))
			return pElement->UpdateToolTipText(point);
	}

	return __super::UpdateToolTipText(point);
}

void CUIElementGroup::OnAssociatedElementAdded(CUIElement* pElement)
{
	if (GetBoundRgn()->GetSafeHandle())
	{
		CRgn newBoundRgn;
		newBoundRgn.CreateRectRgn(0, 0, 0, 0);
		newBoundRgn.CombineRgn(GetBoundRgn(), pElement->GetBoundRgn(), RGN_OR);
		SetBoundRgn(newBoundRgn, FALSE);
	}
	else
		SetBoundRgn(*(pElement->GetBoundRgn()), FALSE);
}

void CUIElementGroup::OnAssociatedElementRemoved(CUIElement* pElement)
{
	CRgn newBoundRgn;
	newBoundRgn.CreateRectRgn(0, 0, 0, 0);
	GetAssociatedElementsBoundRgn(newBoundRgn);
	SetBoundRgn(newBoundRgn, FALSE);
}

void CUIElementGroup::OnAssociatedElementBoundRegionChanged(CUIElement* pElement)
{
	CRgn newBoundRgn;
	newBoundRgn.CreateRectRgn(0, 0, 0, 0);
	GetAssociatedElementsBoundRgn(newBoundRgn);
	SetBoundRgn(newBoundRgn, FALSE);
}