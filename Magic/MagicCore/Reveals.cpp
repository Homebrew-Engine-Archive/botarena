#include "stdafx.h"

#define new DEBUG_NEW

// Revised: 5/19/06 - card scores from invisible cards are now used instead of player bonuses
BOOL CDrawCardCommon::ResolveDrawCards(CPlayer* pPlayer,	// from this player's library
									   CPlayer* pByPlayer,	// into this player's hand
									   int nDrawCount,
									   MoveType discardMoveType,
									   int nDiscardCount,
									   BOOL bFromDrawsOnly,
									   ZoneId discardToZone,
									   BOOL bToOwnersZone,
									   CardPlacement discardToPlacement,
									   BOOL bTapped,
									   CCountedCardContainer* pDiscardedCards)
{
	CGame* pGame = pPlayer->GetGame();
	CZone* pHand = pByPlayer->GetZoneById(ZoneId::Hand);
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
	BOOL bIsThinking = pGame->IsThinking();
	CCountedCardContainer discardedCards;

	BOOL bReturn = TRUE;

	// Draw cards into player's hand
	for (int i = 0; i < nDrawCount; ++i)
	{
		if (!pLibrary->GetSize())
		{
			pPlayer->SetDrawFailed();
			if (!nDiscardCount)
				return FALSE;
			else
			{
				bReturn = FALSE;
				break;
			}
		}

		CCard* pCard = pLibrary->GetTopCard();
		pCard->Move(pHand, pByPlayer, MoveType::Draw);

		if (nDiscardCount && bFromDrawsOnly)
			discardedCards.AddCard(pCard, CardPlacement::Top);

		if (!bIsThinking)
		{
			CString strMessage;
			strMessage.Format(_T("%s draws a card"), 
				pByPlayer->GetPlayerName());
			pGame->Message(
				strMessage, 
				pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
				MessageImportance::High
				);

			if (pByPlayer->IsLocal())
			{
				CString strMessage;
				strMessage.Format(_T("(%s draws %s)"), pByPlayer->GetPlayerName(), pCard->GetCardName());
				pGame->Message(strMessage,
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High);
			}
		}
	}

	if (!nDiscardCount)
		return bReturn;

	CCountedCardContainer temp;
	CCountedCardContainer* pFrom;

	if (!bFromDrawsOnly)
	{
		temp.AddCards(*pHand, CardPlacement::Top);
		pFrom = &temp;
	}
	else
		pFrom = &discardedCards;

	BOOL bPlayByComputer = pByPlayer->IsComputer();

	if (nDiscardCount >= pFrom->GetSize())
	{
		// Discard all cards

		if (!pFrom->GetSize())	// Make sure we have cards to order
			return bReturn;
		
		if ((pFrom->GetSize() > 1) &&	// 9/8/2002
			CZone::HasOrdering(discardToZone))
		{
			if (!bIsThinking && !bPlayByComputer)	// Simplified to allow 'pByPlayer' to order cards, not the to-zone's owner
			{
				OrderCardsData orderCard;
				orderCard.bReadOnly = FALSE;

				if (discardMoveType == MoveType::Discard)
					orderCard.strCaption = _T("Order Discarded Cards");
				else
					orderCard.strCaption = _T("Order Moved Cards");

				orderCard.pCardContainer = pFrom;

				if (!pByPlayer->GetInterface()->OrderCards(&orderCard))
					return FALSE;
			}
			else
			{
				pFrom->Sort(discardToPlacement != CardPlacement::Bottom);
			}
		}

		if (pDiscardedCards)
			pDiscardedCards->AddCards(*pFrom, CardPlacement::Top);

		if (discardToPlacement == CardPlacement::Top ||
			discardToPlacement == CardPlacement::Bottom)
			for (int i = 0; i < pFrom->GetSize(); ++i)
			{
				int nIndex = (discardToPlacement == CardPlacement::Top ? i : pFrom->GetSize() - i - 1);
				CCard* pCard = pFrom->GetAt(nIndex);
				CZone* pToZone = 
					bToOwnersZone ? 
						pCard->GetOwner()->GetZoneById(discardToZone) :
						pByPlayer->GetZoneById(discardToZone);

				if (!bIsThinking)
				{
					CString strMessage;
					if (pToZone->IsVisibleToOthers())
						strMessage.Format(_T("%s %s %s to %s"), 
							pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pCard->GetCardName(), pToZone->GetZoneName());
					else
						strMessage.Format(_T("%s %s a card to %s"), 
							pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pToZone->GetZoneName());
					pGame->Message(
						strMessage, 
						pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				pCard->Move(pToZone, pByPlayer, discardMoveType, discardToPlacement);

				if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
					pCard->GetOrientation()->Tap();
			}

		return bReturn;
	}

	// Select cards to discard

	if (!bIsThinking && !bPlayByComputer)
	{
		// Human caster
		SelectCardsData selectCard;

		if (nDiscardCount > 1)
			selectCard.strCaption.Format(_T("Select %d cards to %s"), nDiscardCount, discardMoveType == MoveType::Discard ? _T("discard") : _T("move"));
		else
			selectCard.strCaption.Format(_T("Select 1 card to %s"), discardMoveType == MoveType::Discard ? _T("discard") : _T("move"));

		if (bFromDrawsOnly)					
			selectCard.strTitle.Format(_T("%s's cards"), pPlayer->GetPlayerName());
		else
		{
			selectCard.strTitle.Format(_T("Cards in %s's Hand"), pPlayer->GetPlayerName());
			selectCard.strCaption += _T(" from ") + pPlayer->GetPlayerName() + _T("'s Hand");
		}

		selectCard.pCardContainer = pFrom;
		selectCard.nMinSelect = MinimumValue(nDiscardCount);
		selectCard.nMaxSelect = MaximumValue(nDiscardCount);
		selectCard.pCardFilter = NULL;	// No filter

		if (!pByPlayer->GetInterface()->SelectCard(&selectCard))
			return FALSE;

		if ((nDiscardCount > 1) &&	// Order cards
			CZone::HasOrdering(discardToZone))
		{
			OrderCardsData OrderCards;
			OrderCards.bReadOnly = FALSE;

			if (discardMoveType == MoveType::Discard)
				OrderCards.strCaption = _T("Order Discarded Cards");
			else
				OrderCards.strCaption = _T("Order Moved Cards");

			OrderCards.pCardContainer = &(selectCard.SelectedCards);

			if (!pByPlayer->GetInterface()->OrderCards(&OrderCards))
				return FALSE;
		}

		if (pDiscardedCards)
			pDiscardedCards->AddCards(selectCard.SelectedCards, CardPlacement::Top);

		if (discardToPlacement == CardPlacement::Top ||
			discardToPlacement == CardPlacement::Bottom)
			for (int j = 0; j < selectCard.SelectedCards.GetSize(); ++j)
			{
				int nIndex = (discardToPlacement == CardPlacement::Top ?
					j : selectCard.SelectedCards.GetSize() - j - 1);

				CCard* pCard = selectCard.SelectedCards.GetAt(nIndex);
				CZone* pToZone = 
					bToOwnersZone ? 
						pCard->GetOwner()->GetZoneById(discardToZone) :
						pByPlayer->GetZoneById(discardToZone);

				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pToZone->GetZoneName());

				pGame->Message(
					strMessage,
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);

				pCard->Move(pToZone, pByPlayer, discardMoveType, discardToPlacement);

				if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
					pCard->GetOrientation()->Tap();
			}
	}
	else
	{
		// Computer caster or we are improvising for the human player during a thinking process
		pFrom->Sort(TRUE);		// To top?    bottom card (0)->min score, top card (n-1)->max score

		for (int j = 0; j < nDiscardCount; ++j)			
		{
			int nIndex = (discardToPlacement != CardPlacement::Bottom ?
				j : nDiscardCount - j - 1);

			CCard* pCard = pFrom->GetAt(nIndex);
			CZone* pToZone = 
				bToOwnersZone ? 
					pCard->GetOwner()->GetZoneById(discardToZone) :
					pByPlayer->GetZoneById(discardToZone);

			if (pDiscardedCards)
				pDiscardedCards->AddCard(pCard, CardPlacement::Top);

			if (!bIsThinking)
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pPlayer->GetPlayerName(), discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"), pToZone->GetZoneName());

				pGame->Message(
					strMessage,
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pByPlayer, discardMoveType, discardToPlacement);

			if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Tap();
		}
	}

	return bReturn;
}

BOOL CDrawCardCommon::ResolveRevealZone(CPlayer* pPlayer,		// This player's zone (default: library)
									 CPlayer* pByPlayer,
									 int nRevealCount,
									 BOOL bRevealCardsToOthers,
									 BOOL bReorder,
									 ZoneId reorderToZone,
									 CardPlacement reorderToZonePlacement,
									 CCountedCardContainer* pRevealedCards,
									 MaximumValue nMaxSelectionCount,
									 MinimumValue nMinSelectionCount,
									 ZoneId fromZoneId,
									 ZoneId selectToZone,
									 CardPlacement selectToZonePlacement,
									 const CCardFilter* pSelectionCardFilter,
									 BOOL bRevealOnlySelected)
{
	CGame* pGame = pPlayer->GetGame();
	CZone* pZone = pPlayer->GetZoneById(fromZoneId);

	if (nRevealCount > pZone->GetSize())
		nRevealCount = pZone->GetSize();

	if (!nRevealCount)
		return TRUE;

	CCountedCardContainer revealedCards;
	for (int i = nRevealCount - 1; i >= 0; --i)
	{
		CCard* pCard = pZone->GetAt(pZone->GetSize() - i - 1);

		if (pRevealedCards)
			pRevealedCards->AddCard(pCard, CardPlacement::Top);	// n-1(top) - First card revealed, 0(bottom) - Last card revealed

		revealedCards.AddCard(pCard, CardPlacement::Top);
	}

	if (GET_INTEGER(nMaxSelectionCount))
	{
		if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) && selectToZone == ZoneId::Battlefield && 
			(fromZoneId == ZoneId::Library || fromZoneId == ZoneId::Graveyard))
		{
			if (pSelectionCardFilter)
			{
				CCardFilter* apFilter(pSelectionCardFilter->Clone());
				apFilter->AddNegateComparer(new AnyCreatureComparer);
				CCardFilter* pSelectionCardFilter(apFilter->Clone());
			}
			else
			{
				CCardFilter* pSelectionCardFilter(CCardFilter::GetFilter(_T("cards"))->Clone());
				pSelectionCardFilter->AddNegateComparer(new AnyCreatureComparer);
			}
		}
		int nValidSelectionCount = 0;
		if (pSelectionCardFilter)
		{
			for (int i = 0; i < nRevealCount; ++i)
				if (pSelectionCardFilter->IsCardIncluded(revealedCards.GetAt(i)))
					++nValidSelectionCount;
		}
		else
			nValidSelectionCount = revealedCards.GetSize();

		if (GET_INTEGER(nMaxSelectionCount) == SpecialNumber::Any || GET_INTEGER(nMaxSelectionCount) > nValidSelectionCount)
			nMaxSelectionCount = MaximumValue(nValidSelectionCount);

		if (GET_INTEGER(nMinSelectionCount) == SpecialNumber::All)
			nMinSelectionCount = MinimumValue(nValidSelectionCount);

		if (GET_INTEGER(nMinSelectionCount) > GET_INTEGER(nMaxSelectionCount))
			nMaxSelectionCount = MaximumValue(0);
	}

	BOOL bIsThinking = pGame->IsThinking();

	if (!bIsThinking)
	{
		if (GET_INTEGER(nMaxSelectionCount))
		{
			// Select revealed cards into zone

			CCountedCardContainer selectedCards;

			if (GET_INTEGER(nMinSelectionCount) != GET_INTEGER(nMaxSelectionCount) || GET_INTEGER(nMaxSelectionCount) < revealedCards.GetSize())
			{
				if (!pByPlayer->IsComputer())
				{
					SelectCardsData selectCardData;

					if (nMaxSelectionCount == MaximumValue(1))
						selectCardData.strCaption.Format(_T("Select %sone card from %s's %s"), GET_INTEGER(nMinSelectionCount) == GET_INTEGER(nMaxSelectionCount) ? _T("") : _T("up to "), pPlayer->GetPlayerName(), pZone->GetZoneName());
					else
						selectCardData.strCaption.Format(_T("Select %s%d cards from %s's %s"), GET_INTEGER(nMinSelectionCount) == GET_INTEGER(nMaxSelectionCount) ? _T("") : _T("up to "), nMaxSelectionCount, pPlayer->GetPlayerName(), pZone->GetZoneName());

					selectCardData.strTitle.Format(_T("Cards in %s's %s"), pPlayer->GetPlayerName(), pZone->GetZoneName());

					selectCardData.pCardContainer = &revealedCards;
					selectCardData.nMinSelect = nMinSelectionCount;
					selectCardData.nMaxSelect = nMaxSelectionCount;
					selectCardData.pCardFilter = pSelectionCardFilter;

					if (!pByPlayer->GetInterface()->SelectCard(&selectCardData))
						return FALSE;

					selectedCards.AddCards(selectCardData.SelectedCards, CardPlacement::Top);
				}
				else
				{
					CCountedCardContainer tempContainer(revealedCards);
					tempContainer.Sort(pByPlayer != pPlayer); // different? ascending -> bottom card : lowest score; same? descending -> bottom card : highest score
					for (int i = 0; i < tempContainer.GetSize() && selectedCards.GetSize() < GET_INTEGER(nMaxSelectionCount); ++i) // always select the most when thinking so minimum selection is not used
						if (pSelectionCardFilter)
						{
							if (pSelectionCardFilter->IsCardIncluded(tempContainer.GetAt(i)))
								selectedCards.InsertAt(0, tempContainer.GetAt(i));
						}
						else
							selectedCards.InsertAt(0, tempContainer.GetAt(i));
				}
			}
			else
				selectedCards = revealedCards;

			// Order selected cards into zone

			CZone* pSelectToZone = pPlayer->GetZoneById(selectToZone);

			if (selectedCards.GetSize() > 1 && pSelectToZone->HasOrdering())
			{
				if (!pPlayer->IsComputer())
				{
					// Select by the pPlayer

					OrderCardsData orderCards;
					orderCards.pCardContainer = &selectedCards;
					orderCards.bReadOnly = FALSE;

					orderCards.strCaption.Format(_T("Order cards in %s's %s"),
						pPlayer->GetPlayerName(), pSelectToZone->GetZoneName());

					if (!pPlayer->GetInterface()->OrderCards(&orderCards))
						return FALSE;
				}
				else
					selectedCards.Sort(TRUE);
			}

			// Move selected cards into zone

			for (int i = 0; i < selectedCards.GetSize(); ++i)
			{
				CCard* pCard = selectedCards.GetAt(i);

				if (bRevealCardsToOthers)
				{
					CString strMessage;

					strMessage.Format(_T("%s puts %s %s %s's %s"), 
						pByPlayer->GetPlayerName(), 
						pCard->GetCardName(),
						CZone::HasOrdering(selectToZone) ? 
							(selectToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						pSelectToZone->GetZoneName());

					for (int j = 0; j < pGame->GetPlayerCount(); ++j)
					{
						if (pGame->GetPlayer(j)->IsComputer())
							pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::RevealLibrary);

						pGame->GetPlayer(j)->MemorizeCard(pCard);
					}

					pGame->Message(
						strMessage, 
						pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				else
				{
					pByPlayer->MemorizeCard(pCard);
					if (pByPlayer->IsComputer())
						pByPlayer->RemoveStrategy(StrategyRemovalReason::RevealLibrary);
				}

				pCard->Move(pSelectToZone, pByPlayer, MoveType::Others, selectToZonePlacement);
				revealedCards.RemoveCard(pCard);
			}

			if (!bRevealCardsToOthers)
			{
				CString strMessage;
				if (selectedCards.GetSize() > 1)
					strMessage.Format(_T("%s puts %d cards %s %s's %s"), 
						pByPlayer->GetPlayerName(),
						selectedCards.GetSize(),
						CZone::HasOrdering(selectToZone) ? 
							(selectToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						pSelectToZone->GetZoneName());
				else
					strMessage.Format(_T("%s puts a card %s %s's %s"), 
						pByPlayer->GetPlayerName(),
						CZone::HasOrdering(selectToZone) ? 
							(selectToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						pSelectToZone->GetZoneName());

				pGame->Message(
					strMessage, 
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			nRevealCount = revealedCards.GetSize();
			if (!nRevealCount)
				return TRUE;
		}

		// Reveal cards

		if (!pByPlayer->IsComputer())
		{
			if (!GET_INTEGER(nMaxSelectionCount) || (bReorder && revealedCards.GetSize() > 1 && CZone::HasOrdering(reorderToZone)))
			{
				// Show dialog with revealed cards

				OrderCardsData orderCards;
				orderCards.pCardContainer = &revealedCards;
				orderCards.bReadOnly = !(bReorder && revealedCards.GetSize() > 1 &&
					(reorderToZone != ZoneId::Graveyard || pPlayer == pByPlayer)); // special case: when reordering to graveyards, the graveyard's owner orders the cards

				if (revealedCards.GetSize() > 1)
					orderCards.strCaption.Format(_T("%s %d cards in %s's %s"),
						reorderToZonePlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						revealedCards.GetSize(),
						pPlayer->GetPlayerName(), 
						pZone->GetZoneName());
				else
					orderCards.strCaption.Format(_T("%s card in %s's %s"),
						reorderToZonePlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						pPlayer->GetPlayerName(), pZone->GetZoneName());

				if (!pByPlayer->GetInterface()->OrderCards(&orderCards))
					return FALSE;

				if (reorderToZone == ZoneId::Graveyard && pPlayer != pByPlayer && 
					bReorder && revealedCards.GetSize() > 1)
				{
					if (!pPlayer->IsComputer())
					{
						OrderCardsData orderCards;
						orderCards.pCardContainer = &revealedCards;
						orderCards.bReadOnly = FALSE;

						orderCards.strCaption.Format(_T("%s %d cards in %s's Graveyard"),
							reorderToZonePlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
							revealedCards.GetSize(),
							pPlayer->GetPlayerName());

						if (!pPlayer->GetInterface()->OrderCards(&orderCards))
							return FALSE;
					}
					else
						revealedCards.Sort(TRUE);
				}
			}
		}
		else
			if (bReorder && revealedCards.GetSize() > 1 && CZone::HasOrdering(reorderToZone))
			{
				if (reorderToZone != ZoneId::Graveyard || pPlayer == pByPlayer || pPlayer->IsComputer())
					revealedCards.Sort(pByPlayer == pPlayer);
				else
				{
					OrderCardsData orderCards;
					orderCards.pCardContainer = &revealedCards;
					orderCards.bReadOnly = FALSE;

					orderCards.strCaption.Format(_T("%s %d cards into %s's Graveyard"),
						reorderToZonePlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						revealedCards.GetSize(),
						pPlayer->GetPlayerName());

					if (!pPlayer->GetInterface()->OrderCards(&orderCards))
						return FALSE;
				}
			}

		for (int i = 0; i < nRevealCount; ++i)
		{
			CCard* pCard;
			if (!bReorder || reorderToZonePlacement == CardPlacement::Top)
				pCard = revealedCards.GetAt(i);
			else
				pCard = revealedCards.GetAt(nRevealCount - i - 1);

			if (bRevealCardsToOthers && !bRevealOnlySelected)
			{
				CString strMessage;

				if (bReorder)
					strMessage.Format(_T("%s puts %s %s %s's %s"), 
						pByPlayer->GetPlayerName(), 
						pCard->GetCardName(),
						CZone::HasOrdering(reorderToZone) ? 
							(reorderToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						reorderToZone.ToString());
				else
					strMessage.Format(_T("%s reveals %s in %s's %s"), 
						pByPlayer->GetPlayerName(), pCard->GetCardName(),
						pPlayer->GetPlayerName(),
						pZone->GetZoneName());

				pGame->Message(
					strMessage, 
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < pGame->GetPlayerCount(); ++j)
				{
					if (pGame->GetPlayer(j)->IsComputer())
						pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::RevealLibrary);

					pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
			else
			{
				pByPlayer->MemorizeCard(pCard);
				if (pByPlayer->IsComputer())
					pByPlayer->RemoveStrategy(StrategyRemovalReason::RevealLibrary);
			}

			if (bReorder)
			{
				CZone* pReorderToZone = pPlayer->GetZoneById(reorderToZone);
				pCard->Move(pReorderToZone, pByPlayer, MoveType::Others, reorderToZonePlacement);	
			}
		}

		if (!bRevealCardsToOthers || bRevealOnlySelected)
		{
			CString strMessage;

			if (bReorder)
			{
				if (nRevealCount > 1)
					strMessage.Format(_T("%s puts %d cards %s %s's %s"), 
						pByPlayer->GetPlayerName(),
						nRevealCount,
						CZone::HasOrdering(reorderToZone) ? 
							(reorderToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						reorderToZone.ToString());
				else
					strMessage.Format(_T("%s puts a card %s %s's %s"), 
						pByPlayer->GetPlayerName(),
						CZone::HasOrdering(reorderToZone) ? 
							(reorderToZonePlacement == CardPlacement::Top ? _T("on top of") : _T("on the bottom of")) : _T("into"),
						pPlayer->GetPlayerName(),
						reorderToZone.ToString());
			}
			else
				if (nRevealCount > 1)
					strMessage.Format(_T("%s reveals %d cards in %s's %s"), 
						pByPlayer->GetPlayerName(),
						nRevealCount,
						pPlayer->GetPlayerName(),
						pZone->GetZoneName());
				else
					strMessage.Format(_T("%s reveals a card in %s's %s"), 
						pByPlayer->GetPlayerName(),
						pPlayer->GetPlayerName(),
						pZone->GetZoneName());

			pGame->Message(
				strMessage, 
				pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
				MessageImportance::High
				);
		}
	}
	else
	{
		if ((bReorder && CZone::HasOrdering(reorderToZone)) || GET_INTEGER(nMaxSelectionCount))
			revealedCards.Sort(pByPlayer == pPlayer);

		if (GET_INTEGER(nMaxSelectionCount))
		{
			CCountedCardContainer selectedCards;
			for (int i = 0; i < nRevealCount && selectedCards.GetSize() < GET_INTEGER(nMaxSelectionCount); ++i)
			{
				CCard* pCard = revealedCards.GetAt(nRevealCount - i - 1);
				if (pSelectionCardFilter && !pSelectionCardFilter->IsCardIncluded(pCard))
					continue;

				selectedCards.AddCard(pCard, CardPlacement::Bottom);
			}

			ATLASSERT(selectedCards.GetSize() == GET_INTEGER(nMaxSelectionCount));

			if (pByPlayer != pPlayer)
				selectedCards.Sort(TRUE);

			CZone* pSelectToZone = pPlayer->GetZoneById(selectToZone);

			for (int i = 0; i < GET_INTEGER(nMaxSelectionCount); ++i)
			{
				CCard* pCard;
				if (selectToZonePlacement == CardPlacement::Top)
					pCard = selectedCards.GetAt(i);
				else
					pCard = selectedCards.GetAt(GET_INTEGER(nMaxSelectionCount) - i - 1);

				if (!pGame->IsCardVisible(pCard))
				{
					pByPlayer->AddMiscBonus(1);
				}

				pCard->Move(pSelectToZone, pByPlayer, MoveType::Others, selectToZonePlacement);	

				revealedCards.RemoveCard(pCard);
			}

			nRevealCount -= GET_INTEGER(nMaxSelectionCount);
		}

		for (int i = 0; i < nRevealCount; ++i)
		{
			CCard* pCard;
			if (reorderToZonePlacement == CardPlacement::Top)
				pCard = revealedCards.GetAt(i);
			else
				pCard = revealedCards.GetAt(nRevealCount - i - 1);

			if (!pGame->IsCardVisible(pCard))
			{
				pByPlayer->AddMiscBonus(1);
			}

			if (bReorder)
			{
				CZone* pReorderToZone = pPlayer->GetZoneById(reorderToZone);
				pCard->Move(pReorderToZone, pByPlayer, MoveType::Others, reorderToZonePlacement);
			}
		}
	}

	return TRUE;
}

BOOL CDiscardCardCommon::ResolveRevealHand(CPlayer* pRevealPlayer, CPlayer* pRevealToPlayer, CPlayer* pCaster)
{
	return ResolveDiscardCards(pRevealPlayer, pRevealToPlayer, pCaster, 
		0, MoveType::Others, ZoneId::Hand, TRUE);
}

BOOL CDiscardCardCommon::ResolveDiscardAll(CPlayer* pDiscarder,
										   CPlayer* pCaster,
										   MoveType discardMoveType,
										   ZoneId toZoneId, BOOL bToOwnersZone,
										   CardPlacement discardToPlacement,
										   BOOL bDiscarderOrder,
										   BOOL bTapped,
								           CCountedCardContainer* pDiscardedCards)
{
	return ResolveDiscardCards(pDiscarder, NULL, pCaster, 
		pDiscarder->GetZoneById(ZoneId::Hand)->GetSize(), discardMoveType, ZoneId::Hand, TRUE, NULL, 
		toZoneId, bToOwnersZone, discardToPlacement, bDiscarderOrder, bTapped, pDiscardedCards);
}

BOOL CDiscardCardCommon::ResolveDiscardCards(CPlayer* pDiscarder,
											 CPlayer* pPicker,
											 CPlayer* pCaster,
											 int nDiscardCount,
											 MoveType discardMoveType,
											 const CCountedCardContainer& cards,
											 BOOL bRevealCardsBeforeDiscard,
											 const CCardFilter* pCardFilter,
											 ZoneId toZoneId,
											 BOOL bToOwnersZone,
											 CardPlacement discardToPlacement,
											 BOOL bDiscarderOrder,
											 BOOL bTapped,
											 CCountedCardContainer* pDiscardedCards)
{
	if (pPicker != pDiscarder)
		bRevealCardsBeforeDiscard = TRUE;

	CGame* pGame = pDiscarder->GetGame();
	BOOL bIsThinking = pGame->IsThinking();

	if (bIsThinking)
	{
		// If computer is thinking

		CCountedCardContainer discards;

		int nValidDiscardCount = 0;

		if (pDiscarder == pGame->GetThinkingPlayer())
		{
			// Adjust count with filter
			for (int j = 0; j < cards.GetSize(); ++j)
			{
				CCard* pCard = cards.GetAt(j);

				if (!pCardFilter || pCardFilter->IsCardIncluded(pCard))
				{
					++nValidDiscardCount;
					discards.AddCard(pCard, CardPlacement::Top);
				}
			}
		}
		else
		{
			// Non-thinking player is discarding

			for (int j = 0; j < cards.GetSize(); ++j)
			{
				CCard* pCard = cards.GetAt(j);

				if (pGame->IsCardVisible(pCard))
				{
					if (!pCardFilter || pCardFilter->IsCardIncluded(pCard))
					{
						++nValidDiscardCount;
						discards.AddCard(pCard, CardPlacement::Top);
					}
				}
				else
				{
					// Optimistic scenario
					++nValidDiscardCount;
					discards.AddCard(pCard, CardPlacement::Top);
				}
			}
		}

		if ((nDiscardCount == SpecialNumber::Any) || (nDiscardCount > nValidDiscardCount))
			nDiscardCount = nValidDiscardCount;

		discards.Sort(pPicker == pDiscarder);	// Worst case scenario when picker is not discarder
		/*
			Picker == Discarder
				[0] Poor cards .... [n-1] Good cards

			Picker != Discarder
				[0] Good cards .... [n-1] Poor cards
		*/

		for (int j = 0; j < nDiscardCount; ++j)	// 0 is bottom
		{
			int nIndex = (discardToPlacement == CardPlacement::Top ? j : nDiscardCount - j - 1);

			CCard* pCard = discards.GetAt(nIndex);

			if (discardToPlacement == CardPlacement::Top ||
				discardToPlacement == CardPlacement::Bottom)
			{
				CZone* pToZone = 
					bToOwnersZone ? 
						pCard->GetOwner()->GetZoneById(toZoneId) :
						pDiscarder->GetZoneById(toZoneId);

				pCard->Move(pToZone, pCaster, discardMoveType, discardToPlacement);

				if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
					pCard->GetOrientation()->Tap();
			}

			if (pDiscardedCards)
				pDiscardedCards->AddCard(pCard, CardPlacement::Top);
		}

		return TRUE;
	}

	// Not thinking

	// Adjust count with filter
	int nValidDiscardCount = 0;
	for (int j = 0; j < cards.GetSize(); ++j)
	{
		CCard* pCard = cards.GetAt(j);

		if (!pCardFilter || pCardFilter->IsCardIncluded(pCard))
			++nValidDiscardCount;

		// Memorize cards
		if (bRevealCardsBeforeDiscard)
			if (pPicker && (pPicker != pDiscarder))
			{
				for (int i = 0; i < pGame->GetPlayerCount(); ++i)
				{
					CPlayer* pPlayer2 = pGame->GetPlayer(i);

					if (pPlayer2->IsComputer())
					{
						if (!pPlayer2->IsMemorizedCard(pCard))
							pPlayer2->RemoveStrategy(StrategyRemovalReason::NewDiscard);
					}

					pPlayer2->MemorizeCard(pCard);
				}
			}
	}

	if (nDiscardCount == SpecialNumber::Any)
	{
		// Discard all applicable cards

		nDiscardCount = nValidDiscardCount;
	}
	else
		if (nDiscardCount > nValidDiscardCount)
		{
			nDiscardCount = nValidDiscardCount;

			if (!nDiscardCount)
			{
				CString strMessage;
				strMessage.Format(_T("No applicable cards to %s in %s's hand"), 
					toZoneId == ZoneId::Graveyard ? _T("discard") : _T("move"),
					pDiscarder->GetPlayerName());
				pGame->Message(
					strMessage,
					pCaster->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);

				if (!bRevealCardsBeforeDiscard)
					return TRUE;

				// Continue on to allow the picker to see discarder's hand
			}
		}

	if (pPicker && !pPicker->IsComputer())	// Picker chooses which cards to discard
	{
		SelectCardsData selectCardData;

		if (nDiscardCount && 
			nDiscardCount != nValidDiscardCount) // if discard card is the same as the valid discard count, just show the hand and we will select the card
		{
			if (nDiscardCount == 1)
				selectCardData.strCaption.Format(_T("Select one card from %s's hand"), pDiscarder->GetPlayerName());
			else
				if (nDiscardCount != SpecialNumber::Any)
					selectCardData.strCaption.Format(_T("Select %d cards from %s's hand"), nDiscardCount, pDiscarder->GetPlayerName());
				else
					selectCardData.strCaption.Format(_T("Select cards from %s's hand"), pDiscarder->GetPlayerName());
		}
		else
			selectCardData.strCaption.Format(_T("%s's hand"), pDiscarder->GetPlayerName());

		selectCardData.strTitle.Format(_T("Cards in %s's hand"), pDiscarder->GetPlayerName());

		selectCardData.pCardContainer = &cards;

		if (nDiscardCount != nValidDiscardCount)
		{
			selectCardData.nMinSelect = MinimumValue(nDiscardCount);
			selectCardData.nMaxSelect = MaximumValue(nDiscardCount);
			selectCardData.pCardFilter = pCardFilter;
		}
		else
		{
			selectCardData.nMinSelect = MinimumValue(0);
			selectCardData.nMaxSelect = MaximumValue(0);
			selectCardData.pCardFilter = NULL;
		}

		// still needs to reveal hand
		//if ((pDiscarder == pPicker) && (nDiscardCount == cards.GetSize()))
		//	selectCardData.SelectedCards.Add(cards);	// Select all, no need to show picker/discarder the cards
		//else
		if (!pPicker->GetInterface()->SelectCard(&selectCardData))
			return FALSE;

		if (nDiscardCount == nValidDiscardCount)
		{
			for (int j = 0; j < cards.GetSize(); ++j)
			{
				CCard* pCard = cards.GetAt(j);

				if (!pCardFilter || pCardFilter->IsCardIncluded(pCard))
					selectCardData.SelectedCards.AddCard(pCard, CardPlacement::Top);
			}
		}

		ATLASSERT(selectCardData.SelectedCards.GetSize() == nDiscardCount);

		if (nDiscardCount)	// Discard and re-arrange
		{
			CCountedCardContainer* pDiscards = &(selectCardData.SelectedCards);

			// Order cards

			if (discardToPlacement == CardPlacement::Top ||
				discardToPlacement == CardPlacement::Bottom)
			{
				// Assuming the discarder has the right to order the discarded cards
				if (nDiscardCount > 1)
				{
					CPlayer* pOrderer = (bDiscarderOrder ? pDiscarder : pCaster);
					if (!pOrderer->IsComputer())
					{
						if (CZone::HasOrdering(toZoneId))
						{
							OrderCardsData OrderCards;
							OrderCards.bReadOnly = FALSE;
							OrderCards.strCaption.Format(_T("Order Cards in %s"), toZoneId.ToString());
							OrderCards.pCardContainer = pDiscards;

							if (!pOrderer->GetInterface()->OrderCards(&OrderCards))
								return FALSE;
						}
					}
					else
					{
						// Computer needs to order cards

						pDiscards->Sort(pOrderer == pDiscarder);	// Ascending?
					}
				}

				for (int j = 0; j < pDiscards->GetSize(); ++j)	// 0 is bottom
				{
					int nIndex = (discardToPlacement == CardPlacement::Top ? j : pDiscards->GetSize() - j - 1);

					CCard* pCard = pDiscards->GetAt(nIndex);
					CZone* pToZone = 
						bToOwnersZone ? 
							pCard->GetOwner()->GetZoneById(toZoneId) :
							pDiscarder->GetZoneById(toZoneId);

					CString strMessage;
					strMessage.Format(_T("%s %s %s to %s"), 
						pDiscarder->GetPlayerName(), 
						discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
					pGame->Message(
						strMessage,
						pCaster->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
						MessageImportance::High
						);

					pCard->Move(pToZone, pCaster, discardMoveType, discardToPlacement);

					if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
						pCard->GetOrientation()->Tap();
				}
			}

			if (pDiscardedCards)
				pDiscardedCards->AddCards(*pDiscards, CardPlacement::Top);
		}
	}
	else
	// Not thinking and computer is the picker or by random
	{
		CCountedCardContainer discards;

		if (pPicker)
		{
			// Computer needs to select which cards to discard

			for (int j = 0; j < cards.GetSize(); ++j)
			{
				CCard* pCard = cards.GetAt(j);

				if (pCardFilter && !pCardFilter->IsCardIncluded(pCard))
					continue;

				discards.AddCard(pCard, CardPlacement::Top);
			}

			discards.Sort(pDiscarder == pPicker);			// Ascending?
			int nRemoveCount = discards.GetSize() - nDiscardCount;
			for (int i = 0; i < nRemoveCount; ++i)
				discards.RemoveTopCard();
		}
		else
		{
			// Random or all

			for (int j = 0; j < cards.GetSize(); ++j)
			{
				CCard* pCard = cards.GetAt(j);

				if (pCardFilter && !pCardFilter->IsCardIncluded(pCard))
					continue;

				discards.AddCard(pCard, CardPlacement::Top);
			}

			discards.Sort(pDiscarder == pPicker);			// Ascending?
			int nRemoveCount = discards.GetSize() - nDiscardCount;
			for (int i = 0; i < nRemoveCount; ++i)
			{
				unsigned long ulToRemove = pDiscarder->GetRand() % discards.GetSize();
				discards.RemoveAt(ulToRemove);
			}
		}

		// Arrange cards in discard to zone

		if (discards.GetSize())
		{
			if (discardToPlacement == CardPlacement::Top ||
				discardToPlacement == CardPlacement::Bottom)
			{
				CPlayer* pOrderer = (bDiscarderOrder ? pDiscarder : pCaster);
				if (!pOrderer->IsComputer())
				{
					if (discards.GetSize() > 1 && CZone::HasOrdering(toZoneId))
					{
						// Ask player to order cards

						OrderCardsData OrderCards;
						OrderCards.bReadOnly = FALSE;
						OrderCards.strCaption.Format(_T("Order Cards in %s"), toZoneId.ToString());
						OrderCards.pCardContainer = &discards;

						if (!pOrderer->GetInterface()->OrderCards(&OrderCards))
							return FALSE;
					}
				}
				else
					discards.Sort(pOrderer == pDiscarder);

				for (int j = 0; j < discards.GetSize(); ++j)	// 0 is bottom
				{
					int nIndex = (discardToPlacement == CardPlacement::Top ? j : discards.GetSize() - j - 1);

					CCard* pCard = discards.GetAt(nIndex);
					CZone* pToZone = 
						bToOwnersZone ? 
							pCard->GetOwner()->GetZoneById(toZoneId) :
							pDiscarder->GetZoneById(toZoneId);

					if (!bIsThinking)
					{
						CString strMessage;
						if (pToZone->IsVisibleToOthers())
							strMessage.Format(_T("%s %s %s to %s"), 
								pDiscarder->GetPlayerName(), 
								discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
								pCard->GetCardName(), pToZone->GetZoneName());
						else
							strMessage.Format(_T("%s %s a card to %s"), 
								pDiscarder->GetPlayerName(), 
								discardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
								pToZone->GetZoneName());
						pGame->Message(
							strMessage,
							pCaster->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
							MessageImportance::High
							);
					}

					pCard->Move(pToZone, pCaster, discardMoveType, discardToPlacement);

					if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
						pCard->GetOrientation()->Tap();
				}
			}

			if (pDiscardedCards)
				pDiscardedCards->AddCards(discards, CardPlacement::Top);
		}
	}

	return TRUE;
}

BOOL CDiscardCardCommon::ResolveDiscardCards(CPlayer* pDiscarder,
											 CPlayer* pPicker,
											 CPlayer* pCaster,
											 int nDiscardCount,
											 MoveType discardMoveType,
											 ZoneId fromZoneId,
											 BOOL bRevealCardsBeforeDiscard,
											 const CCardFilter* pCardFilter,
											 ZoneId toZoneId,
											 BOOL bToOwnersZone,
											 CardPlacement discardToPlacement,
											 BOOL bDiscarderOrder,
											 BOOL bTapped,
											 CCountedCardContainer* pDiscardedCards)
{
	//ATLASSERT(pDiscarder != pCaster);	// Cannot discard player's own cards	// Commented out to support Abyssal Horror

	CZone* pDiscardZone = pDiscarder->GetZoneById(fromZoneId);

	return ResolveDiscardCards(pDiscarder, pPicker, pCaster,
							   nDiscardCount, discardMoveType, pDiscardZone->GetCardContainer(), bRevealCardsBeforeDiscard, pCardFilter,
							   toZoneId, bToOwnersZone, discardToPlacement, bDiscarderOrder, bTapped,
							   pDiscardedCards);
}

BOOL CSearchCardCommon::ResolveSearchCards(CPlayer* pPlayer,
										   MinimumValue nMinSearchCount,
										   MaximumValue nMaxSearchCount,
										   CPlayer* pByPlayer,
										   ZoneId fromZoneId,
										   const CCardFilter* pCardFilter,
										   ZoneId toZoneId,
										   BOOL bToOwnersZone,
										   CardPlacement discardToPlacement,
										   BOOL bTapped,
										   BOOL bRevealCardsToOthers,
										   BOOL bRemoveRemainingCardsFromGame,
										   CCountedCardContainer* pSelectedCards)
{
	ATLASSERT(!(fromZoneId & ~(ZoneId::Library | ZoneId::Graveyard)).Any());	// Only support those

	if ((pPlayer==pByPlayer) && (fromZoneId == ZoneId::Library)) pPlayer->SetSearchedLibraryThisTurn(TRUE);

	if (!GET_INTEGER(nMaxSearchCount) || GET_INTEGER(nMinSearchCount) > GET_INTEGER(nMaxSearchCount))
		return FALSE;

	CCountedCardContainer fromZone;
	if (fromZoneId == (ZoneId::Library | ZoneId::Graveyard))
	{
		fromZone.AddCards(*(pPlayer->GetZoneById(ZoneId::Library)), CardPlacement::Top);
		fromZone.AddCards(*(pPlayer->GetZoneById(ZoneId::Graveyard)), CardPlacement::Top);
	}
	else
	{
		fromZone.AddCards(*(pPlayer->GetZoneById(fromZoneId)), CardPlacement::Top);
	}

	CCountedCardContainer foundCards;
	for (int i = 0; i < fromZone.GetSize(); ++i)
	{
		CCard* pCard = fromZone.GetAt(i);
		if (!pCardFilter || pCardFilter->IsCardIncluded(pCard))
			foundCards.AddCard(pCard, CardPlacement::Top);
	}

	if ((fromZoneId & ZoneId::Library).Any())
		pPlayer->GetZoneById(ZoneId::Library)->Shuffle();	// Important: Shuffle library anyway even if found no cards

	if (!foundCards.GetSize())
		return FALSE;

	CCountedCardContainer selectedCards;

	CGame* pGame = pPlayer->GetGame();
	BOOL bIsThinking = pGame->IsThinking();

	// Select card(s)
	if (foundCards.GetSize() > GET_INTEGER(nMinSearchCount))
	{
		if (!bIsThinking && !pByPlayer->IsComputer())
		{
			SelectCardsData selectCard;

			if (pCardFilter)
			{
				if (GET_INTEGER(nMaxSearchCount) == SpecialNumber::Any)
					selectCard.strCaption.Format(_T("Select %s"), pCardFilter->GetFilterNamePlural());
				else
					if (GET_INTEGER(nMaxSearchCount) > 1)
						selectCard.strCaption.Format(_T("Select %s%d %s"), GET_INTEGER(nMinSearchCount) < GET_INTEGER(nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(nMaxSearchCount), pCardFilter->GetFilterNamePlural());					
					else
						selectCard.strCaption.Format(_T("Select %s"), pCardFilter->GetFilterName());

				selectCard.strTitle = pCardFilter->GetFilterNamePlural();
			}
			else
			{
				if (GET_INTEGER(nMaxSearchCount) == SpecialNumber::Any)
					selectCard.strCaption = _T("Select cards");
				else
					if (GET_INTEGER(nMaxSearchCount) > 1)
						selectCard.strCaption.Format(_T("Select %s%d cards"), GET_INTEGER(nMinSearchCount) < GET_INTEGER(nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(nMaxSearchCount));
					else
						selectCard.strCaption.Format(_T("Select %s1 card"), GET_INTEGER(nMinSearchCount) ? _T("") : _T("up to "));

				selectCard.strTitle = _T("Cards");
			}

			selectCard.pCardContainer = &foundCards;
			selectCard.nMinSelect = (GET_INTEGER(nMaxSearchCount) == SpecialNumber::Any ? MinimumValue(0) : nMinSearchCount);
			selectCard.nMaxSelect = (GET_INTEGER(nMaxSearchCount) == SpecialNumber::Any ? MaximumValue(foundCards.GetSize()) : nMaxSearchCount);
			selectCard.pCardFilter = NULL;	// No filter, already filtered

			if (!pByPlayer->GetInterface()->SelectCard(&selectCard))
				return FALSE;

			selectedCards.AddCards(selectCard.SelectedCards, CardPlacement::Top);
		}
		else
		{
			foundCards.Sort(FALSE);	// highest score to the bottom (0), descending

			int nMaxCount = (GET_INTEGER(nMaxSearchCount) == SpecialNumber::Any ? foundCards.GetSize() : 
								MIN(GET_INTEGER(nMaxSearchCount), foundCards.GetSize()));	// TODO, think about how many cards to take

#ifdef _MY_DEBUG
			//for (int j = 0; j < foundCards.GetSize(); ++j)
				//ATLTRACE(_T("%d) %s %d\n"), j, foundCards.CCountedCardContainer::GetAt(j)->GetCardName(),
				//foundCards.CCountedCardContainer::GetAt(j)->GetScore());
#endif

			for (int j = 0; j < nMaxCount; ++j)
				selectedCards.AddCard(foundCards.GetAt(j), CardPlacement::Top);
		}
	}
	else
		selectedCards.AddCards(foundCards, CardPlacement::Top);

	if ((selectedCards.GetSize() > 1) && CZone::HasOrdering(toZoneId) && toZoneId != ZoneId::Hand)
	{
		if (!bIsThinking && !pByPlayer->IsComputer())
		{
			OrderCardsData OrderCards;
			OrderCards.bReadOnly = FALSE;
			OrderCards.strCaption = _T("Order Cards Found");
			OrderCards.pCardContainer = &selectedCards;

			if (!pByPlayer->GetInterface()->OrderCards(&OrderCards))
				return FALSE;
		}
		else
		{
			selectedCards.Sort(TRUE);	// Lowest score to the bottom (0), ascending
		}
	}

	CPlayer* pThinkingPlayer = pGame->GetThinkingPlayer();

	if (discardToPlacement == CardPlacement::Top ||
		discardToPlacement == CardPlacement::Bottom)
		for (int j = 0; j < selectedCards.GetSize(); ++j)
		{
			int nIndex = (discardToPlacement == CardPlacement::Top ? j : selectedCards.GetSize() - j - 1);
			
			CCard* pCard = selectedCards.GetAt(nIndex);
			CZone* pToZone = 
				bToOwnersZone ? 
					pCard->GetOwner()->GetZoneById(toZoneId) :
					pByPlayer->GetZoneById(toZoneId);

			if (!bIsThinking && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) ||
								 toZoneId != ZoneId::Battlefield || fromZoneId == ZoneId::Hand || !pCard->GetCardType().IsCreature()))
			{
				CString strMessage;

				if (bRevealCardsToOthers)
				{
					strMessage.Format(_T("%s selects %s and puts it %s %s's %s"), 
						pByPlayer->GetPlayerName(), pCard->GetCardName(),
						pToZone->HasOrdering() ? _T("on") : _T("into"),
						pByPlayer->GetPlayerName(),
						pToZone->GetZoneName());

					for (int j = 0; j < pGame->GetPlayerCount(); ++j)
					{
						if (pGame->GetPlayer(j)->IsComputer())
							pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::SearchLibrary);

						pGame->GetPlayer(j)->MemorizeCard(pCard);
					}
				}
				else
				{
					ATLASSERT(!pToZone->IsVisibleToOthers());

					strMessage.Format(_T("%s selects a card and puts it %s %s's %s"), 
						pByPlayer->GetPlayerName(),
						pToZone->HasOrdering() ? _T("on") : _T("into"),
						pByPlayer->GetPlayerName(),
						pToZone->GetZoneName());

					pByPlayer->MemorizeCard(pCard);
					if (pByPlayer->IsComputer())
						pByPlayer->RemoveStrategy(StrategyRemovalReason::SearchLibrary);
				}

				pGame->Message(
					strMessage, 
					pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pByPlayer, MoveType::Others, discardToPlacement);

			if (pToZone->HasTapStance() && bTapped && !pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Tap();

			if (bIsThinking && pCardFilter &&
				(pToZone->IsVisibleToOthers() ||
				pToZone->GetPlayer() == pThinkingPlayer)	// 5/16/06 added: cards should be visible to thinking player if searching for specific cards
				)
				pGame->AddVisibleCard(pCard);
		}

	if (pSelectedCards)
		pSelectedCards->AddCards(selectedCards, CardPlacement::Top);

	if (bRemoveRemainingCardsFromGame)
	{
		CCountedCardContainer removeCards;

		if ((fromZoneId & ZoneId::Library).Any())
		{
			CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
			for (int i = 0; i < pLibrary->GetSize(); ++i)
				if (!selectedCards.HasCard(pLibrary->GetAt(i)))
					removeCards.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
		}

		if ((fromZoneId & ZoneId::Graveyard).Any())
		{
			CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
			for (int i = 0; i < pGraveyard->GetSize(); ++i)
				if (!selectedCards.HasCard(pGraveyard->GetAt(i)))
					removeCards.AddCard(pGraveyard->GetAt(i), CardPlacement::Top);
		}

		for (int i = 0; i < removeCards.GetSize(); ++i)
		{
			CCard* pCard = removeCards.GetAt(i);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), pByPlayer, MoveType::Others);
		}
	}

	//ATLTRACE(_T("******** RESOLVESEARCHCARDS() DONE\n"));

	return TRUE;
}
