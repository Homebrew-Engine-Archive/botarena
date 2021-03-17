#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CPlayerEffectSpell::CPlayerEffectSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   PlayerEffectType playerEffect,
								   BOOL bThisTurnOnly,
								   int nParam,
								   BOOL bAdd)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_PlayerEffect(playerEffect)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nParam(nParam)
	, m_bAdd(bAdd)
	, m_bAffectControllerOnly(FALSE)
	, m_bAffectOpponentsOnly(FALSE)
{
}

BOOL CPlayerEffectSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	if (m_bAdd)
	{
		if (!m_bAffectOpponentsOnly)
			if (!GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
				return TRUE;
			else
				if (m_bAffectControllerOnly)
					return FALSE;

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			if (m_pGame->GetPlayer(i) != GetController())
				if (!m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					return TRUE;

		return FALSE;	
	}

	if (!m_bAffectOpponentsOnly)
		if (GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
			return TRUE;
		else
			if (m_bAffectControllerOnly)
				return FALSE;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		if (m_pGame->GetPlayer(i) != GetController())
			if (m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
				return TRUE;

	return FALSE;
}

CActionContainer* CPlayerEffectSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	BOOL bTrick = TRUE;

	do
	{
		if (m_bAdd)
		{
			if (!m_bAffectOpponentsOnly)
				if (!GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					bTrick = FALSE;
				else
					if (m_bAffectControllerOnly)
						break;

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				if (m_pGame->GetPlayer(i) != GetController())
					if (!m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					{
						bTrick = FALSE;
						break;
					}
		}
		else
		{
			if (!m_bAffectOpponentsOnly)
				if (GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					bTrick = FALSE;
				else
					if (m_bAffectControllerOnly)
						break;

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				if (m_pGame->GetPlayer(i) != GetController())
					if (m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					{
						bTrick = FALSE;
						break;
					}
		}
	} while (false);

	if (!bTrick)
		return pActionContainer;

	if (!bIncludeTricks)
	{
		delete pActionContainer;
		return NULL;
	}

	// Set all actions to trick

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
		pActionContainer->GetAt(l)->SetTrick();

	return pActionContainer;
}

BOOL CPlayerEffectSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pController = pAction1->GetController();

	if (m_bAffectControllerOnly)
	{
		if (m_bAdd)
			const_cast<CPlayer*>(pController)->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, m_bThisTurnOnly, m_nParam);
		else
			const_cast<CPlayer*>(pController)->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, m_bThisTurnOnly, m_nParam);

		return TRUE;
	}

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		if (!m_bAffectOpponentsOnly || (m_pGame->GetPlayer(i) != pController))
			if (m_bAdd)
				m_pGame->GetPlayer(i)->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, m_bThisTurnOnly, m_nParam);
			else
				m_pGame->GetPlayer(i)->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, m_bThisTurnOnly, m_nParam);

	return TRUE;
}

//____________________________________________________________________________
//
CPumpAbility::CPumpAbility(CCard* pCard,
						   LPCTSTR strManaCost,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd,
						   CCreatureCard* pCreatureCard)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_PowerModifier(nPowerDelta)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
	, m_pCreatureCard(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard)
{
	SetToActivatedAbility();

	AddAbilityTag(AbilityTag::CreatureChange);

	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(TRUE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(TRUE);
}

void CPumpAbility::AddAbilityModifier(CCardAbilityModifier::CreateAbilityCallback callback)
{
	m_OtherCardModifiers.Add(
		new CScheduledCardModifier(GetGame(),
			new CCardAbilityModifier(callback), 
			TurnNumberDelta(-1), // next end of turn
			NodeId::EndStep, 
			false, // in-play or not, need to remove the ability
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));
}

BOOL CPumpAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{	
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	if ((m_LifeModifier.GetLifeDelta() == Life(0)) && m_PowerModifier.GetPowerDelta() == Power(0) && (m_Cost.GetExtraManaCost() == 0))
	{
		const CStack& stack = m_pGame->GetStack();
		int nStackSize = stack.GetStackSize();
		if (!nStackSize)
		{
			{
				CreatureKeyword toAdd = m_CreatureKeywordModifier.GetModifier().GetToAdd();
				CreatureKeyword toRemove = m_CreatureKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CreatureKeyword creatureKeyword = m_pCreatureCard->GetCreatureKeyword()->Get();

					if (((creatureKeyword & toAdd) != toAdd) ||
						(creatureKeyword & toRemove).Any())
						return TRUE;
				}
			}

			{
				CardKeyword toAdd = m_CardKeywordModifier.GetModifier().GetToAdd();
				CardKeyword toRemove = m_CardKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CardKeyword cardKeyword = m_pCreatureCard->GetCardKeyword()->Get();
					if (((cardKeyword & toAdd) != toAdd) ||
						(cardKeyword & toRemove).Any())
						return TRUE;
				}
			}

			return FALSE;
		}

		const CStackAbilityAction* pStackAction = stack.GetStackAction(nStackSize - 1).GetPointer();
		if (pStackAction->GetAbility() != this)
			return TRUE;

		return FALSE;
	}

	return TRUE;
}

CActionContainer* CPumpAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;


	if ((m_LifeModifier.GetLifeDelta() == Life(0)) && m_PowerModifier.GetPowerDelta() == Power(0))
	{
		BOOL bTrick = TRUE;

		const CStack& stack = m_pGame->GetStack();
		int nStackSize = stack.GetStackSize();
		if (nStackSize)
		{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(nStackSize - 1).GetPointer();
			if (pStackAction->GetAbility() != this)
				bTrick = FALSE;
		}
		else
		{
			{
				CreatureKeyword toAdd = m_CreatureKeywordModifier.GetModifier().GetToAdd();
				CreatureKeyword toRemove = m_CreatureKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CreatureKeyword creatureKeyword = m_pCreatureCard->GetCreatureKeyword()->Get();

					if (((creatureKeyword & toAdd) != toAdd) ||
						(creatureKeyword & toRemove).Any())
						bTrick = FALSE;
				}
			}

			if (bTrick)
			{
				CardKeyword toAdd = m_CardKeywordModifier.GetModifier().GetToAdd();
				CardKeyword toRemove = m_CardKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CardKeyword cardKeyword = m_pCreatureCard->GetCardKeyword()->Get();
					if (((cardKeyword & toAdd) != toAdd) ||
						(cardKeyword & toRemove).Any())
						bTrick = FALSE;
				}
			}
		}

		if (bTrick)
		{
			if (!bIncludeTricks)
			{
				delete pActionContainer;
				return NULL;
			}

			for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
				pActionContainer->GetAt(l)->SetTrick(TRUE);
		}
	}

	if (bSetNames)
	{
		CString strActionName1(
			GetCreatureGainString((const CCreatureCard*)GetCard(), &m_PowerModifier, &m_LifeModifier, &m_CreatureKeywordModifier, &m_CardKeywordModifier));

		if (!strActionName1.IsEmpty())
		{
			CString strActionName;
			strActionName.AppendFormat(_T(" (%s)"), strActionName1);

			for (int l = 0; l < pActionContainer->GetSize(); ++l)
				pActionContainer->GetAt(l)->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CPumpAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	m_PowerModifier.ApplyTo(m_pCreatureCard);
	m_LifeModifier.ApplyTo(m_pCreatureCard);

	m_CreatureKeywordModifier.ApplyTo(m_pCreatureCard);
	m_CardKeywordModifier.ApplyTo(m_pCreatureCard);

	m_OtherCardModifiers.ApplyTo(m_pCreatureCard);
	m_OtherCreatureModifiers.ApplyTo(m_pCreatureCard);

	return TRUE;
}

//____________________________________________________________________________
//
CRegenerationAbility::CRegenerationAbility(CCard* pCard, LPCTSTR strManaCost, CCreatureCard* pCreatureCard)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_pCreatureCard(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard)
{
	SetToActivatedAbility();

	AddAbilityTag(AbilityTag::Regeneration);
	SetAbilityName(_T("Regeneration"));
	SetAbilityText(_T("regenerates"));

	/* 10/19/2002: Changed to use usage pattern instead for computer players. Human players are relaxed to use this ability at any time
	CThreatActivatedTrait* pTrait1 = new CThreatActivatedTrait(this,
		NodeId::CombatDamageStep2 | NodeId::CombatDamageStep3,
		TRUE,
		TRUE,
		TRUE,
		CAction::AFFECTED_LIFE);
	ATLASSERT(pTrait1);
	AddTrait(pTrait1);
	*/
}

/* 10/19/2002: Changed to use usage pattern instead for computer players. Human players are relaxed to use this ability at any time
BOOL CRegenerationAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{	
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	// Optimization, augmenting CThreatActivatedTrait <-- 10/19/2002, incorrect logic
	CCreatureCard* pCard = (CCreatureCard*)m_pCard;
	if (pCard->GetRegenerationShields())
		return FALSE;

	// Optimization, no more regeneration if last stack action is a regeneration action
	CStack* pStack = m_pGame->GetStack();
	if (pStack->GetStackSize())
	{
		CRegenerationAbility* pAbility = (CRegenerationAbility*)(pStack->GetTopAction()->GetStackAbility());
		if (pAbility == this)
			return FALSE;
	}

	return TRUE;
}
*/

CActionContainer* CRegenerationAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("regenerates %s"), m_pCreatureCard->GetCardName(FALSE));

		for (int l = 0; l < pActionContainer->GetSize(); ++l)
			pActionContainer->GetAt(l)->SetActionName(strActionName);
	}

	return pActionContainer;
}

BOOL CRegenerationAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	m_pCreatureCard->AddRegenerationShield();

	return TRUE;
}

//____________________________________________________________________________
//
CRevealLibraryCardSpell::CRevealLibraryCardSpell(CCard* pCard,
									AbilityType abilityType,
									LPCTSTR strManaCost,
									int nRevealCount)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nRevealCount(nRevealCount)
	//, m_uMoveToZoneId(ZoneId::Null)
	//, m_uMoveToZoneId1(ZoneId::Null)
	, m_bRevealCardsToOthers(FALSE)
	, m_bRevealOnlySelected(FALSE)
	, m_bReorder(FALSE)
	, m_ReorderToZone(ZoneId::Library)
	, m_ReorderToZonePlacement(CardPlacement::Top)
	//, m_MoveType(MoveType::Others)
	, m_nMaxSelectionCount(0)
	, m_nMinSelectionCount(1)
	, m_SelectToZone(ZoneId::Hand)
	, m_SelectToZonePlacement(CardPlacement::NotApplicable)
	, m_pSelectionCardFilter(NULL)
{
}

/*
void CRevealLibraryCardSpell::SetRevealedCardsTo(CardComparer* pComparer,
												 ZoneId toZoneId, MoveType moveType, ZoneId uToZoneId1)
{
	m_MoveCardFilter.AddComparer(pComparer);
	m_uMoveToZoneId = toZoneId;
	m_uMoveToZoneId1 = uToZoneId1;
	m_MoveType = moveType;
}
*/

CActionContainer* CRevealLibraryCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nRevealCount = m_nRevealCount;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nRevealCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nRevealCount));

		if (bSetNames)
		{
			CString strFromZone(ZoneId::ToString(ZoneId::Library));
			CString strAppend;
			if (m_nRevealCount > 1)
				strAppend.Format(_T(" to reveal top %d cards from %s"), m_nRevealCount, strFromZone);
			else
				strAppend.Format(_T(" to reveal the top card in the %s"), strFromZone);
		
			pAction->AppendToActionName(strAppend);
		}
	}

	return pActionContainer;
}

BOOL CRevealLibraryCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();
	int nRevealCount = pAction1->GetValue().nValue1;

	return CDrawCardCommon::ResolveRevealZone(const_cast<CPlayer*>(pCaster),
		const_cast<CPlayer*>(pCaster),
		nRevealCount,
		m_bRevealCardsToOthers,
		m_bReorder,
		m_ReorderToZone,
		m_ReorderToZonePlacement,
		NULL,
		m_nMaxSelectionCount,
		m_nMinSelectionCount,
		ZoneId::Library,
		m_SelectToZone,
		m_SelectToZonePlacement,
		m_pSelectionCardFilter,
		m_bRevealOnlySelected);
/*
	if (m_uMoveToZoneId == ZoneId::Null)
		return TRUE;

	for (int i = revealedCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = revealedCards.GetAt(i);

		CZone* pToZone = NULL;

		if (!m_pGame->IsThinking() ||
			m_pGame->IsCardVisible(pCard))
		{
			if (m_MoveCardFilter.IsCardIncluded(pCard))
				pToZone = pCaster->GetZoneById(m_uMoveToZoneId);
			else
				if (m_uMoveToZoneId1 != ZoneId::Null)
					pToZone = pCaster->GetZoneById(m_uMoveToZoneId1);
		}
		else
			pToZone = pCaster->GetZoneById(m_uMoveToZoneId);	// assume going to the first zone

		if (pToZone)
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s puts %s to %s"), 
					pCaster->GetPlayerName(), pCard->GetCardName(), pToZone->GetZoneName());
				m_pGame->Message(
					strMessage, 
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, const_cast<CPlayer*>(pCaster), m_MoveType);
		}
	}

	return TRUE;
*/
}

//____________________________________________________________________________
//
CSearchLibrarySpell::CSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter,
										 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nMaxSearchCount(1)
	, m_nMinSearchCount(1)
	, m_FromZoneId(ZoneId::Library)
	, m_ToZoneId(toZoneId)
	, m_bTapped(bTapped)
	, m_bRevealCards(TRUE)
	, m_bRemoveRemainingCardsFromGame(FALSE)
	, m_bToOwnersZone(FALSE)
	, m_bToTop(bToTop)
	, m_pCompareCardFilter(NULL)
	, m_pSearchCardFilter(pSearchCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CSearchLibrarySpell::SetFromZoneId(ZoneId fromZoneId)
{
	m_FromZoneId = fromZoneId;
}

void CSearchLibrarySpell::SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount)	// Default is 1
{
	m_nMaxSearchCount = nMaxSearchCount;
	m_nMinSearchCount = nMinSearchCount;
}

void CSearchLibrarySpell::SetRevealCards(BOOL bRevealCards)
{
	m_bRevealCards = bRevealCards;
}	

void CSearchLibrarySpell::SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame)
{
	m_bRemoveRemainingCardsFromGame = bRemoveRemainingCardsFromGame;
}

BOOL CSearchLibrarySpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (m_pCompareCardFilter)
	{
		int nMaxOpponentCount = 0;
		int nControllerCount = 0;
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = m_pCompareCardFilter->CountIncluded(*pZone);
			if (pPlayer == GetController())
				nControllerCount = nCount;
			else
				nMaxOpponentCount = nCount;
		}

		if (nControllerCount >= nMaxOpponentCount)
			return FALSE;
	}

	if (bIncludeTricks)
		return TRUE;

	CZone* pZone = GetController()->GetZoneById(ZoneId::Library);
	for (int k = 0; k < pZone->GetSize(); ++k)
		if (m_pSearchCardFilter->IsCardIncluded(pZone->GetAt(k)))
			return TRUE;

	return FALSE;
}

CActionContainer* CSearchLibrarySpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = GET_INTEGER(m_nMinSearchCount);
		Context.nValue2 = GET_INTEGER(m_nMaxSearchCount);

		pAction->SetValue(Context);

		CString strActionName;
		if ((m_FromZoneId & ZoneId::Hand).Any())
		{
			if (m_nMaxSearchCount == MaximumValue(1))
				strActionName.Format(_T(" to put %s from hand onto the battlefield"), m_pSearchCardFilter->GetFilterName());
			else
			{
				if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
					strActionName.Format(_T(" to put any number of %s from hand onto the battlefield"), m_pSearchCardFilter->GetFilterNamePlural());
				else
					strActionName.Format(_T(" to put %s%d %s from hand onto the battlefield"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount), m_pSearchCardFilter->GetFilterNamePlural());
			}
		}
		else
		{
			CString strZones;
			if ((m_FromZoneId & ZoneId::Library).Any())
				strZones = _T("library");

			if ((m_FromZoneId & ZoneId::Graveyard).Any())
				if (strZones.IsEmpty())
					strZones = _T("graveyard");
				else
					strZones += _T(" and graveyard");

			if (m_nMaxSearchCount == MaximumValue(1))
				pAction->AppendToActionName(_T(" to search ") + strZones + _T(" for ") + m_pSearchCardFilter->GetFilterName());
			else
			{
				if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
					strActionName.Format(_T(" to search ") + strZones + _T(" for %s"), m_pSearchCardFilter->GetFilterNamePlural());
				else
					strActionName.Format(_T(" to search ") + strZones + _T(" for %s%d %s"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount), m_pSearchCardFilter->GetFilterNamePlural());
			}
		}
		pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

BOOL CSearchLibrarySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	int nMinSearchCount = pAction1->GetValue().nValue1;
	int nMaxSearchCount = pAction1->GetValue().nValue2;

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  MinimumValue(nMinSearchCount),
											  MaximumValue(nMaxSearchCount),
											  const_cast<CPlayer*>(pCaster),
											   m_FromZoneId,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards,
											  m_bRemoveRemainingCardsFromGame))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CCounterSpell::CCounterSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 CardComparer* pComparer)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_bTargetOnlySpellsWithEqualCost(FALSE)
	, m_bToOwnersZone(TRUE)
	, m_ToAlternateZone(ZoneId::Null)
	, m_bToAlternateOwnersZone(FALSE)
	, m_bSetExtraCostToDenialCost(FALSE)
	, m_bTapAllLands(FALSE)
	, m_bClearManaPool(FALSE)
	, m_ToZone(ZoneId::Graveyard)
	, m_PlacementSelection(m_pGame, CSelectionSupport::SelectionCallback(this, &CCounterSpell::OnPlacementSelected))
{
	AddAbilityTag(AbilityTag::Counterspell);

	m_CounterspellCardFilter.AddComparer(pComparer);
}

void CCounterSpell::SetToZone(ZoneId toZone, BOOL bToOwner, CardPlacement bPlacement)
{
	m_ToZone = toZone;
	m_bToOwnersZone = bToOwner;
	m_bPlacement = bPlacement;
}

void CCounterSpell::SetTargetOnlySpellsWithEqualCost()
{
	m_bTargetOnlySpellsWithEqualCost = TRUE;
	SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
}

void CCounterSpell::SetToAlternateZone(
		CardComparer* pAlternateComparer,
		ZoneId toZone, BOOL bToOwner)
{
	m_ToAlternateZone = toZone;
	m_bToAlternateOwnersZone = bToOwner;
	m_AlternateZoneCardFilter.SetComparer(pAlternateComparer);
}

void CCounterSpell::SetExtraCostToDenialCost()
{
	m_bSetExtraCostToDenialCost = TRUE;
}

void CCounterSpell::SetTapAllLands()
{
	m_bTapAllLands = TRUE;
}

void CCounterSpell::SetClearManaPool()
{
	m_bClearManaPool = TRUE;
}

BOOL CCounterSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CPlayer* pController = GetController();
	const CStack& stack = m_pGame->GetStack();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		if (!bIncludeTricks && (pPlayer == pController))
			continue;

		// To support Gaea's Herald
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);

		// To support Autumn's Veil
		std::set<const CCardFilter*> cantCounterFilterIndexes2;
		pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCounteredBySpells, cantCounterFilterIndexes2);

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Stack);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (m_CounterspellCardFilter.IsCardIncluded(pCard))
			{
				BOOL bCantBeCountered = FALSE;

				if (pCard->GetCardKeyword()->CantBeCountered() == TRUE)
					BOOL bCantBeCountered = TRUE;

				for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
					if ((*it)->IsCardIncluded(pCard))
					//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
					{
						bCantBeCountered = TRUE;
						break;
					}

				if (IsSpell())
					for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes2.begin(); it != cantCounterFilterIndexes2.end(); ++it)
						if ((*it)->IsCardIncluded(GetCard()))
						//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
						{
							bCantBeCountered = TRUE;
							break;
						}

				if (bCantBeCountered)
				{
					if (!bIncludeTricks)
						continue;
				}

				BOOL bResult = TRUE;

				if (m_bTargetOnlySpellsWithEqualCost && !bAssumeSufficientMana)			// Ref: Spell Blast
				{
					// Note: if bAssumeSufficientMana is true, this IsPlayable is relaxed when m_bTargetOnlySpellsWithEqualCost is true 
					// because we don't have the information of how much mana the player can potentially produce

					const CManaPool_& manaPool = pController->GetManaPool();
					DWORD nX = m_Cost.GetMaxExtraValue(manaPool);
					
					bResult = FALSE;

					// Search the common stack for this spell

					for (int l = 0; l < stack.GetStackSize(); ++l)
					{
						const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							if (pStackAction->GetCostManaPool().GetTotal() <= nX)
								bResult = TRUE;
							break;
						}
					}
				}

				return bResult;
			}
		}
	}

	return FALSE;
}

CActionContainer* CCounterSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CPlayer* pController = GetController();
	const CStack& stack = m_pGame->GetStack();

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CTargetStackSpellAction* pAction = (CTargetStackSpellAction*)pActionContainer->GetAt(i).GetPointer();

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(j);

			BOOL bTrick = FALSE;

			if (pPlayer == pController)
				bTrick = TRUE;

			if (!bIncludeTricks && bTrick)
				continue;

			// To support Gaea's Herald/Autumn's Veil
			std::set<const CCardFilter*> cantCounterFilterIndexes;
			std::set<const CCardFilter*> cantCounterFilterIndexes2;
			if (!bTrick)
			{
				pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
				pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCounteredBySpells, cantCounterFilterIndexes);
			}

			CZone* pZone = pPlayer->GetZoneById(ZoneId::Stack);
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);
				if (!m_CounterspellCardFilter.IsCardIncluded(pCard))
					continue;

				if (!bTrick)
				{
					if (pCard->GetCardKeyword()->CantBeCountered())
						bTrick = TRUE;

					// To support Gaea's Herald
					for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
						//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
						if ((*it)->IsCardIncluded(pCard))
						{
							bTrick = TRUE;
							break;
						}

					// To support Autumn's Veil
					if (IsSpell())
						for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes2.begin(); it != cantCounterFilterIndexes2.end(); ++it)
							//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
							if ((*it)->IsCardIncluded(GetCard()))
							{
								bTrick = TRUE;
								break;
							}

					if (bTrick && !bIncludeTricks)
						continue;
				}

				if (m_bTargetOnlySpellsWithEqualCost)
				{
					int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();
					BOOL bFound = FALSE;

					for (int l = 0; l < stack.GetStackSize(); ++l)
					{
						const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							if (pStackAction->GetAbility()->GetCost().GetOriginalManaCost().GetTotal() == nExtraCost)
								bFound = TRUE;

							break;
						}
					}

					if (!bFound)
						continue;
				}

				if (m_bSetExtraCostToDenialCost)
				{
					int nExtraCost = m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

					pAction->GetDenialCost().AddManaCost(CManaCost::Color::Generic, nExtraCost);
				}

				counted_ptr<CTargetStackSpellAction> cpAction1 = (CTargetStackSpellAction*)CreateAction().GetPointer();
				cpAction1->Copy(pAction);

				CSubjectGroup& targetGroup = cpAction1->GetTargetGroup();
				targetGroup.SetSourceCard(m_pCard);
				targetGroup.AddSubject(pCard);

				if (bSetNames)
				{
					CString strActionText(_T(" and counters ") + pCard->GetCardName());

					if ((pCard->GetCardType() & CardType::Creature).Any())
					{
						CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
						strActionText += _T("(") + pCreatureCard->GetPowerToughnessText(TRUE) + _T(")");
					}

					cpAction1->AppendToActionName(strActionText);
				}

				if (bTrick)
					cpAction1->SetTrick();		// Counterspell

				pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

/* Integrated into ResolveImpl()
BOOL CCounterSpell::IsResolvable(CAction* pAction)
{
#if 1	// Changed to prevent changes to the pAction which may cause undesirable problems during the minimax process
	if (!CSpell::IsResolvable(pAction))
		return FALSE;

	CTargetStackSpellAction* pAction1 = (CTargetStackSpellAction*)pAction;
	CSubjectGroup* pTarget = pAction1->GetTarget();

	const CCountedCardContainer* pCardContainer = pTarget->GetCardContainer();
	for (int i = pCardContainer->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCardContainer->GetAt(i);
		if ((pCard->GetZoneId() == ZoneId::Stack) &&
			IsCardIncluded(pCard))				// 9/8/2002
			return TRUE;
	}

	LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	return FALSE;
#else
	if (!CSpell::IsResolvable(pAction))
		return FALSE;

	CTargetStackSpellAction* pAction1 = (CTargetStackSpellAction*)pAction;
	CSubjectGroup* pTarget = pAction1->GetTarget();

	const CCountedCardContainer* pCardContainer = pTarget->GetCardContainer();
	for (int i = pCardContainer->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCardContainer->GetAt(i);
		if ((pCard->GetZoneId() != ZoneId::Stack) ||
			!IsCardIncluded(pCard))				// 9/8/2002
			pTarget->RemoveTarget(pCard);
	}

	if (!pTarget->GetSubjectCount())
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
#endif
}
*/

BOOL CCounterSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetStackSpellAction* pAction1 = (const CTargetStackSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	CStack& stack = m_pGame->GetStack();

	BOOL bFound = FALSE;

	std::set<CPlayer*> targetedPlayers;

	for (CSubjectGroup::CardSubjectIterator i = targetGroup.CardSubjectBegin();
		i != targetGroup.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();

		targetedPlayers.insert(const_cast<CPlayer*>(pCard->GetController()));

		// Skip over unresolvable targetGroup. Added to match changes done to the IsResolvable(). See above.
		if ((pCard->GetZoneId() != ZoneId::Stack) ||
			!m_CounterspellCardFilter.IsCardIncluded(pCard))
			continue;

		if (!stack.CanCounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToAlternateOwnersZone, m_ToAlternateZone, m_bPlacement))
			continue;

		if (m_ToAlternateZone.Any() && m_AlternateZoneCardFilter.IsCardIncluded(pCard))
		{
			//if (m_bToAlternateOwnersZone)
				if(stack.CounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToAlternateOwnersZone, m_ToAlternateZone, m_bPlacement))
					bFound = TRUE;

			continue;
		}
		if (m_bPlacement == CardPlacement::TopOrBottom)
		{

				if (!stack.CanCounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToAlternateOwnersZone, m_ToAlternateZone, m_bPlacement))
					continue;

				bFound = TRUE;

				//----------------------------------------------------------------------------------------------------------------------------------------------------
				std::vector<SelectionEntry> entries;

				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				selectionEntry.strText.Format(_T("select top"));

				entries.push_back(selectionEntry);

				selectionEntry.dwContext = 2;
				selectionEntry.strText.Format(_T("select bottom"));

				entries.push_back(selectionEntry);

				m_PlacementSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction1->GetController(), (DWORD)const_cast<CCard*>(pCard));
				continue;
		}
		if(stack.CounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToOwnersZone, m_ToZone,
			m_bPlacement))
			bFound = TRUE;
		// ----------------------------------------------------------------// Moved to Stack class------------------------------------------------
		/*// To support Gaea's Herald   
		BOOL bCantCounter = FALSE;
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
		if ((*it)->IsCardIncluded(pCard))
		//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
		{
		bCantCounter = TRUE;
		break;
		}

		if (bCantCounter || pCard->GetCardKeyword()->CantBeCountered())
		continue;

		bFound = TRUE;

		// Remove from stack

		for (int l = 0; l < stack.GetStackSize(); ++l)
		{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
		{
		stack.RemoveActionAt(l);
		if (pCard->GetCardType().IsCreature() && pCard->GetController() != pAction->GetController())
		pCard->GetController()->SetCreatureCounteredByOpponent(TRUE);   // To Support Summoning Trap
		break;
		}
		}

		// Move to graveyard

		if (m_ToAlternateZone.Any() && m_AlternateZoneCardFilter.IsCardIncluded(pCard))
		{
		if (m_bToAlternateOwnersZone)
		const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToAlternateZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
		else
		const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pAction1->GetController()->GetZoneById(m_ToAlternateZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
		continue;
		}
		if (m_bPlacement == CardPlacement::TopOrBottom)
		{
		std::vector<SelectionEntry> entries;

		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("select top"));

		entries.push_back(selectionEntry);

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("select bottom"));

		entries.push_back(selectionEntry);

		m_PlacementSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction1->GetController(), (DWORD)const_cast<CCard*>(pCard));
		}
		else
		if (m_bToOwnersZone)
		const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others, m_bPlacement);
		else
		const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pAction1->GetController()->GetZoneById(m_ToZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others, m_bPlacement);*/
	}

	if (m_bTapAllLands || m_bClearManaPool)
		for (std::set<CPlayer*>::iterator it = targetedPlayers.begin(); it != targetedPlayers.end(); ++it)
		{
			CPlayer* pPlayer = *it;

			if (m_bTapAllLands)
			{
				CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pInplay->GetSize(); ++i)
				{
					CCard* pCard = pInplay->GetAt(i);
					if ((pCard->GetCardType() & CardType::_Land).Any() &&
						!pCard->GetOrientation()->IsTapped())
						pCard->GetOrientation()->Tap();
				}
			}

			if (m_bClearManaPool)
			{
				pPlayer->GetManaPool().Clear();
			}
		}

		if (!bFound)
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);

		return bFound;
}
void CCounterSpell::OnPlacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CardPlacement placement;
			if (it->dwContext == 1)
				placement = CardPlacement::Top;
			else
				placement = CardPlacement::Bottom;
			pSelectionPlayer->GetGame()->GetStack().CounterSpell(pSelectionPlayer, (CCard*)dwContext1, TRUE, ZoneId::Library, placement);
		//	((CCard*)dwContext1)->Move(const_cast<CZone*>(((CCard*)dwContext1)->GetOwner()->GetZoneById(ZoneId::Library)), pSelectionPlayer, MoveType::Others, placement);
		}
}
counted_ptr<CAbilityAction> CCounterSpell::CreateAction() const
{
	counted_ptr<CTargetStackSpellAction> cpAction = ::CreateObject<CTargetStackSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CCounterSpell*>(this));
	cpAction->SetScore(ActionScore::Counterspell);

	return cpAction.GetPointer();
}

CCost CCounterSpell::GetSpecialDenialCost(CPlayer* pPlayer)
{
	return NULL;
}

BOOL CCounterSpell::CanDeflectTargetToSpell(const CTargetStackSpellAction* pAction, const CCard* pSource) const
{
	return m_CounterspellCardFilter.IsCardIncluded(pSource);
}


void CCounterSpell::DeflectTargetToSpell(CTargetStackSpellAction* pAction, CCard* pCard)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

	targetGroup.RemoveAll();
	targetGroup.AddSubject(pCard);
}

//____________________________________________________________________________
//
CCounterSpell2::CCounterSpell2(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pCounterspellCardComparer,
							   CardComparer* pUntapCardComparer,
							   int nMinUntap, int nMaxUntap)
	: CCounterSpell(pCard, abilityType, strManaCost, pCounterspellCardComparer)
	, m_nMinUntap(nMinUntap)
	, m_nMaxUntap(nMaxUntap)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCounterSpell2::OnSelectionDone))
{
	m_UntapCardFilter.SetAbility(this);

	// You can untap opponent's cards too (see ruling)
	//m_UntapCardFilter.GetSubjectCardFilter().SetThisCardsControllerOnly(m_pCard);
	m_UntapCardFilter.GetSubjectCardFilter().AddComparer(pUntapCardComparer);
}

BOOL CCounterSpell2::ResolveImpl(const CAbilityAction* pAction)
{
	BOOL bResult = __super::ResolveImpl(pAction);

	const CTargetStackSpellAction* pAction1 = (const CTargetStackSpellAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	CSubjectGroupContainer subjectGroups;
	std::vector<BOOL> tricks;
	m_UntapCardFilter.GetSubjects(TRUE, subjectGroups, tricks, pAction->GetValue());

	vector<SelectionEntry> entries;

	for (int i = 0; i < subjectGroups.GetSize(); ++i)
	{
		const CSubjectGroup& subjectGroup(subjectGroups.GetAt(i));
	
		ATLASSERT(subjectGroup.GetCardSubjectCount() == 1);	// multiple subjectGroups in one selection is not supported, use the CSelection's min/max feature instead

		const CCard* pCard = subjectGroup.GetFirstCardSubject();

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("untaps %s"), pCard->GetCardName());
		entry.cpAssociatedCard = const_cast<CCard*>(pCard);

		if (pCard->GetController() != pCaster || !pCard->GetOrientation()->IsTapped())
			entry.bTrick = TRUE;

		entries.push_back(entry);
	}

	if (entries.size())
		m_pGame->GetSelection().AddSelectionRequest(
			m_cpSelectionListener.GetPointer(), entries, m_nMinUntap, m_nMaxUntap, GetCard(), pCaster);	

	return bResult;
}

void CCounterSpell2::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (pCard->GetZoneId() == ZoneId::Battlefield &&
				pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Untap();
		}
}

//____________________________________________________________________________
//
CDeflectionSpell::CDeflectionSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
							       CardComparer* pDeflectionComparer)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_bDeflectSpells(TRUE)
	, m_bDeflectAbilities(FALSE)
{
	AddAbilityTag(AbilityTag::DamageRedirection);

	m_DeflectionCardFilter.AddComparer(pDeflectionComparer);
}

BOOL CDeflectionSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	/*
		Can deflect if stack has at least one action which is:
		* from a spell or an ability and in the stack &
		* derived from CTargetActionCommon &
		* has only *one* target &
		* included in our card filter &
		* has a valid target to deflect & (new target cannot be the same as the old one; this is implemented inside CanDeflectTargetToXXX)
		* the valid target is not the spell itself (only applicable for counter spells and deflection spells)
	*/
	
	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction = stack.GetStackAction(i).GetPointer();

		if (pAction->IsSpell())
		{
			if (!m_bDeflectSpells)
				continue;
		}
		else
			// Assume everything else is from abilities
			if (!m_bDeflectAbilities)
				continue;

		if (pAction->GetController() == GetController())
			if (!bIncludeTricks)
				continue;	// Prevent deflecting one's own spells

		const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAction);
		if (pTargetAction &&
			(pTargetAction->GetTargetGroup().GetSubjectCount() == 1) &&
			m_DeflectionCardFilter.IsCardIncluded(pAction->GetAbility()->GetCard()))
		{
			const CSubjectGroup& currentTargetGroup = pTargetAction->GetTargetGroup();

			if (dynamic_cast<const CTargetStackSpellAction*>(pAction))
			{
				ATLASSERT(pTargetAction->GetTargetGroup().GetCardSubjectCount() == 1);

				// This spell currently has another spells as the target
				// Find valid spell targets (filter out itself as target)

				for (int j = 0; j < stack.GetStackSize(); ++j)
					if (i != j)
					{
						const CStackAbilityAction* pAction2 = stack.GetStackAction(j).GetPointer();
						if (pAction2->IsSpell() 
							&& (pAction2->GetAbility()->GetCard() != currentTargetGroup.GetFirstCardSubject())
							&& pTargetAction->CanDeflectTargetToSpell(pAction2->GetAbility()->GetCard()))
							return TRUE;
					}
			}
			else
			{
				// This spell currently has an in-play card or a player as the target
				// Find valid card or player targets

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					if ((!currentTargetGroup.GetPlayerSubjectCount() ||
						(currentTargetGroup.GetFirstPlayerSubject() != m_pGame->GetPlayer(j)))
						&& pTargetAction->CanDeflectTargetToPlayer(m_pGame->GetPlayer(j)))
						return TRUE;
				}

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					CPlayer* pPlayer = m_pGame->GetPlayer(j);

					// Currently only consider in-play and graveyard cards

					CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((!currentTargetGroup.GetCardSubjectCount() ||
							(currentTargetGroup.GetFirstCardSubject() != pInplay->GetAt(k)))
							&& pTargetAction->CanDeflectTargetToCard(pInplay->GetAt(k)))
							return TRUE;
					}

					CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
					for (int k = 0; k < pGraveyard->GetSize(); ++k)
					{
						if ((!currentTargetGroup.GetCardSubjectCount() ||
							(currentTargetGroup.GetFirstCardSubject() != pGraveyard->GetAt(k)))
							&& pTargetAction->CanDeflectTargetToCard(pGraveyard->GetAt(k)))
							return TRUE;
					}
				}

				// Currently only triggered target actions may response to this
				for (int j = 0; j < stack.GetStackSize(); ++j)
				{
					const CStackAbilityAction* pAction2 = stack.GetStackAction(j).GetPointer();
					if (pAction2->IsSpell() 
						&& (!currentTargetGroup.GetCardSubjectCount() || (pAction2->GetAbility()->GetCard() != currentTargetGroup.GetFirstCardSubject()))
						&& pTargetAction->CanDeflectTargetToSpell(pAction2->GetAbility()->GetCard()))
						return TRUE;
				}
			}
		}
	}

	return FALSE;
}

CActionContainer* CDeflectionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pBaseActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pBaseActionContainer)
		return NULL;

	CActionContainer* pNewActionContainer = new CActionContainer;
	ATLASSERT(pNewActionContainer);

	CPlayer* pController = GetController();
	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < pBaseActionContainer->GetSize(); ++l)
	{
		CTargetStackSpellAction* pBaseAction = (CTargetStackSpellAction*)pBaseActionContainer->GetAt(l).GetPointer();

		for (int i = 0; i < stack.GetStackSize(); ++i)
		{
			const CStackAbilityAction* pAction = stack.GetStackAction(i).GetPointer();

			if (pAction->IsSpell())
			{
				if (!m_bDeflectSpells)
					continue;
			}
			else
				// Assume everything else is from abilities
				if (!m_bDeflectAbilities)
					continue;

			BOOL bTrick = (pAction->GetController() == pController);
			if (!bIncludeTricks && bTrick)
				continue;

			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetAction &&
				(pTargetAction->GetTargetGroup().GetSubjectCount() == 1) &&
				m_DeflectionCardFilter.IsCardIncluded(pAction->GetAbility()->GetCard()))
			{
				const CSubjectGroup& currentTargetGroup = pTargetAction->GetTargetGroup();
				CCard* pTargetSourceCard = pAction->GetAbility()->GetCard();

				if (dynamic_cast<const CTargetStackSpellAction*>(pAction))
				{
					// Find valid spell targets (filter out itself as target)
					// Note that deflecting to a higher order spell target will essentially make this spell fizzle when resolved

					for (int j = 0; j < stack.GetStackSize(); ++j)
						if (i != j)	// Spells cannot target itself
						{
							const CStackAbilityAction* pAction2 = stack.GetStackAction(j).GetPointer();
							if (pAction2->IsSpell()
								&& (pAction2->GetAbility()->GetCard() != currentTargetGroup.GetFirstCardSubject())
								&& pTargetAction->CanDeflectTargetToSpell(pAction2->GetAbility()->GetCard()))
							{
								counted_ptr<CTargetStackSpellAction> cpNewAction = (CTargetStackSpellAction*)CreateAction().GetPointer();
								cpNewAction->Copy(pBaseAction);

								CSubjectGroup& targetGroup = cpNewAction->GetTargetGroup();
								targetGroup.SetSourceCard(m_pCard);
								targetGroup.AddSubject(
									pTargetSourceCard,
									ContextValue((int)pAction2->GetAbility()->GetCard(),	// Value1 - Deflect to this new spell
									0));										// Value2 - 0->Value1 is index in Stack (spell)

								if (bSetNames)
								{
									CString strActionText;
									strActionText.Format(_T(" and targets %s spell and changes its target to '%s'"),
										pTargetSourceCard->GetCardName(),
										pAction2->GetActionName());
									cpNewAction->AppendToActionName(strActionText);
								}

								if (bTrick)
									cpNewAction->SetTrick();	

								pNewActionContainer->Add(cpNewAction.GetPointer());
							}
						}
				}
				else
				{
					// Find valid card or player targets

					for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
					{
						CPlayer* pPlayer = m_pGame->GetPlayer(j);

						// Deflect to player

						if ((!currentTargetGroup.GetPlayerSubjectCount() ||
							(currentTargetGroup.GetFirstPlayerSubject() != pPlayer))
							&& pTargetAction->CanDeflectTargetToPlayer(pPlayer))
						{
							counted_ptr<CTargetStackSpellAction> cpNewAction = (CTargetStackSpellAction*)CreateAction().GetPointer();
							cpNewAction->Copy(pBaseAction);
							CSubjectGroup& targetGroup = cpNewAction->GetTargetGroup();
							targetGroup.SetSourceCard(m_pCard);
							targetGroup.AddSubject(
								pTargetSourceCard,
								ContextValue((int)pPlayer,			// Value1 - Deflect to this new player
								1));						// Value2 - 1->Value1 is player

							if (bSetNames)
							{
								CString strActionText;
								strActionText.Format(_T(" and targets %s spell and changes its target to '%s'"),
									pTargetSourceCard->GetCardName(),
									pPlayer->GetPlayerName());
								cpNewAction->AppendToActionName(strActionText);
							}

							if (bTrick)
								cpNewAction->SetTrick();	

							pNewActionContainer->Add(cpNewAction.GetPointer());
						}

						// Deflect to this player's cards

						// Currently only consider in-play and graveyard cards

						for (int l = 0; l < 2; ++l)
						{
							CZone* pZone = pPlayer->GetZoneById(l ? ZoneId::Graveyard : ZoneId::Battlefield);
							for (int k = 0; k < pZone->GetSize(); ++k)
							{
								CCard* pCard = pZone->GetAt(k);

								if ((!currentTargetGroup.GetCardSubjectCount() ||
									(currentTargetGroup.GetFirstCardSubject() != pCard))
									&& pTargetAction->CanDeflectTargetToCard(pCard))
								{
									counted_ptr<CTargetStackSpellAction> cpNewAction = (CTargetStackSpellAction*)CreateAction().GetPointer();
									cpNewAction->Copy(pBaseAction);

									CSubjectGroup& targetGroup = cpNewAction->GetTargetGroup();
									targetGroup.SetSourceCard(m_pCard);
									targetGroup.AddSubject(
										pTargetSourceCard,
										ContextValue((int)pCard,				// Value1 - Deflect to this new card
										2));						// Value2 - 2->Value1 is card

									if (bSetNames)
									{
										CString strActionText;

										if ((pCard->GetCardType() & CardType::Creature).Any())
											strActionText.Format(_T(" and targets %s spell and changes its target to '%s'"),
												pTargetSourceCard->GetCardName(),
												((CCreatureCard*)pCard)->GetCreatureName(TRUE));
										else
											strActionText.Format(_T(" and targets %s spell and changes its target to '%s'"),
												pTargetSourceCard->GetCardName(),
												pCard->GetCardName());
										cpNewAction->AppendToActionName(strActionText);
									}

									if (bTrick)
										cpNewAction->SetTrick();	

									pNewActionContainer->Add(cpNewAction.GetPointer());
								}
							}
						}
					}

					// Currently only triggered target actions may response to this
					for (int j = 0; j < stack.GetStackSize(); ++j)
					{
						const CStackAbilityAction* pAction2 = stack.GetStackAction(j).GetPointer();
						if (pAction2->IsSpell() 
							&& (!currentTargetGroup.GetCardSubjectCount() || (pAction2->GetAbility()->GetCard() != currentTargetGroup.GetFirstCardSubject()))
							&& pTargetAction->CanDeflectTargetToSpell(pAction2->GetAbility()->GetCard()))
						{
							counted_ptr<CTargetStackSpellAction> cpNewAction = (CTargetStackSpellAction*)CreateAction().GetPointer();
							cpNewAction->Copy(pBaseAction);

							CSubjectGroup& targetGroup = cpNewAction->GetTargetGroup();
							targetGroup.SetSourceCard(m_pCard);
							targetGroup.AddSubject(
								pTargetSourceCard,
								ContextValue((int)pAction2->GetAbility()->GetCard(),	// Value1 - Deflect to this new spell
								0));										// Value2 - 0->Value1 is index in Stack (spell)

							if (bSetNames)
							{
								CString strActionText;
								strActionText.Format(_T(" and targets %s spell and changes its target to '%s'"),
									pTargetSourceCard->GetCardName(),
									pAction2->GetActionName());
								cpNewAction->AppendToActionName(strActionText);
							}

							if (bTrick)
								cpNewAction->SetTrick();	

							pNewActionContainer->Add(cpNewAction.GetPointer());
						}
					}
				}
			}
		}
	}

	delete pBaseActionContainer;

	return pNewActionContainer;
}

BOOL CDeflectionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetStackSpellAction* pAction1 = (const CTargetStackSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	ATLASSERT(targetGroup.GetSubjectCount() == 1);
	ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

	const CCard* pTargetSourceCard = targetGroup.GetFirstCardSubject();

	// Is the targeted spell still on the stack?

	CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();

		if (pAction2->GetAbility()->GetCard() != pTargetSourceCard)
			continue;

		if (pAction2->IsSpell())
		{
			if (!m_bDeflectSpells)
				continue;
		}
		else
			// Assume everything else is from abilities
			if (!m_bDeflectAbilities)
				continue;
			
		const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAction2);
		if (pTargetAction
			&& (pTargetAction->GetTargetGroup().GetSubjectCount() == 1))	// Still has only one targetGroup?
		{
			// Targeted spell seems to be still a legal targetGroup

			// Change targeted spell's current targetGroup to a new targetGroup

			const ContextValue& value = targetGroup.GetValue(pTargetSourceCard);

			DWORD dwContext = value.nValue1;
			int nType = value.nValue2;

			switch(nType)
			{
			case 0:	// Deflect to a new targetGroup spell
				{
					CCard* pNewTargetSpellCard = (CCard*)dwContext;
		
					// Make sure the new targetGroup is still a valid deflection targetGroup in the stack

					for (int j = 0; j < stack.GetStackSize(); ++j)
						if (i != j)	// Cannot be targeting itself
						{
							const CStackAbilityAction* pAction3 = stack.GetStackAction(j).GetPointer();
							if (!pAction3->IsSpell() ||
								(pAction3->GetAbility()->GetCard() != pNewTargetSpellCard))
								continue;

							// Already targeting this spell?

							if (pTargetAction->GetTargetGroup().GetFirstCardSubject() == pNewTargetSpellCard)
								return TRUE;

							// Can still deflect to this new targetGroup?

							if (pTargetAction->CanDeflectTargetToSpell(pNewTargetSpellCard))
							{
								counted_ptr<CAction> cpNewAction(pAction2->Clone());
								CTargetActionCommon* pNewTargetAction = dynamic_cast<CTargetActionCommon*>(cpNewAction.GetPointer());
								ATLASSERT(pNewTargetAction);
								if (pNewTargetAction)
								{
									pNewTargetAction->DeflectTargetToSpell(pNewTargetSpellCard);
									stack.SetActionAt(i, (CStackAbilityAction*)cpNewAction.GetPointer());
									return TRUE;
								}
							}
						}

					break;
				}
			case 1:	// Deflect to a new targetGroup player
				{
					CPlayer* pNewTargetPlayer = (CPlayer*)dwContext;

					// Already targeting this player?

					if (pTargetAction->GetTargetGroup().GetPlayerSubjectCount() &&
						(pTargetAction->GetTargetGroup().GetFirstPlayerSubject() == pNewTargetPlayer))
						return TRUE;

					// Can still deflect to this new targetGroup?

					if (pTargetAction->CanDeflectTargetToPlayer(pNewTargetPlayer))
					{
						counted_ptr<CAction> cpNewAction(pAction2->Clone());
						CTargetActionCommon* pNewTargetAction = dynamic_cast<CTargetActionCommon*>(cpNewAction.GetPointer());
						ATLASSERT(pNewTargetAction);
						if (pNewTargetAction)
						{
							pNewTargetAction->DeflectTargetToPlayer(pNewTargetPlayer);
							stack.SetActionAt(i, (CStackAbilityAction*)cpNewAction.GetPointer());
							return TRUE;
						}
					}

					break;
				}
			case 2:	// Deflect to a new targetGroup card
				{
					CCard* pNewTargetCard = (CCard*)dwContext;

					// Already targeting this card?

					if (pTargetAction->GetTargetGroup().GetCardSubjectCount() &&
						(pTargetAction->GetTargetGroup().GetFirstCardSubject() == pNewTargetCard))
						return TRUE;

					// Can still deflect to this new targetGroup?

					if (pTargetAction->CanDeflectTargetToCard(pNewTargetCard))
					{
						counted_ptr<CAction> cpNewAction(pAction2->Clone());
						CTargetActionCommon* pNewTargetAction = dynamic_cast<CTargetActionCommon*>(cpNewAction.GetPointer());
						ATLASSERT(pNewTargetAction);
						if (pNewTargetAction)
						{
							pNewTargetAction->DeflectTargetToCard(pNewTargetCard);
							stack.SetActionAt(i, (CStackAbilityAction*)cpNewAction.GetPointer());
							return TRUE;
						}
					}

					break;
				}
			}
		}

		break;
	}

	LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);

	return FALSE;
}

counted_ptr<CAbilityAction> CDeflectionSpell::CreateAction() const
{
	counted_ptr<CTargetStackSpellAction> cpAction = ::CreateObject<CTargetStackSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CDeflectionSpell*>(this));
	cpAction->SetScore(ActionScore::Counterspell);

	return cpAction.GetPointer();
}

BOOL CDeflectionSpell::CanDeflectTargetToSpell(const CTargetStackSpellAction* pAction, const CCard* pSource) const
{
	const CSubjectGroup& currentTargetGroup = pAction->GetTargetGroup();

	ATLASSERT(currentTargetGroup.GetSubjectCount() == 1);

	if (!m_DeflectionCardFilter.IsCardIncluded(pSource))
		return FALSE;

	// New target must be a targeting spell with only one target and new target must be able to deflect its current target to whatever pAction currently has

	// Find associated action in stack for pSource

	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pSourceAction = stack.GetStackAction(i).GetPointer();
		if (!pSourceAction->IsSpell() || (pSourceAction->GetAbility()->GetCard() != pSource))
			continue;

		const CTargetActionCommon* pSourceTargetAction = dynamic_cast<const CTargetActionCommon*>(pSourceAction);
		if (!pSourceTargetAction || (pSourceTargetAction->GetTargetGroup().GetSubjectCount() != 1))
			return FALSE;

		const ContextValue& value = currentTargetGroup.GetValue(currentTargetGroup.GetFirstCardSubject());

		DWORD dwContext = value.nValue1;
		int nType = value.nValue2;

		switch(nType)
		{
		case 0:	
			{
				// This action has deflected the old target's only target to a new target spell
				// Make sure the new target can also has its target deflected to this target spell

				return pSourceTargetAction->CanDeflectTargetToSpell((CCard*)dwContext);
			}
		case 1:
			{
				// This action has deflected the old target's only target to a new target player
				// Make sure the new target can also has its target deflected to this target player

				return pSourceTargetAction->CanDeflectTargetToPlayer((CPlayer*)dwContext);
			}
		case 2:
			{
				// This action has deflected the old target's only target to a new target card
				// Make sure the new target can also has its target deflected to this target card

				return pSourceTargetAction->CanDeflectTargetToCard((CCard*)dwContext);
			}
		}

		ATLASSERT(false);
	}				

	ATLASSERT(false);

	return FALSE;
}

void CDeflectionSpell::DeflectTargetToSpell(CTargetStackSpellAction* pAction, CCard* pCard)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	ATLASSERT(targetGroup.GetSubjectCount() == 1 && targetGroup.GetCardSubjectCount() == 1);

	const CCard* pPreviousCard = targetGroup.GetFirstCardSubject();
	ContextValue previousValue = targetGroup.GetValue(pPreviousCard);

	targetGroup.RemoveAll();
	targetGroup.SetSourceCard(m_pCard);
	targetGroup.AddSubject(pCard);
	targetGroup.SetValue(pCard, previousValue);
}

//____________________________________________________________________________
//
CDrawCardSpellEx::CDrawCardSpellEx(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   int nDrawCount)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nDrawCount(nDrawCount)
	, m_ZoneModifier(pCard->GetGame(), ZoneId::Library, nDrawCount, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, 
		CZoneModifier::RoleType::None)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	// Draw card
	m_ZoneModifier.AddSelection(MinimumValue(nDrawCount), MaximumValue(nDrawCount), CZoneModifier::RoleType::PrimaryPlayer, CZoneModifier::RoleType::PrimaryPlayer);
}

CActionContainer* CDrawCardSpellEx::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = m_nDrawCount;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw a card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
		
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CDrawCardSpellEx::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	int nDrawCount = pAction1->GetValue().nValue1;

	m_ZoneModifier.SetCount(nDrawCount);
	m_ZoneModifier.ApplyTo(pCaster);

	return TRUE;
}

//____________________________________________________________________________
//
CDrawCardSpell::CDrawCardSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   int nDrawCount)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDrawCardSpell::OnSelectionDone))
	, m_nDrawCount(nDrawCount)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToOwner(TRUE)
	, m_DiscardToPlacement(CardPlacement::NotApplicable)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CDrawCardSpell::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
								ZoneId discardToZone, BOOL bDiscardToOwner, CardPlacement discardToPlacement)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToOwner = bDiscardToOwner;
	m_DiscardToPlacement = discardToPlacement;
	m_DiscardMoveType = discardMoveType;
}

CActionContainer* CDrawCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = m_nDrawCount + GetExtraDrawCount(pAction);
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nDrawCount));

		/* removed: draws should be good in any cases
		if (!nDrawCount ||
			(m_nDiscardCount &&
				((!m_bFromDrawsOnly && m_pCard->GetController()->GetZoneById(ZoneId::Hand)->GetSize() + 
					nDrawCount <= m_nDiscardCount) ||
					(m_bFromDrawsOnly && 
						nDrawCount <= m_nDiscardCount))
			))
			pAction->SetTrick();
		*/

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw a card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
		
			if (m_nDiscardCount)
			{
				if (m_nDiscardCount == 1)
					strActionName += _T(" and discard a card");
				else
					strActionName.AppendFormat(_T(" and discard %d cards"), m_nDiscardCount);
			}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

// 7/24/2002: Reviewed and revised, possible improvement in selecting cards to discard by computer
BOOL CDrawCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	CCountedCardContainer discardedCards;
	if (!CDrawCardCommon::ResolveDrawCards(const_cast<CPlayer*>(pCaster), const_cast<CPlayer*>(pCaster),
											pAction1->GetValue().nValue1,
											m_DiscardMoveType, m_nDiscardCount, m_bFromDrawsOnly,
											m_DiscardToZone, m_bDiscardToOwner,	m_DiscardToPlacement,
											FALSE, m_DiscardToPlacement == CardPlacement::TopOrBottom ? &discardedCards : NULL))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}
	
	m_DiscardedCards = discardedCards;

	if (m_DiscardToPlacement == CardPlacement::TopOrBottom)
	{
		vector<SelectionEntry> entries;

		SelectionEntry entry1;
		entry1.dwContext = CardPlacement::Top;
		entry1.strText.Format(_T("puts %s cards to top of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry1);

		SelectionEntry entry2;
		entry2.dwContext = CardPlacement::Bottom;
		entry2.strText.Format(_T("puts %s cards to bottom of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry2);
		
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, 
			GetCard(), const_cast<CPlayer*>(pCaster));
	}

	return TRUE;
}

void CDrawCardSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CardPlacement selectedPlacement;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			selectedPlacement = static_cast<CardPlacement::Enum>(it->dwContext);
			break;
		}

	if (selectedPlacement == CardPlacement::Top)
	{
		for (int i = 0; i < m_DiscardedCards.GetSize(); ++i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Top);
		}
	}
	else
	if (selectedPlacement == CardPlacement::Bottom)
	{
		for (int i = m_DiscardedCards.GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Bottom);
		}
	}
}

//____________________________________________________________________________
//
// Ref: Tolarian Winds: Discard your hand, then draw that many cards
CDrawCardSpell3::CDrawCardSpell3(CCard* pCard, AbilityType abilityType,
							     LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CDrawCardSpell3::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	const CPlayer* pCaster = pAction1->GetController();

	int nHandCount = pCaster->GetZoneById(ZoneId::Hand)->GetSize();

	// Discard hand
	if (!CDiscardCardCommon::ResolveDiscardAll(
		const_cast<CPlayer*>(pCaster), 
		const_cast<CPlayer*>(pCaster), MoveType::Discard))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	// Draw the same number of cards
	if (!CDrawCardCommon::ResolveDrawCards(
		const_cast<CPlayer*>(pCaster),
		const_cast<CPlayer*>(pCaster),
		nHandCount))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CPlayExtraLandSpell::CPlayExtraLandSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   int nAdditionalLandCount, BOOL bThisTurnOnly)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nAdditionalLandCount(nAdditionalLandCount)
	, m_bThisTurnOnly(bThisTurnOnly)
{
}

CActionContainer* CPlayExtraLandSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nAdditionalLandCount = m_nAdditionalLandCount;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nAdditionalLandCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nAdditionalLandCount));

		if (bSetNames)
		{
			CString strActionName;
			if (nAdditionalLandCount == 1)
				strActionName = _T(" and plays one additional land");
			else
				strActionName.Format(_T(" and plays up to %d additional lands"), nAdditionalLandCount);

			if (m_bThisTurnOnly)
				strActionName += _T(" this turn");

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CPlayExtraLandSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	const CPlayer* pCaster = pAction1->GetController();
	const CMainNode* pMainNode = (const CMainNode*)pCaster->GetGraph()->GetNodeById(NodeId::MainPhaseStep);
	const_cast<CMainNode*>(pMainNode)->SetMaxLandCount(pMainNode->GetMaxLandCount() + pAction1->GetValue().nValue1, m_bThisTurnOnly);

	return TRUE;
}

//____________________________________________________________________________
//
CExtraCombatSpell::CExtraCombatSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   BOOL bUntapAttackedThisTurn,
										       int nAdditionalAttackCount, BOOL bThisTurnOnly)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nAdditionalAttackCount(nAdditionalAttackCount)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_bUntapAttackedThisTurn(bUntapAttackedThisTurn)
{
}

CActionContainer* CExtraCombatSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nAdditionalAttackCount = m_nAdditionalAttackCount;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nAdditionalAttackCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nAdditionalAttackCount));

		if (bSetNames)
		{
			CString strActionName;
			if (nAdditionalAttackCount == 1)
				strActionName = _T(" and gets one additional combat phase");
			else
				strActionName.Format(_T(" and gets %d additional combat phases"), nAdditionalAttackCount);

			if (m_bThisTurnOnly)
				strActionName += _T(" this turn");

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CExtraCombatSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	const CPlayer* pCaster = GetGame()->GetActivePlayer();

	if (GetGame()->GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep)
		return FALSE;

	const CMainNode* pMainNode = (CMainNode*)pCaster->GetGraph()->GetNodeById(NodeId::MainPhaseStep);
	const_cast<CMainNode*>(pMainNode)->IncreaseMaxCombatCount(pAction1->GetValue().nValue1, m_bThisTurnOnly);

	if (m_bUntapAttackedThisTurn)
	{
		const CZone* pInplay = pCaster->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			const CCard* pCard = pInplay->GetAt(i);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				const CCreatureCard* pCreatureCard = static_cast<const CCreatureCard*>(pCard);
				if (pCreatureCard->AttackedThisTurn())
					const_cast<CCreatureCard*>(pCreatureCard)->GetOrientation()->Untap();
			}
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CChgLifeSpell::CChgLifeSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 Life nLifeDelta, PreventableType preventable)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, preventable)
	, m_nMultiplier(SpecialNumber::All) // Using SpecialNumber allows to multiple by 0
{
	AddAbilityTag(AbilityTag::LifeGain);

	ATLASSERT(nLifeDelta >= Life(0));	// Allowed but not supported since this is a 'self' effect
}

CActionContainer* CChgLifeSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		Life nLifeDelta;
		if (m_nMultiplier == SpecialNumber::All)
			nLifeDelta = m_LifeModifier.GetLifeDelta() + Life(m_Cost.GetExtraValue(pAction->GetCostConfigEntry()));	
		else
			nLifeDelta = m_LifeModifier.GetLifeDelta() + Life(m_nMultiplier*m_Cost.GetExtraValue(pAction->GetCostConfigEntry()));
		

		pAction->SetValue(ContextValue(GET_INTEGER(nLifeDelta)));

		if (bSetNames && (nLifeDelta != Life(0)))
		{
			CString strActionName;
			strActionName.Format(_T(" and gains %d life"), nLifeDelta);

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CChgLifeSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	CLifeModifier modifier(m_LifeModifier);
	modifier.SetLifeDelta(Life(pAction1->GetValue().nValue1));
	modifier.ApplyTo(const_cast<CPlayer*>(pCaster));

	return TRUE;
}

//____________________________________________________________________________
//
CChgLifeBySurveySpell::CChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
												LPCTSTR strManaCost, 
												BOOL bSurveyOpponentZones,
												BOOL bSurveyControllerZones)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nAttackedByMultiplier(0)
	, m_nCardsMultiplier(0)
	, m_ZoneId(ZoneId::Null)
	, m_pSurveyCardFilter(NULL)
{
	AddAbilityTag(AbilityTag::LifeGain);

	m_PlayerFilter.SetIncludes(bSurveyOpponentZones, bSurveyControllerZones);
}

void CChgLifeBySurveySpell::SetAttackedByMultiplier(int nMultiplier)
{
	m_nAttackedByMultiplier = nMultiplier;
}

void CChgLifeBySurveySpell::SetCardsMultiplier(int nMultiplier,
		const CCardFilter* pSurveyCardFilter,
		ZoneId zoneId)
{
	m_nCardsMultiplier = nMultiplier;
	m_pSurveyCardFilter = pSurveyCardFilter;
	m_ZoneId = zoneId;
}

CLifeModifier CChgLifeBySurveySpell::GetLifeDeltaResolutionModifier() const
{
	Life nLifeDelta(0);

	if (m_nAttackedByMultiplier)
	{
		int nCount = 0;
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			if (m_pGame->GetPlayer(i) != GetController())
			{
				CZone* pInplay = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
				for (int j = 0; j < pInplay->GetSize(); ++j)
					if ((pInplay->GetAt(j)->GetCardType() & CardType::Creature).Any())
					{
						CCreatureCard* pCreatureCard = static_cast<CCreatureCard*>(pInplay->GetAt(j));
						if (pCreatureCard->GetAttackedPlayer() == GetController())
							++nCount;
					}
			}

		nLifeDelta += Life(m_nAttackedByMultiplier * nCount);
	}

	if (m_nCardsMultiplier)
	{
		std::vector<CPlayer*> players;
		m_PlayerFilter.GetPlayers(GetController(), players);

		for (std::vector<CPlayer*>::const_iterator i = players.begin(); i != players.end(); ++i)
		{
			const CZone* pZone = (*i)->GetZoneById(m_ZoneId);

			if (!m_pSurveyCardFilter)
				nLifeDelta += Life(pZone->GetSize() * m_nCardsMultiplier);
			else
				nLifeDelta += Life(m_pSurveyCardFilter->CountIncluded(*pZone) * m_nCardsMultiplier);
		}
	}

	return CLifeModifier(nLifeDelta, m_pCard, PreventableType::NotPreventable);
}

BOOL CChgLifeBySurveySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	ATLASSERT(!pAction1->GetValue().nValue1);

	const CPlayer* pCaster = pAction1->GetController();

	GetLifeDeltaResolutionModifier().ApplyTo(const_cast<CPlayer*>(pCaster));

	return TRUE;
}

//____________________________________________________________________________
//
CSelfUntapAbility::CSelfUntapAbility(CCard* pCard, LPCTSTR strManaCost)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
{
	SetToActivatedAbility();
	SetAbilityText(_T("untaps"));
	AddAbilityTag(AbilityTag::OrientationChange);
}

BOOL CSelfUntapAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	COrientation* pOrientation = m_pCard->GetOrientation();
	if (!pOrientation->IsTapped())
		return FALSE;

	return TRUE;
}

CActionContainer* CSelfUntapAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		if (m_pCard->GetOrientation()->IsUntapped())
			if (!bIncludeTricks)
				pActionContainer->RemoveAt(i);
			else
				pAction->SetTrick(TRUE);
	}

	return pActionContainer;
}

BOOL CSelfUntapAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	m_pCard->GetOrientation()->Untap();

	return TRUE;
}

//____________________________________________________________________________
//
CSelfMoveCardAbility::CSelfMoveCardAbility(CCard* pCard, LPCTSTR strManaCost,
										   ZoneId toZoneId, BOOL bToOwner, MoveType moveType)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_ToZoneId(toZoneId)
	, m_bToOwner(bToOwner)
	, m_MoveType(moveType)
{
	SetToActivatedAbility();
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, toZoneId));
}

BOOL CSelfMoveCardAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	const CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
	if (nStackSize)
		if (stack.GetStackAction(nStackSize - 1)->GetAbility() == this)
			return FALSE;

	return TRUE;
}

CActionContainer* CSelfMoveCardAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	const CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
	if (!nStackSize)
		return pActionContainer;

	if (stack.GetStackAction(nStackSize - 1)->GetAbility() != this)
		return pActionContainer;

	if (!bIncludeTricks)
		return NULL;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
		pActionContainer->GetAt(i)->SetTrick(TRUE);

	return pActionContainer;
}

BOOL CSelfMoveCardAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	if (m_pCard->GetZoneId() != m_PlayableFrom)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	if (m_bToOwner)
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(m_ToZoneId), const_cast<CPlayer*>(pCaster), m_MoveType);
	else
		m_pCard->Move(const_cast<CZone*>(pCaster->GetZoneById(m_ToZoneId)), const_cast<CPlayer*>(pCaster), m_MoveType);

	return TRUE;
}

//____________________________________________________________________________
//
CDamagePreventionSpell::CDamagePreventionSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   Life nLifeDelta,
											   SourceColor sourceColor,
											   BOOL bPreventDamageToController)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nLifeDelta(nLifeDelta)
	, m_SourceColor(sourceColor)
	, m_bPreventDamageToController(bPreventDamageToController)
{
	ATLASSERT(m_bPreventDamageToController || (m_pCard->GetCardType() & CardType::Creature).Any());

	AddAbilityTag(AbilityTag::DamagePrevention);

	if (m_SourceColor == SourceColor::Null)
		m_SourceColor = SourceColor::_AllSources;
}

BOOL CDamagePreventionSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CPlayer* pController = GetController();

	// See if there is a valid prevention source

	// In-play

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		// Trick if preventing from player's own sources

		if (!bIncludeTricks && pPlayer == pController)
			continue;

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);

			// Check to see if this card has the source color

			if (!(pCard->GetSourceColor() & m_SourceColor).Any())
				continue;

			// See if this card is a (preventable) damage source

			if (bIncludeTricks)
				return TRUE;

			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
					return TRUE;
			}

			for (int j = 0; j < pCard->GetAbilityCount(); ++j)
				if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
					return TRUE;
		}
	}

	// Stack

	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
		{
			if (bIncludeTricks)
				return TRUE;

			CPlayer* pPlayer = pAction2->GetController();
			if (pPlayer == pController)
				continue;

			if ((pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
				return TRUE;
		}
	}

	return FALSE;
}

CActionContainer* CDamagePreventionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		const CDamagePreventionSpellAction* pAction = (const CDamagePreventionSpellAction*)pActionContainer->GetAt(l).GetPointer();

		if (bSetNames)
		{
			if (m_nLifeDelta == Life(PreventionType::PreventNextDamage))
				strActionName = _T(" and prevents next damage this turn");
			else
				if (m_nLifeDelta == Life(PreventionType::PreventAllDamage))
					strActionName = _T(" and prevents all damage this turn");
				else
					if (m_nLifeDelta == Life(PreventionType::ReverseNextDamage))
						strActionName = _T(" and prevents next damage and gains that much life this turn");
					else
						strActionName.Format(_T(" and prevents %d damage this turn"), m_nLifeDelta);
		}

		if (m_SourceColor == SourceColor::_AllSources)
		{
			BOOL bTrick = pAction->IsTrick();
			if (!bTrick)
			{
				bTrick = TRUE;
				for (int i = 0; i < m_pGame->GetPlayerCount() && bTrick; ++i)
				{
					CPlayer* pPlayer = m_pGame->GetPlayer(i);

					if (pPlayer == pController)
						continue;

					CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pZone->GetSize() && bTrick; ++k)
					{
						CCard* pCard = pZone->GetAt(k);

						// A damage source?

						if (pCard->GetCardType().IsCreature())
						{
							CCreatureCard* pCreature = (CCreatureCard*)pCard;
							if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
							{
								bTrick = FALSE;
								break;
							}
						}

						for (int j = 0; j < pCard->GetAbilityCount(); ++j)
							if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
							{
								bTrick = FALSE;
								break;
							}
					}
				}

				if (bTrick)
				{
					const CStack& stack = m_pGame->GetStack();
					for (int i = 0; i < stack.GetStackSize(); ++i)
					{
						const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();

						CPlayer* pPlayer = pAction2->GetController();

						// Trick if preventing from player's own sources

						if (pPlayer != pController)
						{
							// A damage source?

							if ((pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
							{
								bTrick = FALSE;
								break;
							}
						}
					}
				}
			}

			if (bTrick)
			{
				if (!bIncludeTricks)
					continue;			// Not copying pAction from pActionContainer to pActionContainer1
			}

			counted_ptr<CDamagePreventionSpellAction> cpAction1 = (CDamagePreventionSpellAction*)CreateAction().GetPointer();
			cpAction1->Copy(pAction);
			cpAction1->SetTrick(bTrick);

			if (!bTrick)
			{
				nBonusScore += (m_nLifeDelta < Life(0)) ? 5 : GET_INTEGER(m_nLifeDelta);
				cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
			}

			pActionContainer1->Add(cpAction1.GetPointer());
			
			if (bSetNames)
				cpAction1->AppendToActionName(strActionName);
		}
		else
		{
			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(i);
				CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pCard = pZone->GetAt(k);
					if ((pCard->GetSourceColor() & m_SourceColor).Any())
					{
						// Trick if preventing from player's own sources

						BOOL bTrick = pAction->IsTrick();
						if (!bTrick)
						{
							if (pPlayer == pController)
							{
								if (!bIncludeTricks)
									continue;			// Not copying pAction from pActionContainer to pActionContainer1

								bTrick = TRUE;	// Damage prevention
							}
							else
							{
								// A damage source?

								bool bDamageSource = false;
								if (pCard->GetCardType().IsCreature())
								{
									CCreatureCard* pCreature = (CCreatureCard*)pCard;
									bDamageSource = pCreature->IsAttacking() || pCreature->CanAttackInGeneral();
								}

								if (!bDamageSource)
									for (int j = 0; j < pCard->GetAbilityCount(); ++j)
										if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
										{
											bDamageSource = true;
											break;
										}

								if (!bDamageSource)
								{
									if (!bIncludeTricks)
										continue;

									bTrick = TRUE; // Damage prevention
								}
							}
						}

						counted_ptr<CDamagePreventionSpellAction> cpAction1 = (CDamagePreventionSpellAction*)CreateAction().GetPointer();
						cpAction1->Copy(pAction);
						cpAction1->SetSourceCard(pCard);
						cpAction1->SetTrick(bTrick);

						if (!bTrick)
						{
							nBonusScore += (m_nLifeDelta < Life(0)) ? 5 : GET_INTEGER(m_nLifeDelta);
							cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
						}

						pActionContainer1->Add(cpAction1.GetPointer());
						
						if (bSetNames)
						{
							cpAction1->AppendToActionName(strActionName);

							CString strActionName2;
							strActionName2.Format(_T(" from %s"), pCard->GetCardName());
							cpAction1->AppendToActionName(strActionName2);
						}
					}
				}
			}

			const CStack& stack = m_pGame->GetStack();
			for (int i = 0; i < stack.GetStackSize(); ++i)
			{
				const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
				if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
				{
					CCard* pCard = pAction2->GetStackAbility()->GetCard();
					CPlayer* pPlayer = pAction2->GetController();

					// Trick if preventing from player's own sources

					BOOL bTrick = pAction->IsTrick();
					if (!bTrick)
					{
						if (pPlayer == pController)
						{
							if (!bIncludeTricks)
								continue;			// Not copying pAction from pActionContainer to pActionContainer1

							bTrick = TRUE;		// Damage prevention
						}
						else
						{
							// A damage source?

							if (!(pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
							{
								if (!bIncludeTricks)
									continue;

								bTrick = TRUE; // Damage prevention
							}
						}
					}

					counted_ptr<CDamagePreventionSpellAction> cpAction1 = (CDamagePreventionSpellAction*)CreateAction().GetPointer();
					cpAction1->Copy(pAction);
					cpAction1->SetSourceCard(pCard);
					cpAction1->SetTrick(bTrick);

					if (!bTrick)
					{
						nBonusScore += (m_nLifeDelta < Life(0)) ? 5 : GET_INTEGER(m_nLifeDelta);
						cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
					}

					pActionContainer1->Add(cpAction1.GetPointer());
					
					if (bSetNames)
					{
						cpAction1->AppendToActionName(strActionName);

						CString strActionName2;
						strActionName2.Format(_T(" from %s"), pCard->GetCardName());
						cpAction1->AppendToActionName(strActionName2);
					}
				}
			}
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

BOOL CDamagePreventionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CDamagePreventionSpellAction* pAction1 = (const CDamagePreventionSpellAction*)pAction;

	if (m_bPreventDamageToController)
		const_cast<CPlayer*>(pAction1->GetController())->GetDamagePrevention().AddDamagePreventionEntry(
			CDamagePreventionEntry(m_nLifeDelta), const_cast<CCard*>(pAction1->GetSourceCard()));
	else
	{
		CCreatureCard* pCreatureCard = (CCreatureCard*)m_pCard;
		pCreatureCard->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(m_nLifeDelta), const_cast<CCard*>(pAction1->GetSourceCard()));
	}

	return TRUE;
}

counted_ptr<CAbilityAction> CDamagePreventionSpell::CreateAction() const
{
	counted_ptr<CDamagePreventionSpellAction> cpAction = ::CreateObject<CDamagePreventionSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CDamagePreventionSpell*>(this));

	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CTokenProductionSpell::CTokenProductionSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   LPCTSTR strTokenName,
										   UINT uID,
										   int nTokenCount)
										   : CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_strTokenName(strTokenName)
	, m_uID(uID)
	, m_nTokenCount(nTokenCount)
{
	AddAbilityTag(AbilityTag::TokenCreation);
}

void CTokenProductionSpell::FlagTokens(BOOL bFlag, BOOL bKeepFlagUntilEndOfTurn)
{
	m_CardFlagModifier.GetModifier().RemoveAll();

	if (bFlag)
	{
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(bKeepFlagUntilEndOfTurn);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(GetInstanceID());
	}
}

CActionContainer* CTokenProductionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
	{
		if (m_strTokenDisplayName.IsEmpty())
		{
			if (m_uID != TOKEN_ID_BY_NAME)
			{
				CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCardByID(m_uID);
				ATLASSERT(pCardEntry);
				if (pCardEntry)
					m_strTokenDisplayName = pCardEntry->GetCardName();
				else
					m_strTokenDisplayName = m_strTokenName; 
			}
			else
				m_strTokenDisplayName = m_strTokenName; 
		}
	}

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(l).GetPointer();

		int nActualTokenCount = m_nTokenCount + m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

		if (!nActualTokenCount)
		{
			if (!bIncludeTricks)
				continue;

			pAction->SetTrick();
		}

		pAction->SetValue(ContextValue(nActualTokenCount));

		if (bSetNames)
		{
			CString strActionName;

			if (nActualTokenCount != 1)
				strActionName.Format(_T(" and puts %d %s tokens onto the battlefield"), nActualTokenCount, m_strTokenDisplayName);
			else
				strActionName.Format(_T(" and puts 1 %s token onto the battlefield"), m_strTokenDisplayName);

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CTokenProductionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	int nTokenCount = pAction1->GetValue().nValue1;

	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));

		// Flag card
		if (!m_CardFlagModifier.GetModifier().IsNull())
			m_CardFlagModifier.ApplyTo(cpToken.GetPointer());
		
		if ((CTokenCreature*)cpToken.GetPointer() && !m_pGame->IsThinking()) { ((CTokenCreature*)cpToken.GetPointer())->SetUID(m_uID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); }
		pAction1->GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		cpToken->Move(pAction1->GetController()->GetZoneById(ZoneId::Battlefield), pAction1->GetController(), MoveType::Others);
	}

	return TRUE;
}

void CTokenProductionSpell::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	__super::OnResolutionCompleted(pAction, bResolutionResult);

	// Unflag all tokens flagged by this ability

	if (!m_CardFlagModifier.GetModifier().IsNull() &&
		!m_CardFlagModifier.GetModifier().GetOneTurnOnly())
	{
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier.GetModifier().GetAdditionData());
		CCardFilter cardFilter(pComparer);
		
		const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
		CZone* pBattlefield = pAction1->GetController()->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			if (cardFilter.IsCardIncluded(pBattlefield->GetAt(i)))
				m_CardFlagModifier.RemoveFrom(pBattlefield->GetAt(i));
	}
}

//____________________________________________________________________________
//
CRandomTokenProductionSpell::CRandomTokenProductionSpell(CCard* pCard, AbilityType abilityType,
												   	    LPCTSTR strManaCost,
														LPCTSTR strTokenName,
														UINT uID,
														int nTokenCount,
														Life nLifeDelta)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_strTokenName(strTokenName)
	, m_uID(uID)
	, m_nTokenCount(nTokenCount)
	, m_LifeModifier(nLifeDelta, pCard)
{
	AddAbilityTag(AbilityTag::TokenCreation);
}

CActionContainer* CRandomTokenProductionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(l).GetPointer();

		int nActualTokenCount = m_nTokenCount + m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

		if (!nActualTokenCount)
		{
			if (!bIncludeTricks)
				continue;

			pAction->SetTrick();
		}

		pAction->SetValue(ContextValue(nActualTokenCount));

		if (bSetNames)
		{
			CString strActionName;

			if (m_LifeModifier.GetLifeDelta() < Life(0))
			{
				if (nActualTokenCount != 1)
					strActionName.Format(_T(" and puts %d %s tokens onto the battlefield or takes %d damage"), nActualTokenCount, m_strTokenName, -m_LifeModifier.GetLifeDelta());
				else
					strActionName.Format(_T(" and puts 1 %s token onto the battlefield or takes %d damage"), m_strTokenName, -m_LifeModifier.GetLifeDelta());
			}
			else
				if (m_LifeModifier.GetLifeDelta() > Life(0))
				{
					if (nActualTokenCount != 1)
						strActionName.Format(_T(" and puts %d %s tokens onto the battlefield or gains %d life"), nActualTokenCount, m_strTokenName, m_LifeModifier.GetLifeDelta());
					else
						strActionName.Format(_T(" and puts 1 %s token onto the battlefield or gains %d life"), m_strTokenName, m_LifeModifier.GetLifeDelta());
				}
				else
				{
					if (nActualTokenCount != 1)
						strActionName.Format(_T(" and puts %d %s tokens onto the battlefield or not"), nActualTokenCount, m_strTokenName);
					else
						strActionName.Format(_T(" and puts 1 %s token onto the battlefield or not"), m_strTokenName);
				}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CRandomTokenProductionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	if (m_pGame->IsThinking())
	{
		// Approximation for the thinking process because we cannot call GetRand() during thinkings. That will mess up the synchronization in online cases.

		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));
		if ((CTokenCreature*)cpToken.GetPointer()) { ((CTokenCreature*)cpToken.GetPointer())->SetUID(m_uID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); }

		const_cast<CPlayer*>(pCaster)->AddInPlayBonus(
			cpToken->GetScore());	// Reviewed: 5/19/06
		
		return TRUE;
	}

	if (pCaster->GetRand() % 2)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pCaster->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		m_LifeModifier.ApplyTo(const_cast<CPlayer*>(pCaster));
	}
	else
	{
		CString strMessage;
		strMessage.Format(_T("%s won the flip"), pCaster->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		int nTokenCount = pAction1->GetValue().nValue1;

		
		int nMultiplier = 0;
		// for Doubling Season, etc.
		if (pCaster->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
				nTokenCount <<= nMultiplier;
		// for Primal Vigor
		if (pCaster->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
				nTokenCount <<= nMultiplier;
		
		for (int i = 0; i < nTokenCount; ++i)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));
			if ((CTokenCreature*)cpToken.GetPointer()) { ((CTokenCreature*)cpToken.GetPointer())->SetUID(m_uID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); }
			pCaster->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken->Move(pCaster->GetZoneById(ZoneId::Battlefield), pCaster, MoveType::Others);
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTokenProductionBySurveySpell::CTokenProductionBySurveySpell(CCard* pCard, AbilityType abilityType,
															 LPCTSTR strManaCost,
															 CardComparer* pSurveyComparer,
															 BOOL bUntappedOnly,
															 BOOL bOpponentsAlso,
															 LPCTSTR strTokenName,
															 UINT uID,
															 int nTokenMultipler)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_strTokenName(strTokenName)
	, m_uID(uID)
	, m_nTokenMultipler(nTokenMultipler)
	, m_bUntappedOnly(bUntappedOnly)
	, m_bOpponentsAlso(bOpponentsAlso)
{
	AddAbilityTag(AbilityTag::TokenCreation);
	m_SurveyCardFilter.AddComparer(pSurveyComparer);
}

CActionContainer* CTokenProductionBySurveySpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(l).GetPointer();
			CString strActionName;
			strActionName.Format(_T(" and puts %s tokens onto the battlefield"), m_strTokenName);
			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer;
}

BOOL CTokenProductionBySurveySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	int nCount = 0;
	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(j);

		if (!m_bOpponentsAlso && (pPlayer != pAction->GetController()))
			continue;

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int l = 0; l < pZone->GetSize(); ++l)
		{
			if (!m_SurveyCardFilter.IsCardIncluded(pZone->GetAt(l)) ||
				(m_bUntappedOnly && pZone->GetAt(l)->GetOrientation()->IsTapped()))
				continue;

			++nCount;
		}
	}

	int nTokenCount = nCount * m_nTokenMultipler;
	CTokenCreationModifier modifier = CTokenCreationModifier(GetGame(), m_strTokenName, m_uID, nTokenCount);
	modifier.ApplyTo(pAction->GetController());

	return TRUE;
}

//____________________________________________________________________________
//
CDiscardCardSpell::CDiscardCardSpell(CCard* pCard, AbilityType abilityType,
								     LPCTSTR strManaCost,
								     int nDiscardCount,
									 MoveType discardMoveType,
									 const CCardFilter* pDiscardCardFilter,
								     ZoneId toZone,
									 BOOL bToOwner)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nDiscardCount(nDiscardCount)
	, m_SearchFromZoneId(ZoneId::Null)
	, m_nSearchCount(0)
	, m_bRevealSearchCards(FALSE)
	, m_ToZone(toZone)
	, m_bToOwner(bToOwner)
	, m_DiscardMoveType(discardMoveType)
	, m_pDiscardCardFilter(pDiscardCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, toZone));
}

void CDiscardCardSpell::SetSearchCards(const CCardFilter* pSearchCardFilter,
									   ZoneId fromZone, int nSearchCount,
									   BOOL bRevealSearchCards)
{
	m_pSearchCardFilter = pSearchCardFilter;
	m_SearchFromZoneId = fromZone;
	m_nSearchCount = nSearchCount;
	m_bRevealSearchCards = bRevealSearchCards;
}

CActionContainer* CDiscardCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDiscardCount = m_nDiscardCount + m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

		pAction->SetValue(ContextValue(nDiscardCount));

		if (bSetNames)
		{
			CString strActionName;

			if (m_ToZone == ZoneId::Graveyard)
			{
				if (nDiscardCount == 1)
					strActionName = _T(" and discards one card");
				else
					strActionName.Format(_T(" and discards %d cards"), nDiscardCount);
			}
			else
			{
				if (nDiscardCount == 1)
					strActionName = _T(" and moves one card");
				else
					strActionName.Format(_T(" and moves %d cards"), nDiscardCount);
			}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CDiscardCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();
	int nDiscardCount = pAction1->GetValue().nValue1;

	CCountedCardContainer discardedCards;

	if (!CDiscardCardCommon::ResolveDiscardCards(
			const_cast<CPlayer*>(pCaster),	// Discarder
			const_cast<CPlayer*>(pCaster),	// Picker
			const_cast<CPlayer*>(pCaster),	// Caster
			nDiscardCount,
			m_DiscardMoveType,
			ZoneId::Hand,
			FALSE,
			m_pDiscardCardFilter,
			m_ToZone, m_bToOwner, CardPlacement::Top, TRUE, FALSE, 
			&discardedCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	if (m_pSearchCardFilter)
	{
		int nSearchCount = (m_nSearchCount == SpecialNumber::Any ? discardedCards.GetSize() : m_nSearchCount);

		if (nSearchCount)
			if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
															MinimumValue(nSearchCount),
															MaximumValue(nSearchCount),
															const_cast<CPlayer*>(pCaster),
															m_SearchFromZoneId,
															m_pSearchCardFilter,
															ZoneId::Hand,
															FALSE,
															CardPlacement::Top,
															FALSE,
															m_bRevealSearchCards))
			{
				// Recall
				//LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
				//return FALSE;
			}
	}

	OnDiscardCards(pAction1, &discardedCards);

	return TRUE;
}

//____________________________________________________________________________
//
// Ref: Flash: Put a creature card from your hand into play. You may pay its mana cost reduced by up to 2. If you don't, sacrifice it.
CDiscardCardSpell2::CDiscardCardSpell2(CCard* pCard, AbilityType abilityType,
								       LPCTSTR strManaCost,
									   MoveType discardMoveType,
									   const CCardFilter* pDiscardCardFilter,
									   int nLessColorlessCost,
									   bool bExtraCost)
	: CDiscardCardSpell(pCard, abilityType, strManaCost, 1, discardMoveType, pDiscardCardFilter, ZoneId::Battlefield, FALSE)
	, m_nLessColorlessCost(nLessColorlessCost)
	, m_bExtraCost(bExtraCost)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	ATLASSERT(m_nLessColorlessCost > 0);
}

void CDiscardCardSpell2::OnDiscardCards(const CManaConsumptionAbilityAction* pAction1, CCountedCardContainer* pDiscardedCards)
{
	ATLASSERT(pDiscardedCards->GetSize() <= 1);

	if (!pDiscardedCards->GetSize())
		return;

	CCard* pDiscardedCard = pDiscardedCards->GetAt(0);
	std::auto_ptr<CManaCost> spNewManaCost(new CManaCost(pDiscardedCard->GetSpells().GetAt(0)->GetCost().GetManaCost())); // only consider the first spell
	DWORD dwRemovedValue = spNewManaCost->RemoveGenericCost(m_nLessColorlessCost);

	CPlayer* pCaster = pAction1->GetController();
	CPlayer* pTriggeredPlayer = pCaster;

	CSpell* pSpell = CCreateTempTriggeredAbilityAbility::Create(GetCard(), pDiscardedCard, pTriggeredPlayer, spNewManaCost->ToString(),
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this, &CDiscardCardSpell2::PreRemoveAbilityCallback));

	if (m_bExtraCost && dwRemovedValue)
		pSpell->GetCost().SetExtraManaCost(dwRemovedValue, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
}

void CDiscardCardSpell2::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pPlayer);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
// Ref: Tariff: Each player chooses a creature with the highest converted mana cost he or she controls, then plays mana equal to that cost or sacrifices that creature.
CRepayManaCostSpell::CRepayManaCostSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pRepayComparer)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CRepayManaCostSpell::OnSelectionDone))
	, m_RepayCardFilter(pRepayComparer)
{
}

BOOL CRepayManaCostSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	PromptForSelection(const_cast<CPlayer*>(pCaster), const_cast<CPlayer*>(pCaster));

	return TRUE;
}

void CRepayManaCostSpell::RepayManaCost(CCard* pCard, CPlayer* pCaster)
{
	CPlayer* pTriggeredPlayer = pCard->GetController();

	CCreateTempTriggeredAbilityAbility::Create(GetCard(), pCard, pTriggeredPlayer, pCard->GetSpells().GetAt(0)->GetCost().GetManaCost().ToString(),
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this, &CRepayManaCostSpell::PreRemoveAbilityCallback));
}

void CRepayManaCostSpell::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pPlayer);
	modifier.ApplyTo(pCard);
}

void CRepayManaCostSpell::PromptForSelection(CPlayer* pPlayer, CPlayer* pCaster)
{
	vector<SelectionEntry> entries;

	CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

	CCountedCardContainer cards;
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);

		if ((pCard->GetCardType() & CardType::Token).Any())
			continue;

		if (m_RepayCardFilter.IsCardIncluded(pCard))
		{
			ATLASSERT(pCard->GetSpells().GetSize());
			cards.AddCard(pCard, CardPlacement::Top);
		}
	}

	if (!cards.GetSize())
	{
		CPlayer* pNextPlayer = m_pGame->GetNextPlayer(pPlayer);

		if (pNextPlayer != pCaster)
			PromptForSelection(pNextPlayer, pCaster);

		return;
	}

	int nMaxCost = cards.GetAt(0)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
	CCountedCardContainer maxCards;
	maxCards.AddCard(cards.GetAt(0), CardPlacement::Top);
	for (int i = 1; i < cards.GetSize(); ++i)
	{
		int nCost = cards.GetAt(i)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
		if (nCost > nMaxCost)
		{
			maxCards.RemoveAll();
			nMaxCost = nCost;
			maxCards.AddCard(cards.GetAt(i), CardPlacement::Top);
		}
		else
			if (nCost == nMaxCost)
			{
				maxCards.AddCard(cards.GetAt(i), CardPlacement::Top);
			}
	}

	/*  Cannot use this shortcut because it will confuse the SetTriggeredResolutionPlayer() code
	if (maxCards.GetSize() == 1)
	{
		RepayManaCost(maxCards.GetAt(0), pCaster);

		CPlayer* pNextPlayer = m_pGame->GetNextPlayer(pPlayer);

		if (pNextPlayer != pCaster)
			PromptForSelection(pNextPlayer, pCaster);

		return;
	}
	*/

	for (int i = 0; i < maxCards.GetSize(); ++i)
	{
		CCard* pCard = maxCards.GetAt(i);

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		if ((pCard->GetCardType() & CardType::Creature).Any())
			entry.strText.Format(_T("Selects %s"),  ((CCreatureCard*)pCard)->GetCreatureName(TRUE));
		else
			entry.strText.Format(_T("Selects %s"), pCard->GetCardName());

		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)pCaster);
}

void CRepayManaCostSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CPlayer* pCaster = (CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			RepayManaCost(pCard, pCaster);
		}

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(pSelectionPlayer);

	if (pNextPlayer != pCaster)
		PromptForSelection(pNextPlayer, pCaster);
}

//____________________________________________________________________________
//
CAuctionSpell::CAuctionSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CAuctionSpell::OnSelectionDone))
	, m_bTapped(FALSE)
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
}

BOOL CAuctionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	ATLASSERT(!m_ToSelect.GetSize());
	m_ToSelect.RemoveAll();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CZone* pInplay = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard = pInplay->GetAt(j);
			if (!(pCard->GetCardType() & CardType::Token).Any())
			{
				m_ToSelect.AddCard(pCard, CardPlacement::Top);
			}
		}
	}

	if (!m_ToSelect.GetSize())
		return TRUE;

	// Sort the cards in descending order

	m_ToSelect.Sort(FALSE);

	// First move all local enchantments to 'Removed from game'

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	for (int i = 0; i < m_ToSelect.GetSize(); ++i)
	{
		CCard* pCard = m_ToSelect.GetAt(i);
		if ((pCard->GetCardType() & CardType::_Aura).Any())
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), pCaster, MoveType::Others);
	}

	// Move all other card types

	for (int i = 0; i < m_ToSelect.GetSize(); ++i)
	{
		CCard* pCard = m_ToSelect.GetAt(i);
		if (!(pCard->GetCardType() & CardType::_Aura).Any())
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), pCaster, MoveType::Others);
	}

	ContinueSelection(pCaster);

	return TRUE;
}

bool CAuctionSpell::IsSelectionPossibleForCard(const CPlayer* pPlayer, const CCard* pCard)
{
	if (!(pCard->GetCardType() & CardType::_Aura).Any())
		return true;

	CEnchant* pEnchantAbility = NULL;
	for (int j = 0; j < pCard->GetAbilityCount(); ++j)
	{
		pEnchantAbility = dynamic_cast<CEnchant*>(pCard->GetAbility(j));
		if (pEnchantAbility)
			break;
	}

	if (!pEnchantAbility)
	{
		ATLASSERT(false);
		return false;
	}

	CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int j = 0; j < pInplay->GetSize(); ++j)
	{
		CCard* pCard2 = pInplay->GetAt(j);
		BOOL bTrick;
		if (pEnchantAbility->GetTargeting()->TargetAllowed(pCard2, TRUE, bTrick))
			return true;
	}

	return false;
}

bool CAuctionSpell::IsSelectionPossible(const CPlayer* pPlayer)
{
	for (int i = 0; i < m_ToSelect.GetSize(); ++i)
		if (IsSelectionPossibleForCard(pPlayer, m_ToSelect.GetAt(i)))
			return true;

	return false;
}

void CAuctionSpell::ContinueSelection(CPlayer* pPlayer)
{
	// Check to see if any selection can be done

	if (!IsSelectionPossible(pPlayer))
	{
		// If this player cannot make a selection, check with another player

		CPlayer* pNextPlayer = NULL;
		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
		{
			CPlayer* pPlayer2 = m_pGame->GetPlayer(j);
			if (pPlayer2 == pPlayer)
				break;

			if (IsSelectionPossible(pPlayer2))
			{
				pNextPlayer = pPlayer2;
				break;
			}
		}

		if (!pNextPlayer)
		{
			if (!m_pGame->IsThinking())
				m_pGame->Message(
					_T("No more selection can be done by any players."), 
					pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

			return; // done
		}

		if (!m_pGame->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("%s cannot make any more selection."), pPlayer->GetPlayerName());

			m_pGame->Message(
				strMessage, 
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		pPlayer = pNextPlayer;
	}

	if (m_pGame->IsThinking() || pPlayer->IsComputer())
	{
		CCard* pCard = m_ToSelect.GetAt(0);

		if (!m_pGame->IsThinking())
		{
			CString strMessage;
			if ((pCard->GetCardType() & CardType::Creature).Any())
				strMessage.Format(_T("%s selects %s"), pPlayer->GetPlayerName(), ((CCreatureCard*)pCard)->GetCreatureName(TRUE));
			else
				strMessage.Format(_T("%s selects %s"), pPlayer->GetPlayerName(), pCard->GetCardName());

			m_pGame->Message(
				strMessage, 
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		SelectCard(pCard, NULL, pPlayer);
		return;
	}

	vector<SelectionEntry> entries;
	
	for (int i = 0; i < m_ToSelect.GetSize(); ++i)
	{
		CCard* pCard = m_ToSelect.GetAt(i);

		if (!IsSelectionPossibleForCard(pPlayer, pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		if ((pCard->GetCardType() & CardType::Creature).Any())
			entry.strText.Format(_T("selects %s"), ((CCreatureCard*)pCard)->GetCreatureName(TRUE));
		else
			entry.strText.Format(_T("selects %s"), pCard->GetCardName());

		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, NULL);
}

bool CAuctionSpell::SelectEnchantTarget(CPlayer* pPlayer, CCard* pEnchantCard)
{
	CEnchant* pEnchantAbility = NULL;
	for (int i = 0; i < pEnchantCard->GetAbilityCount(); ++i)
	{
		pEnchantAbility = dynamic_cast<CEnchant*>(pEnchantCard->GetAbility(i));
		if (pEnchantAbility)
			break;
	}

	if (!pEnchantAbility)
	{
		ATLASSERT(false);
		return false;
	}

	vector<SelectionEntry> entries;

	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CZone* pInplay = m_pGame->GetPlayer(j)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			BOOL bTrick;
			if (pEnchantAbility->GetTargeting()->TargetAllowed(pCard, TRUE, bTrick))
			{
				SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
				if ((pCard->GetCardType() & CardType::Creature).Any())
					entry.strText.Format(_T("enchants %s with %s"),  ((CCreatureCard*)pCard)->GetCreatureName(TRUE), pEnchantCard->GetCardName());
				else
					entry.strText.Format(_T("enchants %s with %s"), pCard->GetCardName(), pEnchantCard->GetCardName());

				entry.cpAssociatedCard = pCard;
				entries.push_back(entry);
			}
		}
	}

	if (!entries.size())
		return false;

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)pEnchantCard);

	return true;
}

void CAuctionSpell::SelectCard(CCard* pCard, CCard* pEnchantCard, CPlayer* pPlayer)
{
	if (!pEnchantCard)
	{
		if (!(pCard->GetCardType() & CardType::_Aura).Any())
		{
			m_ToSelect.RemoveCard(pCard);

			pCard->Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);
			if (m_bTapped)
				pCard->GetOrientation()->Tap();
		}
		else
		{
			if (SelectEnchantTarget(pPlayer, pCard))
			{
				m_ToSelect.RemoveCard(pCard);
				return; // Wait for the selection result
			}

			ATLASSERT(false); // this shouldn't happen now with the selection pre-check
			// Cannot find a legal enchant target, let the next player to select other cards
		}
	}
	else
	{
		pEnchantCard->Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);
		for (int i = 0; i < pEnchantCard->GetAbilityCount(); ++i)
		{
			CEnchant* pEnchantAbility = dynamic_cast<CEnchant*>(pEnchantCard->GetAbility(i));
			if (pEnchantAbility)
			{
				if (!pEnchantAbility->Enchant(pCard, pPlayer, pEnchantAbility->GetActionValue()))
					pEnchantCard->Move(pEnchantCard->GetOwner()->GetZoneById(ZoneId::Exile), pPlayer, MoveType::Others);
			}
		}
	}

	if (m_ToSelect.GetSize())
	{
		CPlayer* pNextPlayer = m_pGame->GetNextPlayer(pPlayer);
		ContinueSelection(pNextPlayer);
	}
}

void CAuctionSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CCard* pEnchantCard = (CCard*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			SelectCard(pCard, pEnchantCard, pSelectionPlayer);
			return;
		}
}

//____________________________________________________________________________
//
CManaFilterSpell::CManaFilterSpell(CCard* pCard, AbilityType abilityType,
									   LPCTSTR strManaCost, LPCTSTR strManaPool)
	: CSpell(pCard, abilityType | AbilityType::_FilterMana, strManaCost, FALSE)
	, m_ManaPool(strManaPool)
{
	AddAbilityTag(AbilityTag::Mana);

	ATLASSERT(_tcslen(strManaCost));
}

CActionContainer* CManaFilterSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CManaFilterSpellAction* pAction = (CManaFilterSpellAction*)pActionContainer->GetAt(i).GetPointer();	
		pAction->SetManaPool(m_ManaPool);

		if (bSetNames)
			pAction->AppendToActionName(_T(" and adds {") + m_ManaPool.ToString() + _T("} to the mana pool"));
	}

	return pActionContainer;
}

BOOL CManaFilterSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaFilterSpellAction* pAction1 = (const CManaFilterSpellAction*)pAction;
	pAction1->GetController()->GetManaPool().AddMana2(pAction1->GetManaPool());

	return TRUE;
}

counted_ptr<CAbilityAction> CManaFilterSpell::CreateAction() const
{
	counted_ptr<CManaFilterSpellAction> cpAction = ::CreateObject<CManaFilterSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CManaFilterSpell*>(this));
	cpAction->SetScore(ActionScore::FilterMana);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CDrawCardSpell5::CDrawCardSpell5(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CDrawCardSpell5::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	Life nPaidLifeDeltaCost = pAction1->GetCostConfigEntry().GetPlayerLifeCost();

	CPlayer* pCaster = pAction1->GetController();

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nPaidLifeDeltaCost)));

	if (!SpecialNumber::IsSpecialNumber(GET_INTEGER(nPaidLifeDeltaCost)) && (nPaidLifeDeltaCost < Life(0)) &&
		!CDrawCardCommon::ResolveDrawCards(pCaster, pCaster, GET_INTEGER(-nPaidLifeDeltaCost)))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CDrawCardSpell6::CDrawCardSpell6(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 const CCardFilter* pSacrificeCardFilter)
								 : CDrawCardSpell(pCard, abilityType, strManaCost, 0)
{
	m_Cost.AddSacrificeCardCost(1,	pSacrificeCardFilter);
}

int CDrawCardSpell6::GetExtraDrawCount(const CManaConsumptionAbilityAction* pAction)
{
	const CCostConfigEntry& costEntry = pAction->GetCostConfigEntry();
	const CCountedCardContainer* pSacrificedCards = costEntry.GetSacrificeCards();

	ATLASSERT(pSacrificedCards&&pSacrificedCards->GetSize() == 1);

	if (pSacrificedCards==NULL || pSacrificedCards->GetSize() == 0)
		return 0;

	CCard* pCard = pSacrificedCards->GetAt(0);

	ATLASSERT(pCard->GetCardType().IsCreature());

	if (!pCard->GetCardType().IsCreature())
		return 0;

	return GET_INTEGER(((CCreatureCard*)pCard)->GetPower());
}

//____________________________________________________________________________
//
CDrawCardSpell2::CDrawCardSpell2(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
								 ZoneId uSurveyZoneId, BOOL bSurveyCastersZone, 
								 BOOL bSurveyOpponentsZone)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_uSurveyZoneId(uSurveyZoneId)
	, m_bSurveyCastersZone(bSurveyCastersZone)
	, m_bSurveyOpponentsZone(bSurveyOpponentsZone)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CDrawCardSpell2::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	int nDrawCount = 0;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		if (pPlayer == pCaster && !m_bSurveyCastersZone)
			continue;

		if (pPlayer != pCaster && !m_bSurveyOpponentsZone)
			continue;

		CZone* pSurveyZone = pPlayer->GetZoneById(m_uSurveyZoneId);

		for (int j = 0; j < pSurveyZone->GetSize(); ++j)
			if (m_SurveyCardFilter.IsCardIncluded(pSurveyZone->GetAt(j)))
				++nDrawCount;
	}

	if (nDrawCount &&
		!CDrawCardCommon::ResolveDrawCards(pCaster, pCaster, nDrawCount))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
#if 1	// Re-implemented with resolution time sacrifices instead of as a cost
CDrawCardSpell4::CDrawCardSpell4(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
								 int nSacrificeCount,
								 const CCardFilter* pSacrificeCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nSacrificeCount(nSacrificeCount)
	, m_pSacrificeCardFilter(pSacrificeCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDrawCardSpell4::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CDrawCardSpell4::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	CZone* pZone = pAction1->GetController()->GetZoneById(ZoneId::Battlefield);

	vector<SelectionEntry> entries;

	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (m_pSacrificeCardFilter->IsCardIncluded(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;

			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

				entry.strText.Format(_T("sacrifices %s"),
					pCreatureCard->GetCreatureName(TRUE));
			}
			else
				entry.strText.Format(_T("sacrifices %s"),
					pCard->GetCardName());
		
			entries.push_back(entry);
		}
	}

	if (entries.size())
	{
		//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 0, m_nSacrificeCount,
			GetCard(),
			const_cast<CPlayer*>(pAction1->GetController()),
			(DWORD)pAction1->GetController());	// Context 1
	}

	return TRUE;
}

void CDrawCardSpell4::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CPlayer* pCaster = (CPlayer*)dwContext1;
	ATLASSERT(pCaster);
	CZone* pZone = pCaster->GetZoneById(ZoneId::Graveyard);

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pZone, pSelectionPlayer, MoveType::Sacrifice);
		}

	if (!CDrawCardCommon::ResolveDrawCards(pCaster, pCaster, nSelectedCount))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

#else
/*
CDrawCardSpell4::CDrawCardSpell4(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
								 int nSacrificeCount,
								 DWORD dwSacrificeCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
{
	AddSacrificeCardCost(nSacrificeCount, dwSacrificeCardFilter);
}

BOOL CDrawCardSpell4::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	int nSacrificeCount = pAction1->GetCostConfigEntry()->GetSacrificeCards()->GetSize();	// HACK: This shouldn't be a cost but a selection during the resolution
	//when reverting, remember GetSacrificeCards() can now return NULL!
	CPlayer* pCaster = pAction1->GetController();

	if (!CDrawCardCommon::ResolveDrawCards(pCaster, nSacrificeCount, 0, FALSE,
											 0, FALSE, m_pGame->IsThinking(), pCaster))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}
*/
#endif

//____________________________________________________________________________
//
CIsAlsoAAbility::CIsAlsoAAbility(CCard* pCard, LPCTSTR strManaCost, LPCTSTR strToken, UINT uID, CCard* pACard, NodeId UntilNode)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_pACard(pACard ? pACard : pCard)
	, m_strToken(strToken)
	, m_uID(uID)
	, m_UntilNode(UntilNode)
{
	SetToActivatedAbility();
	SetAbilityName(_T("Animate"));

	if (pACard)
		SetAbilityText(_T("Animate card. Activates"));
	else
		SetAbilityText(_T("Animates"));

	AddAbilityTag(AbilityTag::CardChange);
}

BOOL CIsAlsoAAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (m_pGame->IsThinking())
	{
		if (m_pGame->GetCurrentNode()->GetNodeId() != NodeId::DeclareAttackersStep1 && m_pGame->GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep) return FALSE;
		if (m_pCard->GetOrientation()->IsTapped()) return FALSE;
	}

	CCard* pIsAlsoA1 = m_pCard->GetIsAlsoA();

	if (pIsAlsoA1 && pIsAlsoA1->GetImageID() == m_uID && GetController()->IsComputer())
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	CCard* pIsAlsoA = m_pACard->GetIsAlsoA();
	
	if (pIsAlsoA && pIsAlsoA->GetPrintedCardName() == m_strToken)
		return FALSE;

	const CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
	if (!nStackSize)
		return TRUE;

	const CStackAbilityAction* pStackAction = stack.GetStackAction(nStackSize - 1).GetPointer();
	return pStackAction->GetAbility() != this;
}

CActionContainer* CIsAlsoAAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	BOOL bTrick = FALSE;

	CCard* pIsAlsoA = m_pACard->GetIsAlsoA();
	if (pIsAlsoA && pIsAlsoA->GetPrintedCardName() == m_strToken)
		bTrick = TRUE;
	else
	{
		const CStack& stack = m_pGame->GetStack();
		int nStackSize = stack.GetStackSize();
		if (nStackSize)
		{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(nStackSize - 1).GetPointer();
			if (pStackAction->GetAbility() == this)
				bTrick = TRUE;
		}
	}

	if (bTrick)
		for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
			if (bIncludeTricks)
				pActionContainer->GetAt(i)->SetTrick();
			else
				pActionContainer->RemoveAt(i);

	return pActionContainer;
}

BOOL CIsAlsoAAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	std::auto_ptr<CCardModifier> apModifier(new CCardIsAlsoAModifier(m_strToken, m_uID, ((CAbilityAction*)pAction)->GetController()));
	apModifier->ApplyTo(m_pACard);

	if (m_UntilNode != NodeId::Null) m_pGame->GetScheduler()->ScheduleTask(new CCardModifierTask(m_pACard, apModifier, 
		true, // in-play only
		false), // use RemoveFrom
		m_UntilNode);
	return TRUE;
}
//____________________________________________________________________________
//
/*
CSneakAttackSpell::CSneakAttackSpell(CCard* pCard, AbilityType abilityType,
								       LPCTSTR strManaCost,
									   MoveType discardMoveType,
									   const CCardFilter* pDiscardCardFilter)
	: CDiscardCardSpell(pCard, abilityType, strManaCost, 1, discardMoveType, pDiscardCardFilter, ZoneId::Battlefield, FALSE)	
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));	
}

void CSneakAttackSpell::OnDiscardCards(const CManaConsumptionAbilityAction* pAction1, CCountedCardContainer* pDiscardedCards)
{
	ATLASSERT(pDiscardedCards->GetSize() <= 1);

	if (!pDiscardedCards->GetSize())
		return;

	CCard* pDiscardedCard = pDiscardedCards->GetAt(0);

	CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
	pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pmodifierUp->GetModifier().SetOneTurnOnly(TRUE);
	
	pmodifierUp->ApplyTo((CCreatureCard*) pDiscardedCard);

	CCountedCardContainer pSubjects;
	if (pDiscardedCard->IsInplay())
		pSubjects.AddCard(pDiscardedCard, CardPlacement::Top);

	CContainerEffectModifier pSacrificeModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pSacrificeModifier.ApplyTo(GetController());
}
*/
//____________________________________________________________________________
//
CSpellstutterSpriteSpell::CSpellstutterSpriteSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 CardComparer* pComparer)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_bTargetOnlySpellsWithEqualCost(FALSE)
	, m_bToOwnersZone(TRUE)
	, m_ToAlternateZone(ZoneId::Null)
	, m_bToAlternateOwnersZone(FALSE)
	, m_bSetExtraCostToDenialCost(FALSE)
	, m_bTapAllLands(FALSE)
	, m_bClearManaPool(FALSE)
	, m_ToZone(ZoneId::Graveyard)
{
	AddAbilityTag(AbilityTag::Counterspell);

	m_CounterspellCardFilter.AddComparer(pComparer);
}

void CSpellstutterSpriteSpell::SetToZone(ZoneId toZone, BOOL bToOwner)
{
	m_ToZone = toZone;
	m_bToOwnersZone = bToOwner;
}

void CSpellstutterSpriteSpell::SetTargetOnlySpellsWithEqualCost()
{
	m_bTargetOnlySpellsWithEqualCost = TRUE;
	SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
}

void CSpellstutterSpriteSpell::SetToAlternateZone(
		CardComparer* pAlternateComparer,
		ZoneId toZone, BOOL bToOwner)
{
	m_ToAlternateZone = toZone;
	m_bToAlternateOwnersZone = bToOwner;
	m_AlternateZoneCardFilter.SetComparer(pAlternateComparer);
}

void CSpellstutterSpriteSpell::SetExtraCostToDenialCost()
{
	m_bSetExtraCostToDenialCost = TRUE;
}

void CSpellstutterSpriteSpell::SetTapAllLands()
{
	m_bTapAllLands = TRUE;
}

void CSpellstutterSpriteSpell::SetClearManaPool()
{
	m_bClearManaPool = TRUE;
}

BOOL CSpellstutterSpriteSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CPlayer* pController = GetController();
	const CStack& stack = m_pGame->GetStack();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		if (!bIncludeTricks && (pPlayer == pController))
			continue;


		// To support Gaea's Herald -> no need for Autumn's Veil support as this is an ability
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Stack);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (!m_CounterspellCardFilter.IsCardIncluded(pCard))
				continue;
			{
				BOOL bCantBeCountered = FALSE;

				if (pCard->GetCardKeyword()->CantBeCountered())
					bCantBeCountered = TRUE;

				for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
					if ((*it)->IsCardIncluded(pCard))
					//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
					{
						bCantBeCountered = TRUE;
						break;
					}

				if (bCantBeCountered)
				{
					if (!bIncludeTricks)
						continue;
				}

				BOOL bResult = TRUE;

				if (m_bTargetOnlySpellsWithEqualCost && !bAssumeSufficientMana)			// Ref: Spell Blast
				{
					// Note: if bAssumeSufficientMana is true, this IsPlayable is relaxed when m_bTargetOnlySpellsWithEqualCost is true 
					// because we don't have the information of how much mana the player can potentially produce

					const CManaPool_& manaPool = pController->GetManaPool();
					int nX = m_Cost.GetMaxExtraValue(manaPool);
					
					bResult = FALSE;

					// Search the common stack for this spell

					for (int l = 0; l < stack.GetStackSize(); ++l)
					{
						const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							if (pStackAction->GetCostManaPool().GetTotal() == nX)
								bResult = TRUE;
							break;
						}
					}
				}

				return bResult;
			}
		}
	}

	return FALSE;
}

CActionContainer* CSpellstutterSpriteSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CPlayer* pController = GetController();
	const CStack& stack = m_pGame->GetStack();

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CTargetStackSpellAction* pAction = (CTargetStackSpellAction*)pActionContainer->GetAt(i).GetPointer();

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(j);

			BOOL bTrick = FALSE;

			if (pPlayer == pController)
				bTrick = TRUE;

			if (!bIncludeTricks && bTrick)
				continue;

			// To support Gaea's Herald
			std::set<const CCardFilter*> cantCounterFilterIndexes;
			if (!bTrick)
				pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);

			CZone* pZone = pPlayer->GetZoneById(ZoneId::Stack);
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);
				if (!m_CounterspellCardFilter.IsCardIncluded(pCard))
					continue;

				if (!bTrick)
				{
					if (pCard->GetCardKeyword()->CantBeCountered())
						bTrick = TRUE;

					// To support Gaea's Herald
					for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
						//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
						if ((*it)->IsCardIncluded(pCard))
						{
							bTrick = TRUE;
							break;
						}

					if (bTrick && !bIncludeTricks)
						continue;
				}

				if (m_bTargetOnlySpellsWithEqualCost)
				{
					int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();
					BOOL bFound = FALSE;

					for (int l = 0; l < stack.GetStackSize(); ++l)
					{
						const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							if (pStackAction->GetCostManaPool().GetTotal() == nExtraCost)
								bFound = TRUE;

							break;
						}
					}

					if (!bFound)
						continue;
				}

				if (m_bSetExtraCostToDenialCost)
				{
					int nExtraCost = m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

					pAction->GetDenialCost().AddManaCost(CManaCost::Color::Generic, nExtraCost);
				}

				counted_ptr<CTargetStackSpellAction> cpAction1 = (CTargetStackSpellAction*)CreateAction().GetPointer();
				cpAction1->Copy(pAction);

				CSubjectGroup& targetGroup = cpAction1->GetTargetGroup();
				targetGroup.SetSourceCard(m_pCard);
				targetGroup.AddSubject(pCard);

				if (bSetNames)
				{
					CString strActionText(_T(" and counters ") + pCard->GetCardName());

					if ((pCard->GetCardType() & CardType::Creature).Any())
					{
						CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
						strActionText += _T("(") + pCreatureCard->GetPowerToughnessText(TRUE) + _T(")");
					}

					cpAction1->AppendToActionName(strActionText);
				}

				if (bTrick)
					cpAction1->SetTrick();		// Counterspell

				pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

/* Integrated into ResolveImpl()
BOOL CCounterSpell::IsResolvable(CAction* pAction)
{
#if 1	// Changed to prevent changes to the pAction which may cause undesirable problems during the minimax process
	if (!CSpell::IsResolvable(pAction))
		return FALSE;

	CTargetStackSpellAction* pAction1 = (CTargetStackSpellAction*)pAction;
	CSubjectGroup* pTarget = pAction1->GetTarget();

	const CCountedCardContainer* pCardContainer = pTarget->GetCardContainer();
	for (int i = pCardContainer->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCardContainer->GetAt(i);
		if ((pCard->GetZoneId() == ZoneId::Stack) &&
			IsCardIncluded(pCard))				// 9/8/2002
			return TRUE;
	}

	LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	return FALSE;
#else
	if (!CSpell::IsResolvable(pAction))
		return FALSE;

	CTargetStackSpellAction* pAction1 = (CTargetStackSpellAction*)pAction;
	CSubjectGroup* pTarget = pAction1->GetTarget();

	const CCountedCardContainer* pCardContainer = pTarget->GetCardContainer();
	for (int i = pCardContainer->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCardContainer->GetAt(i);
		if ((pCard->GetZoneId() != ZoneId::Stack) ||
			!IsCardIncluded(pCard))				// 9/8/2002
			pTarget->RemoveTarget(pCard);
	}

	if (!pTarget->GetSubjectCount())
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
#endif
}
*/

BOOL CSpellstutterSpriteSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetStackSpellAction* pAction1 = (const CTargetStackSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	CStack& stack = m_pGame->GetStack();

	BOOL bFound = FALSE;

	std::set<CPlayer*> targetedPlayers;

	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
	int nDomainCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())+1);
	int n = pAction->GetAssociatedCard()->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();

	for (CSubjectGroup::CardSubjectIterator i = targetGroup.CardSubjectBegin();
		i != targetGroup.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();
		if (nDomainCount > n)
		{
		targetedPlayers.insert(const_cast<CPlayer*>(pCard->GetController()));
		if (!stack.CanCounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToOwnersZone, m_ToZone, CardPlacement::Top))
			continue;
		if (stack.CounterSpell(pAction->GetController(), const_cast<CCard*>(pCard), m_bToOwnersZone, m_ToZone, CardPlacement::Top))
			bFound = TRUE;
		}
		// Skip over unresolvable targetGroup. Added to match changes done to the IsResolvable(). See above.
		/*if ((pCard->GetZoneId() != ZoneId::Stack) ||
			!m_CounterspellCardFilter.IsCardIncluded(pCard))
			continue;

		// To support Gaea's Herald
		BOOL bCantCounter = FALSE;
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
			if ((*it)->IsCardIncluded(pCard))
			//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
			{
				bCantCounter = TRUE;
				break;
			}

		if (bCantCounter)
			continue;

		bFound = TRUE;

		// Remove from stack

		for (int l = 0; l < stack.GetStackSize(); ++l)
		{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
			{
				stack.RemoveActionAt(l);
				break;
			}
		}
		
		// Move to graveyard

		if (m_ToAlternateZone.Any() && m_AlternateZoneCardFilter.IsCardIncluded(pCard))
		{
			if (m_bToAlternateOwnersZone)
				const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToAlternateZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
			else
				const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pAction1->GetController()->GetZoneById(m_ToAlternateZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
			continue;
		}
				
		if (m_bToOwnersZone)
			const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
		else
			const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pAction1->GetController()->GetZoneById(m_ToZone)), const_cast<CPlayer*>(pAction1->GetController()), MoveType::Others);
		}*/
		
	

	}

	if (m_bTapAllLands || m_bClearManaPool)
		for (std::set<CPlayer*>::iterator it = targetedPlayers.begin(); it != targetedPlayers.end(); ++it)
		{
			CPlayer* pPlayer = *it;

			if (m_bTapAllLands)
			{
				CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pInplay->GetSize(); ++i)
				{
					CCard* pCard = pInplay->GetAt(i);
					if ((pCard->GetCardType() & CardType::_Land).Any() &&
						!pCard->GetOrientation()->IsTapped())
						pCard->GetOrientation()->Tap();
				}
			}

			if (m_bClearManaPool)
			{
				pPlayer->GetManaPool().Clear();
			}
		}

	if (!bFound)
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);

	return bFound;
}

counted_ptr<CAbilityAction> CSpellstutterSpriteSpell::CreateAction() const
{
	counted_ptr<CTargetStackSpellAction> cpAction = ::CreateObject<CTargetStackSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CSpellstutterSpriteSpell*>(this));
	cpAction->SetScore(ActionScore::Counterspell);

	return cpAction.GetPointer();
}

BOOL CSpellstutterSpriteSpell::CanDeflectTargetToSpell(const CTargetStackSpellAction* pAction, const CCard* pSource) const
{
	return m_CounterspellCardFilter.IsCardIncluded(pSource);
}

void CSpellstutterSpriteSpell::DeflectTargetToSpell(CTargetStackSpellAction* pAction, CCard* pCard)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

	targetGroup.RemoveAll();
	targetGroup.AddSubject(pCard);
}

//____________________________________________________________________________
//
CExplosiveKegSpell::CExplosiveKegSpell(CCard* pCard,
									 AbilityType abilityType,
									 LPCTSTR strManaCost,
									 CardComparer* pComparer,
									ZoneId toZoneId, MoveType moveType,
									ZoneId fromZoneId, LPCTSTR p_name, int card)
	:CSpell(pCard, abilityType, strManaCost, FALSE)
	//,nComparer(pComparer)
	,m_toZoneId(toZoneId)
	,m_moveType(moveType)
	,m_fromZoneId(fromZoneId)
	,m_name(p_name)
	,m_card(card)
{
}
BOOL CExplosiveKegSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	return true;
}

CActionContainer* CExplosiveKegSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	int n = m_pCard->GetCounterContainer()->GetCounter(m_name)->GetCount();

	if (bSetNames)
	{		
		CString strAppend;

		if (m_card)
		{
		strAppend.Format(_T(" to destroy each nonland permanent with converted mana cost equal to %d"), n);
		}
		else
		{		
		strAppend.Format(_T(" to destroy each artifact and creature with converted mana cost equal to to %d"), n);
		}
		

		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();
			pAction->AppendToActionName(strAppend);
		}
	}


	CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(0).GetPointer();		

	pAction->SetValue(ContextValue(m_pCard->GetCounterContainer()->GetCounter(m_name)->GetCount()));

	return pActionContainer;
}
BOOL CExplosiveKegSpell::ResolveImpl(const CAbilityAction* pAction)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	int amount = pAction1->GetValue().nValue1;

	if (m_card)
	{
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(amount));
	m_CardFilter_temp.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter_temp.AddNegateComparer(new AlsoCardTypeComparer(CardType::_Land, false));
	}
	else
	{
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(amount));
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature, false));
	}
	CZoneCardModifier* pModifier = new CZoneCardModifier(m_fromZoneId, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(m_fromZoneId, m_toZoneId, TRUE, m_moveType)));

	pModifier->ApplyTo(GetController());
	pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return TRUE;
}

//____________________________________________________________________________
//
CDrawCardBreakthroughSpell::CDrawCardBreakthroughSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   int nDrawCount)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDrawCardBreakthroughSpell::OnSelectionDone))
	, m_nDrawCount(nDrawCount)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToOwner(TRUE)
	, m_DiscardToPlacement(CardPlacement::NotApplicable)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CDrawCardBreakthroughSpell::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
								ZoneId discardToZone, BOOL bDiscardToOwner, CardPlacement discardToPlacement)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToOwner = bDiscardToOwner;
	m_DiscardToPlacement = discardToPlacement;
	m_DiscardMoveType = discardMoveType;
}

CActionContainer* CDrawCardBreakthroughSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = m_nDrawCount ;
		
		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw a card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
		
			if (m_nDiscardCount)
			{
				if (m_nDiscardCount == 1)
					strActionName += _T(" and discard a card");
				else
					strActionName.AppendFormat(_T(" and discard %d cards"), m_nDiscardCount);
			}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

// 7/24/2002: Reviewed and revised, possible improvement in selecting cards to discard by computer
BOOL CDrawCardBreakthroughSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	CCountedCardContainer discardedCards;
	if (!CDrawCardCommon::ResolveDrawCards(const_cast<CPlayer*>(pCaster), const_cast<CPlayer*>(pCaster),
											pAction1->GetValue().nValue1, m_DiscardMoveType, m_nDiscardCount, m_bFromDrawsOnly,
											m_DiscardToZone,
											m_bDiscardToOwner,
											m_DiscardToPlacement,
											FALSE,
											m_DiscardToPlacement == CardPlacement::TopOrBottom ? &discardedCards : NULL))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}
	
	m_DiscardedCards = discardedCards;

	if (m_DiscardToPlacement == CardPlacement::TopOrBottom)
	{
		vector<SelectionEntry> entries;

		SelectionEntry entry1;
		entry1.dwContext = CardPlacement::Top;
		entry1.strText.Format(_T("puts %s cards to top of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry1);

		SelectionEntry entry2;
		entry2.dwContext = CardPlacement::Bottom;
		entry2.strText.Format(_T("puts %s cards to bottom of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry2);
		
		//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, 
			GetCard(), const_cast<CPlayer*>(pCaster));
	}

	return TRUE;
}

void CDrawCardBreakthroughSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CardPlacement selectedPlacement;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			selectedPlacement = static_cast<CardPlacement::Enum>(it->dwContext);
			break;
		}

	if (selectedPlacement == CardPlacement::Top)
	{
		for (int i = 0; i < m_DiscardedCards.GetSize(); ++i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Top);
		}
	}
	else
	if (selectedPlacement == CardPlacement::Bottom)
	{
		for (int i = m_DiscardedCards.GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Bottom);
		}
	}
}

//____________________________________________________________________________
//
CThirstforKnowledgeSpell::CThirstforKnowledgeSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   int nDrawCount)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CThirstforKnowledgeSpell::OnSelectionDone))
	, m_nDrawCount(nDrawCount)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToOwner(TRUE)
	, m_DiscardToPlacement(CardPlacement::NotApplicable)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CThirstforKnowledgeSpell::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
								ZoneId discardToZone, BOOL bDiscardToOwner, CardPlacement discardToPlacement)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToOwner = bDiscardToOwner;
	m_DiscardToPlacement = discardToPlacement;
	m_DiscardMoveType = discardMoveType;
}

CActionContainer* CThirstforKnowledgeSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = m_nDrawCount + GetExtraDrawCount(pAction);
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nDrawCount));

		/* removed: draws should be good in any cases
		if (!nDrawCount ||
			(m_nDiscardCount &&
				((!m_bFromDrawsOnly && m_pCard->GetController()->GetZoneById(ZoneId::Hand)->GetSize() + 
					nDrawCount <= m_nDiscardCount) ||
					(m_bFromDrawsOnly && 
						nDrawCount <= m_nDiscardCount))
			))
			pAction->SetTrick();
		*/

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw a card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
		
			if (m_nDiscardCount)
			{
				if (m_nDiscardCount == 1)
					strActionName += _T(" and discard a card");
				else
					strActionName.AppendFormat(_T(" and discard %d cards"), m_nDiscardCount);
			}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

// 7/24/2002: Reviewed and revised, possible improvement in selecting cards to discard by computer
BOOL CThirstforKnowledgeSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	CCountedCardContainer discardedCards;
	if (!CDrawCardCommon::ResolveDrawCards(const_cast<CPlayer*>(pCaster), const_cast<CPlayer*>(pCaster),
											pAction1->GetValue().nValue1, m_DiscardMoveType, m_nDiscardCount, m_bFromDrawsOnly,
											m_DiscardToZone,
											m_bDiscardToOwner,
											m_DiscardToPlacement,
											FALSE,
											m_DiscardToPlacement == CardPlacement::TopOrBottom ? &discardedCards : NULL))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}
	
	
	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Artifact,false));
	std::vector<SelectionEntry> entries;

	if (temp.CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer())>0)
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Discard an artifact"));

		entries.push_back(selectionEntry);
		}

		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Discard two cards"));

		entries.push_back(selectionEntry);
		}
	

	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, 
		GetCard(), const_cast<CPlayer*>(pCaster));

	return TRUE;
}

void CThirstforKnowledgeSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
			if (!CDiscardCardCommon::ResolveDiscardCards(
			pSelectionPlayer,	// Discarder
			pSelectionPlayer,	// Picker
			pSelectionPlayer,	// Caster
			1,
			MoveType::Discard,
			ZoneId::Hand,
			FALSE,
			CCardFilter::GetFilter(_T("artifact cards")),
			ZoneId::Graveyard, TRUE, CardPlacement::Top, TRUE, FALSE))
				return;
			}
			else
				if (!CDiscardCardCommon::ResolveDiscardCards(
			pSelectionPlayer,	// Discarder
			pSelectionPlayer,	// Picker
			pSelectionPlayer,	// Caster
			2,
			MoveType::Discard,
			ZoneId::Hand,
			FALSE,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Graveyard, TRUE, CardPlacement::Top, TRUE, FALSE))
			return;
		}
}

//____________________________________________________________________________
//
CPerniciousDeedSpell::CPerniciousDeedSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   const CCardFilter* pCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)	
	,m_pCardFilter(pCardFilter)	
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
}

CActionContainer* CPerniciousDeedSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = GetExtraDrawCount(pAction);
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to destroy each %s with converted mana cost %d or less"), m_pCardFilter->GetFilterNamePlural() ,nDrawCount);
				

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CPerniciousDeedSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	//const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	//const CPlayer* pCaster = pAction1->GetController();	
	//int cost = pAction1->GetValue().nValue1;

	std::auto_ptr<CCardFilter> apFilter(m_pCardFilter->Clone());
	apFilter->AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(pAction->GetValue().nValue1)); // ... and with converted mana cost equal to X

	CMoveCardModifier m_Modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);


	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(m_Modifier.GetFromZone());

			CCountedCardContainer cards;

			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k);
				if (apFilter->IsCardIncluded(pCard))
					cards.AddCard(pCard, CardPlacement::Top);
			}

			for (int k = 0; k < cards.GetSize(); ++k)
				m_Modifier.ApplyTo(cards.GetAt(k));
		}



/*
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* oppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)   // Should be re-done via card containers for simoultaneous movement
	{
		if ( m_pCardFilter->IsCardIncluded(pInplay->GetAt(i)) && (int)pInplay->GetAt(i)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal() <= cost)
			pModifier.ApplyTo(pInplay->GetAt(i));
	}

	for (int i = 0; i < oppInplay->GetSize(); ++i)
	{
		if ( m_pCardFilter->IsCardIncluded(oppInplay->GetAt(i)) && (int)oppInplay->GetAt(i)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal() <= cost)
			pModifier.ApplyTo(oppInplay->GetAt(i));
	}
	*/
/*	CCardFilter m_FilterTemp;

	m_FilterTemp.AddComparer(m_pComparer);
	m_FilterTemp.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(pAction1->GetValue().nValue1));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_FilterTemp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier.ApplyTo(pAction->GetController());
	pModifier.ApplyTo( m_pGame->GetNextPlayer(pAction->GetController()));

	m_FilterTemp.RemoveAllComparers();*/
		

	return TRUE;
}

//____________________________________________________________________________
//

CCyclingSpell::CCyclingSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost)
	: CDrawCardSpell(pCard, abilityType, strManaCost, 1)	

{
	AddAbilityTag(AbilityTag::Cycling);
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CCyclingSpell::ResolveImpl(const CAbilityAction* pAction)
{
		//const_cast<CCard*>(this->GetCard())->CardCycled(this->GetCard(), this->GetCard()->GetController());

		if (!__super::ResolveImpl(pAction))
		return FALSE;

		return TRUE;
}

//____________________________________________________________________________
//
CSearchCyclingSpell::CSearchCyclingSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter)
	: CSearchLibrarySpell(pCard, abilityType, strManaCost, pSearchCardFilter, ZoneId::Hand, TRUE, TRUE, FALSE)
{	
	AddAbilityTag(AbilityTag::Cycling);
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CSearchCyclingSpell::ResolveImpl(const CAbilityAction* pAction)
{
		//const_cast<CCard*>(this->GetCard())->CardCycled(this->GetCard(), this->GetCard()->GetController());

		if (!__super::ResolveImpl(pAction))
		return FALSE;

		return TRUE;
}
//____________________________________________________________________________
//
CKodamasReachSpell::CKodamasReachSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter,
										 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nMaxSearchCount(1)
	, m_nMinSearchCount(1)
	, m_FromZoneId(ZoneId::Library)
	, m_ToZoneId(toZoneId)
	, m_bTapped(bTapped)
	, m_bRevealCards(TRUE)
	, m_bRemoveRemainingCardsFromGame(FALSE)
	, m_bToOwnersZone(FALSE)
	, m_bToTop(bToTop)
	, m_pCompareCardFilter(NULL)
	, m_pSearchCardFilter(pSearchCardFilter)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CKodamasReachSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CKodamasReachSpell::SetFromZoneId(ZoneId fromZoneId)
{
	m_FromZoneId = fromZoneId;
}

void CKodamasReachSpell::SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount)	// Default is 1
{
	m_nMaxSearchCount = nMaxSearchCount;
	m_nMinSearchCount = nMinSearchCount;
}

void CKodamasReachSpell::SetRevealCards(BOOL bRevealCards)
{
	m_bRevealCards = bRevealCards;
}	

void CKodamasReachSpell::SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame)
{
	m_bRemoveRemainingCardsFromGame = bRemoveRemainingCardsFromGame;
}

BOOL CKodamasReachSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (m_pCompareCardFilter)
	{
		int nMaxOpponentCount = 0;
		int nControllerCount = 0;
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = m_pCompareCardFilter->CountIncluded(*pZone);
			if (pPlayer == GetController())
				nControllerCount = nCount;
			else
				nMaxOpponentCount = nCount;
		}

		if (nControllerCount >= nMaxOpponentCount)
			return FALSE;
	}

	if (bIncludeTricks)
		return TRUE;

	CZone* pZone = GetController()->GetZoneById(ZoneId::Library);
	for (int k = 0; k < pZone->GetSize(); ++k)
		if (m_pSearchCardFilter->IsCardIncluded(pZone->GetAt(k)))
			return TRUE;

	return FALSE;
}

CActionContainer* CKodamasReachSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		CString strZones;
		if ((m_FromZoneId & ZoneId::Library).Any())
			strZones = _T("library");

		if ((m_FromZoneId & ZoneId::Graveyard).Any())
			if (strZones.IsEmpty())
				strZones = _T("graveyard");
			else
				strZones += _T(" and graveyard");

		if (m_nMaxSearchCount == MaximumValue(1))
			pAction->AppendToActionName(_T(" to search ") + strZones + _T(" for ") + m_pSearchCardFilter->GetFilterName());
		else
		{
			CString strActionName;
			if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
				strActionName.Format(_T(" to search ") + strZones + _T(" for %s"), m_pSearchCardFilter->GetFilterNamePlural());
			else
				strActionName.Format(_T(" to search ") + strZones + _T(" for %s%d %s"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount), m_pSearchCardFilter->GetFilterNamePlural());

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CKodamasReachSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController(); 

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  m_nMinSearchCount,
											  m_nMaxSearchCount,
											  const_cast<CPlayer*>(pCaster),
											   m_FromZoneId,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards,
											  m_bRemoveRemainingCardsFromGame,&m_SearchedCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	std::vector<SelectionEntry> entries;
	
	for (int i = 0; i < m_SearchedCards.GetSize(); ++i)
		{
			CCard* pCard = m_SearchedCards.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("choose %s to put onto the battlefield tapped"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_SelectionSupport.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pCaster), m_SearchedCards.GetSize());

	return TRUE;
}
void CKodamasReachSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
											   DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{

			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE);
			pModifier1.SetTapped(TRUE);			
			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library,1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
			CCard* pCard = (CCard*)it->dwContext;
			int size = (int)dwContext1;

			if (size>0)
			{
				pModifier1.ApplyTo(pCard);
				if (size>1) pModifier2.ApplyTo(pSelectionPlayer);

			}		
			
		return;
		}
		return;
}
//____________________________________________________________________________
//
CJaradsOrdersSpell::CJaradsOrdersSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter,
										 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nMaxSearchCount(1)
	, m_nMinSearchCount(1)
	, m_FromZoneId(ZoneId::Library)
	, m_ToZoneId(toZoneId)
	, m_bTapped(bTapped)
	, m_bRevealCards(TRUE)
	, m_bRemoveRemainingCardsFromGame(FALSE)
	, m_bToOwnersZone(FALSE)
	, m_bToTop(bToTop)
	, m_pCompareCardFilter(NULL)
	, m_pSearchCardFilter(pSearchCardFilter)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CJaradsOrdersSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

void CJaradsOrdersSpell::SetFromZoneId(ZoneId fromZoneId)
{
	m_FromZoneId = fromZoneId;
}

void CJaradsOrdersSpell::SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount)	// Default is 1
{
	m_nMaxSearchCount = nMaxSearchCount;
	m_nMinSearchCount = nMinSearchCount;
}

void CJaradsOrdersSpell::SetRevealCards(BOOL bRevealCards)
{
	m_bRevealCards = bRevealCards;
}	

void CJaradsOrdersSpell::SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame)
{
	m_bRemoveRemainingCardsFromGame = bRemoveRemainingCardsFromGame;
}

BOOL CJaradsOrdersSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (m_pCompareCardFilter)
	{
		int nMaxOpponentCount = 0;
		int nControllerCount = 0;
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = m_pCompareCardFilter->CountIncluded(*pZone);
			if (pPlayer == GetController())
				nControllerCount = nCount;
			else
				nMaxOpponentCount = nCount;
		}

		if (nControllerCount >= nMaxOpponentCount)
			return FALSE;
	}

	if (bIncludeTricks)
		return TRUE;

	CZone* pZone = GetController()->GetZoneById(ZoneId::Library);
	for (int k = 0; k < pZone->GetSize(); ++k)
		if (m_pSearchCardFilter->IsCardIncluded(pZone->GetAt(k)))
			return TRUE;

	return FALSE;
}

CActionContainer* CJaradsOrdersSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		CString strZones;
		if ((m_FromZoneId & ZoneId::Library).Any())
			strZones = _T("library");

		if ((m_FromZoneId & ZoneId::Graveyard).Any())
			if (strZones.IsEmpty())
				strZones = _T("graveyard");
			else
				strZones += _T(" and graveyard");

		if (m_nMaxSearchCount == MaximumValue(1))
			pAction->AppendToActionName(_T(" to search ") + strZones + _T(" for ") + m_pSearchCardFilter->GetFilterName());
		else
		{
			CString strActionName;
			if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
				strActionName.Format(_T(" to search ") + strZones + _T(" for %s"), m_pSearchCardFilter->GetFilterNamePlural());
			else
				strActionName.Format(_T(" to search ") + strZones + _T(" for %s%d %s"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount), m_pSearchCardFilter->GetFilterNamePlural());

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CJaradsOrdersSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController(); 

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  m_nMinSearchCount,
											  m_nMaxSearchCount,
											  const_cast<CPlayer*>(pCaster),
											   m_FromZoneId,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards,
											  m_bRemoveRemainingCardsFromGame,&m_SearchedCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	std::vector<SelectionEntry> entries;
	
	for (int i = 0; i < m_SearchedCards.GetSize(); ++i)
		{
			CCard* pCard = m_SearchedCards.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("choose %s to put into your hand"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_SelectionSupport.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pCaster), m_SearchedCards.GetSize());

	return TRUE;
}
void CJaradsOrdersSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
											   DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE);
			
			CCard* pCard = (CCard*)it->dwContext;
			int size = (int)dwContext1;

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library,1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			if (size>0)
			{
				pModifier1.ApplyTo(pCard);
				if (size>1) pModifier2.ApplyTo(pSelectionPlayer);

			}		
			
		return;
		}
		return;
}
//____________________________________________________________________________
//
CScapeshiftSpell::CScapeshiftSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
								 int nSacrificeCount,
								 const CCardFilter* pSacrificeCardFilter, const CCardFilter* pSearchCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nSacrificeCount(nSacrificeCount)
	, m_pSacrificeCardFilter(pSacrificeCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CScapeshiftSpell::OnSelectionDone))
	, m_pSearchCardFilter(pSearchCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CScapeshiftSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	CZone* pZone = pAction1->GetController()->GetZoneById(ZoneId::Battlefield);

	vector<SelectionEntry> entries;

	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (m_pSacrificeCardFilter->IsCardIncluded(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;

			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

				entry.strText.Format(_T("sacrifices %s"),
					pCreatureCard->GetCreatureName(TRUE));
			}
			else
				entry.strText.Format(_T("sacrifices %s"),
					pCard->GetCardName());
		
			entries.push_back(entry);
		}
	}

	if (entries.size())
	{
		//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 0, m_nSacrificeCount,
			GetCard(),
			const_cast<CPlayer*>(pAction1->GetController()),
			(DWORD)pAction1->GetController());	// Context 1
	}

	return TRUE;
}

void CScapeshiftSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CPlayer* pCaster = (CPlayer*)dwContext1;
	ATLASSERT(pCaster);
	CZone* pZone = pCaster->GetZoneById(ZoneId::Graveyard);

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pZone, pSelectionPlayer, MoveType::Sacrifice);
		}

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  MinimumValue(nSelectedCount),
											  MaximumValue(nSelectedCount),
											  const_cast<CPlayer*>(pCaster),
											  ZoneId::Library,
											  m_pSearchCardFilter,
											  ZoneId::Battlefield,
											  TRUE,
											  CardPlacement::Top,
											  TRUE))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}
//____________________________________________________________________________
//
CAEtherVialSpell::CAEtherVialSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							    const CCardFilter* pCardFilter, LPCTSTR nCounterName)
	: CSpell(pCard, abilityType, strManaCost, FALSE)		
	, m_pCardFilter(pCardFilter)	
	, m_nCounterName(nCounterName)
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
}
BOOL CAEtherVialSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{	
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	
	//CCardFilter* apFilter(m_pCardFilter->Clone());
	std::auto_ptr<CCardFilter> apFilter(m_pCardFilter->Clone());
	//apFilter->AddComparer(new AnyCreatureComparer());
	apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(m_pCard->GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount()));

	if (m_pGame->IsThinking() && apFilter->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()) == 0) return FALSE;

	return TRUE;
}

CActionContainer* CAEtherVialSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();
		
		pAction->SetValue(ContextValue(m_pCard->GetCounterContainer()->GetCounter(m_nCounterName)->GetCount()));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" put a creature card with converted mana cost equal to %d from your hand onto the battlefield"), m_pCard->GetCounterContainer()->GetCounter(m_nCounterName)->GetCount());
				

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CAEtherVialSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();
	

	CCardFilter* apFilter(m_pCardFilter->Clone());

	apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(pAction1->GetValue().nValue1));


	CZone* pHand = pCaster->GetZoneById(ZoneId::Hand);


	if (apFilter->CountIncluded(pHand->GetCardContainer())>0)
	
	{
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			apFilter, // what cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pmodifier2.ApplyTo(const_cast<CPlayer*>(pCaster));
	}		

	return TRUE;
}


//____________________________________________________________________________
//
CGenesisWaveSpell::CGenesisWaveSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							    const CCardFilter* pCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)		
	, m_pCardFilter(pCardFilter)		
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
}

CActionContainer* CGenesisWaveSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();		

		pAction->SetValue(ContextValue(pAction->GetCostConfigEntry().GetExtraValue()));		

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to reveal to %d cards"), pAction->GetCostConfigEntry().GetExtraValue());
				

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CGenesisWaveSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();
	

	CCardFilter* apFilter(m_pCardFilter->Clone());

	apFilter->AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(pAction1->GetValue().nValue1));
	if (pCaster->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage))
	{
		apFilter->AddNegateComparer(new AnyCreatureComparer);
	}

		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, pAction1->GetValue().nValue1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier2.AddSelection(MinimumValue(0), MaximumValue(pAction1->GetValue().nValue1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			apFilter, // what cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pmodifier2.SetReorderInformation(true, ZoneId::Graveyard);

		pmodifier2.ApplyTo(const_cast<CPlayer*>(pCaster));	

	return TRUE;
}


//____________________________________________________________________________
//
CExtraPumpAbility::CExtraPumpAbility(CCard* pCard,
						   LPCTSTR strManaCost,
						   Power nPowerDelta, Life nLifeDelta,						  
						   CCreatureCard* pCreatureCard)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_PowerModifier(nPowerDelta)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
	, m_pCreatureCard(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard)
{
	SetToActivatedAbility();

	AddAbilityTag(AbilityTag::CreatureChange);	
}
CActionContainer* CExtraPumpAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;


	/*if ((m_LifeModifier.GetLifeDelta() == Life(0)) && m_PowerModifier.GetPowerDelta() == Power(0))
	{
		BOOL bTrick = TRUE;

		const CStack& stack = m_pGame->GetStack();
		int nStackSize = stack.GetStackSize();
		if (nStackSize)
		{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(nStackSize - 1).GetPointer();
			if (pStackAction->GetAbility() != this)
				bTrick = FALSE;
		}
		else
		{
			{
				CreatureKeyword toAdd = m_CreatureKeywordModifier.GetModifier().GetToAdd();
				CreatureKeyword toRemove = m_CreatureKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CreatureKeyword creatureKeyword = m_pCreatureCard->GetCreatureKeyword()->Get();

					if (((creatureKeyword & toAdd) != toAdd) ||
						(creatureKeyword & toRemove).Any())
						bTrick = FALSE;
				}
			}

			if (bTrick)
			{
				CardKeyword toAdd = m_CardKeywordModifier.GetModifier().GetToAdd();
				CardKeyword toRemove = m_CardKeywordModifier.GetModifier().GetToRemove();

				if (toAdd.Any() || toRemove.Any())
				{
					CardKeyword cardKeyword = m_pCreatureCard->GetCardKeyword()->Get();
					if (((cardKeyword & toAdd) != toAdd) ||
						(cardKeyword & toRemove).Any())
						bTrick = FALSE;
				}
			}
		}

		if (bTrick)
		{
			if (!bIncludeTricks)
			{
				delete pActionContainer;
				return NULL;
			}

			for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
				pActionContainer->GetAt(l)->SetTrick(TRUE);
		}
	}


	if (bSetNames)
	{
		CString strActionName1(
			GetCreatureGainString((const CCreatureCard*)GetCard(), &m_PowerModifier, &m_LifeModifier, &m_CreatureKeywordModifier, &m_CardKeywordModifier));

		if (!strActionName1.IsEmpty())
		{
			CString strActionName;
			strActionName.AppendFormat(_T(" (%s)"), strActionName1);

			for (int l = 0; l < pActionContainer->GetSize(); ++l)
				pActionContainer->GetAt(l)->AppendToActionName(strActionName);
		}
	}*/

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();		

		pAction->SetValue(ContextValue(pAction->GetCostConfigEntry().GetExtraValue()));		

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to get +%d/+%d"), pAction->GetCostConfigEntry().GetExtraValue()*GET_INTEGER(m_PowerModifier.GetPowerDelta()),
													  pAction->GetCostConfigEntry().GetExtraValue()*GET_INTEGER(m_LifeModifier.GetLifeDelta()));				

			pAction->AppendToActionName(strActionName);
		}
	}
	if (!m_pGame->IsThinking())
	   return pActionContainer;
	else
	{
	  CActionContainer* pActionContainer1 = new CActionContainer;
	  for (int i = 0; i < pActionContainer->GetSize(); ++i) //better use trick-mechanism!
	  {
		  CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();
		  if (pAction->GetValue().nValue1 != 0)
		  pActionContainer1->Add(pAction);
	  }
	  delete pActionContainer;
	  return pActionContainer1;
	}
}

BOOL CExtraPumpAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	Power oldPower = m_PowerModifier.GetPowerDelta();
	Life oldLife = m_LifeModifier.GetLifeDelta();

	m_PowerModifier.SetPowerDelta(oldPower*Power(pAction1->GetValue().nValue1));
	m_LifeModifier.SetLifeDelta(oldLife*Life(pAction1->GetValue().nValue1));

	m_PowerModifier.ApplyTo(m_pCreatureCard);
	m_LifeModifier.ApplyTo(m_pCreatureCard);	

	m_PowerModifier.SetPowerDelta(oldPower);
	m_LifeModifier.SetLifeDelta(oldLife);

	return TRUE;
}

//____________________________________________________________________________
//
CRhystheRedeemedAbility::CRhystheRedeemedAbility(CCard* pCard,
						   LPCTSTR strManaCost)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)	
{
	SetToActivatedAbility();

	AddAbilityTag(AbilityTag::CreatureChange);	
}
CActionContainer* CRhystheRedeemedAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	return pActionContainer;
	
}

BOOL CRhystheRedeemedAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	CCountedCardContainer pTokens;

	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetCardType().IsCreature() && pInplay->GetAt(i)->GetCardType().IsToken())
		{
			pTokens.AddCard(pInplay->GetAt(i), CardPlacement::Top);
		}

	// Not sensetive to Action copying
	
	CCardCopyModifier pModifier = CCardCopyModifier(m_pGame, m_pCard);
	for (int i = 0; i <  pTokens.GetSize(); ++i)
	{
		pModifier.ApplyTo(pTokens.GetAt(i));
	}

	return TRUE;
}

//____________________________________________________________________________
//
CCounterAbilitySpell::CCounterAbilitySpell(CCard* pCard,
												 AbilityType abilityType,
												 LPCTSTR strManaCost,  const CCardFilter* pCardFilter, 
												BOOL pSeparate,
												BOOL pTriggered)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pCardFilter(pCardFilter)
	, m_pSeparate(pSeparate)
	, m_pTriggered(pTriggered)
{
}
BOOL CCounterAbilitySpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CStack& stack = m_pGame->GetStack();

	if (stack.GetStackSize() > 0) 
		return TRUE; 
	else 
		return FALSE;
}
CActionContainer* CCounterAbilitySpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;
	
	CStack& stack = m_pGame->GetStack();
	CActionContainer* pActionContainer1 = new CActionContainer;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CAction* pAction = pActionContainer->GetAt(i).GetPointer();		

		for (int l = 0; l < stack.GetStackSize(); ++l)
		{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();

			if (m_pSeparate && ((m_pTriggered && !pStackAction->IsTriggered()) || (!m_pTriggered && pStackAction->IsTriggered())))
				continue;

			if (!pStackAction->IsSpell() && m_pCardFilter->IsCardIncluded(pStackAction->GetOriginatingCard())) 
			
			{
			pAction->SetValue(ContextValue(pStackAction->GetActionID()));

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T(" to counter ability of %s on stack position number %d"), pStackAction->GetOriginatingCard()->GetCardName(), l+1);				

				pAction->SetActionName(strActionName);
			}
			
			counted_ptr<CAction> cpNewAction = (CAction*)CreateAction().GetPointer();
			cpNewAction->Copy(pAction);
			cpNewAction->SetTrick();		// Counterspell

			pActionContainer1->Add(cpNewAction.GetPointer());	
			}
		}
	}
	
	delete pActionContainer;
	
	return pActionContainer1;
}
BOOL CCounterAbilitySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;
	
	CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction->GetActionID() == pAction->GetValue().nValue1)
			{
				
				stack.RemoveActionAt(l);
				m_pGame->AddStatebasedHint(CGame::StatebasedHint::PhenomenonRemoval);
				break;
			}
	}
	
	return TRUE;
}

//____________________________________________________________________________
//
CHideawayFreeCastAbility::CHideawayFreeCastAbility(CCard* pCard,
	AbilityType abilityType, LPCTSTR strManaCost,  const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CHideawayFreeCastAbility::OnSelectionDone))
{
}
CActionContainer* CHideawayFreeCastAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	return pActionContainer;

}

BOOL CHideawayFreeCastAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	CCard* toCast;
	CZone* SearchZone = pAction->GetController()->GetZoneById(ZoneId::_ExileFaceDown);
	CZone* SearchZone1 = m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::_ExileFaceDown);

	CCountedCardContainer toCastCard;

	m_pFreeCastCardFilter->GetIncluded(*SearchZone, toCastCard);
	m_pFreeCastCardFilter->GetIncluded(*SearchZone1, toCastCard);

	if (toCastCard.GetSize() == 0) return FALSE;

	toCast = toCastCard.GetAt(0);

	if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pAction->GetController()){ toCast->SetController(pAction->GetController()); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast);	

	return TRUE;
}

void CHideawayFreeCastAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}

//____________________________________________________________________________
//
CNinjutsuSelfMoveCardAbility::CNinjutsuSelfMoveCardAbility(CCard* pCard, LPCTSTR strManaCost,
										   ZoneId toZoneId, BOOL bToOwner, MoveType moveType)
: CSpell(pCard, AbilityType::Ninjutsu, strManaCost, FALSE)
	, m_ToZoneId(toZoneId)
	, m_bToOwner(bToOwner)
	, m_MoveType(moveType)
	, m_CardFilter(new AttackingCreatureComparer)
{
	SetToActivatedAbility();
	//SetAbilityType(AbilityType::Instant);
	
	SetHandOnly();
	SetAbilityName(_T("Ninjutsu"));
	SetUseInSpecificNode(NodeId::DeclareBlockersStep2 | NodeId::CombatDamageStep1a | NodeId::CombatDamageStep1b | NodeId::CombatDamageStep2a | NodeId::CombatDamageStep2b | NodeId::EndOfCombatStep);

	AddAbilityTag(AbilityTag(ZoneId::Hand, toZoneId));

	m_CardFilter.AddNegateComparer(new BlockedCreatureComparer);
	m_CardFilter.GetThisCardsControllerOnly();

	GetCost().AddReturnFromPlayCardCost(1, &m_CardFilter);
}

BOOL CNinjutsuSelfMoveCardAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	const CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
	if (nStackSize)
		if (stack.GetStackAction(nStackSize - 1)->GetAbility() == this)
			return FALSE;

	return TRUE;
}

CActionContainer* CNinjutsuSelfMoveCardAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	const CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
//	if (!nStackSize)
//		return pActionContainer;
//
//	if (stack.GetStackAction(nStackSize - 1)->GetAbility() != this)
//		return pActionContainer;

//	if (!bIncludeTricks)
//		return NULL;

	m_Selection.clear();

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		pActionContainer->GetAt(i)->SetTrick(FALSE);
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();
		CCreatureCard* pCard = (CCreatureCard*)pAction->GetCostConfigEntry().GetReturnFromPlayCards()->GetAt(0);

		AttackSubjectStorage cStor(pCard, pCard->GetAttackedPlayer(), pCard->GetAttackedPlaneswalker());
		m_Selection.push_back(cStor);		
	}
	return pActionContainer;
}

BOOL CNinjutsuSelfMoveCardAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	if (m_pCard->GetZoneId() != m_PlayableFrom)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	if (m_bToOwner)
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(m_ToZoneId), const_cast<CPlayer*>(pCaster), m_MoveType);
	else
		m_pCard->Move(const_cast<CZone*>(pCaster->GetZoneById(m_ToZoneId)), const_cast<CPlayer*>(pCaster), m_MoveType);

	CCreatureCard* pCard = (CCreatureCard*)pAction->GetCostConfigEntry().GetReturnFromPlayCards()->GetAt(0);

	for (int i = 0; i != m_Selection.size(); ++i)
	{
		if ( m_Selection[i].m_pAttacker == pCard)
		{
			if(m_Selection[i].m_pAttackedPlayer) ((CCreatureCard*)m_pCard)->Attack(m_Selection[i].m_pAttackedPlayer);
			else ((CCreatureCard*)m_pCard)->Attack(m_Selection[i].m_pAttackedPlaneswalker);
		}
	}

	CCardOrientationModifier pModifier = CCardOrientationModifier();
	pModifier.ApplyTo(m_pCard);

	return TRUE;
}

//____________________________________________________________________________
//
CDistantMemoriesSearchLibrarySpell::CDistantMemoriesSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter,
										 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CSearchLibrarySpell(pCard, abilityType, strManaCost, pSearchCardFilter, toZoneId, bToOwnersZone, bToTop, bTapped)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CDistantMemoriesSearchLibrarySpell::OnSelectionDone))
{
}
BOOL CDistantMemoriesSearchLibrarySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController(); 

	CCountedCardContainer pContainer;

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  m_nMinSearchCount,
											  m_nMaxSearchCount,
											  const_cast<CPlayer*>(pCaster),
											   m_FromZoneId,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards,
											  m_bRemoveRemainingCardsFromGame,  &pContainer))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}


	if (pContainer.GetSize())
	{
		std::vector<SelectionEntry> entries;
	
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pContainer.GetAt(0);
			selectionEntry.strText.Format(_T("choose %s to put into opponent hand"), pContainer.GetAt(0)->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}		
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Opponent draws 3 cards"));

			entries.push_back(selectionEntry);
		}		


		m_SelectionSupport.AddSelectionRequest(
			entries, 1, 1, NULL, m_pGame->GetNextPlayer(pCaster));
	}

	return TRUE;
}
void CDistantMemoriesSearchLibrarySpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
											   DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{

			if (it->dwContext)
			{
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Exile, ZoneId::Hand, TRUE, MoveType::Others,pSelectionPlayer);
			CCard* pCard = (CCard*)it->dwContext;

			pModifier1.ApplyTo(pCard);
			}

			else
			{
			CDrawCardModifier pModifier2 = CDrawCardModifier(m_pGame, MinimumValue(3), MaximumValue(3));
			pModifier2.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			}	
			
		return;
		}
		return;
}
//____________________________________________________________________________
//
CMyrIncubatorSearchLibrarySpell::CMyrIncubatorSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 const CCardFilter* pSearchCardFilter,
										 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CSearchLibrarySpell(pCard, abilityType, strManaCost, pSearchCardFilter, toZoneId, bToOwnersZone, bToTop, bTapped)	
{
}
BOOL CMyrIncubatorSearchLibrarySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController(); 

	CCountedCardContainer pContainer;

	if (!CSearchCardCommon::ResolveSearchCards(const_cast<CPlayer*>(pCaster),
											  m_nMinSearchCount,
											  m_nMaxSearchCount,
											  const_cast<CPlayer*>(pCaster),
											   m_FromZoneId,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards,
											  m_bRemoveRemainingCardsFromGame,  &pContainer))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	int amount = pContainer.GetSize();

	if (amount)
	{
		CTokenCreationModifier pModifier= CTokenCreationModifier(m_pGame, _T("Myr A"),	2795, amount);
		pModifier.ApplyTo(pAction1->GetController());
	}
	return TRUE;
}
//____________________________________________________________________________
//
// Ref: Fossil Find
CReorderZoneSpell::CReorderZoneSpell(CCard* pCard, AbilityType abilityType,
							     LPCTSTR strManaCost, ZoneId zone)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_Zone(zone)
{
}

BOOL CReorderZoneSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	CDiscardCardCommon::ResolveDiscardCards(
		pAction->GetController(),
		NULL,
		pAction->GetController(),
		SpecialNumber::Any,
		MoveType::Others,
		m_Zone,
		FALSE,
		NULL,
		m_Zone);

	return TRUE;
}

//____________________________________________________________________________
//
CModifyEnchantedCardAbility::CModifyEnchantedCardAbility(CCard* pCard, CEnchant* pEnchantSpell, LPCTSTR strManaCost)
	: CSpell(pCard, AbilityType::Activated, strManaCost, FALSE)
	, m_pEnchantSpell(pEnchantSpell)
{
	SetToActivatedAbility();
}

BOOL CModifyEnchantedCardAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	if (!m_pEnchantSpell->GetEnchantedOnCard())
		return FALSE;

	return TRUE;
}

BOOL CModifyEnchantedCardAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return FALSE;

	m_CardModifiers.ApplyTo(pCard);

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pCard);
	if (pCreatureCard) m_CreatureModifiers.ApplyTo(pCreatureCard);

	return TRUE;
}

//____________________________________________________________________________
//
CGenericSpell::CGenericSpell(CCard* pCard, AbilityType abilityType,
										LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
{
}

//____________________________________________________________________________
//
CWarpWorldSpell::CWarpWorldSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)		
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));
}

CActionContainer* CWarpWorldSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();		
	}

	return pActionContainer;
}

BOOL CWarpWorldSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	CPlayer* pCont = m_pGame->GetActivePlayer();
	CPlayer* pOpp = m_pGame->GetNextPlayer(pCont);
	CZone* pContInplay = pCont->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = pOpp->GetZoneById(ZoneId::Battlefield);
	CZone* pContLibrary = pCont->GetZoneById(ZoneId::Library);
	CZone* pOppLibrary = pOpp->GetZoneById(ZoneId::Library);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardOwnerComparer(pCont));
	CCardFilter m_CardFilter_temp1;
	m_CardFilter_temp1.SetComparer(new CardOwnerComparer(pOpp));
	
	int nContCards = m_CardFilter_temp.CountIncluded(pContInplay->GetCardContainer()) + m_CardFilter_temp.CountIncluded(pOppInplay->GetCardContainer());
	int nOppCards = m_CardFilter_temp1.CountIncluded(pContInplay->GetCardContainer()) + m_CardFilter_temp1.CountIncluded(pOppInplay->GetCardContainer());
	
	CZoneCardModifier* pModifier0 = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("aura cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)));
	
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)));
	
	pModifier0->ApplyTo(pCont);
	pModifier0->ApplyTo(pOpp);

	pModifier->ApplyTo(pCont);
	pModifier->ApplyTo(pOpp);

	pContLibrary->Shuffle();
	pOppLibrary->Shuffle();

	CDrawCardCommon::ResolveRevealZone(pCont,
		pCont,
		nContCards,
		TRUE,
		FALSE,
		ZoneId::Null,
		CardPlacement::NotApplicable,
		NULL,
		MaximumValue(0),
		MinimumValue(0),
		ZoneId::Library,
		ZoneId::Library,
		CardPlacement::Top,
		NULL,
		FALSE);

	CDrawCardCommon::ResolveRevealZone(pOpp,
		pOpp,
		nOppCards,
		TRUE,
		FALSE,
		ZoneId::Null,
		CardPlacement::NotApplicable,
		NULL,
		MaximumValue(0),
		MinimumValue(0),
		ZoneId::Library,
		ZoneId::Library,
		CardPlacement::Top,
		NULL,
		FALSE);

	CCountedCardContainer contCards;
	
	if (nContCards > pContLibrary->GetSize())
		nContCards = pContLibrary->GetSize();
	
	for (int k = 0; k < nContCards ; ++k)
	{
		CCard* pCard = pContLibrary->GetAt(pContLibrary->GetSize() - k - 1);
		contCards.AddCard(pCard, CardPlacement::Bottom);
	}

	CCountedCardContainer oppCards;
	
	if (nOppCards > pOppLibrary->GetSize())
		nOppCards = pOppLibrary->GetSize();

	for (int k = 0; k < nOppCards ; ++k)
	{
		CCard* pCard = pOppLibrary->GetAt(pOppLibrary->GetSize() - k - 1);
		oppCards.AddCard(pCard, CardPlacement::Bottom);
	}
	
	CCountedCardContainer contACLCards;
	CCountedCardContainer oppACLCards;
	CCountedCardContainer contECards;
	CCountedCardContainer oppECards;

	CCardFilter m_CardFilter_temp2;
	m_CardFilter_temp2.SetComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, FALSE));
	
	CCardFilter m_CardFilter_temp3;
	m_CardFilter_temp3.SetComparer(new CardTypeComparer(CardType::_Enchantment, FALSE));
	
	for (int k = 0; k < contCards.GetSize() ; ++k)
	{
		CCard* pCard = pContLibrary->GetAt(pContLibrary->GetSize() - k - 1);
		if (m_CardFilter_temp2.IsCardIncluded(pCard))
		{
			contACLCards.AddCard(pCard, CardPlacement::Bottom);
			continue;
		}
		if (m_CardFilter_temp3.IsCardIncluded(pCard))
			contECards.AddCard(pCard, CardPlacement::Bottom);
	}

	for (int k = 0; k < oppCards.GetSize() ; ++k)
	{
		CCard* pCard = pOppLibrary->GetAt(pOppLibrary->GetSize() - k - 1);
		if (m_CardFilter_temp2.IsCardIncluded(pCard))
		{
			oppACLCards.AddCard(pCard, CardPlacement::Bottom);
			continue;
		}
		if (m_CardFilter_temp3.IsCardIncluded(pCard))
			oppECards.AddCard(pCard, CardPlacement::Bottom);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others);
	for (int ic = 0; ic < contACLCards.GetSize(); ++ic)
		modifier.ApplyTo(contACLCards.GetAt(ic));
	for (int ic = 0; ic < oppACLCards.GetSize(); ++ic)
		modifier.ApplyTo(oppACLCards.GetAt(ic));
	for (int ic = 0; ic < contECards.GetSize(); ++ic)
		modifier.ApplyTo(contECards.GetAt(ic));
	for (int ic = 0; ic < oppECards.GetSize(); ++ic)
		modifier.ApplyTo(oppECards.GetAt(ic));

	CCountedCardContainer contLeftCards;
	CCountedCardContainer oppLeftCards;

	CCardFilter m_CardFilter_temp4;
	m_CardFilter_temp4.SetComparer(new CardZoneComparer(ZoneId::Library));

	for (int k = 0; k < contCards.GetSize() ; ++k)
	{
		CCard* pCard = contCards.GetAt(k);
		if (m_CardFilter_temp4.IsCardIncluded(pCard))
		contLeftCards.AddCard(pCard, CardPlacement::Bottom);
	}
	
	for (int k = 0; k < oppCards.GetSize() ; ++k)
	{
		CCard* pCard = oppCards.GetAt(k);
		if (m_CardFilter_temp4.IsCardIncluded(pCard))
		oppLeftCards.AddCard(pCard, CardPlacement::Bottom);
	}
	
	if (contLeftCards.GetSize())
	{
		if (contLeftCards.GetSize() == 1)
		{
			pContLibrary->AddCard(contLeftCards.GetAt(0), pCont, MoveType::Others, CardPlacement::Bottom);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || pCont->IsComputer())
			{
				contLeftCards.Sort();	// ascending
				pContLibrary->AddCards(contLeftCards, pCont, MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &contLeftCards;

				if (pCont->GetInterface()->OrderCards(&orderCardsData))
					pContLibrary->AddCards(contLeftCards, pCont, MoveType::Others, CardPlacement::Bottom);
			}
		}
	}
	
	if (oppLeftCards.GetSize())
	{
		if (oppLeftCards.GetSize() == 1)
		{
			pOppLibrary->AddCard(contLeftCards.GetAt(0), pOpp, MoveType::Others, CardPlacement::Bottom);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || pOpp->IsComputer())
			{
				oppLeftCards.Sort();	// ascending
				pOppLibrary->AddCards(oppLeftCards, pOpp, MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &oppLeftCards;

				if (pOpp->GetInterface()->OrderCards(&orderCardsData))
					pOppLibrary->AddCards(oppLeftCards, pOpp, MoveType::Others, CardPlacement::Bottom);
			}
		}
	}

	return TRUE;
}


//____________________________________________________________________________
//
CPunishmentSpell::CPunishmentSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   const CCardFilter* pCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)	
	,m_pCardFilter(pCardFilter)	
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
}

CActionContainer* CPunishmentSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = GetExtraDrawCount(pAction);
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += pAction->GetCostConfigEntry().GetExtraValue();
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to destroy each %s with converted mana cost %d"), m_pCardFilter->GetFilterNamePlural() ,nDrawCount);
				

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CPunishmentSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	//const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	//const CPlayer* pCaster = pAction1->GetController();	
	//int cost = pAction1->GetValue().nValue1;

	std::auto_ptr<CCardFilter> apFilter(m_pCardFilter->Clone());
	apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(pAction->GetValue().nValue1)); // ... and with converted mana cost equal to X

	CMoveCardModifier m_Modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);


	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(m_Modifier.GetFromZone());

			CCountedCardContainer cards;

			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k);
				if (apFilter->IsCardIncluded(pCard))
					cards.AddCard(pCard, CardPlacement::Top);
			}

			for (int k = 0; k < cards.GetSize(); ++k)
				m_Modifier.ApplyTo(cards.GetAt(k));
		}

	return TRUE;
}
//____________________________________________________________________________
//
CSearchFreeCastAbility::CSearchFreeCastAbility(CCard* pCard,
	AbilityType abilityType, LPCTSTR strManaCost,  const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSearchFreeCastAbility::OnSelectionDone))
	, m_CardSelection(pCard->GetGame(),CSelectionSupport::SelectionCallback(this, &CSearchFreeCastAbility::OnCardSelectionDone))
	, toCastCard()
	, toCastCard1()
{
}
CActionContainer* CSearchFreeCastAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	return pActionContainer;

}

BOOL CSearchFreeCastAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	toCastCard.RemoveAll();
	toCastCard1.RemoveAll();
//----------------------------------- Getting what to cast -------------------------------------------------

CPlayerSearchModifier pModifier = CPlayerSearchModifier(
					pAction->GetController(),
					MinimumValue(1),
					MaximumValue(1),
					pAction->GetController(),
					ZoneId::Library,
					m_pFreeCastCardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, 
					FALSE,
					&toCastCard);

	pModifier.ApplyTo(pAction->GetController());

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(
					m_pGame->GetNextPlayer(pAction->GetController()),
					MinimumValue(1),
					MaximumValue(1),
					m_pGame->GetNextPlayer(pAction->GetController()),
					ZoneId::Library,
					m_pFreeCastCardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, 
					FALSE,
					&toCastCard);

	pModifier1.ApplyTo(pAction->GetController());

	if (toCastCard.GetSize() == 0) return FALSE;


	// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

	CardtoCastSelectionRun(pAction->GetController());	

	return TRUE;
}
void CSearchFreeCastAbility::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast/play %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}
void CSearchFreeCastAbility::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)toCast);	
}
void CSearchFreeCastAbility::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				PostProcessCards();
				return;
			}

			return;
		}
	
	return;
}
void CSearchFreeCastAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				toCastCard.RemoveCard(toCast);
	
				if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();
				break;
			}
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();

				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();
				}

		}
}
void CSearchFreeCastAbility::PostProcessCards()
{
	return;
}
//____________________________________________________________________________
//
CEpicExperimentSpell::CEpicExperimentSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CEpicExperimentSpell::OnSelectionDone))
	, m_CardSelection(pCard->GetGame(),CSelectionSupport::SelectionCallback(this, &CEpicExperimentSpell::OnCardSelectionDone))
	, toCastCard()
	, toCastCard1()
{
}

CActionContainer* CEpicExperimentSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = 0;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw a card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
		
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CEpicExperimentSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;
//----------------------------------- Getting what to cast -------------------------------------------------
	toCastCard.RemoveAll();
	toCastCard1.RemoveAll();
	
	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	int nCount = pAction1->GetValue().nValue1;

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(nCount));

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCount , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &toCastCard1);
	pModifier2.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	
	pModifier2.ApplyTo(pAction->GetController());

	for (int i = 0; i < toCastCard1.GetSize(); ++i)
	{
		if (m_pFreeCastCardFilter->IsCardIncluded(toCastCard1.GetAt(i)) && m_CardFilter_temp.IsCardIncluded(toCastCard1.GetAt(i))) 
			toCastCard.AddCard(toCastCard1.GetAt(i),CardPlacement::Top);
	}

	if (toCastCard.GetSize() == 0) return FALSE;


	// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

	CardtoCastSelectionRun(pAction->GetController());	

	return TRUE;
}
void CEpicExperimentSpell::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast/play %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}
void CEpicExperimentSpell::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)toCast);	
}
void CEpicExperimentSpell::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				PostProcessCards();
				return;
			}

			return;
		}
	
	return;
}
void CEpicExperimentSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				toCastCard.RemoveCard(toCast);
	
				if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();
				break;
			}
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();

				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
					else
						PostProcessCards();
				}

		}
}
void CEpicExperimentSpell::PostProcessCards()
{
		CCardFilter m_CardFilter_temp;
	    m_CardFilter_temp.SetComparer(new  ContainedinComparer(&toCastCard1));
	

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Exile, SpecialNumber::Any , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &toCastCard1);
	pModifier2.AddSelection(MinimumValue(0), MaximumValue(0), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter_temp, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	pModifier2.SetReorderInformation(
		true, 
		ZoneId::Graveyard,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	
	pModifier2.ApplyTo(GetController());
	pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	
	return;
}

//____________________________________________________________________________
//
CChandraAblazeUltimateSpell::CChandraAblazeUltimateSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CChandraAblazeUltimateSpell::OnSelectionDone))
	, m_CardSelection(pCard->GetGame(),CSelectionSupport::SelectionCallback(this, &CChandraAblazeUltimateSpell::OnCardSelectionDone))
	, toCastCard()
{
}

CActionContainer* CChandraAblazeUltimateSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = 0;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to cast cards from graveyard"));
		
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CChandraAblazeUltimateSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;
//----------------------------------- Getting what to cast -------------------------------------------------
	toCastCard.RemoveAll();
	
	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		if (m_pFreeCastCardFilter->IsCardIncluded(pGraveyard->GetAt(i))) 
			toCastCard.AddCard(pGraveyard->GetAt(i),CardPlacement::Top);
	}

	if (toCastCard.GetSize() == 0) return FALSE;


	// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

	CardtoCastSelectionRun(pAction->GetController());	

	return TRUE;
}
void CChandraAblazeUltimateSpell::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast/play %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}
void CChandraAblazeUltimateSpell::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)toCast);	
}
void CChandraAblazeUltimateSpell::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				return;
			}

			return;
		}
	
	return;
}
void CChandraAblazeUltimateSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				toCastCard.RemoveCard(toCast);
	
				if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				break;
			}
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}

		}
}

//____________________________________________________________________________
//
CSpawnsireOfUlamogSpell::CSpawnsireOfUlamogSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSpawnsireOfUlamogSpell::OnSelectionDone))
	, m_CardSelection(pCard->GetGame(),CSelectionSupport::SelectionCallback(this, &CSpawnsireOfUlamogSpell::OnCardSelectionDone))
	, toCastCard()
{
}

CActionContainer* CSpawnsireOfUlamogSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = 0;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to cast cards from outside the game"));
		
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CSpawnsireOfUlamogSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;
//----------------------------------- Getting what to cast -------------------------------------------------
	toCastCard.RemoveAll();
	
	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	CPlayer* pController = pAction->GetController();
	CZone* pSideboard = pController->GetZoneById(ZoneId::_Sideboard);

	for (int i = 0; i < pSideboard->GetSize(); ++i)
	{
		if (m_pFreeCastCardFilter->IsCardIncluded(pSideboard->GetAt(i))) 
			toCastCard.AddCard(pSideboard->GetAt(i),CardPlacement::Top);
	}

	if (toCastCard.GetSize() == 0) return FALSE;


	// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

	CardtoCastSelectionRun(pAction->GetController());	

	return TRUE;
}
void CSpawnsireOfUlamogSpell::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast/play %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}
void CSpawnsireOfUlamogSpell::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)toCast);	
}
void CSpawnsireOfUlamogSpell::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				return;
			}

			return;
		}
	
	return;
}
void CSpawnsireOfUlamogSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				toCastCard.RemoveCard(toCast);
	
				if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				break;
			}
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}

		}
}

//____________________________________________________________________________
//
CBrilliantUltimatumSpell::CBrilliantUltimatumSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter, int nCards)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CBrilliantUltimatumSpell::OnSelectionDone))
	, m_TargetZoneSelection(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CBrilliantUltimatumSpell::OnTargetZoneSelected))
	, m_CardSelection(pCard->GetGame(),CSelectionSupport::SelectionCallback(this, &CBrilliantUltimatumSpell::OnCardSelectionDone))
	, toCastCard()
	, toCastCard1()
	, m_SelectedCards1()
	, m_SelectedCards2()
	, m_nCards(nCards)
{
}

CActionContainer* CBrilliantUltimatumSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nDrawCount = 0;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nDrawCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nDrawCount));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" to exile and cast"));
		
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CBrilliantUltimatumSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;
//----------------------------------- Getting what to cast -------------------------------------------------
	toCastCard.RemoveAll();
	toCastCard1.RemoveAll();
	toCastCard2.RemoveAll();
	
	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	int nCards;

	int nLibrarySize = pAction->GetController()->GetZoneById(ZoneId::Library)->GetSize();

	if (nLibrarySize < m_nCards)
		nCards = nLibrarySize;
	else
		nCards = m_nCards;

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCards, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &toCastCard1);
	pModifier2.AddSelection(MinimumValue(nCards), MaximumValue(nCards), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	
	pModifier2.ApplyTo(pAction->GetController());

	for (int i = 0; i < toCastCard1.GetSize(); ++i)
	{
		if (m_pFreeCastCardFilter->IsCardIncluded(toCastCard1.GetAt(i))) 
			toCastCard2.AddCard(toCastCard1.GetAt(i),CardPlacement::Top);
	}

	if (toCastCard2.GetSize() == 0) return FALSE;

	else
	{
		CPlayer* target =  pAction->GetController();
		CPlayer* opponent =  m_pGame->GetNextPlayer(target);

		if (m_pGame->IsThinking() || opponent->IsComputer())
		{
			toCastCard2.Sort(TRUE);

			for (int i = 0; i < toCastCard2.GetSize(); ++i)
			{
				if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
					m_SelectedCards2.AddCard(toCastCard2.GetAt(i), CardPlacement::Top);
				else
					m_SelectedCards1.AddCard(toCastCard2.GetAt(i), CardPlacement::Top);
			}

			if (!target->IsComputer() && !m_pGame->IsThinking())
			{
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
			}

			ProcessPiling(target, pAction->GetController());
		}
		else
		{
			SelectCardsData selectCardData;

			selectCardData.pCardContainer = &toCastCard2;
			selectCardData.nMinSelect = MinimumValue(0);
			selectCardData.nMaxSelect = MaximumValue(toCastCard2.GetSize());
			selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

			opponent->GetInterface()->SelectCard(&selectCardData);
			m_SelectedCards1 = selectCardData.SelectedCards;

			for (int i = 0; i < toCastCard2.GetSize(); ++i)
			{
				if (!m_SelectedCards1.HasCard(toCastCard2.GetAt(i)))
					m_SelectedCards2.AddCard(toCastCard2.GetAt(i), CardPlacement::Top);
			}

			for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
			{
				CString strMessage;
				strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

				m_pGame->Message(
					strMessage,
					target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
			{
				CString strMessage;
				strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

				m_pGame->Message(
					strMessage,
					target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			ProcessPiling(target, pAction->GetController());
		}
	}
	return TRUE;
}

void CBrilliantUltimatumSpell::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
{	
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Select pile 1"));

		entries.push_back(selectionEntry);
	}

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Select pile 2"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL,  pPlayer1);
}

void CBrilliantUltimatumSpell::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					toCastCard.AddCard(m_SelectedCards1.GetAt(i),CardPlacement::Top);
				}

				if (toCastCard.GetSize() > 0)
// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------
					CardtoCastSelectionRun(pSelectionPlayer);	

				return;
			}
			if ((int)it->dwContext == 2)
			{
				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					toCastCard.AddCard(m_SelectedCards2.GetAt(i),CardPlacement::Top);
				}

				if (toCastCard.GetSize() > 0)
// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

					CardtoCastSelectionRun(pSelectionPlayer);	

				return;
			}
			return;
		}
}

void CBrilliantUltimatumSpell::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast/play %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	 m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}

void CBrilliantUltimatumSpell::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)toCast);	
}

void CBrilliantUltimatumSpell::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				return;
			}

			return;
		}
	
	return;
}

void CBrilliantUltimatumSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				toCastCard.RemoveCard(toCast);
	
				if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				break;
			}
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
					
					toCastCard.RemoveCard(toCast);

					if (toCastCard.GetSize())
						CardtoCastSelectionRun(pSelectionPlayer);
				}

		}
}

//____________________________________________________________________________
//
CXLowerLimitSpell::CXLowerLimitSpell(CCard* pCard, AbilityType abilityType,
										LPCTSTR strManaCost, int LowerLimit)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_nLowerLimit(LowerLimit)
{
}

CActionContainer* CXLowerLimitSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CAbilityAction* pAction = (CAbilityAction*)pActionContainer->GetAt(l).GetPointer();

		int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();

		if (nExtraCost >= m_nLowerLimit)
			pActionContainer1->Add(pAction);
	}
	delete pActionContainer;

	return pActionContainer1;
}

//____________________________________________________________________________
//
CUnexpectedResultsSpell::CUnexpectedResultsSpell(CCard* pCard,
	AbilityType abilityType, LPCTSTR strManaCost,  const CCardFilter* pFreeCastCardFilter)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_pFreeCastCardFilter(pFreeCastCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CUnexpectedResultsSpell::OnSelectionDone))
{
}
CActionContainer* CUnexpectedResultsSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	return pActionContainer;

}

BOOL CUnexpectedResultsSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	CCard* toCast;

	if (!pAction->GetController()->GetZoneById(ZoneId::Library)->GetSize()) return FALSE;

	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	toCast = pAction->GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (!toCast->GetCardType().IsLand()) 
	{
		if (toCast->GetController() != pAction->GetController()){ toCast->SetController(pAction->GetController()); Controlled = TRUE;}
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
			{
				sel_entry.ActionIndex = j;
				
				m_Selection.push_back(sel_entry);

				SelectionEntry entry;	
				entry.dwContext = n;				
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				entries.push_back(entry);
			}		
		}		
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{		
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());		

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast);	

	return TRUE;
}

void CUnexpectedResultsSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999) 
			{
				m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Others);
				break;
			}
			else
				if (j == 99998)
				{
					m_pCard->Move(pSelectionPlayer->GetZoneById(ZoneId::Hand), pSelectionPlayer, MoveType::Others);
					((CBasicLandCard*)toCast)->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
					m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Others);
					m_Selection[j].PerformAction(toCast);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}

//____________________________________________________________________________
//