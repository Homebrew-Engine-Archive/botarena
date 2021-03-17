#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
/*static*/
BOOL CZone::HasOrdering(ZoneId zoneId)
{
	return zoneId == ZoneId::Graveyard || zoneId == ZoneId::Library || zoneId == ZoneId::_Schemes || zoneId == ZoneId::_Planes || zoneId == ZoneId::Hand || zoneId == ZoneId::_Tokens;
}

/*static*/
BOOL CZone::IsBadCardMovement(const CPlayer* pByPlayer, const CZone* pMoveFromZone, const CZone* pMoveToZone)
{
	ZoneId moveFromZoneId = pMoveFromZone->GetZoneId();
	ZoneId moveToZoneId = pMoveToZone->GetZoneId();

	//"from your zone to opponent's zone" movements
	//("from opponent's zone to your zone" = never a bad move)
	//"from your zone to your zone" movements transformed [COPY] of "BOOL CZone::IsBadCardMovement(ZoneId fromZone, ZoneId toZone)" - seems to be necessary

	if (pMoveFromZone->GetPlayer() == pByPlayer)	// From pByPlayer's...
	{
		//From pByPlayer's battlefield to op's (battlefield, exile, graveyard, hand, library) -> bad
		//From pByPlayer's (exile, graveyard, hand, library) to op's battlefield -> bad

		//From pByPlayer's battlefield to pByPlayer's (graveyard, library) -> bad [COPY]
		//From pByPlayer's graveyard to pByPlayer's exile -> bad [COPY]
		//From pByPlayer's hand to pByPlayer's (exile, graveyard, library) -> bad [COPY]
		//From pByPlayer's library to pByPlayer's (exile, graveyard) -> bad [COPY]

		if (((moveFromZoneId == ZoneId::Battlefield) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield || moveToZoneId == ZoneId::Exile || moveToZoneId == ZoneId::Graveyard || moveToZoneId == ZoneId::Hand || moveToZoneId == ZoneId::Library)) ||
			((moveFromZoneId == ZoneId::Exile || moveFromZoneId == ZoneId::Graveyard || moveFromZoneId == ZoneId::Hand || moveFromZoneId == ZoneId::Library) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield)) ||

			((moveFromZoneId == ZoneId::Battlefield) && (pMoveToZone->GetPlayer() == pByPlayer) && (moveToZoneId == ZoneId::Graveyard || moveToZoneId == ZoneId::Library)) ||
			((moveFromZoneId == ZoneId::Graveyard) && (pMoveToZone->GetPlayer() == pByPlayer) && (moveToZoneId == ZoneId::Exile)) ||
			((moveFromZoneId == ZoneId::Hand) && (pMoveToZone->GetPlayer() == pByPlayer) && (moveToZoneId == ZoneId::Exile || moveToZoneId == ZoneId::Graveyard || moveToZoneId == ZoneId::Library)) ||
			((moveFromZoneId == ZoneId::Library) && (pMoveToZone->GetPlayer() == pByPlayer) && (moveToZoneId == ZoneId::Exile || moveToZoneId == ZoneId::Graveyard)))
			return TRUE;

		return FALSE;
	}
	
	//"from opponent's zone to opponent's zone" movements

	//From op's exile to op's (battlefield, graveyard, hand, library) -> bad
	//From op's graveyard to op's (battlefield, hand) -> bad
	//From op's hand to op's battlefield -> bad
	//From op's library to op's (battlefield, hand) -> bad

	if (((moveFromZoneId == ZoneId::Exile) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield || moveToZoneId == ZoneId::Graveyard || moveToZoneId == ZoneId::Hand || moveToZoneId == ZoneId::Library)) ||
		((moveFromZoneId == ZoneId::Graveyard) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield || moveToZoneId == ZoneId::Hand)) ||
		((moveFromZoneId == ZoneId::Hand) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield)) ||
		((moveFromZoneId == ZoneId::Library) && (pMoveToZone->GetPlayer() != pByPlayer) && (moveToZoneId == ZoneId::Battlefield || moveToZoneId == ZoneId::Hand)))
		return TRUE;

	return FALSE;
}

BOOL CZone::IsBadCardMovement(ZoneId fromZone, ZoneId toZone)
{
	//Is this here really needed? Because without the [COPY] from this here in the above section this IsBadCardMovement doesn't work. But without this here it (the copy) still works.
	// Assuming that both zones belong to the same player
	//"from your zone to your zone" movements

	//From pByPlayer's battlefield to pByPlayer's (graveyard, library) -> bad
	//From pByPlayer's graveyard to pByPlayer's exile -> bad
	//From pByPlayer's hand to pByPlayer's (exile, graveyard, library) -> bad
	//From pByPlayer's library to pByPlayer's (exile, graveyard) -> bad

	if (fromZone == toZone)
		return FALSE;

	if (((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Graveyard || toZone == ZoneId::Library)) ||
		((fromZone == ZoneId::Graveyard) && (toZone == ZoneId::Exile)) ||
		((fromZone == ZoneId::Hand) && (toZone == ZoneId::Exile || toZone == ZoneId::Graveyard || toZone == ZoneId::Library)) ||
		((fromZone == ZoneId::Library) && (toZone == ZoneId::Exile || toZone == ZoneId::Graveyard)))
		return TRUE;

	return FALSE;
}

//static
BOOL CZone::IsSamePhysicalZone(const CZone* pZone1, const CZone* pZone2)
{
	if ((pZone1->GetZoneId() == ZoneId::Battlefield) && (pZone2->GetZoneId() == ZoneId::Battlefield))
		return TRUE;

	return pZone1 == pZone2;
}

void CZone::OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{
	ATLASSERT(pOrientation->GetCard()->GetZone() == this);

	m_cpCardOrientationEventSource->FireEvent(pOrientation->GetCard(), fromOrientation, toOrientation);
}

CZone::CZone(ZoneId zoneId, BOOL bVisibleToOwner, BOOL bVisibleToOthers,
			 BOOL bHasTapStance,
			 CPlayer* pPlayer)
	: m_pGame(pPlayer->GetGame())
	, m_cpCardMovedEventSource(::CreateObject<CardMovementEventSource>(VAR_NAME(m_cpCardMovedEventSource)))
	, m_cpCardMovingEventSource(::CreateObject<CardMovementEventSource>(VAR_NAME(m_cpCardMovingEventSource)))
	, m_cpCardOrientationEventSource(::CreateObject<CardOrientationEventSource>(VAR_NAME(m_cpCardOrientationEventSource)))
	, m_cpCardTapForManaEventSource(::CreateObject<CardTapForManaEventSource>(VAR_NAME(m_cpCardTapForManaEventSource)))
	, m_cpCardTypeEventSource(::CreateObject<CardTypeEventSource>(VAR_NAME(m_cpCardTypeEventSource)))
	, m_cpCardEnchantCountEventSource(::CreateObject<CardEnchantCountEventSource>(VAR_NAME(m_cpCardEnchantCountEventSource)))
	, m_cpCardEquippedEventSource(::CreateObject<CardEquippedEventSource>(VAR_NAME(m_cpEquippedEventSource)))
	, m_cpCardIsAlsoAEventSource(::CreateObject<CardIsAlsoAEventSource>(VAR_NAME(m_cpCardIsAlsoAEventSource)))
	, m_ZoneId(zoneId)
	, m_bVisibleToOwner(bVisibleToOwner)
	, m_bVisibleToOthers(bVisibleToOthers)
	, m_bHasTapStance(bHasTapStance)
	, m_pPlayer(pPlayer)
	, m_cpOListener(VAR_NAME(m_cpOListener), COrientation::Listener::EventCallback(this, &CZone::OnOrientationChanged))
	, m_strZoneName(zoneId.ToString())
	, m_bHasOrdering(HasOrdering(zoneId))
{
}

BOOL CZone::AddCard(CCard* pCard, const CPlayer* pByPlayer, MoveType moveType, CardPlacement placement, BOOL bTapped)
{
	if ((ZoneId::_PseudoZones & m_ZoneId).Any())
	{
		__super::AddCard(pCard, placement);
		return TRUE;
	}

	CZone* pFromZone = pCard->GetZone();
	COrientation* pOrientation = pCard->GetOrientation();

	if (pFromZone == this)
	{
		pCard->AddRef();

		Remove(pCard);

		__super::AddCard(pCard, placement);

		pCard->Release();

		FixCardStatus(pCard, bTapped);

		return TRUE;
	}
	else if (!pFromZone)
	{
		if (!pCard->GetOwner())
			pCard->SetOwner(m_pPlayer);

		CCardFactory::GetInstance()->SetUniqueCardName(pCard);

		if (m_pGame->IsThinking())
			m_pGame->AddVisibleCard(pCard); // tokens created during thinking are visible
	}

	{ // Pre-movement events
		CCountedPtrContainer<CardMovementEventSource::Listener> firedListeners;
		if (moveType != MoveType::Morph)
		{
			pCard->m_cpMovingEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType);
			if (pFromZone)
			{
				pFromZone->m_cpCardMovingEventSource->GetListeners(firedListeners);
				pFromZone->OnRemovingCard(pCard, this, pByPlayer, moveType);
			}
		}
		OnAddingCard(pCard, pFromZone, pByPlayer, moveType, firedListeners);
	}

	pCard->AddRef();

	if (pFromZone)
	{
		pOrientation->RemoveListener(pFromZone->m_cpOListener.GetPointer());
		pFromZone->Remove(pCard);
		GetPlayer()->AddTurnMovementHistory(pCard, pCard->GetCardType(), pFromZone->GetZoneId(), GetZoneId());
	}

	__super::AddCard(pCard, placement);

	pCard->Release();

	if (!pCard->SetZone(this, pByPlayer, moveType))
		return FALSE;

	FixCardStatus(pCard, bTapped);

	pOrientation->AddListener(m_cpOListener.GetPointer());

	{ // Post-movement events
		CCountedPtrContainer<CardMovementEventSource::Listener> firedListeners;
		if (moveType != MoveType::Morph)
		{
			pCard->m_cpMovedEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType);
			if (pFromZone)
			{
				pFromZone->m_cpCardMovedEventSource->GetListeners(firedListeners);
				pFromZone->OnRemovedCard(pCard, this, pByPlayer, moveType);
			}
		}
		OnAddedCard(pCard, pFromZone, pByPlayer, moveType, firedListeners);
	}

	//if (GetZoneId() == ZoneId::Battlefield) GetPlayer()->AddTurnEnteredBattlefieldTypes(pCard->GetCardType());	

	if (pCard->GetCardType().IsToken())
	{
		if (GetZoneId() != ZoneId::Battlefield && GetZoneId() != ZoneId::Stack && GetZoneId() != ZoneId::Exile)
			{pCard->GetOwner()->GetZoneById(ZoneId::_Tokens)->AddCard(pCard);}
		
		if (GetZoneId() == ZoneId::Exile && pFromZone->GetZoneId() != ZoneId::_Tokens)
			pCard->GetOwner()->GetZoneById(ZoneId::_Tokens)->AddCard(pCard);
	}
	

	return TRUE;
}

void CZone::AddCards(const CCountedCardContainer& cards, const CPlayer* pByPlayer, MoveType moveType, CardPlacement placement, BOOL bTapped)
{
	if (placement == CardPlacement::Bottom)
	{
		//     0..m
		// 0..n

		for (int i = cards.GetSize() - 1; i >= 0; --i)
			AddCard(cards.GetAt(i), pByPlayer, moveType, placement, bTapped);
	}
	else
	{
		// 0..m
		//     0..n

		for (int i = 0; i < cards.GetSize(); ++i)
			AddCard(cards.GetAt(i), pByPlayer, moveType, placement, bTapped);
	}
}

void CZone::FixCardStatus(CCard* pCard, BOOL bTapped)
{
	if (pCard->GetController() != m_pPlayer)
		pCard->SetController(m_pPlayer);

	if (m_bVisibleToOwner && m_bVisibleToOthers)
		pCard->GetOrientation()->FaceUp();
	else
		if (!m_bVisibleToOwner && !m_bVisibleToOthers)
			pCard->GetOrientation()->FaceDown();
		else
			pCard->GetOrientation()->NoFacing();

	if (m_bHasTapStance)
	{
		if (!bTapped && (m_ZoneId == ZoneId::Battlefield))
		{
			std::set<const CCardFilter*> tapFilters;
			if (m_pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::InPlayTapped, tapFilters))
			{
				for (std::set<const CCardFilter*>::const_iterator it = tapFilters.begin(); it != tapFilters.end(); ++it)
					if ((*it)->IsCardIncluded(pCard))
					{
						bTapped = TRUE;
						break;
					}
			}
		}

		if (bTapped)
			pCard->GetOrientation()->Tap();
		// Must assume one of the two state: tapped or untapped
		else
			if (!pCard->GetOrientation()->IsTapped() &&
				!pCard->GetOrientation()->IsUntapped())
				pCard->GetOrientation()->Untap();	
	}
	else
		pCard->GetOrientation()->NoTapStance();

	// Shouldn't need to reset creature and card attributes if this is in-play. 
	if (!(m_ZoneId & ZoneId::_NonResetZones).Any())
	{
		//pCard->GetCardKeyword()->TurnReset();                    // Activated by ResetTurnPropertiesNoFlag();
		//pCard->GetReplacementKeyword()->TurnReset();              // Activated by ResetTurnPropertiesNoFlag();
		pCard->GetReplacementKeyword()->RemoveFieldKeywords();
		pCard->GetCardFlag()->ZoneResetMark();                        // Activated by ResetTurnPropertiesNoFlag();
		//pCard->ResetTurnCardTypes();                              // Activated by ResetTurnPropertiesNoFlag();
		if (!(pCard->GetCounterContainer()->GetActiveZones() & m_ZoneId).Any()) 
			pCard->GetCounterContainer()->RemoveAll();
		pCard->GetControlStack()->RemoveAll();
		pCard->GetOrientation()->UnFlip();
		pCard->GetOrientation()->FirstFace();
		pCard->ResetTurnPropertiesNoFlag();

		if (pCard->GetCardKeyword()->HasDetain())
		{
			pCard->GetCardKeyword()->RemoveDetain(FALSE);
			
			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				m_pGame->GetPlayer(i)->RemoveDetain(pCard);
			}
		}
		for (int k = 0; k < pCard->GetAbilityCount(); ++k)
				{
					pCard->GetAbility(k)->ResetTurnUsageCount();
					pCard->GetAbility(k)->ResetTurnResolveCount();
				}

		pCard->GetCardKeyword()->RemoveNoUntapInNextContUntap(FALSE); // may need to introduce a concept similar to 'Turn Reset' for these time sensitive keywords, e.g. 'Misc Reset'...
	
		pCard->ResetProperties();
		if (pCard->GetCardType().IsCreature())
		{
			if (!(pCard->GetCounterContainer()->GetActiveZones() & m_ZoneId).Any()) 
				pCard->GetCounterContainer()->RemoveAllPTCounters();
			((CCreatureCard*)pCard)->ResetCreatureAttributesToPrinted();
			((CCreatureCard*)pCard)->RemoveFromCombat(FALSE);
		}
	}
	else
	{
		pCard->GetCardKeyword()->RemoveFreecast(TRUE);		
	}
}

void CZone::OnCardTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult)
{
	m_cpCardTapForManaEventSource->FireEvent(pAction, bResult);
}

void CZone::OnAddingCard(CCard* pCard, CZone* pFromZone, const CPlayer* pByPlayer, MoveType moveType,
						 const CCountedPtrContainer<CardMovementEventSource::Listener>& firedListeners)
{
	if (moveType != MoveType::Morph)
	{
		if (!firedListeners.GetSize())
		{
			m_cpCardMovingEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType);
			return;
		}

		m_cpCardMovingEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType, firedListeners);
	}
}

void CZone::OnAddedCard(CCard* pCard, CZone* pFromZone, const CPlayer* pByPlayer, MoveType moveType,
						const CCountedPtrContainer<CardMovementEventSource::Listener>& firedListeners)
{
#ifdef _DEBUG
	if (moveType == MoveType::Draw || moveType == MoveType::NormalDraw)
		ATLASSERT(pFromZone->GetZoneId() == ZoneId::Library &&
			GetZoneId() == ZoneId::Hand);

	if (moveType == MoveType::Discard || moveType == MoveType::NormalDiscard)
		ATLASSERT(pFromZone->GetZoneId() == ZoneId::Hand &&
			GetZoneId() == ZoneId::Graveyard);
#endif

	if (!m_pGame->IsThinking() && !pCard->GetOrientation()->IsFaceDown())
	{
		// Remove old strategies if a new card is revealed:
		//  if the card is not visible to a computer player and now it is visible
		//  to that player, remove that player's strategy

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);

			if (IsVisibleTo(pPlayer))
			{
				if (pPlayer->IsComputer())
				{
					if (!pPlayer->IsMemorizedCard(pCard))
						pPlayer->RemoveStrategy(StrategyRemovalReason::NewCardVisible);
				}

				// Memorize this card if it is coming into a visible zone for each player

				pPlayer->MemorizeCard(pCard);
			}
		}
	}

	if (moveType != MoveType::Morph)
	{
		if (!firedListeners.GetSize())
		{
			m_cpCardMovedEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType);
			return;
		}

		m_cpCardMovedEventSource->FireEvent(pCard, pFromZone, this, const_cast<CPlayer*>(pByPlayer), moveType, firedListeners);
	}
}

void CZone::OnRemovingCard(CCard* pCard, CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType)
{
	m_cpCardMovingEventSource->FireEvent(pCard, this, pToZone, const_cast<CPlayer*>(pByPlayer), moveType);
}

void CZone::OnRemovedCard(CCard* pCard, CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType)
{
#ifdef _DEBUG
	if (moveType == MoveType::Draw || moveType == MoveType::NormalDraw)
		ATLASSERT(pToZone->GetZoneId() == ZoneId::Hand &&
			GetZoneId() == ZoneId::Library);

	if (moveType == MoveType::Discard || moveType == MoveType::NormalDiscard)
		ATLASSERT(pToZone->GetZoneId() == ZoneId::Graveyard &&
			GetZoneId() == ZoneId::Hand);
#endif

	m_cpCardMovedEventSource->FireEvent(pCard, this, pToZone, const_cast<CPlayer*>(pByPlayer), moveType);
}

BOOL CZone::IsVisibleToOthers() const
{
#if 1	// 11/2/2003: To support Telepathy

	int nPlayerCount = m_pGame->GetPlayerCount();
	for (int i = 0; i < nPlayerCount; ++i)
		if (m_pGame->GetPlayer(i) != m_pPlayer)
            if (m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::RevealHand))
				return TRUE;
#endif

	return m_bVisibleToOthers;
}

BOOL CZone::IsVisibleTo(const CPlayer* pPlayer) const
{
	if (pPlayer == m_pPlayer)
		return IsVisibleToOwner();
	return IsVisibleToOthers();
}

void CZone::Shuffle()
{
	ATLASSERT(m_bHasOrdering);
	if (!m_bHasOrdering)
		return;

	if (!m_pGame->IsThinking())
	{
		__super::Shuffle(m_pPlayer);

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			for (int i = 0; i < GetSize(); ++i)
				pPlayer->ForgetCard(GetAt(i));
		}
	}
	else
		for (int i = 0; i < GetSize(); ++i)
			m_pGame->RemoveVisibleCard(GetAt(i));
}

void CZone::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	m_cpCardTypeEventSource->FireEvent(pCard, fromCardType, toCardType);
}

void CZone::OnCardEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount)
{
	m_cpCardEnchantCountEventSource->FireEvent(pCard, nFromCount, nToCount);
}

/*void CZone::OnCardEquipedOnCardEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
{
	m_cpCardEquippedEventSource->FireEvent(pEquipCard, pFromCard, pToCard);
}*/

void CZone::OnCardIsAlsoAChanged(CCard* pCard, CCard* pFromIsAlsoA, CCard* pToIsAlsoA)
{
	m_cpCardIsAlsoAEventSource->FireEvent(pCard, pFromIsAlsoA, pToIsAlsoA);
}

//____________________________________________________________________________
//
CZone* CZoneContainer::GetZoneById(ZoneId zoneId) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CZone* pZone = GetAt(i);
		
		if (pZone->GetZoneId() == zoneId)
			return pZone;
	}

	ATLASSERT(false);

	return NULL;
}
