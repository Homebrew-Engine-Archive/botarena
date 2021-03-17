// UIElement.cpp: implementation of the CUIElement class.
//

#include "stdafx.h"
#include "UIElement.h"

#define new DEBUG_NEW

CUIElement::CUIElement(UIELEMENT_TYPE nType, ALTITUDE_TYPE nAltitude, int nElementData)
	: m_nType(nType)
	, m_nAltitude(nAltitude)
	, m_BoundRect(0, 0, 0, 0)
	, m_nElementData(nElementData)
	, m_bHidden(FALSE)
{
	m_pView = (CScrollView*)((CFrameWnd*)::AfxGetMainWnd())->GetActiveView(); // must use MFC CFrameWnd

	// 0xffff 0000 0000 0000 - Ordered part
	// 0x0000 ffff ffff 0000 - Custom part
	// 0x0000 0000 0000 ffff - Element pointer hash

	DWORD dwThis = (DWORD)this;
	m_nSortKey = LOWORD(dwThis) ^ HIWORD(dwThis);
}

CUIElement::~CUIElement()
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];

		m_AssociatedElements.erase(m_AssociatedElements.begin() + i);

		for (size_t j = 0; j < pElement->m_AssociatedElements.size(); ++j)
			if (pElement->m_AssociatedElements[j] == this)
			{
				pElement->m_AssociatedElements.erase(pElement->m_AssociatedElements.begin() + j);
				break;
			}

		pElement->OnAssociatedElementRemoved(this);
	}
}

const CRgn* CUIElement::GetBoundRgn() const					
{ 
	if (m_bHidden)
	{
		static std::auto_ptr<CRgn> apNullRegion;
		if (!apNullRegion.get())
		{
			apNullRegion.reset(new CRgn);
			apNullRegion->CreateRectRgn(0, 0, 0, 0);
		}

		return apNullRegion.get();
	}

	return &m_BoundRgn; 
}

CRect CUIElement::GetBoundRect() const
{
	if (m_bHidden)
		return CRect(0, 0, 0, 0);

	return m_BoundRect;
}

BOOL CUIElement::PtInElement(CPoint Point) const
{
	if (m_bHidden || !m_BoundRgn.GetSafeHandle())
		return FALSE;

	return m_BoundRgn.PtInRegion(Point);
}

void CUIElement::Hide()
{ 
	m_bHidden = TRUE; 
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		m_AssociatedElements[i]->OnAssociatedElementBoundRegionChanged(this);
}

void CUIElement::Show()
{ 
	m_bHidden = FALSE; 
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		m_AssociatedElements[i]->OnAssociatedElementBoundRegionChanged(this);
}

void CUIElement::Move(CSize MoveSize)
{
	OnBeforeMove(MoveSize);

	if (m_BoundRgn.GetSafeHandle())
	{
		//ATLTRACE(_T("Element %p(%d) moving from (%d,%d) to "), this, m_nType, m_BoundRect.left, m_BoundRect.top);

		m_BoundRgn.OffsetRgn(MoveSize.cx, MoveSize.cy);
		m_BoundRect.OffsetRect(MoveSize.cx, MoveSize.cy);

		//ATLTRACE(_T("(%d,%d)\n"), m_BoundRect.left, m_BoundRect.top);
	}

	OnMoved(MoveSize);
}

void CUIElement::MoveToPt(CPoint Point)
{
	CSize MoveSize = Point - GetTopLeft();
	if (MoveSize.cx || MoveSize.cy)
		Move(MoveSize);
}

void CUIElement::SetToolTipText(LPCTSTR strToolTipText)
{
	m_strToolTipText = strToolTipText;
}

CString CUIElement::GetToolTipText(CPoint Point)
{
	Point -= m_BoundRect.TopLeft();
	SetToolTipText(UpdateToolTipText(Point));

	return m_strToolTipText;
}

void CUIElement::SetSortKeyOrderedPart(WORD wOrdered)
{
	m_nSortKey = (m_nSortKey & 0x0000ffffffffffff) | ((unsigned __int64)wOrdered << 48);
}

WORD CUIElement::GetSortKeyOrderedPart() const
{
	return (m_nSortKey & 0xffff000000000000) >> 48;
}

void CUIElement::SetSortKeyCustomPart(DWORD dwCustom)
{
	m_nSortKey = (m_nSortKey & 0xffff00000000ffff) | ((unsigned __int64)dwCustom << 16);
}

void CUIElement::AddAssociatedElement(CUIElement* pElement)
{
	m_AssociatedElements.push_back(pElement);
	OnAssociatedElementAdded(pElement);

	pElement->m_AssociatedElements.push_back(this);
	pElement->OnAssociatedElementAdded(this);
}

void CUIElement::RemoveAssociatedElement(CUIElement* pElement)
{
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		if (m_AssociatedElements[i] == pElement)
		{
			m_AssociatedElements.erase(m_AssociatedElements.begin() + i);
			
			for (size_t j = 0; j < pElement->m_AssociatedElements.size(); ++j)
				if (pElement->m_AssociatedElements[j] == this)
				{
					pElement->m_AssociatedElements.erase(pElement->m_AssociatedElements.begin() + j);
					OnAssociatedElementRemoved(pElement);
					break;
				}

			pElement->OnAssociatedElementRemoved(this);

			return;
		}

	ATLASSERT(FALSE);
}

void CUIElement::RemoveAllAssociatedElements()
{
	for (int i = (int)m_AssociatedElements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_AssociatedElements[i];

		m_AssociatedElements.erase(m_AssociatedElements.begin() + i);

		for (size_t j = 0; j < pElement->m_AssociatedElements.size(); ++j)
			if (pElement->m_AssociatedElements[j] == this)
			{
				pElement->m_AssociatedElements.erase(pElement->m_AssociatedElements.begin() + j);
				OnAssociatedElementRemoved(pElement);
				break;
			}

		pElement->OnAssociatedElementRemoved(this);
	}
}

BOOL CUIElement::HasAssociatedElement(CUIElement* pElement) const
{
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		if (m_AssociatedElements[i] == pElement)
			return TRUE;

	return FALSE;
}

void CUIElement::GetAssociatedElements(std::vector<CUIElement*>& elements, UIELEMENT_TYPE nType) const
{ 
	if (nType == -1)
	{
		elements.insert(elements.end(), m_AssociatedElements.begin(), m_AssociatedElements.end());
		return;
	}

	for (size_t j = 0; j < m_AssociatedElements.size(); ++j)
		if (m_AssociatedElements[j]->GetElementType() == nType)
			elements.push_back(m_AssociatedElements[j]);
}

void CUIElement::GetAssociatedElementsBoundRgn(CRgn& rgn, UIELEMENT_TYPE nType) const
{
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		if (nType == -1 || m_AssociatedElements[i]->GetElementType() == nType)
			rgn.CombineRgn(&rgn, m_AssociatedElements[i]->GetBoundRgn(), RGN_OR);
}

void CUIElement::InvalidateAssociatedElements(UIELEMENT_TYPE nType)
{
	for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
		if (nType == -1 || m_AssociatedElements[i]->GetElementType() == nType)
			m_pView->InvalidateRgn(const_cast<CRgn*>(m_AssociatedElements[i]->GetBoundRgn()));
}

void CUIElement::SetBoundRgn(const CRgn& BoundRgn, BOOL bCallOnMoved)
{
	BOOL bOldRgnDeleted = FALSE;
	CRect oldRect;
	CRect newRect;

	if (BoundRgn.GetSafeHandle())
		BoundRgn.GetRgnBox(&newRect);

	CSize MoveSize(0, 0);

	if (m_BoundRgn.GetSafeHandle())
	{
		if (m_BoundRgn.EqualRgn(&BoundRgn))
			return;

		oldRect = m_BoundRect;

		MoveSize = newRect.TopLeft() - oldRect.TopLeft();

		if (bCallOnMoved && (MoveSize.cx || MoveSize.cy))
			OnBeforeMove(MoveSize);

		m_BoundRgn.DeleteObject();
		bOldRgnDeleted = TRUE;
	}

	m_BoundRgn.CreateRectRgn(0, 0, 0, 0);
	int nResult = m_BoundRgn.CopyRgn(&BoundRgn);
	if (nResult == NULLREGION)
	{
		m_BoundRect = CRect(0, 0, 0, 0);
		m_BoundRgn.DeleteObject();
		for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
			m_AssociatedElements[i]->OnAssociatedElementBoundRegionChanged(this);
		return;
	}

	m_BoundRect = newRect;

	if (bOldRgnDeleted)
	{
		for (size_t i = 0; i < m_AssociatedElements.size(); ++i)
			m_AssociatedElements[i]->OnAssociatedElementBoundRegionChanged(this);

		if (bCallOnMoved && (MoveSize.cx || MoveSize.cy))
			OnMoved(MoveSize);
	}
}
