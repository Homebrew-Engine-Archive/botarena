#include "stdafx.h"
#include "CardEffects.h"

#define new DEBUG_NEW

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		// For example:
		// 	DEFINE_CARD(CDefenderEnVecCard);

		DEFINE_TOKEN(CGruulCharmEffectToken);
		DEFINE_TOKEN(CVizkopaGuildmageEffectToken);
				
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here

void CEffectCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::_Effects)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//

CGruulCharmEffectToken::CGruulCharmEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Gruul Charm Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

// Used by Gruul Charm
}

//____________________________________________________________________________
//
CVizkopaGuildmageEffectToken::CVizkopaGuildmageEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Vizkopa Guildmage Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetThisIsInplayOnly(FALSE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVizkopaGuildmageEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVizkopaGuildmageEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CVizkopaGuildmageEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife)
	{
		triggerContext.nValue1 = GET_INTEGER(nFromLife - nToLife);
		return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
	}

	return false;
}

bool CVizkopaGuildmageEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	Life nLifeLoss = (Life)triggerContext.nValue1;

	CLifeModifier pModifier(Life(nLifeLoss), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
			pModifier.ApplyTo(pPlayer);
	}
	
	return true;
}

//____________________________________________________________________________
//
