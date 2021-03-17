#include "stdafx.h"
#include "CardTorment.h"

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

		DEFINE_CARD(CAccelerateCard);
		DEFINE_CARD(CAcornHarvestCard);
		DEFINE_CARD(CAngelOfRetributionCard);
		DEFINE_CARD(CAnuridScavengerCard);
		DEFINE_CARD(CAquamoebaCard);
		DEFINE_CARD(CArrogantWurmCard);
		DEFINE_CARD(CAvenTrooperCard);
		DEFINE_CARD(CBalshanCollaboratorCard);
		DEFINE_CARD(CBalthorTheStoutCard);
		DEFINE_CARD(CBarbarianOutcastCard);
		DEFINE_CARD(CBaskingRootwallaCard);
		DEFINE_CARD(CBoneshardSlasherCard);
		DEFINE_CARD(CBreakthroughCard);
		DEFINE_CARD(CCabalCoffersCard);
		DEFINE_CARD(CCabalRitualCard);
		DEFINE_CARD(CCabalSurgeonCard);
		DEFINE_CARD(CCabalTorturerCard);
		DEFINE_CARD(CCentaurChieftainCard);
		DEFINE_CARD(CCentaurVeteranCard);
		DEFINE_CARD(CCephalidAristocratCard);
		DEFINE_CARD(CCephalidIllusionistCard);
		DEFINE_CARD(CCephalidSageCard);
		DEFINE_CARD(CCephalidSnitchCard);
		DEFINE_CARD(CChainerDementiaMasterCard);
		DEFINE_CARD(CChainersEdictCard);
		DEFINE_CARD(CChurningEddyCard);
		DEFINE_CARD(CCircularLogicCard);
		DEFINE_CARD(CCompulsionCard);
		DEFINE_CARD(CCracklingClubCard);
		DEFINE_CARD(CCrazedFirecatCard);
		DEFINE_CARD(CCripplingFatigueCard);
		DEFINE_CARD(CDawnOfTheDeadCard);
		DEFINE_CARD(CDeepAnalysisCard);
		DEFINE_CARD(CDwellOnThePastCard);
		DEFINE_CARD(CEnslavedDwarfCard);
		DEFINE_CARD(CFacelessButcherCard);
		DEFINE_CARD(CFalseMemoriesCard);
		DEFINE_CARD(CFarWanderingsCard);
		DEFINE_CARD(CFieryTemperCard);
		DEFINE_CARD(CFlashOfDefianceCard);
		DEFINE_CARD(CFranticPurificationCard);
		DEFINE_CARD(CGhostlyWingsCard);
		DEFINE_CARD(CGloomdrifterCard);
		DEFINE_CARD(CGravegougerCard);
		DEFINE_CARD(CGrotesqueHybridCard);
		DEFINE_CARD(CGurzigostCard);
		DEFINE_CARD(CHypnoxCard);
		DEFINE_CARD(CHypochondriaCard);
		DEFINE_CARD(CIchoridCard);
		DEFINE_CARD(CInsidiousDreamsCard);
		DEFINE_CARD(CInvigoratingFallsCard);
		DEFINE_CARD(CKamahlsSledgeCard);
		DEFINE_CARD(CKrosanConstrictorCard);
		DEFINE_CARD(CKrosanRestorerCard);
		DEFINE_CARD(CLaquatussChampionCard);
		DEFINE_CARD(CLlawanCephalidEmpressCard);
		DEFINE_CARD(CLonghornFirebeastCard);
		DEFINE_CARD(CMajorTerohCard);
		DEFINE_CARD(CMesmericFiendCard);
		DEFINE_CARD(CMilitantMonkCard);
		DEFINE_CARD(CMorningtideCard);
		DEFINE_CARD(CMortiphobiaCard);
		DEFINE_CARD(CMysticFamiliarCard);
		DEFINE_CARD(CNantukoCalmerCard);
		DEFINE_CARD(CNantukoCultivatorCard);
		DEFINE_CARD(CNarcissismCard);
		DEFINE_CARD(CObsessiveSearchCard);
		DEFINE_CARD(COrganGrinderCard);
		DEFINE_CARD(CPardicArsonistCard);
		DEFINE_CARD(CPardicCollaboratorCard);
		DEFINE_CARD(CPetradonCard);
		DEFINE_CARD(CPetravarkCard);
		DEFINE_CARD(CPitchstoneWallCard);
		DEFINE_CARD(CPossessedAvenCard);
		DEFINE_CARD(CPossessedBarbarianCard);
		DEFINE_CARD(CPossessedCentaurCard);
		DEFINE_CARD(CPossessedNomadCard);
		DEFINE_CARD(CPsychoticHazeCard);
		DEFINE_CARD(CPutridImpCard);
		DEFINE_CARD(CRancidEarthCard);
		DEFINE_CARD(CRetracedImageCard);
		DEFINE_CARD(CSetonsScoutCard);
		DEFINE_CARD(CShadesFormCard);
		DEFINE_CARD(CSickeningDreamsCard);
		DEFINE_CARD(CSkullscorchCard);
		DEFINE_CARD(CSkywingAvenCard);
		DEFINE_CARD(CSlitheryStalkerCard);
		DEFINE_CARD(CSternJudgeCard);
		DEFINE_CARD(CStrengthOfIsolationCard);
		DEFINE_CARD(CStrengthOfLunacyCard);
		DEFINE_CARD(CTaintedFieldCard);
		DEFINE_CARD(CTaintedIsleCard);
		DEFINE_CARD(CTaintedPeakCard);
		DEFINE_CARD(CTaintedWoodCard);
		DEFINE_CARD(CTerohsFaithfulCard);
		DEFINE_CARD(CTerohsVanguardCard);
		DEFINE_CARD(CUnhingeCard);
		DEFINE_CARD(CViolentEruptionCard);
		DEFINE_CARD(CWasteAwayCard);
		DEFINE_CARD(CZombieTrailblazerCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAngelOfRetributionCard::CAngelOfRetributionCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Retribution"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("6") WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CAnuridScavengerCard::CAnuridScavengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anurid Scavenger"), CardType::Creature, CREATURE_TYPE2(Frog, Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, FALSE);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));
	 
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCephalidSnitchCard::CCephalidSnitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Snitch"), CardType::Creature, CREATURE_TYPE2(Cephalid, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Creature, false)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::ProtectionFromBlack);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSternJudgeCard::CSternJudgeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stern Judge"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeBySurveySpell>> cpAbility( // All players loses life equal a number of xxx permanents that him/her controls
		::CreateObject<CActivatedAbility<CGlobalChgLifeBySurveySpell>>(this, 
			_T(""),
			new CardTypeComparer(CardType::Swamp, false),//Affect only swamps
			PreventableType::NotPreventable)); // reference to the loss of life

	cpAbility->AddTapCost();
	cpAbility->SetMultiplier(-1); //the player loses how many lifepoints in play (1x,2x,nx)?

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepAnalysisCard::CDeepAnalysisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deep Analysis"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT, 2));

		cpSpell->AddPayLifeDeltaCost(Life(-3));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAcornHarvestCard::CAcornHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Acorn Harvest"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Squirrel"), TOKEN_ID_BY_NAME,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				_T("Squirrel"), TOKEN_ID_BY_NAME,
				2));

		cpSpell->AddPayLifeDeltaCost(Life(-3));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CChainersEdictCard::CChainersEdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chainer's Edict"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
				_T("1") BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures"))));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCripplingFatigueCard::CCripplingFatigueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crippling Fatigue"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this,AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this,AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->AddPayLifeDeltaCost(Life(-3));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenTrooperCard::CAvenTrooperCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Aven Trooper"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1),
		_T("2") WHITE_MANA_TEXT, Power(+1), Life(+2))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CBalshanCollaboratorCard::CBalshanCollaboratorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Balshan Collaborator"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CBalthorTheStoutCard::CBalthorTheStoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balthor the Stout"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dwarf, Barbarian), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Barbarian), false));	// Barbarians
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Barbarian), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarbarianOutcastCard::CBarbarianOutcastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian Outcast"), CardType::Creature, CREATURE_TYPE3(Human, Barbarian, Beast), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//Sacrifice this card if the controller doesn't control a Swamp
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Swamps")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBarbarianOutcastCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CBarbarianOutcastCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBarbarianOutcastCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			return false;
	}

	return true;
}

bool CBarbarianOutcastCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CCentaurVeteranCard::CCentaurVeteranCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Centaur Veteran"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(3),
		GREEN_MANA_TEXT)
{
	m_pRegenerationAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CEnslavedDwarfCard::CEnslavedDwarfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enslaved Dwarf"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGrotesqueHybridCard::CGrotesqueHybridCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grotesque Hybrid"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrotesqueHybridCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrotesqueHybridCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CKrosanConstrictorCard::CKrosanConstrictorCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Krosan Constrictor"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Black | CardType::Creature, true)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CLlawanCephalidEmpressCard::CLlawanCephalidEmpressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llawan, Cephalid Empress"), CardType::_LegendaryCreature, CREATURE_TYPE(Cephalid), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)CCardFilter::GetFilter(_T("blue creatures"))));

		cpAbility->SetAffectOpponentsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMajorTerohCard::CMajorTerohCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Major Teroh"), CardType::_LegendaryCreature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, 
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			ZoneId::Exile, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMilitantMonkCard::CMilitantMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Militant Monk"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CPardicCollaboratorCard::CPardicCollaboratorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pardic Collaborator"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSkywingAvenCard::CSkywingAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skywing Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTerohsFaithfulCard::CTerohsFaithfulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teroh's Faithful"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZombieTrailblazerCard::CZombieTrailblazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Trailblazer"), CardType::Creature, CREATURE_TYPE2(Zombie, Scout), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Swampwalk, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCabalCoffersCard::CCabalCoffersCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cabal Coffers"), nID)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

	cpAbility->GetCost().AddManaCost(_T("2"));
	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {B} to your mana pool for each Swamp you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCabalCoffersCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCabalCoffersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CTaintedFieldCard::CTaintedFieldCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tainted Field"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedFieldCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedFieldCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CTaintedFieldCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CTaintedIsleCard::CTaintedIsleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tainted Isle"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedIsleCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedIsleCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CTaintedIsleCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CTaintedPeakCard::CTaintedPeakCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tainted Peak"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedPeakCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedPeakCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CTaintedPeakCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CTaintedWoodCard::CTaintedWoodCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tainted Wood"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedWoodCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTaintedWoodCard::CanPlay)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CTaintedWoodCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CCompulsionCard::CCompulsionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Compulsion"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT, 1));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCracklingClubCard::CCracklingClubCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Crackling Club"), nID,
		RED_MANA_TEXT,
		Power(+1), Life(+0))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHypochondriaCard::CHypochondriaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hypochondria"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(3), SourceColor::Null));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(3), SourceColor::Null));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CMortiphobiaCard::CMortiphobiaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mortiphobia"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CNarcissismCard::CNarcissismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Narcissism"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CAccelerateCard::CAccelerateCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Accelerate"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CWasteAwayCard::CWasteAwayCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Waste Away"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") BLACK_MANA_TEXT,
		Power(-5), Life(-5),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	m_pTargetChgPwrTghAttrSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
CFlashOfDefianceCard::CFlashOfDefianceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flash of Defiance"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Flash of Defiance Effect"), 2915, 1, FALSE, ZoneId::_Effects));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Flash of Defiance Effect"), 2915, 1, FALSE, ZoneId::_Effects));

		cpSpell->AddPayLifeDeltaCost(Life(-3));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorningtideCard::CMorningtideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morningtide"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Exile, TRUE, MoveType::Others, ZoneId::Graveyard));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnhingeCard::CUnhingeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unhinge"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNantukoCalmerCard::CNantukoCalmerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nantuko Calmer"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPutridImpCard::CPutridImpCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Putrid Imp"), CardType::Creature, CREATURE_TYPE2(Zombie, Imp), nID,
		BLACK_MANA_TEXT, Power(1), Life(1), 
		_T(""), Power(+0), Life(+0), CreatureKeyword::Flying)		
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSetonsScoutCard::CSetonsScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seton's Scout"), CardType::Creature, CREATURE_TYPE4(Centaur, Druid, Scout, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMysticFamiliarCard::CMysticFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mystic Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))		
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCabalTorturerCard::CCabalTorturerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Torturer"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCabalTorturerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCabalTorturerCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CCentaurChieftainCard::CCentaurChieftainCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Centaur Chieftain"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCentaurChieftainCard::SetTriggerContext1));
//	cpAbility->SetSkipStack(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCentaurChieftainCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CTerohsVanguardCard::CTerohsVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teroh's Vanguard"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

//		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
//		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTerohsVanguardCard::SetTriggerContext1));
//		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTerohsVanguardCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CGloomdrifterCard::CGloomdrifterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gloomdrifter"), CardType::Creature, CREATURE_TYPE2(Zombie, Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-black creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	//cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
	//cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGloomdrifterCard::SetTriggerContext1));
//	cpAbility->SetSkipStack(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGloomdrifterCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CCephalidSageCard::CCephalidSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Sage"), CardType::Creature, CREATURE_TYPE(Cephalid), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCephalidSageCard::SetTriggerContext));

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3)));
	cpAbility->SetDiscardCount(2);

	AddAbility(cpAbility.GetPointer());
}

bool CCephalidSageCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() >= 7;
}

//____________________________________________________________________________
//
CPardicArsonistCard::CPardicArsonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pardic Arsonist"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPardicArsonistCard::SetTriggerContext1));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CPardicArsonistCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CCabalRitualCard::CCabalRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cabal Ritual"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCabalRitualCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CCabalRitualCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n;
	if (pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() >= 7)
		n = 5;
	else
		n = 3;

	CManaPoolModifier modifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(CManaPoolBase::Color::Black, n));
	modifier.ApplyTo(pAction->GetController());

	return true;
}

//_________________________________________________________________________________________________
//
CFacelessButcherCard::CFacelessButcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faceless Butcher"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFacelessButcherCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFacelessButcherCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFacelessButcherCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFacelessButcherCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFacelessButcherCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFacelessButcherCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFacelessButcherCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CFacelessButcherCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CFacelessButcherCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CFacelessButcherCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CFacelessButcherCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;
		
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);
	}
	
	return true;
}

void CFacelessButcherCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CPetravarkCard::CPetravarkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Petravark"), CardType::Creature, CREATURE_TYPE2(Nightmare, Beast), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CPetradonCard::CPetradonCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Petradon"), CardType::Creature, CREATURE_TYPE2(Nightmare, Beast), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(6),
		RED_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetSubjectCount(
			2, // minimum
			2, // maximum
			TRUE); // lower minimum when not enough cards
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); // only lands
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CCabalSurgeonCard::CCabalSurgeonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Surgeon"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidAristocratCard::CCephalidAristocratCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Aristocrat"), CardType::Creature, CREATURE_TYPE(Cephalid), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidIllusionistCard::CCephalidIllusionistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Illusionist"), CardType::Creature, CREATURE_TYPE2(Cephalid, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetRevealCount(3);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrosanRestorerCard::CKrosanRestorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Restorer"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::_Land, false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::_Land, false)));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetSubjectCount(0, 3);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKrosanRestorerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CKrosanRestorerCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
COrganGrinderCard::COrganGrinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Organ Grinder"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-3), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMesmericFiendCard::CMesmericFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mesmeric Fiend"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMesmericFiendCard::OnZoneChanged))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMesmericFiendCard::OnCardSelected))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMesmericFiendCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMesmericFiendCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMesmericFiendCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMesmericFiendCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMesmericFiendCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMesmericFiendCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CMesmericFiendCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CMesmericFiendCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.ApplyTo(pTarget);

		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Exile %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CMesmericFiendCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s exiles %s from %s's hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Discard, pSelectionPlayer);
			pExiled.AddCard(pCard, CardPlacement::Top);

			pModifier.ApplyTo(pCard);
				
			return;
		}
}

bool CMesmericFiendCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CMesmericFiendCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;
		
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Hand, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);
	}
	
	return true;
}

void CMesmericFiendCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CIchoridCard::CIchoridCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ichorid"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(1))
	, m_CardFilter(_T("another black creature card"), _T("other black creature cards"), new CardTypeComparer(CardType::Black | CardType::Creature, true))
{
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIchoridCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIchoridCard::BeforeResolution));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIchoridCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CIchoridCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CInvigoratingFallsCard::CInvigoratingFallsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Invigorating Falls"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			TRUE, TRUE));

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGravegougerCard::CGravegougerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravegouger"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetSubjectCount(1, 2);
		cpAbility->GetTargeting().SetSingleSourceZone(true);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlitheryStalkerCard::CSlitheryStalkerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Slithery Stalker"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDawnOfTheDeadCard::CDawnOfTheDeadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dawn of the Dead"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDawnOfTheDeadCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDawnOfTheDeadCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)target;

	if (target->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
			pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier1.GetModifier().SetOneTurnOnly(TRUE);

		CScheduledCardModifier pModifier2 = CScheduledCardModifier(GetGame(),
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
			TurnNumberDelta(-1),
			NodeId::EndStep, 
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToLater);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CFalseMemoriesCard::CFalseMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("False Memories"), CardType::Instant, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
	::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
		_T("1") BLUE_MANA_TEXT,
		7));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);
	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	CZoneModifier* pModifier = new CZoneModifier(GetGame(),
		ZoneId::Graveyard, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier->AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(7), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CScheduledPlayerModifier* pSModifier = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep,
		CScheduledPlayerModifier::Operation::ApplyToLater);
	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(pSModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CChurningEddyCard::CChurningEddyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Churning Eddy"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

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
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDwellOnThePastCard::CDwellOnThePastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dwell on the Past"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDwellOnThePastCard::OnResolutionCompleted))
{
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT));

			ATLASSERT(cpAbility);

			cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}

void CDwellOnThePastCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);
	CZone* pGraveyard = target->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;

	m_CardFilter_temp.SetComparer(new NegateCardComparer(new SpecificCardComparer(this)));	
	if (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())>0)

	{
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier2.AddSelection(MinimumValue(1), MaximumValue(4), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter_temp, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pmodifier2.ApplyTo(target);

		pLibrary->Shuffle(); 
	}
}

//____________________________________________________________________________
//
CKamahlsSledgeCard::CKamahlsSledgeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Kamahl's Sledge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-4),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKamahlsSledgeCard::BeforeResolution));
}

bool CKamahlsSledgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* Target = pAction->GetAssociatedCard()->GetController();
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	CLifeModifier pModifier = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (pSurvey->GetSize() >= 7) pModifier.ApplyTo(Target);
	return true;
}

//____________________________________________________________________________
//

CBreakthroughCard::CBreakthroughCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Breakthrough"), CardType::Sorcery, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBreakthroughCard::OnResolutionCompleted1))
{
	counted_ptr<CDrawCardBreakthroughSpell> cpSpell(
		::CreateObject<CDrawCardBreakthroughSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT, 4));

	cpSpell->GetCost().SetExtraManaCost();	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddSpell(cpSpell.GetPointer());
}
void CBreakthroughCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int n = GetLastCastingExtraValue();
	int hand = GetController()->GetZoneById(ZoneId::Hand)->GetSize();
	int discard = hand - n;
	if ((hand-n)<0) discard=0;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	
	pModifier.AddSelection(MinimumValue(discard), MaximumValue(discard), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CGhostlyWingsCard::CGhostlyWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ghostly Wings"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CGhostlyWingsCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CGhostlyWingsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(pCard,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAquamoebaCard::CAquamoebaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Aquamoeba"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3),
		_T(""), Power(+0), Life(+0), CreatureKeyword::SwitchedPT)
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CHypnoxCard::CHypnoxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hypnox"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("8") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(8), Life(8))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Hand, ZoneId::Stack));

		CCardFlagModifier* pModifier1 = new CCardFlagModifier;
		pModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier1);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CHypnoxCard::SetTriggerContext));
			
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);
		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);		

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CHypnoxCard::BeforeResolveSelection));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand); // to owner's Hand

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHypnoxCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());	

	if (pFromZone->GetPlayer() == pByPlayer &&
		pFromZone->GetZoneId() == ZoneId::Stack &&
		GetCardFlag()->HasAbilityFlag(0) == TRUE &&
		moveType == MoveType::Cast)
		return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));

	return false;
}

bool CHypnoxCard::BeforeResolveSelection(CHypnoxCard::TriggeredAbility1::TriggeredActionType* pAction)
{
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	return (!opponent->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantBeTargetedByAbilities, 1));
}

//____________________________________________________________________________
//
CFieryTemperCard::CFieryTemperCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fiery Temper"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFieryTemperCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CFieryTemperCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CBaskingRootwallaCard::CBaskingRootwallaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Basking Rootwalla"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		_T("1") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	GetCardKeyword()->AddMadness(FALSE);
	m_pPumpAbility->SetMaxTurnUsageCount(1);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				_T(""),
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBaskingRootwallaCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CBaskingRootwallaCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CArrogantWurmCard::CArrogantWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arrogant Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT,
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CArrogantWurmCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CArrogantWurmCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CFranticPurificationCard::CFranticPurificationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Frantic Purification"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{	
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFranticPurificationCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CFranticPurificationCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CViolentEruptionCard::CViolentEruptionCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Violent Eruption"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-4),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-4), PreventableType::Preventable));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);
		cpSpell->GetTargeting()->SetDistributeValues();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CViolentEruptionCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CViolentEruptionCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}
//____________________________________________________________________________
//
CObsessiveSearchCard::CObsessiveSearchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Obsessive Search"), CardType::Instant, nID)
{
	GetCardKeyword()->AddMadness(FALSE);
	{
		//Regular mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT, 1));
		
		AddSpell(cpSpell.GetPointer());
	}
	
	{ //Madness
			counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT, 1));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CObsessiveSearchCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CObsessiveSearchCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CPsychoticHazeCard::CPsychoticHazeCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Psychotic Haze"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Life(-1),	// life delta
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	GetCardKeyword()->AddMadness(FALSE);
		
	{ //Madness ability
			counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT, Life(-1),	// life delta
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPsychoticHazeCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CPsychoticHazeCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CStrengthOfIsolationCard::CStrengthOfIsolationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Strength of Isolation"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2))
{
	GetCardKeyword()->AddMadness(FALSE);

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		
	{ //Madness ability
			counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CChgPwrTghAttrEnchant>(this,
				_T("") WHITE_MANA_TEXT, 
				Power(+0), Life(+0),//If I put here other P/T value, it adds to the original one.
				CreatureKeyword::Null));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStrengthOfIsolationCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CStrengthOfIsolationCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CStrengthOfLunacyCard::CStrengthOfLunacyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Strength of Lunacy"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(+2), Life(+1))
{
	GetCardKeyword()->AddMadness(FALSE);

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
	
	{ //Madness ability
			counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CChgPwrTghAttrEnchant>(this,
				_T("") BLACK_MANA_TEXT, 
				Power(+0), Life(+0),//If I put here other P/T value, it adds to the original one.
				CreatureKeyword::Null));

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStrengthOfLunacyCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CStrengthOfLunacyCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CInsidiousDreamsCard::CInsidiousDreamsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Insidious Dreams"), CardType::Instant, nID)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Library,
			true, true, false));

	cpSpell->GetCost().AddDiscardCardCost(SpecialNumber::Any, &m_CardFilter);
	
	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(0));
	cpSpell->SetRevealCards(false);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInsidiousDreamsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CInsidiousDreamsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetDiscardCards()->GetSize();

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;
	Context.nValue2 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CSickeningDreamsCard::CSickeningDreamsCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Sickening Dreams"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT,
		Life(-0),
		new AnyCreatureComparer,
		true,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	m_pGlobalChgLifeSpell->GetCost().AddDiscardCardCost(SpecialNumber::Any, &m_CardFilter);

	m_pGlobalChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSickeningDreamsCard::BeforeResolution));
}

bool CSickeningDreamsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetDiscardCards()->GetSize();

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CShadesFormCard::CShadesFormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shade's Form"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CShadesFormCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShadesFormCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShadesFormCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController());
	return true;
}

counted_ptr<CAbility> CShadesFormCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantedCard,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFarWanderingsCard::CFarWanderingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Far Wanderings"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield,
			false, true, true));
	
	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFarWanderingsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFarWanderingsCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() > 6)
	{
		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 0;
		Context.nValue2 = 3;

		pAction->SetValue(Context);
	}

	return true;
}

//____________________________________________________________________________
//
CChainerDementiaMasterCard::CChainerDementiaMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chainer, Dementia Master"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Minion), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Nightmare), false),
				Power(+1), Life(+1)));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->AddPayLifeDeltaCost(Life(-3));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChainerDementiaMasterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Nightmare), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChainerDementiaMasterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	pCreature->AddCardType(CardType::Black, CardType::_ColorMask, CardTypeEntry::Temporary);
	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Nightmare);
	pModifier->ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CBoneshardSlasherCard::CBoneshardSlasherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Boneshard Slasher"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBoneshardSlasherCard::CreateAdditionalAbility)));
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CBoneshardSlasherCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CPossessedAvenCard::CPossessedAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Possessed Aven"), CardType::Creature, CREATURE_TYPE3(Bird, Soldier, Horror), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new SpecificCardComparer(this),
				CardType::Black, CardType::_ColorMask));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPossessedAvenCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPossessedAvenCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CPossessedBarbarianCard::CPossessedBarbarianCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Possessed Barbarian"), CardType::Creature, CREATURE_TYPE3(Human, Barbarian, Horror), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new SpecificCardComparer(this),
				CardType::Black, CardType::_ColorMask));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPossessedBarbarianCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPossessedBarbarianCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red, false));
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CPossessedCentaurCard::CPossessedCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Possessed Centaur"), CardType::Creature, CREATURE_TYPE2(Centaur, Horror), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new SpecificCardComparer(this),
				CardType::Black, CardType::_ColorMask));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPossessedCentaurCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPossessedCentaurCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green, false));
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CPossessedNomadCard::CPossessedNomadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Possessed Nomad"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Horror), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new SpecificCardComparer(this),
				CardType::Black, CardType::_ColorMask));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPossessedNomadCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CPossessedNomadCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White, false));
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CRancidEarthCard::CRancidEarthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rancid Earth"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CRancidEarthCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

}

void CRancidEarthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pSurvey = pAbilityAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		CLifeModifier pPModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::SpellDamage | DamageType::NonCombatDamage);
		CZoneCreatureModifier pCModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
				std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));


		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			pCModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pPModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}
//____________________________________________________________________________
//
CCrazedFirecatCard::CCrazedFirecatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crazed Firecat"), CardType::Creature, CREATURE_TYPE2(Elemental, Cat), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCrazedFirecatCard::OnFlipSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCrazedFirecatCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCrazedFirecatCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	FlipCount = 0;
	FlipFunction(pController);
	return true;
}

void CCrazedFirecatCard::FlipFunction(CPlayer* pController)
{
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
		Flip = pController->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		if (FlipCount > 0)
		{
			CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), FlipCount);
			pModifier->ApplyTo(this);
		}
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		FlipCount++;
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
		FlipFunction(pController);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	return;
}

void CCrazedFirecatCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				FlipCount++;
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				FlipFunction(pSelectionPlayer);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s loses the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (FlipCount > 0)
				{
					CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), FlipCount);
					pModifier->ApplyTo(this);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CSkullscorchCard::CSkullscorchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skullscorch"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSkullscorchCard::OnPunisherSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkullscorchCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSkullscorchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pPlayer = pAction->GetAssociatedPlayer();
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 4 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
	return true;
}

void CSkullscorchCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CRandomDiscardModifier pModifier = CRandomDiscardModifier(2);
				
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s takes 6 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CLonghornFirebeastCard::CLonghornFirebeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Longhorn Firebeast"), CardType::Creature, CREATURE_TYPE3(Elemental, Ox, Beast), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLonghornFirebeastCard::OnPunisherSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLonghornFirebeastCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CLonghornFirebeastCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	PunisherFunction(pActivePlayerID);

	return true;
}

void CLonghornFirebeastCard::PunisherFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);

	if (pPlayer != GetController())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't take damage"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Take 5 damage"));

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
	}
	else
		Advance(PlayerID);
}

void CLonghornFirebeastCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer);
}

void CLonghornFirebeastCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s takes 5 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier1 = CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(this);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CNantukoCultivatorCard::CNantukoCultivatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nantuko Cultivator"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNantukoCultivatorCard::OnNumberSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNantukoCultivatorCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CNantukoCultivatorCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

	int nLands = temp.CountIncluded(pHand->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't discard anything"));

		entries.push_back(selectionEntry);
	}
	if (nLands > 0)
	{
		for (int i = 1; i <= nLands; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 1)
				entry.strText.Format(_T("Discard %d land card"),
					i);
			else
				entry.strText.Format(_T("Discard %d land cards"),
					i);

			entries.push_back(entry);
		}
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CNantukoCultivatorCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't discard anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			else
			{
				int nValue = it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s discards %d land card"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d land cards"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), nValue);
				CDrawCardModifier pModifier3 = CDrawCardModifier(GetGame(), MinimumValue(nValue), MaximumValue(nValue));

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(this);
				pModifier3.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CRetracedImageCard::CRetracedImageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Retraced Image"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRetracedImageCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRetracedImageCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRetracedImageCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CRetracedImageCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
			CCardFilter m_CardFilter;
			m_CardFilter.SetFilterName(_T("card with the same name"), _T("cards with the same name"));
			m_CardFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));

			if (pCard->GetCardType().IsPermanent())
			{
				bool bFound = false;

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					if (m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0)
					{
						bFound = true;
						break;
					}
				}

				if (bFound)
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier.ApplyTo(pCard);
				}
			}
				
			return;
		}
}

//____________________________________________________________________________
//
CCircularLogicCard::CCircularLogicCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Circular Logic"), CardType::Instant, nID)
{
	GetCardKeyword()->AddMadness(FALSE);

	{
		counted_ptr<CCircularLogicAbility> cpSpell(
		::CreateObject<CCircularLogicAbility>(this, _T("2") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CCircularLogicAbility> cpSpell(
			::CreateObject<CCircularLogicAbility>(this,
				BLUE_MANA_TEXT));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCircularLogicCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCircularLogicCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

CCircularLogicCard::CCircularLogicAbility::CCircularLogicAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CCircularLogicCard::CCircularLogicAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	int n = this->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize();

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, n);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CLaquatussChampionCard::CLaquatussChampionCard(CGame* pGame, UINT nID)
	:  CRegenerationCreatureCard(pGame, _T("Laquatus's Champion"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(3),
		BLACK_MANA_TEXT)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLaquatussChampionCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLaquatussChampionCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLaquatussChampionCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLaquatussChampionCard::BeforeResolution1(CAbilityAction* pAction)
{
	pAffected = pAction->GetAssociatedPlayer();

	CLifeModifier pModifier = CLifeModifier(Life(-6), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pAffected);

	return true;
}

bool CLaquatussChampionCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (pAffected)
	{
		CLifeModifier pModifier = CLifeModifier(Life(+6), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAffected);
	}

	return true;
}

void CLaquatussChampionCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pAffected = NULL;
	}
}

//____________________________________________________________________________
//
CGurzigostCard::CGurzigostCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gurzigost"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(8))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, FALSE);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));
	 
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::CanAssignCombatDamageToDefPlayer));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPitchstoneWallCard::CPitchstoneWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pitchstone Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(5))
	, m_UseSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPitchstoneWallCard::OnUseSelected))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPitchstoneWallCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPitchstoneWallCard::BeforeResolution));
		
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CPitchstoneWallCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											CPlayer* pPlayer1, CCard* pCard, CPlayer* pByPlayer) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	triggerContext.nValue2 = (int)pCard->IsInGraveyard();

	return true;
}

bool CPitchstoneWallCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	if (IsInplay() && pController == GetController())
	{
		TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

		CCard* pCard = (CCard*)triggerContext.nValue1;

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			if (pCard->IsInGraveyard() && triggerContext.nValue2)
				selectionEntry.strText.Format(_T("Sacrifice %s to return %s to your hand"), GetCardName(TRUE), pCard->GetCardName(true));
			else
				selectionEntry.strText.Format(_T("Sacrifice %s (but nothing will happen)"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Don't sacrifice %s"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_UseSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, triggerContext.nValue1, triggerContext.nValue2);

	}
	return true;
}

void CPitchstoneWallCard::OnUseSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;
				
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (dwContext2)
				{
					CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier1.ApplyTo(this);

					CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier2.ApplyTo(pCard);
				}

				return;
			}
			if (it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't sacrifice %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//