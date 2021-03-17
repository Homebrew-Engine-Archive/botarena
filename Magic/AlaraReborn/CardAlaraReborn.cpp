#include "stdafx.h"
#include "CardAlaraReborn.h"

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

		DEFINE_CARD(CAnathemancerCard);
		DEFINE_CARD(CArchitectsOfWillCard);
		DEFINE_CARD(CArdentPleaCard);
		DEFINE_CARD(CArsenalThresherCard);
		DEFINE_CARD(CBantSojournersCard);
		DEFINE_CARD(CBantSurebladeCard);
		DEFINE_CARD(CBehemothSledgeCard);
		DEFINE_CARD(CBituminousBlastCard);
		DEFINE_CARD(CBlitzHellionCard);
		DEFINE_CARD(CBloodbraidElfCard);
		DEFINE_CARD(CBrainbiteCard);
		DEFINE_CARD(CBreathOfMalfegorCard);
		DEFINE_CARD(CCapturedSunlightCard);
		DEFINE_CARD(CCerodonYearlingCard);
		DEFINE_CARD(CClovenCastingCard);
		DEFINE_CARD(CColossalMightCard);
		DEFINE_CARD(CCrystallizationCard);
		DEFINE_CARD(CDauntlessEscortCard);
		DEFINE_CARD(CDeadshotMinotaurCard);
		DEFINE_CARD(CDeathbringerThoctarCard);
		DEFINE_CARD(CDefilerOfSoulsCard);
		DEFINE_CARD(CDemonicDreadCard);
		DEFINE_CARD(CDenyRealityCard);
		DEFINE_CARD(CDoubleNegativeCard);
		DEFINE_CARD(CDragonAppeasementCard);
		DEFINE_CARD(CDragonBroodmotherCard);
		DEFINE_CARD(CDrasticRevelationCard);
		DEFINE_CARD(CEnlistedWurmCard);
		DEFINE_CARD(CEsperSojournersCard);
		DEFINE_CARD(CEsperStormbladeCard);
		DEFINE_CARD(CEthercasteKnightCard);
		DEFINE_CARD(CEtherwroughtPageCard);
		DEFINE_CARD(CEtheriumAbominationCard);
		DEFINE_CARD(CEtherswornShieldmageCard);
		DEFINE_CARD(CFieldmistBorderpostCard);
		DEFINE_CARD(CFightToTheDeathCard);
		DEFINE_CARD(CFiligreeAngelCard);
		DEFINE_CARD(CFinestHourCard);
		DEFINE_CARD(CFirewildBorderpostCard);
		DEFINE_CARD(CFlurryOfWingsCard);
		DEFINE_CARD(CGlassdustHulkCard);
		DEFINE_CARD(CGloryscaleViashinoCard);
		DEFINE_CARD(CGodtrackerOfJundCard);
		DEFINE_CARD(CGorgerWurmCard);
		DEFINE_CARD(CGrixisGrimbladeCard);
		DEFINE_CARD(CGrixisSojournersCard);
		DEFINE_CARD(CGrizzledLeotauCard);
		DEFINE_CARD(CIdentityCrisisCard);
		DEFINE_CARD(CIgneousPouncerCard);
		DEFINE_CARD(CIllusoryDemonCard);
		DEFINE_CARD(CIntimidationBoltCard);
		DEFINE_CARD(CJenaraAsuraOfWarCard);
		DEFINE_CARD(CJhessianZombiesCard);
		DEFINE_CARD(CJundHackbladeCard);
		DEFINE_CARD(CJundSojournersCard);
		DEFINE_CARD(CKarrthusTyrantOfJundCard);
		DEFINE_CARD(CKathariBomberCard);
		DEFINE_CARD(CKathariRemnantCard);
		DEFINE_CARD(CKnightOfNewAlaraCard);
		DEFINE_CARD(CKnotvinePaladinCard);
		DEFINE_CARD(CLavalancheCard);
		DEFINE_CARD(CLeoninArmorguardCard);
		DEFINE_CARD(CLichLordofUnxCard);
		DEFINE_CARD(CLightningReaverCard);
		DEFINE_CARD(CLordOfExtinctionCard);
		DEFINE_CARD(CLorescaleCoatlCard);
		DEFINE_CARD(CMadrushCyclopsCard);
		DEFINE_CARD(CMaelstromNexusCard);
		DEFINE_CARD(CMaelstromPulseCard);
		DEFINE_CARD(CMagefireWingsCard);
		DEFINE_CARD(CMageSlayerCard);
		DEFINE_CARD(CMarisisTwinclawsCard);
		DEFINE_CARD(CMarrowChomperCard);
		DEFINE_CARD(CMaskOfRiddlesCard);
		DEFINE_CARD(CMayaelsAriaCard);
		DEFINE_CARD(CMessengerFalconsCard);
		DEFINE_CARD(CMindFuneralCard);
		DEFINE_CARD(CMistveinBorderpostCard);
		DEFINE_CARD(CMonstrousCarabidCard);
		DEFINE_CARD(CMorbidBloomCard);
		DEFINE_CARD(CMycoidShepherdCard);
		DEFINE_CARD(CNayaHushbladeCard);
		DEFINE_CARD(CNayaSojournersCard);
		DEFINE_CARD(CNecromancersCovenantCard);
		DEFINE_CARD(CNemesisofReasonCard);
		DEFINE_CARD(CNulltreadGargantuanCard);
		DEFINE_CARD(COfferingToAshaCard);
		DEFINE_CARD(CPaleRecluseCard);
		DEFINE_CARD(CPredatoryAdvantageCard);
		DEFINE_CARD(CPutridLeechCard);
		DEFINE_CARD(CQasaliPridemageCard);
		DEFINE_CARD(CRebornHopeCard);
		DEFINE_CARD(CRetaliatorGriffinCard);
		DEFINE_CARD(CRhoxBruteCard);
		DEFINE_CARD(CSanctumPlowbeastCard);
		DEFINE_CARD(CSangriteBacklashCard);
		DEFINE_CARD(CSanityGnawersCard);
		DEFINE_CARD(CSewnEyeDrakeCard);
		DEFINE_CARD(CShieldOfTheRighteousCard);
		DEFINE_CARD(CSigilCaptainCard);
		DEFINE_CARD(CSigiledBehemothCard);
		DEFINE_CARD(CSigilOfTheNayanGodsCard);
		DEFINE_CARD(CSingeMindOgreCard);
		DEFINE_CARD(CSkyclawThrashCard);
		DEFINE_CARD(CSlaveOfBolasCard);
		DEFINE_CARD(CSoulManipulationCard);
		DEFINE_CARD(CSoulquakeCard);
		DEFINE_CARD(CSovereignsofLostAlaraCard);
		DEFINE_CARD(CSpellboundDragonCard);
		DEFINE_CARD(CSpellbreakerBehemothCard);
		DEFINE_CARD(CSphinxOfTheSteelWindCard);
		DEFINE_CARD(CStormcallersBoonCard);
		DEFINE_CARD(CStunSniperCard);
		DEFINE_CARD(CTaintedSigilCard);
		DEFINE_CARD(CTalonTrooperCard);
		DEFINE_CARD(CThopterFoundryCard);
		DEFINE_CARD(CThoughtHemorrhageCard);
		DEFINE_CARD(CThraximundarCard);
		DEFINE_CARD(CTimeSieveCard);
		DEFINE_CARD(CTraceofAbundanceCard);
		DEFINE_CARD(CUnbenderTineCard);
		DEFINE_CARD(CUriltheMiststalkerCard);
		DEFINE_CARD(CValleyRannetCard);
		DEFINE_CARD(CVectisDominatorCard);
		DEFINE_CARD(CVedalkenGhoulCard);
		DEFINE_CARD(CVedalkenHereticCard);
		DEFINE_CARD(CVeinfireBorderpostCard);
		DEFINE_CARD(CVengefulRebirthCard);
		DEFINE_CARD(CViolentOutburstCard);
		DEFINE_CARD(CVithianRenegadesCard);
		DEFINE_CARD(CWallOfDenialCard);
		DEFINE_CARD(CWargateCard);
		DEFINE_CARD(CWildfieldBorderpostCard);
		DEFINE_CARD(CWingedCoatlCard);
		DEFINE_CARD(CZealousPersecutionCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CLordOfExtinctionCard::CLordOfExtinctionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of Extinction"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new TrueCardComparer));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTimeSieveCard::CTimeSieveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Time Sieve"), CardType::Artifact, nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""), PlayerEffectType::TimeWalk, FALSE, 1));

	cpAbility->SetAffectControllerOnly();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(5, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBehemothSledgeCard::CBehemothSledgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Behemoth Sledge"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1") WHITE_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Lifelink);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrainbiteCard::CBrainbiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brainbite"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBreathOfMalfegorCard::CBreathOfMalfegorCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Breath of Malfegor"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
		Life(-5),
		FALSE_CARD_COMPARER, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetTargetOpponentPlayerOnly();
}

//____________________________________________________________________________
//
CCerodonYearlingCard::CCerodonYearlingCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Cerodon Yearling"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CColossalMightCard::CColossalMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Colossal Might"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT GREEN_MANA_TEXT,
			Power(+4), Life(+2),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEthercasteKnightCard::CEthercasteKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ethercaste Knight"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEthercasteKnightCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CEthercasteKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CGodtrackerOfJundCard::CGodtrackerOfJundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godtracker of Jund"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(4));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrizzledLeotauCard::CGrizzledLeotauCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grizzled Leotau"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CJenaraAsuraOfWarCard::CJenaraAsuraOfWarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jenara, Asura of War"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") WHITE_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeoninArmorguardCard::CLeoninArmorguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Armorguard"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
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

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLorescaleCoatlCard::CLorescaleCoatlCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lorescale Coatl"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMadrushCyclopsCard::CMadrushCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Madrush Cyclops"), CardType::Creature, CREATURE_TYPE2(Cyclops, Warrior), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagefireWingsCard::CMagefireWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Magefire Wings"), nID,
		RED_MANA_TEXT BLUE_MANA_TEXT,
		Power(+2), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CPutridLeechCard::CPutridLeechCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Putrid Leech"), CardType::Creature, CREATURE_TYPE2(Zombie, Leech), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->AddPayLifeDeltaCost(Life(-2));
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CQasaliPridemageCard::CQasaliPridemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Qasali Pridemage"), CardType::Creature, CREATURE_TYPE2(Cat, Wizard), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQasaliPridemageCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQasaliPridemageCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CRhoxBruteCard::CRhoxBruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Brute"), CardType::Creature, CREATURE_TYPE2(Rhino, Warrior), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CSigiledBehemothCard::CSigiledBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigiled Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSigiledBehemothCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSigiledBehemothCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CTalonTrooperCard::CTalonTrooperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Talon Trooper"), CardType::Creature, CREATURE_TYPE2(Bird, Scout), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CVithianRenegadesCard::CVithianRenegadesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vithian Renegades"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfDenialCard::CWallOfDenialCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Denial"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(8))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CWingedCoatlCard::CWingedCoatlCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Winged Coatl"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CUnbenderTineCard::CUnbenderTineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Unbender Tine"), CardType::Artifact, nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new TrueCardComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COfferingToAshaCard::COfferingToAshaCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Offering to Asha"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("4"));

	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CLavalancheCard::CLavalancheCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lavalanche"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetPropagateToTargetedPlayersCreatures();
}

//____________________________________________________________________________
//
CBantSojournersCard::CBantSojournersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bant Sojourners"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->SetCreateTokenOption(TRUE, _T("Soldier I"), 2953, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetCreateTokenOption(TRUE,_T("Soldier I"), 2953, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrixisSojournersCard::CGrixisSojournersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grixis Sojourners"), CardType::Creature, CREATURE_TYPE2(Zombie, Ogre), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") BLACK_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJundSojournersCard::CJundSojournersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jund Sojourners"), CardType::Creature, CREATURE_TYPE2(Viashino, Shaman), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") RED_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeadshotMinotaurCard::CDeadshotMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadshot Minotaur"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("3") GREEN_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(FALSE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Green Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				GREEN_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Red Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				RED_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlassdustHulkCard::CGlassdustHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glassdust Hulk"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(true);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//White Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Blue Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLUE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSanctumPlowbeastCard::CSanctumPlowbeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanctum Plowbeast"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		//Plainscycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Plains"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Islandcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Islands"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIllusoryDemonCard::CIllusoryDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusory Demon"), CardType::Creature, CREATURE_TYPE2(Demon, Illusion), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJhessianZombiesCard::CJhessianZombiesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhessian Zombies"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddFear(FALSE);
	{
		//Islandcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Islands"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Swampcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Swamps"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaskOfRiddlesCard::CMaskOfRiddlesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mask of Riddles"), CardType::Artifact | CardType::Equipment, nID, 
		BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		CCreatureKeywordModifier* pFearModifier = new CCreatureKeywordModifier;
		pFearModifier->GetModifier().SetToAdd(CreatureKeyword::Fear);
		pFearModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCreatureModifier(pFearModifier);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CIgneousPouncerCard::CIgneousPouncerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Igneous Pouncer"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(1))
{
	{
		//Swampcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Swamps"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Mountaincycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> 
			cpAbility(::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Mountains"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMonstrousCarabidCard::CMonstrousCarabidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Monstrous Carabid"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		//Black Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLACK_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Red Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				RED_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSanityGnawersCard::CSanityGnawersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanity Gnawers"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpellbreakerBehemothCard::CSpellbreakerBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spellbreaker Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(4));
	m_CardFilter.AddComparer(new CardControllerComparer(this));

	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
			PlayerEffectType::SpellsCantBeCountered,
			reinterpret_cast<int>(&m_CardFilter)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CValleyRannetCard::CValleyRannetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Valley Rannet"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(3))
{
	{
		//Mountaincycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Mountains"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Forestcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Forests"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMycoidShepherdCard::CMycoidShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mycoid Shepherd"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(4));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPaleRecluseCard::CPaleRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pale Recluse"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		//Forestcycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Forests"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Plainscycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Plains"))));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRebornHopeCard::CRebornHopeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reborn Hope"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT WHITE_MANA_TEXT,
			new CardMulticoloredComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFightToTheDeathCard::CFightToTheDeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fight to the Death"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT WHITE_MANA_TEXT,
			new BlockingCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddChildFilter(new CCardFilter(new BlockedCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStunSniperCard::CStunSniperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stun Sniper"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"), new AnyCreatureComparer, FALSE,
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNulltreadGargantuanCard::CNulltreadGargantuanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nulltread Gargantuan"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVedalkenHereticCard::CVedalkenHereticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Heretic"), CardType::Creature, CREATURE_TYPE2(Vedalken, Rogue), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGloryscaleViashinoCard::CGloryscaleViashinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gloryscale Viashino"), CardType::Creature, CREATURE_TYPE2(Viashino, Soldier), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnathemancerCard::CAnathemancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anathemancer"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAnathemancerCard::BeforeResolution1));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnathemancerCard::BeforeResolution2));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnathemancerCard::BeforeResolution1(CAnathemancerCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(
		m_CardFilter.CountIncluded(pOppInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CAnathemancerCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDragonBroodmotherCard::CDragonBroodmotherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragon Broodmother"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon B"), 2776, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrasticRevelationCard::CDrasticRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Drastic Revelation"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDrasticRevelationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDrasticRevelationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier modifier1 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));

	CDrawCardModifier modifier2 = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));
	CRandomDiscardModifier modifier3 = CRandomDiscardModifier(3);

	modifier1.ApplyTo(pAction->GetController());
	modifier2.ApplyTo(pAction->GetController());
	modifier3.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CEtheriumAbominationCard::CEtheriumAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etherium Abomination"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	//Unearth ability
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT));

	cpAbility->SetGraveyardOnly();
	cpAbility->SetAbilityText(_T("Unearth"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEtheriumAbominationCard::BeforeResolution));
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
	AddAbility(cpAbility.GetPointer());
}

bool CEtheriumAbominationCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGorgerWurmCard::CGorgerWurmCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Gorger Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGorgerWurmCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);
}

void CGorgerWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CMessengerFalconsCard::CMessengerFalconsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Messenger Falcons"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

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
CSewnEyeDrakeCard::CSewnEyeDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sewn-Eye Drake"), CardType::Creature, CREATURE_TYPE2(Zombie, Drake), nID,
	_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaelstromPulseCard::CMaelstromPulseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Maelstrom Pulse"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMaelstromPulseCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT BLACK_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Battlefield,
			ZoneId::Graveyard,
			true, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaelstromPulseCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Destroy target nonland permanent and all other permanents with the same name. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CMaelstromPulseCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CMaelstromPulseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CArchitectsOfWillCard::CArchitectsOfWillCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Architects of Will"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
	_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Black Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLACK_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Blue Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				BLUE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSphinxOfTheSteelWindCard::CSphinxOfTheSteelWindCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx of the Steel Wind"), CardType::_ArtifactCreature, CREATURE_TYPE(Sphinx), nID,
		_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CNemesisofReasonCard::CNemesisofReasonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nemesis of Reason"), CardType::Creature, CREATURE_TYPE2(Leviathan, Horror), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetRevealCount(10);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVedalkenGhoulCard::CVedalkenGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Ghoul"), CardType::Creature, CREATURE_TYPE2(Vedalken, Zombie), nID,
		BLACK_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThopterFoundryCard::CThopterFoundryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thopter Foundry"), CardType::Artifact, nID, 
		WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Artifact)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
			BLACK_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
		m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.SetFilterName(_T("a non token artifact"), _T("non token artifacts"));

		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Thopter A"), 2709,
				1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1,&m_CardFilter);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlitzHellionCard::CBlitzHellionCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Blitz Hellion"), CardType::Creature, CREATURE_TYPE(Hellion), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKathariBomberCard::CKathariBomberCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kathari Bomber"), CardType::Creature, CREATURE_TYPE2(Bird, Shaman), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin C"), 2702, 2);

		cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Unearth ability
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetAbilityText(_T("Unearth"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKathariBomberCard::BeforeResolution));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKathariBomberCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Unearth, pAction->GetController());
		pModifier1.ApplyTo(this);

		if (IsInplay())
		{
			pSubjects.AddCard(this, CardPlacement::Top);

			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
			pModifier2.ApplyTo(this);

			CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
				pModifier3.GetModifier().SetToAdd(ReplacementKeyword::Unearth);
				pModifier3.GetModifier().SetOneTurnOnly(FALSE);
			pModifier3.ApplyTo(this);
		}
	}

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier4.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDoubleNegativeCard::CDoubleNegativeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Double Negative"), CardType::Instant | CardType::Trap, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, 
			new TrueCardComparer,
			ZoneId::Stack, ZoneId::Graveyard, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMarrowChomperCard::CMarrowChomperCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Marrow Chomper"), CardType::Creature, CREATURE_TYPE2(Zombie, Lizard), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMarrowChomperCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMarrowChomperCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

void CMarrowChomperCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

bool CMarrowChomperCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	int p = GetDevouredCount();
	//if (p == 0) return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	p = p * 2;
	triggerContext.m_LifeModifier.SetLifeDelta(Life(p));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CMarisisTwinclawsCard::CMarisisTwinclawsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marisi's Twinclaws"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNayaSojournersCard::CNayaSojournersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Naya Sojourners"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") GREEN_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSigilOfTheNayanGodsCard::CSigilOfTheNayanGodsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sigil of the Nayan Gods"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CSigilOfTheNayanGodsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard,
				CAbilityEnchant::PostEnchantCallback(this,
					&CSigilOfTheNayanGodsCard::PostEnchant)));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Green Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				GREEN_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//White Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CSigilOfTheNayanGodsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Creature, false), (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CSigilOfTheNayanGodsCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CSoulManipulationCard::CSoulManipulationCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Soul Manipulation"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
	{
		//Return target creature card from your graveyard to your hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose both
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetAbilityText(_T("Choose both. Casts"));

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

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZealousPersecutionCard::CZealousPersecutionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Zealous Persecution"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();		

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CZealousPersecutionCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}
bool CZealousPersecutionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pCreatures;	
	CPowerModifier pModifier = CPowerModifier(Power(-1));
	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);


	if ((CCardFilter::GetFilter(_T("creatures")))->GetIncluded(*(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)), pCreatures))	
	{
		for (int i = 0; i < pCreatures.GetSize(); ++i)
		{
			pModifier.ApplyTo((CCreatureCard*)pCreatures.GetAt(i));
			pModifier1.ApplyTo((CCreatureCard*)pCreatures.GetAt(i));
		}
	}

	return true;
}
//____________________________________________________________________________
//
CFiligreeAngelCard::CFiligreeAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Filigree Angel"), CardType::_ArtifactCreature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("an Artifact"), _T("Artifacts"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CFiligreeAngelCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFiligreeAngelCard::BeforeResolution(CFiligreeAngelCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(3*
		m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CLightningReaverCard::CLightningReaverCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lightning Reaver"), CardType::Creature, CREATURE_TYPE2(Zombie, Beast), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLightningReaverCard::SetTriggerContextU));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLightningReaverCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool  CLightningReaverCard::SetTriggerContextU(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
												CNode* pToNode) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();	
	return (nCounterCount>0);
}

bool CLightningReaverCard::BeforeResolution(CLightningReaverCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();	

	triggerContext.m_LifeModifier = Life(-nCounterCount);

	pAction->SetTriggerContext(triggerContext);

	return nCounterCount >= 1;
}

//____________________________________________________________________________
//
CEtherswornShieldmageCard::CEtherswornShieldmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ethersworn Shieldmage"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("1") BLUE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Ethersworn Shieldmage Effect"), 61037, 1, FALSE, ZoneId::_Effects));

		cpAbility->AddAbilityTag(AbilityTag::DamagePrevention);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathbringerThoctarCard::CDeathbringerThoctarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathbringer Thoctar"), CardType::Creature, CREATURE_TYPE2(Zombie, Beast), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMindFuneralCard::CMindFuneralCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Funeral"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			0));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetRevealCardsToOthers(TRUE);
	cpSpell->SetReorder(true, ZoneId::Graveyard, CardPlacement::Top);	
		
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindFuneralCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMindFuneralCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	CZone* pLib = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library);

	int landcount = 0;
	int n = 0;

	for (int i = 0; i < pLib->GetSize(); ++i)
	{
		CCard* pOppCard = pLib->GetAt(pLib->GetSize()-1-i);
		if (pOppCard->GetCardType().IsLand())
			landcount = landcount +1;
		if (landcount==4) { n = i+1; landcount = landcount +1;}
	}

	if (n==0) n=pLib->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = n;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return n > 0;
}

//____________________________________________________________________________
//
CIdentityCrisisCard::CIdentityCrisisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Identity Crisis"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			SpecialNumber::Any, MoveType::Others, ZoneId::Exile, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards")))); //SpecialNumber::All would show "... discard 2147483646 cards" :D

	CMoveCardModifier* pCardModifier1 = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others);		
	CZoneCardModifier* pPModifier1 = new CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(pCardModifier1));
	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pPModifier1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSoulquakeCard::CSoulquakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soulquake"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CSoulquakeCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddSpell(cpSpell.GetPointer());
}

void CSoulquakeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
	CPlayer* opp =  m_pGame->GetNextPlayer(GetController());

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)));
	
	pModifier.ApplyTo(cont);
	pModifier.ApplyTo(opp);
}

//____________________________________________________________________________
//
CSlaveOfBolasCard::CSlaveOfBolasCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slave of Bolas"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CSlaveOfBolasCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") RED_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CSlaveOfBolasCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(FALSE);
	pModifier1.ApplyTo(pTarget);

	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
	pModifier2.ApplyTo(pTarget);

	CCountedCardContainer pSubjects;

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier3.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBantSurebladeCard::CBantSurebladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bant Sureblade"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		BLUE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrixisGrimbladeCard::CGrixisGrimbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grixis Grimblade"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJundHackbladeCard::CJundHackbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jund Hackblade"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNayaHushbladeCard::CNayaHushbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Naya Hushblade"), CardType::Creature, CREATURE_TYPE2(Elf, Rogue), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEsperStormbladeCard::CEsperStormbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Esper Stormblade"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauntlessEscortCard::CDauntlessEscortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauntless Escort"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("1") WHITE_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pmodifier->LinkPlayerModifier(pModifier2);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier);		

	cpAbility->SetAbilityName(_T("Creatures you control are indestructible this turn"));
	cpAbility->SetAbilityText(_T("Creatures you control are indestructible this turn"));

	cpAbility->AddSacrificeCost();				
	
	AddAbility(cpAbility.GetPointer());		
}

//____________________________________________________________________________
//
CFinestHourCard::CFinestHourCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Finest Hour"), CardType::GlobalEnchantment, nID, 
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)   	
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFinestHourCard::OnResolutionCompleted1))
{
	{
		// Exalted Ability
		typedef 
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFinestHourCard::SetTriggerContext));
				
		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFinestHourCard::SetTriggerContext2));
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
				
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFinestHourCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature,
										AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CFinestHourCard::SetTriggerContext2(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature,
										AttackSubject attacked) const
{
	triggerContext.m_pCard = pCreature;
	CCombatNode* pThisNode = (CCombatNode*)GetGame()->GetCurrentNode();
	
	return (pThisNode->GetCombatCount() == 1);
}

void CFinestHourCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CFastCombatModifier pModifier1 = CFastCombatModifier(m_pGame);
	pModifier1.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CWildfieldBorderpostCard::CWildfieldBorderpostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wildfield Borderpost"), CardType::Artifact, nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		//alternative casting cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("basic lands")));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWildfieldBorderpostCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CWildfieldBorderpostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CKnotvinePaladinCard::CKnotvinePaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knotvine Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an untapped creature"), _T("untapped creatures"), new NegateCardComparer(new TappedComparer))
{	
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKnotvinePaladinCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKnotvinePaladinCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CCrystallizationCard::CCrystallizationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Crystallization"), nID,
		BLUE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CCrystallizationCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);

	/*{
		counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
			::CreateObject<CChgPwrTghAttrEnchant>(this, 
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CCrystallizationCard::CreateAdditionalAbility));

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);

		AddSpell(cpSpell.GetPointer());
	}*/
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Enchantment,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CCrystallizationCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTraceofAbundanceCard::CTraceofAbundanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Trace of Abundance"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CardKeyword::Shroud));
		
		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CTraceofAbundanceCard::CreateAdditionalAbility));

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	/*{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				WHITE_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CardKeyword::Shroud));

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CTraceofAbundanceCard::CreateAdditionalAbility));

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}*/
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Enchantment,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,				
				new CardTypeComparer(CardType::_Land, false), false));		

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CTraceofAbundanceCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredProdManaAbility, CWhenSelfTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieldmistBorderpostCard::CFieldmistBorderpostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fieldmist Borderpost"), CardType::Artifact, nID,
		_T("1") BLUE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("basic lands")));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFieldmistBorderpostCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CFieldmistBorderpostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CFirewildBorderpostCard::CFirewildBorderpostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Firewild Borderpost"), CardType::Artifact, nID,
		_T("1") GREEN_MANA_TEXT RED_MANA_TEXT, AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("basic lands")));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFirewildBorderpostCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CFirewildBorderpostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CVeinfireBorderpostCard::CVeinfireBorderpostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Veinfire Borderpost"), CardType::Artifact, nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("basic lands")));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CVeinfireBorderpostCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CVeinfireBorderpostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CMistveinBorderpostCard::CMistveinBorderpostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mistvein Borderpost"), CardType::Artifact, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Artifact,
				_T("1")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("basic lands")));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMistveinBorderpostCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMistveinBorderpostCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CShieldOfTheRighteousCard::CShieldOfTheRighteousCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shield of the Righteous"), CardType::Artifact | CardType::Equipment, nID, 
		WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"),
			new AnyCreatureComparer));
	
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CShieldOfTheRighteousCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CShieldOfTheRighteousCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShieldOfTheRighteousCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CShieldOfTheRighteousCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (pCreature->IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CEsperSojournersCard::CEsperSojournersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Esper Sojourners"), CardType::_ArtifactCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorbidBloomCard::CMorbidBloomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morbid Bloom"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMorbidBloomCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,					
			_T("4") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMorbidBloomCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();

	if (target->GetCardType().IsCreature() && bResult)
	{
		CCreatureCard* pCreature = (CCreatureCard*)target;
		int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());

		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling J"), 62001, nToughness);

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CIntimidationBoltCard::CIntimidationBoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Intimidation Bolt"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CIntimidationBoltCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-3), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CIntimidationBoltCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddNegateComparer(new SpecificCardComparer(pAbilityAction->GetAssociatedCard()));

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::CantAttack, true, true)));

	pModifier.ApplyTo(pAbilityAction->GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(pAbilityAction->GetController()));
}

//____________________________________________________________________________
//
CMageSlayerCard::CMageSlayerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mage Slayer"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMageSlayerCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMageSlayerCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMageSlayerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CMageSlayerCard::BeforeResolution(CMageSlayerCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = pAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nPower = GET_INTEGER(pCreatureCard->GetLastKnownPower());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nPower));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSovereignsofLostAlaraCard::CSovereignsofLostAlaraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sovereigns of Lost Alara"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(5))
{
	{
		typedef 
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+0));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSovereignsofLostAlaraCard::SetTriggerContext));
				
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSovereignsofLostAlaraCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Exalted Ability
		typedef 
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSovereignsofLostAlaraCard::SetTriggerContext));		

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}	

bool CSovereignsofLostAlaraCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature,
										AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CSovereignsofLostAlaraCard::BeforeResolution(TriggeredAbility2::TriggeredActionType* pAction)
{		
	CPlayer* pController = pAction->GetController();

	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (!(triggerContext.m_pCreature->GetZone()->GetZoneId() == ZoneId::Battlefield))
		return false;

	CCardFilter pCardfilter;
	pCardfilter.AddComparer(new AuraFitComparer(triggerContext.m_pCreature));

	CCountedCardContainer SelectedCards;
	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(pController,
		MinimumValue(0), MaximumValue(1),
		pController, ZoneId::Library,
		&pCardfilter, 
		ZoneId::Battlefield, TRUE, CardPlacement::Top,
		FALSE, FALSE, FALSE,
		&SelectedCards);
	pModifier2.ApplyTo(pController);
			
	if (!SelectedCards.GetSize()) return false;
	CCard* enchCard = SelectedCards.GetAt(0);

	for (int i = 0; i < enchCard->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(enchCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(triggerContext.m_pCreature, pController,enchCard->GetSpells().GetAt(i)->GetActionValue());
	}

	return true;
}

//____________________________________________________________________________
//
CThoughtHemorrhageCard::CThoughtHemorrhageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thought Hemorrhage"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT BLACK_MANA_TEXT,
			ZoneId::Exile, TRUE, TRUE, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSangriteBacklashCard::CSangriteBacklashCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sangrite Backlash"), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT,
		Power(+3), Life(-3))
{
	//hybrid mana cost
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Enchantment,
			GREEN_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE,
			Life(0), PreventableType::NotPreventable));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDragonAppeasementCard::CDragonAppeasementCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon Appeasement"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonAppeasementCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonAppeasementCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
CThraximundarCard::CThraximundarCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Thraximundar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Assassin), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThraximundarCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThraximundarCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (moveType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
CBloodbraidElfCard::CBloodbraidElfCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Bloodbraid Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Berserker), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEnlistedWurmCard::CEnlistedWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enlisted Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBituminousBlastCard::CBituminousBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Bituminous Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-4),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCapturedSunlightCard::CCapturedSunlightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Captured Sunlight"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT,
			Life(+4), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());

	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArdentPleaCard::CArdentPleaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ardent Plea"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArdentPleaCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArdentPleaCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CDemonicDreadCard::CDemonicDreadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Demonic Dread"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

	
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDenyRealityCard::CDenyRealityCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Deny Reality"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	typedef
		TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKathariRemnantCard::CKathariRemnantCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Kathari Remnant"), CardType::Creature, CREATURE_TYPE2(Bird, Skeleton), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(1),
		BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
	{
		typedef
		TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStormcallersBoonCard::CStormcallersBoonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Stormcaller's Boon"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CViolentOutburstCard::CViolentOutburstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Violent Outburst"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKnightOfNewAlaraCard::CKnightOfNewAlaraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of New Alara"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaelstromNexusCard::CMaelstromNexusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Maelstrom Nexus"), CardType::GlobalEnchantment, nID,
		ALL_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMaelstromNexusCard::CreateAbility)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CMaelstromNexusCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
											ZoneId::_AllZones, ZoneId::Stack));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetManaSourcesBeforeSelection(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaelstromNexusCard::SetTriggerContext));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CMaelstromNexusCard::SetTriggerContext(CTriggeredCascadeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CPlayer* player = GetController();

	return (player->GetCertainAntiTypeCastedCount(CardType::_Land)<1);
}


//____________________________________________________________________________
//
CWargateCard::CWargateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wargate"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));		

		cpSpell->SetAbilityText(_T("Search your library for a permanent card with converted mana cost X or less. Casts"));
		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWargateCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CWargateCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(n));

	CPlayerSearchModifier pModifier = CPlayerSearchModifier(
			GetController(),
			MinimumValue(0),
			MaximumValue(1),
			GetController(),
			ZoneId::Library,
			&m_CardFilter_temp,
			ZoneId::Battlefield,
			FALSE,
			CardPlacement::Top,
			FALSE,
			TRUE);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CArsenalThresherCard::CArsenalThresherCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Arsenal Thresher"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CArsenalThresherCard::OnZoneChanged))
	, m_CardFilter(_T("1 artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddAmplify(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

void CArsenalThresherCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CUriltheMiststalkerCard::CUriltheMiststalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uril, the Miststalker"), CardType::_LegendaryCreature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddHexproof(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantmentCount> cpAbility(
			::CreateObject<CPwrTghAttrEnchantmentCount>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVengefulRebirthCard::CVengefulRebirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vengeful Rebirth"), CardType::Sorcery, nID)
{
	counted_ptr<CVengefulRebirthSpell> cpSpell(
		::CreateObject<CVengefulRebirthSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT GREEN_MANA_TEXT
			));	

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRetaliatorGriffinCard::CRetaliatorGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Retaliator Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRetaliatorGriffinCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRetaliatorGriffinCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRetaliatorGriffinCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CRetaliatorGriffinCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);

	pModifier.ApplyTo(this);
	
	return true;
}
//____________________________________________________________________________
//
CTaintedSigilCard::CTaintedSigilCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tainted Sigil"), CardType::Artifact, nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTaintedSigilCard::OnResolutionCompleted))
{
    counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
            _T(""),
            Life(+0), PreventableType::NotPreventable));

    cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

    AddAbility(cpAbility.GetPointer());
}

void CTaintedSigilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	Life nDelta = Life(0);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nDelta += GetGame()->GetPlayer(ip)->GetTotalLifeLossTakenThisTurn();

	CLifeModifier* pModifier = new CLifeModifier(nDelta, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CLichLordofUnxCard::CLichLordofUnxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lich Lord of Unx"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				_T("Zombie Wizard"), 2936,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));	

		cpAbility->SetAbilityText(_T("Target player loses X life and puts the top X cards of his or her library into his or her graveyard"));
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLichLordofUnxCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLichLordofUnxCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = pAction->GetAssociatedPlayer();

	CCardFilter cardfilter;
	cardfilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	
	int nCreatures = cardfilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier modifier1 = CLifeModifier(Life(-nCreatures), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier1.ApplyTo(pPlayer);

	CZoneModifier modifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCreatures, CZoneModifier::RoleType::PrimaryPlayer);
	modifier2.AddSelection(MinimumValue(nCreatures), MaximumValue(nCreatures), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	modifier2.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CDefilerOfSoulsCard::CDefilerOfSoulsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Defiler of Souls"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClovenCastingCard::CClovenCastingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cloven Casting"), CardType::GlobalEnchantment, nID,
		_T("5") BLUE_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClovenCastingCard::SetTriggerContext));
	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

bool CClovenCastingCard::SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;

	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						triggerContext.m_pStackAction = const_cast<CStackAbilityAction*>(stack.GetStackAction(l).GetPointer());
						if (triggerContext.m_pStackAction->IsSpell() && (triggerContext.m_pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	return true;
}
//____________________________________________________________________________
//
CKarrthusTyrantOfJundCard::CKarrthusTyrantOfJundCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Karrthus, Tyrant of Jund"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
	, m_CardFilter(_T("a Dragon"), _T("Dragons"), new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKarrthusTyrantOfJundCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKarrthusTyrantOfJundCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pControllerBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
			int nBattlefield = pBattlefield->GetSize();

			for (int i = 0; i < nBattlefield; ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);
				if (pCard->GetCardType().IsCreature())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if (pCreatureCard->GetCardKeyword()->HasChangeling() || pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Dragon))
						pCard->Move(pBattlefield, pController, MoveType::Others);
				}
				else if (pCard->GetCardType().IsTribal())
				{
					CTribalCard* pTribalCard = (CTribalCard*)pCard;
					if (pTribalCard->GetCardKeyword()->HasChangeling() || pTribalCard->GetCreatureType().HasType(SingleCreatureType::Dragon))
						pCard->Move(pControllerBattlefield, pController, MoveType::Others);
				}
			}
		}
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}
	return true;
}
//____________________________________________________________________________
//
CMayaelsAriaCard::CMayaelsAriaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mayael's Aria"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredLoseGameAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMayaelsAriaCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

bool CMayaelsAriaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter1 = CCardFilter(new AnyCreatureComparer);
	CCardFilter m_CardFilter2 = CCardFilter(new AnyCreatureComparer);
	CCardFilter m_CardFilter3 = CCardFilter(new AnyCreatureComparer);
	CCardFilter m_CardFilter4 = CCardFilter(new AnyCreatureComparer);
	m_CardFilter1.AddComparer(new CreaturePowerComparer<std::greater<int>>(4));
	m_CardFilter2.AddComparer(new CreaturePowerComparer<std::greater<int>>(9));
	m_CardFilter3.AddComparer(new CreaturePowerComparer<std::greater<int>>(19));
	CPlayer* pController = GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter1.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter4,
			std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));
		pModifier1->ApplyTo(pController);
	}

	if (m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+10), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2->ApplyTo(pController);
	}
	
	if (m_CardFilter3.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		return true;
	else
		return false;
}
//____________________________________________________________________________
//
CNecromancersCovenantCard::CNecromancersCovenantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necromancer's Covenant"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNecromancersCovenantCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),	
				Power(+0), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNecromancersCovenantCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CCardFilter m_CardFilter = CCardFilter(new AnyCreatureComparer);
	CPlayer* pController = GetController();
	
	CZone* pGraveyard = pTarget->GetZoneById(ZoneId::Graveyard);
	
	int nCount = m_CardFilter.CountIncluded(pGraveyard->GetCardContainer());

	if (nCount > 0)
	{
		CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
		pModifier1->ApplyTo(pTarget);

		CTokenCreationModifier* pModifier2 = new CTokenCreationModifier(GetGame(), _T("Zombie E"), 2879, nCount);
		pModifier2->ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CSkyclawThrashCard::CSkyclawThrashCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyclaw Thrash"), CardType::_ArtifactCreature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSkyclawThrashCard::OnFlipSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkyclawThrashCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSkyclawThrashCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
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
		CPowerModifier* pModifier1 = new CPowerModifier(Power(+1));
		CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
		CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		pModifier1->ApplyTo(this);
		pModifier2->ApplyTo(this);
		pModifier3->ApplyTo(this);
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

void CSkyclawThrashCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CPowerModifier* pModifier1 = new CPowerModifier(Power(+1));
				CLifeModifier* pModifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
				CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
				pModifier3->GetModifier().SetToAdd(CreatureKeyword::Flying);
				pModifier3->GetModifier().SetOneTurnOnly(TRUE);
				pModifier1->ApplyTo(this);
				pModifier2->ApplyTo(this);
				pModifier3->ApplyTo(this);
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
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CSpellboundDragonCard::CSpellboundDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spellbound Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLUE_MANA_TEXT RED_MANA_TEXT, Power(3), Life(5))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSpellboundDragonCard::OnResolutionCompleted))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSpellboundDragonCard::OnCardSelected))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddAbility(cpAbility.GetPointer());
}

void CSpellboundDragonCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
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
									
			entry.strText.Format(_T("Discard %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
}

void CSpellboundDragonCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s discards %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
			int nCMC = pCard->GetConvertedManaCost();
			pModifier1.ApplyTo(pCard);

			if (nCMC > 0)
			{
				CPowerModifier pModifier2 = CPowerModifier(Power(nCMC));
				pModifier2.ApplyTo(this);
			}
				
			return;
		}
}

//____________________________________________________________________________
//
CVectisDominatorCard::CVectisDominatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vectis Dominator"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(2))
		, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVectisDominatorCard::OnPunisherSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVectisDominatorCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CVectisDominatorCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
	if (pPlayer->GetLife() >= 2 && !pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't pay life"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Pay 2 life"));

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTarget);
	}
	else
	{
		CCardOrientationModifier pModifier = CCardOrientationModifier(TRUE);
		
		pModifier.ApplyTo(pTarget);
	}
	return true;
}

void CVectisDominatorCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't pay life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardOrientationModifier pModifier = CCardOrientationModifier(TRUE);
		
				pModifier.ApplyTo((CCard*)dwContext1);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays 2 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSingeMindOgreCard::CSingeMindOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Singe-Mind Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Mutant), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSingeMindOgreCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSingeMindOgreCard::BeforeResolution(CAbilityAction* pAction)
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

		CLifeModifier pModifier = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier.ApplyTo(pTarget);
	}

	return true;
}
//____________________________________________________________________________
//
CSigilCaptainCard::CSigilCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigil Captain"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSigilCaptainCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSigilCaptainCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSigilCaptainCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetPower() == 1) && (pCreature->GetLife() == 1);
}

bool CSigilCaptainCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetPower() == 1) && (pCreature->GetLife() == 1);
}

//____________________________________________________________________________
//
CFlurryOfWingsCard::CFlurryOfWingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flurry of Wings"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Bird Soldier"), 2990,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlurryOfWingsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFlurryOfWingsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nAttackingCreatures = 0;
	CCardFilter mCardFilter;
	mCardFilter.SetComparer(new AttackingCreatureComparer);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nAttackingCreatures += mCardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nAttackingCreatures;

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CEtherwroughtPageCard::CEtherwroughtPageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Etherwrought Page"), CardType::Artifact, nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Artifact)
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CEtherwroughtPageCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEtherwroughtPageCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetAbilityName(_T("Mode 1 - gain 2 life"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEtherwroughtPageCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Mode 2 - filter top of your library"));
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_3_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetAbilityName(_T("Mode 3 - each opponent loses 1 life"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CEtherwroughtPageCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CNode* pNode)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: You gain 2 life"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: Look at the top card of your library, then you may put that card into your graveyard"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("%s: Each opponent loses 1 life"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return false;
}

void CEtherwroughtPageCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s chooses first mode"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_1_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses second mode"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_2_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses third mode"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_3_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

bool CEtherwroughtPageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CPredatoryAdvantageCard::CPredatoryAdvantageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Predatory Advantage"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Lizard"), 62030, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPredatoryAdvantageCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPredatoryAdvantageCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}
	
bool CPredatoryAdvantageCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return pToNode->GetGraph()->GetPlayer()->GetCertainTypeCastedCount(CardType::Creature) == 0;
}

bool CPredatoryAdvantageCard::BeforeResolution(CAbilityAction* pAction) const
{
	return GetGame()->GetActivePlayer()->GetCertainTypeCastedCount(CardType::Creature) == 0;
}

//____________________________________________________________________________
//
