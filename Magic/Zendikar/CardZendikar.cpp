#include "stdafx.h"
#include "CardZendikar.h"

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

		DEFINE_CARD(CAdventuringGearCard);
		DEFINE_CARD(CAEtherFigmentCard);
		DEFINE_CARD(CAkoumRefugeCard);
		DEFINE_CARD(CArchiveTrapCard);
		DEFINE_CARD(CAridMesaCard);
		DEFINE_CARD(CArrowVolleyTrapCard);
		DEFINE_CARD(CBalaGedThiefCard);
		DEFINE_CARD(CBalothCageTrapCard);
		DEFINE_CARD(CBalothWoodcrasherCard);
		DEFINE_CARD(CBeastHuntCard);
		DEFINE_CARD(CBeastmasterAscensionCard);
		DEFINE_CARD(CBladeOfTheBloodchiefCard);
		DEFINE_CARD(CBlazingTorchCard);
		DEFINE_CARD(CBloodghastCard);
		DEFINE_CARD(CBloodchiefAscensionCard);
		DEFINE_CARD(CBloodTributeCard);
		DEFINE_CARD(CBogTattersCard);
		DEFINE_CARD(CBoldDefenseCard);
		DEFINE_CARD(CBurstLightningCard);
		DEFINE_CARD(CCallerOfGalesCard);
		DEFINE_CARD(CCaravanHurdaCard);
		DEFINE_CARD(CCarnageAltarCard);
		DEFINE_CARD(CCelestialMantleCard);
		DEFINE_CARD(CChandraAblazeCard);
		DEFINE_CARD(CCliffThreaderCard);
		DEFINE_CARD(CConquerorsPledgeCard);
		DEFINE_CARD(CCryptOfAgadeemCard);
		DEFINE_CARD(CCryptRipperCard);
		DEFINE_CARD(CDesecratedEarthCard);
		DEFINE_CARD(CDevoutLightcasterCard);
		DEFINE_CARD(CDisfigureCard);
		DEFINE_CARD(CEldraziMonumentCard);
		DEFINE_CARD(CElectropotenceCard);
		DEFINE_CARD(CElementalAppealCard);
		DEFINE_CARD(CEmeriaAngelCard);
		DEFINE_CARD(CEmeriaTheSkyRuinCard);
		DEFINE_CARD(CEternityVesselCard);
		DEFINE_CARD(CExpeditionMapCard);
		DEFINE_CARD(CExplorersScopeCard);
		DEFINE_CARD(CFeastOfBloodCard);
		DEFINE_CARD(CFelidarSovereignCard);
		DEFINE_CARD(CFrontierGuideCard);
		DEFINE_CARD(CGatekeeperOfMalakirCard);
		DEFINE_CARD(CGeyserGliderCard);
		DEFINE_CARD(CGoblinBushwhackerCard);
		DEFINE_CARD(CGoblinGuideCard);
		DEFINE_CARD(CGoblinRuinblasterCard);
		DEFINE_CARD(CGomazoaCard);
		DEFINE_CARD(CGraypeltRefugeCard);
		DEFINE_CARD(CGrazingGladehartCard);
		DEFINE_CARD(CGreenweaverDruidCard);
		DEFINE_CARD(CGrimDiscoveryCard);
		DEFINE_CARD(CGuulDrazSpecterCard);
		DEFINE_CARD(CGuulDrazVampireCard);
		DEFINE_CARD(CHagraCrocodileCard);
		DEFINE_CARD(CHagraDiabolistCard);
		DEFINE_CARD(CHaloHunterCard);
		DEFINE_CARD(CHeartstabberMosquitoCard);
		DEFINE_CARD(CHedronCrabCard);
		DEFINE_CARD(CHedronScrabblerCard);
		DEFINE_CARD(CHellfireMongrelCard);
		DEFINE_CARD(CHellkiteChargerCard);
		DEFINE_CARD(CHideousEndCard);
		DEFINE_CARD(CHighlandBerserkerCard);
		DEFINE_CARD(CIntoTheRoilCard);
		DEFINE_CARD(CIonaShieldOfEmeriaCard);
		DEFINE_CARD(CIorRuinExpeditionCard);
		DEFINE_CARD(CJoragaBardCard);
		DEFINE_CARD(CJourneyToNowhereCard);
		DEFINE_CARD(CJwarIsleRefugeCard);
		DEFINE_CARD(CKabiraCrossroadsCard);
		DEFINE_CARD(CKabiraEvangelCard);
		DEFINE_CARD(CKalitasBloodchiefOfGhetCard);
		DEFINE_CARD(CKazanduBlademasterCard);
		DEFINE_CARD(CKazanduRefugeCard);
		DEFINE_CARD(CKazuulWarlordCard);
		DEFINE_CARD(CKhalniGemCard);
		DEFINE_CARD(CKhalniHeartExpeditionCard);
		DEFINE_CARD(CKorAeronautCard);
		DEFINE_CARD(CKorCartographerCard);
		DEFINE_CARD(CKorDuelistCard);
		DEFINE_CARD(CKorHookmasterCard);
		DEFINE_CARD(CKorOutfitterCard);
		DEFINE_CARD(CKorSanctifiersCard);
		DEFINE_CARD(CKorSkyfisherCard);
		DEFINE_CARD(CLandbindRitualCard);
		DEFINE_CARD(CLavaballTrapCard);
		DEFINE_CARD(CLethargyTrapCard);
		DEFINE_CARD(CLivingTsunamiCard);
		DEFINE_CARD(CLorthostheTidemakerCard);
		DEFINE_CARD(CLotusCobraCard);
		DEFINE_CARD(CLuminarchAscensionCard);
		DEFINE_CARD(CMagmaRiftCard);
		DEFINE_CARD(CMagositheWaterveilCard);
		DEFINE_CARD(CMalakirBloodwitchCard);
		DEFINE_CARD(CMakindiShieldmateCard);
		DEFINE_CARD(CMarshCasualtiesCard);
		DEFINE_CARD(CMarshFlatsCard);
		DEFINE_CARD(CMerfolkSeastalkersCard);
		DEFINE_CARD(CMerfolkWayfinderCard);
		DEFINE_CARD(CMindbreakTrapCard);
		DEFINE_CARD(CMindlessNullCard);
		DEFINE_CARD(CMireBlightCard);
		DEFINE_CARD(CMistyRainforestCard);
		DEFINE_CARD(CMoldShamblerCard);
		DEFINE_CARD(CMoltenRavagerCard);
		DEFINE_CARD(CMurasaPyromancerCard);
		DEFINE_CARD(CNarrowEscapeCard);
		DEFINE_CARD(CNeedlebiteTrapCard);
		DEFINE_CARD(CNimanaSellSwordCard);
		DEFINE_CARD(CNimbusWingsCard);
		DEFINE_CARD(CNissaRevaneCard);
		DEFINE_CARD(CNissasChosenCard);
		DEFINE_CARD(CNobleVestigeCard);
		DEFINE_CARD(CObNixilisTheFallenCard);
//		DEFINE_CARD(CObsidianFireheartCard);
		DEFINE_CARD(COnduClericCard);
		DEFINE_CARD(COracleofMulDayaCard);
		DEFINE_CARD(COranRiefRecluseCard);
		DEFINE_CARD(COranRiefSurvivalistCard);
		DEFINE_CARD(COranRieftheVastwoodCard);
		DEFINE_CARD(CParalyzingGraspCard);
		DEFINE_CARD(CPiranhaMarshCard);
		DEFINE_CARD(CPitfallTrapCard);
		DEFINE_CARD(CPlatedGeopedeCard);
		DEFINE_CARD(CPredatoryUrgeCard);
		DEFINE_CARD(CPrimalBellowCard);
		DEFINE_CARD(CPunishingFireCard);
		DEFINE_CARD(CPyromancerAscensionCard);
		DEFINE_CARD(CQuestforAncientSecretsCard);
		DEFINE_CARD(CQuestfortheGembladesCard);
		DEFINE_CARD(CQuestfortheGravelordCard);
		DEFINE_CARD(CQuestfortheHolyRelicCard);
		DEFINE_CARD(CQuestforPureFlameCard);
		DEFINE_CARD(CRampagingBalothsCard);
		DEFINE_CARD(CRecklessScholarCard);
		DEFINE_CARD(CRelicCrushCard);
		DEFINE_CARD(CRiteofReplicationCard);
		DEFINE_CARD(CRuinousMinotaurCard);
		DEFINE_CARD(CRuneflareTrapCard);
		DEFINE_CARD(CScytheTigerCard);
		DEFINE_CARD(CSadisticSacramentCard);
		DEFINE_CARD(CSavageSilhouetteCard);
		DEFINE_CARD(CScaldingTarnCard);
		DEFINE_CARD(CScuteMobCard);
		DEFINE_CARD(CSeaGateLoremasterCard);
		DEFINE_CARD(CSeascapeAerialistCard);
		DEFINE_CARD(CSeismicShudderCard);
		DEFINE_CARD(CSejiriRefugeCard);
		DEFINE_CARD(CShatterskullGiantCard);
		DEFINE_CARD(CShepherdOfTheLostCard);
		DEFINE_CARD(CShieldmatesBlessingCard);
		DEFINE_CARD(CShoalSerpentCard);
		DEFINE_CARD(CSkyRuinDrakeCard);
		DEFINE_CARD(CSoaringSeacliffCard);
		DEFINE_CARD(CSoulStairExpeditionCard);
		DEFINE_CARD(CSpellPierceCard);
		DEFINE_CARD(CSphinxOfJwarIsleCard);
		DEFINE_CARD(CSphinxOfLostTruthsCard);
		DEFINE_CARD(CSpidersilkNetCard);
		DEFINE_CARD(CSpireBarrageCard);
		DEFINE_CARD(CSpreadingSeasCard);
		DEFINE_CARD(CSteppeLynxCard);
		DEFINE_CARD(CStoneworkPumaCard);
		DEFINE_CARD(CSummonersBaneCard);
		DEFINE_CARD(CSummoningTrapCard);
		DEFINE_CARD(CSunspringExpeditionCard);
		DEFINE_CARD(CSurrakarMarauderCard);
		DEFINE_CARD(CTajuruArcherCard);
		DEFINE_CARD(CTanglesapCard);
		DEFINE_CARD(CTeeteringPeaksCard);
		DEFINE_CARD(CTempestOwlCard);
		DEFINE_CARD(CTerritorialBalothCard);
		DEFINE_CARD(CTimbermawLarvaCard);
		DEFINE_CARD(CTorchSlingerCard);
		DEFINE_CARD(CTrailblazersBootsCard);
		DEFINE_CARD(CTrapfindersTrickCard);
		DEFINE_CARD(CTrapmakersSnareCard);
		DEFINE_CARD(CTrustyMacheteCard);
		DEFINE_CARD(CTuktukGruntsCard);
		DEFINE_CARD(CTurntimberGroveCard);
		DEFINE_CARD(CTurntimberRangerCard);
		DEFINE_CARD(CUmaraRaptorCard);
		DEFINE_CARD(CUnstableFootingCard);
		DEFINE_CARD(CValakutTheMoltenPinnacleCard);
		DEFINE_CARD(CVampireLaceratorCard);
		DEFINE_CARD(CVampireHexmageCard);
		DEFINE_CARD(CVampiresBiteCard);
		DEFINE_CARD(CVerdantCatacombsCard);
		DEFINE_CARD(CVinesOfVastwoodCard);
		DEFINE_CARD(CWarrenInstigatorCard);
		DEFINE_CARD(CWhiplashTrapCard);
		DEFINE_CARD(CWindborneChargeCard);
		DEFINE_CARD(CWindriderEelCard);
		DEFINE_CARD(CWorldQuellerCard);
		DEFINE_CARD(CZektarShrineExpeditionCard);
		DEFINE_CARD(CZendikarFarguideCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBeastHuntCard::CBeastHuntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Beast Hunt"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			3));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
	cpSpell->SetSelectionOptions(MinimumValue(SpecialNumber::All), MaximumValue(SpecialNumber::Any), ZoneId::Hand, CardPlacement::NotApplicable, 
		CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRampagingBalothsCard::CRampagingBalothsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rampaging Baloths"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetCreateTokenOption(TRUE, _T("Beast G"), 2864, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CHideousEndCard::CHideousEndCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hideous End"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CValakutTheMoltenPinnacleCard::CValakutTheMoltenPinnacleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Valakut, the Molten Pinnacle"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Mountains")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CValakutTheMoltenPinnacleCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CValakutTheMoltenPinnacleCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CValakutTheMoltenPinnacleCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 5);
}

bool CValakutTheMoltenPinnacleCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) > 5);
}

//____________________________________________________________________________
//
CPlatedGeopedeCard::CPlatedGeopedeCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Plated Geopede"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
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
CEmeriaTheSkyRuinCard::CEmeriaTheSkyRuinCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Emeria, the Sky Ruin"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmeriaTheSkyRuinCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmeriaTheSkyRuinCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEmeriaTheSkyRuinCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 6);
}

bool CEmeriaTheSkyRuinCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) > 6);
}

//____________________________________________________________________________
//
CAridMesaCard::CAridMesaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Arid Mesa"), nID)

	, m_CardFilter(_T("a Mountain or a Plains"), _T("Mountains or Plains"), new CardTypeComparer(CardType::Mountain | CardType::Plains, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScytheTigerCard::CScytheTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scythe Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		GREEN_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddShroud(false);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTeeteringPeaksCard::CTeeteringPeaksCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Teetering Peaks"), nID, CardType::NonbasicLand)
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
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWindriderEelCard::CWindriderEelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windraider Eel"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
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
CElementalAppealCard::CElementalAppealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elemental Appeal"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CElementalAppealCard::OnResolutionCompleted))
	, m_PowerModifier(Power(+7))
	, m_KickerCost(_T("5"))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CElementalAppealCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental B"), 2759, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAbilityAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAbilityAction->GetController());

	if (pAbilityAction->GetCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
		for (int i = 0; i < pTokens.GetSize(); ++i)
			m_PowerModifier.ApplyTo((CCreatureCard*)pTokens.GetAt(i));
}

//____________________________________________________________________________
//
CNissasChosenCard::CNissasChosenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nissa's Chosen"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
}

void CNissasChosenCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Battlefield) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard))
	{
		cardPlacement = CardPlacement::Bottom;
		pToZone = GetOwner()->GetZoneById(ZoneId::Library);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CMistyRainforestCard::CMistyRainforestCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Misty Rainforest"), nID)

	, m_CardFilter(_T("a Forest or an Island"), _T("Forests or Islands"), new CardTypeComparer(CardType::Forest | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarshFlatsCard::CMarshFlatsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Marsh Flats"), nID)

	, m_CardFilter(_T("a Plains or a Swamp"), _T("Plains or Swamps"), new CardTypeComparer(CardType::Swamp | CardType::Plains, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVerdantCatacombsCard::CVerdantCatacombsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Verdant Catacombs"), nID)

	, m_CardFilter(_T("a Swamp or a Forest"), _T("Swamps or Forests"), new CardTypeComparer(CardType::Swamp | CardType::Forest, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScaldingTarnCard::CScaldingTarnCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Scalding Tarn"), nID)

	, m_CardFilter(_T("an Island or a Mountain"), _T("Islands or Mountains"), new CardTypeComparer(CardType::Mountain | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevoutLightcasterCard::CDevoutLightcasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devout Lightcaster"), CardType::Creature, CREATURE_TYPE2(Kor, Cleric), nID,
		 WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Black, false));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CCarnageAltarCard::CCarnageAltarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Carnage Altar"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("3"), 1));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScuteMobCard::CScuteMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scute Mob"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		 GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +4));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScuteMobCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScuteMobCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CScuteMobCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
									  CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 4);
}

bool CScuteMobCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 4);
}

//____________________________________________________________________________
//
CGeyserGliderCard::CGeyserGliderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geyser Glider"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalothWoodcrasherCard::CBalothWoodcrasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Baloth Woodcrasher"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConquerorsPledgeCard::CConquerorsPledgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Conqueror's Pledge"), CardType::Sorcery, nID)
	, m_KickerCost(_T("6"))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Kor Soldier"), TOKEN_ID_BY_NAME,
			6));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConquerorsPledgeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CConquerorsPledgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (!pAction->GetCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
		return true;

	ContextValue context(pAction->GetValue());
	context.nValue1 = 12;
	pAction->SetValue(context);

	return true;
}

//____________________________________________________________________________
//
CEmeriaAngelCard::CEmeriaAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emeria Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetCreateTokenOption(TRUE, _T("Bird E"), 2859, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorCartographerCard::CKorCartographerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Cartographer"), CardType::Creature, CREATURE_TYPE2(Kor, Scout), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Plains")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorSkyfisherCard::CKorSkyfisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kor Skyfisher"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(3))
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								  CWhenSelfInplay::EventCallback,
								  &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}

//____________________________________________________________________________
//
CShepherdOfTheLostCard::CShepherdOfTheLostCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shepherd of the Lost"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CNarrowEscapeCard::CNarrowEscapeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Narrow Escape"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("2") WHITE_MANA_TEXT,
			new TrueCardComparer, 
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Battlefield);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSteppeLynxCard::CSteppeLynxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steppe Lynx"), CardType::Creature, CREATURE_TYPE(Cat), nID,
	 WHITE_MANA_TEXT, Power(0), Life(1))
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
CHedronCrabCard::CHedronCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hedron Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
	 BLUE_MANA_TEXT, Power(0), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);
	cpAbility->SetRevealCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIntoTheRoilCard::CIntoTheRoilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Into the Roil"), CardType::Instant, nID)
		, m_KickerCost(_T("1") BLUE_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CIntoTheRoilCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("1") BLUE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), 
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CIntoTheRoilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost) && bResult) // kicked?
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CLivingTsunamiCard::CLivingTsunamiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Living Tsunami"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
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

//____________________________________________________________________________
//
CRecklessScholarCard::CRecklessScholarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reckless Scholar"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
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
CSpellPierceCard::CSpellPierceCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Pierce"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)))
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("2"));
}

//____________________________________________________________________________
//
CSphinxOfJwarIsleCard::CSphinxOfJwarIsleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx of Jwar Isle"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddShroud(FALSE);

	{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

		//cpAbility->SetAbilityType(AbilityType::SplitSecond);
	cpAbility->SetRevealCardsToOthers(FALSE, FALSE);
	cpAbility->SetMaxTurnUsageCount(3);		// to prevent AI's infinite loop

	AddAbility(cpAbility.GetPointer());	
}
}

//____________________________________________________________________________
//
CDisfigureCard::CDisfigureCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Disfigure"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(-2), Life(-2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSadisticSacramentCard::CSadisticSacramentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sadistic Sacrament"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
			::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				MinimumValue(0), MaximumValue(3),
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
			::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				MinimumValue(0), MaximumValue(15),
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBurstLightningCard::CBurstLightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burst Lightning"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,	TRUE,
					Life(-2), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT,
				new AnyCreatureComparer,	TRUE,
					Life(-4), PreventableType::Preventable));	

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrontierGuideCard::CFrontierGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frontier Guide"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3") GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Battlefield, FALSE, FALSE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrazingGladehartCard::CGrazingGladehartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grazing Gladehart"), CardType::Creature, CREATURE_TYPE(Antelope), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreenweaverDruidCard::CGreenweaverDruidCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Greenweaver Druid"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CLotusCobraCard::CLotusCobraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lotus Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredProdManaAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZendikarFarguideCard::CZendikarFarguideCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zendikar Farguide"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CExpeditionMapCard::CExpeditionMapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Expedition Map"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"), 
			CCardFilter::GetFilter(_T("lands")), 
			ZoneId::Hand, true, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHedronScrabblerCard::CHedronScrabblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hedron Scrabbler"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrustyMacheteCard::CTrustyMacheteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trusty Machete"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkoumRefugeCard::CAkoumRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Akoum Refuge"), nID)
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
CGraypeltRefugeCard::CGraypeltRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Graypelt Refuge"), nID)
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
CJwarIsleRefugeCard::CJwarIsleRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Jwar Isle Refuge"), nID)
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
CKazanduRefugeCard::CKazanduRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kazandu Refuge"), nID)
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
CSejiriRefugeCard::CSejiriRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sejiri Refuge"), nID)
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
CKabiraCrossroadsCard::CKabiraCrossroadsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kabira Crossroads"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
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
}

//____________________________________________________________________________
//
CPiranhaMarshCard::CPiranhaMarshCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Piranha Marsh"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
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
CTurntimberGroveCard::CTurntimberGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Turntimber Grove"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
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
CSoaringSeacliffCard::CSoaringSeacliffCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Soaring Seacliff"), nID)
{
	SetIntoPlayTapped();

	{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
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
CBogTattersCard::CBogTattersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bog Tatters"), CardType::Creature, CREATURE_TYPE(Wraith), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CBoldDefenseCard::CBoldDefenseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bold Defense"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+2), CreatureKeyword::FirstStrike));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCallerOfGalesCard::CCallerOfGalesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caller of Gales"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaravanHurdaCard::CCaravanHurdaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caravan Hurda"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(5))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CCliffThreaderCard::CCliffThreaderCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Cliff Threader"), CardType::Creature, CREATURE_TYPE2(Kor, Scout), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CCryptRipperCard::CCryptRipperCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Crypt Ripper"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CHagraCrocodileCard::CHagraCrocodileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hagra Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

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
}

//____________________________________________________________________________
//
CHellfireMongrelCard::CHellfireMongrelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hellfire Mongrel"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHellfireMongrelCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHellfireMongrelCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CHellfireMongrelCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CNode* pToNode) const
{
	CZone* pHand = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

bool CHellfireMongrelCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pHand = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Hand);
	return pHand->GetSize() <= 2;
}

//____________________________________________________________________________
//
CLandbindRitualCard::CLandbindRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Landbind Ritual"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("plains")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMagmaRiftCard::CMagmaRiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magma Rift"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE,
			Life(-5), PreventableType::Preventable));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMarshCasualtiesCard::CMarshCasualtiesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Marsh Casualties"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer());

	{
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));
			
		CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield,& m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, true, false)));

		CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield,& m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(-1), true, false)));

		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier);
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier2);
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
		AddSpell(cpSpell.GetPointer());
	}
	{//Kicker Cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));
			
		CZoneCreatureModifier* pModifier3 = new CZoneCreatureModifier(ZoneId::Battlefield,& m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, true, false)));

		CZoneCreatureModifier* pModifier4 = new CZoneCreatureModifier(ZoneId::Battlefield,& m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(-2), true, false)));

		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier3);
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(pModifier4);

		cpSpell->SetAbilityText(_T("Casts kicked"));
		cpSpell->SetMainSpell(FALSE);
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMerfolkSeastalkersCard::CMerfolkSeastalkersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Merfolk Seastalkers"), CardType::Creature, CREATURE_TYPE2(Merfolk, Scout), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Islandwalk)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoltenRavagerCard::CMoltenRavagerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Molten Ravager"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(4),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CNimbusWingsCard::CNimbusWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Nimbus Wings"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CNobleVestigeCard::CNobleVestigeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Noble Vestige"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CParalyzingGraspCard::CParalyzingGraspCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Paralyzing Grasp"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
}

//____________________________________________________________________________
//
CSeismicShudderCard::CSeismicShudderCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Seismic Shudder"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Life(-1),	// life delta
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CShatterskullGiantCard::CShatterskullGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shatterskull Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CShieldmatesBlessingCard::CShieldmatesBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shieldmate's Blessing"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(3), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShoalSerpentCard::CShoalSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shoal Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkyRuinDrakeCard::CSkyRuinDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sky Ruin Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(5))
{
}

//____________________________________________________________________________
//
CSpidersilkNetCard::CSpidersilkNetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spidersilk Net"), CardType::Artifact | CardType::Equipment, nID, 
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pReachModifier = new CCreatureKeywordModifier;
	pReachModifier->GetModifier().SetToAdd(CreatureKeyword::Reach);
	pReachModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pReachModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpireBarrageCard::CSpireBarrageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spire Barrage"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Mountain, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpreadingSeasCard::CSpreadingSeasCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spreading Seas"), CardType::EnchantLand, nID)
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
		counted_ptr<CCardTypeEnchant> cpSpell(
			::CreateObject<CCardTypeEnchant>(this, _T("1") BLUE_MANA_TEXT, 
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->AddCardTypeToAdd(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Island"));
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CStoneworkPumaCard::CStoneworkPumaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonework Puma"), CardType::_ArtifactCreature, CREATURE_TYPE2(Cat, Ally), nID,
		_T("3"), Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CSummonersBaneCard::CSummonersBaneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Summoner's Bane"), CardType::Instant, nID)
{
	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, 					
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Illusion A"), 2774, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTerritorialBalothCard::CTerritorialBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Territorial Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVinesOfVastwoodCard::CVinesOfVastwoodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vines of Vastwood"), CardType::Instant, nID)
		, m_KickerCost(GREEN_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CVinesOfVastwoodCard::OnResolutionCompleted))

	, m_CardFilter(_T("this card's controller"), _T("this card's controllers"), new CardControllerComparer(this))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpSpell->GetCardKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter);

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CVinesOfVastwoodCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost) && bResult) // kicked?
	{
		CPowerModifier pModifier1 = CPowerModifier(Power(+4), TRUE);
		CLifeModifier pModifier2 = CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CWarrenInstigatorCard::CWarrenInstigatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warren Instigator"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAdventuringGearCard::CAdventuringGearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Adventuring Gear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAEtherFigmentCard::CAEtherFigmentCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Æther Figment"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
		, m_KickerCost(_T("3"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAEtherFigmentCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CAEtherFigmentCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CArrowVolleyTrapCard::CArrowVolleyTrapCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Arrow Volley Trap"), CardType::Instant | CardType::Trap, nID,
		AbilityType::Instant,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		new AttackingCreatureComparer, FALSE,
		Life(-5), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AttackingCreatureComparer, FALSE,
				Life(-5), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDistributeValues();

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CArrowVolleyTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CArrowVolleyTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nContAttacking = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard = pContInplay->GetAt(i);
		if (pContCard->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature = (CCreatureCard*)pContCard;
			if (pContCreature->IsAttacking() == TRUE)
				++nContAttacking;
		}
	}

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nOppAttacking = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsAttacking() == TRUE)
				++nOppAttacking;
		}
	}

	return nContAttacking + nOppAttacking >= 4;
}

//____________________________________________________________________________
//
CGatekeeperOfMalakirCard::CGatekeeperOfMalakirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gatekeeper of Malakir"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost(BLACK_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGatekeeperOfMalakirCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGatekeeperOfMalakirCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CBladeOfTheBloodchiefCard::CBladeOfTheBloodchiefCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blade of the Bloodchief"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"),
		new AnyCreatureComparer));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBladeOfTheBloodchiefCard::CreateEquipmentAbility1)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBladeOfTheBloodchiefCard::CreateEquipmentAbility2)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CBladeOfTheBloodchiefCard::CreateEquipmentAbility1(CCard* pCard)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(pCard));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBladeOfTheBloodchiefCard::SetTriggerContext1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CBladeOfTheBloodchiefCard::CreateEquipmentAbility2(CCard* pCard)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(pCard));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2, false)); // add two counter

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBladeOfTheBloodchiefCard::SetTriggerContext2));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CBladeOfTheBloodchiefCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0;
}

bool CBladeOfTheBloodchiefCard::SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CKorSanctifiersCard::CKorSanctifiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Sanctifiers"), CardType::Creature, CREATURE_TYPE2(Kor, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
		, m_KickerCost(WHITE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKorSanctifiersCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKorSanctifiersCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CBlazingTorchCard::CBlazingTorchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blazing Torch"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire) | CREATURE_TYPE(Zombie), false));
	m_CardFilter.SetFilterName(_T("a non Vampire or Zombie creature"), _T("non Vampire or Zombie creatures"));

	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		pModifier->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBlazingTorchCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CBlazingTorchCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""), new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpEquipAbility->AddTapCost();
	cpEquipAbility->GetCost().AddSacrificeThisCardCost(this);
	cpEquipAbility->GetTargeting()->SetSourceCard(this);

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodTributeCard::CBloodTributeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Blood Tribute"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE, Life(SpecialNumber::DivideBy2RoundUp),
		PreventableType::NotPreventable)
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);
	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	{
		//Kicker cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->GetCost().AddTapCardCost(1, &m_CardFilter);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodTributeCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CBloodTributeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int PrevLife = (int)pTarget->GetLife();
	CPlayer* pController = pAction->GetController();

	int LifeToLose = (PrevLife + 1)/2;
	if (LifeToLose > 0)
	{
		int LifeGain = 0;
		int NewLife  = 0;
		CLifeModifier pModifier1 = CLifeModifier(Life(-LifeToLose), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier1.ApplyTo(pTarget);
		NewLife = (int)pTarget->GetLife();
		if (NewLife < PrevLife)
			LifeGain += PrevLife - NewLife;

		if (LifeGain > 0)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(+LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier2.ApplyTo(pController);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CCryptOfAgadeemCard::CCryptOfAgadeemCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Crypt of Agadeem"), nID, CardType::NonbasicLand)
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));
		
		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {B} to your mana pool for each black creature card in your graveyard. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCryptOfAgadeemCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCryptOfAgadeemCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	int nCreatures = CCardFilter::GetFilter(_T("black creatures"))->CountIncluded(pZone->GetCardContainer());

	CManaPoolModifier modifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(CManaPoolBase::Color::Black, nCreatures));
	modifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDesecratedEarthCard::CDesecratedEarthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Desecrated Earth"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDesecratedEarthCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDesecratedEarthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, GetController());
	pModifier1.ApplyTo(pTarget);

	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	
	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier2.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CElectropotenceCard::CElectropotenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Electropotence"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElectropotenceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CElectropotenceCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CElectropotenceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CElectropotenceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nDamage = GET_INTEGER(pCreature->GetLastKnownPower());
	
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nDamage));
	pAction->SetTriggerContext(triggerContext);

	return nDamage > 0;
}

//____________________________________________________________________________
//
CExplorersScopeCard::CExplorersScopeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Explorer's Scope"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"),
		new AnyCreatureComparer));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CExplorersScopeCard::CreateEquipmentAbility1)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CExplorersScopeCard::CreateEquipmentAbility2)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CExplorersScopeCard::CreateEquipmentAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(1);

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
	cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CExplorersScopeCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetTapped(TRUE);
	cpAbility->SetSkipStack(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExplorersScopeCard::SetTriggerContext));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
	cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

	m_pTriggeredAbility = cpAbility.GetPointer();

	return counted_ptr<CAbility>(m_pTriggeredAbility);
}

bool CExplorersScopeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	CPlayer* cont = GetController();
	if (cont->GetZoneById(ZoneId::Library)->GetSize() == 0)  // if library contains no cards
	{
		return false;  // no point continuing, player does not lose game because he is looking at, not drawing the next card.
					   // The next card is only drawn if it is a land.  No card is not a land.
	}
	CCard* pTopCard = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	m_pTriggeredAbility->GetGatherer().GetSubjectCardFilter().SetComparer(new SpecificCardComparer(pTopCard)); 

	return (pTopCard->GetCardType().IsLand() && toCardKeyword == CardKeyword::Flash);
}

//____________________________________________________________________________
//
CFeastOfBloodCard::CFeastOfBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feast of Blood"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CFeastOfBloodCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

BOOL CFeastOfBloodCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) >= 2;
}

//____________________________________________________________________________
//
CFelidarSovereignCard::CFelidarSovereignCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Felidar Sovereign"), CardType::Creature, CREATURE_TYPE2(Cat, Beast), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFelidarSovereignCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFelidarSovereignCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFelidarSovereignCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();

	return pPlayer->GetLife() >= Life(40);
}

bool CFelidarSovereignCard::BeforeResolution(CFelidarSovereignCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();

	return pPlayer->GetLife() >= Life(40);
}

//____________________________________________________________________________
//
CGoblinBushwhackerCard::CGoblinBushwhackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Bushwhacker"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_KickerCost(RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinBushwhackerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinBushwhackerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CGoblinGuideCard::CGoblinGuideCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Guide"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		RED_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGoblinGuideCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGoblinGuideCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer = GetGame()->GetNextPlayer(pAbilityAction->GetController());

	if (pPlayer->GetZoneById(ZoneId::Library)->GetSize() == 0) return;
	CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

	if (!pCard->GetCardType().IsLand()) return;

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CGoblinRuinblasterCard::CGoblinRuinblasterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Ruinblaster"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
		, m_KickerCost(RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::NonbasicLand, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinRuinblasterCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinRuinblasterCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CGuulDrazSpecterCard::CGuulDrazSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Guul Draz Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+3), Life(+3)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Hand);
		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		cpAbility->SetConditionValue(0);
		cpAbility->SetConditionIsMaximum();

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Shadow);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

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

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CGuulDrazVampireCard::CGuulDrazVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guul Draz Vampire"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+1)));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
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
CGrimDiscoveryCard::CGrimDiscoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grim Discovery"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false), false,
				new CardTypeComparer(CardType::_Land, false), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->GetTargeting2()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrimDiscoveryCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));
	
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));
	
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}
	bool CGrimDiscoveryCard::BeforeResolution(CAbilityAction* pAction) const
	{
		CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

		CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others);
		pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

		CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others);
		pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

		return true;
	}

//____________________________________________________________________________
//
CHaloHunterCard::CHaloHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Halo Hunter"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(3))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
		
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Angel), false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________________
//
CHeartstabberMosquitoCard::CHeartstabberMosquitoCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Heartstabber Mosquito"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_KickerCost(_T("2") BLACK_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeartstabberMosquitoCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHeartstabberMosquitoCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CHagraDiabolistCard::CHagraDiabolistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hagra Diabolist"), CardType::Creature, CREATURE_TYPE3(Ogre, Shaman, Ally), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));
		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHagraDiabolistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHagraDiabolistCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CHighlandBerserkerCard::CHighlandBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Highland Berserker"), CardType::Creature, CREATURE_TYPE3(Human, Berserker, Ally), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
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

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHellkiteChargerCard::CHellkiteChargerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hellkite Charger"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	typedef 
		TTriggeredAbility< CTriggeredHellkiteChargerAbility, CWhenSelfAttackedBlocked,
						CWhenSelfAttackedBlocked::AttackEventCallback,
						&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionCost(_T("5") RED_MANA_TEXT RED_MANA_TEXT);

	AddAbility(cpAbility.GetPointer());
}


//____________________________________________________________________________
//
CKabiraEvangelCard::CKabiraEvangelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kabira Evangel"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Ally), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	{
		typedef
			TTriggeredAbility< 
				TTriggeredCardTypeEnchantmentAbility<TTriggerAdapter<CWhenCardKeywordChanged>>,
					CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetCardTypeComparer(std::auto_ptr<CardComparer>(new SpecificCardComparer(this)));

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
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKabiraEvangelCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKabiraEvangelCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKabiraEvangelCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

bool CKabiraEvangelCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if ((GetCardType() & CardType::Blue).Any())
		triggerContext.m_CardKeywordModifier.GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);

	if ((GetCardType() & CardType::Green).Any())
		triggerContext.m_CardKeywordModifier.GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);

	if ((GetCardType() & CardType::White).Any())
		triggerContext.m_CardKeywordModifier.GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);

	if ((GetCardType() & CardType::Red).Any())
		triggerContext.m_CardKeywordModifier.GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);

	if ((GetCardType() & CardType::Black).Any())
		triggerContext.m_CardKeywordModifier.GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);

	return (fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

//____________________________________________________________________________
//
CIonaShieldOfEmeriaCard::CIonaShieldOfEmeriaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Iona, Shield of Emeria"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(7), Life(7))
{
	{
		typedef
			TTriggeredAbility< 
				TTriggeredCardTypeEnchantmentAbility<TTriggerAdapter<CWhenCardKeywordChanged>>,
					CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCardTypeComparer(std::auto_ptr<CardComparer>(new SpecificCardComparer(this)));
		cpAbility->SetSkipStack(TRUE);

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
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE,
			(int)CCardFilter::GetFilter(_T("blue cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE,
			(int)CCardFilter::GetFilter(_T("green cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext4));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE,
			(int)CCardFilter::GetFilter(_T("white cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext5));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE,
			(int)CCardFilter::GetFilter(_T("red cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenCardKeywordChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIonaShieldOfEmeriaCard::SetTriggerContext6));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE,
			(int)CCardFilter::GetFilter(_T("black cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((GetCardType() & CardType::Blue).Any() && fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext3(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((GetCardType() & CardType::Green).Any() && fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext4(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((GetCardType() & CardType::White).Any() && fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext5(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((GetCardType() & CardType::Red).Any() && fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

bool CIonaShieldOfEmeriaCard::SetTriggerContext6(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return ((GetCardType() & CardType::Black).Any() && fromCardKeyword == CardKeyword::Flash && toCardKeyword == CardKeyword::Null);
}

//____________________________________________________________________________
//
CKalitasBloodchiefOfGhetCard::CKalitasBloodchiefOfGhetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalitas, Bloodchief of Ghet"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKalitasBloodchiefOfGhetCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKalitasBloodchiefOfGhetCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	Power nPower = pTarget->GetLastKnownPower();
	Life nToughness = pTarget->GetLastKnownToughness();

	int nCreatures1 = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	pModifier.ApplyTo(pTarget);

	int nCreatures2 = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	if (nCreatures2 > nCreatures1)
	{
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
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Vampire B"), 2778));		

			if (!m_pGame->IsThinking())
			{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2778); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Vampire B")); }

			pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
			CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

			pCreature->SetPrintedPower(nPower);
			pCreature->SetPrintedToughness(nToughness);		

			cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CJoragaBardCard::CJoragaBardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Joraga Bard"), CardType::Creature, CREATURE_TYPE3(Elf, Rogue, Ally), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(4))

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

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeascapeAerialistCard::CSeascapeAerialistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seascape Aerialist"), CardType::Creature, CREATURE_TYPE3(Merfolk, Wizard, Ally), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(3))
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

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKazanduBlademasterCard::CKazanduBlademasterCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Kazandu Blademaster"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Ally), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

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
CKazuulWarlordCard::CKazuulWarlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kazuul Warlord"), CardType::Creature, CREATURE_TYPE3(Minotaur, Warrior, Ally), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));
		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter
	/*cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetToBase(TRUE);
	cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetPowerModifier().SetToBase(TRUE);
	cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);*/

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorAeronautCard::CKorAeronautCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kor Aeronaut"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost(_T("1") WHITE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKorAeronautCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKorAeronautCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CKhalniGemCard::CKhalniGemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Khalni Gem"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									  CWhenSelfInplay::EventCallback,
									  &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, TRUE);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLethargyTrapCard::CLethargyTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lethargy Trap"), CardType::Instant | CardType::Trap,	nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT, 
				new AttackingCreatureComparer,
				Power(-3), Life(-0)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				BLUE_MANA_TEXT, 
				new AttackingCreatureComparer,
				Power(-3), Life(-0)));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CLethargyTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CLethargyTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nContAttacking = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard = pContInplay->GetAt(i);
		if (pContCard->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature = (CCreatureCard*)pContCard;
			if (pContCreature->IsAttacking() == TRUE)
				++nContAttacking;
		}
	}

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nOppAttacking = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsAttacking() == TRUE)
				++nOppAttacking;
		}
	}

	return nContAttacking + nOppAttacking >= 3;
}

//____________________________________________________________________________
//
CBalaGedThiefCard::CBalaGedThiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bala Ged Thief"), CardType::Creature, CREATURE_TYPE3(Human, Rogue, Ally), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetToZone(ZoneId::_Tokens);
		cpAbility->SetDiscardMoveType(MoveType::Others);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBalaGedThiefCard::BeforeResolution));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalaGedThiefCard::SetTriggerContext1));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalaGedThiefCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBalaGedThiefCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_nDiscardCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CBalaGedThiefCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

bool CBalaGedThiefCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
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
CMakindiShieldmateCard::CMakindiShieldmateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Makindi Shieldmate"), CardType::Creature, CREATURE_TYPE3(Kor, Soldier, Ally), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(3))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	GetCreatureKeyword()->AddDefender(FALSE);

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
CMindlessNullCard::CMindlessNullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindless Null"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pBlockAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CMindlessNullCard::CanBlock)));

	m_pBlockAbility->Add(cpTrait.GetPointer());
}

BOOL CMindlessNullCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CMoldShamblerCard::CMoldShamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mold Shambler"), CardType::Creature, CREATURE_TYPE2(Fungus, Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_KickerCost(_T("1") GREEN_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoldShamblerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMoldShamblerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CMurasaPyromancerCard::CMurasaPyromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Murasa Pyromancer"), CardType::Creature, CREATURE_TYPE3(Human, Shaman, Ally), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));
		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMurasaPyromancerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMurasaPyromancerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CNimanaSellSwordCard::CNimanaSellSwordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nimana Sell-Sword"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Ally), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
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

//____________________________________________________________________________
//
COnduClericCard::COnduClericCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ondu Cleric"), CardType::Creature, CREATURE_TYPE3(Kor, Cleric, Ally), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));
		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COnduClericCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool COnduClericCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
COranRiefSurvivalistCard::COranRiefSurvivalistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oran-Rief Survivalist"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Ally), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
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

//____________________________________________________________________________
//
COranRiefRecluseCard::COranRiefRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oran-Rief Recluse"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
	, m_KickerCost(_T("2") GREEN_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, FALSE));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COranRiefRecluseCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COranRiefRecluseCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CPitfallTrapCard::CPitfallTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pitfall Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT, 
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT, 
				new AttackingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CPitfallTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CPitfallTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nContAttacking = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard = pContInplay->GetAt(i);
		if (pContCard->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature = (CCreatureCard*)pContCard;
			if (pContCreature->IsAttacking() == TRUE)
				++nContAttacking;
		}
	}

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nOppAttacking = 0;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsAttacking() == TRUE)
				++nOppAttacking;
		}
	}

	return nContAttacking + nOppAttacking == 1;
}

//____________________________________________________________________________
//
CRelicCrushCard::CRelicCrushCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Relic Crush"), CardType::Instant, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, 2);
}

//____________________________________________________________________________
//
CSurrakarMarauderCard::CSurrakarMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Surrakar Marauder"), CardType::Creature, CREATURE_TYPE(Surrakar), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________________
//
CTajuruArcherCard::CTajuruArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tajuru Archer"), CardType::Creature, CREATURE_TYPE3(Elf, Archer, Ally), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, FALSE));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTajuruArcherCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTajuruArcherCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CTempestOwlCard::CTempestOwlCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tempest Owl"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
	, m_KickerCost(_T("4") BLUE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetSubjectCount(0, 3, FALSE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTempestOwlCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTempestOwlCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CTorchSlingerCard::CTorchSlingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Torch Slinger"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_KickerCost(_T("1") RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTorchSlingerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTorchSlingerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CTuktukGruntsCard::CTuktukGruntsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Tuktuk Grunts"), CardType::Creature, CREATURE_TYPE3(Goblin, Warrior, Ally), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
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

//____________________________________________________________________________
//
CUmaraRaptorCard::CUmaraRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Umara Raptor"), CardType::Creature, CREATURE_TYPE2(Bird, Ally), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVampireLaceratorCard::CVampireLaceratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Lacerator"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVampireLaceratorCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CVampireLaceratorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return m_pGame->GetNextPlayer(GetController())->GetLife() > Life(10);
}

//____________________________________________________________________________
//
CWindborneChargeCard::CWindborneChargeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Windborne Charge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(2, 2);
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CMalakirBloodwitchCard::CMalakirBloodwitchCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Malakir Bloodwitch"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMalakirBloodwitchCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMalakirBloodwitchCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));

	int n = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());
	
	if (n > 0)
	{
		int LifeGain = 0;
		int PrevLife = 0;
		int NewLife  = 0;
		CLifeModifier pModifier1 = CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			if (pPlayer != pController)
			{
				PrevLife = (int)pPlayer->GetLife();
				pModifier1.ApplyTo(pPlayer);
				NewLife = (int)pPlayer->GetLife();
				if (NewLife < PrevLife)
					LifeGain += PrevLife - NewLife;
			}
		}

		if (LifeGain > 0)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(+LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier2.ApplyTo(pController);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CMerfolkWayfinderCard::CMerfolkWayfinderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Merfolk Wayfinder"), CardType::Creature, CREATURE_TYPE2(Merfolk, Scout), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMerfolkWayfinderCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(3);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CMerfolkWayfinderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 3;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Island).Any())
			matchingCards.AddCard(pCard, CardPlacement::Top);

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
CMireBlightCard::CMireBlightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mire Blight"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CMireBlightCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CMireBlightCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::CreatureEventCallback, 
							&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMireBlightCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CMireBlightCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = (CCard*)pToCreature;
	return true;
}

//____________________________________________________________________________
//
CMindbreakTrapCard::CMindbreakTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mindbreak Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
				new TrueCardComparer,
				ZoneId::Stack, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T(""), 
				new TrueCardComparer,
				ZoneId::Stack, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CMindbreakTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMindbreakTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return m_pGame->GetNextPlayer(GetController())->GetTurnCastedSpellCount() >= 3;
}

//____________________________________________________________________________
//
CNissaRevaneCard::CNissaRevaneCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Nissa Revane"), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		PlaneswalkerType::Nissa, 2)
	, m_CardFilter1(_T("a card named Nissa's Chosen"), _T("cards named Nissa's Chosen"), new CardNameComparer(_T("Nissa's Chosen")))
	, m_CardFilter2(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter1, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeBySurveySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeBySurveySpell>>(this,
				_T("")));

		cpAbility->SetCardsMultiplier(2, &m_CardFilter2, ZoneId::Battlefield);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter2, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CObNixilisTheFallenCard::CObNixilisTheFallenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ob Nixilis, the Fallen"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +3));
//		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
//		cpAbility->GetLifeModifier().SetToBase(TRUE);
//		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
//		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
//		cpAbility->GetPowerModifier().SetToBase(TRUE);
//		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CObNixilisTheFallenCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CObNixilisTheFallenCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
												const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CPredatoryUrgeCard::CPredatoryUrgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Predatory Urge"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("3") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPredatoryUrgeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPredatoryUrgeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpEnchantAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(pEnchantedCard, 
			_T(""),	new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetReceiveDamageFromTargetedCreature();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimalBellowCard::CPrimalBellowCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Primal Bellow"), CardType::Instant, nID, AbilityType::Instant,
	    GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalBellowCard::BeforeResolution));
}

bool CPrimalBellowCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nForestCount = CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nForestCount;
	Context.nValue2 = nForestCount;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
	it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CRuinousMinotaurCard::CRuinousMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ruinous Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								  CWhenSelfDamageDealt::PlayerEventCallback, 
								  &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, FALSE));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRuneflareTrapCard::CRuneflareTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Runeflare Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
			::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				ZoneId::Hand, FALSE,
				new TrueCardComparer, PreventableType::Preventable));

		AddSpell(cpSpell.GetPointer());
	}
	{ //ACC
		counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
			::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				ZoneId::Hand, FALSE,
				new TrueCardComparer, PreventableType::Preventable));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRuneflareTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CRuneflareTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return m_pGame->GetNextPlayer(GetController())->GetTurnDrawCount() >= 3;
}

//____________________________________________________________________________
//
CSeaGateLoremasterCard::CSeaGateLoremasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sea Gate Loremaster"), CardType::Creature, CREATURE_TYPE3(Merfolk, Wizard, Ally), nID,
		_T("4") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell2>>(this,
			_T(""),	ZoneId::Battlefield, TRUE, FALSE));

	cpAbility->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ally), false));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSphinxOfLostTruthsCard::CSphinxOfLostTruthsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx of Lost Truths"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(5))
	, m_KickerCost(_T("1") BLUE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(3);
		
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSphinxOfLostTruthsCard::SetTriggerContext));

	m_pTriggeredAbility = cpAbility.GetPointer();
	AddAbility(m_pTriggeredAbility);
}

bool CSphinxOfLostTruthsCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)	return false;
		
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
		m_pTriggeredAbility->SetDiscard(0, FALSE, MoveType::Discard);
	else
		m_pTriggeredAbility->SetDiscard(3, FALSE, MoveType::Discard);

	return true;
}

//____________________________________________________________________________
//
CTanglesapCard::CTanglesapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tanglesap"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Trample, FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimbermawLarvaCard::CTimbermawLarvaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timbermaw Larva"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTimbermawLarvaCard::BeforeResolution));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

bool CTimbermawLarvaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CTurntimberRangerCard::CTurntimberRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Turntimber Ranger"), CardType::Creature, CREATURE_TYPE3(Elf, Scout, Ally), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Wolf F"), 2952, 1);

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrailblazersBootsCard::CTrailblazersBootsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trailblazer's Boots"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::NonBasicWalk);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	pModifier->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagositheWaterveilCard::CMagositheWaterveilCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Magosi, the Waterveil"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this, BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(EON_COUNTER, +1));
		cpAbility->AddTapCost();
		cpAbility->SetAffectOpponentsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this, _T(""),
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(EON_COUNTER), -1);
		cpAbility->GetCost().AddReturnThisCardCost(this);
		cpAbility->AddTapCost();
		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTrapfindersTrickCard::CTrapfindersTrickCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Trapfinder's Trick"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a Trap card"), _T("Trap cards"), new CardTypeComparer(CardType::Trap, false))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			SpecialNumber::All, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			&m_CardFilter));

	cpSpell->SetShowHandBeforeDiscards();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTrapmakersSnareCard::CTrapmakersSnareCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Trapmaker's Snare"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		&m_CardFilter,
		ZoneId::Hand, TRUE, TRUE, FALSE)
	, m_CardFilter(_T("a Trap card"), _T("Trap cards"), new CardTypeComparer(CardType::Trap, false))
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CKhalniHeartExpeditionCard::CKhalniHeartExpeditionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Khalni Heart Expedition"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKhalniHeartExpeditionCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); // Don't forget this line if you want add "force AI to put a counter" to other cards
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
		  		_T(""), CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Battlefield, FALSE, FALSE, TRUE));

		cpAbility->AddSacrificeCost();
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKhalniHeartExpeditionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())            
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}

//____________________________________________________________________________
//
CIorRuinExpeditionCard::CIorRuinExpeditionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ior Ruin Expedition"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIorRuinExpeditionCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 2));

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIorRuinExpeditionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())           
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//____________________________________________________________________________
//
CSoulStairExpeditionCard::CSoulStairExpeditionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soul Stair Expedition"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSoulStairExpeditionCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetSubjectCount(0, 2);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSoulStairExpeditionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//_________________________________________________________________________________
//
CSunspringExpeditionCard::CSunspringExpeditionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sunspring Expedition"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunspringExpeditionCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+8), PreventableType::NotPreventable));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);	
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunspringExpeditionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//_________________________________________________________________________________
//
CZektarShrineExpeditionCard::CZektarShrineExpeditionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Zektar Shrine Expedition"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZektarShrineExpeditionCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CZektarShrineExpeditionCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CZektarShrineExpeditionCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}

bool CZektarShrineExpeditionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental B"), 2759, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//_________________________________________________________________________________
//
CQuestfortheGravelordCard::CQuestfortheGravelordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for the Gravelord"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestfortheGravelordCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Zombie Giant"), 2822, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestfortheGravelordCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//_________________________________________________________________________________
//
CQuestforAncientSecretsCard::CQuestforAncientSecretsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for Ancient Secrets"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestforAncientSecretsCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerCardsSpell>>(this,
			_T(""),
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("cards"))));

		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE);
		pCardModifier->SetShuffle(TRUE);
		cpAbility->AddCardModifier(pCardModifier);

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -5);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuestforAncientSecretsCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	
	if (GetController()->IsComputer())
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	return true;
}
//_________________________________________________________________________________
//
CQuestforPureFlameCard::CQuestforPureFlameCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for Pure Flame"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this, _T(""),
				PlayerEffectType::MultiplyDamage, TRUE, 1));

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -4);
		
		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//________________________________________________________________________________________
//
CJourneyToNowhereCard::CJourneyToNowhereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Journey to Nowhere"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CJourneyToNowhereCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJourneyToNowhereCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJourneyToNowhereCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CJourneyToNowhereCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJourneyToNowhereCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJourneyToNowhereCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CJourneyToNowhereCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CJourneyToNowhereCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CJourneyToNowhereCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CJourneyToNowhereCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CJourneyToNowhereCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
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

void CJourneyToNowhereCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CEternityVesselCard::CEternityVesselCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eternity Vessel"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEternityVesselCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetReplacement(true);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEternityVesselCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CEternityVesselCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCounterCount));
	pAction->SetTriggerContext(triggerContext);

	return true;
}

void CEternityVesselCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		int nCounterCount = GET_INTEGER(GetController()->GetLife());

		CCardCounterModifier modifier(CHARGE_COUNTER, nCounterCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CBloodchiefAscensionCard::CBloodchiefAscensionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bloodchief Ascension"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodchiefAscensionCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodchiefAscensionCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodchiefAscensionCard::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
}
	
bool CBloodchiefAscensionCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->GetNextPlayer(GetController())->GetTotalLifeLossTakenThisTurn() >= Life(2);
}

bool CBloodchiefAscensionCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount() < 3)
		return false;

	triggerContext.nValue1 = (int)pToZone->GetPlayer();

	return true;
}

bool CBloodchiefAscensionCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount() < 3)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CLifeModifier modifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage | DamageType::AbilityDamage);
	modifier.ApplyTo((CPlayer*)triggerContext.nValue1);
	modifier.RemoveFrom(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CLuminarchAscensionCard::CLuminarchAscensionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Luminarch Ascension"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLuminarchAscensionCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLuminarchAscensionCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			_T("Angel F"), 2998, 1));
			
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CLuminarchAscensionCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
	
bool CLuminarchAscensionCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetController()->GetTotalLifeLossTakenThisTurn() == Life(0);
}

bool CLuminarchAscensionCard::BeforeResolution(CAbilityAction* pAction) const
{
	return GetController()->GetTotalLifeLossTakenThisTurn() == Life(0);
}

BOOL CLuminarchAscensionCard::CanPlay(BOOL bIncludeTricks)
{
	return GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount() >= 4;
}

//____________________________________________________________________________
//
CQuestfortheGembladesCard::CQuestfortheGembladesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for the Gemblades"), CardType::GlobalEnchantment, nID, 
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
								CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(QUEST_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("0"),
				new AnyCreatureComparer,
				false));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -1);
		cpAbility->AddSacrificeCost();

		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +4));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArchiveTrapCard::CArchiveTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Archive Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				13));

		ATLASSERT(cpSpell);
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T(""),
				13));

		ATLASSERT(cpSpell);
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
					&CArchiveTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CArchiveTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return m_pGame->GetNextPlayer(GetController())->GetSearchedLibraryThisTurn();
}

//____________________________________________________________________________
//
CEldraziMonumentCard::CEldraziMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eldrazi Monument"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::Flying));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectControllerCardsOnly();
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);	
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COranRieftheVastwoodCard::COranRieftheVastwoodCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Oran-Rief, the Vastwood"), nID, CardType::NonbasicLand)
	, m_CardFilter(new CardTypeComparer(CardType::Green | CardType::Creature, true))
{
	m_CardFilter.AddComparer(new CameThisTurnIntoPlayComparer);

	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each green creature that entered the battlefield this turn. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COranRieftheVastwoodCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COranRieftheVastwoodCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier modifier(ZoneId::Battlefield, &m_CardFilter, std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		modifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CCelestialMantleCard::CCelestialMantleCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Celestial Mantle"), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+3), Life(+3))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CCelestialMantleCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CCelestialMantleCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(2)*(GetController()->GetLife()));
	cpAbility->GetLifeModifier().SetReplacement(TRUE);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVampiresBiteCard::CVampiresBiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vampire's Bite"), CardType::Instant, nID)
		, m_KickerCost(_T("2") BLACK_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CVampiresBiteCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(+3), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CVampiresBiteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost) && bResult) // kicked?
	{
		CCardKeywordModifier pModifier = CCardKeywordModifier();
			pModifier.GetModifier().SetToAdd(CardKeyword::Lifelink);
			pModifier.GetModifier().SetOneTurnOnly(TRUE);

		pModifier.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CBloodghastCard::CBloodghastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodghast"), CardType::Creature, CREATURE_TYPE2(Vampire, Spirit), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckLife();
		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		cpAbility->SetConditionValue(10);
		cpAbility->SetConditionIsMaximum();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CBloodghastCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CBloodghastCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CBloodghastCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CBloodghastCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}
//____________________________________________________________________________
//
CUnstableFootingCard::CUnstableFootingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unstable Footing"), CardType::Instant, nID)
{
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				PlayerEffectType::CantPreventDamage, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-5), PreventableType::Preventable));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnstableFootingCard::BeforeResolution));
		
		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CUnstableFootingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerEffectModifier pModifier = CPlayerEffectModifier(PlayerEffectType::CantPreventDamage);

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CVampireHexmageCard::CVampireHexmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Hexmage"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new TrueCardComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCounterMultiplyModifier(0));

		cpAbility->AddSacrificeCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWorldQuellerCard::CWorldQuellerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("World Queller"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
		, m_CardFilterSelection(pGame,CSelectionSupport::SelectionCallback(this, &CWorldQuellerCard::OnCardFilterSelected))
{	

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWorldQuellerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CWorldQuellerCard::BeforeResolution(CWorldQuellerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	std::vector<SelectionEntry> entries;
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("creatures"));
		selectionEntry.strText.Format(_T("choose creatures"));

		entries.push_back(selectionEntry);
		}		
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("lands"));
		selectionEntry.strText.Format(_T("choose lands"));

		entries.push_back(selectionEntry);
		}		
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("enchantments"));
		selectionEntry.strText.Format(_T("choose enchantments"));

		entries.push_back(selectionEntry);
		}		
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("artifact cards"));
		selectionEntry.strText.Format(_T("choose artifact cards"));

		entries.push_back(selectionEntry);
		}		
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("sorcery cards"));
		selectionEntry.strText.Format(_T("choose sorcery cards"));

		entries.push_back(selectionEntry);
		}	
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("instant cards"));
		selectionEntry.strText.Format(_T("choose instant cards"));

		entries.push_back(selectionEntry);
		}	
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("planeswalkers"));
		selectionEntry.strText.Format(_T("choose planeswalker"));

		entries.push_back(selectionEntry);
		}	
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("tribal cards"));
		selectionEntry.strText.Format(_T("choose tribal"));

		entries.push_back(selectionEntry);
		}	


    m_CardFilterSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());

	return true;
}
void CWorldQuellerCard::OnCardFilterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			(CCardFilter*)it->dwContext, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Sacrifice, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
			pModifier.ApplyTo(GetController());
			pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));


			return;
		}
		return;
}
//____________________________________________________________________________
//
CBeastmasterAscensionCard::CBeastmasterAscensionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Beastmaster Ascension"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+5), Life(+5)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(QUEST_COUNTER, 7));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
	}
	{
			typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQuestfortheHolyRelicCard::CQuestfortheHolyRelicCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quest for the Holy Relic"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
		, pEquipment(NULL)
		, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CQuestfortheHolyRelicCard::OnSelectionDone))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuestfortheHolyRelicCard::SetTriggerContext));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		m_pTriggeredAbility = cpAbility.GetPointer(); 
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(QUEST_COUNTER), -5);
		cpAbility->AddSacrificeCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuestfortheHolyRelicCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CQuestfortheHolyRelicCard::BeforeResolution(CAbilityAction* pAction) 
{
	CCountedCardContainer found;
	CPlayer* searcher = pAction->GetController();
	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Equipment, false));


	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(searcher, MinimumValue(0), MaximumValue(1), searcher, 
															ZoneId::Library, &temp, ZoneId::Battlefield,TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &found);

	pModifier1.ApplyTo(searcher);

	if (found.GetSize() == 1)
	{
	pEquipment = found.GetAt(0);
	temp.SetComparer(new AnyCreatureComparer);
	CZone* pZone = searcher->GetZoneById(ZoneId::Battlefield);
	std::vector<SelectionEntry> entries;

	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (temp.IsCardIncluded(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;

			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

				entry.strText.Format(_T("equip %s"),
					pCreatureCard->GetCreatureName(TRUE));
			}
			else
				entry.strText.Format(_T("equip %s"),
				pCard->GetCardName());

			entries.push_back(entry);
		}
	}
		
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
			NULL,
			searcher); 
	}
	return TRUE;
}
void CQuestfortheHolyRelicCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();
	

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)(it->dwContext);
			CEquipModifier pModifier = CEquipModifier(pEquipment, FALSE);
			
			pModifier.ApplyTo(pCard);
		}
	
}

bool CQuestfortheHolyRelicCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	
	if (GetController()->IsComputer())          
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 

	return true;
}
//_________________________________________________________________________________
//
CSummoningTrapCard::CSummoningTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Summoning Trap"), CardType::Instant | CardType::Trap, nID)
{
	{		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSummoningTrapCard::BeforeResolution));

		cpSpell->SetAbilityText(_T("casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("")));
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSummoningTrapCard::BeforeResolution));

		cpSpell->SetAbilityText(_T("casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CSummoningTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSummoningTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return GetController()->GetCreatureCounteredByOpponent();
}

bool CSummoningTrapCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 7, CZoneModifier::RoleType::PrimaryPlayer);

	if (!pAction->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage))
	{
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select up to 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // any cards
		ZoneId::Battlefield, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	}

	// and finally reorder the last one to the bottom of library
	pModifier->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Bottom);
		
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CRiteofReplicationCard::CRiteofReplicationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rite of Replication"), CardType::Sorcery, nID)
	, m_KickerCost(_T("5"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CRiteofReplicationCard::OnResolutionCompleted))
{	
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Put a token that's a copy of target creature onto the battlefield. Casts"));

	AddSpell(cpSpell.GetPointer());
}

void CRiteofReplicationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCardCopyModifier modifier = CCardCopyModifier(GetGame(), this);
	modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
		
	if (pAbilityAction->GetCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
COracleofMulDayaCard::COracleofMulDayaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oracle of Mul Daya"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &COracleofMulDayaCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromLibraryTop,
			(int)CCardFilter::GetFilter(_T("lands"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
		::CreateObject<CPlayExtraLandEnchantment>(this, +1));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void COracleofMulDayaCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !GetGame()->IsThinking())
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
CLorthostheTidemakerCard::CLorthostheTidemakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lorthos, the Tidemaker"), CardType::Creature, CREATURE_TYPE(Octopus), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(8))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLorthostheTidemakerCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

		cpAbility->GetGatherer().SetSubjectCount(0, 8);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetResolutionCost(_T("8"));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}	
}
void CLorthostheTidemakerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	pModifier->ApplyTo(pAbilityAction->GetAssociatedCard()); // Last known controller should be used here
}
//____________________________________________________________________________
//
CPunishingFireCard::CPunishingFireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Punishing Fire"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPunishingFireCard::SetTriggerContext));		
	cpAbility->GetTrigger().SetThisIsInplayOnly(FALSE);
	cpAbility->SetResolutionCost(RED_MANA_TEXT);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CPunishingFireCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	return (nToLife > nFromLife && GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CKorOutfitterCard::CKorOutfitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Outfitter"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredDoubleTargetAbility< CTriggeredEquipCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	
	cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
	cpAbility->GetTargeting1().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting2().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Positive);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorDuelistCard::CKorDuelistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Duelist"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CEquipPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CEquipPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::DoubleStrike));		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSavageSilhouetteCard::CSavageSilhouetteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Savage Silhouette"), nID, 
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+2), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSavageSilhouetteCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSavageSilhouetteCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("1") GREEN_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
/*
CObsidianFireheartCard::CObsidianFireheartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obsidian Fireheart"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
		, m_cpAListener(VAR_NAME(m_cpAListener), 
	CounterMovedEventSource::Listener::EventCallback(this, &CObsidianFireheartCard::OnCounterMoved))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CObsidianFireheartCard::OnResolutionCompleted))
	, m_cpCListener(VAR_NAME(m_cpCListener), CardMovementEventSource::Listener::EventCallback(this, &CObsidianFireheartCard::OnZoneChanged))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new CardCounterComparer<std::equal_to<int>>(BLAZE_COUNTER, 0)), FALSE);
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(
			new CCardCounterModifier(BLAZE_COUNTER, +1));

		CCardAbilityModifier* pModifier = new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
			&CObsidianFireheartCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CObsidianFireheartCard::ForceStart));
		cpAbility->GetTargetModifier().Add(pModifier);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}
void CObsidianFireheartCard::ForceStart(CAbility* pAbility) const
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	((TriggeredAbility*)pAbility)->GetTrigger().ForceStart();
}
counted_ptr<CAbility> CObsidianFireheartCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->SetAbilityName(_T("Land burning ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
void CObsidianFireheartCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	pAbilityAction->GetAssociatedCard()->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	pAbilityAction->GetAssociatedCard()->GetMovedEventSource()->AddListener(m_cpCListener.GetPointer());
	m_AffectedCards.Add(pAbilityAction->GetAssociatedCard());
}
void CObsidianFireheartCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (!n_value && !pFromCard->GetCounterContainer()->GetCounter(BLAZE_COUNTER)->GetCount())
	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pFromCard == pCard1)
		{
			CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			CCardAbilityModifier* pModifier = new CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CObsidianFireheartCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CObsidianFireheartCard::ForceStart));
			cpAbility->GetTargetModifier().Add(pModifier);
			pModifier->RemoveFrom(pCard1);
			pCard1->GetCounterMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());
			pCard1->GetMovedEventSource()->RemoveListener(m_cpCListener.GetPointer());
		}
	}
}
void CObsidianFireheartCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
		{
			CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			CCardAbilityModifier* pModifier = new CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CObsidianFireheartCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CObsidianFireheartCard::ForceStart));
			cpAbility->GetTargetModifier().Add(pModifier);
			pModifier->RemoveFrom(pCard1);
			pCard1->GetCounterMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());
			pCard1->GetMovedEventSource()->RemoveListener(m_cpCListener.GetPointer());
		}
	}
}
*/
//____________________________________________________________________________
//
CPyromancerAscensionCard::CPyromancerAscensionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyromancer Ascension"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(QUEST_COUNTER, +1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyromancerAscensionCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("Counter add ability"));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyromancerAscensionCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetAbilityName(_T("Spell copy ability"));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CPyromancerAscensionCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	
	if (GetController()->IsComputer())            // Made for AI to put counter more often (I think other similar Zendikar Cards should also have such an update)
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 


	for (int i = 0; i < GetController()->GetZoneById(ZoneId::Graveyard)->GetSize(); ++i)
		if (GetController()->GetZoneById(ZoneId::Graveyard)->GetAt(i)->GetPrintedCardName() == pCard->GetPrintedCardName()) 
			return true;

	return false;
}
bool CPyromancerAscensionCard::SetTriggerContext2(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	if (GetCounterContainer()->GetCounter(QUEST_COUNTER)->GetCount() < 2)
		return false;

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
CChandraAblazeCard::CChandraAblazeCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Chandra Ablaze"), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Chandra, 5)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChandraAblazeCard::OnCardSelected))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, true));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChandraAblazeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this,
				_T(""), 3, 3));

		cpAbility->SetDiscardHand(TRUE);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChandraAblazeUltimateSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChandraAblazeUltimateSpell>>(this,
				_T(""), &m_CardFilter));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChandraAblazeCard::BeforeResolution(CAbilityAction* pAction)
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
									
			entry.strText.Format(_T("Discard %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		CCard* pTargetCard = pAction->GetAssociatedCard();
		CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();
		if (pTargetCard)
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCard, 0);
		else
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetPlayer, 1);
	}
	return true;
}

void CChandraAblazeCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
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
				BOOL bRed = pCard->IsColor(CManaPoolBase::Color::Red);

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				if ((bRed == TRUE) && (pCard->GetZoneId() != ZoneId::Library)) // this is to take care of corner case with Library of Leng
				{
					CLifeModifier pModifier = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

					if (dwContext2 == 0)
					{
						CCreatureCard* pCreature = (CCreatureCard*)dwContext1;
						pModifier.ApplyTo(pCreature);
					}
					else
					{
						CPlayer* pPlayer = (CPlayer*)dwContext1;
						pModifier.ApplyTo(pPlayer);
					}
				}
				return;
			}
		}
}

//____________________________________________________________________________
//
CGomazoaCard::CGomazoaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gomazoa"), CardType::Creature, CREATURE_TYPE(Jellyfish), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGomazoaCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGomazoaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer ReturnedCards;

	if (IsInplay())
		ReturnedCards.AddCard((CCard*)this, CardPlacement::Top);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			if (pBattlefield->GetAt(i)->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pBattlefield->GetAt(i);
				if (this->IsBlocking(pCreature))
					ReturnedCards.AddCard(pCreature, CardPlacement::Top);
			}
		}
	}

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new ContainedinComparer(&ReturnedCards));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CCardFilter m_OwnerFilter;
		m_OwnerFilter.SetComparer(new CardOwnerComparer(GetGame()->GetPlayer(ip)));

		if (m_OwnerFilter.CountIncluded(ReturnedCards) > 0)
			GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Library)->Shuffle();
	}

	return true;
}

//____________________________________________________________________________
//
CBalothCageTrapCard::CBalothCageTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Baloth Cage Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast G"), 2864,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				_T("Beast G"), 2864,
				1));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CBalothCageTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CBalothCageTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != GetController() && (pPlayer->GetCertainTypeEnteredBattlefieldCount(CardType::Artifact) > 0))
		{
			bFound = true;
			break;
		}
	}

	return bFound;
}

//____________________________________________________________________________
//
CLavaballTrapCard::CLavaballTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lavaball Trap"), CardType::Instant | CardType::Trap, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CLavaballTrapCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("6") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CLavaballTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CLavaballTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != GetController() && (pPlayer->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 1))
		{
			bFound = true;
			break;
		}
	}

	return bFound;
}

void CLavaballTrapCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
}

//____________________________________________________________________________
//
CWhiplashTrapCard::CWhiplashTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whiplash Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false), 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false), 
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CWhiplashTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CWhiplashTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != GetController() && (pPlayer->GetCertainTypeEnteredBattlefieldCount(CardType::Creature) > 1))
		{
			bFound = true;
			break;
		}
	}

	return bFound;
}

//____________________________________________________________________________
//
CNeedlebiteTrapCard::CNeedlebiteTrapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Needlebite Trap"), CardType::Instant | CardType::Trap, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
				FALSE_CARD_COMPARER, true,
				Life(-5), PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+5), this, PreventableType::NotPreventable));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT, 
				FALSE_CARD_COMPARER, true,
				Life(-5), PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+5), this, PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CNeedlebiteTrapCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CNeedlebiteTrapCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	bool LifeGained = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetLifeGainThisTurn() > Life(0)))
		{
			LifeGained = true;
			break;
		}

	return LifeGained;
}

//____________________________________________________________________________
//
CKorHookmasterCard::CKorHookmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Hookmaster"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKorHookmasterCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKorHookmasterCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//