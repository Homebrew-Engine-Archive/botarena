#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
BOOL CTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const		// similar to TargetAllowed() but ignore targeting restrictions
{
	if (!__super::IsSubjectIncluded(pCard, bIncludeTricks, bTrick))
		return FALSE;

	BOOL pSpell = FALSE;

	if (m_pAbility->IsSpell() || GetSourceCard()->GetZoneId() == ZoneId::Stack)
		pSpell = TRUE;

	if (pCard->HasProtectionFrom(GetSourceCard(), pSpell))
		return FALSE;

	return TRUE;
}

BOOL CTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return __super::IsSubjectIncluded(pPlayer, bIncludeTricks, bTrick);
}

BOOL CTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (pCard->IsInplay() && pCard->GetCardKeyword()->HasShroud(m_pAbility->GetCard()))
		return FALSE;

	if (pCard->IsInplay() && pCard->GetCardKeyword()->HasHexproof() && (m_pAbility->GetCard()->GetController() != pCard->GetController()))
	{
		if (!pCard->GetCardType().IsCreature()) return FALSE;
		if (!m_pAbility->GetCard()->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IgnoreHexproofOnCreatures)) return FALSE;
	}

	if (pCard->IsInplay() && pCard->GetCardType().IsCreature() && (m_pAbility->IsSpell()))
	{
		std::set<const CCardFilter*> cardFilters;
		if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CreaturesCantBeTargetedBySpells, cardFilters))
		{
			for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
				if ((*i)->IsCardIncluded(pCard))
					return FALSE;
		}
	}

	if (pCard->IsInGraveyard() && pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GraveShroud, FALSE))
		return FALSE;

	return TRUE;
}

BOOL CTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	AbilityType abilityType = m_pAbility->GetAbilityType();

	const CPlayerEffect_& playerEffect = pPlayer->GetPlayerEffect();
	if (m_pAbility->IsSpell())
	{
		if (playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedBySpells))
			return FALSE;

		if ( m_pAbility->GetController() != pPlayer && playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedByOpponentsSpells))
               return FALSE;
	}	

	else
	// To support Ravenous rats: all ability types which are not Sorcery and Instant are categorized as 'abilities' here
	//if ((abilityType & AbilityType::Activated) == AbilityType::Activated)
	{
		if (playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities))
			return FALSE;

		if ( m_pAbility->GetController() != pPlayer && playerEffect.HasPlayerEffect(PlayerEffectType::CantBeTargetedByOpponentsAbilities))
               return FALSE;
	}

	std::set<const CCardFilter*> cardFilters;
	if (playerEffect.HasPlayerEffect(PlayerEffectType::Protection, cardFilters))
	{
		if (!cardFilters.size())
			return FALSE; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(m_pAbility->GetCard()))
				return FALSE;
	}

	return TRUE;
}

BOOL CTargeting::CanDeflectTargetToCard(const CTargetActionCommon* pAction, const CCard* pCard) const 
{
	BOOL bTrick;
	return TargetAllowed(pCard, TRUE, bTrick);
}

BOOL CTargeting::CanDeflectTargetToPlayer(const CTargetActionCommon* pAction, const CPlayer* pPlayer) const 
{
	BOOL bTrick;
	return TargetAllowed(pPlayer, TRUE, bTrick);
}

void CTargeting::DeflectTargetToCard(CTargetActionCommon* pAction, CCard* pCard)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	ATLASSERT(targetGroup.GetSubjectCount() == 1);

	ContextValue value;

	if (targetGroup.GetCardSubjectCount())
	{
		value = targetGroup.GetValue(targetGroup.GetFirstCardSubject());
	}
	else
	{
		value = targetGroup.GetValue(targetGroup.GetFirstPlayerSubject());
	}

	targetGroup.RemoveAll();
	targetGroup.AddSubject(pCard);
	targetGroup.SetValue(pCard, value);
}

void CTargeting::DeflectTargetToPlayer(CTargetActionCommon* pAction, CPlayer* pPlayer)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	ATLASSERT(targetGroup.GetSubjectCount() == 1);

	ContextValue value;
	
	if (targetGroup.GetCardSubjectCount())
	{
		value = targetGroup.GetValue(targetGroup.GetFirstCardSubject());
	}
	else
	{
		value = targetGroup.GetValue(targetGroup.GetFirstPlayerSubject());
	}

	targetGroup.RemoveAll();
	targetGroup.AddSubject(pPlayer);
	targetGroup.SetValue(pPlayer, value);
}
