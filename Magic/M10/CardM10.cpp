#include "stdafx.h"
#include "CardM10.h"

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
		
		DEFINE_CARD(CAcidicSlimeCard);
		DEFINE_CARD(CAcolyteOfXathridCard);
		DEFINE_CARD(CActOfTreasonCard);
		DEFINE_CARD(CAjaniGoldmaneCard);
		DEFINE_CARD(CAlluringSirenCard);
		DEFINE_CARD(CAngelsMercyCard);
		DEFINE_CARD(CAntQueenCard);
		DEFINE_CARD(CArmoredAscensionCard);
		DEFINE_CARD(CBaneslayerAngelCard);
		DEFINE_CARD(CBerserkersOfBloodRidgeCard);
		DEFINE_CARD(CBrambleCreeperCard);
		DEFINE_CARD(CBlindingMageCard);
		DEFINE_CARD(CBogardanHellkiteCard);
		DEFINE_CARD(CBorderlandRangerCard);
		DEFINE_CARD(CBountifulHarvestCard);
		DEFINE_CARD(CBurningInquiryCard);
		DEFINE_CARD(CBurstOfSpeedCard);
		DEFINE_CARD(CCanyonMinotaurCard);
		DEFINE_CARD(CCaptainOfTheWatchCard);
		DEFINE_CARD(CCelestialPurgeCard);
		DEFINE_CARD(CCemeteryReaperCard);
		DEFINE_CARD(CCentaurCourserCard);
		DEFINE_CARD(CChandraNalaarCard);
		DEFINE_CARD(CChildOfNightCard);
		DEFINE_CARD(CCapriciousEfreetCard);
		DEFINE_CARD(CConvincingMirageCard);
		DEFINE_CARD(CCudgelTrollCard);
		DEFINE_CARD(CDarksteelColossusCard);
		DEFINE_CARD(CDeadlyRecluseCard);
		DEFINE_CARD(CDisentombCard);
		DEFINE_CARD(CDisorientCard);
		DEFINE_CARD(CDivinationCard);
		DEFINE_CARD(CDivineVerdictCard);
		DEFINE_CARD(CDoomBladeCard);
		DEFINE_CARD(CDragonskullSummitCard);
		DEFINE_CARD(CDreadWarlockCard);
		DEFINE_CARD(CDrownedCatacombCard);
		DEFINE_CARD(CEliteVanguardCard);
		DEFINE_CARD(CElvishArchdruidCard);
		DEFINE_CARD(CElvishVisionaryCard);
		DEFINE_CARD(CEmeraldOryxCard);
		DEFINE_CARD(CEntanglingVinesCard);
		DEFINE_CARD(CEssenceScatterCard);
		DEFINE_CARD(CExcommunicateCard);
		DEFINE_CARD(CFabricateCard);
		DEFINE_CARD(CFieryHellhoundCard);
		DEFINE_CARD(CGargoyleCastleCard);
		DEFINE_CARD(CGarrukWildspeakerCard);
		DEFINE_CARD(CGlacialFortressCard);
		DEFINE_CARD(CGloriousChargeCard);
		DEFINE_CARD(CGoblinArtilleryCard);
		DEFINE_CARD(CGoblinChieftainCard);
		DEFINE_CARD(CGorgonFlailCard);
		DEFINE_CARD(CGreatSableStagCard);
		DEFINE_CARD(CGriffinSentinelCard);
		DEFINE_CARD(CHauntingEchoesCard);
		DEFINE_CARD(CHonorOfThePureCard);
		DEFINE_CARD(CHowlingBansheeCard);
		DEFINE_CARD(CHowlOfTheNightPackCard);
		DEFINE_CARD(CIceCageCard);
		DEFINE_CARD(CIgniteDisorderCard);
		DEFINE_CARD(CIllusionaryServantCard);
		DEFINE_CARD(CIndestructibilityCard);
		DEFINE_CARD(CInfernoElementalCard);
		DEFINE_CARD(CJaceBelerenCard);
		DEFINE_CARD(CKalonianBehemothCard);
		DEFINE_CARD(CKelinoreBatCard);
		DEFINE_CARD(CKindledFuryCard);
		DEFINE_CARD(CLifelinkCard);
		DEFINE_CARD(CLightwielderPaladinCard);
		DEFINE_CARD(CLilianaVessCard);
		DEFINE_CARD(CLurkingPredatorsCard);
		DEFINE_CARD(CMagebaneArmorCard);
		DEFINE_CARD(CMagmaPhoenixCard);
		DEFINE_CARD(CMasterOfTheWildHuntCard);
		DEFINE_CARD(CMerfolkSovereignCard);
		DEFINE_CARD(CMesaEnchantressCard);
		DEFINE_CARD(CMindControlCard);
		DEFINE_CARD(CMindShatterCard);
		DEFINE_CARD(CMindSpringCard);
		DEFINE_CARD(CMistLeopardCard);
		DEFINE_CARD(CMoldAdderCard);
		DEFINE_CARD(CNaturesSpiralCard);
		DEFINE_CARD(CNegateCard);
		DEFINE_CARD(COakenformCard);
		DEFINE_CARD(COpenTheVaultsCard);
		DEFINE_CARD(CPalaceGuardCard);
		DEFINE_CARD(CPlanarCleansingCard);
		DEFINE_CARD(CPonderCard);
		DEFINE_CARD(CPrizedUnicornCard);
		DEFINE_CARD(CProteanHydraCard);
		DEFINE_CARD(CRiseFromTheGraveCard);
		DEFINE_CARD(CRegenerateCard);
		DEFINE_CARD(CRhoxPikemasterCard);
		DEFINE_CARD(CRootboundCragCard);
		DEFINE_CARD(CRuneclawBearCard);
		DEFINE_CARD(CSafePassageCard);
		DEFINE_CARD(CSanguineBondCard);
		DEFINE_CARD(CSeismicStrikeCard);
		DEFINE_CARD(CSerpentOfTheEndlessSeaCard);
		DEFINE_CARD(CSiegeMastodonCard);
		DEFINE_CARD(CSignInBloodCard);
		DEFINE_CARD(CSilenceCard);
		DEFINE_CARD(CSilvercoatLionCard);
		DEFINE_CARD(CSleepCard);
		DEFINE_CARD(CSolemnOfferingCard);
		DEFINE_CARD(CSoulBleedCard);
		DEFINE_CARD(CSparkmageApprenticeCard)
		DEFINE_CARD(CSphinxAmbassadorCard)
		DEFINE_CARD(CStampedingRhinoCard);
		DEFINE_CARD(CStormfrontPegasusCard);
		DEFINE_CARD(CSunpetalGroveCard);
		DEFINE_CARD(CTendrilsOfCorruptionCard);
		DEFINE_CARD(CTimeWarpCard);
		DEFINE_CARD(CTomeScourCard);
		DEFINE_CARD(CTrumpetBlastCard);
		DEFINE_CARD(CUndeadSlayerCard);
		DEFINE_CARD(CVampireAristocratCard);
		DEFINE_CARD(CVampireNocturnusCard);
		DEFINE_CARD(CVeteranArmorsmithCard);
		DEFINE_CARD(CVeteranSwordsmithCard);
		DEFINE_CARD(CViashinoSpearhunterCard);
		DEFINE_CARD(CWallOfFaithCard);
		DEFINE_CARD(CWallOfFrostCard);
		DEFINE_CARD(CWarpathGhoulCard);
		DEFINE_CARD(CWindstormCard);
		DEFINE_CARD(CXathridDemonCard);
		DEFINE_CARD(CYawningFissureCard);
		DEFINE_CARD(CZephyrSpriteCard);
		DEFINE_CARD(CZombieGoliathCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CUndeadSlayerCard::CUndeadSlayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Slayer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Skeleton) | CREATURE_TYPE(Vampire) | CREATURE_TYPE(Zombie), false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAntQueenCard::CAntQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ant Queen"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			_T("Insect B"), 2723,
			1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinChieftainCard::CGoblinChieftainCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Chieftain"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKalonianBehemothCard::CKalonianBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalonian Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CMindSpringCard::CMindSpringCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Spring"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVampireAristocratCard::CVampireAristocratCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Vampire Aristocrat"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CNaturesSpiralCard::CNaturesSpiralCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Nature's Spiral"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Permanent, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CMerfolkSovereignCard::CMerfolkSovereignCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Sovereign"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//Target Merfolk creature is unblockable this turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Pump other Merfolk creatures
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHonorOfThePureCard::CHonorOfThePureCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honor of the Pure"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRhoxPikemasterCard::CRhoxPikemasterCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Rhox Pikemaster"), CardType::Creature, CREATURE_TYPE2(Soldier, Rhino), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter(). AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)); // Soldiers
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEliteVanguardCard::CEliteVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elite Vanguard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CCaptainOfTheWatchCard::CCaptainOfTheWatchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Captain of the Watch"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		//Pump other Soldiers
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1), CreatureKeyword::Vigilance));

		cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Make Soldier tokens
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Soldier L"), 2914, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMindShatterCard::CMindShatterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Shatter"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetExtraActionValueVector(ContextValue(1));
	cpSpell->SetAtRandom();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGreatSableStagCard::CGreatSableStagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Great Sable Stag"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CCelestialPurgeCard::CCelestialPurgeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Celestial Purge"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Red | CardType::Black, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CExcommunicateCard::CExcommunicateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Excommunicate"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CNegateCard::CNegateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Negate"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)))
{
}

//____________________________________________________________________________
//
CCanyonMinotaurCard::CCanyonMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Canyon Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CKindledFuryCard::CKindledFuryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Kindled Fury"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTrumpetBlastCard::CTrumpetBlastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Trumpet Blast"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+2), Life(+0)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngelsMercyCard::CAngelsMercyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Angel's Mercy"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Life(+7), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlindingMageCard::CBlindingMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blinding Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
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

//____________________________________________________________________________
//
CDivineVerdictCard::CDivineVerdictCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Divine Verdict"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard,	TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new AttackingBlockingCreatureComparer);
}

//____________________________________________________________________________
//
CGloriousChargeCard::CGloriousChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glorious Charge"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGriffinSentinelCard::CGriffinSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Griffin Sentinel"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CHowlOfTheNightPackCard::CHowlOfTheNightPackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Howl of the Night Pack"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("6") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			FALSE, FALSE,
			_T("Wolf A"), 2725, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPalaceGuardCard::CPalaceGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Palace Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	SetMaxBlockingCount(SpecialNumber::Any);
}

//____________________________________________________________________________
//
CPlanarCleansingCard::CPlanarCleansingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Planar Cleansing"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSiegeMastodonCard::CSiegeMastodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Siege Mastodon"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CSilvercoatLionCard::CSilvercoatLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silvercoat Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CStormfrontPegasusCard::CStormfrontPegasusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormfront Pegasus"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CVeteranArmorsmithCard::CVeteranArmorsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Armorsmith"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)); // Soldiers
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeteranSwordsmithCard::CVeteranSwordsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Swordsmith"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+0)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Soldier), false)); // Soldiers
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfFaithCard::CWallOfFaithCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Faith"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(5),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CConvincingMirageCard::CConvincingMirageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Convincing Mirage"), CardType::EnchantLand, nID)
{
	counted_ptr<CCardTypeEnchant> cpSpell(
		::CreateObject<CCardTypeEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->AddCardTypeToAdd(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Forest"));
	cpSpell->AddCardTypeToAdd(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Island"));
	cpSpell->AddCardTypeToAdd(CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Mountain"));
	cpSpell->AddCardTypeToAdd(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Plains"));
	cpSpell->AddCardTypeToAdd(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Swamp"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDisorientCard::CDisorientCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disorient"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT,
			Power(-7), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDivinationCard::CDivinationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divination"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEssenceScatterCard::CEssenceScatterCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Essence Scatter"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
}

//____________________________________________________________________________
//
CMindControlCard::CMindControlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Control"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSerpentOfTheEndlessSeaCard::CSerpentOfTheEndlessSeaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serpent of the Endless Sea"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT, Power(0), Life(0))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSerpentOfTheEndlessSeaCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//DEFINING P/T
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Island, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSerpentOfTheEndlessSeaCard::CanAttack(BOOL bIncludeTricks)
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
CTomeScourCard::CTomeScourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tome Scour"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			5));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CZephyrSpriteCard::CZephyrSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zephyr Sprite"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CAcolyteOfXathridCard::CAcolyteOfXathridCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Acolyte of Xathrid"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		BLACK_MANA_TEXT, Power(0), Life(1),
		_T("1") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1), // life delta
		PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CDisentombCard::CDisentombCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Disentomb"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CDoomBladeCard::CDoomBladeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Doom Blade"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CDreadWarlockCard::CDreadWarlockCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Dread Warlock"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2),
		CCardFilter::GetFilter(_T("black creatures")))
{
}

//____________________________________________________________________________
//
CHowlingBansheeCard::CHowlingBansheeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Howling Banshee"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKelinoreBatCard::CKelinoreBatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kelinore Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CSoulBleedCard::CSoulBleedCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Soul Bleed"), CardType::EnchantCreature, nID,
		_T("2") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulBleedCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSoulBleedCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CWarpathGhoulCard::CWarpathGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warpath Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
	_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CZombieGoliathCard::CZombieGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Goliath"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
	_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CActOfTreasonCard::CActOfTreasonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Act of Treason"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBerserkersOfBloodRidgeCard::CBerserkersOfBloodRidgeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Berserkers of Blood Ridge"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CBurstOfSpeedCard::CBurstOfSpeedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burst of Speed"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFieryHellhoundCard::CFieryHellhoundCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fiery Hellhound"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+1), Life(0))
{
}

//____________________________________________________________________________
//
CGoblinArtilleryCard::CGoblinArtilleryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Goblin Artillery"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3),
		_T(""),
		new AnyCreatureComparer, TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetResolutionModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CSeismicStrikeCard::CSeismicStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seismic Strike"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Mountain, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CViashinoSpearhunterCard::CViashinoSpearhunterCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Viashino Spearhunter"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CBorderlandRangerCard::CBorderlandRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borderland Ranger"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBountifulHarvestCard::CBountifulHarvestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bountiful Harvest"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("4") GREEN_MANA_TEXT));

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("lands")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrambleCreeperCard::CBrambleCreeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bramble Creeper"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+5));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCentaurCourserCard::CCentaurCourserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Courser"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CCudgelTrollCard::CCudgelTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Cudgel Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CEmeraldOryxCard::CEmeraldOryxCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Emerald Oryx"), CardType::Creature, CREATURE_TYPE(Antelope), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CMistLeopardCard::CMistLeopardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mist Leopard"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CMoldAdderCard::CMoldAdderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mold Adder"), CardType::Creature, CREATURE_TYPE2(Fungus, Snake), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a blue or black card"), _T("blue or black cards"), new CardTypeComparer(CardType::Blue | CardType::Black, false))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COakenformCard::COakenformCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Oakenform"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+3), Life(+3))
{
}

//____________________________________________________________________________
//
CPrizedUnicornCard::CPrizedUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prized Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddLure(FALSE);
}

//____________________________________________________________________________
//
CRegenerateCard::CRegenerateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Regenerate"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRuneclawBearCard::CRuneclawBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Runeclaw Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CStampedingRhinoCard::CStampedingRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stampeding Rhino"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWindstormCard::CWindstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Windstorm"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CGargoyleCastleCard::CGargoyleCastleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gargoyle Castle"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("5"),
				_T("Gargoyle"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTendrilsOfCorruptionCard::CTendrilsOfCorruptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tendrils Of Corruption"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Swamp, false), PreventableType::Preventable));

	cpSpell->SetControllerGainLife(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CElvishVisionaryCard::CElvishVisionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Visionary"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
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
CAcidicSlimeCard::CAcidicSlimeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Acidic Slime"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Land | CardType::_Enchantment, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlluringSirenCard::CAlluringSirenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alluring Siren"), CardType::Creature, CREATURE_TYPE(Siren), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),	// No mana cost
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CLightwielderPaladinCard::CLightwielderPaladinCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Lightwielder Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::Black, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGorgonFlailCard::CGorgonFlailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gorgon Flail"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Deathtouch);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeadlyRecluseCard::CDeadlyRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deadly Recluse"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CSparkmageApprenticeCard::CSparkmageApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sparkmage Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSignInBloodCard::CSignInBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sign in Blood"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, 
		2));

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFabricateCard::CFabricateCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Fabricate"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("artifact cards")),
		ZoneId::Hand, TRUE, FALSE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CIgniteDisorderCard::CIgniteDisorderCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Ignite Disorder"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new CardTypeComparer(CardType::Creature | CardType::Blue, true),
		FALSE, // Target player?
		Life(-3), // Life delta
		PreventableType::Preventable) // Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::White | CardType::Creature, true)));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CSolemnOfferingCard::CSolemnOfferingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Solemn Offering"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CEntanglingVinesCard::CEntanglingVinesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Entangling Vines"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("3") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::NoUntapInUntapPhase));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSilenceCard::CSilenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Silence"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpSpell(
		::CreateObject<CPlayerEffectEnchantment>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetAffectOpponentsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COpenTheVaultsCard::COpenTheVaultsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Open the Vaults"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInfernoElementalCard::CInfernoElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Inferno Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInfernoElementalCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CInfernoElementalCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CIllusionaryServantCard::CIllusionaryServantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusionary Servant"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
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

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagebaneArmorCard::CMagebaneArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magebane Armor"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+4), this,
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::PreventAllNoncombatDamage);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToRemove(CreatureKeyword::Flying);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMesaEnchantressCard::CMesaEnchantressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mesa Enchantress"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonskullSummitCard::CDragonskullSummitCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dragonskull Summit"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDragonskullSummitCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CDragonskullSummitCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CDrownedCatacombCard::CDrownedCatacombCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Drowned Catacomb"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDrownedCatacombCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CDrownedCatacombCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CGlacialFortressCard::CGlacialFortressCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Glacial Fortress"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGlacialFortressCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CGlacialFortressCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CRootboundCragCard::CRootboundCragCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rootbound Crag"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRootboundCragCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CRootboundCragCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CSunpetalGroveCard::CSunpetalGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sunpetal Grove"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSunpetalGroveCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CSunpetalGroveCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CSanguineBondCard::CSanguineBondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sanguine Bond"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSanguineBondCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CSanguineBondCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife)
	{
		triggerContext.m_LifeModifier.SetLifeDelta(Life(nFromLife - nToLife));
		triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
		triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
		return true;
	}

	return false;
}

//____________________________________________________________________________
//
CGarrukWildspeakerCard::CGarrukWildspeakerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Garruk Wildspeaker"), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
		PlaneswalkerType::Garruk, 3)
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetTargeting()->SetSubjectCount(2, 2, FALSE);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Beast J"), 2912,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+3), Life(+3), CreatureKeyword::Trample));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -4);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBurningInquiryCard::CBurningInquiryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burning Inquiry"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBurningInquiryCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBurningInquiryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
	CRandomDiscardModifier modifier2 = CRandomDiscardModifier(3);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		modifier1.ApplyTo(GetGame()->GetPlayer(ip));
		modifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CChildOfNightCard::CChildOfNightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Child of Night"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CSleepCard::CSleepCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sleep"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		CCardOrientationModifier* pModifier1 = new CCardOrientationModifier();

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
			
		CZoneCardModifier* pModifier3 = new CZoneCardModifier(ZoneId::Battlefield,CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>((pModifier1)));

			CZoneCardModifier* pModifier4 = new CZoneCardModifier(ZoneId::Battlefield,CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>((pModifier2)));

		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier3);
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier4);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPonderCard::CPonderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ponder"), CardType::Sorcery, nID)
{
	counted_ptr<CPonderSpell> cpSpell(
		::CreateObject<CPonderSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CPonderCard::CPonderSpell::CPonderSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CPonderCard::CPonderSpell::OnSelectionDone))
{
}

BOOL CPonderCard::CPonderSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	CZoneModifier modifier(GetGame(), ZoneId::Library, 3, CZoneModifier::RoleType::PrimaryPlayer);
	modifier.SetReorderInformation(true);
	modifier.ApplyTo(pAction->GetController());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;
		entry.strText = (_T("Shuffle the Library."));
		entry.dwContext = 1;
		entries.push_back(entry);
	}
	{
		SelectionEntry entry;
		entry.strText = (_T("Don't shuffle the Library."));
		entry.dwContext = 2;
		entries.push_back(entry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAction->GetOriginatingCard(), pAction->GetController());

	return TRUE;
}

void CPonderCard::CPonderSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
									DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 1)
				pSelectionPlayer->GetZoneById(ZoneId::Library)->Shuffle();
		}

	CDrawCardModifier modifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier.ApplyTo(pSelectionPlayer);
}

//__________________________________________________________________________
//
CChandraNalaarCard::CChandraNalaarCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Chandra Nalaar"), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, 
		PlaneswalkerType::Chandra, 6)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(0), PreventableType::Preventable));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), SpecialNumber::AnyNegative);
		cpAbility->SetExtraActionValueVector(ContextValue(1));
		
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->SetAbilityText(_T("0: Deal 0 damage to target creature. Activates"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(-10), PreventableType::Preventable));

		cpAbility->SetPropagateToTargetedPlayersCreatures();

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJaceBelerenCard::CJaceBelerenCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Jace Beleren"), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
		PlaneswalkerType::Jace, 3)
{
	{
		counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this,  _T(""), 1, 1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);
		cpAbility->SetAbilityText(_T("Each player draws a card. Activates"));  //Franavalon remove commented out. The text could be not accurate but at least give some info //commented out because this is causing the wrong action text

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 20));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -10);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCemeteryReaperCard::CCemeteryReaperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cemetery Reaper"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetEnchantmentCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(	
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Zombie H"), 2987, 1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagmaPhoenixCard::CMagmaPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Magma Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagmaPhoenixCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMagmaPhoenixCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CAjaniGoldmaneCard::CAjaniGoldmaneCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Ajani Goldmane"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Ajani, 4)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CAjaniGoldmaneCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+2), PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each creature you control. Those creatures gain vigilance until end of turn. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Avatar"), TOKEN_ID_BY_NAME,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);

		AddAbility(cpAbility.GetPointer());
	}
}

void CAjaniGoldmaneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pOppCard = pBattle->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
			pModifier.ApplyTo(pOppCard);
	}
}

//____________________________________________________________________________
//
CLilianaVessCard::CLilianaVessCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Liliana Vess"), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Liliana, 5)
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T(""),
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("cards")), 
				ZoneId::Library, TRUE, TRUE, FALSE));

		cpAbility->SetRevealCards(FALSE);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);
		cpAbility->SetAbilityText(_T("Put all creature cards from all graveyards onto the battlefield under your control. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLilianaVessCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLilianaVessCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer creatures;
	CZone* pZone;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}

	CGainControlModifier modifier = CGainControlModifier(GetGame(),(CCard*)this);

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
		modifier.ApplyTo(creatures.GetAt(ic));

	return true;
}

//____________________________________________________________________________
//
CHauntingEchoesCard::CHauntingEchoesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Haunting Echoes"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("non-basic lands"))));

	CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Graveyard, TRUE);
	cpSpell->AddCardModifier(pCardModifier);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHauntingEchoesCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CHauntingEchoesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();
	CZone* pExile = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Graveyard);
	CZone* pLibrary = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library);

	for (int i = 0; i < pExile->GetSize(); ++i)
	{
		if (!((pExile->GetAt(i)->GetCardType() & CardType::BasicLand).Any()))
		{
		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new CardNameComparer(pExile->GetAt(i)->GetPrintedCardName()));

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));

		pModifier.ApplyTo(target);
		}
	}

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new NegateCardComparer(new CardTypeComparer(CardType::BasicLand, false)));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));

	pModifier.ApplyTo(target);

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.ApplyTo(target);

	pLibrary->Shuffle(); 

	return true;
}

//____________________________________________________________________________
//
CTimeWarpCard::CTimeWarpCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Warp"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CTimeWarpCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

void CTimeWarpCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);	

	if (bResult) pmodifier.ApplyTo(target);  // You can apply it two times if you want to add two turns
	//pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CElvishArchdruidCard::CElvishArchdruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Archdruid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Elf), false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool for each Elf you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElvishArchdruidCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CElvishArchdruidCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CXathridDemonCard::CXathridDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Xathrid Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-7), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier(1));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CXathridDemonCard::BeforeResolveSelection));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CXathridDemonCard::BeforeResolveSelection(CXathridDemonCard::TriggeredAbility::TriggeredActionType* pAction)
{
	const CCard* Sacrificed = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetFirstCardSubject();
	Life n(0);

	if (Sacrificed->GetCardType().IsCreature()) 
	{CCreatureCard* pCreature = (CCreatureCard*)Sacrificed;
	  n=Life(GET_INTEGER(pCreature->GetLastKnownPower()));
	}
	CLifeModifier pmodifier1 = CLifeModifier(
			-n, // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NotDealingDamage // Damage Type
		);
	pmodifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CSafePassageCard::CSafePassageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Safe Passage"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	CPlayerEffectModifier* pmodifier1 = new CPlayerEffectModifier(PlayerEffectType::PreventAllPlayerDamage);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier1, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	CPlayerEffectModifier* pmodifier3 = new CPlayerEffectModifier(PlayerEffectType::PreventAllDamageToCreatures);	

	CScheduledPlayerModifier* pModifier4 = new CScheduledPlayerModifier(
		GetGame(), pmodifier3, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pmodifier3->LinkPlayerModifier(pModifier4);
	pModifier2->LinkPlayerModifier(pmodifier3);
	pmodifier1->LinkPlayerModifier(pModifier2);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier1);		

	cpSpell->SetAbilityName(_T("Prevent all damage that would be dealt to you and creatures you control this turn. Casts"));
	cpSpell->SetAbilityText(_T("Prevent all damage that would be dealt to you and creatures you control this turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelColossusCard::CDarksteelColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darksteel Colossus"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("11"), Power(11), Life(11))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CDarksteelColossusCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if (pToZone->GetZoneId() == ZoneId::Graveyard)
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::_Tokens);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CIndestructibilityCard::CIndestructibilityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Indestructibility"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("3") WHITE_MANA_TEXT,
			new TrueCardComparer,
			CardKeyword::Indestructible));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWallOfFrostCard::CWallOfFrostCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Frost"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2,
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWallOfFrostCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfFrostCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CBaneslayerAngelCard::CBaneslayerAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Baneslayer Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon) | CREATURE_TYPE(Dragon), false));

	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CArmoredAscensionCard::CArmoredAscensionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Armored Ascension"), nID,
		_T("3") WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CArmoredAscensionCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CArmoredAscensionCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Plains, false)));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLifelinkCard::CLifelinkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lifelink"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::Lifelink));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBogardanHellkiteCard::CBogardanHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bogardan Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddFlash(FALSE);
	{
		typedef
		TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	//cpAbility->GetTargeting().SetSubjectCount(1,3);
	cpAbility->GetTargeting().SetDistributeValues();
	cpAbility->SetValueToDistribute(-5);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYawningFissureCard::CYawningFissureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yawning Fissure"), CardType::Sorcery, nID)
{
    counted_ptr<CGlobalChgLifeSpell3> cpSpell(
        ::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery, _T("4") RED_MANA_TEXT, Life(0),
                                FALSE_CARD_COMPARER, PreventableType::Preventable,
                                1,
                                new CardTypeComparer(CardType::_Land, false)));

	cpSpell->SetSacrificeOpponentCardsOnly();

    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRiseFromTheGraveCard::CRiseFromTheGraveCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rise from the Grave"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false), 
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiseFromTheGraveCard::BeforeResolution));
}

bool CRiseFromTheGraveCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	pCreature->AddCardType(CardType::Black, CardType::Null, CardTypeEntry::Temporary);
	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Zombie);
	pModifier->ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CIceCageCard::CIceCageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ice Cage"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);

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

//____________________________________________________________________________
//
CCapriciousEfreetCard::CCapriciousEfreetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Capricious Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredDoubleTargetAbility< CTriggeredCapriciousEfreetAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));
	cpAbility->GetTargeting1().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting1().SetSubjectCount(1,1);
	cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));
	cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting2().SetSubjectCount(0,2);

	AddAbility(cpAbility.GetPointer());
}

CCapriciousEfreetCard::CTriggeredCapriciousEfreetAbility::CTriggeredCapriciousEfreetAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

BOOL CCapriciousEfreetCard::CTriggeredCapriciousEfreetAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;
	
	const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(pAction);
	if (!pTargetAction) return FALSE;
	const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();		

	CCountedCardContainer cards;
	CCard* pCard;

	for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin(); it != targetGroup1.CardSubjectEnd(); ++it)
	{
		pCard = const_cast<CCard*>(it->GetPointer());
		cards.AddCard(pCard, CardPlacement::Top);
	}
	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin(); it != targetGroup2.CardSubjectEnd(); ++it)
	{
		pCard = const_cast<CCard*>(it->GetPointer());
		cards.AddCard(pCard, CardPlacement::Top);
	}

	if (!cards.GetSize()) return FALSE;
	pCard = cards.GetAt(pAction->GetController()->GetRand() % cards.GetSize());

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	modifier.ApplyTo(pCard);

	return TRUE;
}

//____________________________________________________________________________
//
CVampireNocturnusCard::CVampireNocturnusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Nocturnus"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
		, m_CardFilter(_T("black card"), _T("black cards"), new CardTypeComparer(CardType::Black, false))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVampireNocturnusCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		counted_ptr<CTriggeredTopCardEnchantAbility> cpAbility(
		::CreateObject<CTriggeredTopCardEnchantAbility>(this, &m_CardFilter));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire),false));
		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer());
		cpAbility->GetEnchantment()->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetEnchantment()->GetLifeModifier().SetLifeDelta(Power(+1));
		cpAbility->GetEnchantment()->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetEnchantment()->SetAffectControllerCardsOnly();


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
void CVampireNocturnusCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			GetController()->GetPlayerName(),
			GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}

//____________________________________________________________________________
//
CLurkingPredatorsCard::CLurkingPredatorsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lurking Predators"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CLurkingPredatorsCard::OnResolutionCompleted))
{
	{

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CLurkingPredatorsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (pNextDraw->GetCardType().IsCreature())
	{
		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
		pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier->ApplyTo(pController);
	}
	else
	{
		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
			pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier->ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CSphinxAmbassadorCard::CSphinxAmbassadorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx Ambassador"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSphinxAmbassadorCard::OnNameSelected))
	, m_YesNoSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSphinxAmbassadorCard::OnYesNoSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSphinxAmbassadorCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CSphinxAmbassadorCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	if (pLibrary->GetSize() > 0)
	{
		CCountedCardContainer SelectedCard;

		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pPlayer, MinimumValue(1), MaximumValue(1), pController, ZoneId::Library, NULL, ZoneId::Library, FALSE, CardPlacement::Top, FALSE, FALSE, FALSE, &SelectedCard, FALSE);
		pModifier.ApplyTo(pController);

		int nZoneCount = pPlayer->GetZoneCount();

		CCountedCardContainer pCardList;
		pCardList.RemoveAll();
		int nCardListSize = 0;

		for (int nZone = 0; nZone < nZoneCount; ++nZone)
		{
			CZone* pZone = pPlayer->GetZone(nZone);
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

		if (!m_pGame->IsThinking() && !pPlayer->IsComputer())
		{
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

			m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pController, (DWORD)SelectedCard.GetAt(0));
		}
		else
		{
			CCountedCardContainer pAuxList;
			for (int i = 0; i < pCardList.GetSize(); ++i)
				if (pCardList.GetAt(i)->GetCardType().IsCreature())
					pAuxList.AddCard(pCardList.GetAt(i), CardPlacement::Top);

			pAuxList.Shuffle(pPlayer);

			std::vector<SelectionEntry> entries;
			{
				const CCard* pCard = pAuxList.GetAt(0);

				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

				entries.push_back(selectionEntry);
			}

			m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pController, (DWORD)SelectedCard.GetAt(0));
		}
	}
	return true;
}

void CSphinxAmbassadorCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CPlayer* pController = (CPlayer*)dwContext1;
				CCard* pSearched = (CCard*)dwContext2;

				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Put %s on the battlefield"), pSearched->GetCardName(TRUE));

					entries.push_back(selectionEntry);
				}
				if (pSearched->GetCardType().IsCreature())
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Do nothing"), pSearched->GetCardName(TRUE));

					entries.push_back(selectionEntry);
				}

				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;
				CPlayer* pController = (CPlayer*)dwContext1;
				CCard* pSearched = (CCard*)dwContext2;

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
				if ((pSearched->GetPrintedCardName() != pSelected->GetPrintedCardName()))
				{
					std::vector<SelectionEntry> entries;
					{
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = 0;
						selectionEntry.strText.Format(_T("Put %s on the battlefield"), pSearched->GetCardName(TRUE));

						entries.push_back(selectionEntry);
					}
					if (pSearched->GetCardType().IsCreature())
					{
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = 1;
						selectionEntry.strText.Format(_T("Do nothing"), pSearched->GetCardName(TRUE));

						entries.push_back(selectionEntry);
					}
					m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pSearched);
				}

				return;
			}
		}
}

void CSphinxAmbassadorCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CCard* pSearched = (CCard*)dwContext1;

				pSearched->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);

				pSearched->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
			if (it->dwContext == 1)
			{
				CCard* pSearched = (CCard*)dwContext1;

				pSearched->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
		}
}

//____________________________________________________________________________
//
CMasterOfTheWildHuntCard::CMasterOfTheWildHuntCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of the Wild Hunt"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMasterOfTheWildHuntCard::OnCardSelected))
		, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMasterOfTheWildHuntCard::OnNumberSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMasterOfTheWildHuntCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMasterOfTheWildHuntCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	m_WolfList.RemoveAll();

	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetOrientation()->IsUntapped() && pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (pCreature->GetCardKeyword()->HasChangeling() || pCreature->GetCreatureType().HasType(SingleCreatureType::Wolf))
				m_WolfList.AddCard(pCreature, CardPlacement::Top);
		}
	}

	if (m_WolfList.GetSize() == 0) return false;

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);

	for (int i = 0; i < m_WolfList.GetSize(); ++i)
		pModifier1.ApplyTo(m_WolfList.GetAt(i));

	for (int i = 0; i < m_WolfList.GetSize(); ++i)
	{
		CCreatureCard* pWolf = (CCreatureCard*)m_WolfList.GetAt(i);

		Power WolfPower = pWolf->GetLastKnownPower();

		if (WolfPower > 0)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-WolfPower), pWolf, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pTarget);
		}
	}
	
	RemainingPower = pTarget->GetLastKnownPower();
	if (RemainingPower > 0)
		CardSelection(pTarget->GetController(), pTarget);

	return true;
}

void CMasterOfTheWildHuntCard::CardSelection(CPlayer* pPlayer, CCreatureCard* pCreature)
{
	std::vector<SelectionEntry> entries;

	for (int i = 0; i < m_WolfList.GetSize(); ++i)
	{
		CCard* pCard = m_WolfList.GetAt(i);
		SelectionEntry entry;
			entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
								
		entry.strText.Format(_T("Deal damage to %s"),
			pCard->GetCardName(TRUE));
			entries.push_back(entry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pCreature);
}

void CMasterOfTheWildHuntCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCreature = (CCreatureCard*)it->dwContext;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCreature->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			NumberSelection(pSelectionPlayer, (CCreatureCard*)dwContext1, pCreature);

			return;
		}
}

void CMasterOfTheWildHuntCard::NumberSelection(CPlayer* pPlayer, CCreatureCard* pDealer, CCreatureCard* pRecipient)
{
	std::vector<SelectionEntry> entries;

	if (m_WolfList.GetSize() > 1)
	{
		for (int i = 1; i <= RemainingPower; ++i)
		{
			SelectionEntry entry;
				entry.dwContext = i;
								
			entry.strText.Format(_T("%s deals %d damage to %s"),
				pDealer->GetCardName(TRUE), i, pRecipient->GetCardName(TRUE));
				entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer,(DWORD)pDealer, (DWORD)pRecipient);
	}
	else
	{
		CLifeModifier pModifier = CLifeModifier(Life(-RemainingPower), pDealer, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		pModifier.ApplyTo(pRecipient);
	}
}

void CMasterOfTheWildHuntCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nDamage = (int)it->dwContext;
			CCreatureCard* pDealer = (CCreatureCard*)dwContext1;
			CCreatureCard* pRecipient = (CCreatureCard*)dwContext2;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s deals %d damage to %s"), pDealer->GetCardName(TRUE), nDamage, pRecipient->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CLifeModifier pModifier = CLifeModifier(Life(-nDamage), pDealer, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier.ApplyTo(pRecipient);
			
			RemainingPower = RemainingPower - nDamage;

			m_WolfList.RemoveCard(pRecipient);
			
			if (RemainingPower > 0)
				CardSelection(pSelectionPlayer, pDealer);

			return;
		}
}

//____________________________________________________________________________
//
CProteanHydraCard::CProteanHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Protean Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CProteanHydraCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHydraCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CProteanHydraCard::BeforeResolution1));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHydraCard::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(COUNTER_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProteanHydraCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
}

void CProteanHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);

		pModifier.ApplyTo(this);
	}
}

bool CProteanHydraCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	triggerContext.nValue1 = GET_INTEGER(damage.m_nLifeDelta);

	return (effect_index==1);
}

bool CProteanHydraCard::BeforeResolution1(CProteanHydraCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nValue = pAction->GetTriggerContext().nValue1;

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nValue, false);

	pModifier.ApplyTo(this);

	return true;
}

bool CProteanHydraCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return false;
	if ((CString)name != _T("+1/+1")) return false;
	if (n_value >= old) return false;

	CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, COUNTER_TRIGGER_ID);

	for (int i = 1; i <= old - n_value; ++i)
		pModifier.ApplyTo(this);
	
	return false;
}

bool CProteanHydraCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Protean Hydra Effect"), 61086, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
