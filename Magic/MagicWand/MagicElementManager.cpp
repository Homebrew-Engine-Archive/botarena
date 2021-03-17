#include "stdafx.h"
#include "MagicElementManager.h"
#include "MagicWandView.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CMagicElementManager::CMagicElementManager(CScrollView* pView)
	: CElementManager(pView)
	, m_pSelectElement(NULL)
	, m_pSelectedElements(NULL)
	, m_pLargeCard(NULL)
	, m_pLifeText1(NULL)
	, m_pLifeText2(NULL)
	, m_pManaPoolText1(NULL)
	, m_pManaPoolText2(NULL)
	, m_pPhaseText(NULL)
	, m_pLibraryText1(NULL)
	, m_pLibraryText2(NULL)
	, m_pLibraryIcon1(NULL)
	, m_pLibraryIcon2(NULL)
	, m_pPhaseIcon1(NULL)
	, m_pPhaseIcon2(NULL)
	, m_pAvatarImage1(NULL)
	, m_pAvatarImage2(NULL)
	, m_bFlashingAvatarImage1(FALSE)
	, m_bFlashingAvatarImage2(FALSE)
	, m_bShowSelectionIndicator(TRUE)
{
	m_UntapImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\untap.png"));
	m_UpkeepImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\upkeep.png"));
	m_DrawImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\draw.png"));
	m_MainImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\main.png"));
	m_BOCImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\beginningofcombat.png"));
	m_DeclareAttackersImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\declareattackers.png"));
	m_DeclareBlockersImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\declareblockers.png"));
	m_CombatDamageImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\combatdamage.png"));
	m_EOCImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\endofcombat.png"));
	m_EOTImage.Load(g_pCoreApp->GetBitmapPath() + _T("\\Steps\\endofturn.png"));

	CString strAvatarPath1 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR1, g_pCoreApp->GetBitmapPath() + _T("\\Avatars\\Dakmor Sorceress.png"));	
	m_ComputerAvatarImage.Load(strAvatarPath1);
	m_AvatarImage1 = m_ComputerAvatarImage;

	CString strAvatarPath2 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR2, g_pCoreApp->GetBitmapPath() + _T("\\Avatars\\Nigromante.png"));	
	m_AvatarImage2.Load(strAvatarPath2);
}

void CMagicElementManager::Reset()
{
	RemoveAllElements();

	m_pSelectElement = NULL;
	m_pSelectedElements = NULL;
	m_pLargeCard = NULL;
	m_pLifeText1 = NULL;
	m_pLifeText2 = NULL;
	m_pManaPoolText1 = NULL;
	m_pManaPoolText2 = NULL;
	m_pPhaseText = NULL;
	m_pLibraryText1 = NULL;
	m_pLibraryText2 = NULL;
	m_pLibraryIcon1 = NULL;
	m_pLibraryIcon2 = NULL;
	m_pPhaseIcon1 = NULL;
	m_pPhaseIcon2 = NULL;
	m_pAvatarImage1 = NULL;
	m_pAvatarImage2 = NULL;

	m_BlockedLinks.clear();
	m_EnchantLinks.clear();
	m_IsAlsoALinks.clear();
	m_EquipmentLinks.clear();

	m_bFlashingAvatarImage1 = FALSE;
	m_bFlashingAvatarImage2 = FALSE;
}

void CMagicElementManager::SelectElement(CUIElement* pElement)
{
	if (ElementSelected(pElement))
		return;

	CRect elementRect;
	if (pElement->GetElementType() == CUIElement::CARD_ELEMENT)
		elementRect = ((CUICard*)pElement)->GetCardRect();
	else
		elementRect = pElement->GetBoundRect();

	CardType cardColor = GetElementCardColor(pElement);

	if (!m_pSelectedElements)
	{
		m_pSelectedElements = new CUIElementGroup(CUIElement::SELECTION_LEVEL);

		if (m_bShowSelectionIndicator && !m_pSelectElement)
		{
			m_pSelectElement = new CUISelection(elementRect, cardColor);
			m_pSelectedElements->AddAssociatedElement(m_pSelectElement);
		}

		DetachElement(pElement);

		m_pSelectedElements->AddAssociatedElement(pElement);
		AddElement(m_pSelectedElements);

		return;
	}

	DetachElement(pElement);
	m_pSelectedElements->AddAssociatedElement(pElement);

	if (m_bShowSelectionIndicator && !m_pSelectElement)
	{
		m_pSelectElement = new CUISelection(elementRect, cardColor);
		m_pSelectedElements->AddAssociatedElement(m_pSelectElement);
	}

	if (m_pSelectedElements->Hidden())
	{
		if (m_bShowSelectionIndicator)
		{
			m_pSelectElement->SetColor(cardColor);
			m_pSelectElement->SetEnclosingRect(elementRect);
		}

		m_pSelectedElements->Show();
	}
	else
	{
		if (m_bShowSelectionIndicator)
		{
			InvalidateElement(m_pSelectedElements);

			cardColor |= m_pSelectElement->GetColor();
			m_pSelectElement->SetColor(cardColor);

			CRect enclosingRect;
			enclosingRect.UnionRect(&m_pSelectElement->GetEnclosingRect(), &elementRect);
			m_pSelectElement->SetEnclosingRect(enclosingRect);
		}
	}

	InvalidateElement(m_pSelectedElements);
}

void CMagicElementManager::SelectElements(CRect selectionRect)
{
	std::vector<CUICard*> cardElements;
	GetAllCardElements(cardElements);

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		CRect uRect;
		uRect.UnionRect(selectionRect, cardElements[i]->GetBoundRect());
		if (uRect == selectionRect)
			SelectElement(cardElements[i]);
	}
}

void CMagicElementManager::UnselectElement(CUIElement* pElement)
{
	ATLASSERT(m_pSelectedElements);
	if (!m_pSelectedElements)
		return;

	InvalidateElement(m_pSelectedElements);

	m_pSelectedElements->RemoveAssociatedElement(pElement);
	if (m_pSelectedElements->GetAssociatedElementCount() <= (m_bShowSelectionIndicator ? 1 : 0))
	{
		m_pSelectedElements->Hide();

		if (m_bShowSelectionIndicator)
		{
			m_pSelectElement->SetColor(CardType::Null);
			m_pSelectElement->SetEnclosingRect(CRect(0, 0, 0, 0));
		}
	}
	else
	if (m_bShowSelectionIndicator)
	{
		CRect elementRect(0, 0, 0, 0);
		CardType cardColor = CardType::Null;
		std::vector<CUIElement*> selectedElements;
		m_pSelectedElements->GetAssociatedElements(selectedElements);
		for (size_t i = 0; i < selectedElements.size(); ++i)
			if (selectedElements[i] != m_pSelectElement)
			{
				cardColor |= GetElementCardColor(selectedElements[i]);

				CRect elementRect2;
				if (selectedElements[i]->GetElementType() == CUIElement::CARD_ELEMENT)
					elementRect2 = ((CUICard*)selectedElements[i])->GetCardRect();
				else
					elementRect2 = selectedElements[i]->GetBoundRect();

				CRect tempRect(elementRect);
				elementRect.UnionRect(&tempRect, &elementRect2);
			}

		m_pSelectElement->SetColor(cardColor);
		m_pSelectElement->SetEnclosingRect(elementRect);
	}

	AddElement(pElement);
}

void CMagicElementManager::UnselectAllElements()
{
	if (!m_pSelectedElements)
		return;

	InvalidateElement(m_pSelectedElements);

	std::vector<CUIElement*> selectedElements;
	m_pSelectedElements->GetAssociatedElements(selectedElements);
	for (size_t i = 0; i < selectedElements.size(); ++i)
		if (selectedElements[i] != m_pSelectElement)
		{
			AddElement(selectedElements[i]);

			m_pSelectedElements->RemoveAssociatedElement(selectedElements[i]);
		}

	m_pSelectedElements->Hide();
	if (m_pSelectElement)
	{
		m_pSelectElement->SetColor(CardType::Null);
		m_pSelectElement->SetEnclosingRect(CRect(0, 0, 0, 0));
	}
}

BOOL CMagicElementManager::ElementSelected(CUIElement* pElement) const
{
	return m_pSelectedElements && m_pSelectedElements->HasAssociatedElement(pElement);
}

void CMagicElementManager::MoveSelections(CSize moveSize)
{
	if (m_pSelectedElements)
	{
		InvalidateElement(m_pSelectedElements);
		m_pSelectedElements->Move(moveSize);
		InvalidateElement(m_pSelectedElements);

		std::vector<CUIElement*> selectedElements;
		m_pSelectedElements->GetAssociatedElements(selectedElements);
		for (size_t i = 0; i < selectedElements.size(); ++i)
			if (selectedElements[i]->GetElementType() == CUIElement::CARD_ELEMENT &&
				((CUICard*)selectedElements[i])->IsLargeSize())
				((CUICard*)selectedElements[i])->ClearPreviousLocation();
	}
}

BOOL CMagicElementManager::HasSelections() const
{
	return m_pSelectedElements && m_pSelectedElements->GetAssociatedElementCount() > (m_bShowSelectionIndicator ? 1 : 0);
}

int CMagicElementManager::GetSelectedCount() const
{
	if (!m_pSelectedElements)
		return 0;

	return m_pSelectedElements->GetAssociatedElementCount() - (m_bShowSelectionIndicator ? 1 : 0);
}

void CMagicElementManager::GetSelectedElements(std::vector<CUIElement*>& elements)
{
	if (!m_pSelectedElements)
		return;

	m_pSelectedElements->GetAssociatedElements(elements);

	if (m_bShowSelectionIndicator)
		for (std::vector<CUIElement*>::iterator i = elements.begin(); i != elements.end(); ++i)
			if (*i == m_pSelectElement)
			{
				elements.erase(i);
				break;
			}
}

void CMagicElementManager::ShiftSelectionBrush(BOOL bUpdate)
{
	if (m_bShowSelectionIndicator && m_pSelectElement)
	{
		m_pSelectElement->ShiftBrush();
		if (bUpdate)
			UpdateElement(m_pSelectElement);
		else
			InvalidateElement(m_pSelectElement);
	}
}

void CMagicElementManager::SelectCard(CCard* pCard)
{
	CUICard* pElement = GetCard(pCard);
	if (pElement)
		SelectElement(pElement);
	else
		ATLASSERT(false);
}

void CMagicElementManager::InvalidateAllSelections()
{
	if (m_pSelectedElements)
		InvalidateElement(m_pSelectedElements);
}

void CMagicElementManager::ShowSelectionIndicator(BOOL bShowSelectionIndicator)
{
	UnselectAllElements();	
	m_bShowSelectionIndicator = bShowSelectionIndicator;
}

CUICard* CMagicElementManager::GetCard(CPoint Point, CUICard* pExcludeThis)
{
	if (m_pSelectedElements)
	{
		std::vector<CUIElement*> elements;
		m_pSelectedElements->GetAssociatedElements(elements, CUIElement::CARD_ELEMENT);
		for (std::vector<CUIElement*>::const_iterator i = elements.begin(); i != elements.end(); ++i)
		{
			if (*i != pExcludeThis &&
				(*i)->PtInElement(Point))
				return (CUICard*)*i;
		}
	}

	CUICard* pCard = (CUICard*)GetElement(Point, CUIElement::CARD_ELEMENT, pExcludeThis);
	if (pCard)
		return pCard;

	return NULL;
}

CUICard* CMagicElementManager::GetCard(CCard* pCard)
{
	for (size_t j = 0; j < m_Elements.size(); ++j)
	{
		CUIElement* pElement = m_Elements[j];
		if (pElement->GetElementType() != CUIElement::CARD_ELEMENT)
			continue;

		CUICard* pUICard = (CUICard*)pElement;
		if (pUICard->GetCard() == pCard)
			return pUICard;
	}
	
	return NULL;
}

void CMagicElementManager::GetAllCardElements(std::vector<CUICard*>& allCards)
{
	for (size_t j = 0; j < m_Elements.size(); ++j)
	{
		CUIElement* pElement = m_Elements[j];
		if (pElement->GetElementType() == CUIElement::CARD_ELEMENT)
		{
			allCards.push_back((CUICard*)pElement);
			continue;
		}

		if (pElement->GetElementType() != CUIElement::GROUP_ELEMENT)
			continue;

		std::vector<CUIElement*> groupedElements;
		pElement->GetAssociatedElements(groupedElements, CUIElement::CARD_ELEMENT);						
		for (size_t i = 0; i < groupedElements.size(); ++i)
			allCards.push_back((CUICard*)groupedElements[i]);
	}
}

void CMagicElementManager::Zoom(CUICard* pCard)
{
	static const bool s_bQuickSwitch = true;

	if (pCard == m_pLargeCard)
		return;

	BOOL bSelected = ElementSelected(pCard);
	if (bSelected)
		UnselectElement(pCard);

	CUICard* pSelect = NULL;
	if (m_pLargeCard && m_pLargeCard->IsLargeSize())
	{
		if (ElementSelected(m_pLargeCard))
		{
			pSelect = m_pLargeCard;
			UnselectElement(m_pLargeCard);
		}

		ChangeElementAltitude(m_pLargeCard, CUIElement::NORMAL_LEVEL);

		InvalidateElement(m_pLargeCard);
		if (s_bQuickSwitch)
		{
			m_pLargeCard->SetToSmallSize();
		}
		else
			AnimateZoom(CardZoom(m_pLargeCard, false));
		InvalidateElement(m_pLargeCard);
	}

	pCard->RememberPreviousLocation();

	InvalidateElement(pCard);
	AnimateZoom(CardZoom(pCard, true));
	InvalidateElement(pCard);

	m_pLargeCard = pCard;

	if (pSelect)
		SelectElement(pSelect);

	if (bSelected)
		SelectElement(m_pLargeCard);
	else
		ChangeElementAltitude(m_pLargeCard, CUIElement::ZOOM_LEVEL);
}

void CMagicElementManager::RemoveZoom()
{
	if (m_pLargeCard && m_pLargeCard->IsLargeSize())
	{
		BOOL bSelected = ElementSelected(m_pLargeCard);
		if (bSelected)
			UnselectElement(m_pLargeCard);

		InvalidateElement(m_pLargeCard);
		AnimateZoom(CardZoom(m_pLargeCard, false));
		InvalidateElement(m_pLargeCard);

		ChangeElementAltitude(m_pLargeCard, CUIElement::NORMAL_LEVEL);

		if (bSelected)
			SelectElement(m_pLargeCard);
	}

	m_pLargeCard = NULL;	
}

void CMagicElementManager::AnimateZoom(CardZoom& cardZoom)
{
	m_pView->UpdateWindow();
	
	CDC* pDC = m_pView->GetDC();

	CPoint scrollPos(m_pView->GetScrollPosition());	

	for (;cardZoom.nSteps > 0; --cardZoom.nSteps)
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);
		clipRgn.CopyRgn(cardZoom.pCard->GetBoundRgn());

		if (cardZoom.nSteps == 1)
		{
			if (cardZoom.bZoom)
				cardZoom.pCard->SetToLargeSize();
			else
				cardZoom.pCard->SetToSmallSize();
		}
		else
		{
			Gdiplus::Size currentSize(cardZoom.pCard->GetBitmapSize());
			currentSize.Width += cardZoom.zoomDelta.cx;
			currentSize.Height += cardZoom.zoomDelta.cy;

			cardZoom.pCard->SetSize(currentSize);
		}

		clipRgn.CombineRgn(&clipRgn, cardZoom.pCard->GetBoundRgn(), RGN_OR);

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
	}

	m_pView->ReleaseDC(pDC);
}

void CMagicElementManager::RefreshCardBitmaps()
{
	std::vector<CUICard*> cardElements;
	GetAllCardElements(cardElements);

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		InvalidateElement(cardElements[i]);
		cardElements[i]->SetToSmallSize();
		InvalidateElement(cardElements[i]);
	}
}

void CMagicElementManager::RefreshCardInfo(BOOL* viewChanged)
{
	CMagicWandView* pView = (CMagicWandView*)m_pView;

	std::vector<CUICard*> cardElements;
	GetAllCardElements(cardElements);

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		InvalidateElement(cardElements[i]);
		if (cardElements[i]->RefreshInfo() && viewChanged)
			viewChanged[pView->GetViewAreaId(cardElements[i]->GetCard())] = TRUE;
		InvalidateElement(cardElements[i]);
	}
}

void CMagicElementManager::AddTapUntapCard(CUICard* pUICard)
{
	// (pUICard->IsTapped() ? 0.0f : 90.0f) : 

	m_TapUntapCards.push_back(std::make_pair(pUICard, pUICard->IsFlipped()? (pUICard->IsTapped() ? 180.0f : 270.0f) : (pUICard->IsTapped() ? 0.0f : 90.0f))); // target angle
}
void CMagicElementManager::AddFlippedCard(CUICard* pUICard)
{
	m_FlippedCards.push_back(std::make_pair(pUICard, pUICard->IsTapped() ? (pUICard->IsFlipped() ? 90.0f : 270.0f) : (pUICard->IsFlipped() ? 0.0f : 180.0f))); // target angle
}

void CMagicElementManager::UpdateTapUntapCards(CDC* pDC, BOOL bStartToFinish)
{
	static const float s_fRotationStep = 15.0f;

	if (bStartToFinish)
		m_pView->UpdateWindow();

	CPoint scrollPos(m_pView->GetScrollPosition());	

	while (m_TapUntapCards.size())
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);

		for (std::list<std::pair<CUICard*, float>>::iterator i = m_TapUntapCards.begin(); i != m_TapUntapCards.end(); )
		{
			clipRgn.CombineRgn(&clipRgn, i->first->GetBoundRgn(), RGN_OR);

			CUICard* pUICard = i->first;

			float fCurrentAngle = pUICard->Rotation();
			if (fCurrentAngle < i->second)
			{
				fCurrentAngle += s_fRotationStep;
				if (fCurrentAngle >= i->second)
				{
					if (i->second == 90.0f)
						pUICard->Tap();
					else
						pUICard->TapFlipped();
					m_TapUntapCards.erase(i++);
				}
				else
				{
					pUICard->Rotate(fCurrentAngle);
					++i;
				}
			}
			else
			{
				fCurrentAngle -= s_fRotationStep;
				if (fCurrentAngle <= i->second)
				{
					if (i->second == 0.0f)
						pUICard->Untap();
					else
						pUICard->UntapFlipped();
					m_TapUntapCards.erase(i++);
				}
				else
				{
					pUICard->Rotate(fCurrentAngle);
					++i;
				}
			}

			clipRgn.CombineRgn(&clipRgn, pUICard->GetBoundRgn(), RGN_OR);
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

void CMagicElementManager::UpdateFlippedCards(CDC* pDC, BOOL bStartToFinish)
{
	static const float s_fRotationStep = 15.0f;

	if (bStartToFinish)
		m_pView->UpdateWindow();

	CPoint scrollPos(m_pView->GetScrollPosition());	

	while (m_FlippedCards.size())
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);

		for (std::list<std::pair<CUICard*, float>>::iterator i = m_FlippedCards.begin(); i != m_FlippedCards.end(); )
		{
			clipRgn.CombineRgn(&clipRgn, i->first->GetBoundRgn(), RGN_OR);

			CUICard* pUICard = i->first;

			float fCurrentAngle = pUICard->Rotation();
			if (fCurrentAngle < i->second)
			{
				fCurrentAngle += s_fRotationStep;
				if (fCurrentAngle >= i->second)
				{
					if (i->second == 180.0f)
						pUICard->Flip();
					else
						pUICard->FlipTapped();

					m_FlippedCards.erase(i++);
				}
				else
				{
					pUICard->Rotate(fCurrentAngle);
					++i;
				}
			}
			else
			{
				fCurrentAngle -= s_fRotationStep;
				if (fCurrentAngle <= i->second)
				{
					if (i->second == 0.0f)
						pUICard->UnFlip();
					else
						pUICard->UnFlipTapped();

					m_FlippedCards.erase(i++);
				}
				else
				{
					pUICard->Rotate(fCurrentAngle);
					++i;
				}
			}

			clipRgn.CombineRgn(&clipRgn, pUICard->GetBoundRgn(), RGN_OR);
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


void CMagicElementManager::UpdateTapUntapCards(BOOL bStartToFinish)
{
	CDC* pDC = m_pView->GetDC();
	UpdateTapUntapCards(pDC, bStartToFinish);
	m_pView->ReleaseDC(pDC);
}

void CMagicElementManager::UpdateFlippedCards(BOOL bStartToFinish)
{
	CDC* pDC = m_pView->GetDC();
	UpdateFlippedCards(pDC, bStartToFinish);
	m_pView->ReleaseDC(pDC);
}

BOOL CMagicElementManager::RefreshLinks()
{
	BOOL bChanged = FALSE;

	// Remove any links with less than 2 associated elements

	// Blocked links are always removed to reconstruct the blocking order
	if (m_BlockedLinks.size())
	{
		bChanged = TRUE;
		for (std::vector<CUILink*>::const_iterator i = m_BlockedLinks.begin(); i != m_BlockedLinks.end(); ++i)
			RemoveElement(*i);
		m_BlockedLinks.clear();
	}

	for (int i = (int)m_EnchantLinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_EnchantLinks[i];
		if (pLink->GetAssociatedElementCount() != 2)
		{
			RemoveElement(pLink);
			m_EnchantLinks.erase(m_EnchantLinks.begin() + i);
			bChanged = TRUE;
		}
	}

	for (int i = (int)m_EquipmentLinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_EquipmentLinks[i];
		if (pLink->GetAssociatedElementCount() != 2)
		{
			RemoveElement(pLink);
			m_EquipmentLinks.erase(m_EquipmentLinks.begin() + i);
			bChanged = TRUE;
		}
	}

	for (int i = (int)m_IsAlsoALinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_IsAlsoALinks[i];
		if (pLink->GetAssociatedElementCount() != 2)
		{
			RemoveElement(pLink);
			m_IsAlsoALinks.erase(m_IsAlsoALinks.begin() + i);
			bChanged = TRUE;
		}
	}

	// Remove links which are no longer valid
	for (int i = (int)m_EnchantLinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_EnchantLinks[i];
		CUICard* pFirstAssoc = (CUICard*)(pLink->GetElement1());
		CUICard* pSecondAssoc = (CUICard*)(pLink->GetElement2());
		CCard* pFirstCard = pFirstAssoc->GetCard();
		CCard* pSecondCard = pSecondAssoc->GetCard();

		BOOL bFound = FALSE;
		if (pFirstCard->GetZoneId() == ZoneId::Battlefield &&
			pSecondCard->GetZoneId() == ZoneId::Battlefield)
			for (int j = 0; j < pFirstCard->GetAbilityCount(); ++j)
			{
				CEnchant* pEnchant = dynamic_cast<CEnchant*>(pFirstCard->GetAbility(j));
				if (pEnchant && (pEnchant->GetEnchantedOnCard() == pSecondCard))
				{
					bFound = TRUE;
					break;
				}
			}

		if (!bFound)
		{
			RemoveElement(pLink);
			m_EnchantLinks.erase(m_EnchantLinks.begin() + i);			
			bChanged = TRUE;
		}
	}

	for (int i = (int)m_EquipmentLinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_EquipmentLinks[i];
		CUICard* pFirstAssoc = (CUICard*)(pLink->GetElement1());
		CUICard* pSecondAssoc = (CUICard*)(pLink->GetElement2());
		CCard* pFirstCard = pFirstAssoc->GetCard();
		CCard* pSecondCard = pSecondAssoc->GetCard();

		BOOL bFound = FALSE;
		if (pFirstCard->GetZoneId() == ZoneId::Battlefield &&
			pSecondCard->GetZoneId() == ZoneId::Battlefield)
			for (int j = 0; j < pFirstCard->GetAbilityCount(); ++j)
			{
				CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pFirstCard->GetAbility(j));
				if (pEquipAbility && (pEquipAbility->GetEquippedOnCreature() == pSecondCard))
				{
					bFound = TRUE;
					break;
				}
			}

		if (!bFound)
		{
			RemoveElement(pLink);
			m_EquipmentLinks.erase(m_EquipmentLinks.begin() + i);			
			bChanged = TRUE;
		}
	}

	for (int i = (int)m_IsAlsoALinks.size() - 1; i >= 0; --i)
	{
		CUILink* pLink = m_IsAlsoALinks[i];
		CUICard* pFirstAssoc = (CUICard*)(pLink->GetElement1());
		CUICard* pSecondAssoc = (CUICard*)(pLink->GetElement2());
		CCard* pFirstCard = pFirstAssoc->GetCard();
		CCard* pSecondCard = pSecondAssoc->GetCard();

		if (pFirstCard->GetIsAlsoA() != pSecondCard)
		{
			RemoveElement(pLink);
			m_IsAlsoALinks.erase(m_IsAlsoALinks.begin() + i);			
			bChanged = TRUE;
		}
	}

	// Add new links
	std::vector<CUICard*> cardElements;
	GetAllCardElements(cardElements);

	for (int i = (int)cardElements.size() - 1; i >= 0; --i)
	{
		CUICard* pUICard = cardElements[i];
		CCard* pCard = pUICard->GetCard();

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
			if (pCreatureCard->IsAttacking())
			{
				const CCountedCardContainer_& blockers(pCreatureCard->GetBlockedBy());

				for (int k = blockers.GetSize() - 1; k >= 0; --k)  	// back - begin() ..... front - end()
				{
					CUICard* pBlocker = GetCard(blockers.GetAt(k));
					if (pBlocker && pBlocker->GetCard()->GetZoneId() == ZoneId::Battlefield && ((CCreatureCard*)pBlocker->GetCard())->IsBlocking())
					{
						CUILink* pUILink = new CUILink(CUILink::BLOCKED, pUICard, pBlocker, _T("Blocked"), RGB(255, 0, 0));
						m_BlockedLinks.push_back(pUILink);
						AddElement(pUILink);
						bChanged = TRUE;
					}
				}
			}
		}

		for (int j = 0; j < pCard->GetAbilityCount(); ++j)
		{
			CEnchant* pEnchant = dynamic_cast<CEnchant*>(pCard->GetAbility(j));
			if (pEnchant)
			{
				CCard* pCard2 = pEnchant->GetEnchantedOnCard();
				if (pCard2 && pCard2->GetZoneId() == ZoneId::Battlefield)
				{
					CUICard* pEnchantedUICard = GetCard(pCard2);

					if (pEnchantedUICard)
					{
						BOOL bFound = FALSE;
						for (size_t i = 0; i < m_EnchantLinks.size(); ++i)
						{
							CUILink* pLink = m_EnchantLinks[i];
							CUICard* pFirstAssoc = (CUICard*)(pLink->GetElement1());
							CUICard* pSecondAssoc = (CUICard*)(pLink->GetElement2());

							if ((pFirstAssoc == pUICard) && (pSecondAssoc == pEnchantedUICard))
							{
								bFound = TRUE;
								break;
							}
						}

						if (!bFound)
						{
							CUILink* pUILink = new CUILink(CUILink::ENCHANTED, pUICard, pEnchantedUICard, _T("Enchanted"), RGB(0, 255, 0));
							m_EnchantLinks.push_back(pUILink);
							AddElement(pUILink);
							bChanged = TRUE;
							break;
						}
					}
				}
			}
			else
			{
				CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbility(j));
				if (pEquipAbility)
				{
					CCard* pCard2 = pEquipAbility->GetEquippedOnCreature();
					if (pCard2 && pCard2->GetZoneId() == ZoneId::Battlefield)
					{
						CUICard* pEquippedUICard = GetCard(pCard2);

						if (pEquippedUICard)
						{
							BOOL bFound = FALSE;
							for (size_t i = 0; i < m_EquipmentLinks.size(); ++i)
							{
								CUILink* pLink = m_EquipmentLinks[i];
								CUICard* pFirstAssoc = (CUICard*)(pLink->GetElement1());
								CUICard* pSecondAssoc = (CUICard*)(pLink->GetElement2());

								if ((pFirstAssoc == pUICard) && (pSecondAssoc == pEquippedUICard))
								{
									bFound = TRUE;
									break;
								}
							}

							if (!bFound)
							{
								CUILink* pUILink = new CUILink(CUILink::EQUIPPED, pUICard, pEquippedUICard, _T("Equipped"), RGB(95, 12, 248));
								m_EquipmentLinks.push_back(pUILink);
								AddElement(pUILink);
								bChanged = TRUE;
								break;
							}
						}
					}
				}
			}
		}

		if (pCard->GetIsAlsoA())
		{
			CUICard* pToken = GetCard(pCard->GetIsAlsoA());
			ATLASSERT(pToken);

			if (pToken)
			{
				BOOL bFound = FALSE;

				for (size_t j = 0; j < m_IsAlsoALinks.size(); ++j)
				{
					CUILink* pLink = m_IsAlsoALinks[j];
					CUIElement* pFirstAssoc = pLink->GetElement1();
					CUIElement* pSecondAssoc = pLink->GetElement2();

					if ((pSecondAssoc == pUICard) && (pFirstAssoc == pToken))
					{
						bFound = TRUE;
						break;
					}
				}

				if (!bFound)
				{
					CUILink* pUILink = new CUILink(CUILink::IS_ALSO_A, pToken, pUICard, _T("Is Also A"), RGB(123, 40, 40));
					m_IsAlsoALinks.push_back(pUILink);
					AddElement(pUILink);
					bChanged = TRUE;
				}
			}
		}
	}

	return bChanged;
}

void CMagicElementManager::GetBlockingElements(CUIElement* pElement, std::vector<CUIElement*>& blockingElements)
{
	for (size_t j = 0; j < m_BlockedLinks.size(); ++j)
	{
		CUILink* pLink = m_BlockedLinks[j];
		CUIElement* pFirstAssoc = pLink->GetElement1();

		if (pFirstAssoc != pElement)
			continue;

		CUIElement* pSecondAssoc = pLink->GetElement2();

		blockingElements.push_back(pSecondAssoc);
	}
}

void CMagicElementManager::GetBlockedElements(CUIElement* pElement, std::vector<CUIElement*>& blockedElements)
{
	for (size_t j = 0; j < m_BlockedLinks.size(); ++j)
	{
		CUILink* pLink = m_BlockedLinks[j];
		CUIElement* pSecondAssoc = pLink->GetElement2();

		if (pSecondAssoc != pElement)
			continue;

		CUIElement* pFirstAssoc = pLink->GetElement1();

		blockedElements.push_back(pFirstAssoc);
	}
}

CUIAvatar* CMagicElementManager::GetAvatar(CPoint Point)
{
	return (CUIAvatar*)GetElement(Point, CUIElement::AVATAR_ELEMENT);
}

void CMagicElementManager::MoveInfoElements()
{
	if (!(m_pLifeText1 || m_pLifeText2 ||
		m_pManaPoolText1 || m_pManaPoolText2 ||
		m_pPhaseText ||
		m_pLibraryIcon1 || m_pLibraryIcon2 ||
		m_pLibraryText1 || m_pLibraryText2 ||
		m_pPhaseIcon1 || m_pPhaseIcon2 ||
		m_pAvatarImage1 || m_pAvatarImage2))
		return;

	CRect ClientRect;
	m_pView->GetClientRect(&ClientRect);
	CPoint ScrollPos(m_pView->GetScrollPosition());

	if (m_pLifeText1)
	{
		CSize LifeSize1 = m_pLifeText1->GetBoundRect().Size();
		InvalidateElement(m_pLifeText1);
		m_pLifeText1->MoveToPt(CPoint(ClientRect.right - LifeSize1.cx - 2, ClientRect.Height() / 2 - LifeSize1.cy - 15) + ScrollPos);
		InvalidateElement(m_pLifeText1);
	}
	
	if (m_pLifeText2)
	{
		CSize LifeSize2 = m_pLifeText2->GetBoundRect().Size();
		InvalidateElement(m_pLifeText2);
		m_pLifeText2->MoveToPt(CPoint(ClientRect.right - LifeSize2.cx - 2, ClientRect.Height() / 2 + 15) + ScrollPos);
		InvalidateElement(m_pLifeText2);
	}

	if (m_pManaPoolText1)
	{
		CSize ManaPoolSize1 = m_pManaPoolText1->GetBoundRect().Size();
		InvalidateElement(m_pManaPoolText1);
		m_pManaPoolText1->MoveToPt(CPoint(ClientRect.right - 180 - ManaPoolSize1.cx, ClientRect.Height() / 2 - ManaPoolSize1.cy - 23) + ScrollPos);
		InvalidateElement(m_pManaPoolText1);
	}

	if (m_pManaPoolText2)
	{
		CSize ManaPoolSize2 = m_pManaPoolText2->GetBoundRect().Size();
		InvalidateElement(m_pManaPoolText2);
		m_pManaPoolText2->MoveToPt(CPoint(ClientRect.right - 180 - ManaPoolSize2.cx, ClientRect.Height() / 2 + 23) + ScrollPos);
		InvalidateElement(m_pManaPoolText2);
	}

	if (m_pPhaseText)
	{
		CSize phaseTextSize = m_pPhaseText->GetBoundRect().Size();
		InvalidateElement(m_pPhaseText);
		m_pPhaseText->MoveToPt(CPoint(ClientRect.right - phaseTextSize.cx - 2, ( ClientRect.Height() - phaseTextSize.cy ) / 2 - 1) + ScrollPos);
		InvalidateElement(m_pPhaseText);
	}

	if (m_pLibraryIcon1)
	{
		CSize LibrarySize1 = m_pLibraryIcon1->GetBoundRect().Size();
		InvalidateElement(m_pLibraryIcon1);
		m_pLibraryIcon1->MoveToPt(CPoint(ClientRect.right - LibrarySize1.cx - 2, ClientRect.Height() / 2 - LibrarySize1.cy - 70) + ScrollPos);
		InvalidateElement(m_pLibraryIcon1);
	}
	
	if (m_pLibraryIcon2)
	{
		CSize LibrarySize2 = m_pLibraryIcon2->GetBoundRect().Size();
		InvalidateElement(m_pLibraryIcon2);
		m_pLibraryIcon2->MoveToPt(CPoint(ClientRect.right - LibrarySize2.cx - 2, ClientRect.Height() / 2 + 70) + ScrollPos);
		InvalidateElement(m_pLibraryIcon2);
	}

	if (m_pLibraryText1)
	{
		CSize LibrarySize1 = m_pLibraryText1->GetBoundRect().Size();
		InvalidateElement(m_pLibraryText1);
		m_pLibraryText1->MoveToPt(CPoint(ClientRect.right - LibrarySize1.cx - 10, ClientRect.Height() / 2 - LibrarySize1.cy - 86) + ScrollPos);
		InvalidateElement(m_pLibraryText1);
	}
	
	if (m_pLibraryText2)
	{
		CSize LibrarySize2 = m_pLibraryText2->GetBoundRect().Size();
		InvalidateElement(m_pLibraryText2);
		m_pLibraryText2->MoveToPt(CPoint(ClientRect.right - LibrarySize2.cx - 10, ClientRect.Height() / 2 + 83) + ScrollPos);
		InvalidateElement(m_pLibraryText2);
	}

	if (m_pPhaseIcon1)
	{
		CSize PhaseIconSize1 = m_pPhaseIcon1->GetBoundRect().Size();
		InvalidateElement(m_pPhaseIcon1);
		m_pPhaseIcon1->MoveToPt(CPoint(ClientRect.right - PhaseIconSize1.cx - 110, ClientRect.Height() / 2 - PhaseIconSize1.cy - 20) + ScrollPos);
		InvalidateElement(m_pPhaseIcon1);
	}
	
	if (m_pPhaseIcon2)
	{
		CSize PhaseIconSize2 = m_pPhaseIcon2->GetBoundRect().Size();
		InvalidateElement(m_pPhaseIcon2);
		m_pPhaseIcon2->MoveToPt(CPoint(ClientRect.right - PhaseIconSize2.cx - 110, ClientRect.Height() / 2 + 20) + ScrollPos);
		InvalidateElement(m_pPhaseIcon2);
	}

	if (m_pAvatarImage1)
	{
		CSize AvatarImageSize1 = m_pAvatarImage1->GetBoundRect().Size();
		InvalidateElement(m_pAvatarImage1);
		m_pAvatarImage1->MoveToPt(CPoint(ClientRect.right - AvatarImageSize1.cx, ClientRect.Height() / 2 - AvatarImageSize1.cy - 120) + ScrollPos);
		InvalidateElement(m_pAvatarImage1);
	}
	
	if (m_pAvatarImage2)
	{
		CSize AvatarImageSize2 = m_pAvatarImage2->GetBoundRect().Size();
		InvalidateElement(m_pAvatarImage2);
		m_pAvatarImage2->MoveToPt(CPoint(ClientRect.right - AvatarImageSize2.cx, ClientRect.Height() / 2 + 120) + ScrollPos);
		InvalidateElement(m_pAvatarImage2);
	}
}

void CMagicElementManager::UpdateAvatarImage1(CGdipBitmap bitmap, BOOL bComputer, BOOL bSwitch)
{
	if (bComputer)
	{
		m_ComputerAvatarImage = bitmap;
		if (bSwitch)
			m_AvatarImage1 = m_ComputerAvatarImage;
	}
	else
	{
		m_RemoteAvatarImage = bitmap;
		if (bSwitch)
			m_AvatarImage1 = m_RemoteAvatarImage;
	}

	if (m_pAvatarImage1)
	{
		if (!m_pAvatarImage1->Hidden())
			InvalidateElement(m_pAvatarImage1);
		if (bSwitch)
			m_pAvatarImage1->SetBitmap(m_AvatarImage1);
		m_pAvatarImage1->RefreshBitmap();
		if (!m_pAvatarImage1->Hidden())
			InvalidateElement(m_pAvatarImage1);
	}
}

void CMagicElementManager::UpdateAvatarImage2(CGdipBitmap bitmap)
{
	m_AvatarImage2 = bitmap;

	if (m_pAvatarImage2)
	{
		if (!m_pAvatarImage2->Hidden())
			InvalidateElement(m_pAvatarImage2);
		m_pAvatarImage2->RefreshBitmap();
		if (!m_pAvatarImage2->Hidden())
			InvalidateElement(m_pAvatarImage2);
	}
}

void CMagicElementManager::UpdateAvatarImageAlpha(CGame* pGame)
{
	if (m_pAvatarImage1 && !m_pAvatarImage1->Hidden())
	{
		if (!pGame->IsThinking())
		{
			if (pGame->GetPlayerIndex(pGame->GetPriorityPlayer()) == 0)
			{
				if (!m_bFlashingAvatarImage1)
				{
					m_bFlashingAvatarImage1 = true;
					m_pAvatarImage1->SetAlphaIncreasing(true);
				}
			}
			else
				m_bFlashingAvatarImage1 = false;
		}

		if (m_bFlashingAvatarImage1)
		{
			m_pAvatarImage1->CycleAlphaValue(0.4f, 1.0f, 0.05f);
			UpdateElement(m_pAvatarImage1);
		}
		else
		if (m_pAvatarImage1->GetAlphaValue() != 0.6f)
		{
			m_pAvatarImage1->SetAlphaValue(0.6f);
			InvalidateElement(m_pAvatarImage1);
		}
	}

	if (m_pAvatarImage2 && !m_pAvatarImage2->Hidden())
	{
		if (!pGame->IsThinking())
		{
			if (pGame->GetPlayerIndex(pGame->GetPriorityPlayer()) == 1)
			{
				if (!m_bFlashingAvatarImage2)
				{
					m_bFlashingAvatarImage2 = true;
					m_pAvatarImage2->SetAlphaIncreasing(true);
				}
			}
			else
				m_bFlashingAvatarImage2 = false;
		}

		if (m_bFlashingAvatarImage2)
		{
			m_pAvatarImage2->CycleAlphaValue(0.4f, 1.0f, 0.05f);
			UpdateElement(m_pAvatarImage2);
		}
		else
		if (m_pAvatarImage2->GetAlphaValue() != 0.6f)
		{
			m_pAvatarImage2->SetAlphaValue(0.6f);
			InvalidateElement(m_pAvatarImage2);
		}
	}
}

void CMagicElementManager::UpdateInfoElements(CGame* pGame,
										BOOL bShowLife,
										COLORREF lifeTextColor,
										BOOL bShowPool,
										BOOL bShowPhaseText,
										LPCTSTR strPhaseText,
										COLORREF phaseTextColor,
										BOOL bShowPhaseIcon,
										BOOL bShowLibraryCardCount,
										COLORREF libraryTextColor,
										BOOL bShowAvatarImage,
										int nLocalPlayerIndex)
{
	if (!pGame)
		return;

	if (bShowLife)
	{
		if (!m_pLifeText1)
		{
			m_pLifeText1 = new CUIText(CPoint(0, 0));
			m_pLifeText1->DropShadow(TRUE, 3, 100, 0.25f);
			m_pLifeText1->UseDefaultFrame(TRUE, TRUE, 1.0f, 0.05f);
			AddElement(m_pLifeText1);
		}
		else
			if (m_pLifeText1->Hidden())
				m_pLifeText1->Show();

		if (!m_pLifeText2)
		{
			m_pLifeText2 = new CUIText(CPoint(0, 0));
			m_pLifeText2->DropShadow(TRUE, 3, 100, 0.25f);
			m_pLifeText2->UseDefaultFrame(TRUE, TRUE, 1.0f, 0.07f);
			AddElement(m_pLifeText2);
		}
		else
			if (m_pLifeText2->Hidden())
				m_pLifeText2->Show();

		CString strLife;
		strLife.Format(_T("%d"), pGame->GetPlayer(0)->GetLife());
		if (strLife != m_pLifeText1->GetText())
		{
			InvalidateElement(m_pLifeText1);
			m_pLifeText1->SetText(strLife, pGame->GetPlayer(0)->GetLife() < Life(10) ? RGB(255, 0, 0) : lifeTextColor,
				CUIText::LargeFont);
			InvalidateElement(m_pLifeText1);
		}

		strLife.Format(_T("%d"), pGame->GetPlayer(1)->GetLife());
		if (strLife != m_pLifeText2->GetText())
		{
			InvalidateElement(m_pLifeText2);
			m_pLifeText2->SetText(strLife, pGame->GetPlayer(1)->GetLife() < Life(10) ? RGB(255, 0, 0) : lifeTextColor,
				CUIText::LargeFont);
			InvalidateElement(m_pLifeText2);
		}
	}
	else
	{
		if (m_pLifeText1)
			m_pLifeText1->Hide();

		if (m_pLifeText2)
			m_pLifeText2->Hide();
	}

	if (bShowPool)
	{
		if (!m_pManaPoolText1)
		{
			m_pManaPoolText1 = new CUIText(CPoint(0, 0));
			AddElement(m_pManaPoolText1);
		}
		else
			if (m_pManaPoolText1->Hidden())
				m_pManaPoolText1->Show();

		if (!m_pManaPoolText2)
		{
			m_pManaPoolText2 = new CUIText(CPoint(0, 0));
			AddElement(m_pManaPoolText2);
		}
		else
			if (m_pManaPoolText2->Hidden())
				m_pManaPoolText2->Show();
	
		CString strPool;
		strPool = _T("{") + pGame->GetPlayer(0)->GetManaPool().ToString() + _T("}");
		if (strPool != m_pManaPoolText1->GetText())
		{
			InvalidateElement(m_pManaPoolText1);
			m_pManaPoolText1->SetText(strPool, RGB(0, 255, 0), CUIText::LargeFont);
			InvalidateElement(m_pManaPoolText1);
		}

		strPool = _T("{") + pGame->GetPlayer(1)->GetManaPool().ToString() + _T("}");
		if (strPool != m_pManaPoolText2->GetText())
		{
			InvalidateElement(m_pManaPoolText2);
			m_pManaPoolText2->SetText(strPool, RGB(0, 255, 0), CUIText::LargeFont);
			InvalidateElement(m_pManaPoolText2);
		}
	}
	else
	{
		if (m_pManaPoolText1)
			m_pManaPoolText1->Hide();

		if (m_pManaPoolText2)
			m_pManaPoolText2->Hide();
	}

	if (bShowPhaseText)
	{
		if (!m_pPhaseText)
		{
			m_pPhaseText = new CUIText(CPoint(0, 0));
			m_pPhaseText->DropShadow(TRUE, 2, 200, 0.5f);
			m_pPhaseText->UseDefaultFrame(TRUE, FALSE, 1.5f);
			AddElement(m_pPhaseText);
		}
		else
			if (m_pPhaseText->Hidden())
				m_pPhaseText->Show();

		if (strPhaseText != m_pPhaseText->GetText())
		{
			InvalidateElement(m_pPhaseText);
			m_pPhaseText->SetText(strPhaseText, phaseTextColor, CUIText::SmallFont);
			InvalidateElement(m_pPhaseText);
		}
	}
	else
	{
		if (m_pPhaseText)
			m_pPhaseText->Hide();
	}

	if (bShowLibraryCardCount)
	{
		if (!m_pLibraryText1)
		{
			m_pLibraryText1 = new CUIText(CPoint(0, 0));
			m_pLibraryText1->DropShadow(TRUE, 1, 200, 0.5f);
			AddElement(m_pLibraryText1);
		}
		else
			if (m_pLibraryText1->Hidden())
				m_pLibraryText1->Show();

		if (!m_pLibraryText2)
		{
			m_pLibraryText2 = new CUIText(CPoint(0, 0));
			m_pLibraryText2->DropShadow(TRUE, 1, 200, 0.5f);
			AddElement(m_pLibraryText2);
		}
		else
			if (m_pLibraryText2->Hidden())
				m_pLibraryText2->Show();

		if (!m_pLibraryIcon1)
		{
			m_pLibraryIcon1 = new CUIImage(CPoint(0, 0));
			m_pLibraryIcon1->SetBitmap(CGdipBitmap(g_pCoreApp->GetBitmapPath() + _T("\\Library.png")));
			AddElement(m_pLibraryIcon1);
			ShuffleElementTo(m_pLibraryIcon1, m_pLibraryText1);
		}
		else
			if (m_pLibraryIcon1->Hidden())
				m_pLibraryIcon1->Show();

		if (!m_pLibraryIcon2)
		{
			m_pLibraryIcon2 = new CUIImage(CPoint(0, 0));
			m_pLibraryIcon2->SetBitmap(CGdipBitmap(g_pCoreApp->GetBitmapPath() + _T("\\Library.png")));
			AddElement(m_pLibraryIcon2);
			ShuffleElementTo(m_pLibraryIcon2, m_pLibraryText2);
		}
		else
			if (m_pLibraryIcon2->Hidden())
				m_pLibraryIcon2->Show();

		CString strLibrary;
		strLibrary.Format(_T("%d"), pGame->GetPlayer(0)->GetZoneById(ZoneId::Library)->GetSize());
		if (strLibrary != m_pLibraryText1->GetText())
		{
			InvalidateElement(m_pLibraryText1);
			m_pLibraryText1->SetText(strLibrary, pGame->GetPlayer(0)->GetZoneById(ZoneId::Library)->GetSize() < 10 ? RGB(255, 0, 0) : libraryTextColor, CUIText::SmallFont);
			InvalidateElement(m_pLibraryText1);
		}

		strLibrary.Format(_T("%d"), pGame->GetPlayer(1)->GetZoneById(ZoneId::Library)->GetSize());
		if (strLibrary != m_pLibraryText2->GetText())
		{
			InvalidateElement(m_pLibraryText2);
			m_pLibraryText2->SetText(strLibrary, pGame->GetPlayer(1)->GetZoneById(ZoneId::Library)->GetSize() < 10 ? RGB(255, 0, 0) : libraryTextColor, CUIText::SmallFont);
			InvalidateElement(m_pLibraryText2);
		}
	}
	else
	{
		if (m_pLibraryIcon1)
			m_pLibraryIcon1->Hide();

		if (m_pLibraryIcon2)
			m_pLibraryIcon2->Hide();

		if (m_pLibraryText1)
			m_pLibraryText1->Hide();
	
		if (m_pLibraryText2)
			m_pLibraryText2->Hide();
	}

	if (bShowPhaseIcon)
	{
		if (!m_pPhaseIcon1)
		{
			m_pPhaseIcon1 = new CUIImage(CPoint(0, 0));
			AddElement(m_pPhaseIcon1);
		}
		else
			if (m_pPhaseIcon1->Hidden())
				m_pPhaseIcon1->Show();

		if (!m_pPhaseIcon2)
		{
			m_pPhaseIcon2 = new CUIImage(CPoint(0, 0));
			AddElement(m_pPhaseIcon2);
		}
		else
			if (m_pPhaseIcon2->Hidden())
				m_pPhaseIcon2->Show();

		CGdipBitmap bitmap;
		switch(pGame->GetCurrentNode()->GetNodeId().Get())
		{
		case NodeId::BeginningStep:
		case NodeId::UntapStep: bitmap = m_UntapImage; break;
		case NodeId::UpkeepStep: bitmap = m_UpkeepImage; break;
		case NodeId::DrawStep1:
		case NodeId::DrawStep2: bitmap = m_DrawImage; break;
		case NodeId::MainPhaseStep: bitmap = m_MainImage; break;
		case NodeId::BeginningOfCombatStep: bitmap = m_BOCImage; break;
		case NodeId::DeclareAttackersStep1:
		case NodeId::DeclareAttackersStep2: bitmap = m_DeclareAttackersImage; break;
		case NodeId::DeclareBlockersStep1:
		case NodeId::DeclareBlockersStep2: bitmap = m_DeclareBlockersImage; break;
		case NodeId::CombatDamageStep1a:
		case NodeId::CombatDamageStep1b:
		case NodeId::CombatDamageStep2a:
		case NodeId::CombatDamageStep2b: bitmap = m_CombatDamageImage; break;
		case NodeId::EndOfCombatStep: bitmap = m_EOCImage; break;
		case NodeId::EndStep:
		case NodeId::CleanupStep1:
		case NodeId::CleanupStep2: bitmap = m_EOTImage; break;
		}

		CGdipBitmap bitmapIcon;
		if (pGame->GetPlayerIndex(pGame->GetActivePlayer()) == 0)
			bitmapIcon = bitmap;

		if (bitmapIcon != m_pPhaseIcon1->GetBitmap())
		{
			InvalidateElement(m_pPhaseIcon1);
			if (!bitmapIcon.IsValid())
				m_pPhaseIcon1->Reset();
			else
				m_pPhaseIcon1->SetBitmap(bitmapIcon);
			InvalidateElement(m_pPhaseIcon1);
		}

		if (pGame->GetPlayerIndex(pGame->GetActivePlayer()) == 1)
			bitmapIcon = bitmap;
		else
			bitmapIcon.Reset();

		if (bitmapIcon != m_pPhaseIcon2->GetBitmap())
		{
			InvalidateElement(m_pPhaseIcon2);
			if (!bitmapIcon.IsValid())
				m_pPhaseIcon2->Reset();
			else
				m_pPhaseIcon2->SetBitmap(bitmapIcon);
			InvalidateElement(m_pPhaseIcon2);
		}
	}
	else
	{
		if (m_pPhaseIcon1)
			m_pPhaseIcon1->Hide();

		if (m_pPhaseIcon2)
			m_pPhaseIcon2->Hide();
	}

	if (bShowAvatarImage)
	{
		if (!m_pAvatarImage1)
		{
			CPlayer* pOpponent = pGame->GetPlayer(0);
			m_pAvatarImage1 = new CUIAvatar(pOpponent, m_AvatarImage1, CPoint(0, 0));
			AddElement(m_pAvatarImage1);
		}
		else
			if (m_pAvatarImage1->Hidden())
				m_pAvatarImage1->Show();

		if (!m_pAvatarImage2)
		{
			CPlayer* pPlayer = pGame->GetPlayer(nLocalPlayerIndex);
			m_pAvatarImage2 = new CUIAvatar(pPlayer, m_AvatarImage2, CPoint(0, 0));
			AddElement(m_pAvatarImage2);
		}
		else
			if (m_pAvatarImage2->Hidden())
				m_pAvatarImage2->Show();

		if (m_pAvatarImage1->GetBitmap() != m_AvatarImage1)
		{
			InvalidateElement(m_pAvatarImage1);
			m_pAvatarImage1->SetBitmap(m_AvatarImage1);
			m_pAvatarImage1->SetAlphaValue(0.7f);
			InvalidateElement(m_pAvatarImage1);
		}
		m_bFlashingAvatarImage1 = pGame->GetPlayerIndex(pGame->GetPriorityPlayer()) == 0;

		if (m_pAvatarImage2->GetBitmap() != m_AvatarImage2)
		{
			InvalidateElement(m_pAvatarImage2);
			m_pAvatarImage2->SetBitmap(m_AvatarImage2);
			m_pAvatarImage2->SetAlphaValue(0.7f);
			InvalidateElement(m_pAvatarImage2);
		}
		m_bFlashingAvatarImage2 = pGame->GetPlayerIndex(pGame->GetPriorityPlayer()) == 1;
	}
	else
	{
		if (m_pAvatarImage1)
			m_pAvatarImage1->Hide();
		
		if (m_pAvatarImage2)
			m_pAvatarImage2->Hide();
	}

	MoveInfoElements();
}

CardType CMagicElementManager::GetElementCardColor(CUIElement* pElement) const
{
	if (pElement->GetElementType() != CUIElement::CARD_ELEMENT)
		return CardType::Misc;

	CUICard* pCard = (CUICard*)pElement;
	if (pCard->IsFaceDown())
		return CardType::Misc;

	CCardEntry* pCardEntry = pCard->GetCardEntry();

	CardType cardColor = pCardEntry->GetCardType() & CardType::_ColorMask;
	if (pCardEntry->GetRarity() == RarityType::BasicLand)
	{
		if (pCardEntry->GetCardName().Left(6) == _T("Plains"))
			cardColor |= CardType::White;
		else
		if (pCardEntry->GetCardName().Left(5) == _T("Swamp"))
			cardColor |= CardType::Black;
		else
		if (pCardEntry->GetCardName().Left(6) == _T("Forest"))
			cardColor |= CardType::Green;
		else
		if (pCardEntry->GetCardName().Left(6) == _T("Island"))
			cardColor |= CardType::Blue;
		else
		if (pCardEntry->GetCardName().Left(8) == _T("Mountain"))
			cardColor |= CardType::Red;
	}
	else
		if ((pCardEntry->GetCardType() & CardType::Artifact).Any())
			cardColor |= CardType::Artifact;

	return cardColor;
}
