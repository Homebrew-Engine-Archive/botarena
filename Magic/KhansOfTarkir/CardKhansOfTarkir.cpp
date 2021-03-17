#include "stdafx.h"
#include "CardKhansOfTarkir.h"

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
		DEFINE_CARD(CAbzanAscendancyCard);
		DEFINE_CARD(CAbzanBannerCard);
		DEFINE_CARD(CAbzanBattlePriestCard);
		DEFINE_CARD(CAbzanCharmCard);
		DEFINE_CARD(CAbzanFalconerCard);
		DEFINE_CARD(CAbzanGuideCard);
		DEFINE_CARD(CAinokBondKinCard);
		DEFINE_CARD(CAinokTrackerCard);
		DEFINE_CARD(CAlabasterKirinCard);
		DEFINE_CARD(CAlpineGrizzlyCard);
		DEFINE_CARD(CAnkleShankerCard);
		DEFINE_CARD(CArchersParapetCard);
		DEFINE_CARD(CArrowStormCard);
		DEFINE_CARD(CAwakenTheBearCard);
		DEFINE_CARD(CBearsCompanionCard);
		DEFINE_CARD(CBecomeImmenseCard);
		DEFINE_CARD(CBellowingSaddlebruteCard);
		DEFINE_CARD(CBitterRevelationCard);
		DEFINE_CARD(CBlindingSprayCard);
		DEFINE_CARD(CBloodfellCavesCard);
		DEFINE_CARD(CBloodfireExpertCard);
		DEFINE_CARD(CBloodfireMentorCard);
		DEFINE_CARD(CBloodsoakedChampionCard);
		DEFINE_CARD(CBlossomingSandsCard);
		DEFINE_CARD(CBraveTheSandsCard);
		DEFINE_CARD(CButcherOfTheHordeCard);
		DEFINE_CARD(CCanyonLurkersCard);
		DEFINE_CARD(CChiefOfTheEdgeCard);
		DEFINE_CARD(CChiefOfTheScaleCard);
		DEFINE_CARD(CDazzlingRampartsCard);
		DEFINE_CARD(CDebilitatingInjuryCard);
		DEFINE_CARD(CDefiantStrikeCard);
		DEFINE_CARD(CDigThroughTimeCard);
		DEFINE_CARD(CDisdainfulStrokeCard);
		DEFINE_CARD(CDismalBackwaterCard);
		DEFINE_CARD(CDisownedAncestorCard);
		DEFINE_CARD(CDragonscaleBoonCard);
		DEFINE_CARD(CDragonStyleTwinsCard);
		DEFINE_CARD(CDutifulReturnCard);
		DEFINE_CARD(CEmbodimentOfSpringCard);
		DEFINE_CARD(CEndHostilitiesCard);
		DEFINE_CARD(CFeatOfResistanceCard);
		DEFINE_CARD(CFeedTheClanCard);
		DEFINE_CARD(CFirehoofCavalryCard);
		DEFINE_CARD(CForceAwayCard);
		DEFINE_CARD(CFrontierBivouacCard);
		DEFINE_CARD(CGlacialStalkerCard);
		DEFINE_CARD(CGurmagSwiftwingCard);
		DEFINE_CARD(CHeraldOfAnafenzaCard);
		DEFINE_CARD(CHighlandGameCard);
		DEFINE_CARD(CHighSentinelsOfArashinCard);
		DEFINE_CARD(CHighspireMantisCard);
		DEFINE_CARD(CHootingMandrillsCard);
		DEFINE_CARD(CHordelingOutburstCard);
		DEFINE_CARD(CIcefeatherAvenCard);
		DEFINE_CARD(CJeskaiBannerCard);
		DEFINE_CARD(CJeskaiCharmCard);
		DEFINE_CARD(CJeskaiElderCard);
		DEFINE_CARD(CJeskaiStudentCard);
		DEFINE_CARD(CJeskaiWindscoutCard);
		DEFINE_CARD(CKillShotCard);
		DEFINE_CARD(CKinTreeInvocationCard);
		DEFINE_CARD(CKinTreeWardenCard);
		DEFINE_CARD(CKrumarBondKinCard);
		DEFINE_CARD(CLeapingMasterCard);
		DEFINE_CARD(CLongshotSquadCard);
		DEFINE_CARD(CMantisRiderCard);
		DEFINE_CARD(CMarduBannerCard);
		DEFINE_CARD(CMarduBlazebringerCard);
		DEFINE_CARD(CMarduCharmCard);
		DEFINE_CARD(CMarduHatebladeCard);
		DEFINE_CARD(CMarduHeartPiercerCard);
		DEFINE_CARD(CMarduHordechiefCard);
		DEFINE_CARD(CMarduRoughriderCard);
		DEFINE_CARD(CMarduSkullhunterCard);
		DEFINE_CARD(CMarduWarshriekerCard);
		DEFINE_CARD(CMasterOfPearlsCard);
		DEFINE_CARD(CMerEkNightbladeCard);
		DEFINE_CARD(CMistfireWeaverCard);
		DEFINE_CARD(CMoltingSnakeskinCard);
		DEFINE_CARD(CMonasteryFlockCard);
		DEFINE_CARD(CMonasterySwiftspearCard);
		DEFINE_CARD(CMurderousCutCard);
		DEFINE_CARD(CMysticMonasteryCard);
		DEFINE_CARD(CMysticOfTheHiddenWayCard);
		DEFINE_CARD(CNomadOutpostCard);
		DEFINE_CARD(COpulentPalaceCard);
		DEFINE_CARD(CPearlLakeAncientCard);
		DEFINE_CARD(CRakshasaDeathdealerCard);
		DEFINE_CARD(CRattleclawMysticCard);
		DEFINE_CARD(CRiverwheelAerialistsCard);
		DEFINE_CARD(CRottingMastodonCard);
		DEFINE_CARD(CRuggedHighlandsCard);
		DEFINE_CARD(CRushOfBattleCard);
		DEFINE_CARD(CRuthlessRipperCard);
		DEFINE_CARD(CSageEyeHarrierCard);
		DEFINE_CARD(CSageOfTheInwardEyeCard);
		DEFINE_CARD(CSaguArcherCard);
		DEFINE_CARD(CSaguMaulerCard);
		DEFINE_CARD(CSandsteppeCitadelCard);
		DEFINE_CARD(CSaltRoadPatrolCard);
		DEFINE_CARD(CSavageKnucklebladeCard);
		DEFINE_CARD(CScaldkinCard);
		DEFINE_CARD(CScionOfGlaciersCard);
		DEFINE_CARD(CScoutTheBordersCard);
		DEFINE_CARD(CSeekerOfTheWayCard);
		DEFINE_CARD(CSetAdriftCard);
		DEFINE_CARD(CShamblingAttendantsCard);
		DEFINE_CARD(CSiegecraftCard);
		DEFINE_CARD(CSnowhornRiderCard);
		DEFINE_CARD(CSultaiBannerCard);
		DEFINE_CARD(CSultaiCharmCard);
		DEFINE_CARD(CSultaiScavengerCard);
		DEFINE_CARD(CSultaiSoothsayerCard);
		DEFINE_CARD(CSummitProwlerCard);
		DEFINE_CARD(CSuspensionFieldCard);
		DEFINE_CARD(CSwiftKickCard);
		DEFINE_CARD(CTakeUpArmsCard);
		DEFINE_CARD(CTemurAscendancyCard);
		DEFINE_CARD(CTemurBannerCard);
		DEFINE_CARD(CTemurChargerCard);
		DEFINE_CARD(CTemurCharmCard);
		DEFINE_CARD(CThrottleCard);
		DEFINE_CARD(CTimelyHordemateCard);
		DEFINE_CARD(CTormentingVoiceCard);
		DEFINE_CARD(CTranquilCoveCard);
		DEFINE_CARD(CTreasureCruiseCard);
		DEFINE_CARD(CTuskedColossodonCard);
		DEFINE_CARD(CTuskguardCaptainCard);
		DEFINE_CARD(CUtterEndCard);
		DEFINE_CARD(CValleyDasherCard);
		DEFINE_CARD(CVenerableLammasuCard);
		DEFINE_CARD(CWarBehemothCard);
		DEFINE_CARD(CWardenOfTheEyeCard);
		DEFINE_CARD(CWarNameAspirantCard);
		DEFINE_CARD(CWatcherOfTheRoostCard);
		DEFINE_CARD(CWaterwhirlCard);
		DEFINE_CARD(CWeaveFateCard);
		DEFINE_CARD(CWetlandSambarCard);
		DEFINE_CARD(CWhirlwindAdeptCard);
		DEFINE_CARD(CWindScarredCragCard);
		DEFINE_CARD(CWingmateRocCard);
		DEFINE_CARD(CWitnessOfTheAgesCard);
		DEFINE_CARD(CWoollyLoxodonCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAbzanBannerCard::CAbzanBannerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Abzan Banner"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJeskaiBannerCard::CJeskaiBannerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jeskai Banner"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarduBannerCard::CMarduBannerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mardu Banner"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSultaiBannerCard::CSultaiBannerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sultai Banner"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTemurBannerCard::CTemurBannerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Temur Banner"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
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
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrontierBivouacCard::CFrontierBivouacCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Frontier Bivouac"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMysticMonasteryCard::CMysticMonasteryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mystic Monastery"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNomadOutpostCard::CNomadOutpostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nomad Outpost"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COpulentPalaceCard::COpulentPalaceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Opulent Palace"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSandsteppeCitadelCard::CSandsteppeCitadelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sandsteppe Citadel"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAlabasterKirinCard::CAlabasterKirinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Alabaster Kirin"), CardType::Creature, CREATURE_TYPE(Kirin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBloodfellCavesCard::CBloodfellCavesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bloodfell Caves"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
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
CBlossomingSandsCard::CBlossomingSandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Blossoming Sands"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

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
CDismalBackwaterCard::CDismalBackwaterCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dismal Backwater"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

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
CDutifulReturnCard::CDutifulReturnCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dutiful Return"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CKillShotCard::CKillShotCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Kill Shot"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CSummitProwlerCard::CSummitProwlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Summit Prowler"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CRuggedHighlandsCard::CRuggedHighlandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rugged Highlands"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

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
CTranquilCoveCard::CTranquilCoveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tranquil Cove"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
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
CThrottleCard::CThrottleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Throttle"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			Power(-4), Life(-4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CWeaveFateCard::CWeaveFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Weave Fate"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT, 2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBraveTheSandsCard::CBraveTheSandsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Brave the Sands"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Vigilance));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRottingMastodonCard::CRottingMastodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotting Mastodon"), CardType::Creature, CREATURE_TYPE2(Zombie, Elephant), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(8))
{
}

//____________________________________________________________________________
//
CTormentingVoiceCard::CTormentingVoiceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tormenting Voice"), CardType::Sorcery, nID)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT, 2));

	cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAwakenTheBearCard::CAwakenTheBearCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Awaken the Bear"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSiegecraftCard::CSiegecraftCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Siegecraft"), nID,
		_T("3") WHITE_MANA_TEXT,
		Power(+2), Life(+4))
{
}

//____________________________________________________________________________
//
CSuspensionFieldCard::CSuspensionFieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Suspension Field"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSuspensionFieldCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureToughnessComparer<std::greater_equal<int>>(3));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSuspensionFieldCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuspensionFieldCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSuspensionFieldCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuspensionFieldCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSuspensionFieldCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSuspensionFieldCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) 
		return false;
	if (pCard != pExiled.GetAt(0)) 
		return false;
	return true;
}

bool CSuspensionFieldCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CSuspensionFieldCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CSuspensionFieldCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) 
		triggerContext.nValue1 = 0;
	else 
		triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CSuspensionFieldCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
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

void CSuspensionFieldCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) 
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
		pExiled.RemoveAll();
}

//___________________________________________________________________________________
//
CWaterwhirlCard::CWaterwhirlCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Waterwhirl"), CardType::Instant, nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CDebilitatingInjuryCard::CDebilitatingInjuryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Debilitating Injury"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-2), Life(-2))
{
}

//____________________________________________________________________________
//
CDisownedAncestorCard::CDisownedAncestorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disowned Ancestor"), CardType::Creature, CREATURE_TYPE2(Spirit, Warrior), nID,
		BLACK_MANA_TEXT, Power(0), Life(4))
{
	// Outlast
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																												 // only at any time you could cast a sorcery
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbzanBattlePriestCard::CAbzanBattlePriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abzan Battle Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has lifelink.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbzanFalconerCard::CAbzanFalconerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abzan Falconer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has flying.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAinokBondKinCard::CAinokBondKinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ainok Bond-Kin"), CardType::Creature, CREATURE_TYPE2(Hound, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has first strike.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDazzlingRampartsCard::CDazzlingRampartsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dazzling Ramparts"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("4") WHITE_MANA_TEXT, Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			TRUE,  // tap
			FALSE, // untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDefiantStrikeCard::CDefiantStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Defiant Strike"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CFirehoofCavalryCard::CFirehoofCavalryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Firehoof Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		_T("3") RED_MANA_TEXT, Power(+2), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CMarduHatebladeCard::CMarduHatebladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Hateblade"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{			
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMasterOfPearlsCard::CMasterOfPearlsCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Master of Pearls"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2), _T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Monk);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSageEyeHarrierCard::CSageEyeHarrierCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Sage-Eye Harrier"), CardType::Creature, CREATURE_TYPE2(Bird, Warrior), nID,
		_T("4") WHITE_MANA_TEXT , Power(1), Life(5), _T("3") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Warrior);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSaltRoadPatrolCard::CSaltRoadPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Salt Road Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(5))
{
	// Outlast
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTakeUpArmsCard::CTakeUpArmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Take Up Arms"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("4") WHITE_MANA_TEXT,
			_T("Warrior A"), 55014,
			3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVenerableLammasuCard::CVenerableLammasuCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Venerable Lammasu"), CardType::Creature, CREATURE_TYPE(Lammasu), nID,
		_T("6") WHITE_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CWarBehemothCard::CWarBehemothCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("War Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") WHITE_MANA_TEXT , Power(3), Life(6), _T("4") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
}

//____________________________________________________________________________
//
CAinokTrackerCard::CAinokTrackerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Ainok Tracker"), CardType::Creature, CREATURE_TYPE2(Hound, Scout), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(3), _T("4") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Hound);
	this->AddCreatureType(SingleCreatureType::Scout);

	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CBloodfireMentorCard::CBloodfireMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodfire Mentor"), CardType::Creature, CREATURE_TYPE2(Efreet, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(5))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT, 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCanyonLurkersCard::CCanyonLurkersCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Canyon Lurkers"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("4") RED_MANA_TEXT , Power(5), Life(2), _T("3") RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Rogue);
}

//____________________________________________________________________________
//
CHordelingOutburstCard::CHordelingOutburstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hordeling Outburst"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			_T("Goblin N"), 55020,
			3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLeapingMasterCard::CLeapingMasterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Leaping Master"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1),
		_T("2") WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CMarduBlazebringerCard::CMarduBlazebringerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Blazebringer"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarduBlazebringerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CMarduBlazebringerCard::BeforeResolution(CAbilityAction* pAction)
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
CValleyDasherCard::CValleyDasherCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Valley Dasher"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CAlpineGrizzlyCard::CAlpineGrizzlyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alpine Grizzly"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("2") GREEN_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CArchersParapetCard::CArchersParapetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archers' Parapet"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArchersParapetCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CArchersParapetCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
			pModifier1.ApplyTo(pPlayer);
	}
	return true;
}

//____________________________________________________________________________
//
CDragonscaleBoonCard::CDragonscaleBoonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Dragonscale Boon"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), 2));
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

//____________________________________________________________________________
//
CHighlandGameCard::CHighlandGameCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Highland Game"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKinTreeWardenCard::CKinTreeWardenCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Kin-Tree Warden"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1), GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Warrior);
	{
		counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("2")));
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLongshotSquadCard::CLongshotSquadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Longshot Squad"), CardType::Creature, CREATURE_TYPE2(Hound, Archer), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has reach.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Reach));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRattleclawMysticCard::CRattleclawMysticCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Rattleclaw Mystic"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") GREEN_MANA_TEXT , Power(2), Life(1), _T("2"))
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Shaman);
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)));
		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT)));
		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT)));

		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSaguArcherCard::CSaguArcherCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Sagu Archer"), CardType::Creature, CREATURE_TYPE2(Naga, Archer), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(5), _T("4") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Naga);
	this->AddCreatureType(SingleCreatureType::Archer);

	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CScoutTheBordersCard::CScoutTheBordersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scout the Borders"), CardType::Sorcery, nID)
	, m_CardFilter(_T("creature or land"), _T("creatures and lands"), new CardTypeComparer(CardType::Creature | CardType::_Land, false))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, &m_CardFilter);
	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTemurChargerCard::CTemurChargerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Temur Charger"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(1), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Horse);
	this->GetMorphAbility()->GetCost().AddRevealCardCost(1, CCardFilter::GetFilter(_T("green cards")));
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTuskedColossodonCard::CTuskedColossodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tusked Colossodon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
}

//____________________________________________________________________________
//
CTuskguardCaptainCard::CTuskguardCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tuskguard Captain"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has trample.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CWoollyLoxodonCard::CWoollyLoxodonCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Woolly Loxodon"), CardType::Creature, CREATURE_TYPE2(Elephant, Warrior), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(7), _T("5") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elephant);
	this->AddCreatureType(SingleCreatureType::Warrior);
}

//____________________________________________________________________________
//
CBitterRevelationCard::CBitterRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bitter Revelation"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT, 4));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGurmagSwiftwingCard::CGurmagSwiftwingCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Gurmag Swiftwing"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CKrumarBondKinCard::CKrumarBondKinCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Krumar Bond-Kin"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3), _T("4") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Orc);
	this->AddCreatureType(SingleCreatureType::Warrior);
}

//____________________________________________________________________________
//
CMerEkNightbladeCard::CMerEkNightbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mer-Ek Nightblade"), CardType::Creature, CREATURE_TYPE2(Orc, Assassin), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		// Outlast
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("") BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																													 // only at any time you could cast a sorcery
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{	
		// Each creature you control with a +1/+1 counter on it has deathtouch.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoltingSnakeskinCard::CMoltingSnakeskinCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Molting Snakeskin"), nID, 
		BLACK_MANA_TEXT,
		Power(+2), Life(+0))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMoltingSnakeskinCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CMoltingSnakeskinCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("2") BLACK_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChiefOfTheEdgeCard::CChiefOfTheEdgeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chief of the Edge"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+0)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));	// Warriors
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChiefOfTheScaleCard::CChiefOfTheScaleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chief of the Scale"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));	// Warriors
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUtterEndCard::CUtterEndCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Utter End"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CBlindingSprayCard::CBlindingSprayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blinding Spray"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-4), Life(+0), CreatureKeyword::Null));

	cpSpell->SetAffectOpponentCardsOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDisdainfulStrokeCard::CDisdainfulStrokeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Disdainful Stroke"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new ConvertedManaCostComparer<std::greater<int>>(3))
{
}

//____________________________________________________________________________
//
CEmbodimentOfSpringCard::CEmbodimentOfSpringCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Embodiment of Spring"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		BLUE_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGlacialStalkerCard::CGlacialStalkerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Glacial Stalker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(5), _T("4") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elemental);
}

//____________________________________________________________________________
//
CMonasteryFlockCard::CMonasteryFlockCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Monastery Flock"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(5), BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);

	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CMysticOfTheHiddenWayCard::CMysticOfTheHiddenWayCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Mystic of the Hidden Way"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(2), _T("2") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Monk);

	GetCreatureKeyword()->AddUnblockable(FALSE);
}

//____________________________________________________________________________
//
CMistfireWeaverCard::CMistfireWeaverCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Mistfire Weaver"), CardType::Creature, CREATURE_TYPE2(Djinn, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1), _T("2") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Djinn);
	this->AddCreatureType(SingleCreatureType::Wizard);
	GetCreatureKeyword()->AddFlying(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScaldkinCard::CScaldkinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scaldkin"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScionOfGlaciersCard::CScionOfGlaciersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Scion of Glaciers"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(5),
		BLUE_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CWetlandSambarCard::CWetlandSambarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wetland Sambar"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CRuthlessRipperCard::CRuthlessRipperCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Ruthless Ripper"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		BLACK_MANA_TEXT, Power(1), Life(1), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Assassin);
	GetCardKeyword()->AddDeathtouch(FALSE);
	this->GetMorphAbility()->GetCost().AddRevealCardCost(1, CCardFilter::GetFilter(_T("black cards")));
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKinTreeInvocationCard::CKinTreeInvocationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kin-Tree Invocation"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKinTreeInvocationCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CKinTreeInvocationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController  = pAction->GetController();
	CZone*	 pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	bool bFirst		= true;
	Life nLife		= Life(0);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (bFirst)
			{
				nLife = pCreature->GetToughness();
				bFirst = false;
			}
			else if (pCreature->GetToughness() > nLife)
				nLife = pCreature->GetToughness();
		}
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Spirit Warrior A"), 55021));		

		if (!m_pGame->IsThinking())
		{ 
			((CTokenCreature*)cpToken.GetPointer())->SetUID(55021); 
			((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Spirit Warrior A")); 
		}

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nLife));
		pCreature->SetPrintedToughness(nLife);		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CRakshasaDeathdealerCard::CRakshasaDeathdealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakshasa Deathdealer"), CardType::Creature, CREATURE_TYPE2(Cat, Demon), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
			BLACK_MANA_TEXT GREEN_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}

}

//____________________________________________________________________________
//
CHighspireMantisCard::CHighspireMantisCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Highspire Mantis"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CIcefeatherAvenCard::CIcefeatherAvenCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Icefeather Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Shaman), nID,
		BLUE_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2), _T("1") BLUE_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Shaman);	
	GetCreatureKeyword()->AddFlying(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSaguMaulerCard::CSaguMaulerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Sagu Mauler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") BLUE_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6), _T("3") BLUE_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CWindScarredCragCard::CWindScarredCragCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wind-Scarred Crag"), nID)
{
	SetIntoPlayTapped();
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

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
CWitnessOfTheAgesCard::CWitnessOfTheAgesCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Witness of the Ages"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(4), Life(4), _T("5"))
{
	this->AddCreatureType(SingleCreatureType::Golem);
}

//____________________________________________________________________________
//
CAbzanAscendancyCard::CAbzanAscendancyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Abzan Ascendancy"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{	// Whenever a nontoken creature you control dies, put a 1/1 white Spirit creature token with flying onto the battlefield.
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spirit P"), 55013, 1);

		AddAbility(cpAbility.GetPointer());
	}
	{	// When Abzan Ascendancy enters the battlefield, put a +1/+1 counter on each creature you control.
		typedef TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbzanCharmCard::CAbzanCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abzan Charm"), CardType::Instant, nID)
{
	
	{	//Target creature gets +2/+2 and gains trample until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+2), 
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Target creature gets +2/+2 and gains trample until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile target creature with power 3 or greater.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT,
				new CreaturePowerComparer<std::greater<int>>(2),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Exile target creature with power 3 or greater. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{	//You draw two cards and you lose 2 life.
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, 2));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
		
		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Draw two cards and lose 2 life. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{	//One target
		//Distribute two +1/+1 counters among one or two target creatures.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Distribute two +1/+1 counters among one or two target creatures (one target). Casts"));

		AddSpell(cpSpell.GetPointer());	
	}
	{
		//Two targets
		//Distribute two +1/+1 counters among one or two target creatures.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
		
		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Distribute two +1/+1 counters among one or two target creatures (two targets). Casts"));

		AddSpell(cpSpell.GetPointer());	
	}

}

//____________________________________________________________________________
//
CAbzanGuideCard::CAbzanGuideCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Abzan Guide"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Warrior);
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CFeedTheClanCard::CFeedTheClanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feed the Clan"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT));
		
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeedTheClanCard::BeforeResolution));
	
	AddSpell(cpSpell.GetPointer());
}

bool CFeedTheClanCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController     = GetController();
	CZone* pBattlefield      = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter = CCardFilter(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(3)); // creature with power 4 or greater
	
	int iLifeGain = 5;
	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)	   // ferocious caster has at least one creature with power 4 or greater
		iLifeGain = 10;
	CLifeModifier* pModifier = new CLifeModifier(Life(+iLifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pController);
	return true;
}

//____________________________________________________________________________
//
CForceAwayCard::CForceAwayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Force Away"), CardType::Instant, nID)
	, m_DrawSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForceAwayCard::OnDrawSelected))
	, m_DiscardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForceAwayCard::OnDiscardSelected))
{
		// Return target creature to its owner's hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForceAwayCard::BeforeResolution));
		
		AddSpell(cpSpell.GetPointer());
}

bool CForceAwayCard::BeforeResolution(CAbilityAction* pAction)
{ 
	CPlayer* pController     = GetController();
	CZone* pBattlefield      = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter = CCardFilter(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(3)); // creature with power 4 or greater

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)	   // Ferocious caster has at least one creature with power 4 or greater
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't draw a card then discard a card"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Draw a card and then discard a card"));

			entries.push_back(selectionEntry);
		}
		m_DrawSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CForceAwayCard::OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				// Discard a Card
				CZone* pHand = pSelectionPlayer->GetZoneById(ZoneId::Hand);
				if (pHand->GetSize() > 0)
				{
					std::vector<SelectionEntry> entries;
					{
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = 0;
						selectionEntry.strText.Format(_T("Don't discard anything"));

						entries.push_back(selectionEntry);
					}
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
					m_DiscardSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
				}

				return;
			}
		}
}

void CForceAwayCard::OnDiscardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
			pModifier.ApplyTo(pCard);
			return;
		}
}

//____________________________________________________________________________
//
CMurderousCutCard::CMurderousCutCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Murderous Cut"), CardType::Instant, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	{ //delve mana cost [3B, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [2B, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost, [<exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost, [<exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 17; ++i)
	{
		//Delve mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(4+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBecomeImmenseCard::CBecomeImmenseCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Become Immense"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") GREEN_MANA_TEXT,
		Power(+6), Life(+6),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{ //delve mana cost [4G, <exile card>]
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("4") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [3G, <exile card>, <exile card>]
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost, [2G, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost, [1G, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost, [G, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 16; ++i)
	{
		//Delve mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("") GREEN_MANA_TEXT,
				Power(+6), Life(+6), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDigThroughTimeCard::CDigThroughTimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dig Through Time"), CardType::Instant, nID)
{
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [5UU, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [4UU, <exile card>, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3UU, <exile card>, <exile card>, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2UU, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1UU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [UU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [UU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 15; ++i)
	{
		//Delve mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				7));
	
		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetSelectionOptions(MinimumValue(2), MaximumValue(2), ZoneId::Hand, CardPlacement::NotApplicable, NULL);
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(6+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHootingMandrillsCard::CHootingMandrillsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hooting Mandrills"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4))
{			
	GetCreatureKeyword()->AddTrample(FALSE);
	{//delve mana cost [4G, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3G, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2G, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1G, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [G, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") GREEN_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [G, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 16; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSultaiScavengerCard::CSultaiScavengerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sultai Scavenger"), CardType::Creature, CREATURE_TYPE2(Bird, Warrior), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3))
{			
	{//delve mana cost [4B, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3B, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2B, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1B, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 16; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CShamblingAttendantsCard::CShamblingAttendantsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shambling Attendants"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("7") BLACK_MANA_TEXT, Power(3), Life(5))
{			
	GetCardKeyword()->AddDeathtouch(FALSE);
	{//delve mana cost [6B, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [5B, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [4B, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3B, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>,]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>,]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(7, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 14; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(7+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTreasureCruiseCard::CTreasureCruiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Treasure Cruise"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("7") BLUE_MANA_TEXT, 3));

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [6U, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("6") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [5U, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [4U, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3U, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT, 3));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(7, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 14; ++i)
	{
		//Delve mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT, 3));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(7+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSetAdriftCard::CSetAdriftCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Set Adrift"), CardType::Sorcery, nID,
		_T("5") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
	{ //delve mana cost [4U, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [3U, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [2U, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [1U, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 16; ++i)
	{
		//Delve mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodfireExpertCard::CBloodfireExpertCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodfire Expert"), CardType::Creature, CREATURE_TYPE2(Efreet, Monk), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonStyleTwinsCard::CDragonStyleTwinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragon-Style Twins"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJeskaiStudentCard::CJeskaiStudentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jeskai Student"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJeskaiWindscoutCard::CJeskaiWindscoutCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jeskai Windscout"), CardType::Creature, CREATURE_TYPE2(Bird, Scout), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMonasterySwiftspearCard::CMonasterySwiftspearCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Monastery Swiftspear"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		RED_MANA_TEXT, Power(1), Life(2))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPearlLakeAncientCard::CPearlLakeAncientCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pearl Lake Ancient"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(7))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddCantBeCountered(FALSE);
	{
		// prowess
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));
		
		cpAbility->GetCost().AddReturnFromPlayCardCost(3, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRiverwheelAerialistsCard::CRiverwheelAerialistsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Riverwheel Aerialists"), CardType::Creature, CREATURE_TYPE2(Djinn, Monk), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(5))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhirlwindAdeptCard::CWhirlwindAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Whirlwind Adept"), CardType::Creature, CREATURE_TYPE2(Djinn, Monk), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(2))
{
	GetCardKeyword()->AddHexproof(FALSE);
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeekerOfTheWayCard::CSeekerOfTheWayCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seeker of the Way"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		// prowess
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJeskaiElderCard::CJeskaiElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jeskai Elder"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		// prowess
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback,  
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMantisRiderCard::CMantisRiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mantis Rider"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CAnkleShankerCard::CAnkleShankerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ankle Shanker"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback, 
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBearsCompanionCard::CBearsCompanionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bear's Companion"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Bear C"), 55018, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CButcherOfTheHordeCard::CButcherOfTheHordeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Butcher of the Horde"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CJeskaiCharmCard::CJeskaiCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jeskai Charm"), CardType::Instant, nID)
{
	{	//Put target creature on top of its owner's library.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Put target creature on top of its owner's library. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{	//Jeskai Charm deals 4 damage to target opponent.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,											// Target player
				Life(-4), PreventableType::Preventable));
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		
		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Jeskai Charm deals 4 damage to target opponent. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{	//Creatures you control get +1/+1 and gain lifelink until end of turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));
		
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Creatures you control get +1/+1 and gain lifelink until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarduCharmCard::CMarduCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mardu Charm"), CardType::Instant, nID)
	, m_CardFilter2(new NegateCardComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false)))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMarduCharmCard::OnResolutionCompleted))
{
	{	//Jeskai Charm deals 4 damage to target creature.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,												// Target player
				Life(-4), PreventableType::Preventable));
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Mardu Charm deals 4 damage to target creature. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{	//Put two 1/1 white Warrior creature tokens onto the battlefield. They gain first strike until end of turn.
		counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
			_T("Warrior B"), 55015,
			2));
		
		cpSpell->FlagTokens(TRUE, true);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Put two 1/1 white Warrior creature tokens onto the battlefield. They gain first strike until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpSpell->GetInstanceID());
		m_CardFilter1.AddComparer(pComparer);					// this filter will match cards flagged by this spell
	}
	{	//Target opponent reveals his or her hand. You choose a noncreature, nonland card from it. That player discards that card.
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,											// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				&m_CardFilter2));								// Exclude creature OR land cards

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Target opponent reveals his or her hand. You choose a noncreature, nonland card from it. That player discards that card. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

void CMarduCharmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	// find the tokens we just created
	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
	if (m_CardFilter1.GetIncluded(*pBattlefield, tokens))
	{
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		for (int i = 0; i < tokens.GetSize(); ++i)
			pModifier->ApplyTo((CCreatureCard*)tokens.GetAt(i));

	}
}

//____________________________________________________________________________
//
CSultaiCharmCard::CSultaiCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sultai Charm"), CardType::Instant, nID)
{
	{	//Destroy target monocolored creature.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Destroy target monocolored creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target artifact or enchantment.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Destroy target artifact or enchantment. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{	//Draw two cards, then discard a card.
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Draw two cards, then discard a card. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTemurCharmCard::CTemurCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temur Charm"), CardType::Instant, nID)
{
	{  //Target creature you control gets +1/+1 until end of turn. It fights target creature you don't control.
		counted_ptr<CHuntTheHunterSpell> cpSpell(
		::CreateObject <CHuntTheHunterSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Target creature you control gets +1/+1 until end of turn. It fights target creature you don't control. Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{	//Counter target spell unless its controller pays {3}.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->SetCanBeDenied();
		cpSpell->GetDenialCost().SetManaCost(_T("3"));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Counter target spell unless its controller pays {3}. Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{	//Creatures with power 3 or less can't block this turn.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Temur Charm Effect"), 61136, 1, FALSE, ZoneId::_Effects));
		
		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Creatures with power 3 or less can't block this turn. Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
}

CTemurCharmCard::CHuntTheHunterSpell::CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CTemurCharmCard::CHuntTheHunterSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
												  	    const CPlayerContainer& pPContainer1,	  const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize()) 
		return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) 
		return;

	CPowerModifier pModifier1 = CPowerModifier(Power(+1));
	CLifeModifier pModifier2 = CLifeModifier(Life(+1), this->GetCard(), PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo((CCreatureCard*)pCreature1);
	pModifier2.ApplyTo((CCreatureCard*)pCreature1);
	
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) 
			modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
}

//____________________________________________________________________________
//
CSwiftKickCard::CSwiftKickCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swift Kick"), CardType::Instant, nID)
{
	counted_ptr<CHuntTheHunterSpell> cpSpell(
		::CreateObject <CHuntTheHunterSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CSwiftKickCard::CHuntTheHunterSpell::CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CSwiftKickCard::CHuntTheHunterSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
												  	   const CPlayerContainer& pPContainer1,	 const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize()) 
		return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) 
		return;

	CPowerModifier pModifier1 = CPowerModifier(Power(+1));
	pModifier1.ApplyTo((CCreatureCard*)pCreature1);
	
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) 
			modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
}

//____________________________________________________________________________
//
CMarduRoughriderCard::CMarduRoughriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Roughrider"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredTargetAbility<CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSageOfTheInwardEyeCard::CSageOfTheInwardEyeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sage of the Inward Eye"), CardType::Creature, CREATURE_TYPE2(Djinn, Wizard), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSavageKnucklebladeCard::CSavageKnucklebladeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Savage Knuckleblade"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		_T("2") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	//Savage Knuckleblade gets +2/+2 until end of turn. Activate this ability only once each turn.
	m_pPumpAbility->SetMaxTurnUsageCount(1); 
	
	{	//Return Savage Knuckleblade to its owner's hand.
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("2") BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{	//Savage Knuckleblade gains haste until end of turn.
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSnowhornRiderCard::CSnowhornRiderCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Snowhorn Rider"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5), 
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Warrior);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CSultaiSoothsayerCard::CSultaiSoothsayerCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Sultai Soothsayer"), CardType::Creature, CREATURE_TYPE2(Naga, Shaman), nID,
        _T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	CZoneModifier* pModifier3					   = new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4));	
	pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier3->GetSelection(0).moveType		   = MoveType::Others;
	pModifier3->AddSelection(MinimumValue(1), MaximumValue(1),						// select cards to bottom
							 CZoneModifier::RoleType::PrimaryPlayer,				// select by 
							 CZoneModifier::RoleType::PrimaryPlayer,				// reveal to
							 NULL,													// any cards
							 ZoneId::Hand,										    // if selected, move cards to
							 CZoneModifier::RoleType::PrimaryPlayer,				// select by this player
							 CardPlacement::Top,									// put selected cards on top
							 MoveType::Others,										// move type
							 CZoneModifier::RoleType::PrimaryPlayer);				// order selected cards by this player
	// place the unselected cards in the graveyard
	pModifier3->SetReorderInformation(true, ZoneId::Graveyard);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTemurAscendancyCard::CTemurAscendancyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Temur Ascendancy"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(3));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWardenOfTheEyeCard::CWardenOfTheEyeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warden of the Eye"), CardType::Creature, CREATURE_TYPE2(Djinn, Wizard), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEndHostilitiesCard::CEndHostilitiesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("End Hostilities"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndHostilitiesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CEndHostilitiesCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			CCardFilter cfilter(new EnchantedOnComparer(pCard));
			cfilter.AddChildFilter(new CCardFilter(new EquippedOnComparer(pCard)));

			CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
	return true;
}

//____________________________________________________________________________
//
CFeatOfResistanceCard::CFeatOfResistanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feat of Resistance"), CardType::Instant, nID)
{
	counted_ptr<CTargetGainKeywordSpell> cpSpell(
		::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue,  TRUE, _T("blue"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed,   TRUE, _T("red"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHeraldOfAnafenzaCard::CHeraldOfAnafenzaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Herald of Anafenza"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
	// Outlast
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	
	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery); // can only use Outlast activated ability 
																												 // only at any time you could cast a sorcery
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Warrior B"), 55015, 1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHighSentinelsOfArashinCard::CHighSentinelsOfArashinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("High Sentinels of Arashin"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))
{
	{	//High Sentinels of Arashin gets +1/+1 for each other creature you control with a +1/+1 counter on it.
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new NegateCardComparer(new SpecificCardComparer(this))));

		cpAbility->GetSurveyCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1));

		AddAbility(cpAbility.GetPointer());
	}
	{	//{3W}: Put a +1/+1 counter on target creature.
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarduHordechiefCard::CMarduHordechiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Hordechief"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarduHordechiefCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarduHordechiefCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->SetCreateTokenOption(TRUE, _T("Warrior B"), 55015, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CMarduHordechiefCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CMarduHordechiefCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CTimelyHordemateCard::CTimelyHordemateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timely Hordemate"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTimelyHordemateCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimelyHordemateCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3)); // converted mana cost 2 or less
	
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
	AddAbility(cpAbility.GetPointer());
}

bool CTimelyHordemateCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CTimelyHordemateCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CWingmateRocCard::CWingmateRocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wingmate Roc"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	{
		//raid start---------------------------
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWingmateRocCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWingmateRocCard::BeforeResolution1));
		//raid end-----------------------------
		cpAbility->SetCreateTokenOption(TRUE, _T("Bird L"), 55012, 1);
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{	//Whenever Wingmate Roc attacks, you gain 1 life for each attacking creature.
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWingmateRocCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWingmateRocCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CWingmateRocCard::BeforeResolution1(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CWingmateRocCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CCardFilter mCardFilter;
	mCardFilter.SetComparer(new AttackingCreatureComparer);

	int nAttackingCreatures = mCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier(Life(+nAttackingCreatures), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CArrowStormCard::CArrowStormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Arrow Storm"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericTargetPlayerCreatureSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerCreatureSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT, new AnyCreatureComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArrowStormCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CArrowStormCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard*		   pTargetCreature = pAction->GetAssociatedCard();
	CPlayer*	   pTargetPlayer   = pAction->GetAssociatedPlayer();
	CLifeModifier* pModifier;
	if (pAction->GetController()->GetAttackCount() <= 0)	// without raid
		pModifier = new CLifeModifier(Life(-4), this, PreventableType::Preventable,    DamageType::SpellDamage | DamageType::NonCombatDamage);
	else													// raid
		pModifier = new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	
	if (pTargetCreature) 
		pModifier->ApplyTo((CCreatureCard*)pTargetCreature);
	if (pTargetPlayer) 
		pModifier->ApplyTo(pTargetPlayer);
	return true;
}

//____________________________________________________________________________
//
CMarduHeartPiercerCard::CMarduHeartPiercerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Heart-Piercer"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarduHeartPiercerCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarduHeartPiercerCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMarduHeartPiercerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										       CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CMarduHeartPiercerCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CMarduWarshriekerCard::CMarduWarshriekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Warshrieker"), CardType::Creature, CREATURE_TYPE2(Orc, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarduWarshriekerCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarduWarshriekerCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CMarduWarshriekerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										      CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CMarduWarshriekerCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CWarNameAspirantCard::CWarNameAspirantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War-Name Aspirant"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new CreaturePowerComparer<std::less_equal<int>>(1))); 

	GetCreatureKeyword()->AddUnblockable(FALSE,	&m_CardFilter);				//can't be blocked by creatures with power 1 or less
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarNameAspirantCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWarNameAspirantCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CWarNameAspirantCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CWarNameAspirantCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CBellowingSaddlebruteCard::CBellowingSaddlebruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bellowing Saddlebrute"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(5))
{
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBellowingSaddlebruteCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBellowingSaddlebruteCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));						// you lose life if you did not attack with a creature this turn
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);	// life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CBellowingSaddlebruteCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() < 1); // raid trigger check you lose life if you did not attack with a creature this turn
}

bool CBellowingSaddlebruteCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() < 1); // raid trigger check you lose life if you did not attack with a creature this turn
}

//____________________________________________________________________________
//
CBloodsoakedChampionCard::CBloodsoakedChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodsoaked Champion"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,							//not used
				CPlayableIfTrait::PlayableCallback(this,
				&CBloodsoakedChampionCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBloodsoakedChampionCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn" 
}

//____________________________________________________________________________
//
CMarduSkullhunterCard::CMarduSkullhunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Skullhunter"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	SetIntoPlayTapped();
	//raid start---------------------------
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarduSkullhunterCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarduSkullhunterCard::BeforeResolution));
	//raid end-----------------------------
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

bool CMarduSkullhunterCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
										      CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

bool CMarduSkullhunterCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GetController()->GetAttackCount() >= 1); // raid trigger check "if you attacked with a creature this turn"
}

//____________________________________________________________________________
//
CRushOfBattleCard::CRushOfBattleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rush of Battle"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a Warrior"), _T("Warriors"), new CreatureTypeComparer(CREATURE_TYPE(Warrior), false))
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();								  // SetAffectControllerCardsOnly is applied to <CPwrTghAttrEnchantment> only
	
	// Warrior creatures you control gain lifelink until end of turn.	
	CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
	pModifier1->GetModifier().SetToAdd(CardKeyword::Lifelink);
	pModifier1->GetModifier().SetOneTurnOnly(true);
			
	CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>((pModifier1)));
		
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2); // defaults to "SetAffectControllerCardsOnly"
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWatcherOfTheRoostCard::CWatcherOfTheRoostCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Watcher of the Roost"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Soldier);
	GetCreatureKeyword()->AddFlying(FALSE);
	this->GetMorphAbility()->GetCost().AddRevealCardCost(1, CCardFilter::GetFilter(_T("white cards")));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//