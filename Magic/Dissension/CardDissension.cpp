#include "stdafx.h"
#include "CardDissension.h"

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

		DEFINE_CARD(CAEthermagesTouchCard);
		DEFINE_CARD(CAnthemOfRakdosCard);
		DEFINE_CARD(CAquastrandSpiderCard);
		DEFINE_CARD(CAssaultZeppelidCard);
		DEFINE_CARD(CAuroraEidolonCard);
		DEFINE_CARD(CAvatarOfDiscordCard);
		DEFINE_CARD(CAzoriusAEthermageCard);
		DEFINE_CARD(CAzoriusChanceryCard);
		DEFINE_CARD(CAzoriusFirstWingCard);
		DEFINE_CARD(CAzoriusGuildmageCard);
		DEFINE_CARD(CAzoriusHeraldCard);
		DEFINE_CARD(CAzoriusPloyCard);
		DEFINE_CARD(CAzoriusSignetCard);
		DEFINE_CARD(CBeaconHawkCard);
		DEFINE_CARD(CBloodCryptCard);
		DEFINE_CARD(CBoundDeterminedCard);
		DEFINE_CARD(CBrainPryCard);
		DEFINE_CARD(CBreedingPoolCard);
		DEFINE_CARD(CCacklingFlamesCard);
		DEFINE_CARD(CCelestialAncientCard);
		DEFINE_CARD(CCoilingOracleCard);
		DEFINE_CARD(CCourtHussarCard);
		DEFINE_CARD(CCrimePunishmentCard);
		DEFINE_CARD(CCryptChampionCard);
		DEFINE_CARD(CCytoplastManipulatorCard);
		DEFINE_CARD(CCytoplastRootkinCard);
		DEFINE_CARD(CCytospawnShamblerCard);
		DEFINE_CARD(CDeliriumSkeinsCard);
		DEFINE_CARD(CDemonsJesterCard);
		DEFINE_CARD(CDovescapeCard);
		DEFINE_CARD(CDreadSlagCard);
		DEFINE_CARD(CDrekavacCard);
		DEFINE_CARD(CEnemyOfTheGuildpactCard);
		DEFINE_CARD(CEnigmaEidolonCard);
		DEFINE_CARD(CEntropicEidolonCard);
		DEFINE_CARD(CEvolutionVatCard);
		DEFINE_CARD(CFertileImaginationCard);
		DEFINE_CARD(CFlameKinWarScoutCard);
		DEFINE_CARD(CGhostQuarterCard);
		DEFINE_CARD(CGnatAlleyCreeperCard);
		DEFINE_CARD(CGobhobblerRatsCard);
		DEFINE_CARD(CGovernTheGuildlessCard);
		DEFINE_CARD(CGrandArbiterAugustinIVCard);
		DEFINE_CARD(CGuardianOfTheGuildpactCard);
		DEFINE_CARD(CHaazdaExoneratorCard);
		DEFINE_CARD(CHaazdaShieldMateCard);
		DEFINE_CARD(CHallowedFountainCard);
		DEFINE_CARD(CHeliumSquirterCard);
		DEFINE_CARD(CHellholeRatsCard);
		DEFINE_CARD(CHideSeekCard);
		DEFINE_CARD(CHitRunCard);
		DEFINE_CARD(CIgnorantBlissCard);
		DEFINE_CARD(CIndrikStomphowlerCard);
		DEFINE_CARD(CInfernalTutorCard);
		DEFINE_CARD(CIsperiaTheInscrutableCard);
		DEFINE_CARD(CJaggedPoppetCard);
		DEFINE_CARD(CLeafdrakeRoostCard);
		DEFINE_CARD(CLyzoldaTheBloodWitchCard);
		DEFINE_CARD(CMacabreWaltzCard);
		DEFINE_CARD(CMightOfTheNephilimCard);
		DEFINE_CARD(CMinisterOfImpedimentsCard);
		DEFINE_CARD(CMistralChargerCard);
		DEFINE_CARD(CMomirVigSimicVisionaryCard);
		DEFINE_CARD(CNettlingCurseCard);
		DEFINE_CARD(CNihilisticGleeCard);
		DEFINE_CARD(CNovijenHeartOfProgressCard);
		DEFINE_CARD(CNovijenSagesCard);
		//DEFINE_CARD(COcularHaloCard);
		DEFINE_CARD(COgreGatecrasherCard);
		DEFINE_CARD(CPainMagnificationCard);
		DEFINE_CARD(CPalliationAccordCard);
		DEFINE_CARD(CPatagiaViperCard);
		DEFINE_CARD(CPlaxcasterFroglingCard);
		DEFINE_CARD(CPlaxmantaCard);
		DEFINE_CARD(CPlumesOfPeaceCard);
		DEFINE_CARD(CPrideOfTheCloudsCard);
		DEFINE_CARD(CProclamationOfRebirthCard);
		DEFINE_CARD(CProperBurialCard);
		DEFINE_CARD(CProteanHulkCard);
		DEFINE_CARD(CPsychoticFuryCard);
		DEFINE_CARD(CPureSimpleCard);
		DEFINE_CARD(CRagamuffynCard);
		DEFINE_CARD(CRakdosCarnariumCard);
		DEFINE_CARD(CRakdosGuildmageCard);
		DEFINE_CARD(CRakdosIckspitterCard);
		DEFINE_CARD(CRakdosPitDragonCard);
		DEFINE_CARD(CRakdosSignetCard);
		DEFINE_CARD(CRakdosTheDefilerCard);
		DEFINE_CARD(CRatcatcherCard);
		DEFINE_CARD(CResearchDevelopmentCard);
		DEFINE_CARD(CRiotSpikesCard);
		DEFINE_CARD(CRiseFallCard);
		DEFINE_CARD(CRixMaadiDungeonPalaceCard);
		DEFINE_CARD(CSandstormEidolonCard);
		DEFINE_CARD(CSilkwingScoutCard);
		DEFINE_CARD(CSimicBasiliskCard);
		DEFINE_CARD(CSimicGrowthChamberCard);
		DEFINE_CARD(CSimicInitiateCard);
		DEFINE_CARD(CSimicRagwormCard);
		DEFINE_CARD(CSimicSignetCard);
		DEFINE_CARD(CSimicSkySwallowerCard);
		DEFINE_CARD(CSkyHussarCard);
		DEFINE_CARD(CSkyscribingCard);
		DEFINE_CARD(CSkullmeadCauldronCard);
		DEFINE_CARD(CSlaughterhouseBouncerCard);
		DEFINE_CARD(CSlitheringShadeCard);
		DEFINE_CARD(CSoulswornJuryCard);
		DEFINE_CARD(CSpellSnareCard);
		DEFINE_CARD(CSporebackTrollCard);
		DEFINE_CARD(CSproutingPhytohydraCard);
		DEFINE_CARD(CStalkingVengeanceCard);
		DEFINE_CARD(CSteelingStanceCard);
		DEFINE_CARD(CStoicEphemeraCard);
		DEFINE_CARD(CStompAndHowlCard);
		DEFINE_CARD(CStreetSavvyCard);
		DEFINE_CARD(CSupplyDemandCard);
		DEFINE_CARD(CSwiftSilenceCard);
		DEFINE_CARD(CTidespoutTyrantCard);
		DEFINE_CARD(CTransguildCourierCard);
		DEFINE_CARD(CTrialErrorCard);
		DEFINE_CARD(CTrygonPredatorCard);
		DEFINE_CARD(CTwinstrikeCard);
		DEFINE_CARD(CUnlivingPsychopathCard);
		DEFINE_CARD(CUtopiaSprawlCard);
		DEFINE_CARD(CUtvaraScalperCard);
		DEFINE_CARD(CVerdantEidolonCard);
		DEFINE_CARD(CVesperGhoulCard);
		DEFINE_CARD(CVigeanGraftmageCard);
		DEFINE_CARD(CVigeanHydroponCard);
		DEFINE_CARD(CVigeanIntuitionCard);
		DEFINE_CARD(CVisionSkeinsCard);
		DEFINE_CARD(CVoidslimeCard);
		DEFINE_CARD(CWakestoneGargoyleCard);
		DEFINE_CARD(CWalkingArchiveCard);
		DEFINE_CARD(CWeightOfSpiresCard);
		DEFINE_CARD(CWhiptailMolochCard);
		DEFINE_CARD(CWindreaverCard);
		DEFINE_CARD(CWreckingBallCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAzoriusChanceryCard::CAzoriusChanceryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Azorius Chancery"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CRakdosCarnariumCard::CRakdosCarnariumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rakdos Carnarium"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CSimicGrowthChamberCard::CSimicGrowthChamberCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Simic Growth Chamber"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
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
CSimicRagwormCard::CSimicRagwormCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simic Ragworm"), CardType::Creature, CREATURE_TYPE(Worm), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSimicSkySwallowerCard::CSimicSkySwallowerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Simic Sky Swallower"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("5") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CBloodCryptCard::CBloodCryptCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Blood Crypt"), nID, 
		CardType::Swamp | CardType::Mountain | CardType::NonbasicLand, 
		BLACK_MANA_TEXT, RED_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CBreedingPoolCard::CBreedingPoolCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Breeding Pool"), nID, 
		CardType::Forest | CardType::Island | CardType::NonbasicLand, 
		GREEN_MANA_TEXT, BLUE_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CHallowedFountainCard::CHallowedFountainCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Hallowed Fountain"), nID, 
		CardType::Plains | CardType::Island | CardType::NonbasicLand, 
		WHITE_MANA_TEXT, BLUE_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CTidespoutTyrantCard::CTidespoutTyrantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tidespout Tyrant"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CProteanHulkCard::CProteanHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Protean Hulk"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Tokens);

        AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
            TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::_Tokens));

        cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(
					ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetAbilityName(_T("search for a creature"));
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens | ZoneId::Exile, ZoneId::Graveyard));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, FALSE));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Exile));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CProteanHulkCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
	{
		m_CardFilter1.AddComparer(new AnyCreatureComparer);
		m_CardFilter1.AddComparer(new ConvertedManaCostComparer<std::less<int>>(7));
		m_CardFilter1.SetFilterName(_T("a creature card with converted mana cost 6 or less"), _T("creature cards with converted mana cost 6 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter1);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter2.AddComparer(new AnyCreatureComparer);
		m_CardFilter2.AddComparer(new ConvertedManaCostComparer<std::less<int>>(6));
		m_CardFilter2.SetFilterName(_T("a creature card with converted mana cost 5 or less"), _T("creature cards with converted mana cost 5 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter2);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter3.AddComparer(new AnyCreatureComparer);
		m_CardFilter3.AddComparer(new ConvertedManaCostComparer<std::less<int>>(5));
		m_CardFilter3.SetFilterName(_T("a creature card with converted mana cost 4 or less"), _T("creature cards with converted mana cost 4 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter3);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter4.AddComparer(new AnyCreatureComparer);
		m_CardFilter4.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
		m_CardFilter4.SetFilterName(_T("a creature card with converted mana cost 3 or less"), _T("creature cards with converted mana cost 3 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter4);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext4));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter5.AddComparer(new AnyCreatureComparer);
		m_CardFilter5.AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
		m_CardFilter5.SetFilterName(_T("a creature card with converted mana cost 2 or less"), _T("creature cards with converted mana cost 2 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter5);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext5));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter6.AddComparer(new AnyCreatureComparer);
		m_CardFilter6.AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
		m_CardFilter6.SetFilterName(_T("a creature card with converted mana cost 1 or less"), _T("creature cards with converted mana cost 1 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter6);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext6));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter7.AddComparer(new AnyCreatureComparer);
		m_CardFilter7.AddComparer(new ConvertedManaCostComparer<std::less<int>>(1));
		m_CardFilter7.SetFilterName(_T("a creature card with converted mana cost 0 or less"), _T("creature cards with converted mana cost 0 or less"));

		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
            ZoneId::_Tokens, ZoneId::Exile));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter7);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHulkCard::SetTriggerContext7));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CProteanHulkCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount1 = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount1 = nCount1 + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	CZone* pContLibrary = GetController()->GetZoneById(ZoneId::Library);

	int nCount2 = 0;
	for (int i = 0; i < pContLibrary->GetSize(); ++i)
	{
		CCard* pCard = pContLibrary->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			nCount2 = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
			if (nCount2 <= 6 - nCount1)
			{
				triggerContext.m_MoveCardModifier.SetFromZone(ZoneId::Exile);
				triggerContext.m_MoveCardModifier.SetToZone(ZoneId::_Tokens);
				pAction->SetTriggerContext(triggerContext);
	return true;
}
		}
	}

	triggerContext.m_MoveCardModifier.SetFromZone(ZoneId::Exile);
	triggerContext.m_MoveCardModifier.SetToZone(ZoneId::Graveyard);
	pAction->SetTriggerContext(triggerContext);
	return true;
}

bool CProteanHulkCard::SetTriggerContext1(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 0;
}

bool CProteanHulkCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 1;
}

bool CProteanHulkCard::SetTriggerContext3(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 2;
}

bool CProteanHulkCard::SetTriggerContext4(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 3;
}

bool CProteanHulkCard::SetTriggerContext5(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 4;
}

bool CProteanHulkCard::SetTriggerContext6(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 5;
}

bool CProteanHulkCard::SetTriggerContext7(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContTokens = GetController()->GetZoneById(ZoneId::_Tokens);

	int nCount = 0;
	for (int i = 0; i < pContTokens->GetSize(); ++i)
	{
		CCard* pCard = pContTokens->GetAt(i);
		nCount = nCount + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	return nCount == 6;
}

//____________________________________________________________________________
//
CTransguildCourierCard::CTransguildCourierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Transguild Courier"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(3), Life(3))
{
	AddCardType(CardType::_ColorMask, CardType::_ColorMask); //Is all five colors.
	//AddCardType(CardType::White | CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CAssaultZeppelidCard::CAssaultZeppelidCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Assault Zeppelid"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CAvatarOfDiscordCard::CAvatarOfDiscordCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avatar of Discord"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetDiscardCount(2);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAzoriusAEthermageCard::CAzoriusAEthermageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azorius Æthermage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Hand));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBeaconHawkCard::CBeaconHawkCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Beacon Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);	

	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBeaconHawkCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBeaconHawkCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();

	if (pTarget->GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CCelestialAncientCard::CCelestialAncientCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Celestial Ancient"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))

		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCelestialAncientCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	//cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter
	/*cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetToBase(TRUE);
	cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetPowerModifier().SetToBase(TRUE);
	cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);*/

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

void CCelestialAncientCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CDemonsJesterCard::CDemonsJesterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Demon's Jester"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Hand);
	cpAbility->SetConditionValue(0);
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CDreadSlagCard::CDreadSlagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dread Slag"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));

		cpAbility->SetPowerMultiplier(Power(-4));
		cpAbility->SetToughnessMultiplier(Life(-4));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrekavacCard::CDrekavacCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drekavac"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));
 
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGnatAlleyCreeperCard::CGnatAlleyCreeperCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Gnat Alley Creeper"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1),
		CCardFilter::GetFilter(_T("non-flying creatures"))) //can't be blocked except by "this"
{
}

//____________________________________________________________________________
//
CHaazdaExoneratorCard::CHaazdaExoneratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haazda Exonerator"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Aura, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHaazdaShieldMateCard::CHaazdaShieldMateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haazda Shield Mate"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	AddUpkeepCost(WHITE_MANA_TEXT WHITE_MANA_TEXT);

	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::_AllSources, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIndrikStomphowlerCard::CIndrikStomphowlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Indrik Stomphowler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinisterOfImpedimentsCard::CMinisterOfImpedimentsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minister of Impediments"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CMistralChargerCard::CMistralChargerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mistral Charger"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CRagamuffynCard::CRagamuffynCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ragamuffyn"), CardType::Creature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));

	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter); //Sacrifice a creature or land

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CRagamuffynCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CRagamuffynCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CGobhobblerRatsCard::CGobhobblerRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gobhobbler Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))

{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Hand);
	cpAbility->SetConditionValue(0);
	cpAbility->SetConditionIsMaximum();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CGobhobblerRatsCard::CreateRegenerationAbility)));
	
	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGobhobblerRatsCard::CreateRegenerationAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CRakdosGuildmageCard::CRakdosGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakdos Guildmage"), CardType::Creature, CREATURE_TYPE2(Zombie, Shaman), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRakdosGuildmageCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRakdosGuildmageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Goblin B"), 2805, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());
	
	return true;
}

//____________________________________________________________________________
//
CRakdosPitDragonCard::CRakdosPitDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakdos Pit Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT RED_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Hand);
		cpAbility->SetConditionValue(0);
		cpAbility->SetConditionIsMaximum();

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRatcatcherCard::CRatcatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ratcatcher"), CardType::Creature, CREATURE_TYPE2(Ogre, Rogue), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rat), false));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilkwingScoutCard::CSilkwingScoutCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silkwing Scout"), CardType::Creature, CREATURE_TYPE2(Faerie, Scout), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddSacrificeCost();

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlitheringShadeCard::CSlitheringShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Slithering Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		BLACK_MANA_TEXT, Power(0), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Hand);
		cpAbility->SetConditionValue(0);
		cpAbility->SetConditionIsMaximum();

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CSoulswornJuryCard::CSoulswornJuryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulsworn Jury"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStoicEphemeraCard::CStoicEphemeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stoic Ephemera"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStoicEphemeraCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CStoicEphemeraCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Sacrifice Effect"), 61106, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CTrygonPredatorCard::CTrygonPredatorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Trygon Predator"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUtvaraScalperCard::CUtvaraScalperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Utvara Scalper"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CVesperGhoulCard::CVesperGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vesper Ghoul"), CardType::Creature, CREATURE_TYPE2(Zombie, Druid), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhiptailMolochCard::CWhiptailMolochCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whiptail Moloch"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") RED_MANA_TEXT, Power(6), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzoriusSignetCard::CAzoriusSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Azorius Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)

{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CRakdosSignetCard::CRakdosSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rakdos Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)

{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CSimicSignetCard::CSimicSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Simic Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CSkullmeadCauldronCard::CSkullmeadCauldronCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skullmead Cauldron"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+3), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeafdrakeRoostCard::CLeafdrakeRoostCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Leafdrake Roost"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CLeafdrakeRoostCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CLeafdrakeRoostCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pEnchantedCard,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				_T("Drake A"), 2806,
				1));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CNihilisticGleeCard::CNihilisticGleeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nihilistic Glee"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpAbility->SetReverseLifeDeltaToController();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddPayLifeDeltaCost(Life(-2));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNihilisticGleeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNihilisticGleeCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CProperBurialCard::CProperBurialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Proper Burial"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProperBurialCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CProperBurialCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_LifeModifier.SetLifeDelta(pCreature->GetLastKnownToughness());
	return true;
}

//____________________________________________________________________________
//
CPsychoticFuryCard::CPsychoticFuryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Psychotic Fury"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AnyCreatureComparer)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardMulticoloredComparer);

	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CSpellSnareCard::CSpellSnareCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Snare"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant, 
		new ConvertedManaCostComparer<std::equal_to<int>>(2))
{
}

//____________________________________________________________________________
//
CVisionSkeinsCard::CVisionSkeinsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vision Skeins"), CardType::Instant, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 2, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWeightOfSpiresCard::CWeightOfSpiresCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Weight of Spires"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, FALSE,
			new CardTypeComparer(CardType::NonbasicLand, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWreckingBallCard::CWreckingBallCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wrecking Ball"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CPureSimpleCard::CPureSimpleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pure // Simple"), CardType::Sorcery, nID)
{
	{
		//Pure
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardMulticoloredComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Pure. Casts"));
		cpSpell->SetAbilityName(_T("Pure"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Simple
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Aura | CardType::Equipment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Simple. Casts"));
		cpSpell->SetAbilityName(_T("Simple"));
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSupplyDemandCard::CSupplyDemandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Supply // Demand"), CardType::Sorcery, nID)
{
	m_CardFilter.SetFilterName(_T("a multicolored card"), _T("multicolored cards"));
	m_CardFilter.AddComparer(new CardMulticoloredComparer);
	//Demand above.
	{
		//Supply
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Saproling G"), 2956,
				0));

		cpSpell->SetAbilityText(_T("Supply. Casts"));
		cpSpell->SetAbilityName(_T("Supply"));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Demand
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter, 
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpSpell->SetAbilityText(_T("Demand. Casts"));
		cpSpell->SetAbilityName(_T("Demand"));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
 	}
}

//____________________________________________________________________________
//
CSlaughterhouseBouncerCard::CSlaughterhouseBouncerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slaughterhouse Bouncer"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlaughterhouseBouncerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSlaughterhouseBouncerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CSlaughterhouseBouncerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

bool CSlaughterhouseBouncerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CPalliationAccordCard::CPalliationAccordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Palliation Accord"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SHIELD_COUNTER, +1, false));	

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T(""),
			Life(1), SourceColor::_AllSources, 
			TRUE)); // prevent damage to this card's controller

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SHIELD_COUNTER), -1);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COgreGatecrasherCard::COgreGatecrasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Gatecrasher"), CardType::Creature, CREATURE_TYPE2(Ogre, Rogue), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzoriusPloyCard::CAzoriusPloyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Azorius Ploy"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::PreventAllCombatDamage);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMacabreWaltzCard::CMacabreWaltzCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Macabre Waltz"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);

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
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetDiscardCount(1);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMomirVigSimicVisionaryCard::CMomirVigSimicVisionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Momir Vig, Simic Visionary"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Wizard), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	    cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	    cpAbility->SetToZone(ZoneId::Library);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue creatures")));

		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMomirVigSimicVisionaryCard::BeforeResolution));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CMomirVigSimicVisionaryCard::BeforeResolution(CMomirVigSimicVisionaryCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (pNextDraw->GetCardType().IsCreature())
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Hand);
	}
	else
		m_pTriggeredAbility->SetReorder(FALSE);

	return true;
}

//____________________________________________________________________________
//
CCoilingOracleCard::CCoilingOracleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coiling Oracle"), CardType::Creature, CREATURE_TYPE3(Snake, Elf, Druid), nID,
		BLUE_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCoilingOracleCard::BeforeResolution));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CCoilingOracleCard::BeforeResolution(CCoilingOracleCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (pNextDraw->GetCardType().IsLand())
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Battlefield);
	}
	else
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Hand);
	}

	return true;
}

//____________________________________________________________________________
//
CSproutingPhytohydraCard::CSproutingPhytohydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sprouting Phytohydra"), CardType::Creature, CREATURE_TYPE2(Plant, Hydra), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSproutingPhytohydraCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSproutingPhytohydraCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
CPatagiaViperCard::CPatagiaViperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Patagia Viper"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Snake A"), 2841, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPatagiaViperCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPatagiaViperCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);

	return (nColorCount==0);
}

//____________________________________________________________________________
//
CAzoriusHeraldCard::CAzoriusHeraldCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Azorius Herald"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
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
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAzoriusHeraldCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAzoriusHeraldCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);

	return (nColorCount==0);
}

//____________________________________________________________________________
//
CCryptChampionCard::CCryptChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Champion"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
										CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCryptChampionCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCryptChampionCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Red);

	return (nColorCount==0);
}

//____________________________________________________________________________
//
CPlaxmantaCard::CPlaxmantaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plaxmanta"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
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

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlaxmantaCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPlaxmantaCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return true;
		
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);

	return (nColorCount==0);
}

//____________________________________________________________________________
//
CCytoplastRootkinCard::CCytoplastRootkinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cytoplast Root-Kin"), CardType::Creature, CREATURE_TYPE2(Elemental, Mutant), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 4)
{
	{
		// When Cytoplast Root-Kin enters the battlefield, put a +1/+1 counter on each other creature you control that has a +1/+1 counter on it.
		typedef TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// 2: Move a +1/+1 counter from target creature you control onto Cytoplast Root-Kin.
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(::CreateObject<CActivatedAbility<CTargetSpell>>(
			this,
			_T("2"),
			new AnyCreatureComparer,
			FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)); // can you use the 'move counter' ability if the target has no counter? assuming no here. If yes, remove this line.
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), -1, false, this)); // move one counter to this card

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSimicInitiateCard::CSimicInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simic Initiate"), CardType::Creature, CREATURE_TYPE2(Human, Mutant), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 1)
{
}

//____________________________________________________________________________
//
CVigeanHydroponCard::CVigeanHydroponCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vigean Hydropon"), CardType::Creature, CREATURE_TYPE2(Plant, Mutant), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 5)
{
	GetCreatureKeyword()->AddCantAttack(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CAquastrandSpiderCard::CAquastrandSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aquastrand Spider"), CardType::Creature, CREATURE_TYPE2(Spider, Mutant), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 2)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Reach, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCytospawnShamblerCard::CCytospawnShamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cytospawn Shambler"), CardType::Creature, CREATURE_TYPE2(Elemental, Mutant), nID,
		_T("6") GREEN_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 6)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeliumSquirterCard::CHeliumSquirterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Helium Squirter"), CardType::Creature, CREATURE_TYPE2(Beast, Mutant), nID,
		_T("4") BLUE_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 3)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlaxcasterFroglingCard::CPlaxcasterFroglingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plaxcaster Frogling"), CardType::Creature, CREATURE_TYPE2(Frog, Mutant), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 3)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSporebackTrollCard::CSporebackTrollCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sporeback Troll"), CardType::Creature, CREATURE_TYPE2(Troll, Mutant), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 2)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVigeanGraftmageCard::CVigeanGraftmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vigean Graftmage"), CardType::Creature, CREATURE_TYPE3(Vedalken, Wizard, Mutant), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 2)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			FALSE, TRUE,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));
	ATLASSERT(cpAbility);

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CNovijenHeartOfProgressCard::CNovijenHeartOfProgressCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Novijen, Heart of Progress"), nID, CardType::NonbasicLand)
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CameThisTurnIntoPlayComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each creature that entered the battlefield this turn. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNovijenHeartOfProgressCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNovijenHeartOfProgressCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier modifier(ZoneId::Battlefield, &m_CardFilter, std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		modifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CCytoplastManipulatorCard::CCytoplastManipulatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cytoplast Manipulator"), CardType::Creature, CREATURE_TYPE3(Human, Wizard, Mutant), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))

	, m_GraftKeyword(this, 2)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLUE_MANA_TEXT,
				new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1), FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CGainControlModifier(GetGame(), (CCard*)this));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCytoplastManipulatorCard::BeforeResolution));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
//		typedef
//			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
//									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(), (CCard*)this, true));
		cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(),(CCard*)this, true));

		cpAbility->SetModifyCardOption(CTriggeredModifyCardAbility::ModifyCardOption::ModifyAllPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this));

//		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); 
//		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ControlledByCardComparer((CCard*)this)); 
//		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield); 
//		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); 

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CCytoplastManipulatorCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (this->GetZoneId() == ZoneId::Battlefield);
}
//____________________________________________________________________________
//
CAzoriusFirstWingCard::CAzoriusFirstWingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Azorius First-Wing"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("enchantments")));
}

//____________________________________________________________________________
//
CEnemyOfTheGuildpactCard::CEnemyOfTheGuildpactCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enemy of the Guildpact"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2))
	, m_CardFilter(new CardMulticoloredComparer)
{
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CNovijenSagesCard::CNovijenSagesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Novijen Sages"), CardType::Creature, CREATURE_TYPE3(Human, Advisor, Mutant), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
	, m_GraftKeyword(this, 4)
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 2, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -2, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGhostQuarterCard::CGhostQuarterCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ghost Quarter"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSearchSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSearchSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy,
				MinimumValue(0), MaximumValue(1), CCardFilter::GetFilter(_T("basic lands"))));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrandArbiterAugustinIVCard::CGrandArbiterAugustinIVCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grand Arbiter Augustin IV"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::Blue, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::White, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsExtraManaEnchantment> cpAbility(
			::CreateObject<CConsExtraManaEnchantment>(this,
				new TrueCardComparer,
				_T("1")));

		cpAbility->SetAffectOpponentCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAuroraEidolonCard::CAuroraEidolonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aurora Eidolon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))	
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(3), SourceColor::Null));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAuroraEidolonCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAuroraEidolonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAuroraEidolonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CAuroraEidolonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CEnigmaEidolonCard::CEnigmaEidolonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enigma Eidolon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))	
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				BLUE_MANA_TEXT, 3));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEnigmaEidolonCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEnigmaEidolonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEnigmaEidolonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CEnigmaEidolonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CEntropicEidolonCard::CEntropicEidolonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Entropic Eidolon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))	
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-1), PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		cpAbility->SetReverseLifeDeltaToController();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEntropicEidolonCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEntropicEidolonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEntropicEidolonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CEntropicEidolonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CSandstormEidolonCard::CSandstormEidolonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandstorm Eidolon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))	
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandstormEidolonCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSandstormEidolonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSandstormEidolonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CSandstormEidolonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CVerdantEidolonCard::CVerdantEidolonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Verdant Eidolon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))	
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVerdantEidolonCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVerdantEidolonCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVerdantEidolonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CVerdantEidolonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
//"Ocular Halo\n{3U}\nEnchantment - Aura\nDIS,C\nEnchant creature\rEnchanted creature has "{T}: Draw a card."\r{W}: Enchanted creature gains vigilance until end of turn."
//COcularHaloCard::COcularHaloCard(CGame* pGame, UINT nID)
//	: CChgPwrTghAttrEnchantCard(pGame, _T("Ocular Halo"), nID,
//		_T("3") BLUE_MANA_TEXT,
//		Power(+0), Life(+0), CreatureKeyword::Null)
//{
//	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
//				&COcularHaloCard::CreateAdditionalAbility1));
//	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
//				&COcularHaloCard::CreateAdditionalAbility2));
//
//	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
//	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
//}
//
//counted_ptr<CAbility> COcularHaloCard::CreateAdditionalAbility1(CCard* pCard)
//{
//	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
//		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pCard,
//			_T(""), 1));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//counted_ptr<CAbility> COcularHaloCard::CreateAdditionalAbility2(CCard* pCard)
//{
//	counted_ptr<CPumpAbility> cpAbility(
//		::CreateObject<CPumpAbility>(this,
//			WHITE_MANA_TEXT,
//			Power(+0), Life(+0), CreatureKeyword::Vigilance,
//			(CCreatureCard*)pCard));
//	ATLASSERT(cpAbility);
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CWindreaverCard::CWindreaverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windreaver"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::SwitchedPT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCourtHussarCard::CCourtHussarCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Court Hussar"), CardType::Creature, CREATURE_TYPE2(Vedalken, Knight), nID,
        _T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier3->GetSelection(0).moveType = MoveType::Others;
		pModifier3->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on the bottom of the library
		pModifier3->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCourtHussarCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCourtHussarCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return moveType != MoveType::Cast || GetLastCastingManaCost().GetMana(CManaPool::Color::White) == 0;
}

//____________________________________________________________________________
//
CFlameKinWarScoutCard::CFlameKinWarScoutCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Flame-Kin War Scout"), CardType::Creature, CREATURE_TYPE2(Elemental, Scout), nID,
        _T("3") RED_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlameKinWarScoutCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlameKinWarScoutCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFlameKinWarScoutCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

bool CFlameKinWarScoutCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (pAction->GetOriginatingCard()->GetZoneId() == ZoneId::Battlefield);
}

//____________________________________________________________________________
//
CRakdosIckspitterCard::CRakdosIckspitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakdos Ickspitter"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRakdosIckspitterCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

void CRakdosIckspitterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CLifeModifier modifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(pAbilityAction->GetAssociatedCard()->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CStalkingVengeanceCard::CStalkingVengeanceCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Stalking Vengeance"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))	
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStalkingVengeanceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStalkingVengeanceCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CStalkingVengeanceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CStalkingVengeanceCard::BeforeResolution(CStalkingVengeanceCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nValue = GET_INTEGER(pCreature->GetLastKnownPower());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nValue));
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CWakestoneGargoyleCard::CWakestoneGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wakestone Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T("1") WHITE_MANA_TEXT,
				new CreatureKeywordComparer(CreatureKeyword::Defender, false),
				Power(+0), Life(+0)));

		cpAbility->SetToActivatedAbility();

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWalkingArchiveCard::CWalkingArchiveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walking Archive"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(1), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingArchiveCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWalkingArchiveCard::BeforeResolution));
		cpAbility->SetDrawCount(0);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWalkingArchiveCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	if (nCounterCount<1) return false;	
	return true;
}

bool CWalkingArchiveCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	if (nCounterCount<0) return false;	
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCounterCount;
	pAction->SetTriggerContext(triggerContext);	
	return true;
}

//____________________________________________________________________________
//
CRixMaadiDungeonPalaceCard::CRixMaadiDungeonPalaceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rix Maadi, Dungeon Palace"), nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRixMaadiDungeonPalaceCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
				Life(+0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetAbilityText(_T("Each player discards a card. Activates"));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
}

void CRixMaadiDungeonPalaceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Hand, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CMightOfTheNephilimCard::CMightOfTheNephilimCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Might of the Nephilim"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->SetAbilityText(_T("Target creature gets +2/+2 until end of turn for each of its colors. Casts"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMightOfTheNephilimCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMightOfTheNephilimCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)target;

	CPowerModifier pModifier1 = CPowerModifier(Power(+2), TRUE);
	CLifeModifier pModifier2 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

	if ((target->GetCardType() & CardType::White).Any()) pModifier1.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::White).Any()) pModifier2.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Blue).Any()) pModifier1.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Blue).Any()) pModifier2.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Black).Any()) pModifier1.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Black).Any()) pModifier2.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Red).Any()) pModifier1.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Red).Any()) pModifier2.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Green).Any()) pModifier1.ApplyTo(pCreature);
	if ((target->GetCardType() & CardType::Green).Any()) pModifier2.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CDeliriumSkeinsCard::CDeliriumSkeinsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Delirium Skeins"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDeliriumSkeinsCard::OnResolutionCompleted))
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->SetAbilityText(_T("Each player discards three card. Casts"));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
	
	AddSpell(cpSpell.GetPointer());
}

void CDeliriumSkeinsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* pOppHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);

	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Hand, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
	
	if (pHand->GetSize() > 3) pModifier.ApplyTo(GetController());
	else pModifier1.ApplyTo(GetController());

	if (pOppHand->GetSize() > 3) pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	else pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CStompAndHowlCard::CStompAndHowlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stomp and Howl"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
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
CSimicBasiliskCard::CSimicBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simic Basilisk"), CardType::Creature, CREATURE_TYPE2(Basilisk, Mutant), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_GraftKeyword(this, 3)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSimicBasiliskCard::CreateAdditionalAbility));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSimicBasiliskCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSimicBasiliskCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSimicBasiliskCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CVoidslimeCard::CVoidslimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Voidslime"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterAbilitySpell> cpSpell(
			::CreateObject<CCounterAbilitySpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, new TrueCardComparer));	

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CAzoriusGuildmageCard::CAzoriusGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azorius Guildmage"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterAbilitySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterAbilitySpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")), TRUE, FALSE));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStreetSavvyCard::CStreetSavvyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Street Savvy"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+2),
		CreatureKeyword::LandwalkReach)
{
}

//____________________________________________________________________________
//
CGuardianOfTheGuildpactCard::CGuardianOfTheGuildpactCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian of the Guildpact"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards)) 
{
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CProclamationOfRebirthCard::CProclamationOfRebirthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Proclamation of Rebirth"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
		, m_CardFilter(_T("Proclamation of Rebirth"), _T("Proclamations of Rebirth"), new SpecificCardComparer(this))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 3);

	{//Forecast
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("5") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
		cpAbility->GetTargeting()->SetSubjectCount(0, 3);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CGovernTheGuildlessCard::CGovernTheGuildlessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Govern the Guildless"), CardType::Sorcery, nID)
	, m_CardFilter(_T("Govern the Guildless"), _T("Govern the Guildsless"), new SpecificCardComparer(this))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("5") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards)); //target monocolored

		AddSpell(cpSpell.GetPointer());
	}
	{//Forecast
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, TRUE, _T("white and blue creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, TRUE, _T("white and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, TRUE, _T("white and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, TRUE, _T("white and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, TRUE, _T("white, blue and black creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, TRUE, _T("white, blue, black and red creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, black and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, blue, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("white, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, TRUE, _T("blue, black, red and green creature"));
		cpAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, TRUE, _T("all colors creature"));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPlumesOfPeaceCard::CPlumesOfPeaceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Plumes of Peace"), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT ,
		Power(+0), Life(+0))
	, m_CardFilter(_T("Plumes of Peace"), _T("Plumes of Peaces"), new SpecificCardComparer(this))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	{//Forecast
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT BLUE_MANA_TEXT ,
			TRUE,
			FALSE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CPrideOfTheCloudsCard::CPrideOfTheCloudsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pride of the Clouds"), CardType::Creature, CREATURE_TYPE2(Cat, Elemental), nID,
		_T("") WHITE_MANA_TEXT BLUE_MANA_TEXT , Power(1), Life(1))
		, m_CardFilter(_T("Pride of the Clouds"), _T("Prides of the Clouds"), new SpecificCardComparer(this))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new NegateCardComparer(new SpecificCardComparer(this))));

		cpAbility->GetSurveyCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{//Forecast
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Bird F"), 2947,
			1));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CSkyscribingCard::CSkyscribingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skyscribing"), CardType::Sorcery, nID)
	, m_CardFilter(_T("Skyscribing"), _T("Skyscribings"), new SpecificCardComparer(this))
{
	{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery, BLUE_MANA_TEXT BLUE_MANA_TEXT, 0, 0));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(1, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{//Forecast
		counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this
				, _T("2")BLUE_MANA_TEXT, 1, 1));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
				FALSE,	// opponent's turn only
				TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CSteelingStanceCard::CSteelingStanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Steeling Stance"), CardType::Instant, nID)
	, m_CardFilter(_T("Steeling Stance"), _T("Steeling Stances"), new SpecificCardComparer(this))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{//Forecast
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("") WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		ATLASSERT(cpAbility);

			cpAbility->SetMaxTurnUsageCount(1);
			cpAbility->SetHandOnly();
			cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
					FALSE,	// opponent's turn only
					TRUE);	// your turn only

			cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CSkyHussarCard::CSkyHussarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sky Hussar"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT , Power(4), Life(3))
	, m_CardFilter1(_T("Sky Hussar"), _T("Sky Hussars"), new SpecificCardComparer(this))
	, m_CardFilter2(_T("a white or blue creature"), _T("white or blue creatures"), new AnyCreatureComparer)
{
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::White | CardType::Blue, false));

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{//Forecast
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter2);

		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetHandOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);	// your turn only

		cpAbility->GetCost().AddRevealCardCost(1, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDovescapeCard::CDovescapeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dovescape"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Enchantment,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDovescapeCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDovescapeCard::BeforeResolveSelection));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));
		cpAbility->AddAbilityTag(AbilityTag::Counterspell);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDovescapeCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}


bool CDovescapeCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	int nCMC = triggerContext.m_pCard->GetConvertedManaCost();

	CTokenCreationModifier modifier = CTokenCreationModifier(GetGame(), _T("Bird F"), 2947, nCMC);
	modifier.ApplyTo(triggerContext.m_pCard->GetController());

	return true;
}

//____________________________________________________________________________
//
CPainMagnificationCard::CPainMagnificationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pain Magnification"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::PlayerEventCallback, 
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPainMagnificationCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CPainMagnificationCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage damage) const
{
	return (damage.m_nLifeDelta < -2);
}

//____________________________________________________________________________
//
CCacklingFlamesCard::CCacklingFlamesCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Cackling Flames"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCacklingFlamesCard::BeforeResolution));
}

bool CCacklingFlamesCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0)
		return true;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -5;

	if (pAction->GetAssociatedPlayer())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	
	if (pAction->GetAssociatedCard())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CEvolutionVatCard::CEvolutionVatCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Evolution Vat"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericTargetCreatureSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericTargetCreatureSpell>>(this,
			_T("3"), new AnyCreatureComparer()));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CEvolutionVatCard::CreateAdditionalAbility));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::CleanupStep2,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CEvolutionVatCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pCard,
			_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT)); // FIX COST

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEvolutionVatCard::BeforeResolution));
	cpAbility->SetAbilityText(_T("Double the number of +1/+1 counters on"));
		
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CEvolutionVatCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = pAction->GetOriginatingCard(); //???

	int nCounterCount = pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	CCardCounterModifier modifier(_T("+1/+1"), nCounterCount);
	modifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CJaggedPoppetCard::CJaggedPoppetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jagged Poppet"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJaggedPoppetCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJaggedPoppetCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CJaggedPoppetCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJaggedPoppetCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_nDiscardCount = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

bool CJaggedPoppetCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	if (GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0)
	return false;

	triggerContext.m_nDiscardCount = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

bool CJaggedPoppetCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() == 0);
}

//____________________________________________________________________________
//
CLyzoldaTheBloodWitchCard::CLyzoldaTheBloodWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lyzolda, the Blood Witch"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CLyzoldaTheBloodWitchCard::OnResolutionCompleted))
{
	{
		m_CardFilter1.AddComparer(new AnyCreatureComparer);
		m_CardFilter1.AddNegateComparer(new CardTypeComparer(CardType::Red, false));
		m_CardFilter1.AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		m_CardFilter1.SetFilterName(_T("a nonblack nonred creature"), _T("nonblack nonred creatures"));

		counted_ptr<CActivatedAbility<CGenericTargetPlayerCreatureSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericTargetPlayerCreatureSpell>>(this,
				_T("2"), new AnyCreatureComparer));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Red | CardType::Creature, true));
		m_CardFilter2.AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		m_CardFilter2.SetFilterName(_T("a nonblack red creature"), _T("nonblack red creatures"));

		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
	
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter3.AddComparer(new CardTypeComparer(CardType::Black | CardType::Creature, true));
		m_CardFilter3.AddNegateComparer(new CardTypeComparer(CardType::Red, false));
		m_CardFilter3.SetFilterName(_T("a black nonred creature"), _T("black nonred creatures"));


		counted_ptr<CActivatedAbility<CGenericTargetPlayerCreatureSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericTargetPlayerCreatureSpell>>(this,
				_T("2"), new AnyCreatureComparer));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter3);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter4.AddComparer(new CardTypeComparer(CardType::Red | CardType::Black | CardType::Creature, true));
		m_CardFilter4.SetFilterName(_T("a black and red creature"), _T("black and red creatures"));

		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
	
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter4);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CLyzoldaTheBloodWitchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CDrawCardModifier modifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CRakdosTheDefilerCard::CRakdosTheDefilerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rakdos the Defiler"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback,
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CRakdosTheDefilerCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier2);

		cpAbility->SetSkipStack(TRUE);
		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CRakdosTheDefilerCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
			pModifier3->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier3);

		cpAbility->SetSkipStack(TRUE);
		m_pTriggeredAbility2 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility2);
	}
}

bool CRakdosTheDefilerCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (toCardKeyword != CardKeyword::Flash) return false;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	CCardFilter m_CardFilter_temp1;
	m_CardFilter_temp1.AddComparer(new TrueCardComparer);
	m_CardFilter_temp1.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
	
	int n = (m_CardFilter_temp1.CountIncluded(pInplay->GetCardContainer()) + 1) / 2;

	m_pTriggeredAbility1->GetGatherer().SetSubjectCount(n, n, TRUE);

	return true;
}

bool CRakdosTheDefilerCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (toCardKeyword != CardKeyword::CantBeCountered) return false;

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	
	CCardFilter m_CardFilter_temp2;
	m_CardFilter_temp2.AddComparer(new TrueCardComparer);
	m_CardFilter_temp2.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	int o = (m_CardFilter_temp2.CountIncluded(pOppInplay->GetCardContainer()) + 1) / 2;

	m_pTriggeredAbility2->GetGatherer().SetSubjectCount(o, o, TRUE);

	return true;
}

//____________________________________________________________________________
//
CAnthemOfRakdosCard::CAnthemOfRakdosCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Anthem of Rakdos"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				_T("2") BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				PlayerEffectType::MultiplyDamage, 1));

		cpEnchantment->SetConditionWork();
		cpEnchantment->SetConditionCheckZone(ZoneId::Hand);
		cpEnchantment->SetConditionValue(0);
		cpEnchantment->SetConditionIsMaximum();
		cpEnchantment->SetMultipleEffectType(TRUE);

		cpEnchantment->SetAffectControllerOnly();

		AddSpell(cpEnchantment.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnthemOfRakdosCard::SetTriggerContext));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnthemOfRakdosCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CCrimePunishmentCard::CCrimePunishmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crime // Punishment"), CardType::Sorcery, nID)
{
	{
		//Crime
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false), 
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Crime. Casts"));
		cpSpell->SetAbilityName(_T("Crime"));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Punishment
		counted_ptr<CPunishmentSpell> cpSpell(
			::CreateObject<CPunishmentSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				 CCardFilter::GetFilter(_T("artifacts, creatures or enchantments"))));	

		cpSpell->SetAbilityText(_T("Punishment. Casts"));
		cpSpell->SetAbilityName(_T("Punishment"));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetExtraActionValueVector();		

		AddSpell(cpSpell.GetPointer());
 	}
}

//____________________________________________________________________________
//
CFertileImaginationCard::CFertileImaginationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fertile Imagination"), CardType::Sorcery, nID)
	, m_TypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CFertileImaginationCard::OnTypeSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFertileImaginationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFertileImaginationCard::BeforeResolution(CAbilityAction* pAction)
{
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("artifact"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("creature"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("enchantment"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("instant"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("land"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 6;
		selectionEntry.strText.Format(_T("planeswalker"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 7;
		selectionEntry.strText.Format(_T("sorcery"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 8;
		selectionEntry.strText.Format(_T("tribal"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 9;
		selectionEntry.strText.Format(_T("another type"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	m_TypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(),(DWORD)pAction->GetAssociatedPlayer());

	return true;
}

void CFertileImaginationCard::OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("artifacts"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("instant cards"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 6)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("planeswalkers"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 7)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("sorcery cards"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 8)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("tribal cards"))->CountIncluded(pHand->GetCardContainer());

				CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Saproling B"), 2712, 2*nCount);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 9)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CUnlivingPsychopathCard::CUnlivingPsychopathCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Unliving Psychopath"), CardType::Creature, CREATURE_TYPE2(Zombie, Assassin), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(4),
		BLACK_MANA_TEXT, Power(+1), Life(-1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLACK_MANA_TEXT,
			new TrueCardComparer, false, new CUnlivingPsychopathTargeting));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnlivingPsychopathCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

BOOL CUnlivingPsychopathCard::CUnlivingPsychopathTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CUnlivingPsychopathCard::CUnlivingPsychopathTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (!pCard->GetCardType().IsCreature()) return FALSE;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (pCreature->GetLastKnownPower() >= ((CCreatureCard*)GetSourceCard())->GetLastKnownPower()) return FALSE;
	
	return TRUE;
}

bool CUnlivingPsychopathCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(this);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CHellholeRatsCard::CHellholeRatsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Hellhole Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHellholeRatsCard::OnCardSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHellholeRatsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CHellholeRatsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	
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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}
	return true;
}

void CHellholeRatsCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nCMC = pCard->GetConvertedManaCost();

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
			CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

			pModifier1.ApplyTo(pCard);
			pModifier2.ApplyTo(pSelectionPlayer);
				
			return;
		}
}

//____________________________________________________________________________
//
CHitRunCard::CHitRunCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hit // Run"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHitRunCard::OnCardSelected))
{
	{
		//Hit
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHitRunCard::BeforeResolution1));
		cpSpell->SetAbilityText(_T("Hit. Casts"));
		cpSpell->SetAbilityName(_T("Hit"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Run
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT GREEN_MANA_TEXT));	

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHitRunCard::BeforeResolution2));
		cpSpell->SetAbilityText(_T("Run. Casts"));
		cpSpell->SetAbilityName(_T("Run"));

		AddSpell(cpSpell.GetPointer());
 	}
}

bool CHitRunCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	
	if (pBattlefield->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsArtifact() || pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}
	return true;
}

void CHitRunCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nCMC = pCard->GetConvertedManaCost();

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
			CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

			pModifier1.ApplyTo(pCard);
			pModifier2.ApplyTo(pSelectionPlayer);
				
			return;
		}
}

bool CHitRunCard::BeforeResolution2(CAbilityAction* pAction)
{
	int nAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nAttackingCreatures += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	if (nAttackingCreatures >= 2)
	{
		CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(nAttackingCreatures - 1))));

		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CNettlingCurseCard::CNettlingCurseCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Nettling Curse"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Null)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNettlingCurseCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNettlingCurseCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNettlingCurseCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNettlingCurseCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature) const
{
	if (this->GetEnchantedOn() != pCreature) return false;
	
	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CNettlingCurseCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCreatureCard* pCreature = triggerContext.m_pCreature;

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pCreature->GetController());

	return false;
}

bool CNettlingCurseCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::MustAttack, TRUE)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CRiseFallCard::CRiseFallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rise // Fall"), CardType::Sorcery, nID)
{
	{
		//Rise
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));

		cpSpell->GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiseFallCard::BeforeResolution1));
		cpSpell->SetAbilityText(_T("Rise. Casts"));
		cpSpell->SetAbilityName(_T("Rise"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Fall
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true));	

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiseFallCard::BeforeResolution2));
		cpSpell->SetAbilityText(_T("Fall. Casts"));
		cpSpell->SetAbilityName(_T("Fall"));

		AddSpell(cpSpell.GetPointer());
 	}
}

bool CRiseFallCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pController);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pController);

	pModifier1.ApplyTo(pTarget1);
	pModifier2.ApplyTo(pTarget2);

	return true;
}

bool CRiseFallCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	int nHandSize = pHand->GetSize();
	
	if (nHandSize > 0)
	{
		CCountedCardContainer copyHand;
		copyHand.RemoveAll();

		for (int i = 0; i < nHandSize; ++i)
			copyHand.AddCard(pHand->GetAt(i), CardPlacement::Top);

		copyHand.Shuffle(pTarget);

		CCountedCardContainer pChoice;
		CCard* pChoice1 = copyHand.GetAt(0);
		pChoice.RemoveAll();
		pChoice.AddCard(pChoice1, CardPlacement::Top);

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pChoice1->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pChoice1);
			}
		}

		if (nHandSize > 1)
		{
			CCard* pChoice2 = copyHand.GetAt(1);
			pChoice.AddCard(pChoice2, CardPlacement::Top);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pChoice2->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pChoice2);
				}
			}
		}

		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new ContainedinComparer(&pChoice));
		m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Hand, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
		pModifier.ApplyTo(pTarget);
	}
	return true;
}

//____________________________________________________________________________
//
CBrainPryCard::CBrainPryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brain Pry"), CardType::Sorcery, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBrainPryCard::OnNameSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrainPryCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBrainPryCard::BeforeResolution(CAbilityAction* pAction)
{
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
			if (!pCard->GetCardType().IsToken() && !pCard->GetCardType().IsLand())
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	return true;
}

void CBrainPryCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		
				pModifier1.ApplyTo(pTarget);
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;
				CPlayer* pTarget = (CPlayer*)dwContext1;

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
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

				if (m_CardFilter.CountIncluded(pTarget->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
				{
					CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::PrimaryPlayer, // reveal to
						&m_CardFilter, // any cards
						ZoneId::Graveyard, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on top
						MoveType::Discard, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
					pModifier.ApplyTo(pTarget);
				}
				else
				{
					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		
					pModifier1.ApplyTo(pTarget);
					pModifier2.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CInfernalTutorCard::CInfernalTutorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Infernal Tutor"), CardType::Sorcery, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CInfernalTutorCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInfernalTutorCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CInfernalTutorCard::BeforeResolution(CAbilityAction* pAction)
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
	else
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(1), MaximumValue(1), pController, ZoneId::Library, NULL, ZoneId::Hand, FALSE, CardPlacement::Top, FALSE, FALSE);
		pModifier.ApplyTo(pController);
	}
	return true;
}

void CInfernalTutorCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

			CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
				MinimumValue(0), MaximumValue(1),
				pSelectionPlayer, ZoneId::Library,
				&m_CardFilter);
			pModifier.ApplyTo(pSelectionPlayer);
				
			return;
		}
}

//____________________________________________________________________________
//
CIsperiaTheInscrutableCard::CIsperiaTheInscrutableCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Isperia the Inscrutable"), CardType::_LegendaryCreature, CREATURE_TYPE(Sphinx), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(6))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIsperiaTheInscrutableCard::OnNameSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIsperiaTheInscrutableCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIsperiaTheInscrutableCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pPlayer);
	return true;
}

void CIsperiaTheInscrutableCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		
				pModifier.ApplyTo(pPlayer);
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;
				CPlayer* pTarget = (CPlayer*)dwContext1;

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
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		
				pModifier.ApplyTo(pPlayer);

				CCardFilter m_CardFilter1;
				m_CardFilter1.SetComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

				if (m_CardFilter1.CountIncluded(pTarget->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
				{
					CCardFilter m_CardFilter2;
					m_CardFilter2.SetFilterName(_T("creature with flying"), _T("creatures with flying"));
					m_CardFilter2.SetComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

					CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
						MinimumValue(0), MaximumValue(1),
						pSelectionPlayer, ZoneId::Library,
						&m_CardFilter2);
					pModifier.ApplyTo(pSelectionPlayer);
				}
				return;
			}
		}
}

//____________________________________________________________________________
//
CSwiftSilenceCard::CSwiftSilenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swift Silence"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSwiftSilenceCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));
		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSwiftSilenceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CStack& stack = m_pGame->GetStack();
	
	CCountedCardContainer cards;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (pStackAction->IsSpell() && (pStackAction->GetOriginatingCard() != this)
			&& stack.CanCounterSpell(pAbilityAction->GetController(), pStackAction->GetAbility()->GetCard(), TRUE, ZoneId::Graveyard, CardPlacement::Top))
		{
			cards.AddCard(pStackAction->GetAbility()->GetCard(), CardPlacement::Top);
		}
	}

	int nCards = cards.GetSize();

	for (int k = 0; k < nCards; ++k)
	{
		stack.CounterSpell(pAbilityAction->GetController(),cards.GetAt(k), TRUE, ZoneId::Graveyard, CardPlacement::Top);
	}

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nCards), MaximumValue(nCards));
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//

CVigeanIntuitionCard::CVigeanIntuitionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vigean Intuition"), CardType::Instant, nID)
	, m_TypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CVigeanIntuitionCard::OnTypeSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVigeanIntuitionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CVigeanIntuitionCard::BeforeResolution(CAbilityAction* pAction)
{
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("artifact"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("creature"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("enchantment"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("instant"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("land"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 6;
		selectionEntry.strText.Format(_T("planeswalker"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 7;
		selectionEntry.strText.Format(_T("sorcery"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 8;
		selectionEntry.strText.Format(_T("tribal"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 9;
		selectionEntry.strText.Format(_T("another type"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	m_TypeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(),(DWORD)pAction->GetAssociatedPlayer());

	return true;
}

void CVigeanIntuitionCard::OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Artifact, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new AnyCreatureComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}

			if ((int)it->dwContext == 3)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Enchantment, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}

			if ((int)it->dwContext == 4)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Instant, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}

			if ((int)it->dwContext == 5)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			if ((int)it->dwContext == 6)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Planeswalker, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			if ((int)it->dwContext == 7)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Sorcery, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			if ((int)it->dwContext == 8)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::Tribal, false));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			if ((int)it->dwContext == 9)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
	
}

//____________________________________________________________________________
//
CTrialErrorCard::CTrialErrorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Trial // Error"), CardType::Instant, nID)
{
	{
		//Trial
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				WHITE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTrialErrorCard::BeforeResolution));
		
		cpSpell->SetAbilityText(_T("Trial. Casts"));
		cpSpell->SetAbilityName(_T("Trial"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Error
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new CardMulticoloredComparer));

		cpSpell->SetAbilityText(_T("Error. Casts"));
		cpSpell->SetAbilityName(_T("Error"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CTrialErrorCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AttackingBlockingThisCreatureComparer(pTarget));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CResearchDevelopmentCard::CResearchDevelopmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Research // Development"), CardType::Instant, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CResearchDevelopmentCard::OnPunisherSelected))
	, nIteration(0)
	, bSomeonePaid(0)
{
	{
		//Research
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant, 
				GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CResearchDevelopmentCard::BeforeResolution1));
		cpSpell->SetAbilityText(_T("Research. Casts"));
		cpSpell->SetAbilityName(_T("Research"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Development
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT RED_MANA_TEXT));	

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CResearchDevelopmentCard::BeforeResolution2));

		cpSpell->SetAbilityText(_T("Development. Casts"));
		cpSpell->SetAbilityName(_T("Development"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CResearchDevelopmentCard::BeforeResolution1(CAbilityAction* pAction)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(0), MaximumValue(4), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(pAction->GetController());
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

bool CResearchDevelopmentCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	bSomeonePaid = 0;
	nIteration = 1;

	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	}
	while (GetGame()->GetPlayer(pActivePlayerID) == pController)
		pActivePlayerID = (pActivePlayerID + 1) % GetGame()->GetPlayerCount();

	PunisherFunction(pActivePlayerID, pController);

	return true;
}

void CResearchDevelopmentCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't have %s draw a card"), pController->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Have %s draw a card"), pController->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
}

void CResearchDevelopmentCard::Advance(int PlayerID, CPlayer* pController)
{
	int NextPlayer = (PlayerID + 1) % GetGame()->GetPlayerCount();

	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	while (GetGame()->GetPlayer(NextPlayer) == pController && GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		NextPlayer = (NextPlayer + 1) % GetGame()->GetPlayerCount();
	
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer && (bSomeonePaid == 0))
		PunisherFunction(NextPlayer, pController);
	else
	{
		if (bSomeonePaid == 0)
		{
			CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental H"), 2985, 1);
			pModifier.ApplyTo(pController);
		}
		else
		{
			CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
			pModifier.ApplyTo(pController);
		}

		if (nIteration < 3)
		{
			bSomeonePaid = 0;

			nIteration++;

			CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
			int pActivePlayerID;
			for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			{
				if (pActivePlayer == GetGame()->GetPlayer(ip))
				{
					pActivePlayerID = ip;
					break;
				}
			}
			while (GetGame()->GetPlayer(pActivePlayerID) == pController)
				pActivePlayerID = (pActivePlayerID + 1) % GetGame()->GetPlayerCount();

			PunisherFunction(pActivePlayerID, pController);
		}
	}
}

void CResearchDevelopmentCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't have %s draw a card"), pSelectionPlayer->GetPlayerName(), ((CPlayer*)dwContext2)->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s has %s draw a card"), pSelectionPlayer->GetPlayerName(), ((CPlayer*)dwContext2)->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				bSomeonePaid = 1;				
				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}

//____________________________________________________________________________
//
CHideSeekCard::CHideSeekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hide // Seek"), CardType::Instant, nID)
{
	{
		//Hide
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				RED_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false), false));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHideSeekCard::BeforeResolution1));
		
		cpSpell->SetAbilityText(_T("Hide. Casts"));
		cpSpell->SetAbilityName(_T("Hide"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Seek
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHideSeekCard::BeforeResolution2));

		cpSpell->SetAbilityText(_T("Seek. Casts"));
		cpSpell->SetAbilityName(_T("Seek"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CHideSeekCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	pTarget->Move(pTarget->GetOwner()->GetZoneById(ZoneId::Library), pAction->GetController(), MoveType::Others, CardPlacement::Bottom);

	return true;
}

bool CHideSeekCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CCountedCardContainer SelectedCards;
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pTarget,
		MinimumValue(1), MaximumValue(1),
		pController, ZoneId::Library,
		CCardFilter::GetFilter(_T("cards")), 
		ZoneId::Exile, TRUE, CardPlacement::Top,
		FALSE, FALSE, FALSE,
		&SelectedCards, FALSE);
	pModifier1.ApplyTo(pController);

	if (SelectedCards.GetSize() > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(+SelectedCards.GetAt(0)->GetConvertedManaCost()), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}

	pTarget->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CBoundDeterminedCard::CBoundDeterminedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bound // Determined"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBoundDeterminedCard::OnCardSelected))
{
	{
		//Bound
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant, 
				_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoundDeterminedCard::BeforeResolution1));
		
		cpSpell->SetAbilityText(_T("Bound. Casts"));
		cpSpell->SetAbilityName(_T("Bound"));
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Determined
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant, 
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				1));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoundDeterminedCard::BeforeResolution2));

		cpSpell->SetAbilityText(_T("Determined. Casts"));
		cpSpell->SetAbilityName(_T("Determined"));
		AddSpell(cpSpell.GetPointer());
 	}
}

bool CBoundDeterminedCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer());

	if (nCreatures > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			SelectionEntry entry;

			if (pCard->GetCardType().IsCreature())
			{
				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
				
				int nColors = 0;

				if (pCard->IsColor(CManaPoolBase::Color::White)) nColors++;
				if (pCard->IsColor(CManaPoolBase::Color::Blue)) nColors++;
				if (pCard->IsColor(CManaPoolBase::Color::Black)) nColors++;
				if (pCard->IsColor(CManaPoolBase::Color::Red)) nColors++;
				if (pCard->IsColor(CManaPoolBase::Color::Green)) nColors++;

				entry.strText.Format(_T("Sacrifice %s (%d colors)"),
					pCard->GetCardName(TRUE), nColors);

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CBoundDeterminedCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

			int nColors = 0;

			if (pCard->IsColor(CManaPoolBase::Color::White)) nColors++;
			if (pCard->IsColor(CManaPoolBase::Color::Blue)) nColors++;
			if (pCard->IsColor(CManaPoolBase::Color::Black)) nColors++;
			if (pCard->IsColor(CManaPoolBase::Color::Red)) nColors++;
			if (pCard->IsColor(CManaPoolBase::Color::Green)) nColors++;

			pModifier1.ApplyTo(pCard);
				
			if (nColors > 0)
			{
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All,
					CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.AddSelection(MinimumValue(0), MaximumValue(nColors), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					CCardFilter::GetFilter(_T("cards")), // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier2.ApplyTo(pSelectionPlayer);
			}

			return;
		}
}

bool CBoundDeterminedCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::SpellsCantBeCountered, reinterpret_cast<int>(CCardFilter::GetFilter(_T("cards"))));	
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pController);
	pModifier2->ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CAEthermagesTouchCard::CAEthermagesTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("AEthermage's Touch"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAEthermagesTouchCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAEthermagesTouchCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAEthermagesTouchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int n = pLibrary->GetSize();
	if (n > 4) n = 4;

	if (n == 0) return true;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pController);

	CCountedCardContainer pCreatures;
	for (int i = 1; i <= n; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);
		if (pCard->GetCardType().IsCreature())
			pCreatures.AddCard(pCard, CardPlacement::Top);
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't select anything"));

		entries.push_back(selectionEntry);
	}
	if (pCreatures.GetSize() > 0)
	{
		for (int i = 0; i < pCreatures.GetSize(); ++i)
		{
			CCard* pCard = pCreatures.GetAt(i);
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Select %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, n);

	return true;
}

void CAEthermagesTouchCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't select anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, dwContext1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
				pModifier.ApplyTo(pSelectionPlayer);

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
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CAEthermagesTouchCard::CreateAbility));
				
				pModifier1.ApplyTo(pCard);
				pModifier2.ApplyTo(pCard);
				
				if (dwContext1 > 1)
				{
					CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Library, dwContext1 - 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier3.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
					pModifier3.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

counted_ptr<CAbility> CAEthermagesTouchCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	cpAbility->SetAbilityName(_T("Return ability from AEthermage's Touch"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiotSpikesCard::CRiotSpikesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Riot Spikes"), nID,
		BLACK_MANA_TEXT,
		Power(+2), Life(-1))
{
	//hybrid mana cost
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Enchantment,
			RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTwinstrikeCard::CTwinstrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twinstrike"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTwinstrikeCard::BeforeResolution));

	m_cSpell = cpSpell.GetPointer();
	AddSpell(m_cSpell);
}

bool CTwinstrikeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetActionCommon* pTargetAction = dynamic_cast<CTargetActionCommon*>(pAction);

	CCountedCardContainer pTargets;
	pTargetAction->GetTargetGroup().GetCardSubjects(pTargets);

	BOOL bTrick;
	CCountedCardContainer cards;
	pTargetAction->GetTargetGroup().GetCardSubjects(cards);

	// Remove invalid targets
	for (int ic = cards.GetSize() - 1; ic >= 0; --ic)
		if (!m_cSpell->GetTargeting()->TargetAllowed(cards.GetAt(ic), true, bTrick))
			cards.RemoveAt(ic);

	if (!cards.GetSize()) return false;

	if (pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() == 0)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
		for (int i = 0; i < cards.GetSize(); ++i)
			pModifier1.ApplyTo(cards.GetAt(i));
	}
	else
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		for (int i = 0; i < cards.GetSize(); ++i)
			pModifier2.ApplyTo((CCreatureCard*)cards.GetAt(i));
	}

	return true;
}

//____________________________________________________________________________
//
CIgnorantBlissCard::CIgnorantBlissCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ignorant Bliss"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIgnorantBlissCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CIgnorantBlissCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CCountedCardContainer pSubjects;
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, true, MoveType::Others, pController);

	for (int i = pHand->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pHand->GetAt(i);
		pModifier1.ApplyTo(pCard);

		if (pCard->GetZoneId() == ZoneId::_ExileFaceDown)
			pSubjects.AddCard(pCard, CardPlacement::Top);
	}

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("Ignorant Bliss Effect"), 61071, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CUtopiaSprawlCard::CUtopiaSprawlCard(CGame* pGame, UINT nID)
       : CCard(pGame, _T("Utopia Sprawl"), CardType::EnchantLand, nID)
       , m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CUtopiaSprawlCard::OnSelectionDone))
	   , nColor(0)
{

       counted_ptr<CAbilityEnchant> cpSpell(
               ::CreateObject<CAbilityEnchant>(this,
               GREEN_MANA_TEXT,
               new CardTypeComparer(CardType::Forest, false),
               CAbilityEnchant::CreateAbilityCallback(this, &CUtopiaSprawlCard::CreateEnchantAbility),
               CAbilityEnchant::AdditionType::ToEnchantCard));

       cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

       AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CUtopiaSprawlCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{

       counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

       cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
       cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

       cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUtopiaSprawlCard::SetTriggerContext));

       cpAbility->SetSkipStack(TRUE);

       m_pTriggeredAbility = cpAbility.GetPointer();

       return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CUtopiaSprawlCard::Move(CZone* pToZone,
       const CPlayer* pByPlayer,
       MoveType moveType,
       CardPlacement cardPlacement, BOOL can_dredge)
{     
       bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

       if      (!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
       {
               static const CManaPool::Color::Enum cardColors[] =
               {
                       CManaPool::Color::White,
                       CManaPool::Color::Blue,
                       CManaPool::Color::Black,
                       CManaPool::Color::Red,
                       CManaPool::Color::Green
               };
               std::vector<SelectionEntry> entries;

               for (int i = 0; i < ARRAY_SIZE(cardColors); ++i)
               {
                       SelectionEntry entry;
                       entry.dwContext = i;
                       entry.strText.Format(_T("Choose %s for %s"), CManaPool::Color::ToDrawString(cardColors[i]), GetCardName());
                       entries.push_back(entry);
               }

               m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController()); 
       }
       __super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CUtopiaSprawlCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{     
       ATLASSERT(nSelectedCount == 1);

       for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
               if (it->bSelected)
               {
                       nColor = it->dwContext + 1;
               }
}

bool CUtopiaSprawlCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
       const CManaProductionAbilityAction* pManaAction) const
{
       //Just in case
       m_pTriggeredAbility->SetProduceWhite(FALSE);
       m_pTriggeredAbility->SetProduceBlue(FALSE);
       m_pTriggeredAbility->SetProduceBlack(FALSE);
       m_pTriggeredAbility->SetProduceRed(FALSE);
       m_pTriggeredAbility->SetProduceGreen(FALSE);

       switch (nColor)
       {
       case 1:
               m_pTriggeredAbility->SetProduceWhite(TRUE);
               break;
       case 2:
               m_pTriggeredAbility->SetProduceBlue(TRUE);
               break;
       case 3:
               m_pTriggeredAbility->SetProduceBlack(TRUE);
               break;
       case 4:
               m_pTriggeredAbility->SetProduceRed(TRUE);
               break;
       case 5:
               m_pTriggeredAbility->SetProduceGreen(TRUE);
               break;
       default:
               return false;
       }
       return true;
}
//____________________________________________________________________________
//
