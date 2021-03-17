#include "stdafx.h"
#include "CardPlaneshift.h"

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

		DEFINE_CARD(CAlliedStrategiesCard);
		DEFINE_CARD(CAlphaKavuCard);
		DEFINE_CARD(CAmphibiousKavuCard);
		DEFINE_CARD(CAncientSpiderCard);
		DEFINE_CARD(CArcticMerfolkCard);
		DEFINE_CARD(CAuraBlastCard);
		DEFINE_CARD(CAuroraGriffinCard);
		DEFINE_CARD(CBogDownCard);
		DEFINE_CARD(CCalderaKavuCard);
		DEFINE_CARD(CCavernHarpyCard);
		DEFINE_CARD(CCloudCoverCard);
		DEFINE_CARD(CCrosissCatacombsCard);
		DEFINE_CARD(CCrosissCharmCard);
		DEFINE_CARD(CDarigaazsCalderaCard);
		DEFINE_CARD(CDarigaazsCharmCard);
		DEFINE_CARD(CDaringLeapCard);
		DEFINE_CARD(CDeadapultCard);
		DEFINE_CARD(CDeathBombCard);
		DEFINE_CARD(CDestructiveFlowCard);
		DEFINE_CARD(CDiabolicIntentCard);
		DEFINE_CARD(CDiscipleOfKangeeCard);
		DEFINE_CARD(CDominariasJudgmentCard);
		//DEFINE_CARD(CDralnusCrusadeCard);
		DEFINE_CARD(CDralnusPetCard);
		DEFINE_CARD(CDromarsCavernCard);
		DEFINE_CARD(CDromarsCharmCard);
		DEFINE_CARD(CEladamrisCallCard);
		DEFINE_CARD(CErtaitheCorruptedCard);
		DEFINE_CARD(CEscapeRoutesCard);
		DEFINE_CARD(CExoticDiseaseCard);
		DEFINE_CARD(CFallingTimberCard);
		DEFINE_CARD(CFlametongueKavuCard);
		DEFINE_CARD(CFleetfootPantherCard);
		DEFINE_CARD(CForsakenCityCard);
		DEFINE_CARD(CGaeasMightCard);
		DEFINE_CARD(CGainsayCard);
		DEFINE_CARD(CGerrardsCommandCard);
		DEFINE_CARD(CHobbleCard);
		DEFINE_CARD(CHonorableScoutCard);
		DEFINE_CARD(CHornedKavuCard);
		DEFINE_CARD(CHullBreachCard);
		DEFINE_CARD(CHuntingDrakeCard);
		DEFINE_CARD(CImplodeCard);
		DEFINE_CARD(CInsolenceCard);
		DEFINE_CARD(CKavuRecluseCard);
		DEFINE_CARD(CLavaZombieCard);
		DEFINE_CARD(CMagmaBurstCard);
		DEFINE_CARD(CMagnigothTreefolkCard);
		DEFINE_CARD(CMaliciousAdviceCard);
		DEFINE_CARD(CManaCylixCard);
		DEFINE_CARD(CMarchOfSoulsCard);
		DEFINE_CARD(CMarshCrocodileCard);
		DEFINE_CARD(CMeddlingMageCard);
		DEFINE_CARD(CMeteorCraterCard);
		DEFINE_CARD(CMireKavuCard);
		DEFINE_CARD(CMirrorwoodTreefolkCard);
		DEFINE_CARD(CMoggJailerCard);
		DEFINE_CARD(CMorgueToadCard);
		DEFINE_CARD(CMultanisHarmonyCard);
		DEFINE_CARD(CNaturalEmergenceCard);
		DEFINE_CARD(CNemataGroveGuardianCard);
		DEFINE_CARD(CNightscapeBattlemageCard);
		DEFINE_CARD(CNightscapeFamiliarCard);
		DEFINE_CARD(COrimsChantCard);
		DEFINE_CARD(CPhyrexianBloodstockCard);
		DEFINE_CARD(CPhyrexianScutaCard);
		DEFINE_CARD(CPhyrexianTyrannyCard);
		DEFINE_CARD(CPlaneswalkersFavorCard);
		DEFINE_CARD(CPlaneswalkersFuryCard);
		DEFINE_CARD(CPlaneswalkersMirthCard);
		DEFINE_CARD(CPlaneswalkersScornCard);
		DEFINE_CARD(CPollenRemedyCard);
		DEFINE_CARD(CPrimalGrowthCard);
		DEFINE_CARD(CPygmyKavuCard);
		DEFINE_CARD(CQuestingPhelddagrifCard);
		DEFINE_CARD(CQuirionExplorerCard);
		DEFINE_CARD(CRadiantKavuCard);
		DEFINE_CARD(CRazingSniddCard);
		DEFINE_CARD(CRithsGroveCard);
		DEFINE_CARD(CRootGreevilCard);
		DEFINE_CARD(CRushingRiverCard);
		DEFINE_CARD(CSamiteElderCard);
		DEFINE_CARD(CSawtoothLoonCard);
		DEFINE_CARD(CSeaSniddCard);
		DEFINE_CARD(CShivanWurmCard);
		DEFINE_CARD(CShriekOfDreadCard);
		DEFINE_CARD(CSilverDrakeCard);
		DEFINE_CARD(CSingeCard);
		DEFINE_CARD(CSisaysIngenuityCard);
		DEFINE_CARD(CSkyshroudBlessingCard);
		DEFINE_CARD(CSleepingPotionCard);
		DEFINE_CARD(CSlingshotGoblinCard);
		DEFINE_CARD(CSparkcasterCard);
		DEFINE_CARD(CSteelLeafPaladinCard);
		DEFINE_CARD(CStoneKavuCard);
		DEFINE_CARD(CStormscapeBattlemageCard);
		DEFINE_CARD(CStormscapeFamiliarCard);
		DEFINE_CARD(CStrafeCard);
		DEFINE_CARD(CSunscapeBattlemageCard);
		DEFINE_CARD(CSunscapeFamiliarCard);
		DEFINE_CARD(CSurpriseDeploymentCard);
		DEFINE_CARD(CTahngarthTalruumHeroCard);
		DEFINE_CARD(CTerminalMoraineCard);
		DEFINE_CARD(CTerminateCard);
		DEFINE_CARD(CThornscapeBattlemageCard);
		DEFINE_CARD(CThornscapeFamiliarCard);
		DEFINE_CARD(CThunderscapeBattlemageCard);
		DEFINE_CARD(CThunderscapeFamiliarCard);
		DEFINE_CARD(CTrevasCharmCard);
		DEFINE_CARD(CTrevasRuinsCard);
		DEFINE_CARD(CUrzasGuiltCard);
		DEFINE_CARD(CVolcanoImpCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDiabolicIntentCard::CDiabolicIntentCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Diabolic Intent"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CEladamrisCallCard::CEladamrisCallCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Eladamri's Call"), CardType::Instant, nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CErtaitheCorruptedCard::CErtaitheCorruptedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ertai, the Corrupted"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))

	, m_CardFilter(new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManaCylixCard::CManaCylixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Cylix"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMeddlingMageCard::CMeddlingMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meddling Mage"), CardType::Creature, CREATURE_TYPE2(Human,Wizard), nID, 
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(CCardFilter::GetFilter(_T("non-lands")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTerminateCard::CTerminateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Terminate"), CardType::Instant, nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CPhyrexianScutaCard::CPhyrexianScutaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Scuta"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPhyrexianScutaCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		//Kicker cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->AddPayLifeDeltaCost(Life(-3));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CPhyrexianScutaCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() == ZoneId::_Tokens && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CAlphaKavuCard::CAlphaKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alpha Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(-1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kavu), false));
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmphibiousKavuCard::CAmphibiousKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amphibious Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::BlockEventCallback2,
									&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue or black cards")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncientSpiderCard::CAncientSpiderCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ancient Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CAuroraGriffinCard::CAuroraGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aurora Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			WHITE_MANA_TEXT,
			new TrueCardComparer));

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));

	AddAbility(cpAbility.GetPointer());
}

//________________________________________________________________________________________________________
//
CCalderaKavuCard::CCalderaKavuCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Caldera Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			GREEN_MANA_TEXT,
			new SpecificCardComparer(this)));

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCavernHarpyCard::CCavernHarpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cavern Harpy"), CardType::Creature, CREATURE_TYPE2(Harpy, Beast), nID,
	BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Black, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlametongueKavuCard::CFlametongueKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flametongue Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	//cpAbility->GetTargeting().SetIncludePlayers(TRUE); //you mustn't be able to target a player too
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleetfootPantherCard::CFleetfootPantherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleetfoot Panther"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHornedKavuCard::CHornedKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horned Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Green, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHuntingDrakeCard::CHuntingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hunting Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Green, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKavuRecluseCard::CKavuRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Recluse"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLavaZombieCard::CLavaZombieCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Lava Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3),
		_T("2"), Power(+1), Life(+0))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarshCrocodileCard::CMarshCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marsh Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Black, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(1);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMireKavuCard::CMireKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mire Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMirrorwoodTreefolkCard::CMirrorwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirrorwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
			_T("2") RED_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(RedirectionType::RedirectNextDamage));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CMorgueToadCard::CMorgueToadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Morgue Toad"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			BLUE_MANA_TEXT RED_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNemataGroveGuardianCard::CNemataGroveGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nemata, Grove Guardian"), CardType::_LegendaryCreature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))

	, m_CardFilter(_T("a Saproling"), _T("Saproling"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				_T("Saproling F"), 2920,
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T(""),
				Power(+1), Life(+1),
				new CreatureTypeComparer(CREATURE_TYPE(Saproling), false)));

		//Such a thing isn't supported by CGlobalChgPwrTghSpell:
		//cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetToActivatedAbility();

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhyrexianBloodstockCard::CPhyrexianBloodstockCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Bloodstock"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White, false));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuirionExplorerCard::CQuirionExplorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Explorer"), CardType::Creature, CREATURE_TYPE3(Elf, Druid, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Black));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Blue));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Red));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Green));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::White));

		cpAbility->SetMonitorOpponentsOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRazingSniddCard::CRazingSniddCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razing Snidd"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredSubjectAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRootGreevilCard::CRootGreevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Root Greevil"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false), 
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::White, false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false), 
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false), 
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::Black, false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false), 
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::Red, false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("2") GREEN_MANA_TEXT, 
				new CardTypeComparer(CardType::_Enchantment, false), 
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::Green, false));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeaSniddCard::CSeaSniddCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sea Snidd"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Plains"));
	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Swamp"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShivanWurmCard::CShivanWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shivan Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Green, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSilverDrakeCard::CSilverDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silver Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Blue, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlingshotGoblinCard::CSlingshotGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slingshot Goblin"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Blue | CardType::Creature, true), FALSE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSparkcasterCard::CSparkcasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sparkcaster"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Green, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSteelLeafPaladinCard::CSteelLeafPaladinCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Steel Leaf Paladin"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStoneKavuCard::CStoneKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTahngarthTalruumHeroCard::CTahngarthTalruumHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tahngarth, Talruum Hero"), CardType::_LegendaryCreature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetReceiveDamageFromTargetedCreature();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVolcanoImpCard::CVolcanoImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Volcano Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") RED_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTerminalMoraineCard::CTerminalMoraineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Terminal Moraine"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("2"), 
				CCardFilter::GetFilter(_T("basic lands")),		
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeadapultCard::CDeadapultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deadapult"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDestructiveFlowCard::CDestructiveFlowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Destructive Flow"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEscapeRoutesCard::CEscapeRoutesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Escape Routes"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::White | CardType::Black, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInsolenceCard::CInsolenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Insolence"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT,
		CAbilityEnchant::CreateAbilityCallback(this,
			&CInsolenceCard::CreateEnchantAbility),
		CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CInsolenceCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNaturalEmergenceCard::CNaturalEmergenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Natural Emergence"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Green, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAEnchantment> cpAbility(
			::CreateObject<CIsAlsoAEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				_T("Animated Land A"), 64007));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAuraBlastCard::CAuraBlastCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Aura Blast"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CCrosissCharmCard::CCrosissCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crosis's Charm"), CardType::Instant, nID)
{
	{
		//Return target permanent to its owner's hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target nonblack creature, it can't be regenerated.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarigaazsCharmCard::CDarigaazsCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Darigaaz's Charm"), CardType::Instant, nID)
{
	{
		//Return target creature card from your graveyard to your hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Darigaaz's Charm deals 3 damage to target creature or player.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target creature gets +3/+3 until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+3), Life(+3),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaringLeapCard::CDaringLeapCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Daring Leap"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Flying | CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CDeathBombCard::CDeathBombCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death Bomb"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CDromarsCharmCard::CDromarsCharmCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dromar's Charm"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	//Above: Counter target spell.
	{
		//You gain 5 life.
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
				Life(+5), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target creature gets -2/-2 until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFallingTimberCard::CFallingTimberCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Falling Timber"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGaeasMightCard::CGaeasMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaea's Might"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGaeasMightCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGaeasMightCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nDomainCount;
		Context.nValue2 = nDomainCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CGainsayCard::CGainsayCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Gainsay"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Blue, false))
{
}

//____________________________________________________________________________
//
CGerrardsCommandCard::CGerrardsCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gerrard's Command"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT WHITE_MANA_TEXT,
			Power(+3), Life(+3), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMagmaBurstCard::CMagmaBurstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magma Burst"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPollenRemedyCard::CPollenRemedyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pollen Remedy"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(3), SourceColor::Null));

		cpSpell->GetTargeting()->SetDistributeValues();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(6), SourceColor::Null));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRushingRiverCard::CRushingRiverCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rushing River"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CShriekOfDreadCard::CShriekOfDreadCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Shriek of Dread"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Fear, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSkyshroudBlessingCard::CSkyshroudBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skyshroud Blessing"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTrevasCharmCard::CTrevasCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Treva's Charm"), CardType::Instant, nID)
{
	{
		//Destroy target enchantment.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile target attacking creature.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Draw a card, then discard a card.
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBogDownCard::CBogDownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bog Down"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				3, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CImplodeCard::CImplodeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Implode"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CPrimalGrowthCard::CPrimalGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Primal Growth"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CStrafeCard::CStrafeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Strafe"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-3), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Red, false));
}

//____________________________________________________________________________
//
CUrzasGuiltCard::CUrzasGuiltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Urza's Guilt"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				2, 2));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetDiscardCount(3);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
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
}

//____________________________________________________________________________
//
CRadiantKavuCard::CRadiantKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Radiant Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Blue | CardType::Black, false),
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage));

	cpAbility->SetToActivatedAbility();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSisaysIngenuityCard::CSisaysIngenuityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sisay's Ingenuity"), CardType::EnchantCreature, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				BLUE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CSisaysIngenuityCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CSisaysIngenuityCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(pEnchantedCard,
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpEnchantAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));	
	cpEnchantAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CMultanisHarmonyCard::CMultanisHarmonyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Multani's Harmony"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMultanisHarmonyCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMultanisHarmonyCard::CreateAdditionalAbility2));
	CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMultanisHarmonyCard::CreateAdditionalAbility3));
	CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMultanisHarmonyCard::CreateAdditionalAbility4));
	CCardAbilityModifier* pModifier5 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMultanisHarmonyCard::CreateAdditionalAbility5));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier3);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier4);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier5);
}

counted_ptr<CAbility> CMultanisHarmonyCard::CreateAdditionalAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMultanisHarmonyCard::CreateAdditionalAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMultanisHarmonyCard::CreateAdditionalAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMultanisHarmonyCard::CreateAdditionalAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMultanisHarmonyCard::CreateAdditionalAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggJailerCard::CMoggJailerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Jailer"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new UntappedComparer);
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::less<int>>(3));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CMoggJailerCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CMoggJailerCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CArcticMerfolkCard::CArcticMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arctic Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CArcticMerfolkCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		//Kicker cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("1") BLUE_MANA_TEXT));

		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CArcticMerfolkCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() == ZoneId::_Tokens && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1, true);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDiscipleOfKangeeCard::CDiscipleOfKangeeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Kangee"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

	cpAbility->AddTapCost();

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDralnusPetCard::CDralnusPetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dralnu's Pet"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new AnyCreatureComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDralnusPetCard::OnResolutionCompleted))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	//Kicker cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
	cpSpell->SetAbilityText(_T("Casts kicked"));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());

	AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
}

void CDralnusPetCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier1->GetModifier().SetOneTurnOnly(false);
	pModifier1->ApplyTo(this);

	int nCMC = pAbilityAction->GetCostConfigEntry().GetDiscardCards()->GetAt(0)->GetConvertedManaCost();
	CCardCounterModifier* pModifier2 = new CCardCounterModifier(_T("+1/+1"), nCMC, true);
	pModifier2->ApplyTo(this);
}

//____________________________________________________________________________
//
CHonorableScoutCard::CHonorableScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Honorable Scout"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHonorableScoutCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHonorableScoutCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int n= m_CardFilter_temp.CountIncluded(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier pmodifier = CLifeModifier(
			Life(+(2*n)), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pmodifier.ApplyTo(GetController());

	return (n > 0);
}

//____________________________________________________________________________
//
CPygmyKavuCard::CPygmyKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pygmy Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPygmyKavuCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CPygmyKavuCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pOppBattle = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Black, true));

	nCount = m_CardFilter1.CountIncluded(pOppBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CHobbleCard::CHobbleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hobble"), CardType::EnchantCreature, nID)	
{
	{
		counted_ptr<CDoubleChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CDoubleChgPwrTghAttrEnchant>(this, 
				_T("2") WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::CantAttack, CardType::Creature, //any creature
				Power(+0), Life(+0), CreatureKeyword::CantBlock, CardType::Black
				));

		AddSpell(cpSpell.GetPointer());
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

//____________________________________________________________________________
//
CMaliciousAdviceCard::CMaliciousAdviceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Malicious Advice"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMaliciousAdviceCard::OnResolutionCompleted))
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			TRUE, FALSE,
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false)));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMaliciousAdviceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int n = GetLastCastingExtraValue();

	CLifeModifier* life = new CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) life->ApplyTo(GetController());
}

//____________________________________________________________________________
//
CSingeCard::CSingeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Singe"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
															   DamageType::SpellDamage | DamageType::NonCombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHullBreachCard::CHullBreachCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hull Breach"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy target artifact. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy target enchantment. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy target artifact and target enchantment. Casts"));

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

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNightscapeBattlemageCard::CNightscapeBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightscape Battlemage"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost1(_T("2") BLUE_MANA_TEXT)
		, m_KickerCost2(_T("2") RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetSubjectCount(0, 2);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightscapeBattlemageCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightscapeBattlemageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNightscapeBattlemageCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CNightscapeBattlemageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

//____________________________________________________________________________
//
CStormscapeBattlemageCard::CStormscapeBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stormscape Battlemage"), CardType::Creature, CREATURE_TYPE2(Metathran, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost1(WHITE_MANA_TEXT)
		, m_KickerCost2(_T("2") BLACK_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStormscapeBattlemageCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStormscapeBattlemageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStormscapeBattlemageCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CStormscapeBattlemageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

//____________________________________________________________________________
//
CSunscapeBattlemageCard::CSunscapeBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunscape Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost1(_T("1") GREEN_MANA_TEXT)
		, m_KickerCost2(_T("2") BLUE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunscapeBattlemageCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunscapeBattlemageCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunscapeBattlemageCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CSunscapeBattlemageCard::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

//____________________________________________________________________________
//
CThornscapeBattlemageCard::CThornscapeBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornscape Battlemage"), CardType::Creature, CREATURE_TYPE2(Elf, Wizard), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost1(RED_MANA_TEXT)
		, m_KickerCost2(WHITE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThornscapeBattlemageCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThornscapeBattlemageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThornscapeBattlemageCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CThornscapeBattlemageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

//____________________________________________________________________________
//
CThunderscapeBattlemageCard::CThunderscapeBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thunderscape Battlemage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost1(_T("1") BLACK_MANA_TEXT)
		, m_KickerCost2(GREEN_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost2);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThunderscapeBattlemageCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThunderscapeBattlemageCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThunderscapeBattlemageCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1));
}

bool CThunderscapeBattlemageCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost2));
}

//____________________________________________________________________________
//
CNightscapeFamiliarCard::CNightscapeFamiliarCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Nightscape Familiar"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Blue | CardType::Red, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormscapeFamiliarCard::CStormscapeFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormscape Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::White | CardType::Black, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunscapeFamiliarCard::CSunscapeFamiliarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunscape Familiar"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::Green | CardType::Blue, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThornscapeFamiliarCard::CThornscapeFamiliarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornscape Familiar"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Red | CardType::White, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThunderscapeFamiliarCard::CThunderscapeFamiliarCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Thunderscape Familiar"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Black | CardType::Green, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudCoverCard::CCloudCoverCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cloud Cover"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_AllZones);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloudCoverCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CCloudCoverCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	if (pToCard->GetController() == byPlayer) return false;

	triggerContext.m_pCard = pToCard;
	return true;
}

//____________________________________________________________________________
//
CAlliedStrategiesCard::CAlliedStrategiesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Allied Strategies"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT, 0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAlliedStrategiesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAlliedStrategiesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* target =  pAction->GetAssociatedPlayer();
	CZone* pBattlefield = target->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nDomainCount), MaximumValue(nDomainCount));

	pModifier.ApplyTo(target);

	return true;
}

//____________________________________________________________________________
//
CExoticDiseaseCard::CExoticDiseaseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exotic Disease"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-0), PreventableType::Preventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExoticDiseaseCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CExoticDiseaseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	int nIslandCheck = 0;
	int nForestCheck = 0;
	int nPlainsCheck = 0;
	int nMountainCheck = 0;
	int nSwampCheck = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			nIslandCheck = 1;
		if ((pCard->GetCardType() & CardType::Forest).Any())
			nForestCheck = 1;
		if ((pCard->GetCardType() & CardType::Plains).Any())
			nPlainsCheck = 1;
		if ((pCard->GetCardType() & CardType::Mountain).Any())
			nMountainCheck = 1;
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			nSwampCheck = 1;
	}

	int nDomainCount = nIslandCheck + nForestCheck + nPlainsCheck + nMountainCheck + nSwampCheck;
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier pModifier2 = CLifeModifier(Life(nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CPlayer* target =  pAction->GetAssociatedPlayer();

	pModifier1.ApplyTo(target);
	pModifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
COrimsChantCard::COrimsChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Orim's Chant"), CardType::Instant, nID)
{
	{
		//Return target permanent to its owner's hand.
		counted_ptr<COrimsChantSpell> cpSpell(
			::CreateObject<COrimsChantSpell>(this, AbilityType::Instant, 
				WHITE_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CCrosissCatacombsCard::CCrosissCatacombsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Crosis's Catacombs"), nID, CardType::_LairLand)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Lair, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarigaazsCalderaCard::CDarigaazsCalderaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Darigaaz's Caldera"), nID, CardType::_LairLand)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Lair, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDromarsCavernCard::CDromarsCavernCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dromar's Cavern"), nID, CardType::_LairLand)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Lair, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRithsGroveCard::CRithsGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rith's Grove"), nID, CardType::_LairLand)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Lair, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTrevasRuinsCard::CTrevasRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Treva's Ruins"), nID, CardType::_LairLand)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Lair, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSleepingPotionCard::CSleepingPotionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sleeping Potion"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSleepingPotionCard::OnResolutionCompleted))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	m_pChgPwrTghAttrEnchant->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, true, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

void CSleepingPotionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(true);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CQuestingPhelddagrifCard::CQuestingPhelddagrifCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Questing Phelddagrif"), CardType::Creature, CREATURE_TYPE(Phelddagrif), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				GREEN_MANA_TEXT,
				FALSE_CARD_COMPARER, true));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestingPhelddagrifCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				Life(+2), PreventableType::NotPreventable));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestingPhelddagrifCard::BeforeResolution2));
		cpAbility->SetDamageType(DamageType::NotDealingDamage);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, true));		

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestingPhelddagrifCard::BeforeResolution3));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestingPhelddagrifCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CPowerModifier* pModifier1 = new CPowerModifier(Power(+1));
	pModifier1->ApplyTo((CCreatureCard*)this);

	CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2->ApplyTo((CCreatureCard*)this);

	CTokenCreationModifier* pModifier3 = new CTokenCreationModifier(GetGame(), _T("Hippo B"), 62014, 1);
	pModifier3->ApplyTo(pTarget);

	return true;
}

bool CQuestingPhelddagrifCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCardKeywordModifier* pModifier1 = new CCardKeywordModifier(CardKeyword::ProtectionFromBlack, true, true);
	pModifier1->ApplyTo((CCreatureCard*)this);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier(CardKeyword::ProtectionFromRed, true, true);
	pModifier2->ApplyTo((CCreatureCard*)this);

	return true;
}

bool CQuestingPhelddagrifCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier(CreatureKeyword::Flying, true, true);
	pModifier1->ApplyTo((CCreatureCard*)this);

	CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), 0, 1);
	pModifier2->ApplyTo(pTarget);

	return true;
}
//____________________________________________________________________________
//
CSamiteElderCard::CSamiteElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samite Elder"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new TrueCardComparer, false));		

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSamiteElderCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSamiteElderCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController = GetController();

	bool pWhite = false;
	bool pBlue = false;
	bool pBlack = false;
	bool pRed = false;
	bool pGreen = false;

	if (pTarget->IsColor(CManaPool::Color::White)) pWhite = true;
	if (pTarget->IsColor(CManaPool::Color::Blue)) pBlue = true;
	if (pTarget->IsColor(CManaPool::Color::Black)) pBlack = true;
	if (pTarget->IsColor(CManaPool::Color::Red)) pRed = true;
	if (pTarget->IsColor(CManaPool::Color::Green)) pGreen = true;
	
	if (pWhite)
	{
		CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromWhite, true, true)));
		pModifier1->ApplyTo(pController);
	}

	if (pBlue)
	{
		CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromBlue, true, true)));
		pModifier2->ApplyTo(pController);
	}

	if (pBlack)
	{
		CZoneCardModifier* pModifier3 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromBlack, true, true)));
		pModifier3->ApplyTo(pController);
	}

	if (pRed)
	{
		CZoneCardModifier* pModifier4 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromRed, true, true)));
		pModifier4->ApplyTo(pController);
	}

	if (pGreen)
	{
		CZoneCardModifier* pModifier5 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromGreen, true, true)));
		pModifier5->ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CSawtoothLoonCard::CSawtoothLoonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sawtooth Loon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Blue, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		cpAbility->SetAbilityName(_T("Gating ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredDrawCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDrawCount(2);
		cpAbility->SetDiscard(2, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Bottom);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetAbilityName(_T("Card draw ability"));
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CPhyrexianTyrannyCard::CPhyrexianTyrannyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Tyranny"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CForsakenCityCard::CForsakenCityCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Forsaken City"), nID, CardType::NonbasicLand)
   , m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForsakenCityCard::OnCardSelected))

{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForsakenCityCard::BeforeResolution));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CForsakenCityCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't exile anything"));

			entries.push_back(selectionEntry);
		}
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

void CForsakenCityCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't exile anything"), pSelectionPlayer->GetPlayerName());
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
				CCard* pCard = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s exiles %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

				pModifier1.ApplyTo(pCard);
				pModifier2.ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CPlaneswalkersFavorCard::CPlaneswalkersFavorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planeswalker's Favor"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDoubleTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDoubleTargetSpell>>(this,
			_T("3") GREEN_MANA_TEXT,
			FALSE_CARD_COMPARER, true,
			new AnyCreatureComparer, false,
			_T("")));

	cpAbility->GetTargeting1()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlaneswalkersFavorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CPlaneswalkersFavorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CPlayer* pTargetOpponent = (CPlayer*)pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTargetOpponent->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nCMC = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTargetOpponent->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTargetOpponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(nCMC));
		CLifeModifier pModifier2 = CLifeModifier(Life(nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CPlaneswalkersFuryCard::CPlaneswalkersFuryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planeswalker's Fury"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlaneswalkersFuryCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());	
}

bool CPlaneswalkersFuryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nCMC = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		pModifier.ApplyTo(pTarget);
	}

	return true;
}

//____________________________________________________________________________
//
CPlaneswalkersMirthCard::CPlaneswalkersMirthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planeswalker's Mirth"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") WHITE_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlaneswalkersMirthCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CPlaneswalkersMirthCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nCMC = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		CLifeModifier pModifier = CLifeModifier(Life(nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CPlaneswalkersScornCard::CPlaneswalkersScornCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planeswalker's Scorn"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDoubleTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDoubleTargetSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true,
			new AnyCreatureComparer, false,
			_T("")));

	cpAbility->GetTargeting1()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlaneswalkersScornCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());	
}

bool CPlaneswalkersScornCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CPlayer* pTargetOpponent = (CPlayer*)pDoubleTargetAction->GetTargetGroup1().GetFirstPlayerSubject();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTargetOpponent->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nCMC = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTargetOpponent->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTargetOpponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(-nCMC));
		CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CMagnigothTreefolkCard::CMagnigothTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magnigoth Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(6))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(0), Life(0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Plains, false));
		cpAbility->SetConditionValue(1);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Plainswalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(0), Life(0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
		cpAbility->SetConditionValue(1);
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Islandwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(0), Life(0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));
		cpAbility->SetConditionValue(1);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Swampwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(0), Life(0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
		cpAbility->SetConditionValue(1);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Mountainwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(0), Life(0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
		cpAbility->SetConditionValue(1);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Forestwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	}
}

//____________________________________________________________________________
//
/*
CDralnusCrusadeCard::CDralnusCrusadeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dralnu's Crusade"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				CardType::Black, CardType::_ColorMask));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				Power(+0), Life(+0)));

		cpAbility->GetOtherCardModifiers().Add((CCardModifier*)(new CCreatureTypeModifier(SingleCreatureType::Zombie)));

		AddAbility(cpAbility.GetPointer());
	}
}
*/
//____________________________________________________________________________
//
CDominariasJudgmentCard::CDominariasJudgmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dominaria's Judgment"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDominariasJudgmentCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDominariasJudgmentCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattle = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
	CCardFilter m_CardFilter4;
	CCardFilter m_CardFilter5;
	m_CardFilter1.SetComparer(new CardTypeComparer(CardType::Plains, false));
	m_CardFilter2.SetComparer(new CardTypeComparer(CardType::Island, false));
	m_CardFilter3.SetComparer(new CardTypeComparer(CardType::Swamp, false));
	m_CardFilter4.SetComparer(new CardTypeComparer(CardType::Mountain, false));
	m_CardFilter5.SetComparer(new CardTypeComparer(CardType::Forest, false));

	int nPlains = m_CardFilter1.CountIncluded(pBattle->GetCardContainer());
	int nIsland = m_CardFilter2.CountIncluded(pBattle->GetCardContainer());
	int nSwamp = m_CardFilter3.CountIncluded(pBattle->GetCardContainer());
	int nMountain = m_CardFilter4.CountIncluded(pBattle->GetCardContainer());
	int nForest = m_CardFilter5.CountIncluded(pBattle->GetCardContainer());

	if (nPlains > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromWhite, true, true)));

		pModifier1.ApplyTo(pController);
	}
	if (nIsland > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromBlue, true, true)));

		pModifier1.ApplyTo(pController);
	}
	if (nSwamp > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromBlack, true, true)));

		pModifier1.ApplyTo(pController);
	}
	if (nMountain > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromRed, true, true)));

		pModifier1.ApplyTo(pController);
	}
	if (nForest > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::ProtectionFromGreen, true, true)));

		pModifier1.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CMeteorCraterCard::CMeteorCraterCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Meteor Crater"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("W")));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMeteorCraterCard::CanPlay1)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("U")));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMeteorCraterCard::CanPlay2)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("B")));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMeteorCraterCard::CanPlay3)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("R")));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMeteorCraterCard::CanPlay4)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("G")));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMeteorCraterCard::CanPlay5)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CMeteorCraterCard::CanPlay1(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMeteorCraterCard::CanPlay2(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMeteorCraterCard::CanPlay3(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMeteorCraterCard::CanPlay4(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMeteorCraterCard::CanPlay5(BOOL bIncludeTricks)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green, false));

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMarchOfSoulsCard::CMarchOfSoulsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("March of Souls"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CMarchOfSoulsCard::OnResolutionCompleted))
	, m_nCards(2)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarchOfSoulsCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CMarchOfSoulsCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards[ip] = (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer()));
	}

	return true;
}

void CMarchOfSoulsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pInplay;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		int OldValue = m_nCards[ip];
		int NewValue = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());

		if (NewValue < OldValue)
		{
			CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit G"), 2941, OldValue - NewValue);
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

//____________________________________________________________________________
//
CSurpriseDeploymentCard::CSurpriseDeploymentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Surprise Deployment"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSurpriseDeploymentCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CSurpriseDeploymentCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSurpriseDeploymentCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

BOOL CSurpriseDeploymentCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CSurpriseDeploymentCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't put anything onto the battlefield"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			if (pCard->GetCardType().IsCreature() && !pCard->IsColor(CManaPoolBase::Color::White))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CSurpriseDeploymentCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything onto the battlefield"), pSelectionPlayer->GetPlayerName());
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
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s onto the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);
				
				CCountedCardContainer pSubjects;

				if (pCard->IsInplay())
					pSubjects.AddCard(pCard, CardPlacement::Top);

				CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
				pModifier2.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
