#include "stdafx.h"
#include "CardLorwyn.h"

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

		DEFINE_CARD(CAEthersnipeCard);
		DEFINE_CARD(CAdderStaffBoggartCard);
		DEFINE_CARD(CAmoeboidChangelingCard);
		DEFINE_CARD(CAncientAmphitheaterCard);
		DEFINE_CARD(CArbiterOfKnollridgeCard);
		DEFINE_CARD(CAshlingsPrerogativeCard);
		DEFINE_CARD(CAshlingthePilgrimCard);
		DEFINE_CARD(CAuntiesHovelCard)
		DEFINE_CARD(CAustereCommandCard);
		DEFINE_CARD(CAvianChangelingCard);
		DEFINE_CARD(CAxegrinderGiantCard);
		DEFINE_CARD(CBattlewandOakCard);
		DEFINE_CARD(CBenthicoreCard);
		DEFINE_CARD(CBlackPoplarShamanCard);
		DEFINE_CARD(CBladesOfVelisVelCard);
		DEFINE_CARD(CBlindSpotGiantCard);
		DEFINE_CARD(CBoggartBirthRiteCard);
		DEFINE_CARD(CBoggartForagerCard);
		DEFINE_CARD(CBoggartHarbingerCard);
		DEFINE_CARD(CBoggartLoggersCard);
		DEFINE_CARD(CBoggartMobCard);
		DEFINE_CARD(CBoggartShenanigansCard);
		DEFINE_CARD(CBoggartSpriteChaserCard);
		DEFINE_CARD(CBogHoodlumsCard);
		DEFINE_CARD(CBogStriderAshCard);
		DEFINE_CARD(CBriarhornCard);
		DEFINE_CARD(CBrigidHeroofKinsbaileCard);
		DEFINE_CARD(CBrionStoutarmCard);
		DEFINE_CARD(CBrokenAmbitionsCard);
		DEFINE_CARD(CBurrentonForgeTenderCard);
		DEFINE_CARD(CCaterwaulingBoggartCard);
		DEFINE_CARD(CCennsHeirCard);
		DEFINE_CARD(CChangelingBerserkerCard);
		DEFINE_CARD(CChangelingHeroCard);
		DEFINE_CARD(CChangelingTitanCard);
		DEFINE_CARD(CCloudcrownOakCard);
		DEFINE_CARD(CCloudgoatRangerCard);
		DEFINE_CARD(CCloudthresherCard);
		DEFINE_CARD(CColfenorsUrnCard);
		DEFINE_CARD(CConsumingBonfireCard);
		DEFINE_CARD(CCribSwapCard);
		DEFINE_CARD(CCrushUnderfootCard);
		DEFINE_CARD(CCrypticCommandCard);
		DEFINE_CARD(CDauntlessDourbarkCard);
		DEFINE_CARD(CDeathrenderCard);
		DEFINE_CARD(CDeeptreadMerrowCard);
		DEFINE_CARD(CDolmenGateCard);
		DEFINE_CARD(CDorantheSiegeTowerCard);
		DEFINE_CARD(CDreadCard);
		DEFINE_CARD(CDreamspoilerWitchesCard);
		DEFINE_CARD(CDrownerOfSecretsCard);
		DEFINE_CARD(CEgoErasureCard);
		DEFINE_CARD(CElvishBranchbenderCard);
		DEFINE_CARD(CElvishEulogistCard);
		DEFINE_CARD(CElvishHandservantCard);
		DEFINE_CARD(CElvishHarbingerCard);
		DEFINE_CARD(CElvishPromenadeCard);
		DEFINE_CARD(CEpicProportionsCard);
		DEFINE_CARD(CEtherealWhiskergillCard);
		DEFINE_CARD(CExiledBoggartCard);
		DEFINE_CARD(CEyeblightsEndingCard);
		DEFINE_CARD(CEyesOfTheWisentCard);
		DEFINE_CARD(CFacevaulterCard);
		DEFINE_CARD(CFaerieHarbingerCard);
		DEFINE_CARD(CFaerieTauntingsCard);
		DEFINE_CARD(CFaerieTrickeryCard);
		DEFINE_CARD(CFallowsageCard);
		DEFINE_CARD(CFamiliarsRuseCard);
		DEFINE_CARD(CFathomTrawlCard);
		DEFINE_CARD(CFaultgrinderCard);
		DEFINE_CARD(CFinalRevelsCard);
		DEFINE_CARD(CFistfulOfForceCard);
		DEFINE_CARD(CFireBellyChangelingCard);
		DEFINE_CARD(CFlamekinBladewhirlCard);
		DEFINE_CARD(CFlamekinBrawlerCard);
		DEFINE_CARD(CFlamekinHarbingerCard);
		DEFINE_CARD(CFlamekinSpitfireCard);
		DEFINE_CARD(CFodderLaunchCard);
		DEFINE_CARD(CFootbottomFeastCard);
		DEFINE_CARD(CForcedFruitionCard);
		DEFINE_CARD(CGaddockTeegCard);
		DEFINE_CARD(CGalepowderMageCard);
		DEFINE_CARD(CGhostlyChangelingCard);
		DEFINE_CARD(CGiantHarbingerCard);
		DEFINE_CARD(CGiantsIreCard);
		DEFINE_CARD(CGiltLeafAmbushCard);
		DEFINE_CARD(CGiltLeafPalaceCard);
		DEFINE_CARD(CGiltLeafSeerCard);
		DEFINE_CARD(CGlarewielderCard);
		DEFINE_CARD(CGlenElendraPrankstersCard);
		DEFINE_CARD(CGlimmerdustNapCard);
		DEFINE_CARD(CGoatnapperCard);
		DEFINE_CARD(CGoldmeadowDodgerCard);
		DEFINE_CARD(CGoldmeadowHarrierCard);
		DEFINE_CARD(CGoldmeadowStalwartCard);
		DEFINE_CARD(CGuardianOfCloverdellCard);
		DEFINE_CARD(CGuileCard);
		DEFINE_CARD(CHarpoonSniperCard);
		DEFINE_CARD(CHealTheScarsCard);
		DEFINE_CARD(CHearthcageGiantCard);
		DEFINE_CARD(CHerbalPoulticeCard);
		DEFINE_CARD(CHillcomberGiantCard);
		DEFINE_CARD(CHoardersGreedCard);
		DEFINE_CARD(CHoofprintsoftheStagCard);
		DEFINE_CARD(CHordeofNotionsCard);
		DEFINE_CARD(CHornetHarasserCard);
		DEFINE_CARD(CHostilityCard);
		DEFINE_CARD(CHowltoothHollowCard);
		DEFINE_CARD(CHunterofEyeblightsCard);
		DEFINE_CARD(CHurlyBurlyCard);
		DEFINE_CARD(CImmaculateMagistrateCard);
		DEFINE_CARD(CImperiousPerfectCard);
		DEFINE_CARD(CIncandescentSoulstokeCard);
		DEFINE_CARD(CIncendiaryCommandCard);
		DEFINE_CARD(CInnerFlameIgniterCard);
		DEFINE_CARD(CIngotChewerCard);
		DEFINE_CARD(CInkfathomDiversCard);
		DEFINE_CARD(CInnerFlameAcolyteCard);
		DEFINE_CARD(CJaggedScarArchersCard);
		DEFINE_CARD(CJudgeOfCurrentsCard);
		DEFINE_CARD(CKinsbaileBalloonistCard);
		DEFINE_CARD(CKithkinDaggerdareCard);
		DEFINE_CARD(CKithkinGreatheartCard);
		DEFINE_CARD(CKithkinHarbingerCard);
		DEFINE_CARD(CKithkinHealerCard);
		//DEFINE_CARD(CKithkinMourncallerCard);
		DEFINE_CARD(CKnightOfMeadowgrainCard);
		DEFINE_CARD(CKnuckleboneWitchCard);
		DEFINE_CARD(CLaceWithMoongloveCard);
		DEFINE_CARD(CLairwatchGiantCard);
		DEFINE_CARD(CLammastideWeaveCard);
		DEFINE_CARD(CLashOutCard);
		DEFINE_CARD(CLowlandOafCard);
		DEFINE_CARD(CLysAlanaHuntmasterCard);
		DEFINE_CARD(CLysAlanaScarbladeCard);
		DEFINE_CARD(CMadAuntieCard);
		DEFINE_CARD(CMakeshiftMannequinCard);
		DEFINE_CARD(CMarshFlitterCard);
		DEFINE_CARD(CMaskedAdmirersCard);
		DEFINE_CARD(CMerrowCommerceCard);
		DEFINE_CARD(CMerrowHarbingerCard);
		DEFINE_CARD(CMerrowReejereyCard);
		DEFINE_CARD(CMilitiasPrideCard);
		DEFINE_CARD(CMirrorEntityCard);
		DEFINE_CARD(CMistbindCliqueCard);
		DEFINE_CARD(CMoongloveExtractCard);
		DEFINE_CARD(CMoongloveWinnowerCard);
		DEFINE_CARD(CMosswortBridgeCard);
		DEFINE_CARD(CMournwhelkCard);
		DEFINE_CARD(CMudbuttonTorchrunnerCard);
		DEFINE_CARD(CMulldrifterCard);
		DEFINE_CARD(CNamelessInversionCard);
		DEFINE_CARD(CNathOfTheGiltLeafCard);
		DEFINE_CARD(CNathsBuffoonCard);
		DEFINE_CARD(CNathsEliteCard);
		DEFINE_CARD(CNeckSnapCard);
		DEFINE_CARD(CNectarFaerieCard);
		DEFINE_CARD(CNeedleDropCard);
		DEFINE_CARD(CNightshadeStingerCard);
		DEFINE_CARD(CNovaChaserCard);
		DEFINE_CARD(COakenBrawlerCard);
		DEFINE_CARD(COakgnarlWarriorCard);
		DEFINE_CARD(CPaperfinRascalCard);
		DEFINE_CARD(CPeppersmokeCard);
		DEFINE_CARD(CPestermiteCard);
		DEFINE_CARD(CPloverKnightsCard);
		DEFINE_CARD(CPollenLullabyCard);
		DEFINE_CARD(CPrimalCommandCard);
		DEFINE_CARD(CProfaneCommandCard);
		DEFINE_CARD(CProtectiveBubbleCard);
		DEFINE_CARD(CProwessOfTheFairCard);
		DEFINE_CARD(CPurityCard);
		DEFINE_CARD(CQuillSlingerBoggartCard);
		DEFINE_CARD(CRootgrappleCard);
		DEFINE_CARD(CRunedStalactiteCard);
		DEFINE_CARD(CScarredVinebreederCard);
		DEFINE_CARD(CScatteringStrokeCard);
		DEFINE_CARD(CScionOfOonaCard);
		DEFINE_CARD(CSecludedGlenCard);
		DEFINE_CARD(CSentryOakCard);
		DEFINE_CARD(CSeedguideAshCard);
		DEFINE_CARD(CSentinelsOfGlenElendraCard);
		//DEFINE_CARD(CSentryOakCard);
		DEFINE_CARD(CShelldockIsleCard);
		DEFINE_CARD(CShieldsofVelisVelCard);
		DEFINE_CARD(CShriekmawCard);
		DEFINE_CARD(CSilvergillAdeptCard);
		DEFINE_CARD(CSilvergillDouserCard);
		DEFINE_CARD(CSkeletalChangelingCard);
		DEFINE_CARD(CSoaringHopeCard);
		DEFINE_CARD(CSoulbrightFlamekinCard);
		DEFINE_CARD(CSowerofTemptationCard);
		DEFINE_CARD(CSpellstutterSpriteCard);
		DEFINE_CARD(CSpiderwigBoggartCard);
		DEFINE_CARD(CSpinerockKnollCard);
		DEFINE_CARD(CSpringjackKnightCard);
		DEFINE_CARD(CSpringleafDrumCard);
		DEFINE_CARD(CSqueakingPieSneakCard);
		DEFINE_CARD(CStinkdrinkerDaredevilCard);
		DEFINE_CARD(CStonybrookAnglerCard);
		DEFINE_CARD(CStreambedAquitectsCard);
		DEFINE_CARD(CSummontheSchoolCard);
		DEFINE_CARD(CSunriseSovereignCard);
		DEFINE_CARD(CSurgeofThoughtweftCard);
		DEFINE_CARD(CSurgespannerCard);
		DEFINE_CARD(CSyggRiverGuideCard);
		DEFINE_CARD(CTarfireCard);
		DEFINE_CARD(CTarPitcherCard);
		DEFINE_CARD(CThievingSpriteCard);
		DEFINE_CARD(CThornOfAmethystCard);
		DEFINE_CARD(CThoughtweftTrioCard);
		DEFINE_CARD(CThorntoothWitchCard);
		DEFINE_CARD(CThoughtseizeCard);
		DEFINE_CARD(CThundercloudShamanCard);
		DEFINE_CARD(CThousandYearElixirCard);
		DEFINE_CARD(CTideshaperMysticCard);
		DEFINE_CARD(CTimberProtectorCard);
		DEFINE_CARD(CTreefolkHarbingerCard);
		DEFINE_CARD(CTriclopeanSightCard);
		DEFINE_CARD(CTurtleshellChangelingCard);
		DEFINE_CARD(CVeteranOfTheDepthsCard);
		DEFINE_CARD(CVigorCard);
		DEFINE_CARD(CVividCragCard);
		DEFINE_CARD(CVividCreekCard);
		DEFINE_CARD(CVividGroveCard);
		DEFINE_CARD(CVividMarshCard);
		DEFINE_CARD(CVividMeadowCard);
		DEFINE_CARD(CWanderersTwigCard);
		DEFINE_CARD(CWanderwineHubCard);
		DEFINE_CARD(CWanderwineProphetsCard);
		DEFINE_CARD(CWarrenPilferersCard)
		DEFINE_CARD(CWarrenScourgeElfCard)
		DEFINE_CARD(CWeedStrangleCard);
		DEFINE_CARD(CWellgabberApothecaryCard);
		DEFINE_CARD(CWhirlpoolWhelmCard);
		DEFINE_CARD(CWindbriskHeightsCard);
		DEFINE_CARD(CWingsOfVelisVelCard);
		DEFINE_CARD(CWispmareCard);
		DEFINE_CARD(CWizenedCennCard);
		DEFINE_CARD(CWoodlandChangelingCard);
		DEFINE_CARD(CWortBoggartAuntieCard);
		DEFINE_CARD(CWrensRunPackmasterCard);
		DEFINE_CARD(CWrensRunVanquisherCard);
		DEFINE_CARD(CWydwenTheBitingGaleCard);
		DEFINE_CARD(CZephyrNetCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CForcedFruitionCard::CForcedFruitionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Forced Fruition"), CardType::GlobalEnchantment, nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetDrawCount(7);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThoughtseizeCard::CThoughtseizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughtseize"), CardType::Sorcery, nID)

	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT, 
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	// Exclude land cards

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCloudgoatRangerCard::CCloudgoatRangerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cloudgoat Ranger"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+2), Life(+0), CreatureKeyword::Flying)

	, m_CardFilter(_T("a Kithkin"), _T("Kithkins"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	m_pPumpAbility->GetCost().AddTapCardCost(3, &m_CardFilter);//ability tap cost

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Kithkin Soldier A"), 2742, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAxegrinderGiantCard::CAxegrinderGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Axegrinder Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CBattlewandOakCard::CBattlewandOakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battlewand Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("a Treefolk"), _T("Treefolk"), new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBenthicoreCard::CBenthicoreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benthicore"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("6") BLUE_MANA_TEXT, Power(5), Life(5))

	, m_CardFilter(_T("a Merfolk"), _T("Merfolk"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Merfolk Wizard"), TOKEN_ID_BY_NAME, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetOtherCardModifiers().push_back(new CCardOrientationModifier(FALSE));

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);//ability tap cost

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlackPoplarShamanCard::CBlackPoplarShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Black Poplar Shaman"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoggartHarbingerCard::CBoggartHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boggart Harbinger"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoggartLoggersCard::CBoggartLoggersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Boggart Loggers"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Forestwalk)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CardTypeComparer(CardType::Forest, false)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBogStriderAshCard::CBogStriderAshCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bog-Strider Ash"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4),
		CreatureKeyword::Swampwalk)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Goblins")));

	cpAbility->SetResolutionCost(GREEN_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaterwaulingBoggartCard::CCaterwaulingBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caterwauling Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin) | CREATURE_TYPE(Elemental), false),	
			Power(+0), Life(+0),
			CreatureKeyword::CantBeBlockedBy1));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudcrownOakCard::CCloudcrownOakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cloudcrown Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CDeeptreadMerrowCard::CDeeptreadMerrowCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Deeptread Merrow"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1),
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CDolmenGateCard::CDolmenGateCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dolmen Gate"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetToAttackingOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrownerOfSecretsCard::CDrownerOfSecretsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drowner of Secrets"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("a Merfolk"), _T("Merfolk"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CElvishEulogistCard::CElvishEulogistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Eulogist"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	counted_ptr<CActivatedAbility<CChgLifeBySurveySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeBySurveySpell>>(this,
			_T("")));

	cpAbility->SetCardsMultiplier(1, &m_CardFilter, ZoneId::Graveyard);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishHandservantCard::CElvishHandservantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Handservant"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Giant"), _T("Giants"), new CreatureTypeComparer(CREATURE_TYPE(Giant), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishHarbingerCard::CElvishHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Harbinger"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	{
		typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetToZone(ZoneId::Library);

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

//____________________________________________________________________________
//
CEpicProportionsCard::CEpicProportionsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Epic Proportions"), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+5), Life(+5), CreatureKeyword::Trample)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CEtherealWhiskergillCard::CEtherealWhiskergillCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ethereal Whiskergill"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CEtherealWhiskergillCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CEtherealWhiskergillCard::CanAttack(BOOL bIncludeTricks)
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
CExiledBoggartCard::CExiledBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Exiled Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDiscardCount(1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFacevaulterCard::CFacevaulterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Facevaulter"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));
}

//____________________________________________________________________________
//
CFaerieHarbingerCard::CFaerieHarbingerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Harbinger"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Faerie"), _T("Faeries"), new CreatureTypeComparer(CREATURE_TYPE(Faerie), false))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFallowsageCard::CFallowsageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fallowsage"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFinalRevelsCard::CFinalRevelsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Final Revels"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+2),	// power delta
			Life(0)));	// life delta
		
		cpSpell->SetAbilityText(_T("All creatures get +2/+0 until end of turn. Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(0),	// power delta
			Life(-2)));	// life delta

		cpSpell->SetAbilityText(_T("All creatures get -0/-2 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlamekinBrawlerCard::CFlamekinBrawlerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flamekin Brawler"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		RED_MANA_TEXT, Power(0), Life(2),
		RED_MANA_TEXT, Power(+1), Life(0))
{
}

//____________________________________________________________________________
//
CFlamekinHarbingerCard::CFlamekinHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamekin Harbinger"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("an Elemental"), _T("Elementals"), new CreatureTypeComparer(CREATURE_TYPE(Elemental), false))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlamekinSpitfireCard::CFlamekinSpitfireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamekin Spitfire"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFootbottomFeastCard::CFootbottomFeastCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Footbottom Feast"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CFootbottomFeastCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

//	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT, 1));

		cpSpell->SetAbilityText(_T("Choose zero targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CFootbottomFeastCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CDrawCardModifier pmodifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pmodifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CGiantHarbingerCard::CGiantHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Harbinger"), CardType::Creature, CREATURE_TYPE2(Giant, Shaman), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(4))

	, m_CardFilter(_T("a Giant"), _T("Giants"), new CreatureTypeComparer(CREATURE_TYPE(Giant), false))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiltLeafSeerCard::CGiltLeafSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gilt-Leaf Seer"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			GREEN_MANA_TEXT, 2));

	cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoldmeadowDodgerCard::CGoldmeadowDodgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goldmeadow Dodger"), CardType::Creature, CREATURE_TYPE2(Kithkin, Rogue), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(new CreaturePowerComparer<std::less<int>>(4))
{
	GetCreatureKeyword()->AddUnblockable(FALSE,	&m_CardFilter);
}

//____________________________________________________________________________
//
CGoldmeadowHarrierCard::CGoldmeadowHarrierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goldmeadow Harrier"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
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
CGuardianOfCloverdellCard::CGuardianOfCloverdellCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian of Cloverdell"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))

	, m_CardFilter(_T("a Kithkin"), _T("Kithkin"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Kithkin Soldier A"), 2742, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				GREEN_MANA_TEXT,
				Life(+1), PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHarpoonSniperCard::CHarpoonSniperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harpoon Sniper"), CardType::Creature, CREATURE_TYPE2(Merfolk, Archer), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeBySurveySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeBySurveySpell>>(this,
			WHITE_MANA_TEXT,
			new AttackingBlockingCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false), PreventableType::Preventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHearthcageGiantCard::CHearthcageGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hearthcage Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))

	, m_CardFilter(_T("an Elemental"), _T("Elementals"), new CreatureTypeComparer(CREATURE_TYPE(Elemental), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Elemental Shaman"), TOKEN_ID_BY_NAME, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+3), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false));
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHerbalPoulticeCard::CHerbalPoulticeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Herbal Poultice"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("3"),
			new AnyCreatureComparer));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHillcomberGiantCard::CHillcomberGiantCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Hillcomber Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Scout), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CHornetHarasserCard::CHornetHarasserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hornet Harasser"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHurlyBurlyCard::CHurlyBurlyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hurly-Burly"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Life(-1),
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpSpell->SetAbilityText(_T("Hurly-Burly deals 1 damage to each creature without flying. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Life(-1),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				FALSE,PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Hurly-Burly deals 1 damage to each creature with flying. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CImperiousPerfectCard::CImperiousPerfectCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Imperious Perfect"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		//Pump other Elves
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Make Elf Warriors
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				GREEN_MANA_TEXT,
				_T("Elf Warrior C"), 2715,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInkfathomDiversCard::CInkfathomDiversCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Inkfathom Divers"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Islandwalk)
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJaggedScarArchersCard::CJaggedScarArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jagged-Scar Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Elf), false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
				_T(""),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
//		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJudgeOfCurrentsCard::CJudgeOfCurrentsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Judge of Currents"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Merfolk"), _T("Merfolk"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKinsbaileBalloonistCard::CKinsbaileBalloonistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kinsbaile Balloonist"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKithkinDaggerdareCard::CKithkinDaggerdareCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Daggerdare"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,	// No mana cost
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKithkinHarbingerCard::CKithkinHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Harbinger"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("a Kithkin"), _T("Kithkin"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKithkinHealerCard::CKithkinHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Healer"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
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
CLaceWithMoongloveCard::CLaceWithMoongloveCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Lace with Moonglove"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CLowlandOafCard::CLowlandOafCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lowland Oaf"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLowlandOafCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false)));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CLowlandOafCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CLysAlanaHuntmasterCard::CLysAlanaHuntmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lys Alana Huntmaster"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->SetCreateTokenOption(TRUE, _T("Elf Warrior C"), 2715, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMadAuntieCard::CMadAuntieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mad Auntie"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(1), Life(1)));

		cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerrowHarbingerCard::CMerrowHarbingerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Merrow Harbinger"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Islandwalk)

	, m_CardFilter(_T("a Merfolk"), _T("Merfolk"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoongloveExtractCard::CMoongloveExtractCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moonglove Extract"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoongloveWinnowerCard::CMoongloveWinnowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moonglove Winnower"), CardType::Creature, CREATURE_TYPE2(Elf, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CMudbuttonTorchrunnerCard::CMudbuttonTorchrunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mudbutton Torchrunner"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNathOfTheGiltLeafCard::CNathOfTheGiltLeafCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nath of the Gilt-Leaf"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetPickerIsTriggeredPlayer(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetCreateTokenOption(TRUE, _T("Elf Warrior C"), 2715, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNeckSnapCard::CNeckSnapCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Neck Snap"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingBlockingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard,	TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CNightshadeStingerCard::CNightshadeStingerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nightshade Stinger"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
COakgnarlWarriorCard::COakgnarlWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oakgnarl Warrior"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(7))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CPloverKnightsCard::CPloverKnightsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Plover Knights"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CProtectiveBubbleCard::CProtectiveBubbleCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Protective Bubble"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CScionOfOonaCard::CScionOfOonaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scion of Oona"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new AnyCreatureComparer);
	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeedguideAshCard::CSeedguideAshCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seedguide Ash"), CardType::Creature, CREATURE_TYPE2(Treefolk, Druid), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSentinelsOfGlenElendraCard::CSentinelsOfGlenElendraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sentinels of Glen Elendra"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CSoaringHopeCard::CSoaringHopeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Soaring Hope"), nID,
		_T("4") WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				WHITE_MANA_TEXT,
				ZoneId::Library, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
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
}

//____________________________________________________________________________
//
CSpiderwigBoggartCard::CSpiderwigBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiderwig Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpringleafDrumCard::CSpringleafDrumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Springleaf Drum"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStonybrookAnglerCard::CStonybrookAnglerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonybrook Angler"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CStreambedAquitectsCard::CStreambedAquitectsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Streambed Aquitects"), CardType::Creature, CREATURE_TYPE2(Merfolk, Scout), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+1),
				CreatureKeyword::Islandwalk, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->AddTapCost();

		cpAbility->AddCardTypeToSelection(CardType::Island | CardType::BasicLand, CardType::_All, TRUE, _T("Island"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunriseSovereignCard::CSunriseSovereignCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunrise Sovereign"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+2), Life(+2), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Giant), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSurgespannerCard::CSurgespannerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Surgespanner"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetResolutionCost(_T("1") BLUE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTarPitcherCard::CTarPitcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tar Pitcher"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThornOfAmethystCard::CThornOfAmethystCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thorn of Amethyst"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new NegateCardComparer(new AnyCreatureComparer),
			_T("1")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThorntoothWitchCard::CThorntoothWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thorntooth Witch"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(4))
	, m_CardFilter(_T("a Treefolk"), _T("Treefolk"), new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTideshaperMysticCard::CTideshaperMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tideshaper Mystic"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Plains"));
	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Swamp"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTreefolkHarbingerCard::CTreefolkHarbingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treefolk Harbinger"), CardType::Creature, CREATURE_TYPE2(Treefolk, Druid), nID,
		GREEN_MANA_TEXT, Power(0), Life(3))

	, m_CardFilter(_T("a Treefolk or a Forest"), _T("Treefolk or Forests"), new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false))
{
	m_CardFilter.AddChildFilter(CCardFilter::GetFilter(_T("Forests"))->Clone());

	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeteranOfTheDepthsCard::CVeteranOfTheDepthsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran of the Depths"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWanderersTwigCard::CWanderersTwigCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wanderer's Twig"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWellgabberApothecaryCard::CWellgabberApothecaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wellgabber Apothecary"), CardType::Creature, CREATURE_TYPE2(Merfolk, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Merfolk) | CREATURE_TYPE(Kithkin), false),
			FALSE,
			Life(PreventionType::PreventAllDamage),
			SourceColor::Null));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CWizenedCennCard::CWizenedCennCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wizened Cenn"), CardType::Creature, CREATURE_TYPE2(Kithkin, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWortBoggartAuntieCard::CWortBoggartAuntieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wort, Boggart Auntie"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWydwenTheBitingGaleCard::CWydwenTheBitingGaleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wydwen, the Biting Gale"), CardType::_LegendaryCreature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZephyrNetCard::CZephyrNetCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Zephyr Net"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Defender | CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CQuillSlingerBoggartCard::CQuillSlingerBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quill-Slinger Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
			_T("3") BLACK_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("a Kithkin"), _T("Kithkin"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThundercloudShamanCard::CThundercloudShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thundercloud Shaman"), CardType::Creature, CREATURE_TYPE2(Giant, Shaman), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))

	, m_CardFilter(_T("a Giant"), _T("Giants"), new CreatureTypeComparer(CREATURE_TYPE(Giant), false))
{
	m_CardFilter2.AddComparer(new AnyCreatureComparer);
	m_CardFilter2.AddComparer(new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false)));

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter2);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CThundercloudShamanCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CThundercloudShamanCard::BeforeResolution(CThundercloudShamanCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(
		-m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAEthersnipeCard::CAEthersnipeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Æthersnipe"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, FALSE));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAEthersnipeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEthersnipeCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAEthersnipeCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CAEthersnipeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBriarhornCard::CBriarhornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Briarhorn"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBriarhornCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBriarhornCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBriarhornCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CBriarhornCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CCloudthresherCard::CCloudthresherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cloudthresher"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloudthresherCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCloudthresherCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloudthresherCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CCloudthresherCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{

	CLifeModifier pmodifier1 = CLifeModifier(
			Life(-2), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::Preventable // preventable or not prevantable
		, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
		);

	pmodifier1.ApplyTo(GetController());
	pmodifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}
bool CCloudthresherCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CCloudthresherCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CFaultgrinderCard::CFaultgrinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faultgrinder"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("6") RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFaultgrinderCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFaultgrinderCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFaultgrinderCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CFaultgrinderCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CGlarewielderCard::CGlarewielderCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Glarewielder"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility,
									 CWhenSelfInplay, CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
		cpAbility->GetTargeting().SetSubjectCount(1, 2);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGlarewielderCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlarewielderCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGlarewielderCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CGlarewielderCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CIngotChewerCard::CIngotChewerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ingot Chewer"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
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
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CIngotChewerCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIngotChewerCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIngotChewerCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CIngotChewerCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CInnerFlameAcolyteCard::CInnerFlameAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Inner-Flame Acolyte"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CInnerFlameAcolyteCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInnerFlameAcolyteCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInnerFlameAcolyteCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CInnerFlameAcolyteCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
//
//"Kithkin Mourncaller\n{2G}\nCreature - Kithkin Scout\nLRW,U\nWhenever an attacking Kithkin or Elf is put into your graveyard from the battlefield, you may draw a card.\n2/2"
//It doesn't trigger.
//
//CKithkinMourncallerCard::CKithkinMourncallerCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Kithkin Mourncaller"), CardType::Creature, CREATURE_TYPE2(Kithkin, Scout), nID,
//		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
//{
//	typedef
//		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(
//		::CreateObject<TriggeredAbility>(this,
//			ZoneId::Battlefield, ZoneId::Graveyard));
//
//	cpAbility->GetTrigger().SetToControllerOnly(true);
//
//	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
//	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kithkin) | CREATURE_TYPE(Elf), false));
//
//	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CKnightOfMeadowgrainCard::CKnightOfMeadowgrainCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Knight of Meadowgrain"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CKnuckleboneWitchCard::CKnuckleboneWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knucklebone Witch"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMournwhelkCard::CMournwhelkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mournwhelk"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("6") BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDiscardCount(2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMournwhelkCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMournwhelkCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMournwhelkCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CMournwhelkCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CMulldrifterCard::CMulldrifterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mulldrifter"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMulldrifterCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMulldrifterCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMulldrifterCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CMulldrifterCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CShriekmawCard::CShriekmawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shriekmaw"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFear(FALSE);
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
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CShriekmawCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShriekmawCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShriekmawCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CShriekmawCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSyggRiverGuideCard::CSyggRiverGuideCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sygg, River Guide"), CardType::_LegendaryCreature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Islandwalk)
{
	counted_ptr<CActivatedAbility<CTargetGainKeywordSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetGainKeywordSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false)));

	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWispmareCard::CWispmareCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wispmare"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
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
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWispmareCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

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

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWispmareCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWispmareCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CWispmareCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CGlimmerdustNapCard::CGlimmerdustNapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glimmerdust Nap"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::NoUntapInUntapPhase));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAustereCommandCard::CAustereCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Austere Command"), CardType::Sorcery, nID)
{
	{
		//Choose two - Destroy all artifacts; destroy all enchantments.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy all artifacts; destroy all enchantments. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose two - Destroy all artifacts; destroy all creatures with converted mana cost 3 or less.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		cpSpell->GetGlobalCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Artifact, false)));

		cpSpell->SetAbilityText(_T("Destroy all artifacts; destroy all creatures with converted mana cost 3 or less. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose two - Destroy all artifacts; destroy all creatures with converted mana cost 4 or greater.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(3));

		cpSpell->GetGlobalCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Artifact, false)));

		cpSpell->SetAbilityText(_T("Destroy all artifacts; destroy all creatures with converted mana cost 4 or greater. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose two - Destroy all enchantments; destroy all creatures with converted mana cost 3 or less.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		cpSpell->GetGlobalCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::_Enchantment, false)));

		cpSpell->SetAbilityText(_T("Destroy all enchantments; destroy all creatures with converted mana cost 3 or less. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose two - Destroy all enchantments; destroy all creatures with converted mana cost 4 or greater.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(3));

		cpSpell->GetGlobalCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::_Enchantment, false)));

		cpSpell->SetAbilityText(_T("Destroy all enchantments; destroy all creatures with converted mana cost 4 or greater. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose two - Destroy all creatures with converted mana cost 3 or less; destroy all creatures with converted mana cost 4 or greater.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy all creatures with converted mana cost 3 or less; destroy all creatures with converted mana cost 4 or greater. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVividCragCard::CVividCragCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vivid Crag"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	}

//_______________________________________________________________________________________
//
CVividCreekCard::CVividCreekCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vivid Creek"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	}

//_______________________________________________________________________________________
//
CVividGroveCard::CVividGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vivid Grove"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	}

//_______________________________________________________________________________________
//
CVividMarshCard::CVividMarshCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vivid Marsh"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	}

//_______________________________________________________________________________________
//
CVividMeadowCard::CVividMeadowCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vivid Meadow"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	}

//_________________________________________________________________________________
//
CHoofprintsoftheStagCard::CHoofprintsoftheStagCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Hoofprints of the Stag"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Elemental))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(HOOFPRINT_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this, 
				_T("2") WHITE_MANA_TEXT,
				_T("Elemental M"), 2834,
				1));

		cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(HOOFPRINT_COUNTER), -4);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSummontheSchoolCard::CSummontheSchoolCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Summon the School"), CardType::Sorcery, nID, CREATURE_TYPE(Merfolk))

	, m_CardFilter(_T("a Merfolk"), _T("Merfolks"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT,
				_T("Merfolk Wizard"), TOKEN_ID_BY_NAME,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();		
		cpAbility->GetCost().AddTapCardCost(4, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerrowCommerceCard::CMerrowCommerceCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Merrow Commerce"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Merfolk))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	//cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThievingSpriteCard::CThievingSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thieving Sprite"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Faerie"), _T("Faeries"), new CreatureTypeComparer(CREATURE_TYPE(Faerie), FALSE))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->SetDiscardCount(2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetDiscardMoveType(MoveType::Others);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThievingSpriteCard::BeforeResolution));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Graveyard));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, FALSE));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThievingSpriteCard::SetTriggerContext1));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::_Tokens);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, FALSE));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Discard);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThievingSpriteCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThievingSpriteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_nDiscardCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CThievingSpriteCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

bool CThievingSpriteCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;

	for (int i = 0; i < pToZone->GetSize(); ++i)
	{
		if ((GetCardType() & CardType::Token).Any())
			continue;
		++nCount;
	}

	return ((pFromZone->GetSize() == 0 || nCount == m_CardFilter.CountIncluded(pInplay->GetCardContainer()))
			&& GetCardKeyword()->HasFlash() == TRUE);
}

//____________________________________________________________________________
//
CNovaChaserCard::CNovaChaserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nova Chaser"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(10), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CThoughtweftTrioCard::CThoughtweftTrioCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thoughtweft Trio"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
	SetMaxBlockingCount(SpecialNumber::Any);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kithkin), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CBoggartMobCard::CBoggartMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boggart Mob"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(5), Life(5))

	, m_GoblinCreatureCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Goblin), true))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_GoblinCreatureCardFilter);

		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin Rogue"), TOKEN_ID_BY_NAME, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CWrensRunPackmasterCard::CWrensRunPackmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wren's Run Packmaster"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());	cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Wolf), false),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") GREEN_MANA_TEXT,
				_T("Wolf D"), 2840,
				1));		

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CBrionStoutarmCard::CBrionStoutarmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brion Stoutarm"), CardType::_LegendaryCreature, CREATURE_TYPE2(Warrior, Giant), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		counted_ptr<CActivatedAbility<CTargetChgLifeSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell2>>(this,
				RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				&m_CardFilter,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCennsHeirCard::CCennsHeirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cenn's Heir"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Kithkin"), _T("Kithkins"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	m_CardFilter.AddComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.SetFilterName(_T("another attacking Kithkin"), _T("other attacking Kithkins"));

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCennsHeirCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCennsHeirCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
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
CFathomTrawlCard::CFathomTrawlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fathom Trawl"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFathomTrawlCard::OnResolutionCompleted))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

	cpSpell->SetRevealCardsToOthers(TRUE, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CFathomTrawlCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=0;
	int stop=0;
	for (int i = 0; i < pLib->GetSize(); i++)

	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
		
		if (ppCard->GetCardType().IsLand() && (stop<3))
		{
			++reveal;			//one more card to reveal
		}
		else
		{
			++reveal;			//one more card to reveal
			++stop;				//to stop the reveal count
		}

		if ((stop >= 3))
			i=pLib->GetSize();	//stop the loop
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("non-lands")), // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.SetReorderInformation(
		true, 
		ZoneId::Library, 
		CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		CardPlacement::Bottom);
	pmodifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CAuntiesHovelCard::CAuntiesHovelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Auntie's Hovel"), nID, CardType::NonbasicLand)

	, m_CardFilter(_T("a Goblin card"), _T("Goblin cards"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrypticCommandCard::CCrypticCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cryptic Command"), CardType::Instant, nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CCrypticCommandCard::OnResolutionCompleted1))
{
	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false))));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityName(_T("Counter target spell and return target permanent to its owner's hand. Casts"));
		cpSpell->SetAbilityText(_T("Counter target spell and return target permanent to its owner's hand. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// for when counters can target "can't be countered" spells
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardKeywordComparer(CardKeyword::CantBeCountered, false)));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);		// mustn't be necessary
		cpSpell->SetToZoneIfFailed(ZoneId::_Tokens);
		cpSpell->SetAbilityName(_T("Counter target spell and return target permanent to its owner's hand. Casts"));
		cpSpell->SetAbilityText(_T("Counter target spell and return target permanent to its owner's hand. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false))));

		cpSpell->SetAbilityName(_T("Counter target spell and tap all creatures your opponents control. Casts"));
		cpSpell->SetAbilityText(_T("Counter target spell and tap all creatures your opponents control. Casts"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false))));

		cpSpell->SetAbilityName(_T("Counter target spell and draw a card. Casts"));
		cpSpell->SetAbilityText(_T("Counter target spell and draw a card. Casts"));
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Return target permanent to its owner's hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Return target permanent to its owner's hand and tap all creatures your opponents control. Casts"));
		cpSpell->SetAbilityText(_T("Return target permanent to its owner's hand and tap all creatures your opponents control. Casts"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Return target permanent to its owner's hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Return target permanent to its owner's hand and draw a card. Casts"));
		cpSpell->SetAbilityText(_T("Return target permanent to its owner's hand and draw a card. Casts"));
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, 1));

		cpSpell->SetAbilityName(_T("Draw a card and tap all creatures your opponents control. Casts"));
		cpSpell->SetAbilityText(_T("Draw a card and tap all creatures your opponents control. Casts"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

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

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetSkipStack(TRUE);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));


		AddAbility(cpAbility.GetPointer());
	}
}

void CCrypticCommandCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opponent =  m_pGame->GetNextPlayer(GetController());
	
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(1)));

	pModifier.ApplyTo(opponent);
}

//____________________________________________________________________________
//
CBoggartSpriteChaserCard::CBoggartSpriteChaserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boggart Sprite-Chaser"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}


//____________________________________________________________________________
//
CKithkinGreatheartCard::CKithkinGreatheartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kithkin Greatheart"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurrentonForgeTenderCard::CBurrentonForgeTenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burrenton Forge-Tender"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				_T(""),
				Life(PreventionType::PreventNextDamage),
				SourceColor::RedSource, TRUE));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMistbindCliqueCard::CMistbindCliqueCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mistbind Clique"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(4))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMistbindCliqueCard::OnResolutionCompleted1))
{	
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
	{
		typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Exile));

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer);

		/*CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);*/

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetReorder(true, ZoneId::Graveyard);
		cpAbility->SetRevealCount(0);

		cpAbility->SetAbilityName(_T("Tap all lands target player controls"));
		cpAbility->SetAbilityText(_T("Tap all lands target player controls"));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMistbindCliqueCard::SetTriggerContext));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Exile));

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer);		

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMistbindCliqueCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetCardKeyword()->CantBeCountered() == TRUE);
}

void CMistbindCliqueCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* opponent = pAbilityAction->GetAssociatedPlayer();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(1)));

	pModifier.ApplyTo(opponent);
}

//___________________________________________________________________________________
//
CAdderStaffBoggartCard::CAdderStaffBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Adder-Staff Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAdderStaffBoggartCard::OnResolutionCompleted1))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						CWhenSelfInplay::EventCallback,
						&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CAdderStaffBoggartCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CCardCounterModifier cmodifier = CCardCounterModifier(_T("+1/+1"),+1);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CBrokenAmbitionsCard::CBrokenAmbitionsCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Broken Ambitions"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBrokenAmbitionsCard::OnResolutionCompleted1))
{
	m_pCounterSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);
	m_pCounterSpell->SetExtraActionValueVector();
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->SetExtraCostToDenialCost();
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
}

void CBrokenAmbitionsCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CPlayer* spell_controller=pAbilityAction->GetAssociatedCard()->GetController();

	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	CZone* plib_spl = spell_controller->GetZoneById(ZoneId::Library);

	int opp_score = 0;
	int con_score = 0;
	int count = plib_spl->GetSize();

	if (count>3) count=4;

	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	CZoneModifier pmodifier1 = CZoneModifier(GetGame(), ZoneId::Library, count, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier1.AddSelection(MinimumValue(count), MaximumValue(count), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);

	if (con_score>opp_score) pmodifier1.ApplyTo(spell_controller);
}

//____________________________________________________________________________
//
CBogHoodlumsCard::CBogHoodlumsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Hoodlums"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(1))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBogHoodlumsCard::OnResolutionCompleted1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CBogHoodlumsCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CCardCounterModifier cmodifier = CCardCounterModifier(_T("+1/+1"),+1);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CNathsEliteCard::CNathsEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nath's Elite"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(2))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNathsEliteCard::OnResolutionCompleted1))
{
	GetCreatureKeyword()->AddLure(FALSE);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CNathsEliteCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CCardCounterModifier cmodifier = CCardCounterModifier(_T("+1/+1"),+1);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(this);
}

//____________________________________________________________________________
//
COakenBrawlerCard::COakenBrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oaken Brawler"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&COakenBrawlerCard::OnResolutionCompleted1))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						CWhenSelfInplay::EventCallback,
						&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void COakenBrawlerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CCardCounterModifier cmodifier = CCardCounterModifier(_T("+1/+1"),+1);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CPaperfinRascalCard::CPaperfinRascalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paperfin Rascal"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPaperfinRascalCard::OnResolutionCompleted1))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						CWhenSelfInplay::EventCallback,
						&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CPaperfinRascalCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CCardCounterModifier cmodifier = CCardCounterModifier(_T("+1/+1"),+1);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CGaddockTeegCard::CGaddockTeegCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gaddock Teeg"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kithkin, Advisor), nID,
		WHITE_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter1(_T("card with {X} in mana cost"), _T("cards with {X} in their mana cost"), new CardExtraCostComparer())
	, m_CardFilter2(_T("card with converted mana cost 4 or greater"), _T("cards with converted mana cost 4 or greater"), 
		new ConvertedManaCostComparer<std::greater<int>>(3))
	, m_CardFilter3(_T("special card"), _T("special cards"), new CardNameComparer(_T("Advice from the Fae")))
{
	m_CardFilter1.AddComparer(new NegateCardComparer(new AnyCreatureComparer()));
	m_CardFilter2.AddComparer(new NegateCardComparer(new AnyCreatureComparer()));
	m_CardFilter3.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Beseech the Queen"))));   // Should be removed when hybrid mana cost is implemented
	m_CardFilter3.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Flame Javelin"))));
	m_CardFilter3.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Spectral Procession"))));
	m_CardFilter3.AddChildFilter(new CCardFilter(new CardNameComparer(_T("Tower Above"))));

	{		
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)&m_CardFilter1));

		AddAbility(cpAbility.GetPointer());
	}
	{		
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)&m_CardFilter2));

		AddAbility(cpAbility.GetPointer());
	}
	{		
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)&m_CardFilter3));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodlandChangelingCard::CWoodlandChangelingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodland Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CIncandescentSoulstokeCard::CIncandescentSoulstokeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Incandescent Soulstoke"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIncandescentSoulstokeCard::OnCardSelected))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncandescentSoulstokeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIncandescentSoulstokeCard::BeforeResolution(CAbilityAction* pAction)
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

			if (pCard->GetCardType().IsCreature() &&
				(pCard->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)pCard)->GetCreatureType().HasType(SingleCreatureType::Elemental)))
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

void CIncandescentSoulstokeCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything on the battlefield"), pSelectionPlayer->GetPlayerName());
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
				CCreatureCard* pCard = (CCreatureCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
				pModifier2.ApplyTo(pCard);

				CCountedCardContainer pSubjects;
				if (pCard->IsInplay())
					pSubjects.AddCard(pCard, CardPlacement::Top);

				CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
				pModifier3.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CAvianChangelingCard::CAvianChangelingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avian Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CChangelingBerserkerCard::CChangelingBerserkerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Changeling Berserker"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(3))
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CChangelingHeroCard::CChangelingHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Changeling Hero"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("4") WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddChangeling(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CChangelingTitanCard::CChangelingTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Changeling Titan"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("4") GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CFireBellyChangelingCard::CFireBellyChangelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Fire-Belly Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	m_pPumpAbility->SetMaxTurnUsageCount(2);

	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CGhostlyChangelingCard::CGhostlyChangelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ghostly Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CSkeletalChangelingCard::CSkeletalChangelingCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skeletal Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CTimberProtectorCard::CTimberProtectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timber Protector"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(6))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));
		cpAbility->GetEnchantmentCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Forest, false)));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAshlingthePilgrimCard::CAshlingthePilgrimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashling the Pilgrim"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CAshlingthePilgrimCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") RED_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

void CAshlingthePilgrimCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* player = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(player);
	CZone* pBattle = player->GetZoneById(ZoneId::Battlefield);
	CZone* oBattle = opponent->GetZoneById(ZoneId::Battlefield);
	
	if (pAbilityAction->GetAbility()->GetTurnResolveCount() == 3)
	{
		int counters= GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
		CLifeModifier pPlayerModifier = CLifeModifier(Life(-counters), this, PreventableType::Preventable,
													  DamageType::AbilityDamage | DamageType::NonCombatDamage);
		CCardCounterModifier nullify = CCardCounterModifier(_T("+1/+1"), 0, true);

		nullify.ApplyTo((CCard*)this);

		for (int i = 0; i < pBattle->GetSize(); ++i)
		{
			CCard* pCard = pBattle->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{ 
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
			    pPlayerModifier.ApplyTo(pCreature);
			}
		}

		for (int i = 0; i < oBattle->GetSize(); ++i)
		{
			CCard* pCard = oBattle->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{ 
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
			    pPlayerModifier.ApplyTo(pCreature);
			}
		}
		pPlayerModifier.ApplyTo(player);  pPlayerModifier.ApplyTo(opponent); 
	}
}

//____________________________________________________________________________
//
CSowerofTemptationCard::CSowerofTemptationCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sower of Temptation"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
//		typedef
//			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
//									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 		

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(), (CCard*)this));		
		cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(),(CCard*)this));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSowerofTemptationCard::BeforeResolution1));

//		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
//		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
//		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

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

//		cpAbility->GetMoveCardModifier().LinkCardModifier(new CGainControlModifier(GetGame(),(CCard*)this, true));
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
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSowerofTemptationCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	return (this->GetZoneId() == ZoneId::Battlefield);
}

//____________________________________________________________________________
//
CFamiliarsRuseCard::CFamiliarsRuseCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Familiar's Ruse"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CEyeblightsEndingCard::CEyeblightsEndingCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Eyeblight's Ending"), CardType::Instant, nID, CREATURE_TYPE(Elf))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWrensRunVanquisherCard::CWrensRunVanquisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wren's Run Vanquisher"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(_T("an Elf card"), _T("Elf cards"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	this->GetSpells().GetAt(0)->GetCost().AddRevealCardCost(1,  &m_CardFilter);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CCribSwapCard::CCribSwapCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Crib Swap"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))
{
	GetCardKeyword()->AddChangeling(FALSE);

	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Shapeshifter"), 2858, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrigidHeroofKinsbaileCard::CBrigidHeroofKinsbaileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brigid, Hero of Kinsbaile"), CardType::_LegendaryCreature, CREATURE_TYPE2(Kithkin, Archer), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(_T("an attacking or blocking creature"), _T("attacking or blocking creatures"), new AttackingBlockingCreatureComparer)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
			_T("")));

	CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	CZoneCreatureModifier* pModifier_Mass = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier));

	cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pModifier_Mass);
	cpAbility->AddTapCost();
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShieldsofVelisVelCard::CShieldsofVelisVelCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Shields of Velis Vel"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))
{
	GetCardKeyword()->AddChangeling(FALSE);

	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT));

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier(CardKeyword::Changeling, true);
	CLifeModifier* pModifier1 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1->LinkCardModifier(pModifier2);

	CZoneCreatureModifier* pModifier_Mass = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier1));

	cpSpell->SetAbilityText(_T("Creatures target player controls get +0/+1 and gain all creature types until end of turn. Casts"));
	cpSpell->GetTargetModifier().CPlayerModifiers::Add(pModifier_Mass);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSurgeofThoughtweftCard::CSurgeofThoughtweftCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Surge of Thoughtweft"), CardType::Instant, nID, CREATURE_TYPE(Kithkin))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSurgeofThoughtweftCard::OnResolutionCompleted))
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSurgeofThoughtweftCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CMerrowReejereyCard::CMerrowReejereyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merrow Reejerey"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMerrowReejereyCard::OnTargetZoneSelected))
	, m_CardFilter(_T("a Merfolk card"), _T("Merfolk cards"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
                                // This Trigger will activate the choice box

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMerrowReejereyCard::BeforeResolution));		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		//cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(2);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		//cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
			
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMerrowReejereyCard::BeforeResolution(CMerrowReejereyCard::TriggeredAbility::TriggeredActionType* pAction)
{
	std::vector<SelectionEntry> entries;

	if (pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize()>0)
	{
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Untap target permanent"));

		entries.push_back(selectionEntry);
		}
	}
	if (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetSize()>0 )
	{
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("tap target permanent"));

		entries.push_back(selectionEntry);
		}
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return false;
}

void CMerrowReejereyCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);        // With this modifier we activate SpecialTrigger for certain card (this) with certain index (1)
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 2);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

// old code. Doesn't allow tap or untap
	/*{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);		

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}*/
//____________________________________________________________________________
//
CPollenLullabyCard::CPollenLullabyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pollen Lullaby"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CPollenLullabyCard::OnResolutionCompleted))
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPollenLullabyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	CPlayerEffectModifier cmodifier = CPlayerEffectModifier(PlayerEffectType::CreaturesDontUntapNextCont);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier.ApplyTo(opponent);
}

//____________________________________________________________________________
//
CSilvergillDouserCard::CSilvergillDouserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silvergill Douser"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CSilvergillDouserCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CSilvergillDouserCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Merfolk) | CREATURE_TYPE(Faerie), false));

	int nDomainCount = -(m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer()));

	CPowerModifier pModifier = CPowerModifier(Power(nDomainCount));

	if (bResult) pModifier.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
}

//____________________________________________________________________________
//
CWhirlpoolWhelmCard::CWhirlpoolWhelmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whirlpool Whelm"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CWhirlpoolWhelmCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, TRUE, MoveType::Others));	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CWhirlpoolWhelmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE);
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE);
		cmodifier2.SetToTop(TRUE);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier2.ApplyTo(pAbilityAction->GetAssociatedCard());
		else cmodifier1.ApplyTo(pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CImmaculateMagistrateCard::CImmaculateMagistrateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Immaculate Magistrate"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CImmaculateMagistrateCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CImmaculateMagistrateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);	

	int nDomainCount = (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()));

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"),nDomainCount);

	if (bResult) pModifier.ApplyTo(pAbilityAction->GetAssociatedCard());
}

//____________________________________________________________________________
//
CFlamekinBladewhirlCard::CFlamekinBladewhirlCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamekin Bladewhirl"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		RED_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("an Elemental card"), _T("Elemental cards"), new CreatureTypeComparer(CREATURE_TYPE(Elemental), false))
{
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	this->GetSpells().GetAt(0)->GetCost().AddRevealCardCost(1,  &m_CardFilter);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CGoldmeadowStalwartCard::CGoldmeadowStalwartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goldmeadow Stalwart"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		WHITE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Kithkin card"), _T("Kithkin cards"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	this->GetSpells().GetAt(0)->GetCost().AddRevealCardCost(1,  &m_CardFilter);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CSilvergillAdeptCard::CSilvergillAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silvergill Adept"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("an Merfolk card"), _T("Merfolk cards"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	this->GetSpells().GetAt(0)->GetCost().AddRevealCardCost(1,  &m_CardFilter);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
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
CSqueakingPieSneakCard::CSqueakingPieSneakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Squeaking Pie Sneak"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Goblin card"), _T("Goblin cards"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	GetCreatureKeyword()->AddFear(FALSE);
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	this->GetSpells().GetAt(0)->GetCost().AddRevealCardCost(1,  &m_CardFilter);

	{
		//hybrid mana cost
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CAncientAmphitheaterCard::CAncientAmphitheaterCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ancient Amphitheater"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Giant card"), _T("Giant cards"), new CreatureTypeComparer(CREATURE_TYPE(Giant), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGiltLeafPalaceCard::CGiltLeafPalaceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gilt-Leaf Palace"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("an Elf card"), _T("Elf cards"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSecludedGlenCard::CSecludedGlenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Secluded Glen"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Faerie card"), _T("Faerie cards"), new CreatureTypeComparer(CREATURE_TYPE(Faerie), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWanderwineHubCard::CWanderwineHubCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wanderwine Hub"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Merfolk card"), _T("Merfolk cards"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpellstutterSpriteCard::CSpellstutterSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spellstutter Sprite"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);	

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionCost(_T(""));
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Stack);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new CardKeywordComparer(CardKeyword::CantBeCountered, false)));		

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
														&CSpellstutterSpriteCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpellstutterSpriteCard::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility);
	}
}
bool CSpellstutterSpriteCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));
	
	int nDomainCount =(m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer()) + 2);
	m_pTriggeredAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(nDomainCount));
	
	return true;
}
bool CSpellstutterSpriteCard::BeforeResolution(CSpellstutterSpriteCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())+1);
	int n = pAction->GetAssociatedCard()->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	return (nDomainCount > n);
}
//____________________________________________________________________________
//
CRunedStalactiteCard::CRunedStalactiteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Runed Stalactite"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Changeling);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmoeboidChangelingCard::CAmoeboidChangelingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amoeboid Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Changeling);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Changeling);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlindSpotGiantCard::CBlindSpotGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blind-Spot Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(3))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false));

	{
		//Can't attack unless....
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBlindSpotGiantCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Can't block unless...
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBlindSpotGiantCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CBlindSpotGiantCard::CanAttack(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

BOOL CBlindSpotGiantCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CDauntlessDourbarkCard::CDauntlessDourbarkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauntless Dourbark"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0))
{	
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));
		//cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetConditionValue(2);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Dauntless Dourbark's power and toughness are each equal to the number of Forests you control...
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		//cpAbility->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//...plus the number of Treefolk you control.
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false)));

		cpAbility->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLysAlanaScarbladeCard::CLysAlanaScarbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lys Alana Scarblade"), CardType::Creature, CREATURE_TYPE2(Elf, Assassin), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLysAlanaScarbladeCard::OnResolutionCompleted))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-0), Life(-0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CLysAlanaScarbladeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int nDomainCount = -(m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer()));

	CPowerModifier pModifier1 = CPowerModifier(Power(nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(nDomainCount), this, PreventableType::NotPreventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	if (bResult)
	{
		pModifier1.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
		pModifier2.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CMarshFlitterCard::CMarshFlitterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Marsh Flitter"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin Rogue"), TOKEN_ID_BY_NAME, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));
		
		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(3));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetReplacement(TRUE);
		pPowerModifier->SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pPowerModifier);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(3));
		pLifeModifier->SetPreventable(PreventableType::NotPreventable);
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetReplacement(TRUE);
		pLifeModifier->SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pLifeModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScarredVinebreederCard::CScarredVinebreederCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Scarred Vinebreeder"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("2") BLACK_MANA_TEXT, Power(+3), Life(+3), CreatureKeyword::Null)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	m_pPumpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
//"Sentry Oak\n{4W}\nCreature - Treefolk Warrior\nLRW,U\nDefender\rAt the beginning of combat on your turn, you may clash with an opponent. If you win, Sentry Oak gets +2/+0 and loses defender until end of turn.\n3/5"
//When there's no attack-able creature with it, the BeginningOfCombatStep/Combat phase becomes skipped(!) and it doesn't trigger. But if there's an attack-able creature with it, it works as it should. :(
//
//CSentryOakCard::CSentryOakCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Sentry Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
//		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))
//
//	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
//			&CSentryOakCard::OnResolutionCompleted1))
//{
//	GetCreatureKeyword()->AddDefender(FALSE);
//	
//	{
//		typedef 
//			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
//		
//		counted_ptr<TriggeredAbility> cpAbility(
//			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
//		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
//		
//		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//void CSentryOakCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
//{
//	CPlayer* controller=GetController();
//	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
//	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
//	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
//	int opp_score = 0;
//	int con_score = 0;
//	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
//		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
//	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
//		CZoneModifier::RoleType::PrimaryPlayer, // select by 
//		CZoneModifier::RoleType::AllPlayers, // reveal to
//		NULL, // what cards
//		ZoneId::Library, // if selected, move cards to
//		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
//		CardPlacement::Bottom, // put selected cards on 
//		MoveType::Others, // move type
//		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
//	CPowerModifier cmodifier = CPowerModifier(Power(+2), TRUE);
//	CCreatureKeywordModifier cmodifier2 = CCreatureKeywordModifier();
//	cmodifier2.GetModifier().SetToRemove(CreatureKeyword::Defender);
//	cmodifier2.GetModifier().SetOneTurnOnly(TRUE);
//
//	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
//	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
//
//	pmodifier.ApplyTo(controller);
//	pmodifier.ApplyTo(opponent);
//	if (con_score>opp_score) cmodifier.ApplyTo(this);
//	if (con_score>opp_score) cmodifier2.ApplyTo(this);
//}
//
////____________________________________________________________________________
////
CBoggartShenanigansCard::CBoggartShenanigansCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Boggart Shenanigans"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Goblin))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CProwessOfTheFairCard::CProwessOfTheFairCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Prowess of the Fair"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Elf))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Elf Warrior C"), 2715, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBladesOfVelisVelCard::CBladesOfVelisVelCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Blades of Velis Vel"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))
{
	GetCardKeyword()->AddChangeling(FALSE);
	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				Power(+2), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Changeling);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEgoErasureCard::CEgoErasureCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Ego Erasure"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))

	, m_CardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer)
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(0), PreventableType::NotPreventable));

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier();
		pModifier2->GetModifier().SetToRemove(CardKeyword::Changeling);
		pModifier2->GetModifier().SetOneTurnOnly(TRUE);
		CPowerModifier* pModifier = new CPowerModifier(Power(-2), TRUE);
		pModifier->LinkCardModifier(pModifier2);
		CZoneCreatureModifier* pModifier_Mass = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier));

		cpSpell->SetAbilityText(_T("Creatures target player controls get -2/-0 and lose all creature types until end of turn. Casts"));
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier_Mass);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNamelessInversionCard::CNamelessInversionCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Nameless Inversion"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))
{
	GetCardKeyword()->AddChangeling(FALSE);
	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				Power(+3), Life(-3), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Changeling);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPeppersmokeCard::CPeppersmokeCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Peppersmoke"), CardType::Instant, nID, CREATURE_TYPE(Faerie))

//	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
	//		   &CPeppersmokeCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPeppersmokeCard::BeforeResolution));

	//cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	AddSpell(cpSpell.GetPointer());	
}
bool CPeppersmokeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(GetController());	

	return true;
}
/*void CPeppersmokeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(GetController());	
}*/

//____________________________________________________________________________
//
CRootgrappleCard::CRootgrappleCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Rootgrapple"), CardType::Instant, nID, CREATURE_TYPE(Treefolk))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CRootgrappleCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("4") GREEN_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CRootgrappleCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0 && bResult) pModifier.ApplyTo(GetController());	
}

//____________________________________________________________________________
//
CTarfireCard::CTarfireCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Tarfire"), CardType::Instant, nID, CREATURE_TYPE(Goblin))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWingsOfVelisVelCard::CWingsOfVelisVelCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Wings of Velis Vel"), CardType::Instant, nID, CREATURE_TYPE(Shapeshifter))
{
	GetCardKeyword()->AddChangeling(FALSE);
	
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				Power(0), Life(0), 
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Changeling);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(4));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetReplacement(TRUE);
		pPowerModifier->SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(4));
		pLifeModifier->SetPreventable(PreventableType::NotPreventable);
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetReplacement(TRUE);
		pLifeModifier->SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBoggartBirthRiteCard::CBoggartBirthRiteCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Boggart Birth Rite"), CardType::Sorcery, nID, CREATURE_TYPE(Goblin))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CConsumingBonfireCard::CConsumingBonfireCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Consuming Bonfire"), CardType::Sorcery, nID, CREATURE_TYPE(Elemental))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-4), PreventableType::Preventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), false));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false),
				FALSE,
				Life(-7), PreventableType::Preventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CElvishPromenadeCard::CElvishPromenadeCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Elvish Promenade"), CardType::Sorcery, nID, CREATURE_TYPE(Elf))
{
	counted_ptr<CTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Elf), false),
			FALSE, FALSE,
			_T("Elf Warrior C"), 2715, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGiantsIreCard::CGiantsIreCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Giant's Ire"), CardType::Sorcery, nID, CREATURE_TYPE(Giant))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CGiantsIreCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			FALSE_CARD_COMPARER,
			TRUE,
			Life(-4), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGiantsIreCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0 && bResult) pModifier.ApplyTo(GetController());	
}

//____________________________________________________________________________
//
CWanderwineProphetsCard::CWanderwineProphetsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wanderwine Prophets"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))		

	, m_CardFilter(_T("a Merfolk"), _T("Merfolks"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetPlayerEffect(PlayerEffectType::TimeWalk, FALSE, 1);
		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Merfolk), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());	cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CFodderLaunchCard::CFodderLaunchCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Fodder Launch"), CardType::Sorcery, nID, CREATURE_TYPE(Goblin))

	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFodderLaunchCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			Power(-5), Life(-5), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	AddSpell(cpSpell.GetPointer());
}

void CFodderLaunchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CWarrenPilferersCard::CWarrenPilferersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warren Pilferers"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CWarrenPilferersCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CWarrenPilferersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier;
	pModifier.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier.GetModifier().SetOneTurnOnly(TRUE);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	
	if (m_CardFilter_temp.IsCardIncluded(target)) pModifier.ApplyTo((CCreatureCard*)this);		
}

//____________________________________________________________________________
//
CGoatnapperCard::CGoatnapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goatnapper"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CGoatnapperCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);		
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 		
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goat), false)); 		

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	
	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	
	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCardModifier::Operation::ApplyToLater);
	CCardOrientationModifier* pModifier3 = new CCardOrientationModifier(0);

	pModifier2->LinkCardModifier(pModifier3);
	pModifier1->LinkCardModifier(pModifier2);

	cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1); 

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGoatnapperCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CCardKeywordModifier pModifier;
	pModifier.GetModifier().SetToAdd(CardKeyword::CardHaste);
	pModifier.GetModifier().SetOneTurnOnly(TRUE);

	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CFaerieTrickeryCard::CFaerieTrickeryCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Faerie Trickery"), CardType::Instant, nID, CREATURE_TYPE(Faerie))
{
	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Faerie), false))));

	cpSpell->SetToZone(ZoneId::Exile, TRUE);
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNathsBuffoonCard::CNathsBuffoonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nath's Buffoon"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CWarrenScourgeElfCard::CWarrenScourgeElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warren-Scourge Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CPestermiteCard::CPestermiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pestermite"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
		, m_TapSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPestermiteCard::OnTapSelected))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPestermiteCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CPestermiteCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (pTarget->GetOrientation()->IsTapped())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't untap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Untap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		
		m_TapSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 0, (DWORD)pTarget);
	}
	else
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't tap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Tap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		
		m_TapSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 1, (DWORD)pTarget);
	}
	return true;
}

void CPestermiteCard::OnTapSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext2;

				CCardOrientationModifier pModifier = CCardOrientationModifier(dwContext1);
				pModifier.ApplyTo(pCard);
				return;
			
			}
			return;
		}
}

//____________________________________________________________________________
//
CHoardersGreedCard::CHoardersGreedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hoarder's Greed"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CHoardersGreedCard::OnResolutionCompleted))
{
	//hybrid mana cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT));		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());      

	AddSpell(cpSpell.GetPointer());
}

void CHoardersGreedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller = GetController();
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer,				 // select by 
		CZoneModifier::RoleType::AllPlayers,				 // reveal to
		NULL,												 // what cards
		ZoneId::Library,									 // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer,				 // select by this player
		CardPlacement::Bottom,								 // put selected cards on 
		MoveType::Others,									 // move type
		CZoneModifier::RoleType::PrimaryPlayer);			 // order selected cards by this player
	CLifeModifier cmodifier1 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CDrawCardModifier cmodifier2 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));

	for (;;)
	{
		int opp_score = 0;
		int con_score = 0;
		cmodifier1.ApplyTo(controller);
		cmodifier2.ApplyTo(controller);
		pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();

		if (!pNextDraw_con->GetCardType().IsLand()) 
			con_score = pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) 
			opp_score = pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);

		if ( con_score<=opp_score ) 
			break;
	}
}

//____________________________________________________________________________
//
CStinkdrinkerDaredevilCard::CStinkdrinkerDaredevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stinkdrinker Daredevil"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Giant), false),
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGalepowderMageCard::CGalepowderMageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Galepowder Mage"), CardType::Creature, CREATURE_TYPE2(Kithkin, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGalepowderMageCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CGalepowderMageCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CProfaneCommandCard::CProfaneCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Profane Command"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Fear, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->FreeAdjustTargetCountWithExtraCostValue();

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
		cpSpell->SetAbilityName(_T("Creatures gain fear until end of turn and target player loses X life. Casts"));
		cpSpell->SetAbilityText(_T("Creatures gain fear until end of turn and target player loses X life. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->FreeAdjustTargetCountWithExtraCostValue();

		cpSpell->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("artifact creatures or black creatures")));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
		cpSpell->SetAbilityName(_T("Creatures gain fear until end of turn and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		cpSpell->SetAbilityText(_T("Creatures gain fear until end of turn and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->FreeAdjustTargetCountWithExtraCostValue();

		cpSpell->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("artifact creatures or black creatures")));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
		cpSpell->SetAbilityName(_T("Creatures gain fear until end of turn and target creature gets -X/-X until end of turn. Casts"));
		cpSpell->SetAbilityText(_T("Creatures gain fear until end of turn and target creature gets -X/-X until end of turn. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(0), PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(-1));
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		cpSpell->SetAbilityName(_T("Target player loses X life and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		cpSpell->SetAbilityText(_T("Target player loses X life and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(0), PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(-1));
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		cpSpell->SetAbilityName(_T("Target player loses X life and 0 target creatures gain fear. Casts"));
		cpSpell->SetAbilityText(_T("Target player loses X life and 0 target creatures gain fear. Casts"));	

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(0), PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(-1));
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		cpSpell->SetAbilityName(_T("Target player loses X life and target creature gets -X/-X until end of turn. Casts"));
		cpSpell->SetAbilityText(_T("Target player loses X life and target creature gets -X/-X until end of turn. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(-1, -1));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
		cpSpell->SetAbilityName(_T("Target creature gets -X/-X until end of turn and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		cpSpell->SetAbilityText(_T("Target creature gets -X/-X until end of turn and return target creature card with converted mana cost X or less from your graveyard to the battlefield. Casts"));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProfaneCommandCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(-1, -1));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
		cpSpell->SetAbilityName(_T("Target creature gets -X/-X until end of turn and 0 target creatures gain fear. Casts"));
		cpSpell->SetAbilityText(_T("Target creature gets -X/-X until end of turn and 0 target creatures gain fear. Casts"));

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
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProfaneCommandCard::SetTriggerContext1));
		// system stuff

		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProfaneCommandCard::SetTriggerContext2));
		// system stuff

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		m_pTriggeredAbility2 = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility2);
	}
	{
		typedef
			TTriggeredTargetAbility<CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProfaneCommandCard::SetTriggerContext3));
		// system stuff

		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CProfaneCommandCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	n = this->GetLastCastingExtraValue();
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-n));
	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

bool CProfaneCommandCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	n = this->GetLastCastingExtraValue();
	
	m_pTriggeredAbility2->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(n));

	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(1)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

bool CProfaneCommandCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	n = this->GetLastCastingExtraValue();
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-n));
	triggerContext.m_PowerModifier.SetPowerDelta(Power(-n));
	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(2)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

bool CProfaneCommandCard::BeforeResolution1(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

bool CProfaneCommandCard::BeforeResolution2(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(1)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

bool CProfaneCommandCard::BeforeResolution3(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(2)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
CLashOutCard::CLashOutCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lash Out"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLashOutCard::BeforeResolution1));
}

bool CLashOutCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* Target=pAction->GetAssociatedCard()->GetController();
	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) pModifier.ApplyTo(Target); 

	return true;
}

//____________________________________________________________________________
//
CIncendiaryCommandCard::CIncendiaryCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Incendiary Command"), CardType::Sorcery, nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CIncendiaryCommandCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CIncendiaryCommandCard::OnResolutionCompleted2))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-4), PreventableType::Preventable));
		
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetAbilityName(_T("Incendiary Command deals 4 damage to target player and Incendiary Command deals 2 damage to each creature. Casts"));
		cpSpell->SetAbilityText(_T("Incendiary Command deals 4 damage to target player and Incendiary Command deals 2 damage to each creature. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-4), PreventableType::Preventable));
		
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);	

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetAbilityName(_T("Incendiary Command deals 4 damage to target player and destroy target nonbasic land. Casts"));
		cpSpell->SetAbilityText(_T("Incendiary Command deals 4 damage to target player and destroy target nonbasic land. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-4), PreventableType::Preventable));
		
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetAbilityName(_T("Incendiary Command deals 4 damage to target player and each player discards all the cards in his or her hand, then draws that many cards. Casts"));
		cpSpell->SetAbilityText(_T("Incendiary Command deals 4 damage to target player and each player discards all the cards in his or her hand, then draws that many cards. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);	

		cpSpell->SetAbilityName(_T("Incendiary Command deals 2 damage to each creature and destroy target nonbasic land. Casts"));
		cpSpell->SetAbilityText(_T("Incendiary Command deals 2 damage to each creature and destroy target nonbasic land. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		cpSpell->SetAbilityName(_T("Incendiary Command deals 2 damage to each creature and each player discards all the cards in his or her hand, then draws that many cards. Casts"));
		cpSpell->SetAbilityText(_T("Incendiary Command deals 2 damage to each creature and each player discards all the cards in his or her hand, then draws that many cards. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		cpSpell->SetAbilityName(_T("Destroy target nonbasic land and each player discards all the cards in his or her hand, then draws that many cards. Casts"));
		cpSpell->SetAbilityText(_T("Destroy target nonbasic land and each player discards all the cards in his or her hand, then draws that many cards. Casts"));
		
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

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CIncendiaryCommandCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* opponent =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	
	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	
	for (int i = 0; i < controller->GetSize(); ++i)
		if (controller->GetAt(i)->GetCardType().IsCreature()) 
			pModifier.ApplyTo((CCreatureCard*)controller->GetAt(i));
	
	for (int i = 0; i < opponent->GetSize(); ++i)
		if (opponent->GetAt(i)->GetCardType().IsCreature()) 
			pModifier.ApplyTo((CCreatureCard*)controller->GetAt(i));
}

void CIncendiaryCommandCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = GetController();
	CPlayer* pOpponent   = m_pGame->GetNextPlayer(GetController());

	int iHandSizeNewController = pController->GetZoneById(ZoneId::Hand)->GetSize(); // draw number of cards equal to "pre discard" hand size.                                        
	int iHandSizeNewOpponent   = pOpponent->GetZoneById(ZoneId::Hand)->GetSize();	// draw number of cards equal to "pre discard" hand size.  

	CZoneCardModifier pModifierDiscardController = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pController)));
	CZoneCardModifier pModifierDiscardOpponent = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pOpponent)));
	
	pModifierDiscardController.ApplyTo(pController);
	pModifierDiscardOpponent.ApplyTo(pOpponent);
	
	if (pController->GetZoneById(ZoneId::Library)->GetSize() < iHandSizeNewController)  // if library contains not enough cards
	{
		pController->SetDrawFailed();						 // can not draw a card to put into your hand, so draw has failed
		return;												 // no point continuing
	}
	if (pOpponent->GetZoneById(ZoneId::Library)->GetSize() < iHandSizeNewOpponent)		// if library contains not enough cards
	{
		pOpponent->SetDrawFailed();							 // can not draw a card to put into opponent's hand, so draw has failed
		return;												 // no point continuing
	}
	CDrawCardModifier pModifierDrawController = CDrawCardModifier(GetGame(), MinimumValue(iHandSizeNewController), MaximumValue(iHandSizeNewController));
	CDrawCardModifier pModifierDrawOpponent   = CDrawCardModifier(GetGame(), MinimumValue(iHandSizeNewOpponent),  MaximumValue(iHandSizeNewOpponent));
	
	pModifierDrawController.ApplyTo(pController);
	pModifierDrawOpponent.ApplyTo(pOpponent); 
/*
	Isochron: 26 Nov 2015 replaced this code, to fix the fault.  The fault occurred when a player did not have enough cards in their library to
	draw the required number of cards. They were not losing the game as required.  The replacement code above does not use a container for the
	player hands.  Isochron believes in these circumstances a container for the hand is not required.

	int controller = GetController()->GetZoneById(ZoneId::Hand)->GetSize();                                        
	int opponent =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize();

	CZone* pOpp = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);
	CZone* pCon = GetController()->GetZoneById(ZoneId::Hand);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	CCountedCardContainer pContHand;
	CCountedCardContainer pOppHand;

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, GetController())));

	if (m_CardFilter_temp.GetIncluded(*pCon , pContHand))	
	{
		pModifier1.ApplyTo(GetController());

		for (int i = 0; i < pContHand.GetSize(); ++i)
		{
			m_CardFilter_temp.SetComparer(new SpecificCardComparer(pContHand.GetAt(i)));
			if (m_CardFilter_temp.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer())) controller=controller-1;
			if (m_CardFilter_temp.CountIncluded(GetController()->GetZoneById(ZoneId::_Tokens)->GetCardContainer())) controller=controller-1;
			if (m_CardFilter_temp.CountIncluded(GetController()->GetZoneById(ZoneId::Stack)->GetCardContainer())) controller=controller-1;
		}
	}
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	if (m_CardFilter_temp.GetIncluded(*pOpp , pOppHand))	
	{
		pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));

		for (int i = 0; i < pOppHand.GetSize(); ++i)
		{
			m_CardFilter_temp.SetComparer(new SpecificCardComparer(pOppHand.GetAt(i)));
			if (m_CardFilter_temp.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer())) opponent=opponent-1;
			if (m_CardFilter_temp.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::_Tokens)->GetCardContainer())) opponent=opponent-1;
			if (m_CardFilter_temp.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Stack)->GetCardContainer())) opponent=opponent-1;
		}
	}
	CDrawCardModifier pModifier_con = CDrawCardModifier(GetGame(),  MinimumValue(controller), MaximumValue(controller));
	CDrawCardModifier pModifier_opp = CDrawCardModifier(GetGame(),  MinimumValue(opponent), MaximumValue(opponent));
	
	pModifier_con.ApplyTo(GetController());
	pModifier_opp.ApplyTo(m_pGame->GetNextPlayer(GetController()));*/
}

//____________________________________________________________________________
//
CMakeshiftMannequinCard::CMakeshiftMannequinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Makeshift Mannequin"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
			_T("3") BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMakeshiftMannequinCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CMakeshiftMannequinCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	int nCounters = 1;

	int nMultiplier = 0;
	if (pTarget->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;

	CCardCounterModifier pModifier1(MANNEQUIN_COUNTER, +nCounters, true);

	pModifier1.ApplyTo(pTarget);

	CMoveCardModifier pModifier2(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others);
	pModifier2.ApplyTo(pTarget);

	CCardAbilityModifier pModifier3 = CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMakeshiftMannequinCard::CreateSacrificeAbility1));
	pModifier3.ApplyTo(pTarget);

	return true;
}

counted_ptr<CAbility> CMakeshiftMannequinCard::CreateSacrificeAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMakeshiftTemporaryAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimalCommandCard::CPrimalCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Primal Command"), CardType::Sorcery, nID)
	//, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		//		&CPrimalCommandCard::OnResolutionCompleted1))
{
	{	
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	
		cpSpell->SetAbilityName(_T("Put target noncreature permanent on top of its owner's library and target player gains 7 life. Casts"));
		cpSpell->SetAbilityText(_T("Put target noncreature permanent on top of its owner's library and target player gains 7 life. Casts"));
	
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{	
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	
		cpSpell->SetAbilityName(_T("Put target noncreature permanent on top of its owner's library and target player shuffles his or her graveyard into his or her library. Casts"));
		cpSpell->SetAbilityText(_T("Put target noncreature permanent on top of its owner's library and target player shuffles his or her graveyard into his or her library. Casts"));
	
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
	{	
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	
		cpSpell->SetAbilityName(_T("Put target noncreature permanent on top of its owner's library and search your library for a creature card, reveal it, put it into your hand, then shuffle your library. Casts"));
		cpSpell->SetAbilityText(_T("Put target noncreature permanent on top of its owner's library and search your library for a creature card, reveal it, put it into your hand, then shuffle your library. Casts"));
	
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery, _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, FALSE_CARD_COMPARER, TRUE,
			Life(+7), PreventableType::NotPreventable));
	
		cpSpell->AddAbilityTag(AbilityTag::LifeGain);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetAbilityName(_T("Target player gains 7 life and target player shuffles his or her graveyard into his or her library. Casts"));
		cpSpell->SetAbilityText(_T("Target player gains 7 life and target player shuffles his or her graveyard into his or her library. Casts"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(+7), PreventableType::NotPreventable));
	
		cpSpell->AddAbilityTag(AbilityTag::LifeGain);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetAbilityName(_T("Target player gains 7 life and search your library for a creature card, reveal it, put it into your hand, then shuffle your library. Casts"));
		cpSpell->SetAbilityText(_T("Target player gains 7 life and search your library for a creature card, reveal it, put it into your hand, then shuffle your library. Casts"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures")),
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetAbilityName(_T("Search your library for a creature card, reveal it, put it into your hand, then shuffle your library and target player shuffles his or her graveyard into his or her library. Casts"));
		cpSpell->SetAbilityText(_T("Search your library for a creature card, reveal it, put it into your hand, then shuffle your library and target player shuffles his or her graveyard into his or her library. Casts"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalCommandCard::BeforeResolution2));

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
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalCommandCard::SetTriggerContext1));
		// system stuff

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalCommandCard::SetTriggerContext2));
		// system stuff

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CPrimalCommandCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		// system stuff
		CCardKeywordModifier* pRemoveModifier1=new CCardKeywordModifier;
		pRemoveModifier1->GetModifier().SetOneTurnOnly(FALSE);		
		pRemoveModifier1->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pRemoveModifier1);
		cpAbility->SetSkipStack(TRUE);		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalCommandCard::SetTriggerContext3));
		// system stuff

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPrimalCommandCard::BeforeResolution1(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

bool CPrimalCommandCard::BeforeResolution2(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(1)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

bool CPrimalCommandCard::BeforeResolution3(CAbilityAction* pAction) const
{	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(2)->GetInstanceID());
    m_CardFlagModifier1.ApplyTo((CCard*)this);

	return true;
}

//void CPrimalCommandCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
bool CPrimalCommandCard::BeforeResolution(CPrimalCommandCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();
	CZone* Library = target ->GetZoneById(ZoneId::Library);

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)));

	pModifier->ApplyTo(target);
	Library->Shuffle();
	return true;
}

bool CPrimalCommandCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

bool CPrimalCommandCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{

	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(1)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

bool CPrimalCommandCard::SetTriggerContext3(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	CCardFlagModifier m_CardFlagModifier1 = CCardFlagModifier();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(2)->GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);

	return (m_CardFilter_temp.IsCardIncluded(this));
}

//____________________________________________________________________________
//
CFaerieTauntingsCard::CFaerieTauntingsCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Faerie Tauntings"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Faerie))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFaerieTauntingsCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CFaerieTauntingsCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (! (m_pGame->GetActivePlayer() == GetController()) );
}

//____________________________________________________________________________
//
CDorantheSiegeTowerCard::CDorantheSiegeTowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doran, the Siege Tower"), CardType::_LegendaryCreature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(5))	
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ToughnessCombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreamspoilerWitchesCard::CDreamspoilerWitchesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dreamspoiler Witches"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDreamspoilerWitchesCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDreamspoilerWitchesCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (! (m_pGame->GetActivePlayer() == GetController()) );
}

//____________________________________________________________________________
//
CGlenElendraPrankstersCard::CGlenElendraPrankstersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glen Elendra Pranksters"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlenElendraPrankstersCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CGlenElendraPrankstersCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (! (m_pGame->GetActivePlayer() == GetController()) );
}

//____________________________________________________________________________
//
CEyesOfTheWisentCard::CEyesOfTheWisentCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Eyes of the Wisent"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Elemental))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));

	cpAbility->SetCreateTokenOption(TRUE, _T("Elemental G"), 2811, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEyesOfTheWisentCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CEyesOfTheWisentCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (m_pGame->GetActivePlayer() == GetController());
}

//____________________________________________________________________________
//
CNectarFaerieCard::CNectarFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nectar Faerie"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(Faerie) | CREATURE_TYPE(Elf), false)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHealTheScarsCard::CHealTheScarsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Heal the Scars"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHealTheScarsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHealTheScarsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	if (!target->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)target;
	int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());

	CLifeModifier pModifier = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CWeedStrangleCard::CWeedStrangleCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Weed Strangle"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWeedStrangleCard::BeforeResolution));
}

bool CWeedStrangleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* Target=pAction->GetAssociatedCard();
	if (!Target->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)Target;
	int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());

	CLifeModifier pModifier = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) pModifier.ApplyTo(GetController()); 

	return true;
}

//____________________________________________________________________________
//
CLammastideWeaveCard::CLammastideWeaveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lammastide Weave"), CardType::Instant, nID)
{
	counted_ptr<CLammastideWeaveSpell> cpSpell(
		::CreateObject<CLammastideWeaveSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHunterofEyeblightsCard::CHunterofEyeblightsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunter of Eyeblights"), CardType::Creature, CREATURE_TYPE2(Elf, Assassin), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer());

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGiltLeafAmbushCard::CGiltLeafAmbushCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Gilt-Leaf Ambush"), CardType::Instant, nID, CREATURE_TYPE(Elf))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGiltLeafAmbushCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGiltLeafAmbushCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifierToken = CTokenCreationModifier(GetGame(), _T("Elf Warrior C"), 2715, 2, FALSE, ZoneId::Battlefield, &pTokens);
	pModifierToken.ApplyTo(controller);

	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (!pNextDraw_con->GetCardType().IsLand()) 
		con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) 
		opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score)
	{
		CCardKeywordModifier cModifier = CCardKeywordModifier();
		cModifier.GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cModifier.GetModifier().SetOneTurnOnly(TRUE);
		// Find the token we just created and apply power modifier
		for (int i = 0; i < pTokens.GetSize(); ++i)
			cModifier.ApplyTo(pTokens.GetAt(i));
	}
}

//____________________________________________________________________________
//
CMirrorEntityCard::CMirrorEntityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirror Entity"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CMirrorEntityCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+0), Life(+0),
			new AnyCreatureComparer));

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector();
	cpAbility->SetReplace(TRUE);

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
	}
}
void CMirrorEntityCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
   CCardFilter tempFilter;
   tempFilter.SetComparer(new AnyCreatureComparer);

   CCardKeywordModifier pModifier = CCardKeywordModifier();
   pModifier.GetModifier().SetToAdd(CardKeyword::Changeling);
   pModifier.GetModifier().SetOneTurnOnly(TRUE);

		CCountedCardContainer pCreatures;
		if (tempFilter.GetIncluded(*GetController()->GetZoneById(ZoneId::Battlefield), pCreatures))					
		{
			for (int i = 0; i < pCreatures.GetSize(); ++i)
				{
				pModifier.ApplyTo((CCreatureCard*)pCreatures.GetAt(i));
				}
		}
}
//____________________________________________________________________________
//
CVigorCard::CVigorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vigor"), CardType::Creature, CREATURE_TYPE2(Elemental, Incarnation), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::ReplacedDamage));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVigorCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CVigorCard::BeforeResolution));

	cpAbility->SetReplacementEffect(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
	}

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
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
bool CVigorCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CCreatureCard* pCreature, Damage damage, int effect_index) const
{
	if (pCreature->GetController() != GetController()) return false; 
	
	else
	{
	triggerContext.m_pCreature = pCreature;
	triggerContext.m_LifeModifier.SetLifeDelta(-damage.m_nLifeDelta);
	//m_pTriggeredAbility->GetCardModifiers().Clear();
	//m_pTriggeredAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +GET_INTEGER(damage.m_nLifeDelta), false));
	return (effect_index==2);
	}
}
bool CVigorCard::BeforeResolution(CVigorCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta()), false);
	pModifier.ApplyTo(triggerContext.m_pCreature);
	triggerContext.m_LifeModifier.SetLifeDelta(Life(0));

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}
//____________________________________________________________________________
//
CMaskedAdmirersCard::CMaskedAdmirersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Masked Admirers"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))	
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
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetResolutionCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaskedAdmirersCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMaskedAdmirersCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMaskedAdmirersCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CMaskedAdmirersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CTurtleshellChangelingCard::CTurtleshellChangelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Turtleshell Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::SwitchedPT)
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CPurityCard::CPurityCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Purity"), CardType::Creature, CREATURE_TYPE2(Elemental, Incarnation), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
		PlayerEffectType::DamageToLifeReplacement));

		cpAbility->SetAffectControllerOnly();
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
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
//____________________________________________________________________________
//
CBoggartForagerCard::CBoggartForagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boggart Forager"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE));

	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityText(_T("Target player shuffles his or her library. Activates"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoggartForagerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBoggartForagerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();

	target->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CDeathrenderCard::CDeathrenderCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deathrender"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CDeathrenderCard::OnResolutionCompleted))
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(GetInstanceID());
	m_CardFilter.AddComparer(pComparer); // this filter will match cards flagged by this spell

	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"),
			new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDeathrenderCard::CreateEquipmentAbility)));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}
counted_ptr<CAbility> CDeathrenderCard::CreateEquipmentAbility(CCard* pCard)
	{
		typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);	

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	
	cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	//AddAbility(cpAbility.GetPointer());	// if this don't work, remove the bars

	return counted_ptr<CAbility>(cpAbility.GetPointer());
	}
void CDeathrenderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	//TriggeredAbility::SubjectActionType* pAction = ((TriggeredAbility::SubjectActionType*)pAbilityAction);
	CEquipModifier pModifier = CEquipModifier(this);

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer tokens;
		if (m_CardFilter.GetIncluded(*pBattlefield, tokens))
			for (int i = 0; i < tokens.GetSize(); ++i)
			{
				pModifier.ApplyTo((CCreatureCard*)tokens.GetAt(i));
				m_CardFlagModifier2.ApplyTo((CCreatureCard*)tokens.GetAt(i));
			}
/*	for (CSubjectGroup::CardSubjectIterator it = pAction->GetSubjectGroup().CardSubjectBegin();
		it != pAction->GetSubjectGroup().CardSubjectEnd(); ++it)

		{
			if (((CCreatureCard*)it->GetPointer())->GetZone()->GetZoneId() == ZoneId::Battlefield)
				pModifier.ApplyTo((CCreatureCard*)it->GetPointer());
		}*/
	
}
//____________________________________________________________________________
//
CDreadCard::CDreadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dread"), CardType::Creature, CREATURE_TYPE2(Elemental, Incarnation), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddFear(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDreadCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
}
bool CDreadCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) 
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;

	else triggerContext.m_pCard = pCard;

	return TRUE;
}
//____________________________________________________________________________
//
CSpinerockKnollCard::CSpinerockKnollCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Spinerock Knoll"), nID)
{
	SetIntoPlayTapped();

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter.AddComparer(pComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}	
	{
		counted_ptr<CActivatedAbility<CHideawayFreeCastAbility>> cpAbility(
			::CreateObject<CActivatedAbility<CHideawayFreeCastAbility>>(this,
				RED_MANA_TEXT, &m_CardFilter));		

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSpinerockKnollCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredHideawayAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_ExileFaceDown); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_ExileFaceDown); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::_ExileFaceDown));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSpinerockKnollCard::CanPlay(BOOL bIncludeTricks)
{
	int nDamage = GET_INTEGER(GetGame()->GetNextPlayer(GetController())->GetDamageTakenThisTurn());

	if (m_pGame->IsThinking() && nDamage < 7) return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
CWindbriskHeightsCard::CWindbriskHeightsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Windbrisk Heights"), nID)
{
	SetIntoPlayTapped();

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter.AddComparer(pComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}	
	{
			counted_ptr<CActivatedAbility<CHideawayFreeCastAbility>> cpAbility(
		::CreateObject<CActivatedAbility<CHideawayFreeCastAbility>>(this,
			WHITE_MANA_TEXT, &m_CardFilter));		

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWindbriskHeightsCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredHideawayAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_ExileFaceDown); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_ExileFaceDown); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::_ExileFaceDown));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CWindbriskHeightsCard::CanPlay(BOOL bIncludeTricks)
{	
	if (m_pGame->IsThinking() && GetController()->GetAttackCount() < 3) return FALSE;
	return TRUE;
}

//____________________________________________________________________________
//
CShelldockIsleCard::CShelldockIsleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shelldock Isle"), nID)
{
	SetIntoPlayTapped();

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter.AddComparer(pComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}	
	{
			counted_ptr<CActivatedAbility<CHideawayFreeCastAbility>> cpAbility(
		::CreateObject<CActivatedAbility<CHideawayFreeCastAbility>>(this,
			BLUE_MANA_TEXT, &m_CardFilter));		

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShelldockIsleCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CShelldockIsleCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredHideawayAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_ExileFaceDown); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_ExileFaceDown); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::_ExileFaceDown));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShelldockIsleCard::BeforeResolution(CAbilityAction* pAction) const
{
	 // Should be moved to Hideaway freecast for this ability to become copyable	
	return (GetController()->GetZoneById(ZoneId::Library)->GetSize() < 21 || m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetSize() < 21);
}

BOOL CShelldockIsleCard::CanPlay(BOOL bIncludeTricks)
{	
	if (m_pGame->IsThinking() && (GetController()->GetZoneById(ZoneId::Library)->GetSize() > 20 && m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetSize() > 20)) return FALSE;
	return TRUE;
}

//____________________________________________________________________________
//
CHowltoothHollowCard::CHowltoothHollowCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Howltooth Hollow"), nID)
{
	SetIntoPlayTapped();

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter.AddComparer(pComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}	
	{
			counted_ptr<CActivatedAbility<CHideawayFreeCastAbility>> cpAbility(
		::CreateObject<CActivatedAbility<CHideawayFreeCastAbility>>(this,
			BLACK_MANA_TEXT, &m_CardFilter));		

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHowltoothHollowCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CHowltoothHollowCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredHideawayAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_ExileFaceDown); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_ExileFaceDown); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::_ExileFaceDown));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CHowltoothHollowCard::BeforeResolution(CAbilityAction* pAction) const
{
	 // Should be moved to Hideaway freecast for this ability to become copyable	

	return (GetController()->GetZoneById(ZoneId::Hand)->GetSize() == 0 && m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() == 0);
}
BOOL CHowltoothHollowCard::CanPlay(BOOL bIncludeTricks)
{	
	if (m_pGame->IsThinking() && (GetController()->GetZoneById(ZoneId::Hand)->GetSize() > 0 || m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() > 0)) return FALSE;

	return TRUE;
}
//____________________________________________________________________________
//
CMosswortBridgeCard::CMosswortBridgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mosswort Bridge"), nID)
{
	SetIntoPlayTapped();

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter.AddComparer(pComparer);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}	
	{
			counted_ptr<CActivatedAbility<CHideawayFreeCastAbility>> cpAbility(
		::CreateObject<CActivatedAbility<CHideawayFreeCastAbility>>(this,
			GREEN_MANA_TEXT, &m_CardFilter));		

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMosswortBridgeCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMosswortBridgeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredHideawayAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);		
		
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_ExileFaceDown); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_ExileFaceDown); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::_ExileFaceDown));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CMosswortBridgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	 // Should be moved to Hideaway freecast for this ability to become copyable	

	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	Power power(0);


	for (int i = 0; i < pBattle->GetSize(); ++i)
		{
			CCard* pCard = pBattle->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{ 
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				power = power + pCreature ->GetPower();
			}
		}

	return (power > Power(9));
}
BOOL CMosswortBridgeCard::CanPlay(BOOL bIncludeTricks)
{	
	if (!m_pGame->IsThinking()) return TRUE;

	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	Power power(0);

	for (int i = 0; i < pBattle->GetSize(); ++i)
		{
			CCard* pCard = pBattle->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{ 
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				power = power + pCreature ->GetPower();
			}
		}

	if (power < Power(10)) return FALSE;

	return TRUE;
}
//____________________________________________________________________________
//
CHordeofNotionsCard::CHordeofNotionsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Horde of Notions"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
			counted_ptr<CActivatedAbility<CTargetFreeCastSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetFreeCastSpell>>(this,
			WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Elemental),false), ZoneId::Graveyard));		

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CMilitiasPrideCard::CMilitiasPrideCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Militia's Pride"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Kithkin))
{
	{
	typedef
		TTriggeredAbility< CAttackingTokenCreationAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetTokenName(_T("Kithkin Soldier A"));
	cpAbility->SetTokenNumber(1);
	cpAbility->SetTokenuID(2742);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMilitiasPrideCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
	}
}
bool CMilitiasPrideCard::SetTriggerContext(CAttackingTokenCreationAbility::TriggerContextType& triggerContext,
										   CCreatureCard* pCreatureCard, AttackSubject attacked) 
{
	if (pCreatureCard->GetCardType().IsToken()) return FALSE;

	return TRUE;
}
//____________________________________________________________________________
//
CTriclopeanSightCard::CTriclopeanSightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Triclopean Sight"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Vigilance)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CTriclopeanSightCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddFlash(FALSE);

	m_pChgPwrTghAttrEnchant->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTriclopeanSightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CArbiterOfKnollridgeCard::CArbiterOfKnollridgeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arbiter of Knollridge"), CardType::Creature, CREATURE_TYPE2(Giant, Wizard), nID,
		_T("6") WHITE_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CArbiterOfKnollridgeCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CArbiterOfKnollridgeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer;
	Life nMaxLife(std::numeric_limits<int>::min());
	Life nCurrentLife;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		nCurrentLife = pPlayer->GetLife();
		if (nCurrentLife > nMaxLife) nMaxLife = nCurrentLife;
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CLifeModifier* pModifier = new CLifeModifier(nMaxLife, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->SetReplacement(true);
		pPlayer = GetGame()->GetPlayer(ip);
		pModifier->ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CThousandYearElixirCard::CThousandYearElixirCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thousand-Year Elixir"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,	
				Power(+0), Life(+0),
				CreatureKeyword::HasteTap));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1"),
				FALSE, TRUE,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNeedleDropCard::CNeedleDropCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Needle Drop"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new CreatureFlagComparer(CreatureFlag::_TakenDamage, false),
			true,
			new CNeedleDropTargeting));

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	cpSpell->GetTargetModifier().CCreatureModifiers::Add(
		new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
	cpSpell->GetTargetModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetAbilityText(_T("Deal 1 damage. Casts"));

	AddSpell(cpSpell.GetPointer());
}

BOOL CNeedleDropCard::CNeedleDropTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	return pPlayer->GetDamageTakenThisTurn() > Life(0);
}

//____________________________________________________________________________
//
CLairwatchGiantCard::CLairwatchGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lairwatch Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") WHITE_MANA_TEXT, Power(5), Life(3))
{
	SetMaxBlockingCount(2);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLairwatchGiantCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLairwatchGiantCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
										CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	int nBlockingCount = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (this->IsBlocking(pOppCreature) == TRUE)
				++nBlockingCount;
		}
	}
	return (nBlockingCount >= 2);
}
//____________________________________________________________________________
//
CHostilityCard::CHostilityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hostility"), CardType::Creature, CREATURE_TYPE2(Elemental, Incarnation), nID,
		_T("3") RED_MANA_TEXT  RED_MANA_TEXT  RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
		PlayerEffectType::DamageToTokensReplacement));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
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
//____________________________________________________________________________
//
CSentryOakCard::CSentryOakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sentry Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))
{
	/*
		!Outstanding Issue!
		When there are no attack-able creatures with Sentry Oak, the BeginningOfCombatStep/Combat phase 
		becomes skipped(!) and it doesn't trigger. When there is an attack-able creature with Sentry Oak, 
		it triggers as it should.
	*/	
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CSentryOakCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSentryOakCard::BeforeResolution(CSentryOakCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	CPowerModifier cmodifier1 = CPowerModifier(Power(+2));
	CCreatureKeywordModifier cmodifier2 = CCreatureKeywordModifier(CreatureKeyword::Defender, false);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score)
	{
		cmodifier1.ApplyTo(this);
		cmodifier2.ApplyTo(this);
	}

	return true;
}
//____________________________________________________________________________
//
CSpringjackKnightCard::CSpringjackKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Springjack Knight"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
		&CSpringjackKnightCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSpringjackKnightCard::BeforeResolution(CSpringjackKnightCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
	CCreatureKeywordModifier cmodifier = CCreatureKeywordModifier(CreatureKeyword::DoubleStrike, true);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score)
	{
		cmodifier.ApplyTo(pTarget);
	}

	return true;
}
//____________________________________________________________________________
//
CFistfulOfForceCard::CFistfulOfForceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fistful of Force"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFistfulOfForceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFistfulOfForceCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CPowerModifier pModifier1 = CPowerModifier(Power(+2));
	CLifeModifier pModifier2 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	//clash
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::Stack, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score)
		{
			CPowerModifier pModifier3 = CPowerModifier(Power(+2));
			CLifeModifier pModifier4 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			CCreatureKeywordModifier pModifier5 = CCreatureKeywordModifier(CreatureKeyword::Trample, TRUE);

			pModifier3.ApplyTo(pTarget);
			pModifier4.ApplyTo(pTarget);
			pModifier5.ApplyTo(pTarget);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CAshlingsPrerogativeCard::CAshlingsPrerogativeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ashling's Prerogative"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAshlingsPrerogativeCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CAshlingsPrerogativeCard::CreateAdditionAbility1a(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0),
			CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new OddCMCComparer);
	cpAbility->SetAbilityName(_T("Ashling's Prerogative grant"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CAshlingsPrerogativeCard::CreateAdditionAbility1b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(0), Life(0),
			CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new EvenCMCComparer);
	cpAbility->SetAbilityName(_T("Ashling's Prerogative grant"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CAshlingsPrerogativeCard::CreateAdditionAbility2(CCard* pCard)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::InPlayTapped,
			(int)&m_CardFilter,	
			TRUE));

	cpAbility->SetAbilityName(_T("Ashling's Prerogative stumble"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CAshlingsPrerogativeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_CardFilter.RemoveAllComparers();

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;
			entry.dwContext = 0;
			entry.strText.Format(_T("select odd for %s"), GetCardName(TRUE));		
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("select even for %s"), GetCardName(TRUE));		
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier1;
		if (bOdd)
			pModifier1 = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CAshlingsPrerogativeCard::CreateAdditionAbility1a));
		else
			pModifier1 = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CAshlingsPrerogativeCard::CreateAdditionAbility1b));
		
		CCardAbilityModifier pModifier2 = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CAshlingsPrerogativeCard::CreateAdditionAbility2));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier1.RemoveFrom(this);
		pModifier2.RemoveFrom(this);
	}
}

void CAshlingsPrerogativeCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				m_CardFilter.AddComparer(new EvenCMCComparer);
				bOdd = true;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CAshlingsPrerogativeCard::CreateAdditionAbility1a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CAshlingsPrerogativeCard::CreateAdditionAbility2));

				pModifier1.ApplyTo(this);
				pModifier2.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
			if ((int)it->dwContext == 1)
			{
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				m_CardFilter.AddComparer(new OddCMCComparer);
				bOdd = false;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CAshlingsPrerogativeCard::CreateAdditionAbility1b));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CAshlingsPrerogativeCard::CreateAdditionAbility2));

				pModifier1.ApplyTo(this);
				pModifier2.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}
				return;
			}
		}
}

//____________________________________________________________________________
//
CGuileCard::CGuileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guile"), CardType::Creature, CREATURE_TYPE2(Elemental, Incarnation), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddCantBeBlockedByOneOrTwo(FALSE, 0);

		{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredFreeCastAbility1, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(COUNTERSPELL_REPLACE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuileCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CounterCastReplacement));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
bool CGuileCard::SetTriggerContext(CTriggeredFreeCastAbility1::TriggerContextType& triggerContext,
							CCard* pCard, int i) const
{
	triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CSoulbrightFlamekinCard::CSoulbrightFlamekinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulbright Flamekin"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CSoulbrightFlamekinCard::OnResolutionCompleted))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSoulbrightFlamekinCard::OnSelected))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CSoulbrightFlamekinCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	
	if (pAbilityAction->GetAbility()->GetTurnResolveCount() == 3)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Add {RRRRRRRR} to your mana pool."));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't add mana."));

			entries.push_back(selectionEntry);
		}
		if (bResult) m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
}

void CSoulbrightFlamekinCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
				pModifier.ApplyTo(pSelectionPlayer);
				return;
			}
			
			if ((int)it->dwContext == 2)
				return;
		}
}

//____________________________________________________________________________
//
CInnerFlameIgniterCard::CInnerFlameIgniterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Inner-Flame Igniter"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CInnerFlameIgniterCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") RED_MANA_TEXT));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CInnerFlameIgniterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+1))));

	pModifier.ApplyTo(pController);

	if (pAbilityAction->GetAbility()->GetTurnResolveCount() == 3)
	{
		CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::FirstStrike, true, true)));

		pModifier.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CColfenorsUrnCard::CColfenorsUrnCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Colfenor's Urn"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CColfenorsUrnCard::OnZoneChanged))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CColfenorsUrnCard::OnSelected))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureToughnessComparer<std::greater<int>>(3));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColfenorsUrnCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CColfenorsUrnCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColfenorsUrnCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CColfenorsUrnCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CColfenorsUrnCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CColfenorsUrnCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CColfenorsUrnCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CColfenorsUrnCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CColfenorsUrnCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return true;
}

bool CColfenorsUrnCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = (CCard*)triggerContext.nValue1;

	if (pCard->IsInGraveyard())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Exile %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't exile %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pCard);
	}

	return true;
}

bool CColfenorsUrnCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (pExiled.GetSize() > 2);
}

bool CColfenorsUrnCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	if ((pExiled.GetSize() < 3 ) || !IsInplay() || (GetController() != pController)) return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(this);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

void CColfenorsUrnCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

void CColfenorsUrnCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext1;

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
				pExiled.AddCard(pCard, CardPlacement::Top);
				
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);
			}
			if ((int)it->dwContext == 2)
			{
				CCard* pCard = (CCard*)dwContext1;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't exile %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
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
CElvishBranchbenderCard::CElvishBranchbenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Branchbender"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Forest, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElvishBranchbenderCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CElvishBranchbenderCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	int nElves = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Treefolk AA"), 64053, pController);
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(Power(nElves)); 
	pCreature->SetPrintedToughness(Life(nElves));

	return true;
}

//____________________________________________________________________________
//
CScatteringStrokeCard::CScatteringStrokeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Scattering Stroke"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScatteringStrokeCard::BeforeResolution));
}

bool CScatteringStrokeCard::BeforeResolution(CAbilityAction* pAction) const
{
	DWORD nCMC = pAction->GetAssociatedCard()->GetConvertedManaCost();

	{
		CPlayer* controller=pAction->GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CNumberEffectModifier cmodifier = CNumberEffectModifier(GetGame(), _T("Scattering Stroke Effect"), 61122, nCMC);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier.ApplyTo(controller);
	}

	return true;
}

//____________________________________________________________________________
//
CCrushUnderfootCard::CCrushUnderfootCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Crush Underfoot"), CardType::Instant, nID, CREATURE_TYPE(Giant))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCrushUnderfootCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCrushUnderfootCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CCrushUnderfootCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Giant), false));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;

				int nPower = ((CCreatureCard*)pCard)->GetPower();

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				if (nPower > 0)
					entry.strText.Format(_T("Choose %s (%d damage)"),
						pCard->GetCardName(TRUE), nPower);
				else
					entry.strText.Format(_T("Choose %s (no damage)"),
						pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}

	return true;
}

void CCrushUnderfootCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pGiant = (CCreatureCard*)it->dwContext;
			CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pGiant->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			int nPower = pGiant->GetPower();

			if (nPower > 0)
			{
				CLifeModifier pModifier = CLifeModifier(Life(-nPower), pGiant, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier.ApplyTo(pTarget);
			}
				
			return;
		}
}

//____________________________________________________________________________
//