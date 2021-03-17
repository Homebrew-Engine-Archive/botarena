#include "stdafx.h"
#include "CardEight.h"

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

		DEFINE_CARD(CAmbitionsCostCard);
		DEFINE_CARD(CAngelOfMercyCard);
		DEFINE_CARD(CAvatarOfHopeCard);
		DEFINE_CARD(CAvenCloudchaserCard);
		DEFINE_CARD(CAvenFisherCard);
		DEFINE_CARD(CAvenFlockCard);
		DEFINE_CARD(CBalanceOfPowerCard);
		DEFINE_CARD(CBlindingAngelCard);
		DEFINE_CARD(CBloodMoonCard);
		DEFINE_CARD(CBrassHeraldCard);
		DEFINE_CARD(CBriberyCard);
		DEFINE_CARD(CCanyonWildcatCard);
		DEFINE_CARD(CCarrionWallCard);
		DEFINE_CARD(CCatalogCard);
		DEFINE_CARD(CChastiseCard);
		DEFINE_CARD(CChokeCard);
		DEFINE_CARD(CCinderWallCard);
		DEFINE_CARD(CCoastalHornclawCard);
		DEFINE_CARD(CCoastalPiracyCard);
		DEFINE_CARD(CCoastalTowerCard);
		DEFINE_CARD(CCollectiveUnconsciousCard);
		DEFINE_CARD(CConcentrateCard);
		DEFINE_CARD(CCoralEelCard);
		DEFINE_CARD(CCowardiceCard);
		DEFINE_CARD(CCuriosityCard);
		DEFINE_CARD(CDeathPitOfferingCard);
		DEFINE_CARD(CDeathPitsOfRathCard);
		DEFINE_CARD(CDeathgazerCard);
		DEFINE_CARD(CDeepwoodGhoulCard);
		DEFINE_CARD(CDehydrationCard);
		DEFINE_CARD(CDemolishCard);
		DEFINE_CARD(CDemystifyCard);
		DEFINE_CARD(CDiabolicTutorCard);
		DEFINE_CARD(CDistortingLensCard);
		DEFINE_CARD(CDivingGriffinCard);
		DEFINE_CARD(CDuskImpCard);
		DEFINE_CARD(CElfhamePalaceCard);
		DEFINE_CARD(CEliteJavelineerCard);
		DEFINE_CARD(CElvishPioneerCard);
		DEFINE_CARD(CElvishScrapperCard);
		DEFINE_CARD(CEmperorCrocodileCard);
		DEFINE_CARD(CEnormousBalothCard);
		DEFINE_CARD(CEnrageCard);
		DEFINE_CARD(CExecuteCard);
		DEFINE_CARD(CFecundityCard);
		DEFINE_CARD(CFertileGroundCard);
		DEFINE_CARD(CFlashCounterCard);
		DEFINE_CARD(CFodderCannonCard);
		DEFINE_CARD(CForatogCard);
		DEFINE_CARD(CFugitiveWizardCard);
		DEFINE_CARD(CFurnaceOfRathCard);
		DEFINE_CARD(CGaeasHeraldCard);
		DEFINE_CARD(CGiantBadgerCard);
		DEFINE_CARD(CGlorySeekerCard);
		DEFINE_CARD(CGluttonousZombieCard);
		DEFINE_CARD(CGravePactCard);
		DEFINE_CARD(CGuerrillaTacticsCard);
		DEFINE_CARD(CHolyDayCard);
		DEFINE_CARD(CHornedTrollCard);
		DEFINE_CARD(CHuntedWumpusCard);
		DEFINE_CARD(CIndexCard);
		DEFINE_CARD(CIntruderAlarmCard);
		DEFINE_CARD(CIvoryMaskCard);
		DEFINE_CARD(CLarcenyCard);
		DEFINE_CARD(CLavaHoundsCard);
		DEFINE_CARD(CLesserGargadonCard);
		DEFINE_CARD(CLivingTerrainCard);
		DEFINE_CARD(CLlanowarBehemothCard);
		DEFINE_CARD(CLordOfTheUndeadCard);
		DEFINE_CARD(CMaggotCarrierCard);
		DEFINE_CARD(CManaLeakCard);
		DEFINE_CARD(CMasterDecoyCard);
		DEFINE_CARD(CMerchantOfSecretsCard);
		DEFINE_CARD(CMerchantScrollCard);
		DEFINE_CARD(CMindSlashCard);
		DEFINE_CARD(CMindSludgeCard);
		DEFINE_CARD(CMoggSentryCard);
		DEFINE_CARD(CMossMonsterCard);
		DEFINE_CARD(CMurderousBetrayalCard);
		DEFINE_CARD(CNantukoDiscipleCard);
		DEFINE_CARD(CNaturalAffinityCard);
		DEFINE_CARD(CNaturalizeCard);
		DEFINE_CARD(CNekrataalCard);
		DEFINE_CARD(CNoblePurposeCard);
		DEFINE_CARD(CNorwoodRangerCard);
		DEFINE_CARD(CObliterateCard);
		DEFINE_CARD(COraclesAttendantsCard);
		DEFINE_CARD(COrcishSpyCard);
		DEFINE_CARD(CPanicAttackCard);
		DEFINE_CARD(CPeachGardenOathCard);
		DEFINE_CARD(CPhyrexianArenaCard);
		DEFINE_CARD(CPhyrexianPlaguelordCard);
		DEFINE_CARD(CPlagueWindCard);
		DEFINE_CARD(CPlanarPortalCard);
		DEFINE_CARD(CPlowUnderCard);
		DEFINE_CARD(CPrimevalForceCard);
		DEFINE_CARD(CPrimevalShamblerCard);
		DEFINE_CARD(CPuppeteerCard);
		DEFINE_CARD(CRainOfBladesCard);
		DEFINE_CARD(CRavenousRatsCard);
		DEFINE_CARD(CRedeemCard);
		DEFINE_CARD(CReviveCard);
		DEFINE_CARD(CRewindCard);
		DEFINE_CARD(CRhoxCard);
		DEFINE_CARD(CRidgelineRagerCard);
		DEFINE_CARD(CRukhEggCard);
		DEFINE_CARD(CRushwoodDryadCard);
		DEFINE_CARD(CSageOfLatNamCard);
		DEFINE_CARD(CSaltMarshCard);
		DEFINE_CARD(CSeaEagleCard);
		DEFINE_CARD(CSearingWindCard);
		DEFINE_CARD(CSeverSoulCard);
		DEFINE_CARD(CSeveredLegionCard);
		DEFINE_CARD(CShiftingSkyCard);
		DEFINE_CARD(CShivanOasisCard);
		DEFINE_CARD(CShockTroopsCard);
		DEFINE_CARD(CSilverbackApeCard);
		DEFINE_CARD(CSizzleCard);
		DEFINE_CARD(CSkullOfOrmCard);
		DEFINE_CARD(CSlayCard);
		DEFINE_CARD(CSneakyHomunculusCard);
		DEFINE_CARD(CSolidarityCard);
		DEFINE_CARD(CSpiketailHatchlingCard);
		DEFINE_CARD(CSpittingSpiderCard);
		DEFINE_CARD(CSpreadingAlgaeCard);
		DEFINE_CARD(CStarCompassCard);
		DEFINE_CARD(CStoryCircleCard);
		DEFINE_CARD(CSuntailHawkCard);
		DEFINE_CARD(CSwarmOfRatsCard);
		DEFINE_CARD(CSwordDancerCard);
		DEFINE_CARD(CThievesAuctionCard);
		DEFINE_CARD(CTidalKrakenCard);
		DEFINE_CARD(CTradeRoutesCard);
		DEFINE_CARD(CTwoheadedDragonCard);
		DEFINE_CARD(CUnderworldDreamsCard);
		DEFINE_CARD(CUrborgVolcanoCard);
		DEFINE_CARD(CUrzasArmorCard);
		DEFINE_CARD(CVampiricSpiritCard);
		DEFINE_CARD(CVexingArcanixCard);
		DEFINE_CARD(CViashinoSandstalkerCard);
		DEFINE_CARD(CViciousHungerCard);
		DEFINE_CARD(CVineTrellisCard);
		DEFINE_CARD(CWarpedDevotionCard);
		DEFINE_CARD(CWrathOfMaritLageCard);
		DEFINE_CARD(CZombifyCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDeepwoodGhoulCard::CDeepwoodGhoulCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Deepwood Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1),
		_T(""))
{
	m_pRegenerationAbility->AddPayLifeDeltaCost(Life(-2));
}

//____________________________________________________________________________
//
CDuskImpCard::CDuskImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dusk Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CMossMonsterCard::CMossMonsterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moss Monster"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(6))
{
}

//____________________________________________________________________________
//
CNorwoodRangerCard::CNorwoodRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norwood Ranger"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CCoralEelCard::CCoralEelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coral Eel"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CFugitiveWizardCard::CFugitiveWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fugitive Wizard"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CGlorySeekerCard::CGlorySeekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glory Seeker"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CCarrionWallCard::CCarrionWallCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Carrion Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2),
		_T("1") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CNantukoDiscipleCard::CNantukoDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nantuko Disciple"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPrimevalShamblerCard::CPrimevalShamblerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Primeval Shambler"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CTidalKrakenCard::CTidalKrakenCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Tidal Kraken"), CardType::Creature, CREATURE_TYPE(Kraken), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
}

//____________________________________________________________________________
//
CHornedTrollCard::CHornedTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Horned Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CRushwoodDryadCard::CRushwoodDryadCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Rushwood Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CVineTrellisCard::CVineTrellisCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Vine Trellis"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(4),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CRhoxCard::CRhoxCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Rhox"), CardType::Creature, CREATURE_TYPE2(Rhino, Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5),
		_T("2") GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CElvishScrapperCard::CElvishScrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Scrapper"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			GREEN_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CForatogCard::CForatogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Foratog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2),
		GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));
}

//____________________________________________________________________________
//
CCanyonWildcatCard::CCanyonWildcatCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Canyon Wildcat"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CLavaHoundsCard::CLavaHoundsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lava Hounds"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpittingSpiderCard::CSpittingSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spitting Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
	
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T(""),	// Cost
				Life(-1),		// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),	// Affects creatures
				FALSE,	// Affects players
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));	// Preventable

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCinderWallCard::CCinderWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cinder Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCinderWallCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCinderWallCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSwordDancerCard::CSwordDancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sword Dancer"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Power(-1), Life(-0),	
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CShockTroopsCard::CShockTroopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shock Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNekrataalCard::CNekrataalCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Nekrataal"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude all artifact OR black cards
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeveredLegionCard::CSeveredLegionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Severed Legion"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CLordOfTheUndeadCard::CLordOfTheUndeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of the Undead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));	// Zombies
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(	
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhyrexianPlaguelordCard::CPhyrexianPlaguelordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Plaguelord"), CardType::Creature, CREATURE_TYPE(Carrier), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-4), Life(-4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CVampiricSpiritCard::CVampiricSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vampiric Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGluttonousZombieCard::CGluttonousZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gluttonous Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CSwarmOfRatsCard::CSwarmOfRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Swarm of Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Rat), false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiantBadgerCard::CGiantBadgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Badger"), CardType::Creature, CREATURE_TYPE(Badger), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRidgelineRagerCard::CRidgelineRagerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ridgeline Rager"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CCoastalHornclawCard::CCoastalHornclawCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Coastal Hornclaw"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CMasterDecoyCard::CMasterDecoyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Decoy"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSuntailHawkCard::CSuntailHawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Suntail Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSageOfLatNamCard::CSageOfLatNamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sage of Lat-Nam"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPuppeteerCard::CPuppeteerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Puppeteer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT,
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CUrborgVolcanoCard::CUrborgVolcanoCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urborg Volcano"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CShivanOasisCard::CShivanOasisCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shivan Oasis"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CSaltMarshCard::CSaltMarshCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Salt Marsh"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CElfhamePalaceCard::CElfhamePalaceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Elfhame Palace"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CCoastalTowerCard::CCoastalTowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Coastal Tower"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CConcentrateCard::CConcentrateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Concentrate"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNaturalizeCard::CNaturalizeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Naturalize"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CSolidarityCard::CSolidarityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Solidarity"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+5)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDemystifyCard::CDemystifyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Demystify"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CManaLeakCard::CManaLeakCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mana Leak"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("3"));
}

//____________________________________________________________________________
//
CCatalogCard::CCatalogCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Catalog"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 2));

	cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDemolishCard::CDemolishCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Demolish"), CardType::Sorcery, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CSkullOfOrmCard::CSkullOfOrmCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skull of Orm"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("5"),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDivingGriffinCard::CDivingGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Diving Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CFodderCannonCard::CFodderCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fodder Cannon"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("4"),
			new AnyCreatureComparer, FALSE,
			Life(-4), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlanarPortalCard::CPlanarPortalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planar Portal"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("6"),
			CCardFilter::GetFilter(_T("cards")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->SetRevealCards(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLlanowarBehemothCard::CLlanowarBehemothCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Llanowar Behemoth"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CDeathgazerCard::CDeathgazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathgazer"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-black creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathgazerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathgazerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDeathgazerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CDeathgazerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
CAvenFlockCard::CAvenFlockCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Aven Flock"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);	
}

//____________________________________________________________________________
//
CAvenCloudchaserCard::CAvenCloudchaserCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Cloudchaser"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiketailHatchlingCard::CSpiketailHatchlingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spiketail Hatchling"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelOfMercyCard::CAngelOfMercyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Mercy"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEnrageCard::CEnrageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Enrage"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));
}

//____________________________________________________________________________
//
CNaturalAffinityCard::CNaturalAffinityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Natural Affinity"), CardType::Instant, nID)
{
	counted_ptr<CIsAlsoAEnchantment> cpSpell(
		::CreateObject<CIsAlsoAEnchantment>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Animated Land B"), 64008));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRainOfBladesCard::CRainOfBladesCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Rain of Blades"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Life(-1),	// life delta
		new AttackingCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CSearingWindCard::CSearingWindCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Searing Wind"), CardType::Instant, nID, AbilityType::Instant,
		_T("8") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-10),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CPlagueWindCard::CPlagueWindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plague Wind"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->SetAffectOpponentCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CReviveCard::CReviveCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Revive"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Green, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CSizzleCard::CSizzleCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Sizzle"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		Life(-3),
		FALSE_CARD_COMPARER, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetTargetOpponentPlayerOnly();
}

//____________________________________________________________________________
//
CZombifyCard::CZombifyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Zombify"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CSeverSoulCard::CSeverSoulCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sever Soul"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell3> cpSpell(
		::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration,
			FALSE,
			TRUE));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDiabolicTutorCard::CDiabolicTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Diabolic Tutor"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
}

//____________________________________________________________________________
//
CPrimevalForceCard::CPrimevalForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primeval Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(8), Life(8))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(3, 3);
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
CMurderousBetrayalCard::CMurderousBetrayalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Murderous Betrayal"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->AddPayLifeDeltaCost(Life(SpecialNumber::DivideBy2RoundUp));
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindSlashCard::CMindSlashCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mind Slash"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this, 
			BLACK_MANA_TEXT, 
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// targeted player chooses?
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHolyDayCard::CHolyDayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Holy Day"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CChastiseCard::CChastiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chastise"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell3> cpSpell(
		::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT, 
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy,
			TRUE, FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlashCounterCard::CFlashCounterCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Flash Counter"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Instant, false))
{
}

//____________________________________________________________________________
//
CPeachGardenOathCard::CPeachGardenOathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Peach Garden Oath"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIndexCard::CIndexCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Index"), CardType::Sorcery, nID)
{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			5));

	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMerchantScrollCard::CMerchantScrollCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Merchant Scroll"), CardType::Sorcery, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("blue instant cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CMerchantOfSecretsCard::CMerchantOfSecretsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merchant of Secrets"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
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
CSneakyHomunculusCard::CSneakyHomunculusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sneaky Homunculus"), CardType::Creature, CREATURE_TYPE2(Homunculus, Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE,		// Can't block attacking creatures unless...
		CCardFilter::GetFilter(_T("creatures with power less than 2")));		// attacking creature's power is less than 2

	GetCreatureKeyword()->AddUnblockable(FALSE,	// Unblockable unless...
		CCardFilter::GetFilter(_T("creatures with power less than 2")));		// blocking creature's power is less than 2
}

//____________________________________________________________________________
//
CViashinoSandstalkerCard::CViashinoSandstalkerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Viashino Sandstalker"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavenousRatsCard::CRavenousRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravenous Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpreadingAlgaeCard::CSpreadingAlgaeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spreading Algae"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Swamp, false),
				CAbilityEnchant::CreateAbilityCallback(this, &CSpreadingAlgaeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
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
}

counted_ptr<CAbility> CSpreadingAlgaeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, 
							&CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpreadingAlgaeCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSpreadingAlgaeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

/*void CSpreadingAlgaeCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
		moveType = MoveType::Others;
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement);
}*/

//____________________________________________________________________________
//
CTradeRoutesCard::CTradeRoutesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trade Routes"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CExecuteCard::CExecuteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Execute"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT, 
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSlayCard::CSlayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slay"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT, 
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CViciousHungerCard::CViciousHungerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Vicious Hunger"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CElvishPioneerCard::CElvishPioneerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Pioneer"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::BasicLand, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->GetMoveCardModifier().SetTapped(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmbitionsCostCard::CAmbitionsCostCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ambition's Cost"), CardType::Sorcery, nID)
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
COrcishSpyCard::COrcishSpyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Spy"), CardType::Creature, CREATURE_TYPE2(Orc, Rogue), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 3));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlowUnderCard::CPlowUnderCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Plow Under"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CPanicAttackCard::CPanicAttackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Panic Attack"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBriberyCard::CBriberyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bribery"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			MinimumValue(0), MaximumValue(1),
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetSearchLibraryData(ZoneId::Battlefield, FALSE, FALSE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDehydrationCard::CDehydrationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dehydration"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
}

//____________________________________________________________________________
//
CRedeemCard::CRedeemCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Redeem"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(PreventionType::PreventAllDamage),
			SourceColor::Null));

	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CObliterateCard::CObliterateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Obliterate"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("6") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land | CardType::Artifact | CardType::Creature, false),
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());

	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CChokeCard::CChokeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Choke"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false)));

	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLivingTerrainCard::CLivingTerrainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Terrain"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Treefolk AB"), 64076));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIvoryMaskCard::CIvoryMaskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ivory Mask"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargeted));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCollectiveUnconsciousCard::CCollectiveUnconsciousCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Collective Unconscious"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpSpell->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBalanceOfPowerCard::CBalanceOfPowerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Balance of Power"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSurveyDrawCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSurveyDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMindSludgeCard::CMindSludgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Sludge"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell3> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell3>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			MoveType::Discard, ZoneId::Graveyard, TRUE, TRUE,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Battlefield));

	cpSpell->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGaeasHeraldCard::CGaeasHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gaea's Herald"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
			PlayerEffectType::SpellsCantBeCountered,
			reinterpret_cast<int>(CCardFilter::GetFilter(_T("creatures")))));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaggotCarrierCard::CMaggotCarrierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maggot Carrier"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenFisherCard::CAvenFisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Fisher"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnderworldDreamsCard::CUnderworldDreamsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Underworld Dreams"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggSentryCard::CMoggSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Sentry"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDistortingLensCard::CDistortingLensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Distorting Lens"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new TrueCardComparer));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLarcenyCard::CLarcenyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Larceny"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::PlayerEventCallback, 
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrzasArmorCard::CUrzasArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Urza's Armor"), CardType::Artifact, nID, 
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PreventDamage, 1));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmperorCrocodileCard::CEmperorCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Emperor Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmperorCrocodileCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmperorCrocodileCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEmperorCrocodileCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard == this)
			continue;

		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

bool CEmperorCrocodileCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard == this)
			continue;

		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CLesserGargadonCard::CLesserGargadonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lesser Gargadon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
									CWhenSelfAttackedBlocked::EventCallback, 
									&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

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
CEliteJavelineerCard::CEliteJavelineerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elite Javelineer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRewindCard::CRewindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rewind"), CardType::Instant, nID)
{
	counted_ptr<CCounterSpell2> cpSpell(
		::CreateObject<CCounterSpell2>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer,
			new CardTypeComparer(CardType::_Land, false),
			0, 4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFecundityCard::CFecundityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fecundity"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);	// From zone's player

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGuerrillaTacticsCard::CGuerrillaTacticsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Guerrilla Tactics"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand, ZoneId::_AllZones));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuerrillaTacticsCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CGuerrillaTacticsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	return true;
}

//____________________________________________________________________________
//
CCuriosityCard::CCuriosityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Curiosity"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CCuriosityCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CCuriosityCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	// Cannot use SetToOpponentsOnly here because of the enchant ability is on the enchant card and someone may conficate the
	// enchanted card. Trigger context function is used instead to determine if the trigger is valid or not.
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCuriosityCard::SetTriggerContext));
	//IMPORTANT: This isn't true anymore! This had produced this bug: If you enchant an opponent's creature it didn't trigger.
	//Now with "GetTrigger().SetToOpponentsOnly(TRUE);" back, it works on opponent's creatures AND if this aura is enchanted by
	//e.g. Confiscate. Keen Sense, Ophidian Eye & Sleeper's Robe also fixed this way (without all these comments).
	//SECOND NOTE: The note above is not correct. If you enchant an opponent's creature it should not trigger.
	//The meaning of the printed word "opponent" is: the opponent of whoever the controller of Curiosity is.
	//Therefore, if Curiosity is Confiscate'd, the definition of the "opponent" changes.
	//If the enchanted creature is Confiscate'd, the definition of the "opponent" stays the same.
	//Similarly, the word "you" in "..., you may draw a card." means the controller of Curiosity.
	//Reverting the change back : 2/18/2011.
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//
bool CCuriosityCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
	CPlayer* pToPlayer, Damage damage) const
{
	return GetController() != pToPlayer;
}

//____________________________________________________________________________
//
CFertileGroundCard::CFertileGroundCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fertile Ground"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this, &CFertileGroundCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFertileGroundCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredProdManaAbility, CWhenSelfTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoastalPiracyCard::CCoastalPiracyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Coastal Piracy"), CardType::GlobalEnchantment, nID, 
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathPitOfferingCard::CDeathPitOfferingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Death Pit Offering"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+2), Life(+2)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, 
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWarpedDevotionCard::CWarpedDevotionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Warped Devotion"), CardType::GlobalEnchantment, nID, 
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Hand));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNoblePurposeCard::CNoblePurposeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Noble Purpose"), CardType::GlobalEnchantment, nID, 
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNoblePurposeCard::SetTriggerContext));

	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CNoblePurposeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CDeathPitsOfRathCard::CDeathPitsOfRathCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Death Pits of Rath"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathPitsOfRathCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	AddAbility(cpAbility.GetPointer());
}

bool CDeathPitsOfRathCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											 CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CIntruderAlarmCard::CIntruderAlarmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Intruder Alarm"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpSpell(
			::CreateObject<CCardKeywordEnchantment>(this,
				_T("2") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWrathOfMaritLageCard::CWrathOfMaritLageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wrath of Marit Lage"), CardType::GlobalEnchantment, nID)
{
	{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Red | CardType::Creature, true)));

	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	AddSpell(cpSpell.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red creatures")));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CGravePactCard::CGravePactCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grave Pact"), CardType::GlobalEnchantment, nID, 
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianArenaCard::CPhyrexianArenaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Arena"), CardType::GlobalEnchantment, nID, 
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRukhEggCard::CRukhEggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rukh Egg"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, 
			CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRukhEggCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CRukhEggCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Rukh Egg Effect"), 61089, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CBlindingAngelCard::CBlindingAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blinding Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextCombatPhase, FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCowardiceCard::CCowardiceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cowardice"), CardType::GlobalEnchantment, nID, 
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_AllZones); // Added to allow proper interaction with Dakmor Lancer
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
		&CCowardiceCard::SetTriggerContext));
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CCowardiceCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	triggerContext.m_pCard = pToCard;
	return true;
}

//____________________________________________________________________________
//
CFurnaceOfRathCard::CFurnaceOfRathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Furnace of Rath"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			PlayerEffectType::MultiplyDamage, 1));

	cpEnchantment->SetMultipleEffectType(TRUE);

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CStarCompassCard::CStarCompassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Star Compass"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::BasicLand, false),
				CManaPool::Color::Black));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::BasicLand, false),
				CManaPool::Color::Blue));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::BasicLand, false),
				CManaPool::Color::Red));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::BasicLand, false),
				CManaPool::Color::Green));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::BasicLand, false),
				CManaPool::Color::White));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThievesAuctionCard::CThievesAuctionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thieves' Auction"), CardType::Sorcery, nID)
{
	counted_ptr<CAuctionSpell> cpSpell(
		::CreateObject<CAuctionSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetTapped();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrassHeraldCard::CBrassHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brass Herald"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(2), Life(2))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CBrassHeraldCard::OnSelectionDone))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CBrassHeraldCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CBrassHeraldCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	// Not this card
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
		
	cpAbility->SetAbilityName(_T("Brass Herald boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CBrassHeraldCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

		if (m_pGame->IsThinking() || GetController()->IsComputer())
		{
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				BOOL bAdd = FALSE;

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
							}
						}
			
				if (bAdd == TRUE)
				{
					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName());		
					entries.push_back(entry);
				}
			}

		}
		else
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				SelectionEntry entry;
				entry.dwContext = creatureType;
				entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
				entries.push_back(entry);
			}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CBrassHeraldCard::CreateAdditionAbility));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier.RemoveFrom(this);
	}
}

void CBrassHeraldCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CBrassHeraldCard::CreateAdditionAbility));

			pModifier.ApplyTo(this);

			for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
			{
				CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
				if (!pEnchantSpell) 
					continue;

				pEnchantSpell->StartEnchantment();
			}

			break;
		}
}

void CBrassHeraldCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 4;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SelectedType) || pCreatureCard->GetCardKeyword()->HasChangeling())
				matchingCards.AddCard(pCard, CardPlacement::Top);
			else
				revealedCards.AddCard(pCard, CardPlacement::Top);
		}
		else
			revealedCards.AddCard(pCard, CardPlacement::Top);
	}

	if (matchingCards.GetSize())
		pHand->AddCards(matchingCards, GetController(), MoveType::Others, CardPlacement::Top);

	if (revealedCards.GetSize())
	{
		if (revealedCards.GetSize() == 1)
		{
			pLibrary->AddCard(revealedCards.GetAt(0), GetController(), MoveType::Others, CardPlacement::Bottom);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				revealedCards.Sort();	// ascending
				pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &revealedCards;

				if (GetController()->GetInterface()->OrderCards(&orderCardsData))
					pLibrary->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Bottom);
			}
		}
	}
}

//____________________________________________________________________________
//
CTwoheadedDragonCard::CTwoheadedDragonCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Two-Headed Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		_T("1") RED_MANA_TEXT, Power(+2), Life(+0))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
	SetMaxBlockingCount(2);
}

//____________________________________________________________________________
//
CAvatarOfHopeCard::CAvatarOfHopeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avatar of Hope"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(9))
{
	SetMaxBlockingCount(SpecialNumber::Any);

	counted_ptr<CTriggeredReducedCostWhenPlayerLifeChangedAbility> cpAbility(
		::CreateObject<CTriggeredReducedCostWhenPlayerLifeChangedAbility>(this,
			Life(3), 6));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStoryCircleCard::CStoryCircleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Story Circle"), CardType::GlobalEnchantment, nID, 
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< 
			TTriggeredDamagePreventionAbility<TTriggerAdapter<CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback>>,
				CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetPreventionCost(WHITE_MANA_TEXT);
	cpAbility->SetLifeDelta(Life(PreventionType::PreventNextDamage));
	cpAbility->SetPreventDamageToController(TRUE);

	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShiftingSkyCard::CShiftingSkyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shifting Sky"), CardType::GlobalEnchantment, nID, 
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< 
			TTriggeredCardTypeEnchantmentAbility<TTriggerAdapter<CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback>>,
				CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCardTypeComparer(std::auto_ptr<CardComparer>(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false))));
	
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHuntedWumpusCard::CHuntedWumpusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunted Wumpus"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COraclesAttendantsCard::COraclesAttendantsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oracle's Attendants"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			SourceColor::_AllSources, TRUE));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CSeaEagleCard::CSeaEagleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sea Eagle"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSilverbackApeCard::CSilverbackApeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverback Ape"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
}

//____________________________________________________________________________
//
CBloodMoonCard::CBloodMoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blood Moon"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardTypeEnchantment> cpSpell(
		::CreateObject<CCardTypeEnchantment>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEnormousBalothCard::CEnormousBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enormous Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT, Power(7), Life(7))
{
}

//____________________________________________________________________________
//
CVexingArcanixCard::CVexingArcanixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vexing Arcanix"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVexingArcanixCard::OnNameSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVexingArcanixCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CVexingArcanixCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCards = pAction->GetCostConfigEntry().GetExtraValue();
	
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nZoneCount = pTarget->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pTarget->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	return true;
}

void CVexingArcanixCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects no name"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize() > 0)
				{
					CCard* pCard = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

					pModifier1.ApplyTo(pSelectionPlayer);

					CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier2.ApplyTo(pCard);
				}
								
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s names %s"), pSelectionPlayer->GetPlayerName(), pSelected->GetPrintedCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize() > 0)
				{
					CCard* pCard = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

					pModifier1.ApplyTo(pSelectionPlayer);

					if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
					{
						CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
						pModifier2.ApplyTo(pCard);
					}
					else
					{
						CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
						pModifier2.ApplyTo(pCard);

						CLifeModifier pModifier3 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
						pModifier3.ApplyTo(pSelectionPlayer);
					}
				}
								
				return;
			}
		}
}

//____________________________________________________________________________
//