#include "stdafx.h"
#include "ElementManager.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CElementManager::CElementManager(CScrollView* pView)
	: m_pView(pView)
	, m_bScaleBackground(TRUE)
	, m_bBackgroundKeepAspectRatio(FALSE)
	, m_nBackgroundStyle(BKG_CENTER)
{
}

CElementManager::~CElementManager()
{
	for (size_t i = 0; i < m_Elements.size(); ++i)
		delete m_Elements[i];
}

void CElementManager::AddElement(CUIElement* pElement)
{
	int nIndex = FindAltitudeLocation(pElement->GetAltitude(), FALSE);
	while (nIndex < (int)m_Elements.size() &&
		m_Elements[nIndex]->GetAltitude() == pElement->GetAltitude() &&
		m_Elements[nIndex]->GetSortKey() < pElement->GetSortKey())
		++nIndex;
	m_Elements.insert(m_Elements.begin() + nIndex, pElement);
	InvalidateElement(pElement);
}

void CElementManager::AddElements(const std::vector<CUIElement*>& elements)
{
	for (size_t i = 0; i < elements.size(); ++i)
		AddElement(elements[i]);
}

void CElementManager::RemoveElement(CUIElement* pElement)
{
	for (size_t i = 0; i < m_Elements.size(); ++i)
		if (m_Elements[i] == pElement)
		{
			m_Elements.erase(m_Elements.begin() + i);
		
			InvalidateElement(pElement);

			delete pElement;
			break;
		}

	RemoveMovingElement(pElement);
}

void CElementManager::RemoveElementAt(int i)
{
	CUIElement* pElement = m_Elements[i];

	m_Elements.erase(m_Elements.begin() + i);

	InvalidateElement(pElement);

	delete pElement;

	RemoveMovingElement(pElement);
}

void CElementManager::RemoveAllElementsAtAltitude(CUIElement::ALTITUDE_TYPE nAltitude)
{
	for (int i = (int)m_Elements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_Elements[i];
		if (pElement->GetAltitude() == nAltitude)
		{
			m_Elements.erase(m_Elements.begin() + i);
		
			InvalidateElement(pElement);

			delete pElement;

			RemoveMovingElement(pElement);
		}
	}
}

void CElementManager::RemoveAllElements()
{
	for (int i = (int)m_Elements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_Elements[i];
		m_Elements.erase(m_Elements.begin() + i);
	
		InvalidateElement(pElement);

		delete pElement;

		RemoveMovingElement(pElement);
	}
}

void CElementManager::DetachElement(CUIElement* pElement)
{
	for (size_t i = 0; i < m_Elements.size(); ++i)
		if (m_Elements[i] == pElement)
		{
			m_Elements.erase(m_Elements.begin() + i);
			return;
		}
	ATLASSERT(false);
}

void CElementManager::DetachAllElementsAtAltitude(CUIElement::ALTITUDE_TYPE nAltitude, std::vector<CUIElement*>& elements)
{
	for (size_t i = 0; i < m_Elements.size(); ++i)
		if (m_Elements[i]->GetAltitude() == nAltitude)
			elements.push_back(m_Elements[i]);

	for (int i = (int)m_Elements.size() - 1; i >= 0; --i)
		if (m_Elements[i]->GetAltitude() == nAltitude)
			m_Elements.erase(m_Elements.begin() + i);
}

int CElementManager::GetElementCount() const
{
	return m_Elements.size();
}

CUIElement* CElementManager::GetElement(int nIndex)
{
	return m_Elements[nIndex];
}

CUIElement* CElementManager::GetElement(CPoint Point, int nElementType, CUIElement* pExcludeThis)
{
	for (int i = (int)m_Elements.size() - 1; i >= 0; --i)
	{
		CUIElement* pElement = m_Elements[i];
		if (((nElementType == -1) || (pElement->GetElementType() == nElementType)) &&
			pElement->PtInElement(Point) && (pElement != pExcludeThis))
			return pElement;
	}

	return NULL;
}

void CElementManager::GetElements(CUIElement::ALTITUDE_TYPE nAltitude, std::vector<CUIElement*>& elements)
{
	for (int i = (int)m_Elements.size() - 1; i >= 0; --i)
		if (m_Elements[i]->GetAltitude() == nAltitude)
			elements.push_back(m_Elements[i]);
}

bool CElementManager::SortElementFunc(const CUIElement* lhs, const CUIElement* rhs)
{
	// First sort by altitude

	if (lhs->GetAltitude() < rhs->GetAltitude())
		return true;

	if (lhs->GetAltitude() > rhs->GetAltitude())
		return false;

	// Then sort by sort key

	return lhs->GetSortKey() < rhs->GetSortKey();
}

void CElementManager::Sort()
{
	std::sort(m_Elements.begin(), m_Elements.end(), SortElementFunc);
}

void CElementManager::InvalidateElement(CUIElement* pElement)
{
	CPoint scrollPos(m_pView->GetScrollPosition());	

	CRgn clipRgn;
	clipRgn.CreateRectRgn(0, 0, 0, 0);
	clipRgn.CopyRgn(const_cast<CRgn*>(pElement->GetBoundRgn()));
	clipRgn.OffsetRgn(-scrollPos.x, -scrollPos.y);

	m_pView->InvalidateRgn(&clipRgn, FALSE);
}

void CElementManager::ShuffleElementToFront(CUIElement* pElement)
{
	// back - begin() ..... front - end()	

	pElement->SetSortKeyOrderedPart(pElement->GetSortKeyOrderedPart() | 0x8000);
		
	for (size_t i = 0; i < m_Elements.size(); ++i)
		if (m_Elements[i] == pElement)
		{
			m_Elements.erase(m_Elements.begin() + i);
			int nIndex = FindAltitudeLocation(pElement->GetAltitude(), TRUE);

			m_Elements.insert(m_Elements.begin() + nIndex, pElement);
			--nIndex;

			while (nIndex >= 0 &&
					m_Elements[nIndex]->GetAltitude() == pElement->GetAltitude())
			{
				if (m_Elements[nIndex]->GetSortKeyOrderedPart())
				{
					pElement->SetSortKeyOrderedPart(m_Elements[nIndex]->GetSortKeyOrderedPart() + 1);
					break;
				}

				--nIndex;
			}

			return;
		}
}

void CElementManager::ShuffleElementToBack(CUIElement* pElement)
{
	// back - begin() ..... front - end()

	pElement->SetSortKeyOrderedPart(pElement->GetSortKeyOrderedPart() | 0x8000);

	for (size_t i = 0; i < m_Elements.size(); ++i)
		if (m_Elements[i] == pElement)
		{
			m_Elements.erase(m_Elements.begin() + i);
			int nIndex = FindAltitudeLocation(pElement->GetAltitude(), FALSE);

			m_Elements.insert(m_Elements.begin() + nIndex, pElement);

			pElement->SetSortKeyOrderedPart(0x8000);

			return;
		}
}

void CElementManager::ShuffleElementTo(CUIElement* pElement, CUIElement* pBehindThisElement)
{
	if (pElement->GetAltitude() != pBehindThisElement->GetAltitude())
	{
		ATLASSERT(false);
		return;
	}

	if (!pBehindThisElement->GetSortKeyOrderedPart())
		pBehindThisElement->SetSortKeyOrderedPart(0x8001);

	pElement->SetSortKeyOrderedPart(pBehindThisElement->GetSortKeyOrderedPart() - 1);

	// back - begin() ..... front - end()

	for (std::vector<CUIElement*>::iterator i = m_Elements.begin(); i != m_Elements.end(); ++i)
	{
		if (*i == pElement)
			return;

		if (*i != pBehindThisElement)
			continue;

		for (std::vector<CUIElement*>::iterator j = i + 1; j != m_Elements.end(); ++j)
			if (*j == pElement)
			{
				m_Elements.erase(j);
				m_Elements.insert(i, pElement);
				break;
			}

		break;
	}
}

void CElementManager::ChangeElementAltitude(CUIElement* pElement, CUIElement::ALTITUDE_TYPE nAltitude, BOOL bFront)
{
	pElement->SetAltitude(nAltitude);

	if (bFront)
		ShuffleElementToFront(pElement);
	else
		ShuffleElementToBack(pElement);
}

void CElementManager::ChangeElementAltitude(CUIElement* pElement, CUIElement::ALTITUDE_TYPE nAltitude)
{
	pElement->SetAltitude(nAltitude);
	Sort();
}

void CElementManager::UpdateElement(CDC* pDC, CUIElement* pElement)
{
	CPoint scrollPos(m_pView->GetScrollPosition());	

	CRgn clipRgn;
	clipRgn.CreateRectRgn(0, 0, 0, 0);
	clipRgn.CopyRgn(pElement->GetBoundRgn());
	clipRgn.OffsetRgn(-scrollPos.x, -scrollPos.y);
	pDC->SelectClipRgn(&clipRgn); 
	clipRgn.OffsetRgn(scrollPos.x, scrollPos.y);

	CRect clipRect(pElement->GetBoundRect());
	clipRect.OffsetRect(-scrollPos.x, -scrollPos.y);

	CMemDC dc2(pDC, clipRect, scrollPos, TRUE);

	clipRect.OffsetRect(scrollPos.x, scrollPos.y);

	Draw(dc2, clipRgn, clipRect);
}

void CElementManager::UpdateElement(CUIElement* pElement)
{
	CDC* pDC = m_pView->GetDC();
	UpdateElement(pDC, pElement);
	m_pView->ReleaseDC(pDC);
}

void CElementManager::AddMovingElement(CUIElement* pElement, CPoint toPt)
{
	CPoint fromPt(pElement->GetTopLeft());
	if (fromPt == toPt)
		return;

	for (std::list<ElementMovement>::iterator i = m_MovingElements.begin(); i != m_MovingElements.end(); ++i)
	{
		if (i->pElement == pElement)
		{
			// Already has a pending movement for this element. Replace with the new destination.
			*i = ElementMovement(pElement, fromPt, toPt);
			return;
		}
	}

	m_MovingElements.push_back(ElementMovement(pElement, fromPt, toPt));
}

void CElementManager::RemoveMovingElement(CUIElement* pElement)
{
	for (std::list<ElementMovement>::iterator i = m_MovingElements.begin(); i != m_MovingElements.end(); ++i)
	{
		if (i->pElement == pElement)
		{
			m_MovingElements.erase(i);
			break;
		}
	}
}

CPoint CElementManager::GetElementDestination(CUIElement* pElement)
{
	for (std::list<ElementMovement>::iterator i = m_MovingElements.begin(); i != m_MovingElements.end(); ++i)
		if (i->pElement == pElement)
			return i->toPoint;

	return pElement->GetTopLeft();
}

void CElementManager::UpdateMovingElements(CDC* pDC, BOOL bStartToFinish)
{
	if (bStartToFinish)
		m_pView->UpdateWindow();

	CPoint scrollPos(m_pView->GetScrollPosition());	

	while (m_MovingElements.size())
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);

		for (std::list<ElementMovement>::iterator i = m_MovingElements.begin(); i != m_MovingElements.end(); )
		{
			clipRgn.CombineRgn(&clipRgn, i->pElement->GetBoundRgn(), RGN_OR);

			if (i->nSteps <= 1)
				i->pElement->MoveToPt(i->toPoint);
			else
				i->pElement->Move(i->delta);

			clipRgn.CombineRgn(&clipRgn, i->pElement->GetBoundRgn(), RGN_OR);

			--i->nSteps;
			if (i->nSteps <= 0)
				m_MovingElements.erase(i++);
			else
				++i;
		}


		CRect clipRect;
		if (clipRgn.GetRgnBox(&clipRect) != NULLREGION)
		{
			clipRgn.OffsetRgn(-scrollPos.x, -scrollPos.y);
			pDC->SelectClipRgn(&clipRgn); 				
			clipRgn.OffsetRgn(scrollPos.x, scrollPos.y);

			clipRect.OffsetRect(-scrollPos.x, -scrollPos.y);

			CMemDC dc2(pDC, clipRect, scrollPos, TRUE);

			clipRect.OffsetRect(scrollPos.x, scrollPos.y);

			Draw(dc2, clipRgn, clipRect);
		}

		if (!bStartToFinish)
			return;
	}
}

void CElementManager::UpdateMovingElements(BOOL bStartToFinish)
{
	CDC* pDC = m_pView->GetDC();
	UpdateMovingElements(pDC, bStartToFinish);
	m_pView->ReleaseDC(pDC);
}

void CElementManager::SetBackground(LPCTSTR strBackgroundFile, BACKGROUND_STYLE nBackgroundStyle, 
		BOOL bScaleBackground, BOOL bBackgroundKeepAspectRatio)
{
	m_strBackgroundFile = strBackgroundFile;
	m_nBackgroundStyle = nBackgroundStyle;
	m_bScaleBackground = bScaleBackground;
	m_bBackgroundKeepAspectRatio = bBackgroundKeepAspectRatio;

	if (PathFileExists(m_strBackgroundFile))
	{
		m_Background.Load(m_strBackgroundFile);
		m_BackgroundResized.Reset();
	}
}

CString CElementManager::BackgroundFile() const
{
	return m_strBackgroundFile;
}

CElementManager::BACKGROUND_STYLE CElementManager::BackgroundStyle() const
{
	return m_nBackgroundStyle;
}

BOOL CElementManager::ScaleBackground() const
{
	return m_bScaleBackground;
}

BOOL CElementManager::BackgroundKeepAspectRatio() const
{
	return m_bBackgroundKeepAspectRatio;
}

CRect CElementManager::GetViewRect()
{
	CRect viewRect(CPoint(0, 0), m_pView->GetTotalSize());
	CRect ClientRect;
	m_pView->GetClientRect(&ClientRect);
	if (viewRect.bottom < ClientRect.bottom)
		viewRect.bottom = ClientRect.bottom;

	if (viewRect.right < ClientRect.right)
		viewRect.right = ClientRect.right;
	return viewRect;
}

int CElementManager::FindAltitudeLocation(CUIElement::ALTITUDE_TYPE nAltitude, BOOL bFront) const
{
	if (!m_Elements.size())
		return 0;

	if (bFront)
	{
		for (int i = (int)m_Elements.size() - 1; i >= 0; --i) // front to back
		{
			CUIElement::ALTITUDE_TYPE nElementAltitude = m_Elements[i]->GetAltitude();

			if (nElementAltitude <= nAltitude)
				return i + 1;
		}

		return 0;
	}

	for (int i = 0; i < (int)m_Elements.size(); ++i) // back to front
	{
		CUIElement::ALTITUDE_TYPE nElementAltitude = m_Elements[i]->GetAltitude();

		if (nElementAltitude >= nAltitude)
			return i;
	}

	return (int)m_Elements.size();
}

void CElementManager::Draw(CMemDC& dc2, CRgn& currentClipRgn, const CRect& clipRect)
{
	std::vector< std::pair< CUIElement*, CRgn* > > transparentElements;

	// Draw all elements

	CRect initialClipRect;
	if (currentClipRgn.GetRgnBox(&initialClipRect) == NULLREGION)
		return;

	bool bDone = false;

	for (int i = (int)m_Elements.size() - 1; i >= 0; --i) // front to back
	{
		CUIElement* pElement = m_Elements[i];

		if (pElement->Hidden() || !CRect().IntersectRect(&(pElement->GetBoundRect()), &initialClipRect))
			continue;

		const CRgn* pElementRgn = pElement->GetBoundRgn();

		CRgn* pAndRgn(new CRgn);
		pAndRgn->CreateRectRgn(0, 0, 0, 0);
		if (pAndRgn->CombineRgn(&currentClipRgn, pElementRgn, RGN_AND) != NULLREGION)
		{ 
			if (pElement->HasTransparentRegion())
			{
				transparentElements.push_back(std::make_pair(pElement, pAndRgn));
				continue;
			}

			pAndRgn->OffsetRgn(-clipRect.left, -clipRect.top); // weird GDI thing: it looks like SetWindowOrig() affects all drawing code but not affecting clipping setup. So here we need to shift our clipping region to match the changed window origin
			dc2.SelectClipRgn(pAndRgn); 				
			pAndRgn->OffsetRgn(clipRect.left, clipRect.top);

			pElement->Draw(&dc2, pAndRgn);
			/*
			CRect clipTemp;
			dc2.GetClipBox(&clipTemp);
			CBrush brush(RGB(255, 0, 0));
			CBrush brush2(RGB(0, 255, 0));
			CRect tempRect;
			pAndRgn->GetRgnBox(&tempRect);
			dc2.FillRgn(pAndRgn, (i % 2) ? &brush : &brush2);
			*/

			for (int j = (int)transparentElements.size() - 1; j >= 0; --j)
			{
				// Is this element under any transparent elements?

				CUIElement* pTransparentElement = transparentElements[j].first;
				CRgn* pTransparentElementRgn = transparentElements[j].second;

				CRgn andRgn2;
				andRgn2.CreateRectRgn(0, 0, 0, 0);
				if (andRgn2.CombineRgn(pAndRgn, pTransparentElementRgn, RGN_AND) != NULLREGION)
				{
					// Yes, draw this transparent element and subtract its pending region

					if (pTransparentElementRgn->CombineRgn(pTransparentElementRgn, &andRgn2, RGN_DIFF) == NULLREGION)
					{
						delete pTransparentElementRgn;
						transparentElements.erase(transparentElements.begin() + j);
					}

					andRgn2.OffsetRgn(-clipRect.left, -clipRect.top);
					dc2.SelectClipRgn(&andRgn2); 				
					andRgn2.OffsetRgn(clipRect.left, clipRect.top);
					pTransparentElement->Draw(&dc2, &andRgn2);
				}
			}

			/*
			CRect clipTemp2;
			currentClipRgn.GetRgnBox(&clipTemp2);

			CRect clipTemp3;
			pAndRgn->GetRgnBox(&clipTemp3);
			*/

			if (currentClipRgn.CombineRgn(&currentClipRgn, pAndRgn, RGN_DIFF) == NULLREGION)
			{
				delete pAndRgn;
				bDone = true;
				break;
			}

			/*
			CRect clipTemp4;
			currentClipRgn.GetRgnBox(&clipTemp4);
			*/
		}

		delete pAndRgn;
	}

	// Draw background

	if (!bDone && m_Background.IsValid())
	{
		CRect viewRect = GetViewRect();

		if (m_nBackgroundStyle == BKG_TILE)
		{
			CSize bitmapSize(m_Background.Size().Width, m_Background.Size().Height);
			for (int x = 0; x < viewRect.Width(); x += bitmapSize.cx)
				for (int y = 0; y < viewRect.Height(); y += bitmapSize.cy)
				{
					CRect bitmapRect(CPoint(x, y), bitmapSize);
					if (currentClipRgn.RectInRegion(bitmapRect))
					{
						CRgn offsetRgn;
						offsetRgn.CreateRectRgn(0, 0, 0, 0);
						offsetRgn.CopyRgn(&currentClipRgn);
						offsetRgn.OffsetRgn(-clipRect.left, -clipRect.top);
						dc2.SelectClipRgn(&offsetRgn);

						Gdiplus::Graphics graphics(dc2.GetSafeHdc());
						graphics.DrawImage(m_Background, Gdiplus::Point(x, y));

						CRgn backgroundRgn;
						backgroundRgn.CreateRectRgnIndirect(bitmapRect);
						if (currentClipRgn.CombineRgn(&currentClipRgn, &backgroundRgn, RGN_DIFF) == NULLREGION)
						{
							x = viewRect.Width();
							y = viewRect.Height();
							break;
						}
					}
				}
		}
		else
		if (m_nBackgroundStyle == BKG_CENTER)
		{
			currentClipRgn.OffsetRgn(-clipRect.left, -clipRect.top);
			dc2.SelectClipRgn(&currentClipRgn); 

			Gdiplus::Graphics graphics(dc2.GetSafeHdc());

			if (!m_bScaleBackground)
			{
				CSize bitmapSize(m_Background.Size().Width, m_Background.Size().Height);
				CRect bitmapRect(CPoint((viewRect.right - bitmapSize.cx) / 2, (viewRect.bottom - bitmapSize.cy) / 2), bitmapSize);
				graphics.DrawImage(m_Background, bitmapRect.left, bitmapRect.top, bitmapRect.Width(), bitmapRect.Height());
			}
			else
			{	
				Gdiplus::Rect destinationRect;
				if (!m_bBackgroundKeepAspectRatio)
					destinationRect = Gdiplus::Rect(viewRect.left, viewRect.top, viewRect.Width(), viewRect.Height());
				else
				{
					CSize bitmapSize(m_Background.Size().Width, m_Background.Size().Height);
					int nNewBitmapHeight =
						static_cast<int>(
						static_cast<double>(viewRect.Width()) / static_cast<double>(bitmapSize.cx) *
						static_cast<double>(bitmapSize.cy));

					if (nNewBitmapHeight >= viewRect.Height())
						destinationRect = Gdiplus::Rect(0, (viewRect.Height() - nNewBitmapHeight) / 2, viewRect.Width(), nNewBitmapHeight);
					else
					{
						int nNewBitmapWidth =
							static_cast<int>(
							static_cast<double>(viewRect.Height()) / static_cast<double>(bitmapSize.cy) *
							static_cast<double>(bitmapSize.cx));
							
						destinationRect = Gdiplus::Rect((viewRect.Width() - nNewBitmapWidth) / 2, 0, nNewBitmapWidth, viewRect.Height());
					}
				}

				if (!m_BackgroundResized.IsValid() ||
					m_BackgroundResized.Size().Width != destinationRect.Width ||
					m_BackgroundResized.Size().Height != destinationRect.Height)
				{
					m_BackgroundResized = m_Background;
					m_BackgroundResized.Stretch(Gdiplus::Size(destinationRect.Width, destinationRect.Height));
				}

				if (m_BackgroundResized.IsValid())
					graphics.DrawImage(
						m_BackgroundResized,
						Gdiplus::Rect(clipRect.left, clipRect.top, clipRect.Width(), clipRect.Height()),
						clipRect.left, clipRect.top,
						clipRect.Width(),
						clipRect.Height(),
						Gdiplus::UnitPixel);
			}
		}
	}

	// Draw remaining transparent elements

	for (int j = (int)transparentElements.size() - 1; j >= 0; --j)
	{
		CUIElement* pTransparentElement = transparentElements[j].first;
		CRgn* pTransparentElementRgn = transparentElements[j].second;

		pTransparentElementRgn->OffsetRgn(-clipRect.left, -clipRect.top);
		dc2.SelectClipRgn(pTransparentElementRgn); 				
		pTransparentElementRgn->OffsetRgn(clipRect.left, clipRect.top);
		pTransparentElement->Draw(&dc2, pTransparentElementRgn);

		delete pTransparentElementRgn;
	}
}