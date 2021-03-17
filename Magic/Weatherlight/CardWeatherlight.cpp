#include "stdafx.h"
#include "CardWeatherlight.h"

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

		DEFINE_CARD(CAbeyanceCard);
		DEFINE_CARD(CAbjureCard);
		DEFINE_CARD(CAborothCard);
		DEFINE_CARD(CAbyssalGatekeeperCard);
		DEFINE_CARD(CAncestralKnowledgeCard);
		DEFINE_CARD(CAngelicRenewalCard);
		DEFINE_CARD(CApathyCard);
		DEFINE_CARD(CArgivianFindCard);
		DEFINE_CARD(CArgivianRestorationCard);
		DEFINE_CARD(CArcticWolvesCard);
		DEFINE_CARD(CAvizoaCard);
		DEFINE_CARD(CBarishiCard);
		DEFINE_CARD(CBenalishMissionaryCard);
		DEFINE_CARD(CBetrothedOfFireCard);
		DEFINE_CARD(CBlossomingWreathCard);
		DEFINE_CARD(CBoilingBloodCard);
		DEFINE_CARD(CBriarShieldCard);
		DEFINE_CARD(CBubbleMatrixCard);
		DEFINE_CARD(CBuriedAliveCard);
		DEFINE_CARD(CChimericSphereCard);
		DEFINE_CARD(CCinderGiantCard);
		DEFINE_CARD(CCloudDjinnCard);
		DEFINE_CARD(CDingusStaffCard);
		DEFINE_CARD(CDisruptCard);
		DEFINE_CARD(CDowndraftCard);
		DEFINE_CARD(CDuskriderFalconCard);
		DEFINE_CARD(CDwarvenBerserkerCard);
		DEFINE_CARD(CDwarvenThaumaturgistCard);
		DEFINE_CARD(CEmpyrialArmorCard);
		DEFINE_CARD(CFallowWurmCard);
		DEFINE_CARD(CFesteringEvilCard);
		DEFINE_CARD(CFireWhipCard);
		DEFINE_CARD(CFledglingDjinnCard);
		DEFINE_CARD(CForiysianBrigadeCard);
		DEFINE_CARD(CFungusElementalCard);
		DEFINE_CARD(CGaeasBlessingCard);
		DEFINE_CARD(CGallowbraidCard);
		DEFINE_CARD(CGemstoneMineCard);
		DEFINE_CARD(CGoblinBombCard);
		DEFINE_CARD(CGuidedStrikeCard);
		DEFINE_CARD(CHarvestWurmCard);
		DEFINE_CARD(CHeatStrokeCard);
		DEFINE_CARD(CHauntingMiseryCard);
		DEFINE_CARD(CHurloonShamanCard);
		DEFINE_CARD(CInfernalTributeCard);
		DEFINE_CARD(CInnerSanctumCard);
		DEFINE_CARD(CJanglingAutomatonCard);
		DEFINE_CARD(CLavaStormCard);
		DEFINE_CARD(CLlanowarDruidCard);
		DEFINE_CARD(CLotusValeCard);
		DEFINE_CARD(CMantaRayCard);
		DEFINE_CARD(CMaraxusOfKeldCard);
		DEFINE_CARD(CMasterOfArmsCard);
		DEFINE_CARD(CMerfolkTradersCard);
		DEFINE_CARD(CMistmoonGriffinCard);
		DEFINE_CARD(CMorinfenCard);
		DEFINE_CARD(CMwonvuliOozeCard);
		DEFINE_CARD(CNobleBenefactorCard);
		DEFINE_CARD(CNullRodCard);
		DEFINE_CARD(COdylicWraithCard);
		DEFINE_CARD(COrcishSettlersCard);
		DEFINE_CARD(CParadigmShiftCard);
		DEFINE_CARD(CPeacekeeperCard);
		DEFINE_CARD(CPendrellMistsCard);
		DEFINE_CARD(CPhantomWingsCard);
		DEFINE_CARD(CPhyrexianFurnaceCard);
		DEFINE_CARD(CPsychicVortexCard);
		DEFINE_CARD(CRocHatchlingCard);
		DEFINE_CARD(CRogueElephantCard);
		DEFINE_CARD(CSawtoothOgreCard);
		DEFINE_CARD(CScorchedRuinsCard);
		DEFINE_CARD(CSerratedBiskelionCard);
		DEFINE_CARD(CShadowRiderCard);
		DEFINE_CARD(CShatteredCryptCard);
		DEFINE_CARD(CSoulShepherdCard);
		DEFINE_CARD(CStrawGolemCard);
		DEFINE_CARD(CStripedBearsCard);
		DEFINE_CARD(CSylvanHierophantCard);
		DEFINE_CARD(CTendrilsOfDespairCard);
		DEFINE_CARD(CThranForgeCard);
		DEFINE_CARD(CThranTomeCard);
		DEFINE_CARD(CThunderboltCard);
		DEFINE_CARD(CTimidDrakeCard);
		DEFINE_CARD(CTolarianDrakeCard);
		DEFINE_CARD(CTolarianSerpentCard);
		DEFINE_CARD(CTouchstoneCard);
		DEFINE_CARD(CUktabiEfreetCard);
		DEFINE_CARD(CUrborgJusticeCard);
		DEFINE_CARD(CVeteranExplorerCard);
		DEFINE_CARD(CWaveOfTerrorCard);
		DEFINE_CARD(CWindingCanyonsCard);
		DEFINE_CARD(CXanthicStatueCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CRogueElephantCard::CRogueElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rogue Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		GREEN_MANA_TEXT, Power(3), Life(3))
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
CNullRodCard::CNullRodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Null Rod"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlayActivatedAbilities,
			(int)CCardFilter::GetFilter(_T("artifact permanents"))));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArgivianFindCard::CArgivianFindCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Argivian Find"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CArgivianRestorationCard::CArgivianRestorationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Argivian Restoration"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CCloudDjinnCard::CCloudDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CDingusStaffCard::CDingusStaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dingus Staff"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDisruptCard::CDisruptCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Disrupt"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Sorcery | CardType::Instant, false))
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
}

//____________________________________________________________________________
//
CDuskriderFalconCard::CDuskriderFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Duskrider Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CFallowWurmCard::CFallowWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fallow Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
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
CFledglingDjinnCard::CFledglingDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fledgling Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CForiysianBrigadeCard::CForiysianBrigadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foriysian Brigade"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	SetMaxBlockingCount(2);
}

//____________________________________________________________________________
//
CGuidedStrikeCard::CGuidedStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Guided Strike"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(0), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHarvestWurmCard::CHarvestWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harvest Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::BasicLand, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
 
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInfernalTributeCard::CInfernalTributeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Infernal Tribute"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new TrueCardComparer);
		m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1,  &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}

//____________________________________________________________________________
//
CMerfolkTradersCard::CMerfolkTradersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Traders"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
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
COdylicWraithCard::COdylicWraithCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Odylic Wraith"), CardType::Creature, CREATURE_TYPE(Wraith), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPeacekeeperCard::CPeacekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Peacekeeper"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(FALSE_CARD_COMPARER)
{
	AddUpkeepCost(_T("1") WHITE_MANA_TEXT);
	
	{
		counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
			::CreateObject<CCanBeAttackedByEnchantment>(this,
				&m_CardFilter));

		cpAbility->SetAffectPlayers();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStripedBearsCard::CStripedBearsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Striped Bears"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTendrilsOfDespairCard::CTendrilsOfDespairCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tendrils of Despair"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));
	ATLASSERT(cpSpell);

	//cpSpell->AddSacrificeCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThunderboltCard::CThunderboltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Thunderbolt"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			FALSE,
			Life(-4), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimidDrakeCard::CTimidDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Timid Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBuriedAliveCard::CBuriedAliveCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Buried Alive"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Graveyard, TRUE, TRUE, FALSE) 
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(3));
}

//____________________________________________________________________________
//
CGemstoneMineCard::CGemstoneMineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gemstone Mine"), nID)
{
	GetCounterContainer()->ScheduleCounter(MINING_COUNTER, 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MINING_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MINING_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MINING_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MINING_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MINING_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGemstoneMineCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGemstoneMineCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(MINING_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CParadigmShiftCard::CParadigmShiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Paradigm Shift"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Exile, TRUE, MoveType::Others, ZoneId::Library));

		cpSpell->SetAffectControllerCardsOnly();

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
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbyssalGatekeeperCard::CAbyssalGatekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abyssal Gatekeeper"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBenalishMissionaryCard::CBenalishMissionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Missionary"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockedCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCinderGiantCard::CCinderGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cinder Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenBerserkerCard::CDwarvenBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Berserker"), CardType::Creature, CREATURE_TYPE2(Dwarf, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHurloonShamanCard::CHurloonShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hurloon Shaman"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredSubjectAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMantaRayCard::CMantaRayCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Manta Ray"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3),
		CCardFilter::GetFilter(_T("blue creatures"))) //can't be blocked except by "this"
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMantaRayCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMantaRayCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CMantaRayCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMantaRayCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

bool CMantaRayCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CMantaRayCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CMaraxusOfKeldCard::CMaraxusOfKeldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maraxus of Keld"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new UntappedComparer)); //"untapped"

	cpAbility->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNobleBenefactorCard::CNobleBenefactorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noble Benefactor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCardsToOthers(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrcishSettlersCard::COrcishSettlersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Settlers"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulShepherdCard::CSoulShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul Shepherd"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			WHITE_MANA_TEXT,
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTolarianSerpentCard::CTolarianSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tolarian Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetRevealCount(7);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeteranExplorerCard::CVeteranExplorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Explorer"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJanglingAutomatonCard::CJanglingAutomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jangling Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrawGolemCard::CStrawGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Straw Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("1"), Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBubbleMatrixCard::CBubbleMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bubble Matrix"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTouchstoneCard::CTouchstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Touchstone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, // tap
			FALSE, // untap
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"you don't control"

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDowndraftCard::CDowndraftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Downdraft"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T(""),
				Life(-2),	
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmpyrialArmorCard::CEmpyrialArmorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Empyrial Armor"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CEmpyrialArmorCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CEmpyrialArmorCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CEmpyrialArmorCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Hand,
			new TrueCardComparer, (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CEmpyrialArmorCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CFesteringEvilCard::CFesteringEvilCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Festering Evil"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Life(-3),	// life delta
				new AnyCreatureComparer, 
				TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFesteringEvilCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFesteringEvilCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CFireWhipCard::CFireWhipCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fire Whip"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CFireWhipCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE, 
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CFireWhipCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeatStrokeCard::CHeatStrokeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heat Stroke"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(new CreatureFlagComparer(CreatureFlag::Blocked | CreatureFlag::BeenBlocked, false))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbjureCard::CAbjureCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Abjure"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("blue cards")));
}

//____________________________________________________________________________
//
CBlossomingWreathCard::CBlossomingWreathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blossoming Wreath"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT));

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBoilingBloodCard::CBoilingBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boiling Blood"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::MustAttack, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLavaStormCard::CLavaStormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lava Storm"), CardType::Instant, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new AttackingCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Deal 2 damage to each attacking creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new BlockingCreatureComparer,
				FALSE,PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Deal 2 damage to each blocking creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CXanthicStatueCard::CXanthicStatueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Xanthic Statue"), CardType::Artifact, nID,
		_T("8"), AbilityType::Artifact)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(this,
			_T("5"),
			_T("Golem AB"), 64046));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChimericSphereCard::CChimericSphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chimeric Sphere"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2"),
				_T("Construct AA"), 64021));

		cpAbility->SetAbilityText(_T("Chimeric Sphere becomes a 2/1 Construct artifact creature with flying. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2"),
				_T("Construct AB"), 64022));

		cpAbility->SetAbilityText(_T("Chimeric Sphere becomes a 3/2 Construct artifact creature without flying. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGaeasBlessingCard::CGaeasBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaea's Blessing"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGaeasBlessingCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT));

			ATLASSERT(cpSpell);

			cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
			cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));


		AddSpell(cpSpell.GetPointer());
	}

	//Old code. Changed 26-08-2012
	/*{ 
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT,		
			0));	

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}*/
	{
		// Shuffle on library
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Library, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

void CGaeasBlessingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
		pmodifier2.AddSelection(MinimumValue(1), MaximumValue(3), // select cards to reorder
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
CPhyrexianFurnaceCard::CPhyrexianFurnaceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Furnace"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));

		cpAbility->AddTapCost();

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Graveyard, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Bottom, CZoneModifier::RoleType::AllPlayers);				
		pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSerratedBiskelionCard::CSerratedBiskelionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serrated Biskelion"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvizoaCard::CAvizoaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avizoa"), CardType::Creature, CREATURE_TYPE(Jellyfish), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""),
			PlayerEffectType::SkipNextUntapStep, FALSE));

	cpAbility->SetAffectControllerOnly();

	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->SetAbilityText(_T("This creature gets +2/+2 until end of turn. You skip your next untap step. Activates"));

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+2), TRUE));
	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLlanowarDruidCard::CLlanowarDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Druid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CGlobalUntapSpell> cpAbility(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Activated,
			_T(""),
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetToActivatedAbility();
	
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThranForgeCard::CThranForgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thran Forge"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("2"),
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1), TRUE));

	cpAbility->AddCardTypeToSelection(CardType::Artifact, CardType::Null, FALSE, _T("artifact creature"));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShadowRiderCard::CShadowRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shadow Rider"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShadowRiderCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CShadowRiderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSylvanHierophantCard::CSylvanHierophantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Hierophant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSylvanHierophantCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CSylvanHierophantCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController = pAction->GetController();

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(this);
	}

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pController);
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CShatteredCryptCard::CShatteredCryptCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Shattered Crypt"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CShatteredCryptCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CShatteredCryptCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int n = GetLastCastingExtraValue();

	CLifeModifier* life = new CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) life->ApplyTo(GetController());
}

//____________________________________________________________________________
//
CPhantomWingsCard::CPhantomWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Phantom Wings"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPhantomWingsCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CPhantomWingsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(pCard,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	//cpAbility->AddSacrificeCost();
	cpAbility->GetCost().AddSacrificeThisCardCost(this); //sacrifices Phantom Wings instead of enchanted creature

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenThaumaturgistCard::CDwarvenThaumaturgistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Thaumaturgist"), CardType::Creature, CREATURE_TYPE2(Dwarf, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPendrellMistsCard::CPendrellMistsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pendrell Mists"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPendrellMistsCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CPendrellMistsCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(pCard, _T("1")));

	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
CLotusValeCard::CLotusValeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lotus Vale"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddComparer(new UntappedComparer);

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 2, _T("doesn't matter"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScorchedRuinsCard::CScorchedRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Scorched Ruins"), nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddComparer(new UntappedComparer);

	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 2, _T("doesn't matter"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("4")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWindingCanyonsCard::CWindingCanyonsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Winding Canyons"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpAbility(
			::CreateObject<CGenericSpell>(this, AbilityType::Activated,
				_T("2")));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddTapCost();
		
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Winding Canyons Effect"), 61033, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGallowbraidCard::CGallowbraidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gallowbraid"), CardType::_LegendaryCreature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CGallowbraidCard::OnCounterMoved))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CGallowbraidCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetPayLifeResolutionCost(Life(0)); 
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetPayLifeResolutionCost(Life(-1*n_value));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CUktabiEfreetCard::CUktabiEfreetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uktabi Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CUktabiEfreetCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CUktabiEfreetCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Green, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Green, n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CMorinfenCard::CMorinfenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Morinfen"), CardType::_LegendaryCreature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CMorinfenCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CMorinfenCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetPayLifeResolutionCost(Life(0)); 
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetPayLifeResolutionCost(Life(-1*n_value));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CArcticWolvesCard::CArcticWolvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arctic Wolves"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CArcticWolvesCard::OnCounterMoved))
{	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

void CArcticWolvesCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, (2*(n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CInnerSanctumCard::CInnerSanctumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Inner Sanctum"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CInnerSanctumCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());	
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CInnerSanctumCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	m_pTriggeredAbility->SetPayLifeResolutionCost(Life(0)); 
	
	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		m_pTriggeredAbility->SetPayLifeResolutionCost(Life(-2*n_value));    
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CBriarShieldCard::CBriarShieldCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Briar Shield"), nID, 
		_T("") GREEN_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBriarShieldCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CBriarShieldCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+3), Life(+3), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CApathyCard::CApathyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Apathy"), CardType::EnchantCreature, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CApathyCard::OnResolutionCompleted))
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				CardKeyword::NoUntapInUntapPhase));
		
		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetPickerIsTriggeredPlayer(FALSE);
		cpAbility->SetAbilityName(_T("untap ability"));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CApathyCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CApathyCard::BeforeResolution));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CApathyCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

bool CApathyCard::BeforeResolution(CAbilityAction* pAction) const
{
	return pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0;
}

void CApathyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return;

	CCardOrientationModifier modifier = CCardOrientationModifier(FALSE);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CHauntingMiseryCard::CHauntingMiseryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Haunting Misery"), CardType::Sorcery, nID)
{
	{
		/*
			exile X creature cards from graveyard, where X > 0.
			sample message: 
				Exile from Graveyard Cruel Deceiver3(2/1), Exile from Graveyard Cruel Deceiver4(2/1): Casts Haunting Misery and targets computer
		*/
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,     // FALSE_CARD_COMPARER->no comparer=no creatures can be targeted, TRUE->target players
				Life(-0),					   
				PreventableType::Preventable));  
		cpSpell->SetExtraActionValueVector(ContextValue(-1));
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		// must be SpecialNumber::AnyPositive i.e. X > 0 so that X = 0 case is not included here 
		cpSpell->GetCost().AddExileGraveyardCardCost(SpecialNumber::AnyPositive, CCardFilter::GetFilter(_T("creatures")));	
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHauntingMiseryCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		/*
			exile no creature cards from graveyard, X = 0.
			sample message: 
				Exile no creatures from graveyard. Casts Haunting Misery and targets Computer
		*/
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-0), PreventableType::Preventable)); 
		cpSpell->SetAbilityText(_T("Exile no creatures from graveyard. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CHauntingMiseryCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCards = pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetSize();
	if (nCards == 0) return false;
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CLifeModifier pModifier1 = CLifeModifier(Life(-nCards), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pTarget);
	return true;
}

//____________________________________________________________________________
//
CBarishiCard::CBarishiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barishi"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	{ 
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetSkipStack(TRUE); //to prevent trigger

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Graveyard, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbeyanceCard::CAbeyanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abeyance"), CardType::Instant, nID)
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT));
	
	CScheduledPlayerModifier* pModifier1 = new CScheduledPlayerModifier(GetGame(),
			new CPlayerEffectModifier(PlayerEffectType::CantPlayActivatedAbilities2, (int)CCardFilter::GetFilter(_T("cards")), true),
			TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(GetGame(),
			new CPlayerEffectModifier(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("instant cards or sorcery cards")), true),
			TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);

	cpSpell->GetTargetModifier().CPlayerModifiers::Add(pModifier1);
	cpSpell->GetTargetModifier().CPlayerModifiers::Add(pModifier2);
	
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMasterOfArmsCard::CMasterOfArmsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of Arms"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(false);

	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			true,
			false,
			new BlockingThisCreatureComparer(this)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTolarianDrakeCard::CTolarianDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tolarian Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddPhasing(FALSE);
}

//____________________________________________________________________________
//
CMwonvuliOozeCard::CMwonvuliOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mwonvuli Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CMwonvuliOozeCard::OnCounterMoved))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		counted_ptr<CCounterPwrTghAbility> cpAbility(
			::CreateObject<CCounterPwrTghAbility>(this, AGE_COUNTER));

		cpAbility->SetPwrTghBonus(Power(1), Life(1));
		cpAbility->SetMultiplier(2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CMwonvuliOozeCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Green, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{
		mCost.AddCost(CManaCost::Color::Green, 2 * n_value);
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CFungusElementalCard::CFungusElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fungus Elemental"), CardType::Creature, CREATURE_TYPE2(Fungus, Elemental), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			GREEN_MANA_TEXT));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+2/+2"), +1));
	cpAbility->SetAbilityText(_T("Put a +2/+2 counter on. Activates"));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CFungusElementalCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CFungusElementalCard::CanPlay(BOOL bIncludeTricks)
{
	return GetGame()->GetGameTurnNumber() == GetInplayGameTurnNumber();
}

//____________________________________________________________________________
//
CRocHatchlingCard::CRocHatchlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roc Hatchling"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		RED_MANA_TEXT, Power(0), Life(1))
{
	GetCounterContainer()->ScheduleCounter(SHELL_COUNTER, 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SHELL_COUNTER, -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
			Power(+3), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(SHELL_COUNTER, 0));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAngelicRenewalCard::CAngelicRenewalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Renewal"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);
	
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelicRenewalCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CAngelicRenewalCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//____________________________________________________________________________
//
CMistmoonGriffinCard::CMistmoonGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mistmoon Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CMistmoonGriffinCard::OnResolutionCompleted))

{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CMistmoonGriffinCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pGra = GetController()->GetZoneById(ZoneId::Graveyard);
	int reveal=1;
	int stop=0;
	for (int i = 0; i < pGra->GetSize(); i++)

	{
		CCard* ppCard = pGra->GetAt(pGra->GetSize()-1-i);
		
		if (ppCard->GetCardType().IsCreature() && (stop<1))
		{
			++stop;				//stop the reveal count
			i=pGra->GetSize();	//stop the loop	
		}
		else
		{
			++reveal;			//one more card to reveal
		}
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::None);
		pmodifier2.AddSelection(MinimumValue(1),						// Min Cards
								MaximumValue(1),						// Max Cards: select cards to reorder
								CZoneModifier::RoleType::PrimaryPlayer, // select by 
								CZoneModifier::RoleType::PrimaryPlayer, // reveal to
								CCardFilter::GetFilter(_T("creatures")),// what cards
								ZoneId::Battlefield,					// if selected, move cards to
								CZoneModifier::RoleType::PrimaryPlayer, // select by this player
								CardPlacement::NotApplicable,			// put selected cards on 
								MoveType::Others,						// move type
								CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

	pmodifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CGoblinBombCard::CGoblinBombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Bomb"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinBombCard::OnFlipSelected))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		ATLASSERT(cpAbility);

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	
		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGoblinBombCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-20), PreventableType::Preventable));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FUSE_COUNTER), -5);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinBombCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();

	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		int Thumb = 0;
		int Exponent = 2;
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) 
			Exponent = 2 * Exponent;
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
		CCardCounterModifier* pModifier = new CCardCounterModifier(FUSE_COUNTER, -1);
		pModifier->ApplyTo(this);
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
		CCardCounterModifier* pModifier = new CCardCounterModifier(FUSE_COUNTER, +1);
		pModifier->ApplyTo(this);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CGoblinBombCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CCardCounterModifier* pModifier = new CCardCounterModifier(FUSE_COUNTER, +1);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				
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
				CCardCounterModifier* pModifier = new CCardCounterModifier(FUSE_COUNTER, -1);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CAborothCard::CAborothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aboroth"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9))
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAborothCard::OnCUSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAborothCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CAborothCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

		std::vector<SelectionEntry> entries;
		if (!GetCardKeyword()->HasCantGetCounters())
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("put %d -1/-1 counter on %s"), nCounters, this->GetCardName());
			else
				selectionEntry.strText.Format(_T("put %d -1/-1 counters on %s"), nCounters, this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CAborothCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s puts %d -1/-1 counter on %s"), pSelectionPlayer->GetPlayerName(), (int)dwContext1, GetCardName());
					else
						strMessage.Format(_T("%s puts %d -1/-1 counters on %s"),pSelectionPlayer->GetPlayerName(), (int)dwContext1, GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardCounterModifier pModifier = CCardCounterModifier(_T("-1/-1"), 1);
				pModifier.SetDoubling(false);

				if (dwContext1 > 0) for (int i = 1; i <= (int)dwContext1; i++) pModifier.ApplyTo(this);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CAncestralKnowledgeCard::CAncestralKnowledgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ancestral Knowledge"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CAncestralKnowledgeCard::OnCounterMoved))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(10), MaximumValue(10));	
		pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier3->GetSelection(0).moveType = MoveType::Others;
		pModifier3->AddSelection(MinimumValue(0), MaximumValue(SpecialNumber::All), // select cards to exile
			CZoneModifier::RoleType::PrimaryPlayer,									// select by 
			CZoneModifier::RoleType::PrimaryPlayer,									// reveal to
			NULL,																	// any cards
			ZoneId::Exile,															// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,									// select by this player
			CardPlacement::Top,														// put selected cards on top
			MoveType::Others,														// move type
			CZoneModifier::RoleType::PrimaryPlayer);								// order selected cards by this player

		// and finally put the last ones on the bottom of the library
		pModifier3->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAncestralKnowledgeCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CAncestralKnowledgeCard::BeforeResolution(CAbilityAction* pAction)
{
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

void CAncestralKnowledgeCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, ((n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CPsychicVortexCard::CPsychicVortexCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Psychic Vortex"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
		, m_CUSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPsychicVortexCard::OnCUSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPsychicVortexCard::BeforeResolution1));
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPsychicVortexCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPsychicVortexCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(AGE_COUNTER, 1);
		pModifier.ApplyTo(this);

		int nCounters = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

		std::vector<SelectionEntry> entries;
		if (!pAction->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantDrawCards))
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (nCounters == 1)
				selectionEntry.strText.Format(_T("draw %d card"), nCounters);
			else
				selectionEntry.strText.Format(_T("draw %d cards"), nCounters);

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_CUSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounters);
	}
	return true;
}

void CPsychicVortexCard::OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (dwContext1 == 1)
						strMessage.Format(_T("%s draws %d card"), pSelectionPlayer->GetPlayerName(), (int)dwContext1);
					else
						strMessage.Format(_T("%s draws %d cards"), pSelectionPlayer->GetPlayerName(), (int)dwContext1);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

				if (dwContext1 != 0) for (int i = 1; i <= (int)dwContext1; i++) pModifier.ApplyTo(pSelectionPlayer);
								
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);
					
				return;
			}
		}
}

bool CPsychicVortexCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&temp, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier1.ApplyTo(pController);

	int nDiscard = pController->GetZoneById(ZoneId::Hand)->GetSize();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new TrueCardComparer);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(nDiscard), MaximumValue(nDiscard), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&m_CardFilter, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CWaveOfTerrorCard::CWaveOfTerrorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wave of Terror"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CWaveOfTerrorCard::OnCounterMoved))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CWaveOfTerrorCard::OnResolutionCompleted))
{
	GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);				
		cpAbility->GetTriggeredCardModifiers().CCardModifiers::push_back(new CCardCounterModifier(AGE_COUNTER, +1, false));		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetReplacementEffect(TRUE);		
		cpAbility->SetSkipStackPayment(TRUE);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

void CWaveOfTerrorCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCounterCount = GetCounterContainer()->GetCounter(AGE_COUNTER)->GetCount();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCounterCount));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
}

void CWaveOfTerrorCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return;	

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	m_pTriggeredAbility->SetResolutionCost(mCost.ToString());			

	if  ((CString)name == AGE_COUNTER && (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData()))
	{		
		mCost.AddCost(CManaCost::Color::Generic, ((n_value)));
		m_pTriggeredAbility->SetResolutionCost(mCost.ToString());		
		CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);
		pModifier.ApplyTo(this);
		m_CardFlagModifier2.ApplyTo(this);
	}	
}

//____________________________________________________________________________
//
CBetrothedOfFireCard::CBetrothedOfFireCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Betrothed of Fire"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0))
	, m_CardFilter2(new EnchantedByComparer(this))
{
	m_CardFilter1.AddComparer(new AnyCreatureComparer);
	m_CardFilter1.AddComparer(new UntappedComparer);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBetrothedOfFireCard::BeforeResolution1));

		cpAbility->SetAbilityText(_T("Enchanted creature gets +2/+0. Activates"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter2);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBetrothedOfFireCard::BeforeResolution2));

		cpAbility->SetAbilityText(_T("Creatures you control get +2/+0. Activates"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBetrothedOfFireCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter2,
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(2))));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

bool CBetrothedOfFireCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(2))));

	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CThranTomeCard::CThranTomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thran Tome"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CThranTomeCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
		_T("5"),
		FALSE_CARD_COMPARER, TRUE));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThranTomeCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CThranTomeCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	if (pLibrary->GetSize() == 0) return false;

	CCountedCardContainer pSelectedCards;

	int n = 3;
	if (n > pLibrary->GetSize())
		n = pLibrary->GetSize();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pController);

	for (int i = 1; i <= n; ++i)
		pSelectedCards.AddCard(pLibrary->GetAt(pLibrary->GetSize() - i), CardPlacement::Top);

	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pSelectedCards.GetSize(); ++i)
	{
		CCard* pCard = pSelectedCards.GetAt(i);
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)pCard;
		selectionEntry.cpAssociatedCard = pCard;
		selectionEntry.strText.Format(_T("Select %s"), pCard->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController);

	return true;
}

void CThranTomeCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pController = (CPlayer*)dwContext1;
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

			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pController);
			pModifier1.ApplyTo(pCard);
				
			CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
			pModifier2.ApplyTo(pController);

			return;
		}
}

//____________________________________________________________________________
//
CUrborgJusticeCard::CUrborgJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Urborg Justice"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrborgJusticeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CUrborgJusticeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValue = pAction->GetController()->GetCertainTypeDiedCount(CardType::Creature);

	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(pAction->GetAssociatedPlayer());

	return true;
}

//____________________________________________________________________________
//
CSawtoothOgreCard::CSawtoothOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sawtooth Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSawtoothOgreCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSawtoothOgreCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSawtoothOgreCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CSawtoothOgreCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects1.AddCard(pSubject, CardPlacement::Top);
	pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Sawtooth Ogre Effect"), 61114, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
