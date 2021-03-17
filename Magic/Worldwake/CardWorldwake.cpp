#include "stdafx.h"
#include "CardWorldwake.h"

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
		DEFINE_CARD(CAbyssalPersecutorCard);
		DEFINE_CARD(CAdmonitionAngelCard);
		DEFINE_CARD(CAEtherTradewindsCard);
		DEFINE_CARD(CAgadeemOccultistCard);
		DEFINE_CARD(CAkoumBattlesingerCard);
		DEFINE_CARD(CAmuletOfVigorCard);
		DEFINE_CARD(CAnowonTheRuinSageCard);
		DEFINE_CARD(CApexHawksCard);
		DEFINE_CARD(CArchonOfRedemptionCard);
		DEFINE_CARD(CAvengerOfZendikarCard);
		DEFINE_CARD(CBasiliskCollarCard);
		DEFINE_CARD(CBattleHurdaCard);
		DEFINE_CARD(CBazaarTraderCard);
		DEFINE_CARD(CBestialMenaceCard);
		DEFINE_CARD(CBloodhuskRitualistCard);
		DEFINE_CARD(CBojukaBogCard);
		DEFINE_CARD(CBojukaBrigandCard);
		DEFINE_CARD(CBullRushCard);
		DEFINE_CARD(CButcherofMalakirCard);
		DEFINE_CARD(CCalciteSnapperCard);
		DEFINE_CARD(CCanopyCoverCard);
		DEFINE_CARD(CCausticCrawlerCard);
		DEFINE_CARD(CCelestialColonnadeCard);
		DEFINE_CARD(CChainReactionCard);
		DEFINE_CARD(CClawsOfValakutCard);
		DEFINE_CARD(CCorruptedZendikonCard);
		DEFINE_CARD(CCosisRavagerCard);
		DEFINE_CARD(CCrusherZendikonCard);
		DEFINE_CARD(CCreepingTarPitCard);
		DEFINE_CARD(CCunningSparkmageCard);
		DEFINE_CARD(CDeadReckoningCard);
		DEFINE_CARD(CDeathsShadowCard);
		DEFINE_CARD(CDispelCard);
		DEFINE_CARD(CDragonmasterOutcastCard);
		DEFINE_CARD(CDreadStatuaryCard);
		DEFINE_CARD(CEnclaveEliteCard);
		DEFINE_CARD(CEverflowingChaliceCard);
		DEFINE_CARD(CEyeOfUginCard);
		DEFINE_CARD(CExploreCard);
		DEFINE_CARD(CFledglingGriffinCard);
		DEFINE_CARD(CGnarlidPackCard);
		DEFINE_CARD(CGoblinRoughriderCard);
		DEFINE_CARD(CGoliathSphinxCard);
		DEFINE_CARD(CGrapplerSpiderCard);
		DEFINE_CARD(CGraypeltHunterCard);
		DEFINE_CARD(CGrotagThrasherCard);
		DEFINE_CARD(CGroundswellCard);
		DEFINE_CARD(CGuardianZendikonCard);
		DEFINE_CARD(CHadaFreebladeCard);
		DEFINE_CARD(CHalimarDepthsCard);
		DEFINE_CARD(CHalimarExcavatorCard);
		DEFINE_CARD(CHammerOfRuinCard);
		DEFINE_CARD(CHarabazDruidCard);
		DEFINE_CARD(CHedronRoverCard);
		DEFINE_CARD(CHorizonDrakeCard);
		DEFINE_CARD(CIonasJudgmentCard);
		DEFINE_CARD(CJacetheMindSculptorCard);
		DEFINE_CARD(CJagwaspSwarmCard);		
		DEFINE_CARD(CJoinTheRanksCard);
		DEFINE_CARD(CJoragaWarcallerCard);
		DEFINE_CARD(CKalastriaHighbornCard);
		DEFINE_CARD(CKazuulTyrantOfTheCliffsCard);
		DEFINE_CARD(CKhalniGardenCard);
		DEFINE_CARD(CKitesailApprenticeCard);
		DEFINE_CARD(CKorFirewalkerCard);
		DEFINE_CARD(CLavaclawReachesCard);
		DEFINE_CARD(CLeatherbackBalothCard);
		DEFINE_CARD(CLightkeeperOfEmeriaCard);
		DEFINE_CARD(CLoamLionCard);
		DEFINE_CARD(CLodestoneGolemCard);
		DEFINE_CARD(CMarshThreaderCard);
		DEFINE_CARD(CMiresTollCard);
		DEFINE_CARD(CMordantDragonCard);
		DEFINE_CARD(CMysteriesoftheDeepCard);
		DEFINE_CARD(CNaturesClaimCard);
		DEFINE_CARD(CNemesisTrapCard);
		DEFINE_CARD(CNovablastWurmCard);
		DEFINE_CARD(CPerimeterCaptainCard);
		DEFINE_CARD(CPilgrimsEyeCard);
		DEFINE_CARD(CPulseTrackerCard);
		DEFINE_CARD(CQuagVampiresCard);
		DEFINE_CARD(CQuestForTheGoblinLordCard);
		DEFINE_CARD(CQuestforRenewalCard);
		DEFINE_CARD(CQuestfortheNihilStoneCard);
		DEFINE_CARD(CQuestForUlasTempleCard);
		DEFINE_CARD(CRagingRavineCard);
		DEFINE_CARD(CRestfortheWearyCard);
		DEFINE_CARD(CRuinGhostCard);
		DEFINE_CARD(CRuthlessCullbladeCard);
		DEFINE_CARD(CScribNibblersCard);
		DEFINE_CARD(CSearingBlazeCard);
		DEFINE_CARD(CSeersSundialCard);
		DEFINE_CARD(CSejiriMerfolkCard);
		DEFINE_CARD(CSejiriSteppeCard);
		DEFINE_CARD(CSelectiveMemoryCard);
		DEFINE_CARD(CShorelineSalvagerCard);
		DEFINE_CARD(CSkitterOfLizardsCard);
		DEFINE_CARD(CSlaveringNullsCard);
		DEFINE_CARD(CSlingbowTrapCard);
		DEFINE_CARD(CSmolderingSpiresCard);
		DEFINE_CARD(CSnappingCreeperCard);
		DEFINE_CARD(CStirringWildwoodCard);
		DEFINE_CARD(CStoneforgeMysticCard);
		DEFINE_CARD(CSummitApesCard);
		DEFINE_CARD(CSurrakarBanisherCard);
		DEFINE_CARD(CTalusPaladinCard);
		DEFINE_CARD(CTectonicEdgeCard);
		DEFINE_CARD(CTerastodonCard);
		DEFINE_CARD(CTerraEternalCard);
		DEFINE_CARD(CTideforceElementalCard);
		DEFINE_CARD(CTombHexCard);
		DEFINE_CARD(CTreasureHuntCard);
		DEFINE_CARD(CTuktukScrapperCard);
		DEFINE_CARD(CUrgeToFeedCard);
		DEFINE_CARD(CVaporSnareCard);
		DEFINE_CARD(CVastwoodAnimistCard);
		DEFINE_CARD(CVastwoodZendikonCard);
		DEFINE_CARD(CVeteransReflexesCard);
		DEFINE_CARD(CWalkingAtlasCard);
		DEFINE_CARD(CWindZendikonCard);
		DEFINE_CARD(CWolfbriarElementalCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CLeatherbackBalothCard::CLeatherbackBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leatherback Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CCelestialColonnadeCard::CCelestialColonnadeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Celestial Colonnade"), nID)
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
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Elemental AB"), 64032));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRuthlessCullbladeCard::CRuthlessCullbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ruthless Cullblade"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckLife();
	cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
	cpAbility->SetConditionValue(10);
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CJoinTheRanksCard::CJoinTheRanksCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Join the Ranks"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT,
			_T("Soldier Ally"), TOKEN_ID_BY_NAME,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKorFirewalkerCard::CKorFirewalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Firewalker"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLodestoneGolemCard::CLodestoneGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lodestone Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(5), Life(3))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new NegateCardComparer(new CardTypeComparer(CardType::Artifact, false)),
			_T("1")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCunningSparkmageCard::CCunningSparkmageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Cunning Sparkmage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CDreadStatuaryCard::CDreadStatuaryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dread Statuary"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4"),
				_T("Golem AC"), 64047));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSelectiveMemoryCard::CSelectiveMemoryCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Selective Memory"), CardType::Sorcery, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("non-lands")),
		ZoneId::Exile, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
}

//____________________________________________________________________________
//
CBojukaBrigandCard::CBojukaBrigandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bojuka Brigand"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Ally), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJagwaspSwarmCard::CJagwaspSwarmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jagwasp Swarm"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CBullRushCard::CBullRushCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Bull Rush"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CGoblinRoughriderCard::CGoblinRoughriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Roughrider"), CardType::Creature, CREATURE_TYPE2(Goblin, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CGrapplerSpiderCard::CGrapplerSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grappler Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
		GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CSnappingCreeperCard::CSnappingCreeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snapping Creeper"), CardType::Creature, CREATURE_TYPE(Plant), nID,
	 _T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	//cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	//cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	//cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	 cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
 	 cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHedronRoverCard::CHedronRoverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hedron Rover"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPilgrimsEyeCard::CPilgrimsEyeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pilgrim's Eye"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("3"), Power(1), Life(1))
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
CWalkingAtlasCard::CWalkingAtlasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walking Atlas"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKhalniGardenCard::CKhalniGardenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Khalni Garden"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Plant"), 2831, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCreepingTarPitCard::CCreepingTarPitCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Creeping Tar Pit"), nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCreepingTarPitCard::OnResolutionCompleted))
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				_T("Elemental AC"), 64033));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CCreepingTarPitCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Unblockable, TRUE);
	pModifier.ApplyTo((CCreatureCard*)GetIsAlsoA());
}


//____________________________________________________________________________
//
CStirringWildwoodCard::CStirringWildwoodCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Stirring Wildwood"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Elemental AD"), 64034));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSmolderingSpiresCard::CSmolderingSpiresCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Smoldering Spires"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	//		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
 		 cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBattleHurdaCard::CBattleHurdaCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Battle Hurda"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CFledglingGriffinCard::CFledglingGriffinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fledgling Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
	 _T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	//cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	//cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	//cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	 cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
 	 cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHadaFreebladeCard::CHadaFreebladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hada Freeblade"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Ally), nID,
		WHITE_MANA_TEXT, Power(0), Life(1))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoamLionCard::CLoamLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loam Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarshThreaderCard::CMarshThreaderCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Marsh Threader"), CardType::Creature, CREATURE_TYPE2(Kor, Scout), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CDispelCard::CDispelCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dispel"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Instant, false))
{
}

//____________________________________________________________________________
//
CGoliathSphinxCard::CGoliathSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goliath Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(7))
{
}

//____________________________________________________________________________
//
CGraypeltHunterCard::CGraypeltHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graypelt Hunter"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Ally), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHalimarDepthsCard::CHalimarDepthsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Halimar Depths"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIonasJudgmentCard::CIonasJudgmentCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Iona's Judgment"), CardType::Sorcery, nID,
		_T("4") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CNovablastWurmCard::CNovablastWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Novablast Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStoneforgeMysticCard::CStoneforgeMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stoneforge Mystic"), CardType::Creature, CREATURE_TYPE2(Kor, Artificer), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("an Equipment card"), _T("Equipment cards"), new CardTypeComparer(CardType::Equipment, false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, 
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVeteransReflexesCard::CVeteransReflexesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Veteran's Reflexes"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CAbyssalPersecutorCard::CAbyssalPersecutorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abyssal Persecutor"), CardType::Creature, CREATURE_TYPE(Demon), nID,
	_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantLoseGame));

		cpAbility->SetAffectOpponentsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQuestfortheNihilStoneCard::CQuestfortheNihilStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for the Nihil Stone"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1));		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetGatherer().SetIncludeOpponentPlayersOnly();

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestfortheNihilStoneCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CQuestfortheNihilStoneCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestfortheNihilStoneCard::SetTriggerContext(TriggeredAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	int nCounterCount = GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount();
	CZone* pHand = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	return ((nCounterCount >= 2) && (pHand->GetSize() < 1));
}

bool CQuestfortheNihilStoneCard::BeforeResolution(CQuestfortheNihilStoneCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount();
	CZone* pHand = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	return ((nCounterCount >= 2) && (pHand->GetSize() < 1)); 
}

//____________________________________________________________________________
//
CSlaveringNullsCard::CSlaveringNullsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slavering Nulls"), CardType::Creature, CREATURE_TYPE2(Goblin, Zombie), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlaveringNullsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSlaveringNullsCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CSlaveringNullsCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CPlayer* pByPlayer, Damage damage) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CSlaveringNullsCard::BeforeResolution(CSlaveringNullsCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CShorelineSalvagerCard::CShorelineSalvagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shoreline Salvager"), CardType::Creature, CREATURE_TYPE(Surrakar), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShorelineSalvagerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShorelineSalvagerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CShorelineSalvagerCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CPlayer* pByPlayer, Damage damage) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CShorelineSalvagerCard::BeforeResolution(CShorelineSalvagerCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CAdmonitionAngelCard::CAdmonitionAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Admonition Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAdmonitionAngelCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAdmonitionAngelCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAdmonitionAngelCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAdmonitionAngelCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAdmonitionAngelCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAdmonitionAngelCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pExiled.HasCard(pCard)) return false;

	pExiled.RemoveCard(pCard);
	return false;
}

bool CAdmonitionAngelCard::BeforeResolution1(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	pExiled.AddCard(pTarget, CardPlacement::Top);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CAdmonitionAngelCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CCountedCardContainer pCreated;

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Generic Container"), 61056, &pExiled, &pCreated);
	pModifier.ApplyTo(GetController());

	triggerContext.nValue1 = (DWORD)pCreated.GetAt(0);

	return true;
}

bool CAdmonitionAngelCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CContainerEffectCard* pContainer = (CContainerEffectCard*)pAction->GetTriggerContext().nValue1;
	CCountedCardContainer pStored;

	pContainer->WriteData(&pStored);

	while (pStored.GetSize() > 0)
	{
		CCard* pCard = pStored.GetAt(0);
		pStored.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, true, MoveType::Others, pController);
	pModifier.ApplyTo(pContainer);
	
	return true;
}

void CAdmonitionAngelCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CDragonmasterOutcastCard::CDragonmasterOutcastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragonmaster Outcast"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		 RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon C"), 2714, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonmasterOutcastCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonmasterOutcastCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDragonmasterOutcastCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
									  CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 5);
}

bool CDragonmasterOutcastCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 5);
}

//____________________________________________________________________________
//
CCausticCrawlerCard::CCausticCrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caustic Crawler"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCosisRavagerCard::CCosisRavagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cosi's Ravager"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExploreCard::CExploreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Explore"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayExtraLandSpell> cpSpell(
		::CreateObject<CPlayExtraLandSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT, 1, TRUE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKalastriaHighbornCard::CKalastriaHighbornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalastria Highborn"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), FALSE));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetResolutionCost(BLACK_MANA_TEXT);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeersSundialCard::CSeersSundialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seer's Sundial"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CButcherofMalakirCard::CButcherofMalakirCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Butcher of Malakir"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTectonicEdgeCard::CTectonicEdgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tectonic Edge"), nID)
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
				_T("1"),
				new CardTypeComparer(CardType::NonbasicLand, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTectonicEdgeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CTectonicEdgeCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nOppCount = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsLand())
			++nOppCount;
	}

	return nOppCount >= 4;
}

//____________________________________________________________________________
//
CTideforceElementalCard::CTideforceElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tideforce Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				BLUE_MANA_TEXT,
				TRUE,	// tap
				TRUE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTideforceElementalCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTideforceElementalCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CSurrakarBanisherCard::CSurrakarBanisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Surrakar Banisher"), CardType::Creature, CREATURE_TYPE(Surrakar), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TappedComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkoumBattlesingerCard::CAkoumBattlesingerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Akoum Battlesinger"), CardType::Creature, CREATURE_TYPE3(Human, Berserker, Ally), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), false));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnowonTheRuinSageCard::CAnowonTheRuinSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anowon, the Ruin Sage"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArchonOfRedemptionCard::CArchonOfRedemptionCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archon of Redemption"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArchonOfRedemptionCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArchonOfRedemptionCard::BeforeResolution));		

	AddAbility(cpAbility.GetPointer());
}

bool CArchonOfRedemptionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CArchonOfRedemptionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nLife = GET_INTEGER(pCreature->GetLastKnownPower());
	
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nLife));
	triggerContext.m_LifeModifier.SetSourceCard(this);
	pAction->SetTriggerContext(triggerContext);

	return nLife > 0;
}

//____________________________________________________________________________
//
CAvengerOfZendikarCard::CAvengerOfZendikarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avenger of Zendikar"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAvengerOfZendikarCard::BeforeResolution));
		cpAbility->SetCreateTokenOption(TRUE, _T("Plant"), 2831, 0);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Plant), false));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter
		/*cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);*/

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAvengerOfZendikarCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;

	for (int i = 0; i < pContBattle->GetSize(); ++i)
	{
		CCard* pCard = pContBattle->GetAt(i);
		if (pCard->GetCardType().IsLand()) 
		++nCount;
	}
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CGrotagThrasherCard::CGrotagThrasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grotag Thrasher"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

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
CPulseTrackerCard::CPulseTrackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pulse Tracker"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHammerOfRuinCard::CHammerOfRuinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hammer of Ruin"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CVaporSnareCard::CVaporSnareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vapor Snare"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("4") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNaturesClaimCard::CNaturesClaimCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Nature's Claim"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CBestialMenaceCard::CBestialMenaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bestial Menace"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			_T("Snake C"), 2703,
			1));
		
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Wolf F"), 2952, 1));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elephant A"), 2771, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//

//Bojuka Bog\n\nLand\nWWK\nBojuka Bog enters the battlefield tapped.\rWhen Bojuka Bog enters the battlefield, exile all cards from target player's graveyard.\r{T}: Add {B} to your mana pool.

CBojukaBogCard::CBojukaBogCard(CGame* pGame, UINT nID)
: CNonbasicLandCard(pGame, _T("Bojuka Bog"), nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CBojukaBogCard::OnResolutionCompleted))
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
}
void CBojukaBogCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CQuestforRenewalCard::CQuestforRenewalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for Renewal"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
		cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1, false));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UntapStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CQuestforRenewalCard::BeforeResolution));
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestforRenewalCard::BeforeResolution(CQuestforRenewalCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount();
	return (nCounterCount>3); 
}

//____________________________________________________________________________
//
CWolfbriarElementalCard::CWolfbriarElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wolfbriar Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(GREEN_MANA_TEXT,true);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWolfbriarElementalCard::SetTriggerContextK));
		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf F"), 2952, 0); 
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWolfbriarElementalCard::SetTriggerContextK(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nExtraCost = GetLastCastingExtraValue();
	triggerContext.nValue1 = nExtraCost;

	return nExtraCost>0;
}

//____________________________________________________________________________
//
CBloodhuskRitualistCard::CBloodhuskRitualistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodhusk Ritualist"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(BLACK_MANA_TEXT,true);

	{
		typedef
			TTriggeredTargetAbility<CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodhuskRitualistCard::SetTriggerContextK));
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloodhuskRitualistCard::SetTriggerContextK(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	int nExtraCost = GetLastCastingExtraValue();
	triggerContext.m_nDiscardCount = nExtraCost;

	return nExtraCost>0;
}
//____________________________________________________________________________
//
CHalimarExcavatorCard::CHalimarExcavatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Halimar Excavator"), CardType::Creature, CREATURE_TYPE3(Human, Wizard, Ally), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHalimarExcavatorCard::BeforeResolution));
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);		

	AddAbility(cpAbility.GetPointer());
}

bool CHalimarExcavatorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.nValue1 = (m_CardFilter.CountIncluded(pInplay->GetCardContainer()));	

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CJacetheMindSculptorCard::CJacetheMindSculptorCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Jace, the Mind Sculptor"), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		PlaneswalkerType::Jace, 3)		
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
					_T(""), 1));
		ATLASSERT(cpAbility);

		cpAbility->SetSelectionOptions(MaximumValue(1), ZoneId::Library, CardPlacement::Bottom, CCardFilter::GetFilter(_T("cards")), MinimumValue(0));
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);	

		cpAbility->SetRevealCardsToOthers(FALSE);		
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 3));

		cpAbility->SetDiscard(2, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), 0);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));

		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::Any));		
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(0), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Exile,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);

		//-----------------------------------------------------------------------
		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Hand, ZoneId::Library, TRUE, MoveType::Others);
		pCardModifier->SetShuffle(TRUE);
		CZoneCardModifier* pPModifier = new CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
			std::auto_ptr<CCardModifier>(pCardModifier));

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier);
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pPModifier);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -12);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathsShadowCard::CDeathsShadowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death's Shadow"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("") BLACK_MANA_TEXT, Power(13), Life(13))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDeathsShadowCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathsShadowCard::SetTriggerContextS));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeathsShadowCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(13-GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(13-GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(13-GET_INTEGER(p)), true);
	SetPermanentLife(Life(13-GET_INTEGER(p)), true);

	return true;
}

bool CDeathsShadowCard::SetTriggerContextS(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_PowerModifier.SetPowerDelta(Power(13-GET_INTEGER(GetController()->GetLife()))-GetPower());
	triggerContext.m_PowerModifier.SetToBase(TRUE);
	triggerContext.m_PowerModifier.SetOneTurnOnly(FALSE);
	triggerContext.m_LifeModifier.SetLifeDelta(Life(13)-(GetController()->GetLife())-GetLife());
	triggerContext.m_LifeModifier.SetToBase(TRUE);
	triggerContext.m_LifeModifier.SetOneTurnOnly(FALSE);

	return true;
}

//____________________________________________________________________________
//
CTreasureHuntCard::CTreasureHuntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Treasure Hunt"), CardType::Sorcery, nID)

		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CTreasureHuntCard::OnResolutionCompleted))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT, 0));

	cpSpell->SetRevealCardsToOthers(TRUE, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CTreasureHuntCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=1;
	int stop=0;
	for (int i = 0; i < pLib->GetSize(); i++)

	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
		
		if (ppCard->GetCardType().IsLand() && (stop<1))
		{
			++reveal;			//one more card to reveal
		}
		else
		{
			++stop;				//stop the reveal count
			i=pLib->GetSize();	//stop the loop
		}
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(reveal), MaximumValue(reveal), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.SetReorderInformation(
		true, 
		ZoneId::Hand, 
		CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		CardPlacement::Top);
	pmodifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CSummitApesCard::CSummitApesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Summit Apes"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBeBlockedBy1);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHarabazDruidCard::CHarabazDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harabaz Druid"), CardType::Creature, CREATURE_TYPE3(Human, Druid, Ally), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {W} to your mana pool for each Ally you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarabazDruidCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {U} to your mana pool for each Ally you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarabazDruidCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {B} to your mana pool for each Ally you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarabazDruidCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {R} to your mana pool for each Ally you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarabazDruidCard::BeforeResolution4));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool for each Ally you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarabazDruidCard::BeforeResolution5));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHarabazDruidCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CHarabazDruidCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CHarabazDruidCard::BeforeResolution3(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CHarabazDruidCard::BeforeResolution4(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

bool CHarabazDruidCard::BeforeResolution5(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CTerraEternalCard::CTerraEternalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Terra Eternal"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));
	
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEverflowingChaliceCard::CEverflowingChaliceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Everflowing Chalice"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("2"),true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEverflowingChaliceCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEverflowingChaliceCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Add {1} to your mana pool for each charge counter on"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEverflowingChaliceCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEverflowingChaliceCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CEverflowingChaliceCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}
bool CEverflowingChaliceCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CHorizonDrakeCard::CHorizonDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Horizon Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CCanopyCoverCard::CCanopyCoverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Canopy Cover"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
		
	, m_CardFilter1(_T("a creature with flying or reach"), _T("creatures with flying or reach"), new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Reach, false))
	, m_CardFilter2(new CardControllerComparer(this))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter1); //can't be blocked except by creatures with flying or reach

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter2);
}

//____________________________________________________________________________
//
CClawsOfValakutCard::CClawsOfValakutCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Claws of Valakut"), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CClawsOfValakutCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CClawsOfValakutCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false)));
		
	cpAbility->SetChangePowerOnly();
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEyeOfUginCard::CEyeOfUginCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Eye of Ugin"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Eldrazi), false),
				_T("2")));
		ATLASSERT(cpAbility);

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_ColorMask, false)); //colorless

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.SetFilterName(_T("a colorless creature card"), _T("colorless creature cards"));
		m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_ColorMask, false)); //colorless
		m_CardFilter.AddComparer(new AnyCreatureComparer);

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("7"),
				&m_CardFilter, 
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetRevealCards(TRUE);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCorruptedZendikonCard::CCorruptedZendikonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Corrupted Zendikon"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Ooze AA"), 64030));

	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Hand, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCrusherZendikonCard::CCrusherZendikonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crusher Zendikon"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Beast AB"), 64016));

	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Hand, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGuardianZendikonCard::CGuardianZendikonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Guardian Zendikon"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Wall AA"), 64078));

	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Hand, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVastwoodZendikonCard::CVastwoodZendikonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vastwood Zendikon"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("4") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Elemental AE"), 64035));

	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Hand, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWindZendikonCard::CWindZendikonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wind Zendikon"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Elemental AF"), 64036));

	cpSpell->SetMoveTargetToOnDisenchant(ZoneId::Graveyard, ZoneId::Hand, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBasiliskCollarCard::CBasiliskCollarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Basilisk Collar"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Deathtouch | CardKeyword::Lifelink);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTalusPaladinCard::CTalusPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talus Paladin"), CardType::Creature, CREATURE_TYPE3(Human, Knight, Ally), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCalciteSnapperCard::CCalciteSnapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Calcite Snapper"), CardType::Creature, CREATURE_TYPE(Turtle), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(4))
{
	GetCardKeyword()->AddShroud(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::SwitchedPT);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAEtherTradewindsCard::CAEtherTradewindsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Æther Tradewinds"), CardType::Instant, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new TrueCardComparer, false,
			new TrueCardComparer, false,
			_T("")));

	cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
	cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAEtherTradewindsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAEtherTradewindsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CSejiriSteppeCard::CSejiriSteppeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sejiri Steppe"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredGainKeywordAbility , CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);		
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScribNibblersCard::CScribNibblersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scrib Nibblers"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CScribNibblersCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScribNibblersCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CScribNibblersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* lib_owner = pAbilityAction->GetAssociatedPlayer();
		CZone* lib=lib_owner->GetZoneById(ZoneId::Library);
		if (lib->GetSize()>0)
		{
			CCard* pNextDraw = lib_owner->GetZoneById(ZoneId::Library)->GetTopCard();

			CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
			pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
			pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
			pModifier.GetSelection(0).moveType = MoveType::Others;
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				NULL, // any cards
				ZoneId::Exile, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier.ApplyTo(lib_owner);

			CLifeModifier pModifier1 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

			if (pNextDraw->GetCardType().IsLand()) pModifier1.ApplyTo(GetController());
		}
	}
}

bool CScribNibblersCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CRestfortheWearyCard::CRestfortheWearyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Rest for the Weary"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRestfortheWearyCard::BeforeResolution));
}
bool CRestfortheWearyCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 0)
		{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 8;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}

		return TRUE;
		}	
	return TRUE;
}
//____________________________________________________________________________
//
CGroundswellCard::CGroundswellCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Groundswell"), CardType::Instant, nID, AbilityType::Instant,
	    GREEN_MANA_TEXT,
		Power(2), Life(2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGroundswellCard::BeforeResolution));
}
bool CGroundswellCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 0)
		{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 4;
		Context.nValue2 = 4;


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
CMysteriesoftheDeepCard::CMysteriesoftheDeepCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mysteries of the Deep"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("4") BLUE_MANA_TEXT, 2));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMysteriesoftheDeepCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}
bool CMysteriesoftheDeepCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 0)
		{
        ContextValue Context(pAction->GetValue());

		Context.nValue1 = 3;

		pAction->SetValue(Context);	

		return TRUE;
		}	
	return TRUE;
}
//____________________________________________________________________________
//
CTombHexCard::CTombHexCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Tomb Hex"), CardType::Instant, nID, AbilityType::Instant,
	    _T("2") BLACK_MANA_TEXT,
		Power(-2), Life(-2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTombHexCard::BeforeResolution));
}
bool CTombHexCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 0)
		{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -2;
		Context.nValue2 = -2;


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
CSearingBlazeCard::CSearingBlazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Searing Blaze"), CardType::Instant, nID)
{
	{		
		counted_ptr<CSearingBlazeSpell> cpSpell(
			::CreateObject<CSearingBlazeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT, 
				new AnyCreatureComparer,
				TRUE,
				Life(-1), PreventableType::Preventable));		

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSearingBlazeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}
bool CSearingBlazeCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 0)
	{	
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -3;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}				
	
        pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		Context = pAction->GetValue();

		Context.nValue1 = -3;


		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

	}
	return TRUE;
}
//____________________________________________________________________________
//
CLavaclawReachesCard::CLavaclawReachesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lavaclaw Reaches"), nID)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
				_T("Elemental AH"), 64038));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRagingRavineCard::CRagingRavineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Raging Ravine"), nID)
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
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2") GREEN_MANA_TEXT RED_MANA_TEXT,
				_T("Elemental AI"), 64039));

			counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRagingRavineCard::CanPlay1)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") GREEN_MANA_TEXT RED_MANA_TEXT));
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRagingRavineCard::BeforeResolution));	

			counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRagingRavineCard::CanPlay2)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CRagingRavineCard::CanPlay1(BOOL bIncludeTricks)
{
    if (!GetIsAlsoA()) return true;
	if (GetIsAlsoA()->GetImageID() != 64039) return true;
	return false;
}
BOOL CRagingRavineCard::CanPlay2(BOOL bIncludeTricks)
{
    if (!GetIsAlsoA()) return false;
	if (GetIsAlsoA()->GetImageID() != 64039) return false;
	return true;
}
bool CRagingRavineCard::BeforeResolution(CAbilityAction* pAction) const
{
	/*CCardAbilityModifier* pModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback((CCard*)this,
			&CRagingRavineCard::CreateAdditionAbility));*/
	
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CRagingRavineCard::CreateAdditionAbility));

	pModifier1->ApplyTo(GetIsAlsoA());

	return true;
}
counted_ptr<CAbility> CRagingRavineCard::CreateAdditionAbility(CCard* pCard) const
{
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));		

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CAmuletOfVigorCard::CAmuletOfVigorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Amulet of Vigor"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAmuletOfVigorCard::SetTriggerContext));
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TappedComparer);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAmuletOfVigorCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CBazaarTraderCard::CBazaarTraderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bazaar Trader"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDonateSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDonateSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetTargeting1()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));
	//cpAbility->GetTargeting1()->AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));
	cpAbility->AddTapCost();
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPerimeterCaptainCard::CPerimeterCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Perimeter Captain"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
				CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTrigger().GetBlockedFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockedFilter().GetCustomFilter().SetComparer(
			new CreatureKeywordComparer(CreatureKeyword::Defender, false));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKitesailApprenticeCard::CKitesailApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitesail Apprentice"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CEquipPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CEquipPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1), CreatureKeyword::Flying));		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CQuestForTheGoblinLordCard::CQuestForTheGoblinLordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for the Goblin Lord"), CardType::GlobalEnchantment, nID,
		_T("") RED_MANA_TEXT, AbilityType::Enchantment)
		, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	GetCounterContainer()->ScheduleCounter(QUEST_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+2), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(QUEST_COUNTER, 5));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestForTheGoblinLordCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestForTheGoblinLordCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())            // Made for AI to put counter more often (I think other similar Zendikar Cards should also have such an update)
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//____________________________________________________________________________
//
CRuinGhostCard::CRuinGhostCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ruin Ghost"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRuinGhostCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CRuinGhostCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	//CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));

	pModifier->ApplyTo(target->GetOwner());
}

void CRuinGhostCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() != ZoneId::Stack) &&
		(GetCardKeyword()->HasFlash() == TRUE))
		pToZone = GetOwner()->GetZoneById(ZoneId::Exile);

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSejiriMerfolkCard::CSejiriMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sejiri Merfolk"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Plains, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CApexHawksCard::CApexHawksCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Apex Hawks"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") WHITE_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CApexHawksCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CApexHawksCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CApexHawksCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CApexHawksCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CEnclaveEliteCard::CEnclaveEliteCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Enclave Elite"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Islandwalk)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") BLUE_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEnclaveEliteCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEnclaveEliteCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEnclaveEliteCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CEnclaveEliteCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CGnarlidPackCard::CGnarlidPackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gnarlid Pack"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") GREEN_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGnarlidPackCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGnarlidPackCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGnarlidPackCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CGnarlidPackCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CQuagVampiresCard::CQuagVampiresCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Quag Vampires"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		_T("") BLACK_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") BLACK_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuagVampiresCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CQuagVampiresCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuagVampiresCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CQuagVampiresCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CSkitterOfLizardsCard::CSkitterOfLizardsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Skitter of Lizards"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") RED_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkitterOfLizardsCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkitterOfLizardsCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkitterOfLizardsCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CSkitterOfLizardsCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CJoragaWarcallerCard::CJoragaWarcallerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Joraga Warcaller"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(_T("1") GREEN_MANA_TEXT,true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJoragaWarcallerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CJoragaWarcallerCard::BeforeResolution1));

		//m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, _T("+1/+1")));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf),false));
		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantment()->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf),false));
		cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantment1()->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJoragaWarcallerCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}
bool CJoragaWarcallerCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();   

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true); 

	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CLightkeeperOfEmeriaCard::CLightkeeperOfEmeriaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lightkeeper of Emeria"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(WHITE_MANA_TEXT, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLightkeeperOfEmeriaCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLightkeeperOfEmeriaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast) return false;
		
	int nExtraCost = GetLastCastingExtraValue();
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nExtraCost*2));

	return (nExtraCost > 0);
}

//____________________________________________________________________________
//
CChainReactionCard::CChainReactionCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Chain Reaction"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-0),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChainReactionCard::BeforeResolution));
}

bool CChainReactionCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCreatures += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());
	}

	if (nCreatures == 0) return false;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCreatures;
	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CTerastodonCard::CTerastodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terastodon"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTerastodonCard::OnResolutionCompleted))
	, nGraveyardCount(2)
{
	typedef	TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new AnyCreatureComparer));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetTargeting().SetSubjectCount(0, 3);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTerastodonCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CTerastodonCard::BeforeResolution(CAbilityAction* pAction)
{
	nGraveyardCount.reserve(GetGame()->GetPlayerCount());

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nGraveyardCount[ip] = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard)->GetSize();

	return true;
}

void CTerastodonCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	for (int ip = 0, nDelta; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nDelta = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard)->GetSize() - nGraveyardCount[ip];
		if (nDelta > 0)
		{
			CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Elephant A"), 2771, nDelta, false);
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

//____________________________________________________________________________
//
CAgadeemOccultistCard::CAgadeemOccultistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agadeem Occultist"), CardType::Creature, CREATURE_TYPE3(Human, Shaman, Ally), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAgadeemOccultistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAgadeemOccultistCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nAllies = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	
	int nCost = pAction->GetAssociatedCard()->GetConvertedManaCost();
	
	return (nCost <= nAllies);
}

//____________________________________________________________________________
//
CKazuulTyrantOfTheCliffsCard::CKazuulTyrantOfTheCliffsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kazuul, Tyrant of the Cliffs"), CardType::_LegendaryCreature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetCreateTokenOption(TRUE, _T("Ogre"), 2973, 1);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("3"));
	
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrgeToFeedCard::CUrgeToFeedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Urge to Feed"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CUrgeToFeedCard::OnResolutionCompleted))
   , m_VampireSelection(pGame, CSelectionSupport::SelectionCallback(this, &CUrgeToFeedCard::OnVampireSelected))

{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());	
}

void CUrgeToFeedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	m_CardFilter.AddComparer(new UntappedComparer);

	pVampires.RemoveAll();
	pRemainingVampires.RemoveAll();

	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				pRemainingVampires.AddCard(pCard, CardPlacement::Top);
			}
		}
		VampireSelection(pController);
	}
}

void CUrgeToFeedCard::VampireSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop tapping Vampires"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingVampires.GetSize(); ++i)
	{
		CCard* pCard = pRemainingVampires.GetAt(i);
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Tap %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}
	m_VampireSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CUrgeToFeedCard::OnVampireSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops tapping vampires"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pVampires.GetSize() > 0)
					Finale();
				
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
				pVampires.AddCard(pCard, CardPlacement::Top);
				pRemainingVampires.RemoveCard(pCard);

				VampireSelection(pSelectionPlayer);

				return;
			}
		}
}

void CUrgeToFeedCard::Finale()
{
	int nNumber = pVampires.GetSize();
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pVampires.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pVampires.GetAt(i);
		pModifier2.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CQuestForUlasTempleCard::CQuestForUlasTempleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for Ula's Temple"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_LookSelection(pGame,CSelectionSupport::SelectionCallback(this, &CQuestForUlasTempleCard::OnLookSelected))
	, m_CounterSelection(pGame,CSelectionSupport::SelectionCallback(this, &CQuestForUlasTempleCard::OnCounterSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CQuestForUlasTempleCard::OnCardSelected))
{
	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestForUlasTempleCard::BeforeResolution1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestForUlasTempleCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestForUlasTempleCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestForUlasTempleCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (pAction->GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Look at the top card of your library"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't look"));

			entries.push_back(selectionEntry);
		}
	
		m_LookSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}
	return true;
}

void CQuestForUlasTempleCard::OnLookSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
															CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.ApplyTo(pSelectionPlayer);
				CCard* pNextDraw = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

				std::vector<SelectionEntry> entries;
				if (pNextDraw->GetCardType().IsCreature())
					{
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = 1;
						selectionEntry.strText.Format(_T("Reveal %s and put a quest counter on %s"), pNextDraw->GetCardName(TRUE), this->GetCardName(TRUE));

						entries.push_back(selectionEntry);
					}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("Don't reveal %s"), pNextDraw->GetCardName(TRUE));

					entries.push_back(selectionEntry);
				}
	
					m_CounterSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			
				return;
			}
		}
}

void CQuestForUlasTempleCard::OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.ApplyTo(pSelectionPlayer);

				CCardCounterModifier pModifier2 = CCardCounterModifier(QUEST_COUNTER, 1);
				pModifier2.ApplyTo(this);
				
				return;
			}
		}
}

bool CQuestForUlasTempleCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	int nCounterCount = GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount();
	return (nCounterCount>2); 
}

bool CQuestForUlasTempleCard::BeforeResolution2(CAbilityAction* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount();
	if (nCounterCount < 3) return false;

	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Do nothing"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (pCreature->GetCardKeyword()->HasChangeling() ||
					pCreature->GetCreatureType().HasType(SingleCreatureType::Kraken) ||
					pCreature->GetCreatureType().HasType(SingleCreatureType::Leviathan) ||
					pCreature->GetCreatureType().HasType(SingleCreatureType::Octopus) ||
					pCreature->GetCreatureType().HasType(SingleCreatureType::Serpent))
				{

					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Put %s onto the battlefield."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
					}
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CQuestForUlasTempleCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s does nothing"), pSelectionPlayer->GetPlayerName());
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
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CDeadReckoningCard::CDeadReckoningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dead Reckoning"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDeadReckoningCard::OnYesNoSelected))
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery, 
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false,
			new AnyCreatureComparer, false,
			_T("")));

	cpSpell->GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
	cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDeadReckoningCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDeadReckoningCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't move %s"), pTarget1->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Put %s on top of your library"), pTarget1->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pTarget1, (DWORD)pTarget2);

	return true;
}


void CDeadReckoningCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				return;
			}
			if ((int)it->dwContext == 1)
			{
				CCreatureCard* pTarget1 = (CCreatureCard*)dwContext1;
				CCreatureCard* pTarget2 = (CCreatureCard*)dwContext2;

				int nPower = pTarget1->GetPower();

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pTarget1);

				CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				pModifier2.ApplyTo(pTarget2);

				return;
			}
		}
}

//____________________________________________________________________________
//
CMiresTollCard::CMiresTollCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mire's Toll"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Null, FALSE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetSecondaryAction(1, MoveType::Discard, ZoneId::Graveyard, TRUE, FALSE, new TrueCardComparer, TRUE, FALSE,
								CardPlacement::Top, TRUE);
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMiresTollCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMiresTollCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattle = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Swamp, false));

	int nSwamps = m_CardFilter.CountIncluded(pBattle->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nSwamps;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
	it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
	}
		
	return true;
}

//____________________________________________________________________________
//
CMordantDragonCard::CMordantDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mordant Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMordantDragonCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMordantDragonCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	
	return true;
}

//____________________________________________________________________________
//
CVastwoodAnimistCard::CVastwoodAnimistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vastwood Animist"), CardType::Creature, CREATURE_TYPE3(Elf, Shaman, Ally), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVastwoodAnimistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CVastwoodAnimistCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), false));

	int nAllies = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Elemental AL"), 64055, pController);
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(nAllies);
	pCreature->SetPrintedToughness(nAllies);

	return true;
}

//____________________________________________________________________________
//
CTuktukScrapperCard::CTuktukScrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tuktuk Scrapper"), CardType::Creature, CREATURE_TYPE3(Goblin, Artificer, Ally), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTuktukScrapperCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTuktukScrapperCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTuktukScrapperCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pTargetController = pTarget->GetController();

	int nBefore = GetGame()->GetCertainTypeDiedCount(CardType::Artifact);
	BOOL bTotemArmor = pTarget->GetCardKeyword()->HasTotemArmor();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
	pModifier1.ApplyTo(pTarget);
	
	if (!bTotemArmor)
	{
		int nAfter = GetGame()->GetCertainTypeDiedCount(CardType::Artifact);

		if (nAfter > nBefore)
		{
			CCardFilter m_CardFilter;
			m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), false));
			int nAllies = m_CardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CLifeModifier pModifier2 = CLifeModifier(Life(-nAllies), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pTargetController);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CNemesisTrapCard::CNemesisTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nemesis Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AttackingCreatureComparer, false));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNemesisTrapCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AttackingCreatureComparer, false));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CNemesisTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNemesisTrapCard::BeforeResolution));
		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CNemesisTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsCreature() && pCard->IsColor(CManaPoolBase::Color::White) && ((CCreatureCard*)pCard)->IsAttacking())
			{
				bFound = true;
				break;
			}
		}
	}

	return bFound;
}

bool CNemesisTrapCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CCountedCardContainer pTokens;

	CCardCopyModifier pModifier1 = CCardCopyModifier(GetGame(), this, NULL, NULL, &pTokens, ZoneId::_Tokens);
	pModifier1.ApplyTo(pTarget);

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others, pController);
	pModifier2.ApplyTo(pTarget);

	CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Battlefield, true, MoveType::Others, pController);

	for (int i = 0; i < pTokens.GetSize(); ++i)
		pModifier3.ApplyTo(pTokens.GetAt(i));

	CContainerEffectModifier pModifier4 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier4.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSlingbowTrapCard::CSlingbowTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slingbow Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT,
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSlingbowTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSlingbowTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsCreature() && pCard->IsColor(CManaPoolBase::Color::Black))
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;

				if (pCreature->IsAttacking() && pCreature->GetCreatureKeyword()->Flying())
				{
					bFound = true;
					break;
				}
			}
		}
	}

	return bFound;
}

//____________________________________________________________________________
//
