#pragma once

#include "ElementManager.h"
#include "UIElement.h"
#include "UICard.h"
#include "UISelection.h"
#include "UICardTip.h"
#include "UILink.h"
#include "UIText.h"
#include "UIImage.h"
#include "UIAvatar.h"
#include "UIElementGroup.h"

//____________________________________________________________________________
//
// CMagicElementManager
//

class CMagicElementManager : public CElementManager
{
public:
	CMagicElementManager(CScrollView* pView);

	void Reset();

	// Selections

	void SelectElement(CUIElement* pElement);
	void SelectElements(CRect selectionRect);

	void UnselectElement(CUIElement* pElement);
	void UnselectAllElements();
	BOOL ElementSelected(CUIElement* pElement) const;
	void MoveSelections(CSize moveSize);

	BOOL HasSelections() const;
	int GetSelectedCount() const;
	void GetSelectedElements(std::vector<CUIElement*>& elements);
	void ShiftSelectionBrush(BOOL bUpdate);

	void SelectCard(CCard* pCard);
	void InvalidateAllSelections();

	void ShowSelectionIndicator(BOOL bShowSelectionIndicator);

	// Cards

	CUICard* GetCard(CPoint Point, CUICard* pExcludeThis = NULL);
	CUICard* GetCard(CCard* pCard);

	void GetAllCardElements(std::vector<CUICard*>& allCards);

	void Zoom(CUICard* pCard);
	void RemoveZoom();

	void RefreshCardBitmaps();
	void RefreshCardInfo(BOOL* viewChanged);

	void AddTapUntapCard(CUICard* pUICard);
	void AddFlippedCard(CUICard* pUICard);
	void UpdateTapUntapCards(CDC* pDC, BOOL bStartToFinish);
	void UpdateTapUntapCards(BOOL bStartToFinish);
	void UpdateFlippedCards(CDC* pDC, BOOL bStartToFinish);
	void UpdateFlippedCards(BOOL bStartToFinish);


	// Links

	BOOL RefreshLinks();
	const std::vector<CUILink*>& GetBlockedLinks() const	{ return m_BlockedLinks; }
	const std::vector<CUILink*>& GetEnchantLinks() const	{ return m_EnchantLinks; }
	const std::vector<CUILink*>& GetIsAlsoALinks() const	{ return m_IsAlsoALinks; }
	const std::vector<CUILink*>& GetEquipmentLinks() const	{ return m_EquipmentLinks; }

	void GetBlockingElements(CUIElement* pElement, std::vector<CUIElement*>& blockingElements);
	void GetBlockedElements(CUIElement* pElement, std::vector<CUIElement*>& blockedElements);

	// Information

	CUIAvatar* GetAvatar(CPoint Point);
	void MoveInfoElements();

	void UpdateAvatarImage1(CGdipBitmap bitmap, BOOL bComputer, BOOL bSwitch);
	void UpdateAvatarImage2(CGdipBitmap bitmap);

	void UpdateAvatarImageAlpha(CGame* pGame);

	void UpdateInfoElements(CGame* pGame,
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
							int nLocalPlayerIndex);

protected:
	struct CardZoom
	{
		CardZoom(CUICard* _pCard, bool _bZoom)
			: pCard(_pCard)
			, bZoom(_bZoom)
		{
			Gdiplus::Size fromCardSize(bZoom ? pCard->GetBitmapSize() : Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight));
			Gdiplus::Size toCardSize(bZoom ? Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight) : CCardStore::GetInstance()->GetSmallCardSize());

			int nDistance = MAX(abs(toCardSize.Width - fromCardSize.Width), abs(toCardSize.Height - fromCardSize.Width));
			nSteps = nDistance / 20;
			if (nSteps < 1)
				nSteps = 1;
			else
				if (nSteps > 2)
					nSteps = 2;

			zoomDelta.cx = (toCardSize.Width - fromCardSize.Width) / nSteps;
			zoomDelta.cy = (toCardSize.Height - fromCardSize.Height) / nSteps;
		}

		CUICard* pCard;
		int nSteps;
		CSize zoomDelta;
		bool bZoom;
	};

	CardType GetElementCardColor(CUIElement* pElement) const;
	void AnimateZoom(CardZoom& cardZoom);

	CUISelection*			m_pSelectElement;
	CUIElementGroup*		m_pSelectedElements;

	CUICard*				m_pLargeCard;

	BOOL					m_bShowSelectionIndicator;

	std::vector<CUILink*>	m_BlockedLinks;
	std::vector<CUILink*>	m_EnchantLinks;
	std::vector<CUILink*>	m_IsAlsoALinks;
	std::vector<CUILink*>	m_EquipmentLinks;

	CUIText*		m_pLifeText1;
	CUIText*		m_pLifeText2;
	CUIText*		m_pManaPoolText1;
	CUIText*		m_pManaPoolText2;
	CUIText*		m_pPhaseText;
	CUIText*		m_pLibraryText1;
	CUIText*		m_pLibraryText2;
	CUIImage*		m_pLibraryIcon1;
	CUIImage*		m_pLibraryIcon2;
	CUIImage*		m_pPhaseIcon1;
	CUIImage*		m_pPhaseIcon2;
	CUIAvatar*		m_pAvatarImage1;
	CUIAvatar*		m_pAvatarImage2;
	CGdipBitmap		m_UntapImage;
	CGdipBitmap		m_UpkeepImage;
	CGdipBitmap		m_DrawImage;
	CGdipBitmap		m_MainImage;
	CGdipBitmap		m_BOCImage;
	CGdipBitmap		m_DeclareAttackersImage;
	CGdipBitmap		m_DeclareBlockersImage;
	CGdipBitmap		m_CombatDamageImage;
	CGdipBitmap		m_EOCImage;
	CGdipBitmap		m_EOTImage;
	CGdipBitmap		m_ComputerAvatarImage;
	CGdipBitmap		m_RemoteAvatarImage;
	CGdipBitmap		m_AvatarImage1;
	CGdipBitmap		m_AvatarImage2;

	BOOL			m_bFlashingAvatarImage1;
	BOOL			m_bFlashingAvatarImage2;

	std::list<std::pair<CUICard*, float>> m_TapUntapCards;
	std::list<std::pair<CUICard*, float>> m_FlippedCards;
};
