#include "stdafx.h"
#include "CardOdyssey.h"

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

		DEFINE_CARD(CAbandonedOutpostCard);
		DEFINE_CARD(CAboshanCephalidEmperorCard);
		DEFINE_CARD(CAmugabaCard);
		DEFINE_CARD(CAncestralTributeCard);
		DEFINE_CARD(CAnimalBoneyardCard);
		DEFINE_CARD(CAshenFirebeastCard);
		DEFINE_CARD(CAtogatogCard);
		DEFINE_CARD(CAvenArcherCard);
		DEFINE_CARD(CAvenShrineCard);
		DEFINE_CARD(CAvenSmokeweaverCard);
		DEFINE_CARD(CBalshanBeguilerCard);
		DEFINE_CARD(CBalshanGriffinCard);
		DEFINE_CARD(CBarbarianLunaticCard);
		DEFINE_CARD(CBarbarianRingCard);
		DEFINE_CARD(CBashToBitsCard);
		DEFINE_CARD(CBattleStrainCard);
		DEFINE_CARD(CBearscapeCard);
		DEFINE_CARD(CBeastAttackCard);
		DEFINE_CARD(CBelovedChaplainCard);
		DEFINE_CARD(CBlazingSalvoCard);
		DEFINE_CARD(CBloodcurdlerCard);
		DEFINE_CARD(CBogWreckageCard);
		DEFINE_CARD(CBraidsCabalMinionCard);
		DEFINE_CARD(CBurningSandsCard);
		DEFINE_CARD(CCabalInquisitorCard);
		DEFINE_CARD(CCabalPatriarchCard);
		DEFINE_CARD(CCabalPitCard);
		DEFINE_CARD(CCabalShrineCard);
		DEFINE_CARD(CCallOfTheHerdCard);
		DEFINE_CARD(CCantivoreCard);
		DEFINE_CARD(CCarefulStudyCard);
		DEFINE_CARD(CCeaseFireCard);
		DEFINE_CARD(CCentaurGardenCard);
		DEFINE_CARD(CCephalidBrokerCard);
		DEFINE_CARD(CCephalidColiseumCard);
		DEFINE_CARD(CCephalidLooterCard);
		DEFINE_CARD(CCephalidRetainerCard);
		DEFINE_CARD(CCephalidScoutCard);
		DEFINE_CARD(CChamberOfManipulationCard);
		DEFINE_CARD(CChanceEncounterCard);
		DEFINE_CARD(CChatterOfTheSquirrelCard);
		DEFINE_CARD(CChainflingerCard);
		DEFINE_CARD(CChildhoodHorrorCard);
		DEFINE_CARD(CChlorophantCard);
		DEFINE_CARD(CCoffinPurgeCard);
		DEFINE_CARD(CCognivoreCard);
		DEFINE_CARD(CConfessorCard);
		DEFINE_CARD(CCrashingCentaurCard);
		DEFINE_CARD(CCryptCreeperCard);
		DEFINE_CARD(CCrystalQuarryCard);
		DEFINE_CARD(CCursedMonstrosityCard);
		DEFINE_CARD(CDarkwaterCatacombsCard);
		DEFINE_CARD(CDarkwaterEggCard);
		DEFINE_CARD(CDecayingSoilCard);
		DEFINE_CARD(CDecomposeCard);
		DEFINE_CARD(CDedicatedMartyrCard);
		DEFINE_CARD(CDeepReconnaissanceCard);
		DEFINE_CARD(CDematerializeCard);
		DEFINE_CARD(CDemoralizeCard);
		DEFINE_CARD(CDesertedTempleCard);
		DEFINE_CARD(CDevotedCaretakerCard);
		DEFINE_CARD(CDiligentFarmhandCard);
		DEFINE_CARD(CDirtyWereratCard);
		DEFINE_CARD(CDivertCard);
		DEFINE_CARD(CDivineSacramentCard);
		DEFINE_CARD(CDoggedHunterCard);
		DEFINE_CARD(CDreamwinderCard);
		DEFINE_CARD(CDruidLyristCard);
		DEFINE_CARD(CDruidsCallCard);
		DEFINE_CARD(CDwarvenGruntCard);
		DEFINE_CARD(CDwarvenRecruiterCard);
		DEFINE_CARD(CDwarvenShrineCard);
		DEFINE_CARD(CEarnestFellowshipCard);
		DEFINE_CARD(CEarthRiftCard);
		DEFINE_CARD(CElephantAmbushCard);
		DEFINE_CARD(CEmboldenCard);
		DEFINE_CARD(CEngulfingFlamesCard);
		DEFINE_CARD(CEntombCard);
		DEFINE_CARD(CEpicenterCard);
		DEFINE_CARD(CEscapeArtistCard);
		DEFINE_CARD(CExtractCard);
		DEFINE_CARD(CFaceOfFearCard);
		DEFINE_CARD(CFamishedGhoulCard);
		DEFINE_CARD(CFerventDenialCard);
		DEFINE_CARD(CFilthyCurCard);
		DEFINE_CARD(CFireboltCard);
		DEFINE_CARD(CFlameBurstCard);
		DEFINE_CARD(CFledglingImpCard);
		DEFINE_CARD(CFrightcrawlerCard);
		DEFINE_CARD(CGhastlyDemiseCard);
		DEFINE_CARD(CGorillaTitanCard);
		DEFINE_CARD(CGravestormCard);
		DEFINE_CARD(CHalberdierCard);
		DEFINE_CARD(CHintOfInsanityCard);
		DEFINE_CARD(CHolisticWisdomCard);
		DEFINE_CARD(CHallowedHealerCard);
		DEFINE_CARD(CHowlingGaleCard);
		DEFINE_CARD(CImmobilizingInkCard);
		DEFINE_CARD(CInfectedVerminCard);
		DEFINE_CARD(CInnocentBloodCard);
		DEFINE_CARD(CIridescentAngelCard);
		DEFINE_CARD(CIvyElementalCard);
		DEFINE_CARD(CJunkGolemCard);
		DEFINE_CARD(CKirtarsWrathCard);
		DEFINE_CARD(CKrosanArcherCard);
		DEFINE_CARD(CKrosanAvengerCard);
		DEFINE_CARD(CKrosanBeastCard);
		DEFINE_CARD(CLaquatussCreativityCard);
		DEFINE_CARD(CLastRitesCard);
		DEFINE_CARD(CLavaBlisterCard);
		DEFINE_CARD(CLeafDancerCard);
		DEFINE_CARD(CLieutenantKirtarCard);
		DEFINE_CARD(CLifeBurstCard);
		DEFINE_CARD(CLiquidFireCard);
		DEFINE_CARD(CLimestoneGolemCard);
		DEFINE_CARD(CLithatogCard);
		DEFINE_CARD(CLuminousGuardianCard);
		DEFINE_CARD(CMagmaVeinCard);
		DEFINE_CARD(CMalevolentAwakeningCard);
		DEFINE_CARD(CMasterApothecaryCard);
		DEFINE_CARD(CMetamorphicWurmCard);
		DEFINE_CARD(CMindBurstCard);
		DEFINE_CARD(CMinotaurExplorerCard);
		DEFINE_CARD(CMirariCard);
		DEFINE_CARD(CMomentsPeaceCard);
		DEFINE_CARD(CMossfireEggCard);
		DEFINE_CARD(CMossfireValleyCard);
		DEFINE_CARD(CMorbidHungerCard);
		DEFINE_CARD(CMorgueTheftCard);
		DEFINE_CARD(CMudholeCard);
		DEFINE_CARD(CMuscleBurstCard);
		DEFINE_CARD(CMysticCrusaderCard);
		DEFINE_CARD(CMysticEnforcerCard);
		DEFINE_CARD(CMysticPenitentCard);
		DEFINE_CARD(CMysticVisionaryCard);
		DEFINE_CARD(CMysticZealotCard);
		DEFINE_CARD(CNantukoElderCard);
		DEFINE_CARD(CNantukoMentorCard);
		DEFINE_CARD(CNantukoShrineCard);
		DEFINE_CARD(CNeedForSpeedCard);
		DEFINE_CARD(CNewFrontiersCard);
		DEFINE_CARD(CNimbleMongooseCard);
		DEFINE_CARD(CNomadDecoyCard);
		DEFINE_CARD(CNomadStadiumCard);
		DEFINE_CARD(CNutCollectorCard);
		DEFINE_CARD(COtarianJuggernautCard);
		DEFINE_CARD(COvereagerApprenticeCard);
		DEFINE_CARD(CPardicFirecatCard);
		DEFINE_CARD(CPatrolHoundCard);
		DEFINE_CARD(CPatronWizardCard);
		DEFINE_CARD(CPedanticLearningCard);
		DEFINE_CARD(CPetrifiedFieldCard);
		DEFINE_CARD(CPhantatogCard);
		DEFINE_CARD(CPhantomWhelpCard);
		DEFINE_CARD(CPiannaNomadCaptainCard);
		DEFINE_CARD(CPipersMelodyCard);
		DEFINE_CARD(CPredictCard);
		DEFINE_CARD(CPrimalFrenzyCard);
		DEFINE_CARD(CPsionicGiftCard);
		DEFINE_CARD(CPsychatogCard);
		DEFINE_CARD(CPulsatingIllusionCard);
		DEFINE_CARD(CRabidElephantCard);
		DEFINE_CARD(CRavagedHighlandsCard);
		DEFINE_CARD(CRayOfDistortionCard);
		DEFINE_CARD(CRecklessChargeCard);
		DEFINE_CARD(CRecoupCard);
		DEFINE_CARD(CRefreshCard);
		DEFINE_CARD(CRepelCard);
		DEFINE_CARD(CRepentantVampireCard);
		DEFINE_CARD(CResilientWandererCard);
		DEFINE_CARD(CRitesOfInitiationCard);
		DEFINE_CARD(CRitesOfSpringCard);
		DEFINE_CARD(CRoarOfTheWurmCard);
		DEFINE_CARD(CRottingGiantCard);
		DEFINE_CARD(CSacredRitesCard);
		DEFINE_CARD(CSadisticHypnotistCard);
		DEFINE_CARD(CSandstoneDeadfallCard);
		DEFINE_CARD(CSarcatogCard);
		DEFINE_CARD(CSavageFirecatCard);
		DEFINE_CARD(CScorchingMissileCard);
		DEFINE_CARD(CScreamsOfTheDamnedCard);
		DEFINE_CARD(CSeafloorDebrisCard);
		DEFINE_CARD(CSecondThoughtsCard);
		DEFINE_CARD(CSeizeTheDayCard);
		DEFINE_CARD(CSetonKrosanProtectorCard);
		DEFINE_CARD(CShadowbloodEggCard);
		DEFINE_CARD(CShadowbloodRidgeCard);
		DEFINE_CARD(CShadowmageInfiltratorCard);
		DEFINE_CARD(CShelterCard);
		DEFINE_CARD(CShiftyDoppelgangerCard);
		DEFINE_CARD(CShowerOfCoalsCard);
		DEFINE_CARD(CSimplifyCard);
		DEFINE_CARD(CSkullFractureCard);
		DEFINE_CARD(CSkycloudEggCard);
		DEFINE_CARD(CSkycloudExpanseCard);
		DEFINE_CARD(CSkyshooterCard);
		DEFINE_CARD(CSoulcatcherCard);
		DEFINE_CARD(CSparkMageCard);
		DEFINE_CARD(CSpellbaneCentaurCard);
		DEFINE_CARD(CSpringingTigerCard);
		DEFINE_CARD(CSquirrelMobCard);
		DEFINE_CARD(CSquirrelNestCard);
		DEFINE_CARD(CStalkingBloodsuckerCard);
		DEFINE_CARD(CStandstillCard);
		DEFINE_CARD(CSteamclawCard);
		DEFINE_CARD(CStillLifeCard);
		DEFINE_CARD(CStoneTongueBasiliskCard);
		DEFINE_CARD(CSungrassEggCard);
		DEFINE_CARD(CSungrassPrairieCard);
		DEFINE_CARD(CSylvanMightCard);
		DEFINE_CARD(CSyncopateCard);
		DEFINE_CARD(CTaintedPactCard);
		DEFINE_CARD(CTarnishedCitadelCard);
		DEFINE_CARD(CTerravoreCard);
		DEFINE_CARD(CTestamentOfFaithCard);
		DEFINE_CARD(CThaumatogCard);
		DEFINE_CARD(CThermalBlastCard);
		DEFINE_CARD(CThinkTankCard);
		DEFINE_CARD(CThoughtDevourerCard);
		DEFINE_CARD(CThoughtEaterCard);
		DEFINE_CARD(CThoughtNibblerCard);
		DEFINE_CARD(CTimberlandRuinsCard);
		DEFINE_CARD(CTirelessTribeCard);
		DEFINE_CARD(CTombfireCard);
		DEFINE_CARD(CTouchOfInvisibilityCard);
		DEFINE_CARD(CTreetopSentinelCard);
		DEFINE_CARD(CTrembleCard);
		DEFINE_CARD(CTwigwalkerCard);
		//DEFINE_CARD(CUnifyingTheoryCard);
		DEFINE_CARD(CUpheavalCard);
		DEFINE_CARD(CVampiricDragonCard);
		DEFINE_CARD(CVerdantSuccessionCard);
		DEFINE_CARD(CVivifyCard);
		DEFINE_CARD(CVolcanicSprayCard);
		DEFINE_CARD(CVolleyOfBouldersCard);
		DEFINE_CARD(CWaywardAngelCard);
		DEFINE_CARD(CWerebearCard);
		DEFINE_CARD(CWildMongrelCard);
		DEFINE_CARD(CWhisperingShadeCard);
		DEFINE_CARD(CWoodlandDruidCard);
		DEFINE_CARD(CWordsOfWisdomCard);
		DEFINE_CARD(CZombieAssassinCard);
		DEFINE_CARD(CZombieCannibalCard);
		DEFINE_CARD(CZoologistCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAshenFirebeastCard::CAshenFirebeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashen Firebeast"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Life(-1),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBraidsCabalMinionCard::CBraidsCabalMinionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Braids, Cabal Minion"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCantivoreCard::CCantivoreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cantivore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::_Enchantment, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidBrokerCard::CCephalidBrokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Broker"), CardType::Creature, CREATURE_TYPE(Cephalid), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			_T(""), 2));

	cpAbility->AddTapCost();

	cpAbility->SetDiscard(2, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidLooterCard::CCephalidLooterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Looter"), CardType::Creature, CREATURE_TYPE2(Cephalid, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidRetainerCard::CCephalidRetainerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Retainer"), CardType::Creature, CREATURE_TYPE(Cephalid), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidScoutCard::CCephalidScoutCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cephalid Scout"), CardType::Creature, CREATURE_TYPE3(Cephalid, Wizard, Scout), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT, 1));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCognivoreCard::CCognivoreCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cognivore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Instant, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEscapeArtistCard::CEscapeArtistCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Escape Artist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLithatogCard::CLithatogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lithatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMasterApothecaryCard::CMasterApothecaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Apothecary"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Cleric"), _T("Clerics"), new CreatureTypeComparer(CREATURE_TYPE(Cleric), false))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimbleMongooseCard::CNimbleMongooseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nimble Mongoose"), CardType::Creature, CREATURE_TYPE(Mongoose), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);

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
CPhantatogCard::CPhantatogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSetonKrosanProtectorCard::CSetonKrosanProtectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seton, Krosan Protector"), CardType::_LegendaryCreature, CREATURE_TYPE2(Centaur, Druid), nID,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Druid"), _T("Druids"), new CreatureTypeComparer(CREATURE_TYPE(Druid), false))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, _T(""), GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
CStalkingBloodsuckerCard::CStalkingBloodsuckerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stalking Bloodsucker"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTerravoreCard::CTerravoreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terravore"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThaumatogCard::CThaumatogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thaumatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility( 
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVampiricDragonCard::CVampiricDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vampiric Dragon"), CardType::Creature, CREATURE_TYPE2(Vampire, Dragon), nID,
		_T("6") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUpheavalCard::CUpheavalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Upheaval"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAbandonedOutpostCard::CAbandonedOutpostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Abandoned Outpost"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBogWreckageCard::CBogWreckageCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bog Wreckage"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRavagedHighlandsCard::CRavagedHighlandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ravaged Highlands"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeafloorDebrisCard::CSeafloorDebrisCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seafloor Debris"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTimberlandRuinsCard::CTimberlandRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Timberland Ruins"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarkwaterCatacombsCard::CDarkwaterCatacombsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Darkwater Catacombs"), nID)
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/

//____________________________________________________________________________
//
CMossfireValleyCard::CMossfireValleyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mossfire Valley"), nID)
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/

//____________________________________________________________________________
//
CShadowbloodRidgeCard::CShadowbloodRidgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shadowblood Ridge"), nID)
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/

//____________________________________________________________________________
//
CSkycloudExpanseCard::CSkycloudExpanseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Skycloud Expanse"), nID)
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/

//____________________________________________________________________________
//
CSungrassPrairieCard::CSungrassPrairieCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sungrass Prairie"), nID)
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/

//____________________________________________________________________________
//
CNomadStadiumCard::CNomadStadiumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nomad Stadium"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			WHITE_MANA_TEXT,
			Life(+4), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CNomadStadiumCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNomadStadiumCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CBarbarianRingCard::CBarbarianRingCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Barbarian Ring"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBarbarianRingCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBarbarianRingCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CCabalPitCard::CCabalPitCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cabal Pit"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
 	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CCabalPitCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCabalPitCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CCentaurGardenCard::CCentaurGardenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Centaur Garden"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}

	{
 	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+3), Life(+3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CCentaurGardenCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCentaurGardenCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CCephalidColiseumCard::CCephalidColiseumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cephalid Coliseum"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			BLUE_MANA_TEXT, 3));

	cpAbility->SetDiscard(3, FALSE, MoveType::Discard);

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CCephalidColiseumCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCephalidColiseumCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CCarefulStudyCard::CCarefulStudyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Careful Study"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT, 2));

	cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBashToBitsCard::CBashToBitsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bash to Bits"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBeastAttackCard::CBeastAttackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beast Attack"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast A"), 2744,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast A"), 2744,
				1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCallOfTheHerdCard::CCallOfTheHerdCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Call of the Herd"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				_T("Elephant C"), 2824,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Elephant C"), 2824,
				1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CChatterOfTheSquirrelCard::CChatterOfTheSquirrelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chatter of the Squirrel"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT,
				_T("Squirrel A"), 2769,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				_T("Squirrel A"), 2769,
				1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCoffinPurgeCard::CCoffinPurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coffin Purge"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeepReconnaissanceCard::CDeepReconnaissanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deep Reconnaissance"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands")),
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands")),
				ZoneId::Battlefield, FALSE, TRUE, TRUE));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDematerializeCard::CDematerializeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dematerialize"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEarthRiftCard::CEarthRiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Earth Rift"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CElephantAmbushCard::CElephantAmbushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elephant Ambush"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Elephant B"), 2748,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Elephant B"), 2748,
				1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEngulfingFlamesCard::CEngulfingFlamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Engulfing Flames"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					RED_MANA_TEXT,
					new AnyCreatureComparer,
					FALSE,
					Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					_T("3") RED_MANA_TEXT,
					new AnyCreatureComparer,
					FALSE,
					Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFerventDenialCard::CFerventDenialCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fervent Denial"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFireboltCard::CFireboltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Firebolt"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-2), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-2), PreventableType::Preventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHowlingGaleCard::CHowlingGaleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Howling Gale"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),	// Affects creatures
				true,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));	

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),	// Affects creatures
				true,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMomentsPeaceCard::CMomentsPeaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moment's Peace"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorbidHungerCard::CMorbidHungerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morbid Hunger"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,	// Target player?
				Life(-3),		// Life delta
				PreventableType::Preventable));	// Preventable?

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,	// Target player?
				Life(-3),		// Life delta
				PreventableType::Preventable));	// Preventable?;

		cpSpell->SetReverseLifeDeltaToController();
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorgueTheftCard::CMorgueTheftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Morgue Theft"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRayOfDistortionCard::CRayOfDistortionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ray of Distortion"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRecklessChargeCard::CRecklessChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reckless Charge"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				Power(+3), Life(0), 
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT,
				Power(+3), Life(0), 
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRoarOfTheWurmCard::CRoarOfTheWurmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Roar of the Wurm"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("6") GREEN_MANA_TEXT,
				_T("Wurm G"), 2957,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Wurm G"), 2957,
				1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CScorchingMissileCard::CScorchingMissileCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scorching Missile"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,	// Target player?
				Life(-4),		// Life delta
				PreventableType::Preventable));	// Preventable?

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("9") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,	// Target player?
				Life(-3),		// Life delta
				PreventableType::Preventable));	// Preventable?
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkullFractureCard::CSkullFractureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skull Fracture"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSylvanMightCard::CSylvanMightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sylvan Might"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVolcanicSprayCard::CVolcanicSprayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volcanic Spray"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new AnyCreatureComparer,
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new AnyCreatureComparer,
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVolleyOfBouldersCard::CVolleyOfBouldersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volley of Boulders"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("8") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-6), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-6), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CStandstillCard::CStandstillCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Standstill"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility0> cpAbility(::CreateObject<TriggeredAbility0>(this));

		cpAbility->SetOptionalType(TriggeredAbility0::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility0::BeforeResolveSelectionCallback(this, &CStandstillCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CStandstillCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStandstillCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetDrawCount(3);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CStandstillCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility3> cpAbility(::CreateObject<TriggeredAbility3>(this));

		cpAbility->SetOptionalType(TriggeredAbility3::OptionalType::Required);
		cpAbility->SetDrawCount(3);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility3::ContextFunction(this, &CStandstillCard::SetTriggerContext3));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStandstillCard::BeforeResolution0(TriggeredAbility0::TriggeredActionType* pAction)
{
	return IsInplay() == TRUE;
}
bool CStandstillCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	return IsInplay() == TRUE;
}
bool CStandstillCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return (toCardKeyword == CardKeyword::Flash || toCardKeyword == CardKeyword::CantBeCountered);
}
bool CStandstillCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return (toCardKeyword == CardKeyword::CantBeCountered);
}
bool CStandstillCard::SetTriggerContext3(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return (toCardKeyword == CardKeyword::Flash);
}

//____________________________________________________________________________
//
CAmugabaCard::CAmugabaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Amugaba"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenArcherCard::CAvenArcherCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Aven Archer"), CardType::Creature, CREATURE_TYPE3(Bird, Soldier, Archer), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2),
		_T("2") WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-2), PreventableType::Preventable)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CAvenSmokeweaverCard::CAvenSmokeweaverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Smokeweaver"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CBalshanGriffinCard::CBalshanGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Balshan Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarbarianLunaticCard::CBarbarianLunaticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian Lunatic"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConfessorCard::CConfessorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Confessor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCryptCreeperCard::CCryptCreeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Creeper"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCursedMonstrosityCard::CCursedMonstrosityCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cursed Monstrosity"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, 
							&CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDedicatedMartyrCard::CDedicatedMartyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dedicated Martyr"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			WHITE_MANA_TEXT,
			Life(+3), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDoggedHunterCard::CDoggedHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dogged Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreamwinderCard::CDreamwinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreamwinder"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CDreamwinderCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CDreamwinderCard::CanAttack(BOOL bIncludeTricks)
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
CDruidLyristCard::CDruidLyristCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Druid Lyrist"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
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

//____________________________________________________________________________
//
CDwarvenGruntCard::CDwarvenGruntCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Dwarven Grunt"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CDwarvenRecruiterCard::CDwarvenRecruiterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Recruiter"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Dwarf"), _T("Dwarves"), new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaceOfFearCard::CFaceOfFearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Face of Fear"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2") BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFamishedGhoulCard::CFamishedGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Famished Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	cpAbility->GetTargeting()->SetSubjectCount(0, 2);
	cpAbility->GetTargeting()->SetSingleSourceZone(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFilthyCurCard::CFilthyCurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Filthy Cur"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFilthyCurCard::SetTriggerContext));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CFilthyCurCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CFledglingImpCard::CFledglingImpCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fledgling Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CHalberdierCard::CHalberdierCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Halberdier"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CIridescentAngelCard::CIridescentAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Iridescent Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CKrosanArcherCard::CKrosanArcherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Krosan Archer"), CardType::Creature, CREATURE_TYPE2(Centaur, Archer), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3),
		GREEN_MANA_TEXT, Power(+0), Life(+2))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CLeafDancerCard::CLeafDancerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Leaf Dancer"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CLieutenantKirtarCard::CLieutenantKirtarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lieutenant Kirtar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinotaurExplorerCard::CMinotaurExplorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minotaur Explorer"), CardType::Creature, CREATURE_TYPE2(Minotaur, Scout), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(3))
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
CNantukoElderCard::CNantukoElderCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Nantuko Elder"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2),
		_T("1") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
COvereagerApprenticeCard::COvereagerApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Overeager Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPatrolHoundCard::CPatrolHoundCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Patrol Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CPatronWizardCard::CPatronWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Patron Wizard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhantomWhelpCard::CPhantomWhelpCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Whelp"), CardType::Creature, CREATURE_TYPE2(Illusion, Hound), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhantomWhelpCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CPhantomWhelpCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Bounce Effect"), 61040, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CPiannaNomadCaptainCard::CPiannaNomadCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pianna, Nomad Captain"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPulsatingIllusionCard::CPulsatingIllusionCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pulsating Illusion"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+4), Life(+4)));

	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRabidElephantCard::CRabidElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rabid Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CResilientWandererCard::CResilientWandererCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Resilient Wanderer"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CResilientWandererCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetAbilityText(_T("Gain protection from color of your choice. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CResilientWandererCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CResilientWandererCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("white"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("blue"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 3;
			selectionEntry.strText.Format(_T("black"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 4;
			selectionEntry.strText.Format(_T("red"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 5;
			selectionEntry.strText.Format(_T("green"));

			entries.push_back(selectionEntry);
		}
	
		m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}
	return true;
}

void CResilientWandererCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
				pModifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				pModifier->GetModifier().SetOneTurnOnly(TRUE);

				pModifier->ApplyTo(this);
				
				return;
			}
		}
}


//____________________________________________________________________________
//
CSadisticHypnotistCard::CSadisticHypnotistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sadistic Hypnotist"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShadowmageInfiltratorCard::CShadowmageInfiltratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shadowmage Infiltrator"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshooterCard::CSkyshooterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshooter"), CardType::Creature, CREATURE_TYPE2(Centaur, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""), 
				new AttackingBlockingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpellbaneCentaurCard::CSpellbaneCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spellbane Centaur"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Blue, false)))
{
	counted_ptr<CCardKeywordEnchantment> cpAbility(
		::CreateObject<CCardKeywordEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false)));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Shroud);
	// XXX cards cannot be a target of spells or abilities *except* if the card is not in the list of card types listed above.
	// This is assuming all card types not in the above list are not capable of targeting in the process of spell casting.
	cpAbility->GetCardKeywordMod()->GetModifier().SetAdditionData((DWORD)&m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSquirrelMobCard::CSquirrelMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squirrel Mob"), CardType::Creature, CREATURE_TYPE(Squirrel), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new NegateCardComparer(new SpecificCardComparer(this))));

	cpAbility->GetSurveyCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTirelessTribeCard::CTirelessTribeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Tireless Tribe"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		_T(""), Power(+0), Life(+4))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CTreetopSentinelCard::CTreetopSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Treetop Sentinel"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CTwigwalkerCard::CTwigwalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Twigwalker"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->GetTargeting()->SetSubjectCount(2, 2);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CWhisperingShadeCard::CWhisperingShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Whispering Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Swampwalk, FALSE);
}

//____________________________________________________________________________
//
CWoodlandDruidCard::CWoodlandDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodland Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CZombieCannibalCard::CZombieCannibalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Cannibal"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZoologistCard::CZoologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zoologist"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("3") GREEN_MANA_TEXT,
			1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE, FALSE);
	cpAbility->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Battlefield, CardPlacement::NotApplicable, 
		CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddTapCost();

	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);
	//cpAbility->SetRevealedCardsTo(new AnyCreatureComparer,
		//ZoneId::Battlefield, MoveType::Others, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLimestoneGolemCard::CLimestoneGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Limestone Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrystalQuarryCard::CCrystalQuarryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Crystal Quarry"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,  ALL_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("5"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, ALL_MANA_TEXT, _T("5")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CDesertedTempleCard::CDesertedTempleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Deserted Temple"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1"),
				FALSE, TRUE,
				new CardTypeComparer(CardType::_Land, false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CPetrifiedFieldCard::CPetrifiedFieldCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Petrified Field"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTarnishedCitadelCard::CTarnishedCitadelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tarnished Citadel"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 3 damage from"));
		cpAbility->SetAbilityText(_T("Take 3 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 3 damage from"));
		cpAbility->SetAbilityText(_T("Take 3 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 3 damage from"));
		cpAbility->SetAbilityText(_T("Take 3 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 3 damage from"));
		cpAbility->SetAbilityText(_T("Take 3 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 3 damage from"));
		cpAbility->SetAbilityText(_T("Take 3 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSoulcatcherCard::CSoulcatcherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soulcatcher"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarkwaterEggCard::CDarkwaterEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darkwater Egg"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMossfireEggCard::CMossfireEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mossfire Egg"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSandstoneDeadfallCard::CSandstoneDeadfallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sandstone Deadfall"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""), 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShadowbloodEggCard::CShadowbloodEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shadowblood Egg"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkycloudEggCard::CSkycloudEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skycloud Egg"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteamclawCard::CSteamclawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Steamclaw"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSungrassEggCard::CSungrassEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sungrass Egg"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattleStrainCard::CBattleStrainCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Battle Strain"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurningSandsCard::CBurningSandsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Burning Sands"), CardType::GlobalEnchantment, nID, 
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEarnestFellowshipCard::CEarnestFellowshipCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Earnest Fellowship"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagmaVeinCard::CMagmaVeinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magma Vein"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			RED_MANA_TEXT,
			Life(-1),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMalevolentAwakeningCard::CMalevolentAwakeningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Malevolent Awakening"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNeedForSpeedCard::CNeedForSpeedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Need for Speed"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPedanticLearningCard::CPedanticLearningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pedantic Learning"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Library, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimalFrenzyCard::CPrimalFrenzyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Primal Frenzy"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CStillLifeCard::CStillLifeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Still Life"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			_T("Centaur AA"), 64020));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
//
//"Unifying Theory\n{1U}\nEnchantment\nODY,R\nWhenever a player casts a spell, that player may pay {2}. If the player does, he or she draws a card."
//
//CUnifyingTheoryCard::CUnifyingTheoryCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Unifying Theory"), CardType::GlobalEnchantment, nID,
//		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
//{
//	typedef
//		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
//
//	cpAbility->SetResolutionCost(_T("2"));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CCeaseFireCard::CCeaseFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cease-Fire"), CardType::Instant, nID)
{
	{
		//Your Opponent can't cast creature spells this turn.
		counted_ptr<CPlayerEffectEnchantment> cpSpell(
			::CreateObject<CPlayerEffectEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->SetAffectOpponentsOnly();

		cpSpell->SetAbilityText(_T("Your Opponent can't cast creature spells this turn with"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//You can't cast creature spells this turn.
		counted_ptr<CPlayerEffectEnchantment> cpSpell(
			::CreateObject<CPlayerEffectEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->SetAffectControllerOnly();

		cpSpell->SetAbilityText(_T("You can't cast creature spells this turn with"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDivertCard::CDivertCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divert"), CardType::Instant, nID)
{
	counted_ptr<CDeflectionSpell> cpSpell(
		::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
			BLUE_MANA_TEXT, 
			new TrueCardComparer));

	cpSpell->SetCanBeDenied();
	cpSpell->GetDenialCost().SetManaCost(_T("2"));

	//cpSpell->SetDeflectAbilities(TRUE); for testing only

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEmboldenCard::CEmboldenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Embolden"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(4), SourceColor::Null));

		cpSpell->GetTargeting()->SetDistributeValues();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(4), SourceColor::Null));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEntombCard::CEntombCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Entomb"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Graveyard, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
}

//____________________________________________________________________________
//
CRefreshCard::CRefreshCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Refresh"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRepelCard::CRepelCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Repel"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CSecondThoughtsCard::CSecondThoughtsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Second Thoughts"), CardType::Instant, nID,
		_T("4") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CShelterCard::CShelterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shelter"), CardType::Instant, nID)
{
	counted_ptr<CTargetGainKeywordSpell> cpSpell(
		::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAncestralTributeCard::CAncestralTributeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancestral Tribute"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
				_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("cards")), ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
				_T("9") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("cards")), ZoneId::Graveyard);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDecomposeCard::CDecomposeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Decompose"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 3);
	m_pTargetMoveCardSpell->GetTargeting()->SetSingleSourceZone(true);
}

//____________________________________________________________________________
//
CExtractCard::CExtractCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Extract"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			MinimumValue(1), MaximumValue(1),
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNewFrontiersCard::CNewFrontiersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("New Frontiers"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalSearchLibrarySpell> cpSpell(
		::CreateObject<CGlobalSearchLibrarySpell>(this, AbilityType::Sorcery,					
			GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")),
			0, 0,	// X cost
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPipersMelodyCard::CPipersMelodyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Piper's Melody"), CardType::Sorcery, nID,
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
CTouchOfInvisibilityCard::CTouchOfInvisibilityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Touch of Invisibility"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Unblockable, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CMudholeCard::CMudholeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mudhole"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("lands"))));

	CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE);
	cpSpell->AddCardModifier(pCardModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CChildhoodHorrorCard::CChildhoodHorrorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Childhood Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrashingCentaurCard::CCrashingCentaurCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Crashing Centaur"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4),
		GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Trample)		
{
	  m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDirtyWereratCard::CDirtyWereratCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Dirty Wererat"), CardType::Creature, CREATURE_TYPE3(Human, Rat, Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3),
		BLACK_MANA_TEXT)
{
	m_pRegenerationAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

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
CFrightcrawlerCard::CFrightcrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frightcrawler"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanBeastCard::CKrosanBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Beast"), CardType::Creature, CREATURE_TYPE2(Squirrel, Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+7), Life(+7)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);
	
	AddAbility(cpAbility.GetPointer());
/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+7));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrosanBeastCard::SetTriggerContext1));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+7));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetToControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrosanBeastCard::SetTriggerContext2));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-7));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-7));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetFromControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrosanBeastCard::SetTriggerContext3));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrosanBeastCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

bool CKrosanBeastCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 7)
			return true;
	}

	return false;
}

bool CKrosanBeastCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 6)
			return true;
	}

	return false; */
}

//____________________________________________________________________________
//
CMetamorphicWurmCard::CMetamorphicWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Metamorphic Wurm"), CardType::Creature, CREATURE_TYPE2(Elephant, Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+4), Life(+4)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWerebearCard::CWerebearCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Werebear"), CardType::Creature, CREATURE_TYPE3(Human, Bear, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+3), Life(+3)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpringingTigerCard::CSpringingTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Springing Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
	  _T("3") GREEN_MANA_TEXT, Power(3), Life(3))
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

//____________________________________________________________________________
//
CMysticCrusaderCard::CMysticCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Crusader"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Mystic), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMysticPenitentCard::CMysticPenitentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Penitent"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Mystic), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
		
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CMysticVisionaryCard::CMysticVisionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Visionary"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Mystic), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMysticZealotCard::CMysticZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Zealot"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Mystic), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMysticEnforcerCard::CMysticEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mystic Enforcer"), CardType::Creature, CREATURE_TYPE3(Human, Nomad, Mystic), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+3), Life(+3)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COtarianJuggernautCard::COtarianJuggernautCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Otarian Juggernaut"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(2), Life(3))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("non-Walls")));

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+3), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChainflingerCard::CChainflingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chainflinger"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CChainflingerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CChainflingerCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CNomadDecoyCard::CNomadDecoyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nomad Decoy"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				WHITE_MANA_TEXT,
				TRUE, // tap
				FALSE, // untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				TRUE, FALSE,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetSubjectCount(2, 2);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNomadDecoyCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNomadDecoyCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CInfectedVerminCard::CInfectedVerminCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infected Vermin"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Life(-1),	// life delta
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("3") BLACK_MANA_TEXT,
				Life(-3),	// life delta
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CInfectedVerminCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CInfectedVerminCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CHallowedHealerCard::CHallowedHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hallowed Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
					_T(""),
					new AnyCreatureComparer, TRUE,
					Life(2), SourceColor::Null));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
					_T(""),
					new AnyCreatureComparer, TRUE,
					Life(4), SourceColor::Null));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CHallowedHealerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CHallowedHealerCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CThermalBlastCard::CThermalBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Thermal Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("4") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThermalBlastCard::BeforeResolution));
}

bool CThermalBlastCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	if (pSurvey->GetSize() >= 7)
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -5;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return TRUE;
	
	}
	return TRUE;
}

//____________________________________________________________________________
//
CCabalPatriarchCard::CCabalPatriarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Patriarch"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGorillaTitanCard::CGorillaTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorilla Titan"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+4), Life(+4)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(0);
		cpAbility->SetConditionIsMaximum();

		AddAbility(cpAbility.GetPointer());
	}
}


//____________________________________________________________________________
//
CKrosanAvengerCard::CKrosanAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Avenger"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKrosanAvengerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CKrosanAvengerCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CPsychatogCard::CPsychatogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Psychatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSarcatogCard::CSarcatogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sarcatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(2),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSparkMageCard::CSparkMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spark Mage"), CardType::Creature, CREATURE_TYPE2(Dwarf, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBearscapeCard::CBearscapeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bearscape"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			_T("Bear B"), 2996,
			1));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChamberOfManipulationCard::CChamberOfManipulationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chamber of Manipulation"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CChamberOfManipulationCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CChamberOfManipulationCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(pEnchantedCard,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpEnchantAbility->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDivineSacramentCard::CDivineSacramentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Divine Sacrament"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDivineSacramentCard::SetTriggerContext1));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetToControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDivineSacramentCard::SetTriggerContext2));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetFromControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDivineSacramentCard::SetTriggerContext3));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDivineSacramentCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDivineSacramentCard::BeforeResolution1));	
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDivineSacramentCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

bool CDivineSacramentCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 7)
			return true;
	}

	return false;
}

bool CDivineSacramentCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 6)
			return true;
	}

	return false;
}

bool CDivineSacramentCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false; */
}

//____________________________________________________________________________
//
CPsionicGiftCard::CPsionicGiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psionic Gift"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPsionicGiftCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPsionicGiftCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
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
CSquirrelNestCard::CSquirrelNestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Squirrel Nest"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSquirrelNestCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSquirrelNestCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pEnchantedCard,
			_T(""),
			_T("Squirrel A"), 2769,
			1));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CNutCollectorCard::CNutCollectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nut Collector"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("5") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetCreateTokenOption(TRUE, _T("Squirrel A"), 2769, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
		
		AddAbility(cpAbility.GetPointer());
	}
	/* {
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNutCollectorCard::SetTriggerContext1));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetToControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNutCollectorCard::SetTriggerContext2));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);		
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetFromControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNutCollectorCard::SetTriggerContext3));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);		
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNutCollectorCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNutCollectorCard::BeforeResolution1));	
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNutCollectorCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

bool CNutCollectorCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 7)
			return true;
	}

	return false;
}

bool CNutCollectorCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 6)
			return true;
	}

	return false;
}

bool CNutCollectorCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false; */
}

//____________________________________________________________________________
//
CSavageFirecatCard::CSavageFirecatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savage Firecat"), CardType::Creature, CREATURE_TYPE2(Elemental, Cat), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 7, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIvyElementalCard::CIvyElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ivy Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CIvyElementalCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
}

void CIvyElementalCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CInnocentBloodCard::CInnocentBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Innocent Blood"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			1,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSimplifyCard::CSimplifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Simplify"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			1,
			new CardTypeComparer(CardType::_Enchantment, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTrembleCard::CTrembleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tremble"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			1,
			new CardTypeComparer(CardType::_Land, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCabalInquisitorCard::CCabalInquisitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));
	
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CCabalInquisitorCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CCabalInquisitorCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CScreamsOfTheDamnedCard::CScreamsOfTheDamnedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Screams of the Damned"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			Life(-1),	// life delta
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBelovedChaplainCard::CBelovedChaplainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Beloved Chaplain"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CImmobilizingInkCard::CImmobilizingInkCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Immobilizing Ink"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CImmobilizingInkCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CImmobilizingInkCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(pCard,
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHolisticWisdomCard::CHolisticWisdomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Holistic Wisdom"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//Exile an artifact
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile a creature
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile an enchantment
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile an instant
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Instant, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("instant cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile a land
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile a planeswalker
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Planeswalker, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("planeswalkers")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile a sorcery
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Sorcery, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("sorcery cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Exile a tribal
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Tribal, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddExileHandCardCost(1, CCardFilter::GetFilter(_T("tribal cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWildMongrelCard::CWildMongrelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Mongrel"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new SpecificCardComparer(this)));

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1), TRUE));
	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAboshanCephalidEmperorCard::CAboshanCephalidEmperorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aboshan, Cephalid Emperor"), CardType::_LegendaryCreature, CREATURE_TYPE(Cephalid), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Cephalid"), _T("Cephalids"), new CreatureTypeComparer(CREATURE_TYPE(Cephalid), false))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE, // tap
				FALSE, // untap
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalTapSpell> cpAbility(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Activated,
				BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetToActivatedAbility();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKirtarsWrathCard::CKirtarsWrathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kirtar's Wrath"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CKirtarsWrathCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CKirtarsWrathCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit H"), 2942, 2);

	if (pSurvey->GetSize() >= 7) pModifier.ApplyTo(GetController());
	else; //do nothing
}

//____________________________________________________________________________
//
CAnimalBoneyardCard::CAnimalBoneyardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Animal Boneyard"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CAnimalBoneyardCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CAnimalBoneyardCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pEnchantedCard,
			_T(""),
			Life(+0), PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpEnchantAbility->SetAbilityText(_T("You gain life equal to the sacrificed creature's toughness. Activates"));

	cpEnchantAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnimalBoneyardCard::BeforeResolution));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

bool CAnimalBoneyardCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());

	CLifeModifier pModifier = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAtogatogCard::CAtogatogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Atogatog"), CardType::_LegendaryCreature, CREATURE_TYPE(Atog), nID,
		ALL_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Atog), false));
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAtogatogCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAtogatogCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CCard* pSacrificedCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pSacrificedCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pSacrificedCreature = (CCreatureCard*)pSacrificedCard;
	int nPower = GET_INTEGER(pSacrificedCreature->GetLastKnownPower());

	CPowerModifier pModifier1 = CPowerModifier(Power(+nPower), TRUE);
	CLifeModifier pModifier2 = CLifeModifier(Life(+nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

	pModifier1.ApplyTo(pCreature);
	pModifier2.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CNantukoMentorCard::CNantukoMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nantuko Mentor"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNantukoMentorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CNantukoMentorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		if (!const_cast<const CCard*>(it->GetPointer())->GetCardType().IsCreature()) continue;
		Context.nValue1 = GET_INTEGER(((CCreatureCard*)it->GetPointer())->GetPower());
		Context.nValue2 = GET_INTEGER(((CCreatureCard*)it->GetPointer())->GetPower());
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CRottingGiantCard::CRottingGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotting Giant"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
									CWhenSelfAttackedBlocked::EventCallback, 
									&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStoneTongueBasiliskCard::CStoneTongueBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone-Tongue Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStoneTongueBasiliskCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStoneTongueBasiliskCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Lure);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStoneTongueBasiliskCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CStoneTongueBasiliskCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CZombieAssassinCard::CZombieAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Assassin"), CardType::Creature, CREATURE_TYPE2(Zombie, Assassin), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
	cpAbility->AddExileCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDruidsCallCard::CDruidsCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Druid's Call"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
		CAbilityEnchant::CreateAbilityCallback(this,
			&CDruidsCallCard::CreateEnchantAbility),
		CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDruidsCallCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->SetCreateTokenOption(TRUE, _T("Squirrel A"), 2769, 0);

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDruidsCallCard::SetTriggerContextL));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CDruidsCallCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CWordsOfWisdomCard::CWordsOfWisdomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Words of Wisdom"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CWordsOfWisdomCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 2));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CWordsOfWisdomCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opp = m_pGame->GetNextPlayer(GetController());

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	pModifier.ApplyTo(opp);
}

//____________________________________________________________________________
//
CTombfireCard::CTombfireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tombfire"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CTombfireCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

void CTombfireCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_CardFilter.AddComparer(new CardAbilityNameComparer(_T("Flashback")));

	CPlayer* target = pAbilityAction->GetAssociatedPlayer();	
	
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));	

	if (bResult) pModifier->ApplyTo(target);
}

//____________________________________________________________________________
//
CMuscleBurstCard::CMuscleBurstCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Muscle Burst"), CardType::Instant, nID, AbilityType::Instant,
	    _T("1") GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMuscleBurstCard::BeforeResolution));
}

bool CMuscleBurstCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new CardNameComparer(_T("Muscle Burst")));
	m_CardFilter_temp.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Diligent Farmhand"))));	

	int nDomainCount = 3 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

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
CDiligentFarmhandCard::CDiligentFarmhandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Diligent Farmhand"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLifeBurstCard::CLifeBurstCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Life Burst"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(+0), PreventableType::NotPreventable)

{
	m_pTargetChgLifeSpell->GetTargetModifier().CPlayerModifiers::push_back(
		new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLifeBurstCard::BeforeResolution));
}

bool CLifeBurstCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Life Burst")));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));
	if (nDomainCount > 0) nDomainCount = nDomainCount * 4;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nDomainCount;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CMindBurstCard::CMindBurstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Burst"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindBurstCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMindBurstCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Mind Burst")));

	int nDomainCount = 1 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nDomainCount;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
		}
		
		return true;

	return true;
}

//____________________________________________________________________________
//
CAvenShrineCard::CAvenShrineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aven Shrine"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAvenShrineCard::BeforeResolution));		
	cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CAvenShrineCard::SetTriggerContext));		

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CAvenShrineCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CAvenShrineCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(triggerContext.m_pCard->GetPrintedCardName()));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(+nDomainCount), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::NotPreventable // preventable or not prevantable
			, DamageType::NotDealingDamage // Damage Type
			);

	pmodifier1.ApplyTo(GetController());
	
	return false;
}

//____________________________________________________________________________
//
CCabalShrineCard::CCabalShrineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cabal Shrine"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCabalShrineCard::BeforeResolution));		
	cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CCabalShrineCard::SetTriggerContext));		

	AddAbility(cpAbility.GetPointer());
}

bool CCabalShrineCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CCabalShrineCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(triggerContext.m_pCard->GetPrintedCardName()));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	if (nDomainCount > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(nDomainCount), MaximumValue(nDomainCount), // select cards to reorder
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

	return false;
}

//____________________________________________________________________________
//
CDwarvenShrineCard::CDwarvenShrineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dwarven Shrine"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDwarvenShrineCard::BeforeResolution));		
	cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDwarvenShrineCard::SetTriggerContext));		

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CDwarvenShrineCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CDwarvenShrineCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(triggerContext.m_pCard->GetPrintedCardName()));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));
	if (nDomainCount > 0) nDomainCount = nDomainCount * 2;

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(-nDomainCount), // number on which the life will be altered
			this, // sourcecard of life altering
			PreventableType::Preventable // preventable or not prevantable
			, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
			);

	pmodifier1.ApplyTo(triggerContext.m_pCard->GetController());
	
	return false;
}

//____________________________________________________________________________
//
CNantukoShrineCard::CNantukoShrineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nantuko Shrine"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNantukoShrineCard::BeforeResolution));		
	cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CNantukoShrineCard::SetTriggerContext));		

	AddAbility(cpAbility.GetPointer());
}

bool CNantukoShrineCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}
bool CNantukoShrineCard::BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(triggerContext.m_pCard->GetPrintedCardName()));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Squirrel A"), 2769, nDomainCount);

	pModifier.ApplyTo(GetController());
	
	return false;
}

//____________________________________________________________________________
//
CFlameBurstCard::CFlameBurstCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flame Burst"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlameBurstCard::BeforeResolution));
}

bool CFlameBurstCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Flame Burst")));
	m_CardFilter_temp.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Pardic Firecat"))));	

	int nDomainCount = 2 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

	if (pAction->GetAssociatedPlayer())
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nDomainCount;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}

		return TRUE;
	}
	if (pAction->GetAssociatedCard())
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nDomainCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return TRUE;
	}

	return true;
}

//____________________________________________________________________________
//
CPardicFirecatCard::CPardicFirecatCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Pardic Firecat"), CardType::Creature, CREATURE_TYPE2(Elemental, Cat), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CDevotedCaretakerCard::CDevotedCaretakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devoted Caretaker"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CDevotedCaretakerCard::OnResolutionCompleted))
{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());	
}

void CDevotedCaretakerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	if (bResult) pCard->GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
}

//____________________________________________________________________________
//
CThoughtDevourerCard::CThoughtDevourerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thought Devourer"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, -4));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThoughtEaterCard::CThoughtEaterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thought Eater"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, -3));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThoughtNibblerCard::CThoughtNibblerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thought Nibbler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPlayerHandEnchantment> cpAbility(
		::CreateObject<CPlayerHandEnchantment>(this, -2));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShowerOfCoalsCard::CShowerOfCoalsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shower of Coals"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(0, 3);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShowerOfCoalsCard::BeforeResolution));
}

bool CShowerOfCoalsCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() < 7)
		return true;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -4;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
	}

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CRecoupCard::CRecoupCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Recoup"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject <CTargetSpell>(this,  AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery, false),
				false));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::Flashback);

		cpSpell->GetTargetModifier().CCardModifiers::Add(pModifier);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject <CTargetSpell>(this,  AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery, false),
				false));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::Flashback);

		cpSpell->GetTargetModifier().CCardModifiers::Add(pModifier);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSyncopateCard::CSyncopateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Syncopate"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);
	m_pCounterSpell->SetExtraActionValueVector();
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->SetExtraCostToDenialCost();
	m_pCounterSpell->SetToZone(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CGhastlyDemiseCard::CGhastlyDemiseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ghastly Demise"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGhastlyDemiseCard::BeforeResolution));
}

bool CGhastlyDemiseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	CCreatureCard* target = (CCreatureCard*)pCard;

	int nTargetToughness = GET_INTEGER(target->GetLastKnownToughness());

	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);

	return nTargetToughness <= pGrave->GetSize();
}

//____________________________________________________________________________
//
CLuminousGuardianCard::CLuminousGuardianCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Luminous Guardian"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLiquidFireCard::CLiquidFireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Liquid Fire"), CardType::Sorcery, nID)
	, m_cpEventListener0(VAR_NAME(m_cpListener0), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLiquidFireCard::OnResolutionCompleted0))
	, m_cpEventListener1(VAR_NAME(m_cpListener1), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLiquidFireCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener2), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLiquidFireCard::OnResolutionCompleted2))
	, m_cpEventListener3(VAR_NAME(m_cpListener3), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLiquidFireCard::OnResolutionCompleted3))
	, m_cpEventListener4(VAR_NAME(m_cpListener4), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLiquidFireCard::OnResolutionCompleted4))

{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-0), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 0. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener0.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 1. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-2), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 2. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 3. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener3.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 4. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener4.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-5), PreventableType::Preventable));

		cpSpell->SetAbilityText(_T("Choose 5. Casts"));
		
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		
		AddSpell(cpSpell.GetPointer());
	}
}

void CLiquidFireCard::OnResolutionCompleted0(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

void CLiquidFireCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

void CLiquidFireCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

void CLiquidFireCard::OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

void CLiquidFireCard::OnResolutionCompleted4(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CChlorophantCard::CChlorophantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chlorophant"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CChlorophantCard::CreateAdditionalAbility)));
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CChlorophantCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetAbilityName(_T("Threshold trigger"));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CBloodcurdlerCard::CBloodcurdlerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bloodcurdler"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetRevealCount(1);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBloodcurdlerCard::CreateAdditionalAbility)));
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CBloodcurdlerCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetGatherer().SetSubjectCount(2, 2, TRUE);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	
	cpAbility->SetAbilityName(_T("Threshold trigger"));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CDecayingSoilCard::CDecayingSoilCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Decaying Soil"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CDecayingSoilCard::CreateAdditionalAbility)));
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CDecayingSoilCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDecayingSoilCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CDecayingSoilCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//____________________________________________________________________________
//
CDemoralizeCard::CDemoralizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Demoralize"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject <CGenericSpell>(this,  AbilityType::Instant,
			_T("2") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDemoralizeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDemoralizeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::UnblockableCreatures);	

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pmodifier->ApplyTo(GetGame()->GetPlayer(ip));
				}
	}
	else
	{
		CCountedCardContainer cards;
		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new AnyCreatureComparer);
		CCreatureKeywordModifier* cmodifier = new CCreatureKeywordModifier(CreatureKeyword::CantBeBlockedBy1, true);

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			m_CardFilter.GetIncluded(*pFromZone, cards);
		}
		
		for (int ic = 0; ic < cards.GetSize(); ++ic)
			cmodifier->ApplyTo((CCreatureCard*)cards.GetAt(ic));
	}
	return true;
}
//____________________________________________________________________________
//
CEpicenterCard::CEpicenterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Epicenter"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
			_T("4") RED_MANA_TEXT,
			CCardFilter::GetFilter(_T("lands"))));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEpicenterCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CEpicenterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
		return false;
	}
	return true;
}
//____________________________________________________________________________
//
CRepentantVampireCard::CRepentantVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Repentant Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new SpecificCardComparer(this),
				CardType::White, CardType::_ColorMask));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRepentantVampireCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CRepentantVampireCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black, false));
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CWaywardAngelCard::CWaywardAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wayward Angel"), CardType::Creature, CREATURE_TYPE2(Angel, Horror), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
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
				Power(+3), Life(+3),
				CreatureKeyword::Trample));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CWaywardAngelCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CWaywardAngelCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CMirariCard::CMirariCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirari"), CardType::_LegendaryArtifact, nID,
		_T("5"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMirariCard::SetTriggerContext));

	cpAbility->SetResolutionCost(_T("3"));

	AddAbility(cpAbility.GetPointer());
}

bool CMirariCard::SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
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
CJunkGolemCard::CJunkGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Junk Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(0), Life(0))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CJunkGolemCard::OnResolutionCompleted))
	, m_ActionSelection(pGame,CSelectionSupport::SelectionCallback(this, &CJunkGolemCard::OnActionSelected))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));
		ATLASSERT(cpAbility);
	
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		
		AddAbility(cpAbility.GetPointer());
	}
}

void CJunkGolemCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetCounterContainer()->GetCount(_T("+1/+1")) > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;
		
			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Remove a +1/+1 counter from %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Sacrifice %s"), this->GetCardName());

			entries.push_back(selectionEntry);
		}

		if (bResult) m_ActionSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	else
	{
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, GetController());
		pModifier->ApplyTo(this);
	}
}
void CJunkGolemCard::OnActionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);
				pModifier->ApplyTo(this);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier->ApplyTo(this);

				return;
			}
		}
}
//____________________________________________________________________________
//
CLavaBlisterCard::CLavaBlisterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lava Blister"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLavaBlisterCard::OnPunisherSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLavaBlisterCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLavaBlisterCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
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
		selectionEntry.strText.Format(_T("Take 6 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTarget);
	return true;
}

void CLavaBlisterCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
				
				pModifier.ApplyTo((CCard*)dwContext1);

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
				CLifeModifier pModifier = CLifeModifier(Life(-6), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CBlazingSalvoCard::CBlazingSalvoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blazing Salvo"), CardType::Instant, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBlazingSalvoCard::OnPunisherSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlazingSalvoCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBlazingSalvoCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
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
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTarget);
	return true;
}

void CBlazingSalvoCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo((CCreatureCard*)dwContext1);

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
				CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CChanceEncounterCard::CChanceEncounterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chance Encounter"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(COIN_FLIP_WIN_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChanceEncounterCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChanceEncounterCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChanceEncounterCard::BeforeResolution2));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChanceEncounterCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(LUCK_COUNTER, 1);

	pModifier.ApplyTo(this);

	return true;
}

bool CChanceEncounterCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return GetCounterContainer()->GetCount(LUCK_COUNTER) >= 10;
}

bool CChanceEncounterCard::BeforeResolution2(CAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCount(LUCK_COUNTER) >= 10;
}

//____________________________________________________________________________
//
CLaquatussCreativityCard::CLaquatussCreativityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Laquatus's Creativity"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this,  AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT,
			FALSE_CARD_COMPARER,
			true));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLaquatussCreativityCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLaquatussCreativityCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nHand = pTarget->GetZoneById(ZoneId::Hand)->GetCardContainer().GetSize();

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(nHand), MaximumValue(nHand));

	pModifier1.ApplyTo(pTarget);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(nHand), MaximumValue(nHand), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CRitesOfInitiationCard::CRitesOfInitiationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rites of Initiation"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRitesOfInitiationCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject <CGenericSpell>(this,  AbilityType::Instant,
			RED_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRitesOfInitiationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRitesOfInitiationCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nCards = pHand->GetSize();

	if (nCards > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCards; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Discard %d card at random"),
					i);
			else
				entry.strText.Format(_T("Discard %d cards at random"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CRitesOfInitiationCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
						strMessage.Format(_T("%s discards %d card at random"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d cards at random"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CRandomDiscardModifier pModifier1 = CRandomDiscardModifier(nValue);

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				
				CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(nValue))));
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CRitesOfSpringCard::CRitesOfSpringCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rites of Spring"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRitesOfSpringCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject <CGenericSpell>(this,  AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRitesOfSpringCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRitesOfSpringCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nCards = pHand->GetSize();

	if (nCards > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCards; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Discard %d card"),
					i);
			else
				entry.strText.Format(_T("Discard %d cards"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CRitesOfSpringCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
						strMessage.Format(_T("%s discards %d card"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d cards"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

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
				
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::BasicLand, false));

				CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(nValue),
					pSelectionPlayer, ZoneId::Library,
					&m_CardFilter, 
					ZoneId::Hand, TRUE, CardPlacement::Top,
					FALSE, TRUE, FALSE);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CSacredRitesCard::CSacredRitesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sacred Rites"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSacredRitesCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject <CGenericSpell>(this,  AbilityType::Instant,
			WHITE_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSacredRitesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSacredRitesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nCards = pHand->GetSize();

	if (nCards > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCards; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Discard %d card"),
					i);
			else
				entry.strText.Format(_T("Discard %d cards"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CSacredRitesCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
						strMessage.Format(_T("%s discards %d card"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d cards"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

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

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				
				CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)));
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CPredictCard::CPredictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Predict"), CardType::Instant, nID)
{
	counted_ptr<CPredictSpell> cpSpell(
		::CreateObject<CPredictSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHintOfInsanityCard::CHintOfInsanityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hint of Insanity"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this,  AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHintOfInsanityCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHintOfInsanityCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	CCountedCardContainer pAllCards;
	CCountedCardContainer pToDiscard;

	pAllCards.RemoveAll();
	pToDiscard.RemoveAll();

	for (int i = 0; i < pHand->GetSize(); ++i)
		pAllCards.AddCard(pHand->GetAt(i), CardPlacement::Top);

	while (pAllCards.GetSize() > 0)
	{
		CCard* pCard = pAllCards.GetAt(0);

		bool bSecondFound = false;

		for (int i = pAllCards.GetSize() - 1; i >= 1; --i)
		{
			CCard* pSecondCard = pAllCards.GetAt(i);
			if (pSecondCard->GetPrintedCardName() == pCard->GetPrintedCardName())
			{
				bSecondFound = true;
				if (!pSecondCard->GetCardType().IsLand())
					pToDiscard.AddCard(pSecondCard, CardPlacement::Top);

				pAllCards.RemoveCard(pSecondCard);
			}
		}

		if (bSecondFound && !pCard->GetCardType().IsLand())
			pToDiscard.AddCard(pCard, CardPlacement::Top);

		pAllCards.RemoveCard(pCard);
	}

	if (pToDiscard.GetSize() > 0)
	{

		CCardFilter m_FinalFilter;
		m_FinalFilter.SetComparer(new ContainedinComparer(&pToDiscard));

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_FinalFilter, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Discard, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pTarget);
	}
	else
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pModifier.ApplyTo(pTarget);
	}

	return true;
}

//____________________________________________________________________________
//
CTaintedPactCard::CTaintedPactCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tainted Pact"), CardType::Instant, nID)
	, m_YesNoSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTaintedPactCard::OnYesNoSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject <CGenericSpell>(this,  AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTaintedPactCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTaintedPactCard::BeforeResolution(CAbilityAction* pAction)
{
	ExiledCards.RemoveAll();
	ExileCard(pAction->GetController());
	return true;
}

void CTaintedPactCard::ExileCard(CPlayer* pController)
{
	if (pController->GetZoneById(ZoneId::Library)->GetSize() > 0)
	{
		CCard* pCard = pController->GetZoneById(ZoneId::Library)->GetTopCard();

		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);

		bool bSameName = false;

		for (int i = 0; i < ExiledCards.GetSize(); ++i)
		{
			if (ExiledCards.GetAt(i)->GetPrintedCardName() == pCard->GetPrintedCardName())
			{
				bSameName = true;
				break;
			}
		}

		if (!bSameName)
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Put %s in your hand"), pCard->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 1;
				if (pController->GetZoneById(ZoneId::Library)->GetSize() > 0)
					selectionEntry.strText.Format(_T("Exile another card"));
				else
					selectionEntry.strText.Format(_T("Stop the effect"));

				entries.push_back(selectionEntry);
			}
			m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pCard);
		}
	}
}

void CTaintedPactCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;

				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);

				return;
			}
			if (it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext1;

				ExiledCards.AddCard(pCard, CardPlacement::Top);

				ExileCard(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CLastRitesCard::CLastRitesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last Rites"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLastRitesCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLastRitesCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CLastRitesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nCards = pHand->GetSize();

	if (nCards > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't discard anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCards; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Discard %d card"),
					i);
			else
				entry.strText.Format(_T("Discard %d cards"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedPlayer());
	}
	return true;
}

void CLastRitesCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.ApplyTo((CPlayer*)dwContext1);

				return;
			}
			else
			{
				int nValue = it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s discards %d card"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d cards"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				pModifier1.ApplyTo(pSelectionPlayer);

				CPlayer* pTarget = (CPlayer*)dwContext1;

				CDiscardCardCommon::ResolveDiscardCards(pTarget, pSelectionPlayer, pSelectionPlayer, nValue, MoveType::Discard, ZoneId::Hand, TRUE, CCardFilter::GetFilter(_T("non-lands")));

				return;
			}
		}
}

//____________________________________________________________________________
//
CVerdantSuccessionCard::CVerdantSuccessionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Verdant Succession"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CVerdantSuccessionCard::OnYesNoSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Green, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVerdantSuccessionCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVerdantSuccessionCard::BeforeResolution));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

bool CVerdantSuccessionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CVerdantSuccessionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = triggerContext.m_pCard;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Search your library for a card named %s"), pCard->GetPrintedCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Ignore the ability of %s"), this->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetTriggeredPlayer(), (DWORD)pCard);
	 
	 return true;
}

void CVerdantSuccessionCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;

				CCardFilter m_CardFilter;
				m_CardFilter.SetFilterName(_T("card with the same name"), _T("cards with the same name"));
				m_CardFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));

				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(1),
					pSelectionPlayer, ZoneId::Library,
					&m_CardFilter, ZoneId::Battlefield);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if (it->dwContext == 1)
			{
				return;
			}
		}
}

//____________________________________________________________________________
//
CVivifyCard::CVivifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vivify"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVivifyCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CVivifyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land D"), 64049, pController);
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CDrawCardModifier pModifier3 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	pModifier3.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CThinkTankCard::CThinkTankCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Think Tank"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThinkTankCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CThinkTankCard::BeforeResolution(CAbilityAction* pAction) const
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
CSeizeTheDayCard::CSeizeTheDayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seize the Day"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSeizeTheDayCard::OnResolutionCompleted))
{
	{
		//Regular mana cost
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				FALSE, TRUE, //only untap
				new AnyCreatureComparer));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT,
				FALSE, TRUE, //only untap
				new AnyCreatureComparer));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CSeizeTheDayCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CExtraCombatModifier pModifier = CExtraCombatModifier(GetGame());
	pModifier.ApplyTo(GetGame()->GetActivePlayer());
}

//____________________________________________________________________________
//
CGravestormCard::CGravestormCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gravestorm"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGravestormCard::OnCardSelected))
	, m_DrawSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGravestormCard::OnDrawSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGravestormCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGravestormCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pGraveyard = pTarget->GetZoneById(ZoneId::Graveyard);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't exile anything"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Exile %s"),
			pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pAction->GetController());

	return true;
}

void CGravestormCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Don't draw"));

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Draw a card"));

					entries.push_back(selectionEntry);
				}
				m_DrawSelection.AddSelectionRequest(entries, 1, 1, NULL, (CPlayer*)dwContext1);

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
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

void CGravestormCard::OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't draw a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s draws a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CTestamentOfFaithCard::CTestamentOfFaithCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Testament of Faith"), CardType::GlobalEnchantment, nID, 
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	
	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTestamentOfFaithCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTestamentOfFaithCard::BeforeResolution(CAbilityAction* pAction)
{
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Wall AB"), 64083, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(this);
	pModifier2.ApplyTo(this);

	CCreatureCard* pCreature = (CCreatureCard*)GetIsAlsoA();

	pCreature->SetPrintedPower(Power(nValue));
	pCreature->SetPrintedToughness(Life(nValue));

	return true;
}

//____________________________________________________________________________
//
CShiftyDoppelgangerCard::CShiftyDoppelgangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shifty Doppelganger"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShiftyDoppelgangerCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3") BLUE_MANA_TEXT));

	cpAbility->AddExileCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShiftyDoppelgangerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CShiftyDoppelgangerCard::BeforeResolution(CAbilityAction* pAction)
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

			if (pCard->GetCardType().IsCreature())
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

void CShiftyDoppelgangerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				
				CCountedCardContainer pSubjects1;
				CCountedCardContainer pSubjects2;

				if (pCard->IsInplay())
				{
					pSubjects1.AddCard(pCard, CardPlacement::Top);

					CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
					pModifier2.ApplyTo((CCreatureCard*)pCard);

					if (GetZoneId() == ZoneId::Exile)
						pSubjects2.AddCard(this, CardPlacement::Top);

					CDoubleContainerEffectModifier pModifier3 = CDoubleContainerEffectModifier(GetGame(), _T("Shifty Doppelganger Effect"), 61093, &pSubjects1, &pSubjects2);
					pModifier3.ApplyTo(pSelectionPlayer);
				}
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CBalshanBeguilerCard::CBalshanBeguilerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balshan Beguiler"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBalshanBeguilerCard::OnCardSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalshanBeguilerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBalshanBeguilerCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CBalshanBeguilerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const
{
	triggerContext.nValue1 = (int)pPlayer;
	return true;
}

bool CBalshanBeguilerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	int nLibrarySize = pLibrary->GetSize();

	if (nLibrarySize == 0) return true;

	if (nLibrarySize == 1)
	{
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier1.ApplyTo(pPlayer);

		return true;
	}

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 2, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	
	pModifier2.ApplyTo(pPlayer);

	std::vector<SelectionEntry> entries;
	for (int i = 1; i <= 2; ++i)
	{
		CCard* pCard = pLibrary->GetAt(nLibrarySize - i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Put %s into %s's graveyard"),
			pCard->GetCardName(TRUE), pPlayer->GetPlayerName());

		entries.push_back(entry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return false;
}

void CBalshanBeguilerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s puts %s into %s's graveyard"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
			pModifier.ApplyTo(pCard);

			return;
		}
}

//____________________________________________________________________________
//
