#include "stdafx.h"
#include "CardPortalSecondAge.h"

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

		DEFINE_CARD(CAbyssalNightstalkerCard);
		DEFINE_CARD(CAlabornCavalierCard);
		DEFINE_CARD(CAlabornGrenadierCard);
		DEFINE_CARD(CAlabornMusketeerCard);
		DEFINE_CARD(CAlabornTrooperCard);
		DEFINE_CARD(CAlabornVeteranCard);
		DEFINE_CARD(CAlabornZealotCard);
		DEFINE_CARD(CAncientCravingCard);
		DEFINE_CARD(CAngelOfFuryCard);
		DEFINE_CARD(CApprenticeSorcererCard);
		DEFINE_CARD(CArmoredGalleonCard);
		DEFINE_CARD(CArmoredGriffinCard);
		DEFINE_CARD(CBarbtoothWurmCard);
		DEFINE_CARD(CBargainCard);
		DEFINE_CARD(CBearCubCard);
		DEFINE_CARD(CBloodcurdlingScreamCard);
		DEFINE_CARD(CBrimstoneDragonCard);
		DEFINE_CARD(CBrutalNightstalkerCard);
		DEFINE_CARD(CChorusOfWoeCard);
		DEFINE_CARD(CCoastalWizardCard);
		DEFINE_CARD(CDakmorBatCard);
		DEFINE_CARD(CDakmorPlagueCard);
		DEFINE_CARD(CDakmorScorpionCard);
		DEFINE_CARD(CDakmorSorceressCard);
		DEFINE_CARD(CDarkOfferingCard);
		DEFINE_CARD(CDeathcoilWurmCard);
		DEFINE_CARD(CExtinguishCard);
		DEFINE_CARD(CEyeSpyCard);
		DEFINE_CARD(CFalseSummoningCard);
		DEFINE_CARD(CFestivalOfTrokinCard);
		DEFINE_CARD(CFoulSpiritCard);
		DEFINE_CARD(CGoblinCavaliersCard);
		DEFINE_CARD(CGoblinFirestarterCard);
		DEFINE_CARD(CGoblinGeneralCard);
		DEFINE_CARD(CGoblinWarStrikeCard);
		DEFINE_CARD(CGoldenBearCard);
		DEFINE_CARD(CHarmonyOfNatureCard);
		DEFINE_CARD(CIronhoofOxCard);
		DEFINE_CARD(CJaggedLightningCard);
		DEFINE_CARD(CKissOfDeathCard);
		DEFINE_CARD(CLurkingNightstalkerCard);
		DEFINE_CARD(CLynxCard);
		DEFINE_CARD(CMagmaGiantCard);
		DEFINE_CARD(CMoaningSpiritCard);
		DEFINE_CARD(CNightstalkerEngineCard);
		DEFINE_CARD(CNorwoodArchersCard);
		DEFINE_CARD(CNorwoodPriestessCard);
		DEFINE_CARD(CNorwoodRidersCard);
		DEFINE_CARD(CNorwoodWarriorCard);
		DEFINE_CARD(CObsidianGiantCard);
		DEFINE_CARD(COgreArsonistCard);
		DEFINE_CARD(COgreBerserkerCard);
		DEFINE_CARD(COgreWarriorCard);
		DEFINE_CARD(CPlatedWurmCard);
		DEFINE_CARD(CPredatoryNightstalkerCard);
		DEFINE_CARD(CProwlingNightstalkerCard);
		DEFINE_CARD(CRaidingNightstalkerCard);
		DEFINE_CARD(CRainOfDaggersCard);
		DEFINE_CARD(CRazorclawBearCard);
		DEFINE_CARD(CRenewingTouchCard);
		DEFINE_CARD(CReturnOfTheNightstalkersCard);
		DEFINE_CARD(CRighteousChargeCard);
		DEFINE_CARD(CRighteousFuryCard);
		DEFINE_CARD(CSalvageCard);
		DEFINE_CARD(CScreechingDrakeCard);
		DEFINE_CARD(CSeaDrakeCard);
		DEFINE_CARD(CSteamCatapultCard);
		DEFINE_CARD(CSteamFrigateCard);
		DEFINE_CARD(CSylvanYetiCard);
		DEFINE_CARD(CTalasAirShipCard);
		DEFINE_CARD(CTalasExplorerCard);
		DEFINE_CARD(CTalasMerchantCard);
		DEFINE_CARD(CTalasResearcherCard);
		DEFINE_CARD(CTalasScoutCard);
		DEFINE_CARD(CTalasWarriorCard);
		DEFINE_CARD(CTempleAcolyteCard);
		DEFINE_CARD(CTempleElderCard);
		DEFINE_CARD(CTemporalManipulationCard);
		DEFINE_CARD(CTownSentryCard);
		DEFINE_CARD(CTrokinHighGuardCard);
		DEFINE_CARD(CVolunteerMilitiaCard);
		DEFINE_CARD(CWildOxCard);
		DEFINE_CARD(CWindSailCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAbyssalNightstalkerCard::CAbyssalNightstalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abyssal Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAbyssalNightstalkerCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CAbyssalNightstalkerCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CAlabornCavalierCard::CAlabornCavalierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Cavalier"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlabornGrenadierCard::CAlabornGrenadierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Grenadier"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CAlabornMusketeerCard::CAlabornMusketeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Musketeer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CAlabornTrooperCard::CAlabornTrooperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Trooper"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CAlabornVeteranCard::CAlabornVeteranCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Veteran"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
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
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CAlabornVeteranCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

BOOL CAlabornVeteranCard::CanPlay(BOOL bIncludeTricks)
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
CAlabornZealotCard::CAlabornZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alaborn Zealot"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
	TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
		CWhenSelfAttackedBlocked::BlockEventCallback2,
		&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAlabornZealotCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	// Move this card too
	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddAbility(cpAbility.GetPointer());
}

bool CAlabornZealotCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CAncientCravingCard::CAncientCravingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancient Craving"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT, 
			3));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngelOfFuryCard::CAngelOfFuryCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Fury"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

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
CApprenticeSorcererCard::CApprenticeSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apprentice Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
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
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CApprenticeSorcererCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());    
}

BOOL CApprenticeSorcererCard::CanPlay(BOOL bIncludeTricks)
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
CArmoredGalleonCard::CArmoredGalleonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Galleon"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("4") BLUE_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CArmoredGalleonCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CArmoredGalleonCard::CanAttack(BOOL bIncludeTricks)
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
CArmoredGriffinCard::CArmoredGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Armored Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBarbtoothWurmCard::CBarbtoothWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbtooth Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CBargainCard::CBargainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bargain"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT, 1));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+7), this, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBearCubCard::CBearCubCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bear Cub"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CBloodcurdlingScreamCard::CBloodcurdlingScreamCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Bloodcurdling Scream"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1));
}

//____________________________________________________________________________
//
CBrimstoneDragonCard::CBrimstoneDragonCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Brimstone Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CBrutalNightstalkerCard::CBrutalNightstalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brutal Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
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
CChorusOfWoeCard::CChorusOfWoeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chorus of Woe"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+0)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDakmorBatCard::CDakmorBatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dakmor Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CDakmorPlagueCard::CDakmorPlagueCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Dakmor Plague"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CDakmorScorpionCard::CDakmorScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dakmor Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CDakmorSorceressCard::CDakmorSorceressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dakmor Sorceress"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("5") BLACK_MANA_TEXT, Power(0), Life(4))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarkOfferingCard::CDarkOfferingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dark Offering"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CDeathcoilWurmCard::CDeathcoilWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathcoil Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CExtinguishCard::CExtinguishCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Extinguish"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Sorcery, false))
{
}

//____________________________________________________________________________
//
CFalseSummoningCard::CFalseSummoningCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("False Summoning"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false))
{
}

//____________________________________________________________________________
//
CFestivalOfTrokinCard::CFestivalOfTrokinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Festival of Trokin"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFoulSpiritCard::CFoulSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Foul Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinCavaliersCard::CGoblinCavaliersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Cavaliers"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CGoblinFirestarterCard::CGoblinFirestarterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Firestarter"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

    cpAbility->AddSacrificeCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CGoblinFirestarterCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

    AddAbility(cpAbility.GetPointer());    
}

BOOL CGoblinFirestarterCard::CanPlay(BOOL bIncludeTricks)
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
CGoblinGeneralCard::CGoblinGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin General"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoldenBearCard::CGoldenBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golden Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CIronhoofOxCard::CIronhoofOxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ironhoof Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CKissOfDeathCard::CKissOfDeathCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Kiss of Death"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CLurkingNightstalkerCard::CLurkingNightstalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lurking Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
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
CLynxCard::CLynxCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Lynx"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CMoaningSpiritCard::CMoaningSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moaning Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CNightstalkerEngineCard::CNightstalkerEngineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightstalker Engine"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("4") BLACK_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNorwoodArchersCard::CNorwoodArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norwood Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CNorwoodRidersCard::CNorwoodRidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norwood Riders"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CNorwoodWarriorCard::CNorwoodWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norwood Warrior"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CObsidianGiantCard::CObsidianGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obsidian Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
COgreArsonistCard::COgreArsonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Arsonist"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COgreBerserkerCard::COgreBerserkerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ogre Berserker"), CardType::Creature, CREATURE_TYPE2(Ogre, Berserker), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
COgreWarriorCard::COgreWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Warrior"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CPlatedWurmCard::CPlatedWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plated Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CProwlingNightstalkerCard::CProwlingNightstalkerCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Prowling Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		CCardFilter::GetFilter(_T("black creatures")))
{
}

//____________________________________________________________________________
//
CRaidingNightstalkerCard::CRaidingNightstalkerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Raiding Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CRazorclawBearCard::CRazorclawBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razorclaw Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRenewingTouchCard::CRenewingTouchCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Renewing Touch"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)

	, m_CardFilter(_T("a token"), _T("tokens"), new CardTypeComparer(CardType::Token, false))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReturnOfTheNightstalkersCard::CReturnOfTheNightstalkersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Return of the Nightstalkers"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CReturnOfTheNightstalkersCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Nightstalker), false),
			ZoneId::Battlefield, FALSE,
			MoveType::Others, ZoneId::Graveyard));

	cpSpell->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CReturnOfTheNightstalkersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("Swamps")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier.ApplyTo(cont);
}

//____________________________________________________________________________
//
CRighteousChargeCard::CRighteousChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Righteous Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+2)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSalvageCard::CSalvageCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Salvage"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CSeaDrakeCard::CSeaDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sea Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetSubjectCount(
		2, // minimum
		2, // maximum
		TRUE); // lower minimum when not enough cards

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	//cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative); required action so setting this will cause computer to miss the selection

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteamFrigateCard::CSteamFrigateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steam Frigate"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CSteamFrigateCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CSteamFrigateCard::CanAttack(BOOL bIncludeTricks)
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
CSylvanYetiCard::CSylvanYetiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Yeti"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(4))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTalasAirShipCard::CTalasAirShipCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Talas Air Ship"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CTalasExplorerCard::CTalasExplorerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Talas Explorer"), CardType::Creature, CREATURE_TYPE3(Human, Pirate, Scout), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CTalasExplorerCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CTalasExplorerCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CTalasMerchantCard::CTalasMerchantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talas Merchant"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CTalasResearcherCard::CTalasResearcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talas Researcher"), CardType::Creature, CREATURE_TYPE3(Human, Pirate, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CTalasResearcherCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());    
}

BOOL CTalasResearcherCard::CanPlay(BOOL bIncludeTricks)
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
CTalasScoutCard::CTalasScoutCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Talas Scout"), CardType::Creature, CREATURE_TYPE3(Human, Pirate, Scout), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CTalasWarriorCard::CTalasWarriorCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Talas Warrior"), CardType::Creature, CREATURE_TYPE3(Human, Pirate, Warrior), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CTempleAcolyteCard::CTempleAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Temple Acolyte"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTemporalManipulationCard::CTemporalManipulationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Manipulation"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpSpell->SetAffectControllerOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTownSentryCard::CTownSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Town Sentry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrokinHighGuardCard::CTrokinHighGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trokin High Guard"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CVolunteerMilitiaCard::CVolunteerMilitiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Volunteer Militia"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CWildOxCard::CWildOxCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Wild Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CWindSailCard::CWindSailCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wind Sail"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(1, 2);
}

//____________________________________________________________________________
//
CPredatoryNightstalkerCard::CPredatoryNightstalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Predatory Nightstalker"), CardType::Creature, CREATURE_TYPE(Nightstalker), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPredatoryNightstalkerCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility < CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CPredatoryNightstalkerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CGoblinWarStrikeCard::CGoblinWarStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Goblin War Strike"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			ZoneId::Battlefield, TRUE,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
			PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJaggedLightningCard::CJaggedLightningCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Jagged Lightning"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CMagmaGiantCard::CMagmaGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magma Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagmaGiantCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMagmaGiantCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CNorwoodPriestessCard::CNorwoodPriestessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norwood Priestess"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			CCardFilter::GetFilter(_T("green creatures")),//new AnyCreatureComparer, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CNorwoodPriestessCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CNorwoodPriestessCard::CanPlay(BOOL bIncludeTricks)
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
CSteamCatapultCard::CSteamCatapultCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steam Catapult"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CSteamCatapultCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CSteamCatapultCard::CanPlay(BOOL bIncludeTricks)
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
CTempleElderCard::CTempleElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Temple Elder"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
   	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CTempleElderCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

    AddAbility(cpAbility.GetPointer());    
}

BOOL CTempleElderCard::CanPlay(BOOL bIncludeTricks)
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
CScreechingDrakeCard::CScreechingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Screeching Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
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
CEyeSpyCard::CEyeSpyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Eye Spy"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			1));

	cpSpell->SetSelectionOptions(MaximumValue(1), ZoneId::Graveyard, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")), MinimumValue(0));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);	

	cpSpell->SetRevealCardsToOthers(TRUE);	

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCoastalWizardCard::CCoastalWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coastal Wizard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCoastalWizardCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CCoastalWizardCard::CanPlay(BOOL bIncludeTricks)
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
CRainOfDaggersCard::CRainOfDaggersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rain of Daggers"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRainOfDaggersCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures"))));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
		cpSpell->AddCardModifier(pCardModifier);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRainOfDaggersCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

bool CRainOfDaggersCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;
	m_nCards = 0;
	CPlayer* target = pAction->GetAssociatedPlayer();
	pInplay = target->GetZoneById(ZoneId::Battlefield);
	m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	/*for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}
	*/
	return true;
}

void CRainOfDaggersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pInplay;
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	pInplay = target->GetZoneById(ZoneId::Battlefield);
	m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	/*for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}
	*/
	CLifeModifier* pModifier = new CLifeModifier(Life(-2 * m_nCards), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CRighteousFuryCard::CRighteousFuryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Righteous Fury"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRighteousFuryCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new TappedComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpSpell);

	cpSpell->GetGlobalCardFilter().AddComparer(new AnyCreatureComparer);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRighteousFuryCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CRighteousFuryCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;
	m_nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CRighteousFuryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pInplay;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	CLifeModifier* pModifier = new CLifeModifier(Life(2 * m_nCards), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CHarmonyOfNatureCard::CHarmonyOfNatureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harmony of Nature"), CardType::Sorcery, nID)
   , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHarmonyOfNatureCard::OnCreatureSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarmonyOfNatureCard::BeforeResolution));
	cpSpell->AddAbilityTag(AbilityTag::LifeGain);
	AddSpell(cpSpell.GetPointer());	
}

bool CHarmonyOfNatureCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new UntappedComparer);

	pCreatures.RemoveAll();
	pRemainingCreatures.RemoveAll();

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				pRemainingCreatures.AddCard(pCard, CardPlacement::Top);
			}
		}
		CreatureSelection(pController);
	}

	return true;
}

void CHarmonyOfNatureCard::CreatureSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop tapping creatures"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingCreatures.GetSize(); ++i)
	{
		CCard* pCard = pRemainingCreatures.GetAt(i);
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Tap %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}
	m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CHarmonyOfNatureCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops tapping creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pCreatures.GetSize() > 0)
					Finale(pSelectionPlayer);
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pCreatures.AddCard(pCard, CardPlacement::Top);
				pRemainingCreatures.RemoveCard(pCard);

				CreatureSelection(pSelectionPlayer);

				return;
			}
		}
}

void CHarmonyOfNatureCard::Finale(CPlayer* pPlayer)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	int nNumber = pCreatures.GetSize();

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pCreatures.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	
	CLifeModifier pModifier2 = CLifeModifier(Life(4*nNumber), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
