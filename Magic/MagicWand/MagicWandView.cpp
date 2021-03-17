// MagicWandView.cpp : implementation of the CMagicWandView class
//

#include "stdafx.h"
#include "MagicWand.h"
#include "MainFrm.h"
#include "MagicWandDoc.h"
#include "MagicWandView.h"
#include "GameThread.h"
#include "LoadCardStoreDialog.h"
#include "StartDialog.h"
#include "GameSettingsDialog.h"
#include "DeckDialog.h"
#include "CardDialog.h"
#include "OrderCardDialog.h"
#include "UsagePatternDialog.h"
#include "Resource.h"
#include "UsageAbilityDialog.h"
#include "ApplicationSettingsDialog.h"
#include "AppearanceDialog.h"
#include "GameSummaryDlg.h"

#define new DEBUG_NEW


//_____________________________________________________________________________
//
// CMagicWandView
//

const double CMagicWandView::s_ViewPercentageLands = 25.0 / 100.0;
const double CMagicWandView::s_ViewPercentageOthers = 20.0 / 100.0;
const double CMagicWandView::s_ViewPercentageCreatures = 40.0 / 100.0;
const double CMagicWandView::s_ViewPercentageStandingCreatures = 15.0 / 100.0;
//const int CMagicWandView::s_nTopRowBaseHeight = nSmallCardHeight / 5;
const DWORD CMagicWandView::s_dwGameThreadTimeOut = 5000;

IMPLEMENT_DYNCREATE(CMagicWandView, CScrollView)

CMagicWandView::CMagicWandView()
	: m_ElementManager(this)
	, m_pContextMenuCard(NULL)
	, m_hUpdateCompleted(CreateEvent(NULL, FALSE, FALSE, NULL))
	, m_dwBoardSize(0)
	, m_bShowSelectionIndicator(TRUE)
	, m_bAnimatedCardMovement(TRUE)
	, m_bDblClkZoom(FALSE)
	, m_bAutoZoom(TRUE)
	, m_bShowLife(TRUE)
	, m_bShowPool(TRUE)
	, m_bShowPhaseText(TRUE)
	, m_bShowPhaseIcon(TRUE)
	, m_bShowLibraryCardCount(TRUE)
	, m_bShowAvatarImage(TRUE)
	, m_bViewGraveyard1(TRUE)
	, m_bViewGraveyard2(TRUE)
	, m_bViewHand1(TRUE)
	, m_bCenterZones(TRUE)
	, m_bAlwaysStackLands(TRUE)
	, m_LifeTextColor(RGB(0, 120, 240))
	, m_LibraryTextColor(RGB(0, 128, 255))
	, m_PhaseTextColor(RGB(222, 156, 18))
	, m_pHighlightedCard(NULL)
	, m_pHighlightedAvatar(NULL)
	, m_CardTipPoint(0, 0)
	, m_bMoving(FALSE)
	, m_bMoved(FALSE)
	, m_FromPt(0,0)
	, m_ToPt(0,0)
	, m_PreviousCardPt(0, 0)
	, m_pGameThread(NULL)
	, m_nBeginningCombat(-1)
	, m_nDefaultMove(-1)
	, m_strUserName(_T("User"))
	, m_strComputerPlayerName(_T("Computer"))
	, m_nLocalPlayerIndex(-1)
	, m_bSpeech(TRUE)
	, m_bSpeakOpening(TRUE)
	, m_bDecideNow(false)
	, m_dwMaxDuration(CGame::s_dwDefaultMaxDuration)
	, m_bCanDecideNow(false)
	, m_bWithComputer(TRUE)
	, m_bExtraCareful(TRUE)
	, m_bOverkill(TRUE)
	, m_bConservative(FALSE)
	, m_bBoostProcess(FALSE)
{
}

CMagicWandView::~CMagicWandView()
{
}

#ifdef _MY_DEBUG
CMagicWandDoc* CMagicWandView::GetDocument() const // non-debug version is inline
{
	ATLASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMagicWandDoc)));
	return (CMagicWandDoc*)m_pDocument;
}
#endif //_MY_DEBUG

void CMagicWandView::ArrangeCards(BOOL bArrangeRow0, BOOL bArrangeRow1, BOOL bArrangeRow2, BOOL bArrangeRow3, BOOL bDisableAnimate)
{
#ifdef _MY_DEBUG
	/*
	DWORD dwTimeStarted = GetTickCount();
	*/
#endif

	int nSmallCardWidth = CCardStore::GetInstance()->GetSmallCardSize().Width;
	int nSmallCardHeight = CCardStore::GetInstance()->GetSmallCardSize().Height;
	int nCardSpacing = nSmallCardHeight / 20;

	RemoveSelections();

	if (!bArrangeRow0 && !bArrangeRow1 && !bArrangeRow2 && !bArrangeRow3)
	{
#ifdef _MY_DEBUG
		/*
		DWORD dwTimeEnded = GetTickCount();
		ATLTRACE(_T("ArrangeCards(): Time: %d milliseconds\n"), dwTimeEnded - dwTimeStarted);
		*/
#endif
		return;
	}

	// Set up arrangement data

	/*
		ROW 0: HAND1(1)										GRAVEYARD1(0)

		ROW 1: LAND1(3)	OTHER1(2)	STANDING_CREATURE1(1)	CREATURE1(0)	

		ROW 2: LAND2(3)	OTHER2(2)	STANDING_CREATURE2(1)	CREATURE2(0)	

		ROW 3: HAND2(1)										GRAVEYARD2(0)
	*/

	ArrangementData Data[VIEW_AREA_COUNT];

	Data[VIEW_GRAVEYARD1].bArrange = bArrangeRow0;
	Data[VIEW_HAND1].bArrange = bArrangeRow0;
	Data[VIEW_STANDING_CREATURE1].bArrange = bArrangeRow1;
	Data[VIEW_CREATURE1].bArrange = bArrangeRow1;
	Data[VIEW_OTHER1].bArrange = bArrangeRow1;
	Data[VIEW_LAND1].bArrange = bArrangeRow1;

	Data[VIEW_GRAVEYARD2].bArrange = bArrangeRow3;
	Data[VIEW_HAND2].bArrange = bArrangeRow3;
	Data[VIEW_STANDING_CREATURE2].bArrange = bArrangeRow2;
	Data[VIEW_CREATURE2].bArrange = bArrangeRow2;
	Data[VIEW_OTHER2].bArrange = bArrangeRow2;
	Data[VIEW_LAND2].bArrange = bArrangeRow2;

	Data[VIEW_HAND1].bVisible = m_bViewHand1;
	Data[VIEW_GRAVEYARD1].bVisible = m_bViewGraveyard1;
	Data[VIEW_GRAVEYARD2].bVisible = m_bViewGraveyard2;

	// Find all stacked and anchor cards

	std::map<CUIElement*, CUIElement*> allLinks;

	const std::vector<CUILink*>& enchantLinks(m_ElementManager.GetEnchantLinks());
	for (size_t i = 0; i < enchantLinks.size(); ++i)
		allLinks[enchantLinks[i]->GetElement1()] = enchantLinks[i]->GetElement2();

	const std::vector<CUILink*>& equipmentLinks(m_ElementManager.GetEquipmentLinks());
	for (size_t i = 0; i < equipmentLinks.size(); ++i)
		allLinks[equipmentLinks[i]->GetElement1()] = equipmentLinks[i]->GetElement2();

	const std::vector<CUILink*>& isAlsoALinks(m_ElementManager.GetIsAlsoALinks());
	for (size_t i = 0; i < isAlsoALinks.size(); ++i)
		allLinks[isAlsoALinks[i]->GetElement1()] = isAlsoALinks[i]->GetElement2();

	std::map<CUIElement*, CUIElement*> stackedCards; // stack cards -> anchor cards
	std::set<CUIElement*> anchorCards;
	std::map<CUIElement*, std::vector<CUIElement*>> blockingCreatures; // attacker -> blockers
	std::set<CUIElement*> allBlockers;

	for (std::map<CUIElement*, CUIElement*>::const_iterator i = allLinks.begin(); i != allLinks.end(); ++i)
	{
		CUIElement* pStackedCard = i->first;
		CUIElement* pAnchorCard = i->second;

		do
		{
			std::map<CUIElement*, CUIElement*>::const_iterator j = allLinks.find(pAnchorCard);
			if (j == allLinks.end())
				break;

			pAnchorCard = j->second;

		} while (true);

		stackedCards[pStackedCard] = pAnchorCard;
		anchorCards.insert(pAnchorCard);
	}

	// Count cards

	std::vector<CUICard*> cardElements;
	m_ElementManager.GetAllCardElements(cardElements);

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		CUIElement* pElement = cardElements[i];

		std::vector<CUIElement*> blockedElements;
		m_ElementManager.GetBlockedElements(pElement, blockedElements);
		if (blockedElements.size())
			continue; // blocker, remove from normal layout and put in front of attacker later

		std::vector<CUIElement*> blockingElements;
		m_ElementManager.GetBlockingElements(pElement, blockingElements);

		if (blockingElements.size())
		{
			// Attacker, remove multi-blockers already blocking another attacker

			for (int j = (int)blockingElements.size() - 1; j >= 0; --j)
			{
				if (allBlockers.count(blockingElements[j]))
				{
					blockingElements.erase(blockingElements.begin() + j);
					continue;
				}

				allBlockers.insert(blockingElements[j]);
			}
			
			if (blockingElements.size())
			{
				blockingCreatures[pElement] = blockingElements;

				// Now make sure the blockers are stacked in the blocking order

				for (int j = 0; j < (int)blockingElements.size() - 1; ++j)
					m_ElementManager.ShuffleElementTo(blockingElements[j], blockingElements[j + 1]);
			}
		}

		if (stackedCards.count(pElement))
			continue;

		++(Data[pElement->GetElementData()].nCardCount);
	}

	// Establish view zones and card flows

	CRect viewRect = GetViewRect();
	int nViewWidth = viewRect.Width();
	int nViewHeight = viewRect.Height();

	int nTopHeight = (Data[VIEW_HAND1].bVisible || Data[VIEW_GRAVEYARD1].bVisible) ? 
		nSmallCardHeight / 5 : 0;

	std::list<CPoint> extraRows;
	int nExtraVertialSpace = nViewHeight - nTopHeight - nCardSpacing - 3 * (nSmallCardHeight + nCardSpacing);
	int nExtraRows = 0;
	if (nExtraVertialSpace > nSmallCardHeight + nCardSpacing)
		nExtraRows = nExtraVertialSpace / (nSmallCardHeight + nCardSpacing);
	
	if (bArrangeRow0)
	{
		Data[VIEW_HAND1].rectArea =
			CRect(
				CPoint(nCardSpacing, nTopHeight - nSmallCardHeight), 
				CSize(nViewWidth - 2 * nCardSpacing +
					(Data[VIEW_GRAVEYARD1].bVisible ? - 2 * nCardSpacing - nSmallCardWidth : 0),
					nViewHeight - nCardSpacing + nSmallCardWidth - nTopHeight));

		Data[VIEW_HAND1].ptCurrent = Data[VIEW_HAND1].rectArea.TopLeft();

		AreaWidthCalculation::AreaData calcData[1];
		calcData[0].nCardCount = Data[VIEW_HAND1].nCardCount;
		calcData[0].nMinDist = 4 * nCardSpacing;
		calcData[0].nMaxDist = nSmallCardWidth + nCardSpacing;

		AreaWidthCalculation::Calculate(calcData, ARRAY_SIZE(calcData), Data[VIEW_HAND1].rectArea.Width(), nSmallCardWidth, nCardSpacing);

		Data[VIEW_HAND1].sizeDelta = CSize(calcData[0].nDelta, 0);
		if (calcData[0].bMultiRows)
		{
			Data[VIEW_HAND1].bHasNextRowDelta = TRUE;
			Data[VIEW_HAND1].sizeNextRowDelta = CSize(2 * nCardSpacing, 2 * nCardSpacing);
			Data[VIEW_HAND1].ptNextRow = Data[VIEW_HAND1].ptCurrent + Data[VIEW_HAND1].sizeNextRowDelta;
		}
		else
			if (m_bCenterZones && Data[VIEW_HAND1].rectArea.Width() > calcData[0].nWidth)
				Data[VIEW_HAND1].ptCurrent.x += (Data[VIEW_HAND1].rectArea.Width() - calcData[0].nWidth) / 2;

		if (Data[VIEW_GRAVEYARD1].bVisible)
		{
			Data[VIEW_GRAVEYARD1].ptCurrent =
				CPoint(nViewWidth - nCardSpacing - nSmallCardWidth, Data[VIEW_HAND1].rectArea.top);

			Data[VIEW_GRAVEYARD1].sizeDelta = CSize(-nCardSpacing, +nCardSpacing);

			Data[VIEW_GRAVEYARD1].bHasNextRowDelta = TRUE;
			Data[VIEW_GRAVEYARD1].rectArea = CRect(
				Data[VIEW_GRAVEYARD1].ptCurrent.x - 2 * nCardSpacing, Data[VIEW_GRAVEYARD1].ptCurrent.y,
				Data[VIEW_GRAVEYARD1].ptCurrent.x + nSmallCardWidth,
				Data[VIEW_GRAVEYARD1].ptCurrent.y + nSmallCardHeight + 2 * nCardSpacing);
			Data[VIEW_GRAVEYARD1].ptNextRow = Data[VIEW_GRAVEYARD1].ptCurrent;
		}
	}

	if (bArrangeRow1 || bArrangeRow2)
	{
		// Calculate row allocations

		struct RowData
		{
			VIEW_AREA_INDEX_OFFSET view;
			int nMinDist;
			int nMaxDist;
			int nRow;
			AreaWidthCalculation::AreaData areaData;

		} rowData[] = 
		{
			/*
				Computer Lands	10
					Others		11
					Standing Cr	12
					Creatures	13

				Your Creatures	3
					Standing Cr	2
					Others		1
					Lands		0
			*/

			{ VIEW_CREATURE2, 16 * nCardSpacing, nSmallCardWidth + nCardSpacing, 0 },
			{ VIEW_CREATURE1, 16 * nCardSpacing, nSmallCardWidth + nCardSpacing, 10 },
			{ VIEW_STANDING_CREATURE2, 16 * nCardSpacing, nSmallCardWidth + nCardSpacing, 0 },
			{ VIEW_STANDING_CREATURE1, 16 * nCardSpacing, nSmallCardWidth + nCardSpacing, 10 },
			{ VIEW_OTHER2, 8 * nCardSpacing, nSmallCardWidth + nCardSpacing, 0 },
			{ VIEW_OTHER1, 8 * nCardSpacing, nSmallCardWidth + nCardSpacing, 10 },
			{ VIEW_LAND2, 4 * nCardSpacing, m_bAlwaysStackLands ? 4 * nCardSpacing : nSmallCardWidth + nCardSpacing, 0 },
			{ VIEW_LAND1, 4 * nCardSpacing, 4 * nCardSpacing, 10 }
		};

		static const int nRightMargin = nSmallCardWidth + nCardSpacing; // exclude this much of space for layout on the right-hand side
		int nAvailableWidth = nViewWidth - nCardSpacing - nRightMargin;

		int nMaxRow1 = 0;
		int nMaxRow2 = 10;

		int nFreeExtraRows = nExtraRows;
		do
		{
			int nOverlappedAreas = 0;
		
			std::set<int> processedRows;
			for (int i = 0; i < ARRAY_SIZE(rowData); ++i)
			{
				int nRow = rowData[i].nRow;
				if (processedRows.count(nRow))
					continue;

				processedRows.insert(nRow);

				int nCalcDataSize = 1;
				AreaWidthCalculation::AreaData calcData[ARRAY_SIZE(rowData)];
				calcData[0].nCardCount = Data[rowData[i].view].nCardCount;
				calcData[0].nMinDist = rowData[i].nMinDist;
				calcData[0].nMaxDist = rowData[i].nMaxDist;
				calcData[0].nParam = i;

				for (int j = i + 1; j < ARRAY_SIZE(rowData); ++j)
					if (rowData[j].nRow == nRow)
					{
						calcData[nCalcDataSize].nCardCount = Data[rowData[j].view].nCardCount;
						calcData[nCalcDataSize].nMinDist = rowData[j].nMinDist;
						calcData[nCalcDataSize].nMaxDist = rowData[j].nMaxDist;
						calcData[nCalcDataSize].nParam = j;
						++nCalcDataSize;	
					}

				AreaWidthCalculation::Calculate(calcData, nCalcDataSize, 
					nAvailableWidth, nSmallCardWidth, nCardSpacing);

				for (int j = 0; j < nCalcDataSize; ++j)
				{
					ATLASSERT(calcData[j].nWidth <= nAvailableWidth);

					rowData[calcData[j].nParam].areaData = calcData[j];

					if (calcData[j].bOverlapping && 
						calcData[j].nParam < ARRAY_SIZE(rowData) - 2) // overlapping in land rows are ignored
						++nOverlappedAreas;
				}
			}
						
			if (!nOverlappedAreas || !nFreeExtraRows)
				break;

			processedRows.clear();
			for (int i = 0; i < ARRAY_SIZE(rowData) - 2; ++i)
			{
				int nRow = rowData[i].nRow;
				if (processedRows.count(nRow))
					continue;

				processedRows.insert(nRow);

				if (!rowData[i].areaData.bOverlapping)
				{
					bool bFound = false;
					for (int j = i + 2; j < ARRAY_SIZE(rowData); j += 2)
						if (rowData[j].nRow == rowData[i].nRow &&
							rowData[j].areaData.bOverlapping)
						{
							bFound = true;
							break;
						}
							
					if (!bFound)
						continue;
				}

				// This row has overlapping areas

				if (nRow < 10)
				{
					if (nRow >= nMaxRow1)
					{
						++nMaxRow1;
						--nFreeExtraRows;
					}
				}
				else
				{
					if (nRow >= nMaxRow2)
					{
						++nMaxRow2;
						--nFreeExtraRows;
					}
				}

				for (int j = i; j <= ARRAY_SIZE(rowData); j += 2)
				{
					++rowData[j].nRow;
					if (rowData[j].areaData.nCardCount)
					{
						// Keep creatures on the same row
						if (j == 0 || j == 1)
							++rowData[j + 2].nRow;
						break;
					}
				}

				break;
			}
		} while (true);

		// Calculate actual location on screen

		// Upper screen

		int nCurrentY = nTopHeight + nCardSpacing;
		int nCurrentX = nCardSpacing;
		int nHeight = nViewHeight - nCurrentY; // all the way to the bottom of the screen
		int nLastRow = -1;
		int nPadX = 0;

		for (int i = ARRAY_SIZE(rowData) - 1; i >= 0; i -= 2)
		{
			bool bFirstAreaInRow = (nLastRow == -1);
			if (nLastRow != -1 && rowData[i].nRow != nLastRow)
			{
				// 'row feed'

				nCurrentY += nSmallCardHeight + nCardSpacing;
				nCurrentX = nCardSpacing;
				nHeight -= nSmallCardHeight + nCardSpacing;

				bFirstAreaInRow = true;
			}

			if (m_bCenterZones && bFirstAreaInRow)
			{
				int nUsedWidth = rowData[i].areaData.nWidth;
				int nAreas = 1;
				for (int j = i - 2; j >= 0; j -= 2)
				{
					if (rowData[j].nRow != rowData[i].nRow)
						break;

					if (rowData[j].areaData.nWidth)
					{
						++nAreas;
						nUsedWidth += rowData[j].areaData.nWidth;
					}
				}

				if (nUsedWidth < nAvailableWidth)
				{
					nPadX = (nAvailableWidth - nUsedWidth) / (nAreas + 1);
					if (nPadX <= nSmallCardWidth)
						nCurrentX += nPadX;
					else
					{
						nPadX = nSmallCardWidth;
						nCurrentX += (nAvailableWidth - ((nAreas - 1) * nSmallCardWidth + nUsedWidth)) / 2;
					}
				}
				else
					nPadX = 0;
			}

			int nDataIndex = rowData[i].view;

			Data[nDataIndex].rectArea = CRect(CPoint(nCurrentX, nCurrentY), CSize(rowData[i].areaData.nWidth - nCardSpacing, nHeight));
			Data[nDataIndex].ptCurrent = Data[nDataIndex].rectArea.TopLeft();

			Data[nDataIndex].sizeDelta = CSize(rowData[i].areaData.nDelta, 0);
			if (rowData[i].areaData.bMultiRows)
			{
				Data[nDataIndex].bHasNextRowDelta = TRUE;
				Data[nDataIndex].sizeNextRowDelta = CSize(2 * nCardSpacing, 4 * nCardSpacing);
				Data[nDataIndex].ptNextRow = Data[nDataIndex].ptCurrent + Data[nDataIndex].sizeNextRowDelta;
			}

			if (rowData[i].areaData.nWidth)
				nCurrentX += rowData[i].areaData.nWidth + nPadX;

			nLastRow = rowData[i].nRow;
		}

		// Lower screen

		nCurrentY = nViewHeight - 2 * (nCardSpacing + nSmallCardHeight);
		nCurrentX = nCardSpacing;
		nHeight = nViewHeight - nCurrentY; // all the way to the bottom of the screen
		nLastRow = -1;
		nPadX = 0;

		for (int i = ARRAY_SIZE(rowData) - 2; i >= 0; i -= 2)
		{
			bool bFirstAreaInRow = (nLastRow == -1);
			if (nLastRow != -1 && rowData[i].nRow != nLastRow)
			{
				// 'row feed'

				nCurrentY -= nSmallCardHeight + nCardSpacing;
				nCurrentX = nCardSpacing;
				nHeight += nSmallCardHeight + nCardSpacing;

				bFirstAreaInRow = true;
			}

			if (m_bCenterZones && bFirstAreaInRow)
			{
				int nUsedWidth = rowData[i].areaData.nWidth;
				int nAreas = 1;
				for (int j = i - 2; j >= 0; j -= 2)
				{
					if (rowData[j].nRow != rowData[i].nRow)
						break;

					if (rowData[j].areaData.nWidth)
					{
						++nAreas;
						nUsedWidth += rowData[j].areaData.nWidth;
					}
				}

				if (nUsedWidth < nAvailableWidth)
				{
					nPadX = (nAvailableWidth - nUsedWidth) / (nAreas + 1);
					if (nPadX <= nSmallCardWidth)
						nCurrentX += nPadX;
					else
					{
						nPadX = nSmallCardWidth;
						nCurrentX += (nAvailableWidth - ((nAreas - 1) * nSmallCardWidth + nUsedWidth)) / 2;
					}
				}
				else
					nPadX = 0;
			}

			int nDataIndex = rowData[i].view;

			Data[nDataIndex].rectArea = CRect(CPoint(nCurrentX, nCurrentY), CSize(rowData[i].areaData.nWidth - nCardSpacing, nHeight));
			Data[nDataIndex].ptCurrent = Data[nDataIndex].rectArea.TopLeft();

			Data[nDataIndex].sizeDelta = CSize(rowData[i].areaData.nDelta, 0);
			if (rowData[i].areaData.bMultiRows)
			{
				Data[nDataIndex].bHasNextRowDelta = TRUE;
				Data[nDataIndex].sizeNextRowDelta = CSize(2 * nCardSpacing, 4 * nCardSpacing);
				Data[nDataIndex].ptNextRow = Data[nDataIndex].ptCurrent + Data[nDataIndex].sizeNextRowDelta;
			}

			if (rowData[i].areaData.nWidth)
				nCurrentX += rowData[i].areaData.nWidth + nPadX;

			nLastRow = rowData[i].nRow;
		}
	}

	if (bArrangeRow3)
	{
		Data[VIEW_HAND2].rectArea =
			CRect(
				CPoint(nCardSpacing, nCardSpacing), 
				CSize(nViewWidth - 2 * nCardSpacing +
					(Data[VIEW_GRAVEYARD2].bVisible ? - 2 * nCardSpacing - nSmallCardWidth : 0),
					nViewHeight - 2 * nCardSpacing));

		Data[VIEW_HAND2].ptCurrent = CPoint(nCardSpacing, Data[VIEW_HAND2].rectArea.bottom - nSmallCardHeight);

		AreaWidthCalculation::AreaData calcData[1];
		calcData[0].nCardCount = Data[VIEW_HAND2].nCardCount;
		calcData[0].nMinDist = 4 * nCardSpacing;
		calcData[0].nMaxDist = nSmallCardWidth + nCardSpacing;

		AreaWidthCalculation::Calculate(calcData, ARRAY_SIZE(calcData), Data[VIEW_HAND2].rectArea.Width(), nSmallCardWidth, nCardSpacing);

		Data[VIEW_HAND2].sizeDelta = CSize(calcData[0].nDelta, 0);
		if (calcData[0].bMultiRows)
		{
			Data[VIEW_HAND2].bHasNextRowDelta = TRUE;
			Data[VIEW_HAND2].sizeNextRowDelta = CSize(2 * nCardSpacing, -2 * nCardSpacing);
			Data[VIEW_HAND2].ptNextRow = Data[VIEW_HAND1].ptCurrent + Data[VIEW_HAND1].sizeNextRowDelta;
		}
		else
			if (m_bCenterZones && Data[VIEW_HAND2].rectArea.Width() > calcData[0].nWidth)
				Data[VIEW_HAND2].ptCurrent.x += (Data[VIEW_HAND2].rectArea.Width() - calcData[0].nWidth) / 2;
			
		if (Data[VIEW_GRAVEYARD2].bVisible)
		{
			Data[VIEW_GRAVEYARD2].ptCurrent =
				CPoint(nViewWidth - nCardSpacing - nSmallCardWidth, Data[VIEW_HAND2].rectArea.bottom - nSmallCardHeight);

			Data[VIEW_GRAVEYARD2].sizeDelta = CSize(-nCardSpacing, -nCardSpacing);

			Data[VIEW_GRAVEYARD2].bHasNextRowDelta = TRUE;
			Data[VIEW_GRAVEYARD2].rectArea = CRect(
				Data[VIEW_GRAVEYARD2].ptCurrent.x - 2 * nCardSpacing, 
				Data[VIEW_GRAVEYARD2].ptCurrent.y - 2 * nCardSpacing,
				Data[VIEW_GRAVEYARD2].ptCurrent.x + nSmallCardWidth,
				Data[VIEW_GRAVEYARD2].ptCurrent.y + nSmallCardHeight);
			Data[VIEW_GRAVEYARD2].ptNextRow = Data[VIEW_GRAVEYARD2].ptCurrent;
		}
	}

	// Move elements to their view zones 

	std::map<CUIElement*, std::pair<CPoint, CUIElement*>> anchorCardPts;

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		CUIElement* pElement = cardElements[i];

		if (stackedCards.count(pElement) ||		// Delayed
			allBlockers.count(pElement))
			continue;

		int nViewAreaId = pElement->GetElementData();

		if (!Data[nViewAreaId].bArrange)
			continue;

		CPoint& ptCurrent = Data[nViewAreaId].ptCurrent;

		CPoint ptAdjusted;
		if (pElement->GetElementType() == CUIElement::CARD_ELEMENT &&
			((CUICard*)pElement)->IsTapped())
		{
			ptAdjusted =
				CPoint(ptCurrent.x - (nSmallCardHeight - nSmallCardWidth) / 2,
					ptCurrent.y + (nSmallCardHeight - nSmallCardWidth) / 2);
		}
		else
			ptAdjusted = ptCurrent;

		if (pElement->GetTopLeft() != ptAdjusted)
		{
			if (bDisableAnimate || !m_bAnimatedCardMovement)
			{
				m_ElementManager.InvalidateElement(pElement);
				pElement->MoveToPt(ptAdjusted);
				m_ElementManager.InvalidateElement(pElement);
			}
			else
				m_ElementManager.AddMovingElement(pElement, ptAdjusted);
		}

		if (anchorCards.count(pElement))
			anchorCardPts[pElement] = std::make_pair(ptAdjusted, pElement);

		ptCurrent += Data[nViewAreaId].sizeDelta;

		if (Data[nViewAreaId].bHasNextRowDelta)
		{
			ATLASSERT(!Data[nViewAreaId].rectArea.IsRectEmpty());

			CRect rectNextCard(ptCurrent, CSize(nSmallCardWidth, nSmallCardHeight));

			CRect rectUnion;
			rectUnion.UnionRect(rectNextCard, Data[nViewAreaId].rectArea);

			if (rectUnion != Data[nViewAreaId].rectArea)
			{
				Data[nViewAreaId].ptCurrent = Data[nViewAreaId].ptNextRow;
				Data[nViewAreaId].ptNextRow += Data[nViewAreaId].sizeNextRowDelta;
			}
		}
	}

	// Move blockers

	for (std::map<CUIElement*, std::vector<CUIElement*>>::iterator i = blockingCreatures.begin(); i != blockingCreatures.end(); ++i)
	{
		CUIElement* pAttacker = i->first;

		CPoint ptCurrent = m_ElementManager.GetElementDestination(pAttacker);
		CSize sizeDelta(nCardSpacing * 4, 0);

		if (pAttacker->GetElementData() >= VIEW_AREA_COUNT / 2)
		{
			ptCurrent.y -= nCardSpacing + nSmallCardHeight + nSmallCardHeight / 2;
			sizeDelta.cy = -nCardSpacing * 4;
		}
		else
		{
			ptCurrent.y += nCardSpacing + nSmallCardHeight + nSmallCardHeight / 2;
			sizeDelta.cy = nCardSpacing * 4;
		}

		const std::vector<CUIElement*>& blockers(i->second);
		for (size_t j = 0; j < blockers.size(); ++j)
		{
			CUIElement* pElement = blockers[j];

			int nViewAreaId = pElement->GetElementData();

			if (!Data[nViewAreaId].bArrange)
				continue;

			if (pElement->GetTopLeft() != ptCurrent)
			{
				if (bDisableAnimate || !m_bAnimatedCardMovement)
				{
					m_ElementManager.InvalidateElement(pElement);
					pElement->MoveToPt(ptCurrent);
					m_ElementManager.InvalidateElement(pElement);
				}
				else
					m_ElementManager.AddMovingElement(pElement, ptCurrent);
			}

			if (anchorCards.count(pElement))
				anchorCardPts[pElement] = std::make_pair(ptCurrent, pElement);

			ptCurrent += sizeDelta;
		}
	}

	// Move stacked cards behind anchor cards

	for (std::map<CUIElement*, CUIElement*>::const_iterator i = stackedCards.begin(); i != stackedCards.end(); ++i)
	{
		CUIElement* pStackedCard = i->first;
		CUIElement* pAnchorCard = i->second;

		int nViewAreaId = pAnchorCard->GetElementData();
		if (!Data[nViewAreaId].bArrange)
			continue;

		std::map<CUIElement*, std::pair<CPoint, CUIElement*>>::iterator it2 = anchorCardPts.find(pAnchorCard);
		ATLASSERT(it2 != anchorCardPts.end());
		if (it2 == anchorCardPts.end())
			continue;
		CPoint CurrentPt(it2->second.first);
		CUIElement* pLastStackedCard = it2->second.second;
		it2->second.second = pStackedCard;
		m_ElementManager.ShuffleElementTo(pStackedCard, pLastStackedCard);
		
		CurrentPt.x -= 2 * nCardSpacing;
		CurrentPt.y -= 2 * nCardSpacing;

		it2->second.first = CurrentPt;

		if (pStackedCard->GetTopLeft() != CurrentPt)
		{
			if (bDisableAnimate || !m_bAnimatedCardMovement)
			{
				m_ElementManager.InvalidateElement(pStackedCard);
				pStackedCard->MoveToPt(CurrentPt);
				m_ElementManager.InvalidateElement(pStackedCard);
			}
			else
				m_ElementManager.AddMovingElement(pStackedCard, CurrentPt);
		}
	}

#ifdef _MY_DEBUG
	/*
	DWORD dwTimeEnded = GetTickCount();
	ATLTRACE(_T("ArrangeCards(): Time: %d milliseconds\n"), dwTimeEnded - dwTimeStarted);
	*/
#endif
}

void CMagicWandView::InvalidateRgn(const CRgn* pRgn, BOOL bErase)
{
	CPoint ScrollPos(GetScrollPosition());	

	CRgn TempRgn;
	TempRgn.CreateRectRgn(0, 0, 0, 0);
	TempRgn.CopyRgn(pRgn);
	TempRgn.OffsetRgn(-ScrollPos.x, -ScrollPos.y);
	CScrollView::InvalidateRgn(&TempRgn, bErase);
}

void CMagicWandView::InvalidateRect(LPCRECT lpRect, BOOL bErase)
{
	CPoint ScrollPos(GetScrollPosition());	

	CRect TempRect(lpRect);
	TempRect -= ScrollPos;
	CScrollView::InvalidateRect(&TempRect, bErase);
}

CRect CMagicWandView::GetViewRect()
{
	CRect viewRect(CPoint(0, 0), GetTotalSize());
	CRect ClientRect;
	GetClientRect(&ClientRect);
	if (viewRect.bottom < ClientRect.bottom)
		viewRect.bottom = ClientRect.bottom;

	if (viewRect.right < ClientRect.right)
		viewRect.right = ClientRect.right;
	return viewRect;
}

void CMagicWandView::UpdateScrollSize()
{
	CSize ViewSize;
	ViewSize.cx = LOWORD(m_dwBoardSize);
	ViewSize.cy = HIWORD(m_dwBoardSize);
	SetScrollSizes(MM_TEXT, ViewSize);
}

int CMagicWandView::GetViewAreaId(CCard* pCard)
{
	if (!m_pGameThread || !GetGame())
		return -1;

	CPlayer* pPlayer = pCard->GetController();

	// Check enchanted
	for (int j = 0; j < pCard->GetAbilityCount(); ++j)
	{
		CEnchant* pEnchant = dynamic_cast<CEnchant*>(pCard->GetAbility(j));
		if (pEnchant)
		{
			CCard* pCard2 = pEnchant->GetEnchantedOnCard();
			if (pCard2)
			{
				pPlayer = pCard2->GetController();
				pCard = pCard2;
			}
			break;
		}
	}

	ZoneId zoneId = pCard->GetZoneId();

	if (GetGame()->GetPlayerIndex(pPlayer))
	{
		switch (zoneId.Get())
		{
		case ZoneId::_Effects:
			if ((pCard->GetCardType() & CardType::Plane).Any())
			return VIEW_OTHER2;
			else return -1;
		case ZoneId::Battlefield: 
			if ((pCard->GetCardType() & CardType::_Land).Any())
				return VIEW_LAND2;
			else
				if ((pCard->GetCardType() & CardType::Creature).Any())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if (pCreatureCard->CanAttackInGeneral())
						return VIEW_CREATURE2;
					else
						return VIEW_STANDING_CREATURE2;
				}
				else
					return VIEW_OTHER2;
		case ZoneId::Stack:
		case ZoneId::Hand: return VIEW_HAND2;
		case ZoneId::Graveyard: return VIEW_GRAVEYARD2;
		}
	}
	else
	{
		switch (zoneId.Get())
		{
		case ZoneId::_Effects:
			if ((pCard->GetCardType() & CardType::Plane).Any())
			return VIEW_OTHER1;
			else return -1;
		case ZoneId::Graveyard: return VIEW_GRAVEYARD1;
		case ZoneId::Stack:
		case ZoneId::Hand: return VIEW_HAND1;
		case ZoneId::Battlefield:
			if ((pCard->GetCardType() & CardType::_Land).Any())
				return VIEW_LAND1;
			else
				if ((pCard->GetCardType() & CardType::Creature).Any())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if (pCreatureCard->CanAttackInGeneral())
						return VIEW_CREATURE1;
					else
						return VIEW_STANDING_CREATURE1;
				}
				else
					return VIEW_OTHER1;
		}
	}

	return -1;
}

void CMagicWandView::GetZoneInformation(int nViewAreaId, CRect& AreaRect, int& nCount, int& nAverageCX)
{
	int nSmallCardWidth = CCardStore::GetInstance()->GetSmallCardSize().Width;
	int nSmallCardHeight = CCardStore::GetInstance()->GetSmallCardSize().Height;
	int nCardSpacing = nSmallCardHeight / 35;

	AreaRect.top = 0;
	AreaRect.bottom = 0;
	AreaRect.left = 0;
	AreaRect.right = 0;
	nCount = 0;
	nAverageCX = 0;

	int nMinX = -1;
	int nMaxX = -1;

	std::vector<CUICard*> cardElements;
	m_ElementManager.GetAllCardElements(cardElements);

	for (size_t i = 0; i < cardElements.size(); ++i)
	{
		CUICard* pUICard = cardElements[i];

		if (pUICard->GetElementData() != nViewAreaId)
			continue;

		CRect BoundRect = pUICard->GetBoundRect();
		int X = BoundRect.TopLeft().x;

		if ((nMinX == - 1) || (X < nMinX))
			nMinX = X;

		if ((nMaxX == - 1) || (X > nMaxX))
			nMaxX = X;

		++nCount;

		CRect Rect;
		Rect.UnionRect(AreaRect, BoundRect);
		AreaRect = Rect;
	}

	if (nCount)
	{
		if (nCount == 1)
			nAverageCX = nSmallCardWidth + nCardSpacing;
		else
			nAverageCX = (nMaxX - nMinX) / nCount;
	}
}

CPoint CMagicWandView::FindAvailablePos(int nViewAreaId)
{
	int nSmallCardWidth = CCardStore::GetInstance()->GetSmallCardSize().Width;
	int nSmallCardHeight = CCardStore::GetInstance()->GetSmallCardSize().Height;
	int nCardSpacing = nSmallCardHeight / 35;

	CPoint Pt;

	CRect AreaRect;
	int nCount = 0;
	int nAverageCX = 0;

	GetZoneInformation(nViewAreaId, AreaRect, nCount, nAverageCX);

	CRect ClientRect;
	GetClientRect(ClientRect);
	CRect viewRect = GetViewRect();

	if (nCount)
	{
		if ((nViewAreaId == VIEW_GRAVEYARD1) || (nViewAreaId == VIEW_GRAVEYARD2))
		{
			Pt.x = AreaRect.Width() + nCardSpacing / 2 - nSmallCardWidth;
			Pt.y = AreaRect.Height() + nCardSpacing / 2 - nSmallCardHeight;
		}
		else
		{
			Pt.x = AreaRect.right + nAverageCX - nSmallCardWidth;
			Pt.y = AreaRect.top;

			if (Pt.x + nSmallCardWidth > ClientRect.right - nCardSpacing)
			{
				Pt.x = rand() * (AreaRect.Width() - nSmallCardWidth) / RAND_MAX;
				Pt.y = rand() * (AreaRect.Height() - nSmallCardHeight) / RAND_MAX;
			}
		}
	}
	else
	{
		int nViewWidth = viewRect.Width() - nCardSpacing;
		int nViewWidth1 = int(nViewWidth * s_ViewPercentageLands);
		int nViewWidth2 = int(nViewWidth * s_ViewPercentageOthers);

		int nTopHeight = (m_bViewHand1 || m_bViewGraveyard1) ? 
			nSmallCardHeight / 5 : 0;

		switch (nViewAreaId)
		{
		case VIEW_GRAVEYARD1: Pt.x = viewRect.right - nSmallCardWidth - nCardSpacing; Pt.y = nTopHeight - nSmallCardHeight; break;
		case VIEW_GRAVEYARD2: Pt.x = viewRect.right - nSmallCardWidth - nCardSpacing; Pt.y = viewRect.bottom - nSmallCardHeight - nCardSpacing; break;
		case VIEW_LAND1: Pt.x = nCardSpacing; Pt.y = nTopHeight + nCardSpacing; break;
		case VIEW_LAND2: Pt.x = nCardSpacing; Pt.y = viewRect.bottom - 2 * (nSmallCardHeight + nCardSpacing); break;
		case VIEW_OTHER1: Pt.x = nViewWidth1 + nCardSpacing; Pt.y = nTopHeight + nCardSpacing; break;
		case VIEW_OTHER2: Pt.x = nViewWidth1 + nCardSpacing; Pt.y = viewRect.bottom - 2 * (nSmallCardHeight + nCardSpacing); break;
		case VIEW_CREATURE1: Pt.x = nViewWidth1 + nViewWidth2 + nCardSpacing; Pt.y = nTopHeight + nCardSpacing; break;
		case VIEW_CREATURE2: Pt.x = nViewWidth1 + nViewWidth2 + nCardSpacing; Pt.y = viewRect.bottom - 2 * (nSmallCardHeight + nCardSpacing); break;
		case VIEW_STANDING_CREATURE1: Pt.x = viewRect.right - nCardSpacing - nSmallCardWidth; Pt.y = nTopHeight + nCardSpacing; break;
		case VIEW_STANDING_CREATURE2: Pt.x = viewRect.right - nCardSpacing - nSmallCardWidth; Pt.y = viewRect.bottom - 2 * (nSmallCardHeight + nCardSpacing); break;
		case VIEW_HAND1: Pt.x = nCardSpacing; Pt.y = nTopHeight - nSmallCardHeight; break;
		case VIEW_HAND2: Pt.x = nCardSpacing; Pt.y = viewRect.bottom - nSmallCardHeight - nCardSpacing; break;
		default: VERIFY(FALSE);
		}		
	}

	return Pt;
}

BOOL CMagicWandView::AddCardsToArea(int nViewAreaId, BOOL bDropShadow)
{
	BOOL bAdded = FALSE;

	// Add cards
	
	CRect visibleRect;
	GetClientRect(visibleRect);
	CPoint scrollPos(GetScrollPosition());
	visibleRect.OffsetRect(scrollPos);
	Gdiplus::Size cardSize(CCardStore::GetInstance()->GetSmallCardSize());

	CPoint fromTop(visibleRect.Width() + cardSize.Width, visibleRect.top + visibleRect.Height() * 1 / 3);
	CPoint fromBottom(visibleRect.Width() + cardSize.Width, visibleRect.top + visibleRect.Height() * 2 / 3);

	for (int k = 0; k < GetGame()->GetPlayerCount(); ++k)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(k);
		for (int j = 0; j < pPlayer->GetZoneCount(); ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (GetViewAreaId(pCard) != nViewAreaId)
					continue;

				CUICard* pUICard = m_ElementManager.GetCard(pCard);
				if (!pUICard ||
					(pUICard->GetElementData() != nViewAreaId))	// This is necessary just in case the UICard is not yet removed but will do so in another RemoveCardsFromArea() call
				{
					bAdded = TRUE;

					BOOL bFaceUp = TRUE;

					if (pCard->GetOrientation()->IsFaceDown() ||
						!pZone->IsVisibleTo(GetGame()->GetPlayer(m_nLocalPlayerIndex)))	// Changed to support multi-human
						bFaceUp = FALSE;

					CUICard* pUICard = new CUICard(GetGame(),
						m_bAnimatedCardMovement? (m_nLocalPlayerIndex == k ? fromBottom : fromTop) : FindAvailablePos(nViewAreaId),
						CCardStore::GetInstance()->GetCardByID(pCard->GetImageID()),
						nViewAreaId, pCard,
						bFaceUp,
						pCard->GetOrientation()->IsTapped(),
						bDropShadow, pCard->GetOrientation()->IsFlipped());

					m_ElementManager.AddElement(pUICard);
				}
			}
		}
	}

	return bAdded;
}

void CMagicWandView::RemoveCardsFromArea(int nViewAreaId, BOOL bVisible, BOOL viewChanged[VIEW_AREA_COUNT])
{
	// Remove UI cards
	std::vector<CUICard*> cardElements;
	m_ElementManager.GetAllCardElements(cardElements);
	for (int j = (int)cardElements.size() - 1; j >= 0; --j)
	{
		CUICard* pUICard = cardElements[j];

		if (pUICard->GetElementData() != nViewAreaId)
			continue;

		CCard* pCard = pUICard->GetCard();

		int nNewViewAreaId = GetViewAreaId(pCard);
		if (!bVisible || nNewViewAreaId == -1)
		{
			m_ElementManager.RemoveElement(pUICard);
			viewChanged[nViewAreaId] = TRUE;
			continue;
		}

		if (nNewViewAreaId != nViewAreaId)
		{
			pUICard->SetElementData(nNewViewAreaId);
			viewChanged[nViewAreaId] = TRUE;
			viewChanged[nNewViewAreaId] = TRUE;
			if (nNewViewAreaId > nViewAreaId)
				continue; // will be taken care of in a later call
		}

		BOOL bInvalidatedPrevious = FALSE;
		BOOL bInvalidateNew = FALSE;
		BOOL bDropShadow = (nNewViewAreaId == VIEW_HAND1 || nNewViewAreaId == VIEW_HAND2);

		/*if (pCard->GetCardType().IsCreature() != pUICard->IsCreature())
		{

		pUICard->FaceDown();

		m_ElementManager.InvalidateElement(pUICard);
		bInvalidatedPrevious = TRUE;
		pUICard->RefreshInfo();
		m_ElementManager.RefreshCardInfo(NULL);
		bInvalidateNew = TRUE;
		//m_ElementManager.Va
		}*/

		if (pCard->GetOrientation()->IsTapped() && !pUICard->IsTapped())
		{
			m_ElementManager.InvalidateElement(pUICard);
			bInvalidatedPrevious = TRUE;
			//pUICard->Tap();
			m_ElementManager.AddTapUntapCard(pUICard); 
			bInvalidateNew = TRUE;
		}
		else
			if (!pCard->GetOrientation()->IsTapped() && pUICard->IsTapped())
			{
				m_ElementManager.InvalidateElement(pUICard);
				bInvalidatedPrevious = TRUE;
				//pUICard->Untap();
				m_ElementManager.AddTapUntapCard(pUICard); 
				bInvalidateNew = TRUE;
			}

			if (pCard->GetOrientation()->IsFlipped() && !pUICard->IsFlipped())
			{
				m_ElementManager.InvalidateElement(pUICard);
				bInvalidatedPrevious = TRUE;
				//pUICard->Tap();
				m_ElementManager.AddFlippedCard(pUICard); 
				bInvalidateNew = TRUE;
			}
			else
				if (!pCard->GetOrientation()->IsFlipped() && pUICard->IsFlipped())
				{
					m_ElementManager.InvalidateElement(pUICard);
					bInvalidatedPrevious = TRUE;
					//pUICard->Untap();
					m_ElementManager.AddFlippedCard(pUICard); 
					bInvalidateNew = TRUE;
				}

				if (pUICard->IsFaceDown() && pCard->GetZone()->IsVisibleTo(GetGame()->GetPlayer(m_nLocalPlayerIndex)))
				{
					if (!bInvalidatedPrevious)
					{
						m_ElementManager.InvalidateElement(pUICard);
						bInvalidatedPrevious = TRUE;
					}
					pUICard->FaceUp();
				}
				else
					if (!pUICard->IsFaceDown() && !pCard->GetZone()->IsVisibleTo(GetGame()->GetPlayer(m_nLocalPlayerIndex)))
					{
						if (!bInvalidatedPrevious)
						{
							m_ElementManager.InvalidateElement(pUICard);
							bInvalidatedPrevious = TRUE;
						}
						pUICard->FaceDown();
					}


					if (pUICard->IsSecondFaceDisplayed() && !pCard->GetOrientation()->IsSecondFaced())
					{
						if (!bInvalidatedPrevious)
						{
							m_ElementManager.InvalidateElement(pUICard);
							bInvalidatedPrevious = TRUE;
						}
						pUICard->FaceFirst();
					}
					else
						if (!pUICard->IsSecondFaceDisplayed() && pCard->GetOrientation()->IsSecondFaced())
						{
							if (!bInvalidatedPrevious)
							{
								m_ElementManager.InvalidateElement(pUICard);
								bInvalidatedPrevious = TRUE;
							}
							pUICard->FaceSecond();
						}

						if (pUICard->IsMorphDisplayed() && !pCard->GetOrientation()->IsMorphed())
						{
							if (!bInvalidatedPrevious)
							{
								m_ElementManager.InvalidateElement(pUICard);
								bInvalidatedPrevious = TRUE;
							}
							pUICard->UnMorph();
						}
						else
							if (!pUICard->IsMorphDisplayed() && pCard->GetOrientation()->IsMorphed())
							{
								if (!bInvalidatedPrevious)
								{
									m_ElementManager.InvalidateElement(pUICard);
									bInvalidatedPrevious = TRUE;
								}
								pUICard->Morph();
							}

							if (pUICard->DropShadow() != bDropShadow)
							{
								if (!bInvalidatedPrevious)
								{
									m_ElementManager.InvalidateElement(pUICard);
									bInvalidatedPrevious = TRUE;
								}
								pUICard->DropShadow(bDropShadow);
								bInvalidateNew = TRUE;
							}

							if (bInvalidateNew)
								m_ElementManager.InvalidateElement(pUICard);

	}
}

void CMagicWandView::RefreshCards()
{
	m_ElementManager.RefreshCardInfo(NULL);
}

void CMagicWandView::RefreshBoard()
{
	m_ElementManager.RemoveZoom();
	m_ElementManager.UnselectAllElements();

	BOOL viewVisible[VIEW_AREA_COUNT];
	BOOL viewChanged[VIEW_AREA_COUNT];

	for (int i = 0; i < ARRAY_SIZE(viewVisible); ++i)
	{
		viewChanged[i] = FALSE;
		switch (i)
		{
		case VIEW_GRAVEYARD1: viewVisible[i] = m_bViewGraveyard1; break;
		case VIEW_GRAVEYARD2: viewVisible[i] = m_bViewGraveyard2; break;
		case VIEW_HAND1: viewVisible[i] = m_bViewHand1; break;
		default: viewVisible[i] = TRUE; break;
		}
	}

	for (int i = 0; i < ARRAY_SIZE(viewVisible); ++i)
	{
		RemoveCardsFromArea(i, viewVisible[i], viewChanged);
	}

	for (int i = 0; i < ARRAY_SIZE(viewVisible); ++i)
	{
		if (viewVisible[i])
			if (AddCardsToArea(i, i == VIEW_HAND1 || i == VIEW_HAND2))
				viewChanged[i] = TRUE;
	}

	m_ElementManager.RefreshCardInfo(viewChanged);

	BOOL bArrangeRow0 = viewChanged[VIEW_GRAVEYARD1] || viewChanged[VIEW_HAND1];
	BOOL bArrangeRow1 = viewChanged[VIEW_CREATURE1] || viewChanged[VIEW_STANDING_CREATURE1] || viewChanged[VIEW_OTHER1] || viewChanged[VIEW_LAND1];
	BOOL bArrangeRow2 = viewChanged[VIEW_CREATURE2] || viewChanged[VIEW_STANDING_CREATURE2] || viewChanged[VIEW_OTHER2] || viewChanged[VIEW_LAND2];
	BOOL bArrangeRow3 = viewChanged[VIEW_GRAVEYARD2] || viewChanged[VIEW_HAND2];

	if (m_ElementManager.RefreshLinks())
	{
		bArrangeRow1 = TRUE;
		bArrangeRow2 = TRUE;
	}

	m_ElementManager.Sort();

	ArrangeCards(bArrangeRow0, bArrangeRow1, bArrangeRow2, bArrangeRow3);

	m_ElementManager.UpdateMovingElements(TRUE);
	m_ElementManager.UpdateTapUntapCards(TRUE);
	m_ElementManager.UpdateFlippedCards(TRUE);
}

void CMagicWandView::DrawSelectionBand(CDC* pDC, CRect rect)
{
	Gdiplus::Graphics graphics(pDC->GetSafeHdc());
	Gdiplus::SolidBrush brush(Gdiplus::Color(128, 0, 128, 255));
	graphics.FillRectangle(&brush, rect.left, rect.top, rect.Width(), rect.Height());

	Gdiplus::Pen pen(Gdiplus::Color(255, 0, 128, 255), 1);
	graphics.DrawRectangle(&pen, rect.left, rect.top, rect.Width() - 1, rect.Height() - 1);
}

void CMagicWandView::GameCleanup()
{
	Invalidate();
	m_ElementManager.Reset();
	CCardFactory::GetInstance()->Reset();

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (pSelectionBar && pSelectionBar->IsSelectingMove())
		pSelectionBar->Quit();

	if (pMainWnd->GetMessageDialogBar())
	{
		pMainWnd->GetMessageDialogBar()->RemoveAllMessages();
		pMainWnd->GetMessageDialogBar()->AddMessage(_T("Game ended"), -1, -1, MessageImportance::High);
	}

	if (pMainWnd->GetGraphDialogBar())
	{
		pMainWnd->GetGraphDialogBar()->Reset();	
		//pMainWnd->GetGraphDialogBar()->RemoveAllNodeStates();	// No need, retain states for player
	}

	if (m_pGameThread)
	{
		CGame* pGame = GetGame();
		if (pGame)
			pGame->Stop();

		m_pGameThread->Join(/*s_dwGameThreadTimeOut*/);

		if (pGame)
		{
			for (int i = 0; i < pGame->GetPlayerCount(); ++i)
			{
				CPlayer* pPlayer = pGame->GetPlayer(i);
				if (pPlayer->IsRemote())
				{
					CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
					if (pNetInterface)
					{
						CRemoteGameUser* pRemoteUser = g_pCoreApp->GetNetManager()->GetRemoteUser(pNetInterface->GetRemoteUserID());
						if (pRemoteUser)
							pRemoteUser->SetGame(NULL);
					}
				}
			}
		}

		m_pGameThread->Release();
		m_pGameThread = NULL;
	}

	m_nLocalPlayerIndex = -1;
	m_strCurrentNode.Empty();

	CGdiplus::GetInstance()->ClearBitmapCache();
	GdiFlush();
	_heapmin();

	PROCESS_MEMORY_COUNTERS_EX memoryCounters;

	if (GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&memoryCounters, sizeof(memoryCounters)))
	{
		LOG_INFORMATION(_T("Memory information:"));
		LOG_INFORMATION(_T("                    Number of page faults: %d"), memoryCounters.PageFaultCount);
		LOG_INFORMATION(_T("                 Current working set size: %d bytes (peak: %d bytes)"), memoryCounters.WorkingSetSize, memoryCounters.PeakWorkingSetSize);
		LOG_INFORMATION(_T("                 Current paged pool usage: %d bytes (peak: %d bytes)"), memoryCounters.QuotaPagedPoolUsage, memoryCounters.QuotaPeakPagedPoolUsage);
		LOG_INFORMATION(_T("              Current nonpaged pool usage: %d bytes (peak: %d bytes)"), memoryCounters.QuotaNonPagedPoolUsage, memoryCounters.QuotaPeakNonPagedPoolUsage);
		LOG_INFORMATION(_T(" Current space allocated for the pagefile: %d bytes (peak: %d bytes)"), memoryCounters.PagefileUsage, memoryCounters.PeakPagefileUsage);
		LOG_INFORMATION(_T("            Current process private usage: %d pages"), memoryCounters.PrivateUsage);
	}
}

//_____________________________________________________________________________
//
// CMagicWandView - Overrides
//

#ifdef _MY_DEBUG
void CMagicWandView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CMagicWandView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif //_MY_DEBUG

void CMagicWandView::OnDraw(CDC* pDC)
{
	if (pDC->IsPrinting())
		return;

	CMemDC dc2(pDC);
	//CDC& dc2(*pDC);

	CRect clipRect;	               
	dc2.GetClipBox(clipRect);	

	dc2.SetBrushOrg(clipRect.left % 8, clipRect.top % 8);

	CRgn clipRgn;
	clipRgn.CreateRectRgnIndirect(clipRect);
	GetClipRgn(dc2.GetSafeHdc(), (HRGN)clipRgn.GetSafeHandle());

	m_ElementManager.Draw(dc2, clipRgn, clipRect);
}

void CMagicWandView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	g_pCoreApp->GetNetManager()->SetSendConnectedBy(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendDisconnect(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendGameConceded(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetUPnPConfigurationResult(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendFileReceived(GetSafeHwnd());

	m_dwMaxDuration = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MAX_DURATION, CGame::s_dwDefaultMaxDuration);
	
	m_bShowSelectionIndicator = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_SELECTION_INDICATOR, TRUE);
	m_ElementManager.ShowSelectionIndicator(m_bShowSelectionIndicator);

	m_bAnimatedCardMovement = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANIMATED_CARD_MOVEMENT, TRUE);
	m_bDblClkZoom = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DBL_CLK_ZOOM, FALSE);
	m_bAutoZoom = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_AUTO_ZOOM, TRUE);
	m_bExtraCareful = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_EXTRA_CAREFUL, TRUE);
	m_bOverkill = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_OVERKILL, TRUE);
	m_bConservative = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_CONSERVATIVE, FALSE);
	m_bBoostProcess = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BOOST_PROCESS, FALSE);
	m_bSpeech = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SPEECH, TRUE);
	m_bSpeakOpening = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SPEAK_OPENING, TRUE);
	m_dwBoardSize = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BOARD_SIZE, 0);
	m_bShowLife = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_LIFE, TRUE);
	m_bShowPool = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_POOL, TRUE);
	m_bShowPhaseText = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_PHASE_TEXT, TRUE);
	m_bShowPhaseIcon = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_PHASE_ICON, TRUE);
	m_bShowLibraryCardCount = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_LIBRARY_CARD_COUNT, FALSE);
	m_bShowAvatarImage = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_AVATAR_IMAGE, TRUE);

	m_bAlwaysStackLands = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ALWAYS_STACK_LANDS, TRUE);

	m_LifeTextColor = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LIFE_TEXT_COLOR, m_LifeTextColor);
	m_LibraryTextColor = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LIBRARY_TEXT_COLOR, m_LibraryTextColor);
	m_PhaseTextColor = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_PHASE_TEXT_COLOR, m_PhaseTextColor);

	m_bViewGraveyard1 = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_OP_GRAVEYARD, TRUE);
	m_bViewGraveyard2 = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_YR_GRAVEYARD, TRUE);
	m_bViewHand1 = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_OP_HAND, TRUE);

	m_strComputerPlayerName = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_COMPUTER_PLAYER_NAME, m_strComputerPlayerName);

	m_strAvatarPath1 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR1, m_strAvatarPath1);
	m_strAvatarPath2 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR2, m_strAvatarPath2);

	CCardStore::GetInstance()->SetSmallCardHeight(g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_CARD_SIZE, CCardStore::DefaultSmallCardHeight));

	m_ElementManager.SetBackground(
		g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_CUSTOM_BACKGROUND_FILE, g_pCoreApp->GetBitmapPath() + _T("\\Wallpapers\\TERR_BLACKMANA.jpg")), 
		(CElementManager::BACKGROUND_STYLE)g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BACKGROUND_LOCATION, CElementManager::BKG_CENTER), 
		g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SCALE_CUSTOM_BACKGROUND, TRUE), 
		g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_KEEP_ASPECT_RATIO, FALSE));

	UpdateScrollSize();
	
	if (!::IsWindow(m_CardTip.m_hWnd))
		m_CardTip.Create(this);

	SetTimer(ANIMATION_ID_EVENT, ANIMATION_ELAPSE, NULL);

	if (SpeechEnabled() && SpeakOpening())
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
		pMainWnd->GetMessageDialogBar()->PostMessage(WM_APP_GAME_SPEAK, NULL, (LPARAM)(new CString(_T("Bot Arena."))));
	}

	PostMessage(WM_APP_CARDSTORE_INIT);
}

BOOL CMagicWandView::PreCreateWindow(CREATESTRUCT& cs)
{
	// Modify the Window class or styles here by modifying
	// the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

//_____________________________________________________________________________
//
// CMagicWandView - Message Handlers
//

BEGIN_MESSAGE_MAP(CMagicWandView, CScrollView)
	ON_COMMAND(IDM_APPEARANCE_SETTINGS, OnAppearanceSettings)
	ON_COMMAND(IDM_APPLICATION_SETTINGS, OnApplicationSettings)
	ON_COMMAND(IDM_ARRANGE, OnArrange)
	ON_COMMAND(IDM_ATTACK, OnAttack)
	ON_MESSAGE(WM_APP_GAME_CAN_DECIDE_NOW, OnCanDecideNow)
	ON_MESSAGE(WM_APP_NET_GAME_CONCEDED, OnConceded)
	ON_MESSAGE(WM_APP_NET_CONNECTED_BY, OnConnectedBy)
	ON_COMMAND(IDM_COPY_ALL_CARD_INFO, OnCopyAllCardInfo)
	ON_COMMAND(IDM_COPY_CARD_NAME, OnCopyCardName)
	ON_COMMAND(IDM_COPY_CARD_RULES_TEXT, OnCopyCardRulesText)
	ON_COMMAND(IDM_DECIDE_NOW, OnDecideNow)
	ON_COMMAND(IDM_DEFAULT, OnDefault)
    ON_WM_DESTROY()
	ON_MESSAGE(WM_APP_NET_DISCONNECT, OnDisconnect)
	ON_COMMAND(IDM_EDIT_CARD_USAGE_PATTERN, OnEditCardUsagePattern)
	ON_COMMAND(IDM_ENABLE_CARD_USAGE_PATTERN, OnEnableCardUsagePattern)
	ON_MESSAGE(WM_APP_ENGINE_EXCEPTION, OnEngineException)
	ON_WM_ERASEBKGND()
	ON_MESSAGE(WM_APP_NET_FILE_RECEIVED, OnFileReceived)
	ON_MESSAGE(WM_APP_GAME_ENDED, OnGameEnded)
	ON_COMMAND(IDM_GAME_PLAY, OnGamePlay)
	ON_COMMAND(IDM_GAME_UNDO, OnGameUndo)
	ON_COMMAND(IDM_CARD_RULINGS, OnGetCardRulings)
	ON_COMMAND(IDM_GRAPH_DEFAULT, OnGraphDefault)
	ON_WM_HSCROLL()
	ON_MESSAGE(WM_APP_CARDSTORE_INIT, OnInitCardStore)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MBUTTONDBLCLK()
	ON_WM_MBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_MOUSEWHEEL()
	ON_MESSAGE(WM_APP_INTERFACE_ORDER_CARD, OnOrderCards)
	ON_WM_RBUTTONDOWN()
	ON_MESSAGE(WM_APP_INTERFACE_SELECT_CARD, OnSelectCards)
	ON_COMMAND_RANGE(IDM_MOVE_FIRST, IDM_MOVE_LAST, OnSelectMoves)
	ON_COMMAND(IDM_SHOW_HAND, OnShowHand)
	ON_COMMAND(IDM_SHOW_LIBRARY, OnShowLibrary)
	ON_COMMAND(IDM_SHOW_OPPONENTS_GRAVE, OnShowOpponentsGrave)
	ON_COMMAND(IDM_SHOW_OPPONENTS_LIBRARY, OnShowOpponentsLibrary)
	ON_COMMAND(IDM_SHOW_OPPONENTS_REMOVED, OnShowOpponentsRemoved)
	ON_COMMAND(IDM_SHOW_OPPONENTS_COMMAND, OnShowOpponentsCommand)
	ON_COMMAND(IDM_SHOW_YOUR_GRAVE, OnShowYourGrave)
	ON_COMMAND(IDM_SHOW_YOUR_REMOVED, OnShowYourRemoved)
	ON_COMMAND(IDM_SHOW_YOUR_COMMAND, OnShowYourCommand)
	ON_WM_SIZE()
	ON_COMMAND(IDM_START, OnStart)
	ON_COMMAND(IDM_STOP, OnStop)
	ON_WM_TIMER()
	ON_COMMAND(IDM_TOGGLE_LANDS, OnToggleLands)
	ON_COMMAND(IDM_TURN_DEFAULT, OnTurnDefault)
	ON_UPDATE_COMMAND_UI(IDM_ARRANGE, OnUpdateArrange)
	ON_UPDATE_COMMAND_UI(IDM_ATTACK, OnUpdateAttack)
	ON_MESSAGE(WM_APP_GAME_UPDATE_GAME, OnUpdateGame)
	ON_UPDATE_COMMAND_UI(IDM_GRAPH_DEFAULT, OnUpdateGraphDefault)
	ON_UPDATE_COMMAND_UI(IDM_DECIDE_NOW, OnUpdateDecideNow)
	ON_UPDATE_COMMAND_UI(IDM_DEFAULT, OnUpdateDefault)
	ON_UPDATE_COMMAND_UI(IDM_GAME_UNDO, OnUpdateGameUndo)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_OPPONENTS_GRAVE, OnUpdateShowOpponentsGrave)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_OPPONENTS_REMOVED, OnUpdateShowOpponentsRemoved)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_OPPONENTS_COMMAND, OnUpdateShowOpponentsCommand)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_YOUR_GRAVE, OnUpdateShowYourGrave)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_YOUR_COMMAND, OnUpdateShowYourCommand)
	ON_UPDATE_COMMAND_UI(IDM_SHOW_YOUR_REMOVED, OnUpdateShowYourRemoved)
	ON_UPDATE_COMMAND_UI(IDM_START, OnUpdateStart)
	ON_UPDATE_COMMAND_UI(IDM_STOP, OnUpdateStop)	
	ON_UPDATE_COMMAND_UI(IDM_TURN_DEFAULT, OnUpdateTurnDefault)
	ON_UPDATE_COMMAND_UI(IDM_USAGE_PATTERN, OnUpdateUsagePattern)
	ON_UPDATE_COMMAND_UI(IDM_VIEW_MAGICBITMAPS, OnUpdateViewMagicbitmaps)
	ON_UPDATE_COMMAND_UI(IDM_VIEW_MAGICSYMBOLS, OnUpdateViewMagicsymbols)
	ON_UPDATE_COMMAND_UI(IDM_VIEW_OPPONENTS_GRAVE, OnUpdateViewOpponentsGrave)
	ON_UPDATE_COMMAND_UI(IDM_VIEW_OPPONENTS_HAND, OnUpdateViewOpponentsHand)
	ON_UPDATE_COMMAND_UI(IDM_VIEW_YOUR_GRAVE, OnUpdateViewYourGrave)
	ON_MESSAGE(WM_APP_NET_UPNP_CONFIG_RESULT, OnUPnPConfigResult)
	ON_COMMAND(IDM_USAGE_PATTERN, OnUsagePattern)
	ON_COMMAND(IDM_VIEW_DECKS, OnViewDecks)
	ON_COMMAND(IDM_VIEW_MAGICBITMAPS, OnViewMagicbitmaps)
	ON_COMMAND(IDM_VIEW_MAGICSYMBOLS, OnViewMagicsymbols)
	ON_COMMAND(IDM_VIEW_OPPONENTS_GRAVE, OnViewOpponentsGrave)
	ON_COMMAND(IDM_VIEW_OPPONENTS_HAND, OnViewOpponentsHand)
	ON_COMMAND(IDM_VIEW_SELECTIONS2, OnViewSelections2)	
	ON_COMMAND(IDM_VIEW_YOUR_GRAVE, OnViewYourGrave)
	ON_WM_VSCROLL()
	ON_COMMAND(IDM_ZOOM, OnZoom)
END_MESSAGE_MAP()

void CMagicWandView::OnAppearanceSettings()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	CAppearanceDialog Dlg;

	Dlg.m_bShowSelectionIndicator = m_bShowSelectionIndicator;
	Dlg.m_bAnimatedCardMovement = m_bAnimatedCardMovement;
	Dlg.m_bAutoZoom = m_bAutoZoom;
	Dlg.m_dwBoardSize = m_dwBoardSize;
	Dlg.m_bShowLife = m_bShowLife;
	Dlg.m_bShowPhaseText = m_bShowPhaseText;
	Dlg.m_bShowPhaseIcon = m_bShowPhaseIcon;
	Dlg.m_bShowAvatarImage = m_bShowAvatarImage;
	Dlg.m_bShowPool = m_bShowPool;
	Dlg.m_bShowLibraryCardCount = m_bShowLibraryCardCount;
	Dlg.m_nBackgroundLocation = m_ElementManager.BackgroundStyle();
	Dlg.m_strCustomBackgroundFile = m_ElementManager.BackgroundFile();
	Dlg.m_bScaleCustomBackground = m_ElementManager.ScaleBackground();
	Dlg.m_bKeepAspectRatio = m_ElementManager.BackgroundKeepAspectRatio();
	Dlg.m_LifeTextColor = m_LifeTextColor;
	Dlg.m_LibraryTextColor = m_LibraryTextColor;
	Dlg.m_PhaseTextColor = m_PhaseTextColor;
	Dlg.m_bAlwaysStackLands = m_bAlwaysStackLands;

	if (!pMainWnd->GetMessageDialogBar()->SpeechAPI())
	{
		Dlg.m_bSpeech = FALSE;
		Dlg.m_bSpeakOpening = FALSE;
		Dlg.m_bDisableSpeech = TRUE;
	}
	else
	{
		Dlg.m_bSpeech = m_bSpeech;
		Dlg.m_bSpeakOpening = m_bSpeakOpening;
	}

	Dlg.m_strAvatarPath1 = m_strAvatarPath1;
	Dlg.m_strAvatarPath2 = m_strAvatarPath2;

	if (Dlg.DoModal() == IDOK)
	{
		m_bShowSelectionIndicator = Dlg.m_bShowSelectionIndicator;
		m_ElementManager.ShowSelectionIndicator(m_bShowSelectionIndicator);

		m_bAnimatedCardMovement = Dlg.m_bAnimatedCardMovement;
		m_bAutoZoom = Dlg.m_bAutoZoom;
		m_bSpeech = (Dlg.m_bSpeech && pMainWnd->GetMessageDialogBar()->SpeechAPI());
		m_bSpeakOpening = (Dlg.m_bSpeakOpening && m_bSpeech);
		m_bShowLife = Dlg.m_bShowLife;
		m_bShowPhaseText = Dlg.m_bShowPhaseText;
		m_bShowPhaseIcon = Dlg.m_bShowPhaseIcon;
		m_bShowAvatarImage = Dlg.m_bShowAvatarImage;
		m_bShowLibraryCardCount = Dlg.m_bShowLibraryCardCount;
		m_bShowPool = Dlg.m_bShowPool;

		bool bRearrange = (m_bAlwaysStackLands != Dlg.m_bAlwaysStackLands);
		m_bAlwaysStackLands = Dlg.m_bAlwaysStackLands;

		m_LifeTextColor = Dlg.m_LifeTextColor;
		m_LibraryTextColor = Dlg.m_LibraryTextColor;
		m_PhaseTextColor = Dlg.m_PhaseTextColor;

		m_dwBoardSize = Dlg.m_dwBoardSize;
		UpdateScrollSize();

		m_ElementManager.SetBackground(Dlg.m_strCustomBackgroundFile,
			(CElementManager::BACKGROUND_STYLE)Dlg.m_nBackgroundLocation,
			Dlg.m_bScaleCustomBackground,
			Dlg.m_bKeepAspectRatio);

		m_strAvatarPath1 = Dlg.m_strAvatarPath1;
		m_strAvatarPath2 = Dlg.m_strAvatarPath2;

		m_ElementManager.UpdateAvatarImage1(CGdipBitmap(Dlg.m_strAvatarPath1), TRUE, FALSE);
		m_ElementManager.UpdateAvatarImage2(CGdipBitmap(Dlg.m_strAvatarPath2));
		m_ElementManager.UpdateInfoElements(GetGame(), 
			m_bShowLife, m_LifeTextColor,
			m_bShowPool, m_bShowPhaseText, m_strCurrentNode, m_PhaseTextColor, 
			m_bShowPhaseIcon, m_bShowLibraryCardCount, m_LibraryTextColor, m_bShowAvatarImage, m_nLocalPlayerIndex);

		if (Dlg.m_nCardSize != -1)
		{
			CCardStore::GetInstance()->SetSmallCardHeight(Dlg.m_nCardSize);

			m_ElementManager.RefreshCardBitmaps();
			bRearrange = true;
		}

		if (bRearrange)
			ArrangeCards(TRUE, TRUE, TRUE, TRUE, TRUE);

		Invalidate();
	}
}

void CMagicWandView::OnApplicationSettings()
{
	CApplicationSettingsDialog AppSettingsDlg;
	AppSettingsDlg.DoModal();
}

void CMagicWandView::OnArrange() 
{
	ArrangeCards();
	m_ElementManager.UpdateMovingElements(TRUE);
}

void CMagicWandView::OnAttack() 
{
	if (m_nBeginningCombat == -1)
		return;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (pSelectionBar->IsSelectingMove())
		pSelectionBar->SelectMove(m_nBeginningCombat);
}

LRESULT CMagicWandView::OnCanDecideNow(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	m_bCanDecideNow = true;
	return 0;
}

LRESULT CMagicWandView::OnConceded(WPARAM wParam, LPARAM lParam)
{	
	int nRemoteUserID = lParam;
	CString* pstrName = reinterpret_cast<CString*>(wParam);

	CString strMessage;
	strMessage.Format(_T("%s conceded."), *pstrName);

	delete pstrName;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetMessageDialogBar()->AddMessage(strMessage, -1, -1, MessageImportance::High);
	pMainWnd->GetMessageDialogBar()->SpeakMessage(strMessage, TRUE);
	MessageBox(strMessage, _T("Game"));

	GameCleanup();

	return 0;
}

LRESULT CMagicWandView::OnConnectedBy(WPARAM wParam, LPARAM lParam)
{	
	int nRemoteUserID = lParam;
	CString* pstrName = reinterpret_cast<CString*>(wParam);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetChatBar()->AddRemoteUser(*pstrName, nRemoteUserID);

	g_pCoreApp->GetNetManager()->GetRemoteUser(nRemoteUserID)->SendFile(
		GetUserAvatarFilePath(), FILETYPE_AVATAR);

	if (g_pCoreApp->GetNetManager()->GetAnnounceNewConnections())
	{
		CString strMessage;
		strMessage.Format(_T("%s connected."), *pstrName);

		MessageBox(strMessage, _T("Connected"), MB_OK | MB_ICONINFORMATION);
	}

	delete pstrName;

	return 0;
}

void CMagicWandView::OnCopyAllCardInfo()
{
	if (!m_pContextMenuCard)
		return;

	CString strAllInfo;
	strAllInfo += m_pContextMenuCard->GetCardEntry()->GetCardName();
	strAllInfo += _T("\r\n");
	strAllInfo += m_pContextMenuCard->GetCardEntry()->GetCardTypeText();

	CString strCastCost(m_pContextMenuCard->GetCardEntry()->GetCastCost(FALSE));
	if (!strCastCost.IsEmpty())
	{
		strAllInfo += _T("\r\n");
		strAllInfo += strCastCost;
	}

	CString strPowerTough(m_pContextMenuCard->GetCardEntry()->GetPowerTough());
	if (!strPowerTough.IsEmpty())
	{
		strAllInfo += _T("\r\n");
		strAllInfo += strPowerTough;
	}

	CString strRulesText(m_pContextMenuCard->GetCardEntry()->GetCardText(FALSE));
	if (!strRulesText.IsEmpty())
	{
		strAllInfo += _T("\r\n");
		strAllInfo += strRulesText;
	}

	strAllInfo += _T("\r\n");
	strAllInfo += m_pContextMenuCard->GetCardEntry()->GetExpansionName();
	strAllInfo += _T("\r\n");

	strAllInfo.Replace(_T("â"),_T("a"));
	strAllInfo.Replace(_T("à"),_T("a"));
	strAllInfo.Replace(_T("á"),_T("a"));
	strAllInfo.Replace(_T("Æ"),_T("AE"));
	strAllInfo.Replace(_T("é"),_T("e"));
	strAllInfo.Replace(_T("ú"),_T("u"));
	strAllInfo.Replace(_T("û"),_T("u"));
	//strAllInfo.Replace(_T(":"),_T(""));

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(strAllInfo);

	m_pContextMenuCard = NULL;
}

void CMagicWandView::OnCopyCardName()
{
	if (!m_pContextMenuCard)
		return;

	CString strName=m_pContextMenuCard->GetCardEntry()->GetCardName();
	strName.Replace(_T("â"),_T("a"));
	strName.Replace(_T("à"),_T("a"));
	strName.Replace(_T("á"),_T("a"));
	strName.Replace(_T("Æ"),_T("AE"));
	strName.Replace(_T("é"),_T("e"));
	strName.Replace(_T("ú"),_T("u"));
	strName.Replace(_T("û"),_T("u"));
	//strName.Replace(_T(":"),_T(""));

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(strName);

	m_pContextMenuCard = NULL;
}

void CMagicWandView::OnCopyCardRulesText()
{
	if (!m_pContextMenuCard)
		return;

	CString strRulesText(m_pContextMenuCard->GetCardEntry()->GetCardText(FALSE));
	strRulesText.Replace(_T("â"),_T("a"));
	strRulesText.Replace(_T("à"),_T("a"));
	strRulesText.Replace(_T("á"),_T("a"));
	strRulesText.Replace(_T("Æ"),_T("AE"));
	strRulesText.Replace(_T("é"),_T("e"));
	strRulesText.Replace(_T("ú"),_T("u"));
	strRulesText.Replace(_T("û"),_T("u"));
	//strRulesText.Replace(_T(":"),_T(""));

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(strRulesText);

	m_pContextMenuCard = NULL;
}

void CMagicWandView::OnDecideNow() 
{
	m_bDecideNow = true;
}

void CMagicWandView::OnDefault() 
{
	if (m_nDefaultMove != -1)
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
		if (pSelectionBar->IsSelectingMove())
			pSelectionBar->SelectMove(m_nDefaultMove);
	}
}

void CMagicWandView::OnDestroy() 
{
	GameCleanup();

	g_pCoreApp->GetNetManager()->SetSendConnectedBy(NULL);
	g_pCoreApp->GetNetManager()->SetSendDisconnect(NULL);
	g_pCoreApp->GetNetManager()->SetSendGameConceded(NULL);

	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MAX_DURATION, m_dwMaxDuration);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_SELECTION_INDICATOR, m_bShowSelectionIndicator);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ANIMATED_CARD_MOVEMENT, m_bAnimatedCardMovement);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_DBL_CLK_ZOOM, m_bDblClkZoom);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_AUTO_ZOOM, m_bAutoZoom);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_EXTRA_CAREFUL, m_bExtraCareful);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_OVERKILL, m_bOverkill);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_CONSERVATIVE, m_bConservative);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BOOST_PROCESS, m_bBoostProcess);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SPEECH, m_bSpeech);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SPEAK_OPENING, m_bSpeakOpening);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BOARD_SIZE, m_dwBoardSize);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_LIFE, m_bShowLife);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_PHASE_TEXT, m_bShowPhaseText);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_PHASE_ICON, m_bShowPhaseIcon);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_AVATAR_IMAGE, m_bShowAvatarImage);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_LIBRARY_CARD_COUNT, m_bShowLibraryCardCount);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SHOW_POOL, m_bShowPool);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_ALWAYS_STACK_LANDS, m_bAlwaysStackLands);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LIFE_TEXT_COLOR, m_LifeTextColor);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_LIBRARY_TEXT_COLOR, m_LibraryTextColor);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_PHASE_TEXT_COLOR, m_PhaseTextColor);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_OP_GRAVEYARD, m_bViewGraveyard1);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_YR_GRAVEYARD, m_bViewGraveyard2);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_VIEW_OP_HAND, m_bViewHand1);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_BACKGROUND_LOCATION, m_ElementManager.BackgroundStyle());
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_CUSTOM_BACKGROUND_FILE, m_ElementManager.BackgroundFile());
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_SCALE_CUSTOM_BACKGROUND, m_ElementManager.ScaleBackground());
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_KEEP_ASPECT_RATIO, m_ElementManager.BackgroundKeepAspectRatio());
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_COMPUTER_PLAYER_NAME, m_strComputerPlayerName);
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR1, m_strAvatarPath1);
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_AVATAR2, m_strAvatarPath2);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_CARD_SIZE, CCardStore::GetInstance()->GetSmallCardSize().Height);

	KillTimer(ANIMATION_ID_EVENT);
	KillTimer(CARD_TIP_ID_EVENT);

	CScrollView::OnDestroy();	
}

LRESULT CMagicWandView::OnDisconnect(WPARAM wParam, LPARAM lParam)
{	
	int nRemoteUserID = lParam;
	CString* pstrName = reinterpret_cast<CString*>(wParam);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetChatBar()->RemoveRemoteUser(*pstrName, nRemoteUserID);

	// See if this user is in a game

	BOOL bIsRemoteOpponent = FALSE;

	if (GetGame())
	{
		for (int i = 0; i < GetGame()->GetPlayerCount(); ++i)
		{
			CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(GetGame()->GetPlayer(i)->GetInterface());
			if (pNetInterface && (pNetInterface->GetRemoteUserID() == nRemoteUserID))
			{
				bIsRemoteOpponent = TRUE;
				break;
			}
		}
	}

	if (bIsRemoteOpponent || g_pCoreApp->GetNetManager()->GetAnnounceDisconnect())
	{
		CString strMessage;
		strMessage.Format(_T("%s disconnected."), *pstrName);

		MessageBox(strMessage, _T("Disconnected"), MB_OK | MB_ICONINFORMATION);
	}

	delete pstrName;

	if (bIsRemoteOpponent)
		GameCleanup();

	return 0;
}

void CMagicWandView::OnEditCardUsagePattern()
{
	if (!m_pContextMenuCard || (GetGame()->IsThinking()))
		return;

	CUsageCard* pUsageCard = CUsagePattern::GetInstance()->AddCard(FALSE, m_pContextMenuCard->GetCard()->GetPrintedCardName());
	if (!pUsageCard)
		return;

	CUsageAbilityDialog UsageAbilityDlg(this);
	UsageAbilityDlg.SetUsageCard(pUsageCard);

	UsageAbilityDlg.DoModal();

	/* 11/18/2003 to allow 'always disable usage'
	if (!pUsageCard->HasEntries())
		CUsagePattern::GetInstance()->RemoveCard(pUsageCard);
	*/

	//CUsagePattern::GetInstance()->UpdateTo(m_pContextMenuCard->GetCard());
	if (GetGame())
		CUsagePattern::GetInstance()->UpdateAll(GetGame());	// This is needed to update all card instances
}

void CMagicWandView::OnEnableCardUsagePattern()
{
	if (!m_pContextMenuCard || (GetGame()->IsThinking()))
		return;

	CUsageCard* pUsageCard = CUsagePattern::GetInstance()->AddCard(FALSE, m_pContextMenuCard->GetCard()->GetPrintedCardName());
	if (!pUsageCard)
		return;

	pUsageCard->SetEnable(!pUsageCard->IsEnabled());

	/* 11/18/2003 to allow 'always disable usage'
	if (!pUsageCard->HasEntries())
		CUsagePattern::GetInstance()->RemoveCard(pUsageCard);
	*/

	//CUsagePattern::GetInstance()->UpdateTo(m_pContextMenuCard->GetCard());
	if (GetGame())
		CUsagePattern::GetInstance()->UpdateAll(GetGame());	// This is needed to update all card instances
}

LRESULT CMagicWandView::OnEngineException(WPARAM wParam, LPARAM lParam)
{	
	UNUSED(wParam);

	CString* pStr = (CString*)lParam;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	pMainWnd->GetMessageDialogBar()->AddMessage(*pStr, -1, -1, MessageImportance::High);

	CStartDialog::s_nDebugRepeat = 0;

	MessageBox(*pStr, _T("Error"), MB_ICONERROR | MB_OK);

	delete pStr;

	GameCleanup();

	return 0;
}

BOOL CMagicWandView::OnEraseBkgnd(CDC* /*pDC*/) 
{
	return TRUE;
}

LRESULT CMagicWandView::OnFileReceived(WPARAM wParam, LPARAM lParam)
{	
	CNetManager::FileReceivedData* pData = reinterpret_cast<CNetManager::FileReceivedData*>(wParam);
	if (!pData)
		return 0;

	if (pData->fileType == FILETYPE_AVATAR)
	{
		if (GetGame())
		{
			// This section of code is not usually hit because the avatar image should has already been received before a game has started

			for (int i = 0; i < GetGame()->GetPlayerCount(); ++i)
				if (i != m_nLocalPlayerIndex)
				{
					CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(GetGame()->GetPlayer(i)->GetInterface());
					if (pNetInterface && (pNetInterface->GetRemoteUserID() == pData->nFromRemoteUserID))
					{
						// HACK: assume only one remote user

						m_ElementManager.UpdateAvatarImage1(
							g_pCoreApp->GetNetManager()->GetRemoteUser(pData->nFromRemoteUserID)->GetAvatarBitmap(),
							FALSE,
							TRUE);

						break;
					}
				}
		}		
	}
	else
		ATLASSERT(false); // unknown file type received

	delete pData;

	return 0;
}

LRESULT CMagicWandView::OnGameEnded(WPARAM wParam, LPARAM lParam)
{	
	UNUSED(wParam);

	CString* pStr = (CString*)lParam;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	pMainWnd->GetMessageDialogBar()->AddMessage(*pStr, -1, -1, MessageImportance::High);
	pMainWnd->GetMessageDialogBar()->SpeakMessage(*pStr, TRUE);

	if (CStartDialog::s_nDebugRepeat)
	{
		--CStartDialog::s_nDebugRepeat;
		if (CStartDialog::s_bSeedIncrease)
			++CStartDialog::s_uSeed;
	}
	
	if (!CStartDialog::s_nDebugRepeat)
	{
		//MessageBox(*pStr, _T("Game"));

		CGameSummaryDlg dlg;
		dlg.m_strStatus = *pStr;
		dlg.DoModal();
	}

	delete pStr;

	GameCleanup();

	if (CStartDialog::s_nDebugRepeat)
		PostMessage(WM_COMMAND, MAKEWPARAM(IDM_START, 0));		

	return 0;
}

void CMagicWandView::OnGamePlay() 
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	CGameSettingsDialog Dlg;

	Dlg.m_dwMaxDuration = m_dwMaxDuration;
	Dlg.m_nDblClk = (m_bDblClkZoom ? 1 : 0);
	Dlg.m_bExtraCareful = m_bExtraCareful;
	Dlg.m_bBoostProcess = m_bBoostProcess;
	Dlg.m_bOverkill = m_bOverkill;
	Dlg.m_bConservative = m_bConservative;

	Dlg.m_nSelectionTimerCountdown = pMainWnd->GetSelectionDialogBar()->GetSelectionTimerCountdown();
	Dlg.m_bDelaySelectInMain = pMainWnd->GetSelectionDialogBar()->GetDelaySelectInMain();
	Dlg.m_bDelaySelectInOthers = pMainWnd->GetSelectionDialogBar()->GetDelaySelectInOthers();

	Dlg.m_bAutoSelectSingleMove = pMainWnd->GetSelectionDialogBar()->AutoMove();
	Dlg.m_bAutoSelectUntapMoves = pMainWnd->GetSelectionDialogBar()->AutoUntap();
	Dlg.m_bShowAllMoves = pMainWnd->GetSelectionDialogBar()->ShowTrick();

	Dlg.m_strComputerPlayerName = m_strComputerPlayerName;

	if (Dlg.DoModal() == IDOK)
	{
		m_dwMaxDuration = Dlg.m_dwMaxDuration;
		m_bDblClkZoom = Dlg.m_nDblClk;
		m_bExtraCareful = Dlg.m_bExtraCareful;
		m_bBoostProcess = Dlg.m_bBoostProcess;
		m_bOverkill = Dlg.m_bOverkill;
		m_bConservative = Dlg.m_bConservative;

		m_strComputerPlayerName = Dlg.m_strComputerPlayerName;
	
		pMainWnd->GetSelectionDialogBar()->SetSelectionTimerCountdown(Dlg.m_nSelectionTimerCountdown);
		pMainWnd->GetSelectionDialogBar()->SetDelaySelectInMain(Dlg.m_bDelaySelectInMain);
		pMainWnd->GetSelectionDialogBar()->SetDelaySelectInOthers(Dlg.m_bDelaySelectInOthers);

		pMainWnd->GetSelectionDialogBar()->SetAutoMove(Dlg.m_bAutoSelectSingleMove);
		pMainWnd->GetSelectionDialogBar()->SetAutoUntap(Dlg.m_bAutoSelectUntapMoves);
		pMainWnd->GetSelectionDialogBar()->SetShowTrick(Dlg.m_bShowAllMoves);

		if (GetGame())
		{
			GetGame()->SetThinkParameter(m_dwMaxDuration,
				To_bool(m_bExtraCareful),
				To_bool(m_bBoostProcess),
				To_bool(m_bOverkill),
				To_bool(m_bConservative));
		}
	}
}

void CMagicWandView::OnGameUndo()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->GetSelectionDialogBar()->SelectFirstUndoMove();
}

void CMagicWandView::OnGetCardRulings()
{
	if (!m_pContextMenuCard)
		return;

	CString strCardName(m_pContextMenuCard->GetCardEntry()->GetTrCardName());

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->GetCardRulings(strCardName);

	m_pContextMenuCard = NULL;
}

void CMagicWandView::OnGraphDefault() 
{
	if (m_nDefaultMove != -1)
		OnDefault();
	//else
		//if (m_bCanDecideNow && m_bWithComputer)
		//	OnDecideNow();
}

void CMagicWandView::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	m_ElementManager.MoveInfoElements();

	CScrollView::OnHScroll(nSBCode, nPos, pScrollBar);
}

LRESULT CMagicWandView::OnInitCardStore(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->SetBusyState(2);

	CLoadCardStoreDialog Dlg;
	Dlg.DoModal();

	pMainWnd->SetBusyState(0);

	return 0;
}

void CMagicWandView::OnLButtonDblClk(UINT /*nFlags*/, CPoint point) 
{
	CPoint ScrollPos(GetScrollPosition());

	m_CardTip.Hide();

	CUICard* pCard;
	if ((pCard = m_ElementManager.GetCard(point + ScrollPos)) != NULL)
	{
		if (m_bDblClkZoom)
		{
			m_ElementManager.Zoom(pCard);
			return;
		}

		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
		if (pSelectionBar->IsSelectingMove())
		{
			CMenu ContextMenu;
			ContextMenu.CreatePopupMenu();

			pSelectionBar->AddSelectionToMenu(&ContextMenu, pCard->GetCard(),
				TRUE,		// Perform only single available move
				FALSE);
			UINT uID = ContextMenu.GetDefaultItem(0);
			if (uID != -1)
				PostMessage(WM_COMMAND, MAKEWPARAM(uID, 0));
		}
	}
}

void CMagicWandView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CPoint ScrollPos(GetScrollPosition());

	m_CardTip.Hide();

	m_FromPt = point;
	m_ToPt = point;
	m_PreviousCardPt = CPoint(0, 0);

	CUICard* pCard;
	if ((pCard = m_ElementManager.GetCard(point + ScrollPos)) != NULL)
	{
		SetCapture();
		m_bMoving = TRUE;
		m_bMoved = FALSE;

		if (m_ElementManager.HasSelections())
		{
			if (!m_ElementManager.ElementSelected(pCard))
			{
				if (!(nFlags & MK_SHIFT))
					m_ElementManager.UnselectAllElements();
				m_ElementManager.SelectElement(pCard);
			}
		}
		else
			m_ElementManager.SelectElement(pCard);

		if (m_ElementManager.GetSelectedCount() == 1)
			m_PreviousCardPt = pCard->GetTopLeft();
	}
	else 
	{
		SetCapture();
		m_bMoving = FALSE;
		m_bMoved = FALSE;
		m_ElementManager.RemoveZoom();
		m_ElementManager.UnselectAllElements();
	}
}

void CMagicWandView::OnLButtonUp(UINT /*nFlags*/, CPoint /*point*/) 
{
	CPoint ScrollPos(GetScrollPosition());

	m_CardTip.Hide();

	if (this != GetCapture())
		return;

	ReleaseCapture();

	if (m_bMoving)
	{
		if (m_bMoved)
		{
			std::vector<CUIElement*> selectedElements;
			m_ElementManager.GetSelectedElements(selectedElements);

			if (selectedElements.size())
			{
				CUICard* pSrcUICard = (CUICard*)(selectedElements[0]);
				pSrcUICard->SetTransparent(FALSE);
				m_ElementManager.InvalidateElement(pSrcUICard);

				if (m_pHighlightedCard || m_pHighlightedAvatar)
				{
					CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
					CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();

					CCard* pSrcCard = pSrcUICard->GetCard();				
					int nMoveIndex;
					if (m_pHighlightedCard)
					{
						nMoveIndex = pSelectionBar->GetMoveIndex(pSrcCard, m_pHighlightedCard->GetCard(), pSelectionBar->ShowTrick());

						m_pHighlightedCard->SetHighlighted(FALSE);
						m_ElementManager.InvalidateElement(m_pHighlightedCard);
						m_pHighlightedCard = NULL;
					}
					else
					{
						nMoveIndex = pSelectionBar->GetMoveIndex(pSrcCard, m_pHighlightedAvatar->GetPlayer(), pSelectionBar->ShowTrick());

						m_pHighlightedAvatar->DrawBorder(FALSE);
						m_ElementManager.InvalidateElement(m_pHighlightedAvatar);
						m_pHighlightedAvatar = NULL;
					}

					ATLASSERT(nMoveIndex != -1);

					m_ElementManager.InvalidateElement(pSrcUICard);
					pSrcUICard->MoveToPt(m_PreviousCardPt);		// Move dragged card back to original location
					m_ElementManager.InvalidateElement(pSrcUICard);
				
					pSelectionBar->SelectMove(nMoveIndex);
				}
			}
		}
	}
	else
	{
		CRect BandRect(m_FromPt, m_ToPt);
		BandRect.NormalizeRect();

		InvalidateRect(&BandRect);

		BandRect += ScrollPos;

		m_ElementManager.SelectElements(BandRect);
	}

	m_bMoving = FALSE;
	m_bMoved = FALSE;
}

void CMagicWandView::OnMButtonDblClk(UINT nFlags, CPoint point)
{
	OnMButtonDown(nFlags, point);
}

void CMagicWandView::OnMButtonDown(UINT nFlags, CPoint point)
{
	CPoint ScrollPos(GetScrollPosition());
	CUICard* pUICard = m_ElementManager.GetCard(point + ScrollPos);

	if (!pUICard || pUICard->IsLargeSize())
	{
		m_ElementManager.RemoveZoom();
	}
	else
	{
		m_ElementManager.Zoom(pUICard);
	}
}

void CMagicWandView::OnMouseMove(UINT nFlags, CPoint point) 
{
	CPoint ScrollPos(GetScrollPosition());

	if ((nFlags & MK_LBUTTON) &&  (this == GetCapture()))
	{          
		if (m_bMoving)
		{
			if (m_ElementManager.HasSelections())
			{
				m_ElementManager.RemoveZoom();

				// Dragging
				CSize MoveSize = point - m_FromPt;

				m_ElementManager.MoveSelections(MoveSize);

				m_FromPt = point;
				m_bMoved = TRUE;

				BOOL bRemoveHighlightedCard = TRUE;
				BOOL bRemoveHighlightedAvatar = TRUE;

				if (m_ElementManager.GetSelectedCount() == 1)
				{
					CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
					CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
					if (pSelectionBar->IsSelectingMove())
					{
						std::vector<CUIElement*> selectedElements;
						m_ElementManager.GetSelectedElements(selectedElements);
						ATLASSERT(selectedElements.size());

						if (selectedElements.size())
						{
							CUICard* pUICard = (CUICard*)selectedElements[0];
							CCard* pSrcCard = pUICard->GetCard();

							if (pSelectionBar->HasMove(pSrcCard, pSelectionBar->ShowTrick()))
							{
								pUICard->SetTransparent(TRUE);
								m_ElementManager.InvalidateElement(pUICard);

								// Any avatar under this one?
								CUIAvatar* pDesAvatar;
								if ((pDesAvatar = m_ElementManager.GetAvatar(point + ScrollPos)) != NULL)
								{
									int nMoveIndex = pSelectionBar->GetMoveIndex(pSrcCard, pDesAvatar->GetPlayer(), pSelectionBar->ShowTrick());
									if (nMoveIndex >= 0)
									{
										if (m_pHighlightedAvatar != pDesAvatar)
										{
											if (m_pHighlightedAvatar)		// Previously highlighted card
											{
												m_pHighlightedAvatar->DrawBorder(FALSE);
												m_ElementManager.InvalidateElement(m_pHighlightedAvatar);
											}

											pSelectionBar->HighlightMove(nMoveIndex);

											m_pHighlightedAvatar = pDesAvatar;
											m_pHighlightedAvatar->DrawBorder(TRUE);
											m_ElementManager.InvalidateElement(m_pHighlightedAvatar);
										}
										
										bRemoveHighlightedAvatar = FALSE;
									}
									else
										pDesAvatar = NULL;
								}

								if (!pDesAvatar)
								{
									// Any card under this one?
									CUICard* pDesCard;
									if ((pDesCard = m_ElementManager.GetCard(point + ScrollPos, pUICard)) != NULL)
									{
										int nMoveIndex = pSelectionBar->GetMoveIndex(pSrcCard, pDesCard->GetCard(), pSelectionBar->ShowTrick());
										if (nMoveIndex >= 0)
										{
											if (m_pHighlightedCard != pDesCard)
											{
												if (m_pHighlightedCard)		// Previously highlighted card
												{
													m_pHighlightedCard->SetHighlighted(FALSE);
													m_ElementManager.InvalidateElement(m_pHighlightedCard);
												}

												pSelectionBar->HighlightMove(nMoveIndex);

												m_pHighlightedCard = pDesCard;
												m_pHighlightedCard->SetHighlighted(TRUE);
												m_ElementManager.InvalidateElement(m_pHighlightedCard);
											}
											
											bRemoveHighlightedCard = FALSE;
										}
									}
								}
							}
							else
							{
								pUICard->SetTransparent(FALSE);
								m_ElementManager.InvalidateElement(pUICard);
							}
						}
					}
				}

				if (bRemoveHighlightedCard && m_pHighlightedCard)			// Previously highlighted card
				{
					m_pHighlightedCard->SetHighlighted(FALSE);
					m_ElementManager.InvalidateElement(m_pHighlightedCard);
					m_pHighlightedCard = NULL;
				}

				if (bRemoveHighlightedAvatar && m_pHighlightedAvatar)			// Previously highlighted avatar
				{
					m_pHighlightedAvatar->DrawBorder(FALSE);
					m_ElementManager.InvalidateElement(m_pHighlightedAvatar);
					m_pHighlightedAvatar = NULL;
				}
			}
			else
			{
				m_bMoving = FALSE;
				m_bMoved = FALSE;
				ReleaseCapture();
			}
		}
		else
		{
			CRect oldBandRect(m_FromPt, m_ToPt);
			oldBandRect.NormalizeRect();

			CRect newBandRect(m_FromPt, point);
			newBandRect.NormalizeRect();

			CRect invalidateRect;
			invalidateRect.UnionRect(&newBandRect, &oldBandRect);

			CRgn invalidateRgn;
			invalidateRgn.CreateRectRgn(invalidateRect.left, invalidateRect.top, invalidateRect.right, invalidateRect.bottom);

			CClientDC dc(this);

			dc.SelectClipRgn(&invalidateRgn);

			CMemDC dc2(&dc);

			m_ElementManager.Draw(dc2, invalidateRgn, invalidateRect);

			dc2.SelectClipRgn(NULL);

			m_ToPt = point;
			DrawSelectionBand(&dc2, newBandRect);
		}

		return;
	}

	// If mouse is moving without left button pressed

	/*
	if (CScrollView::GetActiveWindow() != ::AfxGetMainWnd() ||
		GetCapture() ||
		m_bMoving)
	{
		m_strCardTipText = _T("");
		if (m_CardTip.GetSafeHwnd())
			m_CardTip.Hide();
		return;
	}*/

	CUICard* pUICard = m_ElementManager.GetCard(point + ScrollPos);
	BOOL bCardName = (pUICard ? pUICard->PointInCardName(point + ScrollPos) : FALSE);

	// Preview

	if (pUICard && !pUICard->IsFaceDown())
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		pMainWnd->GetPreviewBar()->SetBitmap(pUICard->GetCardEntry());
	}

	// Tooltip

	if (m_CardTip.GetSafeHwnd())
	{
		if (!pUICard || (bCardName && m_bAutoZoom) || pUICard->IsFaceDown())
		{
			m_strCardTipText = _T("");
			m_CardTip.Hide();
		}
		else
		{
			BOOL bShow = TRUE;
			if (m_bAutoZoom)
			{
				if (pUICard->GetCardName() == pUICard->GetCardEntry()->GetCardName())
					bShow = FALSE;
			}

			if (bShow)
			{
				CString TTText = m_bAutoZoom ? pUICard->GetCardName() : pUICard->GetToolTipText(point + ScrollPos);
				if (TTText != m_CardTip.GetTipText() &&
					m_CardTipPoint != CPoint(point.x + 15, point.y))
				{
					m_CardTipPoint = CPoint(point.x + 15, point.y);
					ClientToScreen(&m_CardTipPoint);
					m_strCardTipText = TTText;

					if (!_tcslen(m_strCardTipText))
						m_CardTip.Hide();
					else
						SetTimer(CARD_TIP_ID_EVENT, CARD_TIP_ELAPSE, NULL);
				}
			}
		}
	}

	// Zoom

	if (m_bAutoZoom)
	{
		if (!pUICard || (!bCardName && !pUICard->IsLargeSize()))
		{
			m_ElementManager.RemoveZoom();
		}
		else
		{
			m_ElementManager.Zoom(pUICard);
		}
	}
}

BOOL CMagicWandView::OnMouseWheel(UINT fFlags, short zDelta, CPoint point)
{
	if (!(fFlags & MK_CONTROL))
		return TRUE;

	int nCardSize = CCardStore::GetInstance()->GetSmallCardSize().Height;

	if (zDelta < 0)
	{
		if (nCardSize <= s_nMinimumCardHeight)
			return TRUE;

		nCardSize -= 5;
		if (nCardSize < s_nMinimumCardHeight)
			nCardSize = s_nMinimumCardHeight;
	}
	else
	{
		if (nCardSize >= s_nMaximumCardHeight)
			return TRUE;

		nCardSize += 5;

		if (nCardSize > s_nMaximumCardHeight)
			nCardSize = s_nMaximumCardHeight;
	}

	m_ElementManager.RemoveZoom();
	m_ElementManager.UnselectAllElements();

	CCardStore::GetInstance()->SetSmallCardHeight(nCardSize);

	m_ElementManager.RefreshCardBitmaps();

	ArrangeCards(TRUE, TRUE, TRUE, TRUE, TRUE);

	//Invalidate();
	UpdateWindow();

	return TRUE;
} 

LRESULT CMagicWandView::OnOrderCards(WPARAM /*wParam*/, LPARAM lParam)
{	
	OrderCardsData* pOrderCard = (OrderCardsData*)lParam;

	COrderCardDialog Dlg;

	Dlg.SetCardContainer(pOrderCard->pCardContainer);
	Dlg.SetReadOnly(pOrderCard->bReadOnly);
	Dlg.SetCaption(pOrderCard->strCaption);

	Dlg.DoModal();

	return 0;
}

void CMagicWandView::OnRButtonDown(UINT /*nFlags*/, CPoint point) 
{
	CPoint ScrollPos(GetScrollPosition());

	m_CardTip.Hide();

	CUICard* pUICard;
	if ((pUICard = m_ElementManager.GetCard(point + ScrollPos)) != NULL)
	{
		m_pContextMenuCard = pUICard;

		CMenu ContextMenu;
		ContextMenu.CreatePopupMenu();

		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
		if (pSelectionBar->IsSelectingMove())
			pSelectionBar->AddSelectionToMenu(&ContextMenu, pUICard->GetCard(), !m_bDblClkZoom, FALSE);

		if (!pUICard->IsFaceDown())
		{
			ContextMenu.AppendMenu(MF_STRING, IDM_COPY_ALL_CARD_INFO, _T("Copy All Card Info"));
			ContextMenu.AppendMenu(MF_STRING, IDM_COPY_CARD_NAME, _T("Copy Card Name"));
			ContextMenu.AppendMenu(MF_STRING, IDM_COPY_CARD_RULES_TEXT, _T("Copy Card Rules Text"));
			ContextMenu.AppendMenu(MF_STRING, IDM_CARD_RULINGS, _T("Get Card Rulings Online"));
			ContextMenu.AppendMenu(MF_SEPARATOR);
		}

		if (pUICard->IsLargeSize())
			ContextMenu.AppendMenu(MF_STRING, IDM_ZOOM, _T("Zoom Out"));
		else
			ContextMenu.AppendMenu(MF_STRING, IDM_ZOOM, _T("Zoom In"));

		if (!pUICard->GetCard()->GetController()->IsComputer() && 
			!pUICard->GetCard()->GetController()->IsRemote() &&
			!pUICard->IsFaceDown())
		{
			ContextMenu.AppendMenu(MF_SEPARATOR);

			CUsageCard* pUsageCard = CUsagePattern::GetInstance()->GetCard(FALSE, pUICard->GetCard()->GetPrintedCardName());

			ContextMenu.AppendMenu(MF_STRING |
								(GetGame()->IsThinking() || !pUsageCard ? MF_GRAYED : 0) |
								(pUsageCard && pUsageCard->IsEnabled() ? MF_CHECKED : MF_UNCHECKED),
								IDM_ENABLE_CARD_USAGE_PATTERN, _T("Enable Usage Pattern"));
			ContextMenu.AppendMenu(MF_STRING | (GetGame()->IsThinking() ? MF_GRAYED : 0), IDM_EDIT_CARD_USAGE_PATTERN, _T("Edit Usage Pattern..."));
		}

		if (m_bDblClkZoom)
		{
			ATLASSERT(ContextMenu.GetDefaultItem(0) == -1);
			ContextMenu.SetDefaultItem(IDM_ZOOM);
		}

		ClientToScreen(&point);
		ContextMenu.TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this);
	}
	else
	{
		CMenu AllContextMenus;
		AllContextMenus.LoadMenu(IDR_CONTEXT_MENU);
		CMenu* pPopUpMenu = AllContextMenus.GetSubMenu(0);
		
		ClientToScreen(&point);

		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
		pPopUpMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, pMainWnd);
	}
}

LRESULT CMagicWandView::OnSelectCards(WPARAM /*wParam*/, LPARAM lParam)
{	
	SelectCardsData* pSelectCard = (SelectCardsData*)lParam;

	CCardDialog Dlg;

	Dlg.SetCaption(pSelectCard->strCaption);
	Dlg.SetTitle(pSelectCard->strTitle);
	Dlg.SetCardContainer(pSelectCard->pCardContainer);
	Dlg.SetMinSelections(GET_INTEGER(pSelectCard->nMinSelect));
	Dlg.SetMaxSelections(GET_INTEGER(pSelectCard->nMaxSelect));
	Dlg.SetSelectedCards(&(pSelectCard->SelectedCards));
	Dlg.SetCardFilter(pSelectCard->pCardFilter);

	Dlg.DoModal();

	return 0;
}

void CMagicWandView::OnSelectMoves(UINT nID) 
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (pSelectionBar->IsSelectingMove())
		pSelectionBar->SelectMove(nID - IDM_MOVE_FIRST);
}

void CMagicWandView::OnShowHand() 
{
	if (!g_pCoreApp->GetDeveloper())
		return;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Computer's %s"), ZoneId::ToString(ZoneId::Hand));

	CString strTitle;
	strTitle.Format(_T("Cards in Computer's %s"), ZoneId::ToString(ZoneId::Hand));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(strTitle);
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(0)->GetZoneById(ZoneId::Hand)->GetCardContainer()));

	Dlg.DoModal();
}

void CMagicWandView::OnShowLibrary() 
{
	if (!g_pCoreApp->GetDeveloper())
		return;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove())
		return;

	CPlayer* pPlayer = GetGame()->GetPlayer(1);

	CCardDialog dlg;

	CString strCaption;
	strCaption.Format(_T("Your %s"), ZoneId::ToString(ZoneId::Library));

	CString strTitle;
	strTitle.Format(_T("Cards in your %s"), ZoneId::ToString(ZoneId::Library));

	dlg.SetCaption(strCaption);
	dlg.SetTitle(strTitle);
	dlg.SetCardContainer(&(pPlayer->GetZoneById(ZoneId::Library)->GetCardContainer()));

	CCountedCardContainer selectedCards;
	dlg.SetSelectedCards(&selectedCards);
	dlg.SetMaxSelections(999);
	dlg.SetSorting(FALSE);

	if (dlg.DoModal() == IDOK)
	{
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < selectedCards.GetSize(); ++i)
		{
			CCard* pCard = selectedCards.GetAt(i);
			pCard->Move(pInplay, NULL, MoveType::Others);
		}

		RefreshBoard();
	}
}

void CMagicWandView::OnShowOpponentsGrave()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Opponent's %s zone"), ZoneId::ToString(ZoneId::Graveyard));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(0)->GetZoneById(ZoneId::Graveyard)->GetCardContainer()));
	Dlg.SetSorting(FALSE);

	Dlg.DoModal();
}

void CMagicWandView::OnShowOpponentsCommand()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Opponent's %s zone"), ZoneId::ToString(ZoneId::_Effects));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(0)->GetZoneById(ZoneId::_Effects)->GetCardContainer()));
	Dlg.SetSorting(FALSE);

	Dlg.DoModal();
}

void CMagicWandView::OnShowOpponentsLibrary() 
{
	if (!g_pCoreApp->GetDeveloper())
		return;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove())
		return;

	CPlayer* pPlayer = GetGame()->GetPlayer(0);

	CCardDialog dlg;

	CString strCaption;
	strCaption.Format(_T("Opponent's %s"), ZoneId::ToString(ZoneId::Library));

	CString strTitle;
	strTitle.Format(_T("Cards in opponent's %s"), ZoneId::ToString(ZoneId::Library));

	dlg.SetCaption(strCaption);
	dlg.SetTitle(strTitle);
	dlg.SetCardContainer(&(pPlayer->GetZoneById(ZoneId::Library)->GetCardContainer()));

	CCountedCardContainer selectedCards;
	dlg.SetSelectedCards(&selectedCards);
	dlg.SetMaxSelections(999);
	dlg.SetSorting(FALSE);

	if (dlg.DoModal() == IDOK)
	{
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < selectedCards.GetSize(); ++i)
		{
			CCard* pCard = selectedCards.GetAt(i);
			pCard->Move(pInplay, NULL, MoveType::Others);
		}

		RefreshBoard();
	}
}

void CMagicWandView::OnShowOpponentsRemoved()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Opponent's %s zone"), ZoneId::ToString(ZoneId::Exile));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(0)->GetZoneById(ZoneId::Exile)->GetCardContainer()));

	Dlg.DoModal();
}

void CMagicWandView::OnShowYourGrave()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Your %s zone"), ZoneId::ToString(ZoneId::Graveyard));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(1)->GetZoneById(ZoneId::Graveyard)->GetCardContainer()));
	Dlg.SetSorting(FALSE);

	Dlg.DoModal();
}

void CMagicWandView::OnShowYourRemoved()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Your %s zone"), ZoneId::ToString(ZoneId::Exile));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(1)->GetZoneById(ZoneId::Exile)->GetCardContainer()));

	Dlg.DoModal();
}

void CMagicWandView::OnShowYourCommand()
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
	if (!pSelectionBar->IsSelectingMove() || !m_pGameThread || !GetGame())
		return;

	CCardDialog Dlg;

	CString strCaption;
	strCaption.Format(_T("Your %s zone"), ZoneId::ToString(ZoneId::_Effects));

	Dlg.SetCaption(strCaption);
	Dlg.SetTitle(_T("Cards"));
	Dlg.SetCardContainer(&(GetGame()->GetPlayer(1)->GetZoneById(ZoneId::_Effects)->GetCardContainer()));

	Dlg.DoModal();
}

void CMagicWandView::OnSize(UINT nType, int cx, int cy) 
{
	CScrollView::OnSize(nType, cx, cy);

	m_ElementManager.MoveInfoElements();

	if (GetGame())
	{
		ArrangeCards(TRUE, TRUE, TRUE, TRUE, TRUE);
	}
}

void CMagicWandView::OnStart() 
{
	if (m_pGameThread)
		return;

	CCardFactory::GetInstance()->Reset();

	CStartDialog Dlg;
	Dlg.m_strComputerPlayerName = m_strComputerPlayerName;
	if (Dlg.DoModal() != IDOK)
		return;

	// Create game thread and wait for game to be ready

	m_pGameThread = new CGameThread(GetSafeHwnd());
	m_pGameThread->AddRef();
	CGame* pGame = m_pGameThread->CreateGame(&Dlg, this);

	// Setup UI

	m_bWithComputer = Dlg.m_bWithComputer;
	m_nLocalPlayerIndex = 1;

	CPlayer* pOpponent = pGame->GetPlayer(0);
	CPlayer* pPlayer = pGame->GetPlayer(m_nLocalPlayerIndex);

	// Reset events

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();

	HANDLE hMoveSelected = pMainWnd->GetSelectionDialogBar()->GetMoveSelectedEvent();
	ResetEvent(hMoveSelected);

	ResetEvent(m_hUpdateCompleted);

	m_bDecideNow = false;
	m_bCanDecideNow = false;

	// Set up view

	pPlayer->SetInterface(
		new CGUIInterface(
			pPlayer,
			pMainWnd->GetSelectionDialogBar()->GetSafeHwnd(),
			hMoveSelected,
			m_pGameThread->GetStoppingEvent(),
			GetSafeHwnd(),
			GetSafeHwnd()));

	if (!m_bWithComputer)
	{
		pOpponent->SetInterface(
			new CNetInterface(
				pOpponent,
				Dlg.m_nRemoteUserID, m_pGameThread->GetStoppingEvent()));

		m_ElementManager.UpdateAvatarImage1(g_pCoreApp->GetNetManager()->GetRemoteUser(Dlg.m_nRemoteUserID)->GetAvatarBitmap(), FALSE, TRUE);

		g_pCoreApp->GetNetManager()->GetRemoteUser(Dlg.m_nRemoteUserID)->SetGame(pGame);
	}

	pMainWnd->GetMessageDialogBar()->ResetData();
	pMainWnd->GetMessageDialogBar()->RemoveAllMessages();
	pGame->SetMessageOwner(
		pMainWnd->GetMessageDialogBar()->GetSafeHwnd(),
		pMainWnd->GetMessageDialogBar()->GetComputerImage(),
		pMainWnd->GetMessageDialogBar()->GetHumanImage(),
		pMainWnd->GetMessageDialogBar()->GetDebugImage(),
		pMainWnd->GetMessageDialogBar()->GetBugImage());
	pGame->SetProgressOwner(pMainWnd->GetStatusBar()->GetSafeHwnd());
	pGame->SetMainWindow(pMainWnd->GetSafeHwnd());
	pGame->SetBoardOwner(GetSafeHwnd(), m_hUpdateCompleted, &m_bDecideNow);

	HICON hComputer = (HICON)LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(IDI_COMPUTER), IMAGE_ICON, 16, 16, 0);
	HICON hHuman = (HICON)LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(IDI_HUMAN), IMAGE_ICON, 16, 16, 0);

	pMainWnd->GetStatisticBar()->SetPlayerIcon(TRUE, m_bWithComputer ? hComputer : hHuman);
	pMainWnd->GetStatisticBar()->SetPlayerIcon(FALSE, hHuman);

	DestroyIcon(hComputer);
	DestroyIcon(hHuman);

	RefreshBoard();

	m_ElementManager.UpdateInfoElements(pGame, 
		m_bShowLife, m_LifeTextColor,
		m_bShowPool, m_bShowPhaseText, m_strCurrentNode, m_PhaseTextColor, 
		m_bShowPhaseIcon, m_bShowLibraryCardCount, m_LibraryTextColor, m_bShowAvatarImage, m_nLocalPlayerIndex);

	if (Dlg.m_bFullScreen)
		pMainWnd->FullScreen();

	m_pGameThread->Run();
}

void CMagicWandView::OnStop() 
{
	CStartDialog::s_nDebugRepeat = 0;

	CGame* pGame = GetGame();
	if (pGame)
		pGame->Concede();

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	

	CString strMessage;
	if (pGame)
		strMessage.Format(_T("%s conceded"), pGame->GetPlayer(m_nLocalPlayerIndex)->GetPlayerName());
	else
		strMessage = _T("Conceded");

	pMainWnd->GetMessageDialogBar()->AddMessage(strMessage, -1, -1, MessageImportance::High);
	pMainWnd->GetMessageDialogBar()->SpeakMessage(strMessage, TRUE);

	//MessageBox(strMessage, _T("Game"));

	CGameSummaryDlg dlg;
	dlg.m_strStatus = strMessage;
	dlg.DoModal();

	GameCleanup();
}

void CMagicWandView::OnTimer(UINT nIDEvent) 
{
	CScrollView::OnTimer(nIDEvent);

	if (this == GetCapture())
		return;

	if (nIDEvent == ANIMATION_ID_EVENT)
	{	
		if (m_bShowSelectionIndicator && m_ElementManager.HasSelections())
			m_ElementManager.ShiftSelectionBrush(TRUE); // with update

		CGame* pGame = GetGame();
		if (pGame)
			m_ElementManager.UpdateAvatarImageAlpha(pGame);

		m_ElementManager.UpdateMovingElements(FALSE);
	}	
	else
	if (nIDEvent == CARD_TIP_ID_EVENT)
	{
		KillTimer(CARD_TIP_ID_EVENT);

		if (!GetCapture() && !m_strCardTipText.IsEmpty())
			m_CardTip.Show(m_CardTipPoint, m_strCardTipText);
	}
}

void CMagicWandView::OnToggleLands() 
{
	m_bAlwaysStackLands = !m_bAlwaysStackLands;
	
	ArrangeCards(FALSE, FALSE, TRUE, FALSE);

	m_ElementManager.UpdateMovingElements(TRUE);
}

void CMagicWandView::OnTurnDefault() 
{
	if (m_nDefaultMove != -1)
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();
		if (pSelectionBar->IsSelectingMove())
		{
			pSelectionBar->SetDoneForPlayerTurn();
			pSelectionBar->SelectMove(m_nDefaultMove);
		}
	}
}

void CMagicWandView::OnUpdateArrange(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable((GetGame() != NULL) ? TRUE : FALSE);	
}

void CMagicWandView::OnUpdateAttack(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(m_nBeginningCombat != -1);	
}

LRESULT CMagicWandView::OnUpdateGame(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	CGame* pGame = GetGame();
	if (!pGame)
		return 0;

	m_bMoving = FALSE;
	m_bMoved = FALSE;

	m_CardTip.Hide();

	if (this == GetCapture())
		ReleaseCapture();
	
	BOOL bFirstPlayerActive = (pGame->GetActivePlayer() == pGame->GetPlayer(0));

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	CPlayerStatisticDialogBar* pStatisticBar = pMainWnd->GetStatisticBar();
	CGraphDialogBar* pGraphBar = pMainWnd->GetGraphDialogBar();

	CPlayer* pPlayer1 = pGame->GetPlayer(0);

	pStatisticBar->SetName(TRUE, pPlayer1->GetPlayerName());
	pStatisticBar->SetLife(TRUE, GET_INTEGER(pPlayer1->GetLife()));
	pStatisticBar->SetHand(TRUE, pPlayer1->GetZoneById(ZoneId::Hand)->GetSize());
	pStatisticBar->SetLibrary(TRUE, pPlayer1->GetZoneById(ZoneId::Library)->GetSize());
	pStatisticBar->SetGraveyard(TRUE, pPlayer1->GetZoneById(ZoneId::Graveyard)->GetSize());

	CString strDrawManaText;
	CString strDrawText;

	PrepareTextWithSymbols(_T("{") + pPlayer1->GetManaPool().ToString() + _T("}"), strDrawManaText, strDrawText);
	pStatisticBar->SetManaPool(TRUE, strDrawText, strDrawManaText);	

	CPlayer* pPlayer2 = pGame->GetPlayer(1);

	pStatisticBar->SetName(FALSE, pPlayer2->GetPlayerName());
	pStatisticBar->SetLife(FALSE, GET_INTEGER(pPlayer2->GetLife()));
	pStatisticBar->SetHand(FALSE, pPlayer2->GetZoneById(ZoneId::Hand)->GetSize());
	pStatisticBar->SetLibrary(FALSE, pPlayer2->GetZoneById(ZoneId::Library)->GetSize());
	pStatisticBar->SetGraveyard(FALSE, pPlayer2->GetZoneById(ZoneId::Graveyard)->GetSize());	

	PrepareTextWithSymbols(_T("{") + pPlayer2->GetManaPool().ToString() + _T("}"), strDrawManaText, strDrawText);
	pStatisticBar->SetManaPool(FALSE, strDrawText, strDrawManaText);	

	if (bFirstPlayerActive)
		m_strCurrentNode.Format(_T("%s's %s"),
			pGame->GetPlayer(0)->GetPlayerName(),
			pGame->GetCurrentNode()->GetNodeName());
	else
		m_strCurrentNode.Format(_T("%s's %s"),
			pGame->GetPlayer(1)->GetPlayerName(),
			pGame->GetCurrentNode()->GetNodeName());

	CString strPriorityPlayerText;
	BOOL bBlink = FALSE;
	if (pGame->GetPriorityPlayer()->IsComputer() || pGame->GetPriorityPlayer()->IsRemote())
	{
		strPriorityPlayerText.Format(_T("Waiting for %s..."), pGame->GetPriorityPlayer()->GetPlayerName());
	}
	else
	{
		strPriorityPlayerText = _T("Your action needed");
		bBlink = TRUE;
	}

	if (bFirstPlayerActive)
		pGraphBar->SetCurrentNode(TRUE, pGame->GetCurrentNode()->GetNodeId(), pGame->IsMainPhase(TRUE), m_strCurrentNode, strPriorityPlayerText, bBlink);
	else
		pGraphBar->SetCurrentNode(FALSE, pGame->GetCurrentNode()->GetNodeId(), pGame->IsMainPhase(TRUE), m_strCurrentNode, strPriorityPlayerText, bBlink);

	pGraphBar->SetTurnNumber((pGame->GetGameTurnNumber() + 1) / 2);

	m_bDecideNow = false;
	m_bCanDecideNow = false;

	m_pContextMenuCard = NULL;

	pGame->SetThinkParameter(m_dwMaxDuration,
		To_bool(m_bExtraCareful),
		To_bool(m_bBoostProcess),
		To_bool(m_bOverkill),
		To_bool(m_bConservative));

	m_ElementManager.UpdateInfoElements(pGame, 
		m_bShowLife, m_LifeTextColor,
		m_bShowPool, m_bShowPhaseText, m_strCurrentNode, m_PhaseTextColor, 
		m_bShowPhaseIcon, m_bShowLibraryCardCount, m_LibraryTextColor, m_bShowAvatarImage, m_nLocalPlayerIndex);

	RefreshBoard();
	RefreshBoard();   // Should be removed when tapped+flipped card put in the graveyard properly
	
	SetEvent(m_hUpdateCompleted);

	return 0;
}

void CMagicWandView::OnUpdateGraphDefault(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable((m_nDefaultMove != -1)
		//|| (m_bCanDecideNow && m_bWithComputer)
		);
}

void CMagicWandView::OnUpdateDecideNow(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(m_bWithComputer && m_bCanDecideNow && !m_bDecideNow);	
}

void CMagicWandView::OnUpdateDefault(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(m_nDefaultMove != -1);		
}

void CMagicWandView::OnUpdateGameUndo(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->HasUndoMoves() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowOpponentsGrave(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowOpponentsRemoved(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowOpponentsCommand(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowYourGrave(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowYourCommand(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateShowYourRemoved(CCmdUI *pCmdUI)
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pCmdUI->Enable((GetGame() != NULL) && pMainWnd->GetSelectionDialogBar()->IsSelectingMove() ? TRUE : FALSE);
}

void CMagicWandView::OnUpdateStart(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(!m_pGameThread || !GetGame());
}

void CMagicWandView::OnUpdateStop(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(GetGame() ? TRUE : FALSE);	
}

void CMagicWandView::OnUpdateTurnDefault(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(m_nDefaultMove != -1);		
}

void CMagicWandView::OnUpdateUsagePattern(CCmdUI* pCmdUI) 
{
#if 1	// 9/22/2002, Supporting in-game usage changes
	if (!m_pGameThread || !GetGame() || !GetGame()->IsThinking())
		pCmdUI->Enable(TRUE);
	else
		pCmdUI->Enable(FALSE);
#else
	/*
	if (GetGame()) // && GetGame()->IsThinking())
		pCmdUI->Enable(FALSE);
	else
		pCmdUI->Enable(TRUE);
	*/
#endif
}

void CMagicWandView::OnUpdateViewMagicbitmaps(CCmdUI* pCmdUI) 
{
	if (!g_pCoreApp->GetMTGKeyFound())
	{
		pCmdUI->Enable(FALSE);
	}
	else
	{
		pCmdUI->Enable(TRUE);
		pCmdUI->SetCheck(CCardStore::GetInstance()->GetShowMTGBitmaps());
	}		
}

void CMagicWandView::OnUpdateViewMagicsymbols(CCmdUI* pCmdUI) 
{
	if (!g_pCoreApp->GetMTGKeyFound() ||
		!CCardStore::GetInstance()->GetSmallSymbols().Count() ||
		!CCardStore::GetInstance()->GetLargeSymbols().Count())
	{
		pCmdUI->Enable(FALSE);
	}
	else
	{
		pCmdUI->Enable(TRUE);
		pCmdUI->SetCheck(CCardStore::GetInstance()->GetShowMTGSymbols());
	}	
}

void CMagicWandView::OnUpdateViewOpponentsGrave(CCmdUI *pCmdUI)
{
	pCmdUI->SetCheck(m_bViewGraveyard1);
}

void CMagicWandView::OnUpdateViewOpponentsHand(CCmdUI *pCmdUI)
{
	pCmdUI->SetCheck(m_bViewHand1);
}

void CMagicWandView::OnUpdateViewYourGrave(CCmdUI *pCmdUI)
{
	pCmdUI->SetCheck(m_bViewGraveyard2);	
}

LRESULT CMagicWandView::OnUPnPConfigResult(WPARAM wParam, LPARAM lParam)
{	
	CString* pstrResult = reinterpret_cast<CString*>(wParam);
	HRESULT hr = lParam;

	if (SUCCEEDED(hr))
	{
		if (hr != S_FALSE)
			MessageBox(_T("UPnP Configuration Succeeded."), _T("UPnP"), MB_OK | MB_ICONINFORMATION);
		else
			MessageBox(_T("No UPnP gateway found."), _T("UPnP"), MB_OK | MB_ICONEXCLAMATION);
	}
	else
	{
		CString strMessage;
		strMessage.Format(_T("UPnP Configuration Failed: %s (%08x)"), pstrResult ? *pstrResult : _T("Unknown error"), hr);
		MessageBox(strMessage, _T("UPnP"), MB_OK | MB_ICONERROR);
	}

	if (pstrResult)
		delete pstrResult;

	return 0;
}

void CMagicWandView::OnUsagePattern() 
{
	if (GetGame() && GetGame()->IsThinking())
		return;

	CUsagePatternDialog PatternDlg;
	PatternDlg.DoModal();

	// 9/22/2002
	if (GetGame())
	{
		CUsagePattern::GetInstance()->UpdateAll(GetGame());
	}
}

void CMagicWandView::OnViewDecks() 
{
	CDeckDialog Dlg;
	Dlg.DoModal();
}

void CMagicWandView::OnViewMagicbitmaps() 
{
	CCardStore::GetInstance()->SetShowMTGBitmaps(!CCardStore::GetInstance()->GetShowMTGBitmaps());

	m_ElementManager.RefreshCardBitmaps();
}

void CMagicWandView::OnViewMagicsymbols() 
{
	CCardStore::GetInstance()->SetShowMTGSymbols(!CCardStore::GetInstance()->GetShowMTGSymbols());

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetGraphDialogBar()->Invalidate();
	pMainWnd->GetStatisticBar()->Invalidate();
	pMainWnd->GetMessageDialogBar()->UpdateMTGFont();
	pMainWnd->GetSelectionDialogBar()->UpdateMTGFont();

	m_ElementManager.RefreshCardBitmaps();
	m_ElementManager.UpdateInfoElements(GetGame(), 
		m_bShowLife, m_LifeTextColor,
		m_bShowPool, m_bShowPhaseText, m_strCurrentNode, m_PhaseTextColor, 
		m_bShowPhaseIcon, m_bShowLibraryCardCount, m_LibraryTextColor, m_bShowAvatarImage, m_nLocalPlayerIndex);
}

void CMagicWandView::OnViewOpponentsGrave()
{
	m_bViewGraveyard1 = !m_bViewGraveyard1;
	if (GetGame())
		RefreshBoard();	
}

void CMagicWandView::OnViewOpponentsHand()
{
	m_bViewHand1 = !m_bViewHand1;
	if (GetGame())
		RefreshBoard();	
}

void CMagicWandView::OnViewSelections2() 
{
	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->ShowSelections();
}

void CMagicWandView::OnViewYourGrave()
{
	m_bViewGraveyard2 = !m_bViewGraveyard2;
	if (GetGame())
		RefreshBoard();	
}

void CMagicWandView::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	m_ElementManager.MoveInfoElements();	

	CScrollView::OnVScroll(nSBCode, nPos, pScrollBar);
}

void CMagicWandView::OnZoom() 
{
	if (!m_pContextMenuCard)
		return;

	m_ElementManager.Zoom(m_pContextMenuCard);

	m_pContextMenuCard = NULL;
}
