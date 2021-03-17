#include "stdafx.h"
#include "CardPortal.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		DEFINE_CARD(CAlabasterDragonCard);
		DEFINE_CARD(CAlluringScentCard);
		DEFINE_CARD(CArrogantVampireCard);
		DEFINE_CARD(CBeeStingCard);
		DEFINE_CARD(CBorderGuardCard);
		DEFINE_CARD(CBurningCloakCard);
		DEFINE_CARD(CCapriciousSorcererCard);
		DEFINE_CARD(CChargingBanditsCard);
		DEFINE_CARD(CChargingPaladinCard);
		DEFINE_CARD(CChargingRhinoCard);
		DEFINE_CARD(CCloakOfFeathersCard);
		DEFINE_CARD(CCloudDragonCard);
		DEFINE_CARD(CCloudPiratesCard);
		DEFINE_CARD(CCloudSpiritCard);
		DEFINE_CARD(CCravenGiantCard);
		DEFINE_CARD(CCravenKnightCard);
		DEFINE_CARD(CCruelBargainCard);
		DEFINE_CARD(CCruelFateCard);
		DEFINE_CARD(CCruelTutorCard);
		DEFINE_CARD(CDeepSeaSerpentCard);
		DEFINE_CARD(CDejaVuCard);
		DEFINE_CARD(CDesertDrakeCard);
		DEFINE_CARD(CDevastationCard);
		DEFINE_CARD(CDevotedHeroCard);
		DEFINE_CARD(CDjinnOfTheLampCard);
		DEFINE_CARD(CDreadChargeCard);
		DEFINE_CARD(CDreadReaperCard);
		DEFINE_CARD(CEbonDragonCard);
		DEFINE_CARD(CEliteCatWarriorCard);
		DEFINE_CARD(CEndlessCockroachesCard);
		DEFINE_CARD(CFalsePeaceCard);
		DEFINE_CARD(CFinalStrikeCard);
		DEFINE_CARD(CFireDragonCard);
		DEFINE_CARD(CFireImpCard);
		DEFINE_CARD(CFireSnakeCard);
		DEFINE_CARD(CFireTempestCard);
		DEFINE_CARD(CFleetFootedMonkCard);
		DEFINE_CARD(CFluxCard);
		DEFINE_CARD(CForkedLightningCard);
		DEFINE_CARD(CFruitionCard);
		DEFINE_CARD(CGoblinBullyCard);
		DEFINE_CARD(CGorillaWarriorCard);
		DEFINE_CARD(CHandOfDeathCard);
		DEFINE_CARD(CHighlandGiantCard);
		DEFINE_CARD(CHowlingFuryCard);
		DEFINE_CARD(CHulkingGoblinCard);
		DEFINE_CARD(CIngeniousThiefCard);
		DEFINE_CARD(CJungleLionCard);
		DEFINE_CARD(CKeenEyedArchersCard);
		DEFINE_CARD(CKingsAssassinCard);
		DEFINE_CARD(CLastChanceCard);
		DEFINE_CARD(CLavaFlowCard);
		DEFINE_CARD(CLizardWarriorCard);
		DEFINE_CARD(CMercenaryKnightCard);
		DEFINE_CARD(CMindKnivesCard);
		DEFINE_CARD(CMinotaurWarriorCard);
		DEFINE_CARD(CMobilizeCard);
		DEFINE_CARD(CMoonSpriteCard);
		DEFINE_CARD(CMuckRatsCard);
		DEFINE_CARD(CMysticDenialCard);
		DEFINE_CARD(CNaturesCloakCard);
		DEFINE_CARD(CNatureSRuinCard);
		DEFINE_CARD(CNoxiousToadCard);
		DEFINE_CARD(COmenCard);
		DEFINE_CARD(COwlFamiliarCard);
		DEFINE_CARD(CPathOfPeaceCard);
		DEFINE_CARD(CPersonalTutorCard);
		DEFINE_CARD(CPillagingHordeCard);
		DEFINE_CARD(CPlantElementalCard);
		DEFINE_CARD(CRagingCougarCard);
		DEFINE_CARD(CRagingMinotaurCard);
		DEFINE_CARD(CRainOfSaltCard);
		DEFINE_CARD(CRenewingDawnCard);
		DEFINE_CARD(CRowanTreefolkCard);
		DEFINE_CARD(CSacredKnightCard);
		DEFINE_CARD(CScorchingSpearCard);
		DEFINE_CARD(CSerpentAssassinCard);
		DEFINE_CARD(CSkeletalCrocodileCard);
		DEFINE_CARD(CSkeletalSnakeCard);
		DEFINE_CARD(CSorcerousSightCard);
		DEFINE_CARD(CSoulShredCard);
		DEFINE_CARD(CSpiritualGuardianCard);
		DEFINE_CARD(CSpottedGriffinCard);
		DEFINE_CARD(CStarlitAngelCard);
		DEFINE_CARD(CSteadfastnessCard);
		DEFINE_CARD(CSternMarshalCard);
		DEFINE_CARD(CSylvanTutorCard);
		DEFINE_CARD(CSymbolOfUnsummoningCard);
		DEFINE_CARD(CTheftOfDreamsCard);
		DEFINE_CARD(CThingFromTheDeepCard);
		DEFINE_CARD(CThunderingWurmCard);
		DEFINE_CARD(CTouchOfBrillianceCard);
		DEFINE_CARD(CUndyingBeastCard);
		DEFINE_CARD(CValorousChargeCard);
		DEFINE_CARD(CVampiricFeastCard);
		DEFINE_CARD(CVampiricTouchCard);
		DEFINE_CARD(CVirtuesRuinCard);
		DEFINE_CARD(CWallOfGraniteCard);
		DEFINE_CARD(CWarriorsChargeCard);
		DEFINE_CARD(CWhiptailWurmCard);
		DEFINE_CARD(CWickedPactCard);
		DEFINE_CARD(CWillowDryadCard);
		DEFINE_CARD(CWintersGraspCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAlluringScentCard::CAlluringScentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Alluring Scent"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Lure, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CArrogantVampireCard::CArrogantVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Arrogant Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CBeeStingCard::CBeeStingCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Bee Sting"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") GREEN_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CBorderGuardCard::CBorderGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Border Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CChargingBanditsCard::CChargingBanditsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charging Bandits"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloakOfFeathersCard::CCloakOfFeathersCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Cloak of Feathers"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CCloudDragonCard::CCloudDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Dragon"), CardType::Creature, CREATURE_TYPE2(Illusion, Dragon), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CCloudPiratesCard::CCloudPiratesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Pirates"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CCravenKnightCard::CCravenKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Craven Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CCruelBargainCard::CCruelBargainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cruel Bargain"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, 4));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(
		new CLifeModifier(Life(SpecialNumber::DivideBy2RoundUp), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCruelTutorCard::CCruelTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Cruel Tutor"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Library, TRUE, TRUE, FALSE) // on top of your library
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
	m_pSearchLibrarySpell->AddPayLifeDeltaCost(Life(-2));
}

//____________________________________________________________________________
//
CDeepSeaSerpentCard::CDeepSeaSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deep-Sea Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CDeepSeaSerpentCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CDeepSeaSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CDejaVuCard::CDejaVuCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Deja Vu"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Sorcery, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CDesertDrakeCard::CDesertDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Desert Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CDevastationCard::CDevastationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devastation"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::_Land, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDevotedHeroCard::CDevotedHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devoted Hero"), CardType::Creature, CREATURE_TYPE2(Elf, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CDjinnOfTheLampCard::CDjinnOfTheLampCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Djinn of the Lamp"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
}

//____________________________________________________________________________
//
CDreadChargeCard::CDreadChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dread Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(+0), Life(+0), CreatureKeyword::Unblockable));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("black creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDreadReaperCard::CDreadReaperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dread Reaper"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEbonDragonCard::CEbonDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ebon Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEliteCatWarriorCard::CEliteCatWarriorCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Elite Cat Warrior"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CEndlessCockroachesCard::CEndlessCockroachesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Endless Cockroaches"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireImpCard::CFireImpCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fire Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireSnakeCard::CFireSnakeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fire Snake"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireTempestCard::CFireTempestCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Fire Tempest"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-6),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CFleetFootedMonkCard::CFleetFootedMonkCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Fleet-Footed Monk"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		CCardFilter::GetFilter(_T("creatures with power less than 2"))) //can't be blocked except by "this"
{
}

//____________________________________________________________________________
//
CForkedLightningCard::CForkedLightningCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Forked Lightning"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-4),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(1, 3);
}

//____________________________________________________________________________
//
CGoblinBullyCard::CGoblinBullyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Bully"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CHandOfDeathCard::CHandOfDeathCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hand of Death"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CHighlandGiantCard::CHighlandGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Highland Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
}

//____________________________________________________________________________
//
CHowlingFuryCard::CHowlingFuryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Howling Fury"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		Power(+4), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CHulkingGoblinCard::CHulkingGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hulking Goblin"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CIngeniousThiefCard::CIngeniousThiefCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ingenious Thief"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIngeniousThiefCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CIngeniousThiefCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CJungleLionCard::CJungleLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jungle Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CKeenEyedArchersCard::CKeenEyedArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keen-Eyed Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CLastChanceCard::CLastChanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last Chance"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT,
			PlayerEffectType::TimeWalk, false, 1));

	cpSpell->SetAffectControllerOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CScheduledPlayerModifier(GetGame(),
			new CPlayerLostModifier,
			TurnNumberDelta(+1), NodeId::EndStep, 
			CScheduledPlayerModifier::Operation::ApplyToLater));
			//,CScheduledPlayerModifier::DeltaOption::ActivePlayerTurn));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLavaFlowCard::CLavaFlowCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Lava Flow"), CardType::Sorcery, nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CLizardWarriorCard::CLizardWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lizard Warrior"), CardType::Creature, CREATURE_TYPE2(Lizard, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CMercenaryKnightCard::CMercenaryKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mercenary Knight"), CardType::Creature, CREATURE_TYPE3(Human, Mercenary, Knight), nID,
		_T("2") BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindKnivesCard::CMindKnivesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Knives"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetAtRandom();

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMinotaurWarriorCard::CMinotaurWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minotaur Warrior"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CMobilizeCard::CMobilizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mobilize"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalUntapSpell> cpSpell(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMoonSpriteCard::CMoonSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moon Sprite"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMuckRatsCard::CMuckRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Muck Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMysticDenialCard::CMysticDenialCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mystic Denial"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::Sorcery, false))
{
}

//____________________________________________________________________________
//
CNaturesCloakCard::CNaturesCloakCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nature's Cloak"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Green | CardType::Creature, true),
			Power(+0), Life(+0), CreatureKeyword::Forestwalk));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNatureSRuinCard::CNatureSRuinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nature's Ruin"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNoxiousToadCard::CNoxiousToadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noxious Toad"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPersonalTutorCard::CPersonalTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Personal Tutor"), CardType::Sorcery, nID,
		BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("sorcery cards")),
		ZoneId::Library, TRUE, TRUE, FALSE) // on top of your library
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CPillagingHordeCard::CPillagingHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pillaging Horde"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlantElementalCard::CPlantElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plant Elemental"), CardType::Creature, CREATURE_TYPE2(Plant, Elemental), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRagingCougarCard::CRagingCougarCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Raging Cougar"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CRagingMinotaurCard::CRagingMinotaurCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Raging Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Berserker), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CRenewingDawnCard::CRenewingDawnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Renewing Dawn"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell2> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell2>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			CCardFilter::GetFilter(_T("Mountains")),
			2));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRowanTreefolkCard::CRowanTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rowan Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(4))
{
}

//____________________________________________________________________________
//
CSacredKnightCard::CSacredKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sacred Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, // Unblockable unless...
		CCardFilter::GetFilter(_T("non-black cards"))); // blocking creature is non-black

	GetCreatureKeyword()->AddUnblockable(FALSE, // Unblockable unless...
		CCardFilter::GetFilter(_T("non-red cards"))); // blocking creature is non-red
}

//____________________________________________________________________________
//
CScorchingSpearCard::CScorchingSpearCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scorching Spear"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSerpentAssassinCard::CSerpentAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serpent Assassin"), CardType::Creature, CREATURE_TYPE2(Snake, Assassin), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkeletalCrocodileCard::CSkeletalCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skeletal Crocodile"), CardType::Creature, CREATURE_TYPE2(Crocodile, Skeleton), nID,
		_T("3") BLACK_MANA_TEXT, Power(5), Life(1))
{
}

//____________________________________________________________________________
//
CSkeletalSnakeCard::CSkeletalSnakeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skeletal Snake"), CardType::Creature, CREATURE_TYPE2(Snake, Skeleton), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CSorcerousSightCard::CSorcerousSightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sorcerous Sight"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT, 
			0, MoveType::Others, ZoneId::Null, FALSE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSoulShredCard::CSoulShredCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Soul Shred"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CSpiritualGuardianCard::CSpiritualGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiritual Guardian"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpottedGriffinCard::CSpottedGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spotted Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CStarlitAngelCard::CStarlitAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Starlit Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
}

//____________________________________________________________________________
//
CSteadfastnessCard::CSteadfastnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Steadfastness"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+3)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSylvanTutorCard::CSylvanTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Sylvan Tutor"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Library, TRUE, TRUE, FALSE) // on top of your library
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CSymbolOfUnsummoningCard::CSymbolOfUnsummoningCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Symbol of Unsummoning"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CThingFromTheDeepCard::CThingFromTheDeepCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thing from the Deep"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(9), Life(9))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThunderingWurmCard::CThunderingWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thundering Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("2") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTouchOfBrillianceCard::CTouchOfBrillianceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Touch of Brilliance"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUndyingBeastCard::CUndyingBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undying Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CValorousChargeCard::CValorousChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Valorous Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(+2), Life(+0)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVampiricFeastCard::CVampiricFeastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Vampiric Feast"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
}

//____________________________________________________________________________
//
CVampiricTouchCard::CVampiricTouchCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Vampiric Touch"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
}

//____________________________________________________________________________
//
CVirtuesRuinCard::CVirtuesRuinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Virtue's Ruin"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWallOfGraniteCard::CWallOfGraniteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Granite"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWarriorsChargeCard::CWarriorsChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Warrior's Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWhiptailWurmCard::CWhiptailWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whiptail Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT, Power(8), Life(5))
{
}

//____________________________________________________________________________
//
CWickedPactCard::CWickedPactCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wicked Pact"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
	new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable;
}

//____________________________________________________________________________
//
CWillowDryadCard::CWillowDryadCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Willow Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CAlabasterDragonCard::CAlabasterDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Alabaster Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChargingPaladinCard::CChargingPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charging Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChargingRhinoCard::CChargingRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charging Rhino"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CCloudSpiritCard::CCloudSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CCravenGiantCard::CCravenGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Craven Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CGorillaWarriorCard::CGorillaWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorilla Warrior"), CardType::Creature, CREATURE_TYPE2(Ape, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CPathOfPeaceCard::CPathOfPeaceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Path of Peace"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CRainOfSaltCard::CRainOfSaltCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rain of Salt"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CTheftOfDreamsCard::CTheftOfDreamsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Theft of Dreams"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Battlefield, FALSE, TRUE));

	cpSpell->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer);
	cpSpell->GetSurveyCardFilter().AddComparer(new TappedComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWintersGraspCard::CWintersGraspCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Winter's Grasp"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		 new CardTypeComparer(CardType::_Land, false),
		 ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CCapriciousSorcererCard::CCapriciousSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Capricious Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCapriciousSorcererCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());    
}

BOOL CCapriciousSorcererCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CKingsAssassinCard::CKingsAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("King's Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CKingsAssassinCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CKingsAssassinCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CSternMarshalCard::CSternMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stern Marshal"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CSternMarshalCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

BOOL CSternMarshalCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
COwlFamiliarCard::COwlFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Owl Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireDragonCard::CFireDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fire Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))

	, m_CardFilter(_T("a Mountain"), _T("Mountains"), new CardTypeComparer(CardType::Mountain, false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CFireDragonCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFireDragonCard::BeforeResolution(CFireDragonCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(
		-m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CBurningCloakCard::CBurningCloakCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Burning Cloak"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		Power(+2), Life(-2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CCruelFateCard::CCruelFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cruel Fate"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT,
			5));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->SetSelectionOptions(MaximumValue(1), ZoneId::Graveyard, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")), MinimumValue(1));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);	

	cpSpell->SetRevealCardsToOthers(TRUE);	

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFinalStrikeCard::CFinalStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Final Strike"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell2> cpSpell(
		::CreateObject<CTargetChgLifeSpell2>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			CCardFilter::GetFilter(_T("creatures")),
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFruitionCard::CFruitionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fruition"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT, 
			TRUE, //Opponent Zones
			TRUE)); //Controller Zones

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("Forests")), ZoneId::Battlefield);
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COmenCard::COmenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Omen"), CardType::Sorcery, nID)

	, m_CardFilter(_T("a token"), _T("tokens"), new CardTypeComparer(CardType::Token, false))
{
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,	3));

		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//__________________________________________________________________________
//
CFalsePeaceCard::CFalsePeaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("False Peace"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CFalsePeaceCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);	
	AddSpell(cpSpell.GetPointer());
}

void CFalsePeaceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CScheduledPlayerModifier pModifier = CScheduledPlayerModifier (
		GetGame(), new CPlayerEffectModifier(PlayerEffectType::SkipAllCombatPhases),
		TurnNumberDelta(0), NodeId::BeginningStep, CScheduledPlayerModifier::Operation::ApplyToLater,
		CScheduledPlayerModifier::DeltaOption::CustomPlayerTurn, target);
	if (bResult) pModifier.ApplyTo(target);
}
//____________________________________________________________________________
//
CFluxCard::CFluxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flux"), CardType::Sorcery, nID)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CFluxCard::OnSelectionDone))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFluxCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFluxCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	SelectionFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CFluxCard::SelectionFunction(int PlayerID, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pPlayer->GetZoneById(ZoneId::Hand)->GetSize(); ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i;
		if (i == 0)
			selectionEntry.strText.Format(_T("Don't discard cards"));
		else if (i == 1)
			selectionEntry.strText.Format(_T("Discard 1 card"));
		else
			selectionEntry.strText.Format(_T("Discard %d cards"), i);

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
}

void CFluxCard::Advance(int PlayerID, CPlayer* pController)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		SelectionFunction(NextPlayer, pController);
	else
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
		pModifier.ApplyTo(pController);
	}
}

void CFluxCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nDiscard = (int)it->dwContext;

			if (nDiscard > 0)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nDiscard), MaximumValue(nDiscard), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(nDiscard), MaximumValue(nDiscard));

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);
			}
			Advance(dwContext1, (CPlayer*)dwContext2);
				
			return;
		}
}
//____________________________________________________________________________
//

