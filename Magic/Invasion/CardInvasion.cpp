#include "stdafx.h"
#include "CardInvasion.h"

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

		DEFINE_CARD(CAbsorbCard);
		DEFINE_CARD(CAddleCard);
		DEFINE_CARD(CAEtherRiftCard);
		DEFINE_CARD(CAgonizingDemiseCard);
		DEFINE_CARD(CAlabasterLeechCard);
		DEFINE_CARD(CAlloyGolemCard);
		DEFINE_CARD(CAncientKavuCard);
		DEFINE_CARD(CAncientSpringCard);
		DEFINE_CARD(CAndraditeLeechCard);
		DEFINE_CARD(CAngelicShieldCard);
		DEFINE_CARD(CAnnihilateCard);
		DEFINE_CARD(CArchaeologicalDigCard);
		DEFINE_CARD(CArdentSoldierCard);
		DEFINE_CARD(CArmadilloCloakCard);
		DEFINE_CARD(CArmoredGuardianCard);
		DEFINE_CARD(CArtifactMutationCard);
		DEFINE_CARD(CAssaultBatteryCard);
		DEFINE_CARD(CAtalyaSamiteMasterCard);
		DEFINE_CARD(CAuraMutationCard);
		DEFINE_CARD(CAuraShardsCard);
		DEFINE_CARD(CBacklashCard);
		DEFINE_CARD(CBenalishEmissaryCard);
		DEFINE_CARD(CBenalishHeraldsCard);
		DEFINE_CARD(CBenalishLancerCard);
		DEFINE_CARD(CBenalishTrapperCard);
		DEFINE_CARD(CBindCard);
		DEFINE_CARD(CBlazingSpecterCard);
		DEFINE_CARD(CBlindSeerCard);
		DEFINE_CARD(CBloodstoneCameoCard);
		DEFINE_CARD(CBlurredMongooseCard);
		DEFINE_CARD(CBogInitiateCard);
		DEFINE_CARD(CBreathOfDarigaazCard);
		DEFINE_CARD(CCanopySurgeCard);
		DEFINE_CARD(CCapashenUnicornCard);
		DEFINE_CARD(CCaptainSisayCard);
		DEFINE_CARD(CCauldronDanceCard);
		DEFINE_CARD(CChaoticStrikeCard);
		DEFINE_CARD(CChargingTrollCard);
		DEFINE_CARD(CChromaticSphereCard);
		DEFINE_CARD(CCinderShadeCard);
		DEFINE_CARD(CCoalitionVictoryCard);
		DEFINE_CARD(CCollapsingBordersCard);
		DEFINE_CARD(CCollectiveRestraintCard);
		DEFINE_CARD(CCremateCard);
		DEFINE_CARD(CCrimsonAcolyteCard);
		DEFINE_CARD(CCrosissAttendantCard);
		DEFINE_CARD(CCrosisThePurgerCard);
		DEFINE_CARD(CCrusadingKnightCard);
		DEFINE_CARD(CCryptAngelCard);
		DEFINE_CARD(CDarigaazsAttendantCard);
		DEFINE_CARD(CDarigaazTheIgniterCard);
		DEFINE_CARD(CDeathOrGloryCard);
		DEFINE_CARD(CDefilingTearsCard);
		DEFINE_CARD(CDesperateResearchCard);
		DEFINE_CARD(CDevouringStrossusCard);
		DEFINE_CARD(CDismantlingBlowCard);
		DEFINE_CARD(CDistortingWakeCard);
		DEFINE_CARD(CDrakeSkullCameoCard);
		DEFINE_CARD(CDreamThrushCard);
		DEFINE_CARD(CDredgeCard);
		DEFINE_CARD(CDromarsAttendantCard);
		DEFINE_CARD(CDromarTheBanisherCard);
		DEFINE_CARD(CDuskwalkerCard);
		//DEFINE_CARD(CElfhameSanctuaryCard);
		DEFINE_CARD(CEmpressGalinaCard);
		DEFINE_CARD(CExcludeCard);
		DEFINE_CARD(CExplosiveGrowthCard);
		DEFINE_CARD(CFactorFictionCard);
		DEFINE_CARD(CFaerieSquadronCard);
		DEFINE_CARD(CFirebrandRangerCard);
		DEFINE_CARD(CFirescreamerCard);
		DEFINE_CARD(CFiresOfYavimayaCard);
		DEFINE_CARD(CFrenziedTillingCard);
		DEFINE_CARD(CGalinasKnightCard);
		DEFINE_CARD(CGeothermalCreviceCard);
		DEFINE_CARD(CGhituFireCard);
		DEFINE_CARD(CGlobalRuinCard);
		DEFINE_CARD(CGlimmeringAngelCard);
		DEFINE_CARD(CGoblinSpyCard);
		DEFINE_CARD(CHannaShipsNavigatorCard);
		DEFINE_CARD(CHeroesReunionCard);
		DEFINE_CARD(CHoodedKavuCard);
		DEFINE_CARD(CHornedCheetahCard);
		DEFINE_CARD(CHuntingKavuCard);
		DEFINE_CARD(CHypnoticCloudCard);
		DEFINE_CARD(CIrrigationDitchCard);
		DEFINE_CARD(CJadeLeechCard);
		DEFINE_CARD(CKavuAggressorCard);
		DEFINE_CARD(CKavuChameleonCard);
		DEFINE_CARD(CKavuLairCard);
		DEFINE_CARD(CKavuMonarchCard);
		DEFINE_CARD(CKavuScoutCard);
		DEFINE_CARD(CKavuTitanCard);
		DEFINE_CARD(CKeldonNecropolisCard);
		DEFINE_CARD(CLiberateCard);
		DEFINE_CARD(CLightningDartCard);
		DEFINE_CARD(CLlanowarCavalryCard);
		DEFINE_CARD(CLlanowarEliteCard);
		DEFINE_CARD(CLlanowarKnightCard);
		DEFINE_CARD(CLlanowarVanguardCard);
		DEFINE_CARD(CLoafingGiantCard);
		DEFINE_CARD(CLotusGuardianCard);
		DEFINE_CARD(CManipulateFateCard);
		DEFINE_CARD(CMaraudingKnightCard);
		DEFINE_CARD(CMetathranTransportCard);
		DEFINE_CARD(CMetathranZombieCard);
		DEFINE_CARD(CMourningCard);
		DEFINE_CARD(CNightscapeApprenticeCard);
		DEFINE_CARD(CNightscapeMasterCard);
		DEFINE_CARD(CNoblePantherCard);
		DEFINE_CARD(CNomadicElfCard);
		DEFINE_CARD(CObsidianAcolyteCard);
		DEFINE_CARD(COptCard);
		DEFINE_CARD(COrderedMigrationCard);
		DEFINE_CARD(COrimsTouchCard);
		DEFINE_CARD(COverabundanceCard);
		DEFINE_CARD(CPainSufferingCard);
		DEFINE_CARD(CPhyrexianAltarCard);
		DEFINE_CARD(CPhyrexianBattlefliesCard);
		DEFINE_CARD(CPhyrexianDelverCard);
		DEFINE_CARD(CPhyrexianInfiltratorCard);
		DEFINE_CARD(CPhyrexianLensCard);
		DEFINE_CARD(CPhyrexianReaperCard);
		DEFINE_CARD(CPhyrexianSlayerCard);
		DEFINE_CARD(CPincerSpiderCard);
		DEFINE_CARD(CPlagueSpitterCard);
		DEFINE_CARD(CPlagueSporesCard);
		DEFINE_CARD(CPouncingKavuCard);
		DEFINE_CARD(CPowerArmorCard);
		DEFINE_CARD(CPrisonBarricadeCard);
		DEFINE_CARD(CProbeCard);
		DEFINE_CARD(CProhibitCard);
		DEFINE_CARD(CPureReflectionCard);
		DEFINE_CARD(CPyreZombieCard);
		DEFINE_CARD(CQuirionSentinelCard);
		DEFINE_CARD(CQuirionTrailblazerCard);
		DEFINE_CARD(CRagingKavuCard);
		DEFINE_CARD(CRainbowCrowCard);
		DEFINE_CARD(CRecklessAssaultCard);
		DEFINE_CARD(CRecoilCard);
		DEFINE_CARD(CRepulseCard);
		DEFINE_CARD(CRestockCard);
		DEFINE_CARD(CRestrainCard);
		DEFINE_CARD(CRewardsOfDiversityCard);
		DEFINE_CARD(CRiptideCrabCard);
		DEFINE_CARD(CRithsAttendantCard);
		DEFINE_CARD(CRithTheAwakenerCard);
		DEFINE_CARD(CRootingKavuCard);
		DEFINE_CARD(CRoutCard);
		DEFINE_CARD(CRubyLeechCard);
		DEFINE_CARD(CSabertoothNishobaCard);
		DEFINE_CARD(CSamiteArcherCard);
		DEFINE_CARD(CSapphireLeechCard);
		DEFINE_CARD(CSaprolingSymbiosisCard);
		DEFINE_CARD(CSavageOffensiveCard);
		DEFINE_CARD(CScavengedWeaponryCard);
		DEFINE_CARD(CScorchingLavaCard);
		DEFINE_CARD(CScoutingTrekCard);
		DEFINE_CARD(CSearingRaysCard);
		DEFINE_CARD(CSeashellCameoCard);
		DEFINE_CARD(CSeersVisionCard);
		DEFINE_CARD(CSerpentineKavuCard);
		DEFINE_CARD(CShivanEmissaryCard);
		DEFINE_CARD(CShivanHarvestCard);
		DEFINE_CARD(CShivanZombieCard);
		DEFINE_CARD(CShorelineRaiderCard);
		DEFINE_CARD(CSkizzikCard);
		DEFINE_CARD(CSleeperSRobeCard);
		DEFINE_CARD(CSlimyKavuCard);
		DEFINE_CARD(CSlinkingSerpentCard);
		DEFINE_CARD(CSmolderingTarCard);
		DEFINE_CARD(CSparringGolemCard);
		DEFINE_CARD(CSpinalEmbraceCard);
		DEFINE_CARD(CSpiteMaliceCard);
		DEFINE_CARD(CStandDeliverCard);
		DEFINE_CARD(CStalkingAssassinCard);
		DEFINE_CARD(CSterlingGroveCard);
		DEFINE_CARD(CStormscapeApprenticeCard);
		DEFINE_CARD(CStormscapeMasterCard);
		DEFINE_CARD(CStrengthOfUnityCard);
		DEFINE_CARD(CSulfurVentCard);
		DEFINE_CARD(CSunscapeApprenticeCard);
		DEFINE_CARD(CSunscapeMasterCard);
		DEFINE_CARD(CSwayOfIllusionCard);
		DEFINE_CARD(CTaintedWellCard);
		DEFINE_CARD(CTangleCard);
		DEFINE_CARD(CTectonicInstabilityCard);
		DEFINE_CARD(CTeferisCareCard);
		DEFINE_CARD(CTekCard);
		DEFINE_CARD(CThicketElementalCard);
		DEFINE_CARD(CThornscapeApprenticeCard);
		DEFINE_CARD(CThornscapeMasterCard);
		DEFINE_CARD(CThunderscapeApprenticeCard);
		DEFINE_CARD(CThunderscapeMasterCard);
		DEFINE_CARD(CTidalVisionaryCard);
		DEFINE_CARD(CTigereyeCameoCard);
		DEFINE_CARD(CTinderFarmCard);
		DEFINE_CARD(CTolarianEmissaryCard);
		DEFINE_CARD(CTowerDrakeCard);
		DEFINE_CARD(CTreefolkHealerCard);
		DEFINE_CARD(CTrenchWurmCard);
		DEFINE_CARD(CTrevasAttendantCard);
		DEFINE_CARD(CTrevaTheRenewerCard);
		DEFINE_CARD(CTribalFlamesCard);
		DEFINE_CARD(CTrollHornCameoCard);
		DEFINE_CARD(CTsaboTavocCard);
		DEFINE_CARD(CTwilightsCallCard);
		DEFINE_CARD(CUndermineCard);
		DEFINE_CARD(CUrborgDrakeCard);
		DEFINE_CARD(CUrborgEmissaryCard);
		DEFINE_CARD(CUrborgPhantomCard);
		DEFINE_CARD(CUrborgShamblerCard);
		DEFINE_CARD(CUrborgSkeletonCard);
		DEFINE_CARD(CUrzasRageCard);
		DEFINE_CARD(CVerduranEmissaryCard);
		DEFINE_CARD(CViashinoGrapplerCard);
		DEFINE_CARD(CViciousKavuCard);
		DEFINE_CARD(CVileConsumptionCard);
		DEFINE_CARD(CVodalianHypnotistCard);
		DEFINE_CARD(CVodalianMerchantCard);
		DEFINE_CARD(CVodalianSerpentCard);
		DEFINE_CARD(CVodalianZombieCard);
		DEFINE_CARD(CVoidCard);
		DEFINE_CARD(CVoraciousCobraCard);
		DEFINE_CARD(CWallopCard);
		DEFINE_CARD(CWanderingStreamCard);
		DEFINE_CARD(CWashOutCard);
		DEFINE_CARD(CWaxWaneCard);
		DEFINE_CARD(CWayfaringGiantCard);
		DEFINE_CARD(CWhipSilkCard);
		DEFINE_CARD(CWingsOfHopeCard);
		DEFINE_CARD(CWinnowCard);
		DEFINE_CARD(CWorldlyCounselCard);
		DEFINE_CARD(CYavimayaBarbarianCard);
		DEFINE_CARD(CYavimayaKavuCard);
		DEFINE_CARD(CYawgmothsAgendaCard);
		DEFINE_CARD(CZapCard);

	} while (false);

	return cpCard;
}
//_____________________________________________________________________________
//
CAlabasterLeechCard::CAlabasterLeechCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alabaster Leech"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::White, false),
			WHITE_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAtalyaSamiteMasterCard::CAtalyaSamiteMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Atalya, Samite Master"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(0), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, 
									TRUE,
									CManaCost::Colors(CManaCost::Color::White));
		cpAbility->SetExtraActionValueVector();
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(0), SourceColor::Null));

		cpAbility->AddTapCost();
		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, 
									TRUE,
									CManaCost::Colors(CManaCost::Color::White));	
		cpAbility->SetExtraActionValueVector();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlazingSpecterCard::CBlazingSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blazing Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
GetCreatureKeyword()->AddHaste(FALSE);

	{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CCrimsonAcolyteCard::CCrimsonAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crimson Acolyte"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CFiresOfYavimayaCard::CFiresOfYavimayaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fires of Yavimaya"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
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
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHeroesReunionCard::CHeroesReunionCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Heroes' Reunion"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+7), PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CLotusGuardianCard::CLotusGuardianCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lotus Guardian"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("7"), Power(4), Life(4))
{
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
CNightscapeMasterCard::CNightscapeMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightscape Master"), CardType::Creature,	CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CObsidianAcolyteCard::CObsidianAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obsidian Acolyte"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,	
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPhyrexianAltarCard::CPhyrexianAltarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Altar"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhyrexianLensCard::CPhyrexianLensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Lens"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
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
CRagingKavuCard::CRagingKavuCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Raging Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CRoutCard::CRoutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rout"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSabertoothNishobaCard::CSabertoothNishobaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sabertooth Nishoba"), CardType::Creature, CREATURE_TYPE3(Cat, Beast, Warrior), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CSleeperSRobeCard::CSleeperSRobeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sleeper's Robe"), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Fear)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSleeperSRobeCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}
counted_ptr<CAbility> CSleeperSRobeCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormscapeMasterCard::CStormscapeMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stormscape Master"), CardType::Creature,	CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetGainKeywordSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetGainKeywordSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-2), PreventableType::NotPreventable));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunscapeMasterCard::CSunscapeMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunscape Master"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->AddTapCost();

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThornscapeMasterCard::CThornscapeMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornscape Master"), CardType::Creature,	CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetGainKeywordSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetGainKeywordSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThunderscapeMasterCard::CThunderscapeMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thunderscape Master"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-2), PreventableType::NotPreventable));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->AddTapCost();

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYavimayaBarbarianCard::CYavimayaBarbarianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Barbarian"), CardType::Creature, CREATURE_TYPE2(Elf, Barbarian), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CAndraditeLeechCard::CAndraditeLeechCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Andradite Leech"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Black, false),
			BLACK_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArdentSoldierCard::CArdentSoldierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ardent Soldier"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
		, m_KickerCost(_T("2"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CArdentSoldierCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddVigilance(FALSE);
}

void CArdentSoldierCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CArmoredGuardianCard::CArmoredGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Guardian"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(5))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetGainKeywordSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetGainKeywordSpell>>(this,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBenalishEmissaryCard::CBenalishEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
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
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBenalishEmissaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBenalishEmissaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CBenalishHeraldsCard::CBenalishHeraldsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Heralds"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT, 1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBenalishLancerCard::CBenalishLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost(_T("2") WHITE_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBenalishLancerCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CBenalishLancerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CBenalishTrapperCard::CBenalishTrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Trapper"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
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
CBlurredMongooseCard::CBlurredMongooseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blurred Mongoose"), CardType::Creature, CREATURE_TYPE(Mongoose), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CBogInitiateCard::CBogInitiateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Initiate"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCapashenUnicornCard::CCapashenUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Capashen Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaptainSisayCard::CCaptainSisayCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Captain Sisay"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a legendary card"), _T("legendary cards"), new CardTypeComparer(CardType::Legendary, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			&m_CardFilter,
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChargingTrollCard::CChargingTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Charging Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCinderShadeCard::CCinderShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cinder Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCryptAngelCard::CCryptAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crypt Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::Red, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevouringStrossusCard::CDevouringStrossusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Devouring Strossus"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
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

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWorldlyCounselCard::CWorldlyCounselCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Worldly Counsel"), CardType::Instant, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWorldlyCounselCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CWorldlyCounselCard::BeforeResolution(CAbilityAction* pAction) const
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
	
	if (nDomainCount > 0)
	{
		CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nDomainCount), MaximumValue(nDomainCount));	
		pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier.GetSelection(0).moveType = MoveType::Others;
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // put one card in your hand
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the remaining ones on the bottom of the library
		pModifier.SetReorderInformation(
			true, 
			ZoneId::Library,
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);
		
		pModifier.ApplyTo(GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CDreamThrushCard::CDreamThrushCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dream Thrush"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::BasicLand, CardType::_All, TRUE, _T("Forest"));
	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::BasicLand, CardType::_All, TRUE, _T("Island"));
	cpAbility->AddCardTypeToSelection(CardType::Mountain | CardType::BasicLand, CardType::_All, TRUE, _T("Mountain"));	
	cpAbility->AddCardTypeToSelection(CardType::Plains | CardType::BasicLand, CardType::_All, TRUE, _T("Plains"));
	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDuskwalkerCard::CDuskwalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duskwalker"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
		, m_KickerCost(_T("3") BLACK_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDuskwalkerCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CDuskwalkerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Fear);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CEmpressGalinaCard::CEmpressGalinaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Empress Galina"), CardType::_LegendaryCreature, CREATURE_TYPE(Merfolk), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Legendary, false),
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaerieSquadronCard::CFaerieSquadronCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faerie Squadron"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
		, m_KickerCost(_T("3") BLUE_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFaerieSquadronCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CFaerieSquadronCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CFirebrandRangerCard::CFirebrandRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firebrand Ranger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")),//new CardTypeComparer(CardType::BasicLand, false), 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFirescreamerCard::CFirescreamerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Firescreamer"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CGalinasKnightCard::CGalinasKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Galina's Knight"), CardType::Creature, CREATURE_TYPE2(Merfolk, Knight), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CGlimmeringAngelCard::CGlimmeringAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glimmering Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHannaShipsNavigatorCard::CHannaShipsNavigatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hanna, Ship's Navigator"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHoodedKavuCard::CHoodedKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hooded Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornedCheetahCard::CHornedCheetahCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horned Cheetah"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
									&CHornedCheetahCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CHornedCheetahCard::SetTriggerContext(CTriggeredModifyLifeAbility
								::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CJadeLeechCard::CJadeLeechCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jade Leech"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Green, false),
			GREEN_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKavuAggressorCard::CKavuAggressorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Aggressor"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
		, m_KickerCost(_T("4"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKavuAggressorCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddCantBlock(FALSE);
}

void CKavuAggressorCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CKavuChameleonCard::CKavuChameleonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Chameleon"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

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
}

//____________________________________________________________________________
//
CKavuMonarchCard::CKavuMonarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Monarch"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Kavu), false),	
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kavu), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKavuScoutCard::CKavuScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Scout"), CardType::Creature, CREATURE_TYPE2(Kavu, Scout), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(2))
{
	{
		//Pseudo-Domain code. Must be changed when Domain ability is implemented
		//Plains pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Island pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Island, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Swamp pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Mountain pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Mountain, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Forest pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKavuTitanCard::CKavuTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kavu Titan"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost(_T("2") GREEN_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKavuTitanCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CKavuTitanCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +3);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CLlanowarCavalryCard::CLlanowarCavalryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Llanowar Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(4),
		WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CLlanowarEliteCard::CLlanowarEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Elite"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
		, m_KickerCost(_T("8"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLlanowarEliteCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
}

void CLlanowarEliteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +5);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CLlanowarKnightCard::CLlanowarKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Knight"), CardType::Creature, CREATURE_TYPE2(Elf, Knight), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CLlanowarVanguardCard::CLlanowarVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Llanowar Vanguard"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+4)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMetathranTransportCard::CMetathranTransportCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Metathran Transport"), CardType::Creature, CREATURE_TYPE(Metathran), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, // Unblockable unless...
		CCardFilter::GetFilter(_T("non-blue cards"))); // blocking creature is non-blue

	{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

	AddAbility(cpAbility.GetPointer());
}
}

//____________________________________________________________________________
//
CMetathranZombieCard::CMetathranZombieCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Metathran Zombie"), CardType::Creature, CREATURE_TYPE2(Metathran, Zombie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CNightscapeApprenticeCard::CNightscapeApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightscape Apprentice"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNoblePantherCard::CNoblePantherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Noble Panther"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3),
		_T("1"), Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CNomadicElfCard::CNomadicElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nomadic Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Nomad), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1") GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhyrexianBattlefliesCard::CPhyrexianBattlefliesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phyrexian Battleflies"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLACK_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianReaperCard::CPhyrexianReaperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Reaper"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianReaperCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianReaperCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CPhyrexianSlayerCard::CPhyrexianSlayerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phyrexian Slayer"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("white creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianSlayerCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianSlayerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CPincerSpiderCard::CPincerSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pincer Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
		, m_KickerCost(_T("3"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPincerSpiderCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddReach(FALSE);
}

void CPincerSpiderCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CPouncingKavuCard::CPouncingKavuCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Pouncing Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
		, m_KickerCost(_T("2") RED_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPouncingKavuCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CPouncingKavuCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CPrisonBarricadeCard::CPrisonBarricadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prison Barricade"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
		, m_KickerCost(_T("1") WHITE_MANA_TEXT)
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPrisonBarricadeCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddDefender(FALSE);
}

void CPrisonBarricadeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

		CCreatureKeywordModifier* pmodifierUp = new CCreatureKeywordModifier;
		pmodifierUp->GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
		pmodifierUp->GetModifier().SetOneTurnOnly(FALSE);

		pModifier.ApplyTo(this); pmodifierUp->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CQuirionSentinelCard::CQuirionSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Sentinel"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredProdManaAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuirionTrailblazerCard::CQuirionTrailblazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quirion Trailblazer"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRainbowCrowCard::CRainbowCrowCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rainbow Crow"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("1"),
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
CRiptideCrabCard::CRiptideCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riptide Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRubyLeechCard::CRubyLeechCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ruby Leech"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Red, false),
			RED_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSamiteArcherCard::CSamiteArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samite Archer"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Archer), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSapphireLeechCard::CSapphireLeechCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sapphire Leech"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Blue, false),
			BLUE_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerpentineKavuCard::CSerpentineKavuCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Serpentine Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Haste)
{
}

//____________________________________________________________________________
//
CShivanEmissaryCard::CShivanEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shivan Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(4))
		, m_KickerCost(_T("1") BLACK_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShivanEmissaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShivanEmissaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CShivanZombieCard::CShivanZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shivan Zombie"), CardType::Creature, CREATURE_TYPE2(Barbarian, Zombie), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CSlimyKavuCard::CSlimyKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slimy Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Swamp | CardType::BasicLand, CardType::_All, TRUE, _T("Swamp"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlinkingSerpentCard::CSlinkingSerpentCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Slinking Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CStalkingAssassinCard::CStalkingAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stalking Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("3") BLUE_MANA_TEXT,
				TRUE,	// tap
				FALSE,	// untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStormscapeApprenticeCard::CStormscapeApprenticeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Stormscape Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1), // life delta
		PreventableType::NotPreventable)
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
CSunscapeApprenticeCard::CSunscapeApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunscape Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThornscapeApprenticeCard::CThornscapeApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thornscape Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
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
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThunderscapeApprenticeCard::CThunderscapeApprenticeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Thunderscape Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1), // life delta
		PreventableType::NotPreventable)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTidalVisionaryCard::CTidalVisionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tidal Visionary"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));	
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTolarianEmissaryCard::CTolarianEmissaryCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tolarian Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
		, m_KickerCost(_T("1") WHITE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, FALSE));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTolarianEmissaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTolarianEmissaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CTowerDrakeCard::CTowerDrakeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Tower Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1),
		WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);	
}

//____________________________________________________________________________
//
CTreefolkHealerCard::CTreefolkHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treefolk Healer"), CardType::Creature, CREATURE_TYPE2(Treefolk, Cleric), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CTrenchWurmCard::CTrenchWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trench Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::NonbasicLand, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrborgDrakeCard::CUrborgDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Urborg Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CUrborgEmissaryCard::CUrborgEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
		, m_KickerCost(_T("1") BLUE_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUrborgEmissaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUrborgEmissaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CUrborgPhantomCard::CUrborgPhantomCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Urborg Phantom"), CardType::Creature, CREATURE_TYPE2(Spirit, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::DealNoCombatDamage)
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CUrborgShamblerCard::CUrborgShamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Shambler"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(-1), Life(-1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
		new SpecificCardComparer(this));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrborgSkeletonCard::CUrborgSkeletonCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Urborg Skeleton"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		BLACK_MANA_TEXT, Power(0), Life(1),
		BLACK_MANA_TEXT)
		, m_KickerCost(_T("3"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CUrborgSkeletonCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CUrborgSkeletonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVerduranEmissaryCard::CVerduranEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Verduran Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
		, m_KickerCost(_T("1") RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, FALSE));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVerduranEmissaryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVerduranEmissaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

//____________________________________________________________________________
//
CViashinoGrapplerCard::CViashinoGrapplerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Viashino Grappler"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1),
		GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CViciousKavuCard::CViciousKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vicious Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVodalianHypnotistCard::CVodalianHypnotistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Hypnotist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVodalianSerpentCard::CVodalianSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
		, m_KickerCost(_T("2"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVodalianSerpentCard::OnZoneChanged))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CVodalianSerpentCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CVodalianSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

void CVodalianSerpentCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast &&
			GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost))
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +4);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVodalianZombieCard::CVodalianZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Zombie"), CardType::Creature, CREATURE_TYPE2(Merfolk, Zombie), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CVoraciousCobraCard::CVoraciousCobraCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Voracious Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoraciousCobraCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CVoraciousCobraCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CWayfaringGiantCard::CWayfaringGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wayfaring Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") WHITE_MANA_TEXT, Power(1), Life(3))
{
	{
		//Pseudo-Domain code. Must be changed when Domain ability is implemented
		//Plains pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Island pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Island, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Swamp pump
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
	{
		//Mountain pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Mountain, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Forest pump
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));
		
		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYavimayaKavuCard::CYavimayaKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Red | CardType::Creature, true)));

		cpAbility->SetChangePowerOnly();

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Green | CardType::Creature, true)));

		cpAbility->SetChangeToughnessOnly();

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrosissAttendantCard::CCrosissAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crosis's Attendant"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarigaazsAttendantCard::CDarigaazsAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darigaaz's Attendant"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDromarsAttendantCard::CDromarsAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dromar's Attendant"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRithsAttendantCard::CRithsAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rith's Attendant"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSparringGolemCard::CSparringGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sparring Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrevasAttendantCard::CTrevasAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treva's Attendant"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, _T("1")));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncientSpringCard::CAncientSpringCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ancient Spring"), nID)
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
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArchaeologicalDigCard::CArchaeologicalDigCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Archaeological Dig"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

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
CGeothermalCreviceCard::CGeothermalCreviceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Geothermal Crevice"), nID)
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
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIrrigationDitchCard::CIrrigationDitchCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Irrigation Ditch"), nID)
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
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKeldonNecropolisCard::CKeldonNecropolisCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Keldon Necropolis"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("4") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE, 
				Life(-2),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSulfurVentCard::CSulfurVentCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sulfur Vent"), nID)
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
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTinderFarmCard::CTinderFarmCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tinder Farm"), nID)
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
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodstoneCameoCard::CBloodstoneCameoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bloodstone Cameo"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
CChromaticSphereCard::CChromaticSphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chromatic Sphere"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrakeSkullCameoCard::CDrakeSkullCameoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Drake-Skull Cameo"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
CPowerArmorCard::CPowerArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Power Armor"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPowerArmorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CPowerArmorCard::BeforeResolution(CAbilityAction* pAction) const
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
CSeashellCameoCard::CSeashellCameoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seashell Cameo"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
CTigereyeCameoCard::CTigereyeCameoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tigereye Cameo"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
CTrollHornCameoCard::CTrollHornCameoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Troll-Horn Cameo"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
CAngelicShieldCard::CAngelicShieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Shield"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAuraShardsCard::CAuraShardsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aura Shards"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
//
//"Elfhame Sanctuary\n{1G}\nEnchantment\nINV,U\nAt the beginning of your upkeep, you may search your library for a basic land card, reveal that card, and put it into your hand. If you do, you skip your draw step this turn and shuffle your library."
//
////This code is bugged, because this rule doesn't apply with it: "If you have more than one of these in play, you get to use them all and you don't skip multiple draw steps. [Invasion FAQ 2000/10/03]"
////The "PlayerEffectType::SkipNextDrawStep" shouldn't multiply for each resolved trigger in one turn (when two or more of these cards are under your control on the battlefield).
//
//CElfhameSanctuaryCard::CElfhameSanctuaryCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Elfhame Sanctuary"), CardType::GlobalEnchantment, nID,
//		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
//{
//	typedef
//		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(
//		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
//
//	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
//	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
//
//	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
//	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
//	cpAbility->SetToZone(ZoneId::Hand);
//
//	cpAbility->GetTriggeredPlayerModifiers().push_back(
//		new CPlayerEffectModifier(PlayerEffectType::SkipNextDrawStep));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CKavuLairCard::CKavuLairCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kavu Lair"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(3));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMourningCard::CMourningCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mourning"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-2), Life(+0))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLACK_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRecklessAssaultCard::CRecklessAssaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Reckless Assault"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRewardsOfDiversityCard::CRewardsOfDiversityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rewards of Diversity"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScavengedWeaponryCard::CScavengedWeaponryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Scavenged Weaponry"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+1), Life(+1))
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
CSeersVisionCard::CSeersVisionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seer's Vision"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CChgHandVisibilityEnchantment> cpEnchantment(
			::CreateObject<CChgHandVisibilityEnchantment>(this,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		AddSpell(cpEnchantment.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T(""),
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->AddSacrificeCost();
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShivanHarvestCard::CShivanHarvestCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shivan Harvest"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::NonbasicLand, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSmolderingTarCard::CSmolderingTarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Smoldering Tar"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		//cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSterlingGroveCard::CSterlingGroveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sterling Grove"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1"),
				CCardFilter::GetFilter(_T("enchantments")),
				ZoneId::Library, TRUE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetRevealCards(TRUE);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTaintedWellCard::CTaintedWellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tainted Well"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CCardTypeEnchant> cpSpell(
			::CreateObject<CCardTypeEnchant>(this,
				_T("2") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->AddCardTypeToAdd(CardType::Swamp | CardType::BasicLand, CardType::_All, _T("Swamp"));

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
CTectonicInstabilityCard::CTectonicInstabilityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tectonic Instability"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTeferisCareCard::CTeferisCareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Teferi's Care"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false)));
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhipSilkCard::CWhipSilkCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Whip Silk"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Reach)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			GREEN_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWingsOfHopeCard::CWingsOfHopeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Wings of Hope"), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+1), Life(+3), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CAbsorbCard::CAbsorbCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Absorb"), CardType::Instant, nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CAnnihilateCard::CAnnihilateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Annihilate"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
	{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CCremateCard::CCremateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cremate"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CStandDeliverCard::CStandDeliverCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stand // Deliver"), CardType::Instant, nID)
{
	{
		//Stand
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT, 
				new AnyCreatureComparer, 
				FALSE,
				Life(2), SourceColor::Null));

		cpSpell->SetAbilityText(_T("Stand. Casts"));
		cpSpell->SetAbilityName(_T("Stand"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Deliver
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Deliver. Casts"));
		cpSpell->SetAbilityName(_T("Deliver"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDismantlingBlowCard::CDismantlingBlowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dismantling Blow"), CardType::Instant, nID)
		, m_KickerCost(_T("2") BLUE_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDismantlingBlowCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDismantlingBlowCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost) && bResult) // kicked?
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CDredgeCard::CDredgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dredge"), CardType::Instant, nID)

	, m_CardFilter(_T("a creature or a land"), _T("creatures or lands"), new CardTypeComparer(CardType::Creature | CardType::_Land, false))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT, 1));

	cpSpell->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CExcludeCard::CExcludeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Exclude"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CExplosiveGrowthCard::CExplosiveGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Explosive Growth"), CardType::Instant, nID)
		, m_KickerCost(_T("5"))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExplosiveGrowthCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CExplosiveGrowthCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) // kicked?
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 5;
		Context.nValue2 = 5;

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
CSpiteMaliceCard::CSpiteMaliceCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spite // Malice"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)))
{
	//Spite above.
	m_pCounterSpell->SetAbilityText(_T("Spite. Casts"));
	m_pCounterSpell->SetAbilityName(_T("Spite"));

	{
		//Malice
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

		cpSpell->SetAbilityText(_T("Malice. Casts"));
		cpSpell->SetAbilityName(_T("Malice"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
COrimsTouchCard::COrimsTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Orim's Touch"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT, 
				new AnyCreatureComparer, 
				TRUE,
				Life(2), SourceColor::Null));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT, 
				new AnyCreatureComparer, 
				TRUE,
				Life(4), SourceColor::Null));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRepulseCard::CRepulseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Repulse"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CRestrainCard::CRestrainCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Restrain"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AttackingCreatureComparer)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CSwayOfIllusionCard::CSwayOfIllusionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sway of Illusion"), CardType::Instant, nID)
{
	//It was necessary to split them into 5 spells, because having all "AddCardTypeToSelection" in one you would be able to choose the color for each creature separately.
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

		cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

		cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

		cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

		cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CUndermineCard::CUndermineCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Undermine"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CUndermineCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CUndermineCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* spell_controller=pAbilityAction->GetAssociatedCard()->GetController();

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(spell_controller);
}

//____________________________________________________________________________
//
CWaxWaneCard::CWaxWaneCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wax // Wane"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Wane above.
	m_pTargetMoveCardSpell->SetAbilityText(_T("Wane. Casts"));
	m_pTargetMoveCardSpell->SetAbilityName(_T("Wane"));

	{
		//Wax
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityText(_T("Wax. Casts"));
		cpSpell->SetAbilityName(_T("Wax"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CZapCard::CZapCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Zap"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CAssaultBatteryCard::CAssaultBatteryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Assault // Battery"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetAbilityText(_T("Assault. Casts"));
	m_pTargetChgLifeSpell->SetAbilityName(_T("Assault"));

	//Assault above.
	{
		//Battery
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Elephant C"), 2824,
				1));

		cpSpell->SetAbilityText(_T("Battery. Casts"));
		cpSpell->SetAbilityName(_T("Battery"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBreathOfDarigaazCard::CBreathOfDarigaazCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Breath of Darigaaz"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));	

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,	// Cost
				Life(-4),		// life delta
				new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));	

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCanopySurgeCard::CCanopySurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Canopy Surge"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,	// Cost
				Life(-1),		// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));	

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,	// Cost
				Life(-4),		// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				TRUE,	// Affects players
				PreventableType::Preventable,	// Preventable
				DamageType::SpellDamage | DamageType::NonCombatDamage));	

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDistortingWakeCard::CDistortingWakeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Distorting Wake"), CardType::Sorcery, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
}

//____________________________________________________________________________
//
CGhituFireCard::CGhituFireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Ghitu Fire"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					_T("2") RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHypnoticCloudCard::CHypnoticCloudCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hypnotic Cloud"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT,
				3, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CManipulateFateCard::CManipulateFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Manipulate Fate"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CManipulateFateCard::OnResolutionCompleted))
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Exile, true, true, false));

	cpSpell->SetSearchCount(MinimumValue(3), MaximumValue(3));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CManipulateFateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	CDrawCardModifier modifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPainSufferingCard::CPainSufferingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pain // Suffering"), CardType::Sorcery, nID)
{
	{
		//Pain
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAbilityText(_T("Pain. Casts"));
		cpSpell->SetAbilityName(_T("Pain"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Suffering
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Suffering. Casts"));
		cpSpell->SetAbilityName(_T("Suffering"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRestockCard::CRestockCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Restock"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);

	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CSaprolingSymbiosisCard::CSaprolingSymbiosisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Saproling Symbiosis"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionBySurveySpell> cpSpell(
			::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE, FALSE,
				_T("Saproling F"), 2920, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionBySurveySpell> cpSpell(
			::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Instant,
				_T("5") GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE, FALSE,
				_T("Saproling F"), 2920, 1));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSavageOffensiveCard::CSavageOffensiveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Savage Offensive"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::FirstStrike));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}

	AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
}

//____________________________________________________________________________
//
CScoutingTrekCard::CScoutingTrekCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Scouting Trek"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")),
		ZoneId::Library, TRUE, TRUE, FALSE) // on top of your library
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
}

//____________________________________________________________________________
//
CWallopCard::CWallopCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wallop"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Blue | CardType::Black, false));
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CWashOutCard::CWashOutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wash Out"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::White, false),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Select white. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Blue, false),
				ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityText(_T("Select blue. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Black, false),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Select black. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Red, false),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Select red. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Green, false),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityText(_T("Select green. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrusadingKnightCard::CCrusadingKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crusading Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false))); //"Swamps"

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaraudingKnightCard::CMaraudingKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marauding Knight"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false))); //"Plains"

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrenziedTillingCard::CFrenziedTillingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Frenzied Tilling"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CFrenziedTillingCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CFrenziedTillingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("basic lands")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, TRUE);

	if (bResult) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CPyreZombieCard::CPyreZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pyre Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetResolutionCost(_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPyreZombieCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPyreZombieCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPyreZombieCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CPyreZombieCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CRootingKavuCard::CRootingKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rooting Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COptCard::COptCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Opt"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&COptCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			1)); // Get 3 cards

	cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpSpell->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);

	//cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void COptCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier->ApplyTo(GetController());
}

//____________________________________________________________________________
//
CVodalianMerchantCard::CVodalianMerchantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Merchant"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CProbeCard::CProbeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Probe"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT, 3));

		cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, 3));

		cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDiscardCount(2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
}

//____________________________________________________________________________
//
CLiberateCard::CLiberateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Liberate"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLiberateCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CLiberateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CArtifactMutationCard::CArtifactMutationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Artifact Mutation"), CardType::Instant, nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArtifactMutationCard::BeforeResolution));
}

bool CArtifactMutationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(),
		_T("Saproling F"), // token name
		2920, //token id
		converted // number of tokens
		// put here True to add tokens to player's opponent
		);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAuraMutationCard::CAuraMutationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Aura Mutation"), CardType::Instant, nID,
		WHITE_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAuraMutationCard::BeforeResolution));
}

bool CAuraMutationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(),
		_T("Saproling F"), // token name
		2920, //token id
		converted // number of tokens
		// put here True to add tokens to player's opponent
		);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CShorelineRaiderCard::CShorelineRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shoreline Raider"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kavu), false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CTsaboTavocCard::CTsaboTavocCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Tsabo Tavoc"), CardType::_LegendaryCreature, CREATURE_TYPE(Horror), nID,
		_T("5") BLACK_MANA_TEXT RED_MANA_TEXT, Power(7), Life(4))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_LegendaryCreature, true));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_LegendaryCreature, true),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmadilloCloakCard::CArmadilloCloakCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Armadillo Cloak"), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Trample)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CArmadilloCloakCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CArmadilloCloakCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArmadilloCloakCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CArmadilloCloakCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CStrengthOfUnityCard::CStrengthOfUnityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Strength of Unity"), nID,
		_T("3") WHITE_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStrengthOfUnityCard::CreateAdditionalAbility1));
	CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStrengthOfUnityCard::CreateAdditionalAbility2));
	CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStrengthOfUnityCard::CreateAdditionalAbility3));
	CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStrengthOfUnityCard::CreateAdditionalAbility4));
	CCardAbilityModifier* pModifier5 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStrengthOfUnityCard::CreateAdditionalAbility5));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier1);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier2);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier3);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier4);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier5);
}

counted_ptr<CAbility> CStrengthOfUnityCard::CreateAdditionalAbility1(CCard* pCard)
{
	//Pseudo-Domain code. Must be changed when Domain ability is implemented
	//Plains pump
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Plains, false)));
	
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CStrengthOfUnityCard::CreateAdditionalAbility2(CCard* pCard)
{
	//Island pump
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Island, false)));
	
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CStrengthOfUnityCard::CreateAdditionalAbility3(CCard* pCard)
{
	//Swamp pump
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));
	
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CStrengthOfUnityCard::CreateAdditionalAbility4(CCard* pCard)
{
	//Mountain pump
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false)));
	
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CStrengthOfUnityCard::CreateAdditionalAbility5(CCard* pCard)
{
	//Forest pump
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));
	
	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));
	
	cpAbility->StartListening(GetZone()->GetPlayer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncientKavuCard::CAncientKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancient Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("2"),
			new SpecificCardComparer(this)));

	cpAbility->AddCardTypeToSelection(CardType::Null, CardType::_ColorMask, TRUE, _T("colorless permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAddleCard::CAddleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Addle"), CardType::Sorcery, nID)
{
	{
		//Choose white
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("white cards"))));

		cpSpell->SetAbilityText(_T("Choose white. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose blue
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("blue cards"))));

		cpSpell->SetAbilityText(_T("Choose blue. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose black
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("black cards"))));

		cpSpell->SetAbilityText(_T("Choose black. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose red
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("red cards"))));

		cpSpell->SetAbilityText(_T("Choose red. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose green
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("green cards"))));

		cpSpell->SetAbilityText(_T("Choose green. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
COrderedMigrationCard::COrderedMigrationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ordered Migration"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Bird H"), 2705,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrderedMigrationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool COrderedMigrationCard::BeforeResolution(CAbilityAction* pAction) const
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

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nDomainCount;

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CPlagueSporesCard::CPlagueSporesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plague Spores"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));
		
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

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
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPlagueSpitterCard::CPlagueSpitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Spitter"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
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
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlagueSpitterCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPlagueSpitterCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CSearingRaysCard::CSearingRaysCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Searing Rays"), CardType::Sorcery, nID)
{
	{
		//Choose white
		counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
			::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::White | CardType::Creature, true),
				PreventableType::Preventable));

		cpSpell->SetMultiplier(-1);

		cpSpell->SetAbilityText(_T("Choose white. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose blue
		counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
			::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Blue | CardType::Creature, true),
				PreventableType::Preventable));

		cpSpell->SetMultiplier(-1);

		cpSpell->SetAbilityText(_T("Choose blue. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose black
		counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
			::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Black | CardType::Creature, true),
				PreventableType::Preventable));

		cpSpell->SetMultiplier(-1);

		cpSpell->SetAbilityText(_T("Choose black. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose red
		counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
			::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Red | CardType::Creature, true),
				PreventableType::Preventable));

		cpSpell->SetMultiplier(-1);

		cpSpell->SetAbilityText(_T("Choose red. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose green
		counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
			::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Green | CardType::Creature, true),
				PreventableType::Preventable));

		cpSpell->SetMultiplier(-1);

		cpSpell->SetAbilityText(_T("Choose green. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTwilightsCallCard::CTwilightsCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twilight's Call"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cast as an instant
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CVileConsumptionCard::CVileConsumptionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vile Consumption"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CVileConsumptionCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CVileConsumptionCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetPayLifeResolutionCost(Life(-1));

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWanderingStreamCard::CWanderingStreamCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wandering Stream"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWanderingStreamCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CWanderingStreamCard::BeforeResolution(CAbilityAction* pAction) const
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
	
	if (nDomainCount > 0) nDomainCount = nDomainCount * 2;

	CLifeModifier pModifier = CLifeModifier(Life(nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);
	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAgonizingDemiseCard::CAgonizingDemiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Agonizing Demise"), CardType::Instant, nID)
		, m_KickerCost(_T("1") RED_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CAgonizingDemiseCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CAgonizingDemiseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* TargetsController = pAbilityAction->GetAssociatedCard()->GetController();

	CCard* target = pAbilityAction->GetAssociatedCard();

	if ((target->GetCardType().IsCreature()) && (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) && bResult) // kicked?
	{
		CCreatureCard* pCreature = (CCreatureCard*)target;
		int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

		CLifeModifier pModifier = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

		pModifier.ApplyTo(TargetsController);
	}
}

//____________________________________________________________________________
//
CUrzasRageCard::CUrzasRageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Urza's Rage"), CardType::Instant, nID)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("10") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-10), PreventableType::NotPreventable));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetAbilityText(_T("Casts kicked"));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinSpyCard::CGoblinSpyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Spy"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGoblinSpyCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::TopCardRevealed));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

void CGoblinSpyCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CTribalFlamesCard::CTribalFlamesCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Tribal Flames"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTribalFlamesCard::BeforeResolution));
}

bool CTribalFlamesCard::BeforeResolution(CAbilityAction* pAction) const
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
CRecoilCard::CRecoilCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Recoil"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRecoilCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
}

void CRecoilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();

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
	
	if (bResult) pModifier.ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CCollapsingBordersCard::CCollapsingBordersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Collapsing Borders"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCollapsingBordersCard::BeforeResolution));		
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CCollapsingBordersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pBattlefield = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

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

	CLifeModifier pModifier = CLifeModifier(Life(+nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	
	CPlayer* pPlayer = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer();
	
	pModifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CBlindSeerCard::CBlindSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blind Seer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	{
		//target spell
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white spell"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue spell"));	
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black spell"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red spell"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green spell"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue permanent"));	
		cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red permanent"));
		cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green permanent"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDefilingTearsCard::CDefilingTearsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Defiling Tears"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(
		new CPowerModifier(Power(+1), TRUE));

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(
		new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE));

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CDefilingTearsCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDefilingTearsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoalitionVictoryCard::CCoalitionVictoryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coalition Victory"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CCoalitionVictoryCard::OnResolutionCompleted))
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("3") ALL_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCoalitionVictoryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp_L1;
	m_CardFilter_temp_L1.SetComparer(new CardTypeComparer(CardType::Plains, false));
	CCardFilter m_CardFilter_temp_L2;
	m_CardFilter_temp_L2.SetComparer(new CardTypeComparer(CardType::Island, false));
	CCardFilter m_CardFilter_temp_L3;
	m_CardFilter_temp_L3.SetComparer(new CardTypeComparer(CardType::Swamp, false));
	CCardFilter m_CardFilter_temp_L4;
	m_CardFilter_temp_L4.SetComparer(new CardTypeComparer(CardType::Mountain, false));
	CCardFilter m_CardFilter_temp_L5;
	m_CardFilter_temp_L5.SetComparer(new CardTypeComparer(CardType::Forest, false));

	CCardFilter m_CardFilter_temp_C1;
	m_CardFilter_temp_C1.SetComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));
	CCardFilter m_CardFilter_temp_C2;
	m_CardFilter_temp_C2.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
	CCardFilter m_CardFilter_temp_C3;
	m_CardFilter_temp_C3.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Black, true));
	CCardFilter m_CardFilter_temp_C4;
	m_CardFilter_temp_C4.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Red, true));
	CCardFilter m_CardFilter_temp_C5;
	m_CardFilter_temp_C5.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Green, true));

	int nDomainCount = ((m_CardFilter_temp_L1.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_L2.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_L3.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_L4.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_L5.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_C1.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_C2.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_C3.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_C4.CountIncluded(pBattlefield->GetCardContainer())) &&
						(m_CardFilter_temp_C5.CountIncluded(pBattlefield->GetCardContainer())));

	CPlayerLostModifier pModifier;

	if (nDomainCount == 1) pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CYawgmothsAgendaCard::CYawgmothsAgendaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Yawgmoth's Agenda"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::SpellCastLimit, 1, TRUE));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ExileInsteadGraveyard));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromGraveyard, (int)CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CProhibitCard::CProhibitCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Prohibit"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
		, m_KickerCost(_T("2"))
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProhibitCard::BeforeResolution));
	m_pCounterSpell->GetCost().AddOptionalManaCost(m_KickerCost);
}

bool CProhibitCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nMaxCost = 2;
	
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost)) nMaxCost = 4;

	int n = pAction->GetAssociatedCard()->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	return (n <= nMaxCost);
}

//____________________________________________________________________________
//
CBindCard::CBindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bind"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterAbilitySpell> cpSpell(
			::CreateObject<CCounterAbilitySpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT, CCardFilter::GetFilter(_T("cards")), TRUE, FALSE));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(),MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
COverabundanceCard::COverabundanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Overabundance"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COverabundanceCard::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility);
	}
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
}
	
bool COverabundanceCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Colorless))
	{m_pTriggeredAbility->SetProduceColorless(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceColorless(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}
bool COverabundanceCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CTangleCard::CTangleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tangle"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CTangleCard::OnResolutionCompleted))
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddSpell(cpSpell.GetPointer());
}

void CTangleCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AttackingCreatureComparer);

	CCardKeywordModifier* pCardModifier = new CCardKeywordModifier;
		pCardModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pCardModifier->GetModifier().SetOneTurnOnly(FALSE);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(pCardModifier));

	pModifier.ApplyTo(m_pGame->GetActivePlayer());
}

//____________________________________________________________________________
//
CCollectiveRestraintCard::CCollectiveRestraintCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Collective Restraint"), CardType::GlobalEnchantment, nID, 
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Forest,false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Island,false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Mountain,false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Swamp,false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
			::CreateObject<CConsAttackExtraManaEnchantment>(this,
				new AnyCreatureComparer,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetAffectOnlyPlayerDeclaration();

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Plains,false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBacklashCard::CBacklashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Backlash"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBacklashCard::OnResolutionCompleted))
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT RED_MANA_TEXT ,
			true, false,
			new AnyCreatureComparer));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new UntappedComparer);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CBacklashCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CLifeModifier* pModifier = new CLifeModifier(Life(-GET_INTEGER(pCreature->GetPower())), pCreature, PreventableType::Preventable, DamageType::NonCombatDamage);
	pModifier->ApplyTo(pCreature->GetController());
}

//____________________________________________________________________________
//
CFactorFictionCard::CFactorFictionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fact or Fiction"), CardType::Instant, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CFactorFictionCard::OnResolutionCompleted))
, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFactorFictionCard::OnTargetZoneSelected))
{	

	{
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT));	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
	}

}
void CFactorFictionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	if (bResult)
	{
		int size = 5;
		CPlayer* target =  pAbilityAction->GetController();
		CPlayer* opponent =  m_pGame->GetNextPlayer(target);
		CZone* pLibrary = target->GetZoneById(ZoneId::Library);	

		if (pLibrary->GetSize()<5) 
			size=pLibrary->GetSize();

		CCountedCardContainer SelectFrom;
		//CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

		for (int i = pLibrary->GetSize() - 1; i >= 0 && (pLibrary->GetSize() - i) < 6; --i)
		{
			SelectFrom.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
		}

		if(SelectFrom.GetSize())

			if (m_pGame->IsThinking() || opponent->IsComputer())
			{
				SelectFrom.Sort(TRUE);

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
					else
						m_SelectedCards1.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				if (!target->IsComputer() && !m_pGame->IsThinking())
				{
						for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				}

				ProcessPiling(target, pAbilityAction->GetController());
			}
			else
			{
				SelectCardsData selectCardData;

				selectCardData.pCardContainer = &SelectFrom;
				selectCardData.nMinSelect = MinimumValue(0);
				selectCardData.nMaxSelect = MaximumValue(SelectFrom.GetSize());
				selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

				opponent->GetInterface()->SelectCard(&selectCardData);
				m_SelectedCards1 = selectCardData.SelectedCards;

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (!m_SelectedCards1.HasCard(SelectFrom.GetAt(i)))
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				ProcessPiling(target, pAbilityAction->GetController());
			}

	}
}
void CFactorFictionCard::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
{	
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Select pile 1"));

		entries.push_back(selectionEntry);
	}

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Select pile 2"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL,  pPlayer1);
}

void CFactorFictionCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards1.GetAt(i));
				}
			
				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards2.GetAt(i));
				}

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards2.GetAt(i));
				}
				
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards1.GetAt(i));
				}

				return;
			}
			return;
		}
}

//____________________________________________________________________________
//
CTekCard::CTekCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tek"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("5"), Power(2), Life(2))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));

		cpAbility->SetMaximumAddedPower(Power(0));
		cpAbility->SetMaximumAddedToughness(Life(2));

		cpAbility->SetPowerMultiplier(Power(0));
		cpAbility->SetToughnessMultiplier(Life(2));

		AddAbility(cpAbility.GetPointer());
	}
        {
        	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
	        	::CreateObject<CPwrTghAttrEnchantment>(this,
		        	new SpecificCardComparer(this),
			        Power(+0), Life(+0)));
                
        	cpAbility->SetConditionWork();
	        cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
        	cpAbility->SetConditionValue(1);
	        
	        cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
        	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
                
        	AddAbility(cpAbility.GetPointer());
        }
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Swamp, false)));

		cpAbility->SetMaximumAddedPower(Power(2));
		cpAbility->SetMaximumAddedToughness(Life(0));

		cpAbility->SetPowerMultiplier(Power(2));
		cpAbility->SetToughnessMultiplier(Life(0));

		AddAbility(cpAbility.GetPointer());
	}
        {
        	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
	        	::CreateObject<CPwrTghAttrEnchantment>(this,
		        	new SpecificCardComparer(this),
			        Power(+0), Life(+0)));
                
        	cpAbility->SetConditionWork();
	        cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
        	cpAbility->SetConditionValue(1);
	        
	        cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
        	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
                
        	AddAbility(cpAbility.GetPointer());
        }
        {
        	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
	        	::CreateObject<CPwrTghAttrEnchantment>(this,
		        	new SpecificCardComparer(this),
			        Power(+0), Life(+0)));
                
        	cpAbility->SetConditionWork();
	        cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
        	cpAbility->SetConditionValue(1);
	        
	        cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
        	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
                
        	AddAbility(cpAbility.GetPointer());
        }
}

//____________________________________________________________________________
//
CRithTheAwakenerCard::CRithTheAwakenerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rith, the Awakener"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRithTheAwakenerCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRithTheAwakenerCard::OnColorSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") GREEN_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CRithTheAwakenerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}
void CRithTheAwakenerCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nPermanents);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nPermanents);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nPermanents);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nPermanents);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Saproling F"), 2920, nPermanents);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CTrevaTheRenewerCard::CTrevaTheRenewerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Treva, the Renewer"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CTrevaTheRenewerCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CTrevaTheRenewerCard::OnColorSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") WHITE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CTrevaTheRenewerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}
void CTrevaTheRenewerCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int nPermanents = 0;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CLifeModifier pModifier = CLifeModifier(Life(+nPermanents), this, PreventableType::NotPreventable);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CLifeModifier pModifier = CLifeModifier(Life(+nPermanents), this, PreventableType::NotPreventable);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CLifeModifier pModifier = CLifeModifier(Life(+nPermanents), this, PreventableType::NotPreventable);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CLifeModifier pModifier = CLifeModifier(Life(+nPermanents), this, PreventableType::NotPreventable);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					nPermanents += CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pZone->GetCardContainer());
				}

				CLifeModifier pModifier = CLifeModifier(Life(+nPermanents), this, PreventableType::NotPreventable);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CDromarTheBanisherCard::CDromarTheBanisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dromar, the Banisher"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDromarTheBanisherCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CDromarTheBanisherCard::OnColorSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") BLUE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDromarTheBanisherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}
void CDromarTheBanisherCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("blue creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("black creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("red creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("green creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CCrosisThePurgerCard::CCrosisThePurgerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crosis, the Purger"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CCrosisThePurgerCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CCrosisThePurgerCard::OnColorSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrosisThePurgerCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CCrosisThePurgerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage)
{
	m_Player = pPlayer;

	return true;
}

void CCrosisThePurgerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}
void CCrosisThePurgerCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("white cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
				pModifier2.ApplyTo(m_Player);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("blue cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
				pModifier2.ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("black cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
				pModifier2.ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("red cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
				pModifier2.ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("green cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
				pModifier2.ApplyTo(m_Player);

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CDarigaazTheIgniterCard::CDarigaazTheIgniterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Darigaaz, the Igniter"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDarigaazTheIgniterCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CDarigaazTheIgniterCard::OnColorSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetResolutionCost(_T("2") RED_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDarigaazTheIgniterCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CDarigaazTheIgniterCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage)
{
	m_Player = pPlayer;

	return true;
}

void CDarigaazTheIgniterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}
void CDarigaazTheIgniterCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZone* pHand = m_Player->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("white cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(m_Player);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZone* pHand = m_Player->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("blue cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZone* pHand = m_Player->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZone* pHand = m_Player->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("red cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(m_Player);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(m_Player);
				
				CZone* pHand = m_Player->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("green cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(m_Player);

				return;
			}
		}
	
}
//____________________________________________________________________________
//
CChaoticStrikeCard::CChaoticStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chaotic Strike"), CardType::Instant, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChaoticStrikeCard::OnFlipSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE));
	
	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CChaoticStrikeCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChaoticStrikeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

BOOL CChaoticStrikeCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CChaoticStrikeCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
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
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(),MinimumValue(1),MaximumValue(1));
		pModifier.ApplyTo(pController);
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
		pModifier1->ApplyTo(pTarget);
		pModifier2->ApplyTo(pTarget);
		CDrawCardModifier pModifier3 = CDrawCardModifier(GetGame(),MinimumValue(1),MaximumValue(1));
		pModifier3.ApplyTo(pController);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pTarget);
	}
	return true;
}

void CChaoticStrikeCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

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
				pModifier1->ApplyTo(pTarget);
				pModifier2->ApplyTo(pTarget);
				CDrawCardModifier pModifier3 = CDrawCardModifier(GetGame(),MinimumValue(1),MaximumValue(1));
				pModifier3.ApplyTo(pSelectionPlayer);
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
				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(),MinimumValue(1),MaximumValue(1));
				pModifier.ApplyTo(pSelectionPlayer);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CVoidCard::CVoidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Void"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVoidCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVoidCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CVoidCard::BeforeResolution (CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < 17; i++) // Maximum converted mana cost is 16 as of September 2012; if cards with greater mana cost are ever printed, this number will have to be increased.
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i + 1;
		selectionEntry.strText.Format(_T("Select %d"), i);

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 18;
		selectionEntry.strText.Format(_T("Select a stupid number"));

		entries.push_back(selectionEntry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pAction->GetAssociatedPlayer());
	return true;
}

void CVoidCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			
			CPlayer* pTarget = (CPlayer*)dwContext1;
			CCardFilter m_CardFilter1;
			m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature, false));
			m_CardFilter1.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(n));
			CCardFilter m_CardFilter2;
			m_CardFilter2.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
			m_CardFilter2.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(n));

			CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter1,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

			for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			{
				pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
			}

			CZoneModifier* pModifier2 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier2->ApplyTo(pTarget);

			CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter2,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
			pModifier3.ApplyTo(pTarget);
		}
}
//____________________________________________________________________________
//
CPhyrexianInfiltratorCard::CPhyrexianInfiltratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Infiltrator"), CardType::Creature,	CREATURE_TYPE(Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianInfiltratorCard::BeforeResolution));
			
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhyrexianInfiltratorCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController1 = this->GetController();
	CPlayer* pController2 = pTarget->GetController();
		
	if (this->IsInplay() && (pController1 != pController2))
	{
		CZone* pBattlefield1 = pController1->GetZoneById(ZoneId::Battlefield);
		CZone* pBattlefield2 = pController2->GetZoneById(ZoneId::Battlefield);
		
		this->Move(pBattlefield2, pController1, MoveType::Others);
		pTarget->Move(pBattlefield1, pController2, MoveType::Others);
	}
	return true;
}
//____________________________________________________________________________
//
CLightningDartCard::CLightningDartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lightning Dart"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLightningDartCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLightningDartCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	
	bool pColor = pTarget->IsColor(CManaPoolBase::Color::White) || pTarget->IsColor(CManaPoolBase::Color::Blue);

	if (pColor)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		pModifier.ApplyTo(pTarget);
	}
	else
	{
		CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		pModifier.ApplyTo(pTarget);
	}

	return true;
}

//____________________________________________________________________________
//
CHuntingKavuCard::CHuntingKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunting Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
			new TrueCardComparer, false, new CHuntingKavuTargeting));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHuntingKavuCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

BOOL CHuntingKavuCard::CHuntingKavuTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CHuntingKavuCard::CHuntingKavuTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	if (pCreature->GetCreatureKeyword()->Flying()) return FALSE;
	
	if (pCreature->GetAttackedPlayer() != GetSourceCard()->GetController()) return FALSE;

	return TRUE;
}

bool CHuntingKavuCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(this);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CThicketElementalCard::CThicketElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thicket Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
		, m_KickerCost(_T("1") GREEN_MANA_TEXT)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CThicketElementalCard::OnYesNoSelected))
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThicketElementalCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThicketElementalCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThicketElementalCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost));
}

bool CThicketElementalCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Use the ablity of %s"), this->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Ignore the ability of %s"), this->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	 
	 return true;
}

void CThicketElementalCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				int n = 0;
				bool bSearch = true;
				CCard* pFound;
				
				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
				{		
					if (!bSearch)
						break;
					else
					{
						++n;
						if (pLibrary->GetAt(i)->GetCardType().IsCreature())
						{
							bSearch = false;
							pFound = pLibrary->GetAt(i);
						}
					}
				}

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter, // any cards
						ZoneId::Battlefield, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on top
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
				pModifier.ApplyTo(pSelectionPlayer);
				pLibrary->Shuffle();

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
CDesperateResearchCard::CDesperateResearchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Desperate Research"), CardType::Sorcery, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDesperateResearchCard::OnNameSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDesperateResearchCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDesperateResearchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nZoneCount = pController->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pController->GetZone(nZone);
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

			if ((pCard->GetPrintedCardName() != "Plains") && (pCard->GetPrintedCardName() != "Snow-Covered Plains") &&
				(pCard->GetPrintedCardName() != "Island") && (pCard->GetPrintedCardName() != "Snow-Covered Island") &&
				(pCard->GetPrintedCardName() != "Swamp") && (pCard->GetPrintedCardName() != "Snow-Covered Swamp") &&
				(pCard->GetPrintedCardName() != "Mountain") && (pCard->GetPrintedCardName() != "Snow-Covered Mountain") &&
				(pCard->GetPrintedCardName() != "Forest") && (pCard->GetPrintedCardName() != "Snow-Covered Forest"))
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

				entries.push_back(selectionEntry);
			}
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CDesperateResearchCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 7, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(7), MaximumValue(7), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier.ApplyTo(pSelectionPlayer);

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
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 7, CZoneModifier::RoleType::PrimaryPlayer,
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
				pModifier.SetReorderInformation(true, ZoneId::Exile);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CAlloyGolemCard::CAlloyGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alloy Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(4), Life(4))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAlloyGolemCard::OnSelectionDone))
{
}

void CAlloyGolemCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_Choice == CardType::Null;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("white"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("blue"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("black"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("red"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("green"));
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
			CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
			pModifier.RemoveFrom(this);
	}
}

void CAlloyGolemCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				m_Choice = CardType::White;

				CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 2)
			{
				m_Choice = CardType::Blue;

				CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 3)
			{
				m_Choice = CardType::Black;

				CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 4)
			{
				m_Choice = CardType::Red;

				CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
				pModifier.ApplyTo(this);

				return;
			}
			if (nSelectedIndex == 5)
			{
				m_Choice = CardType::Green;

				CCardTypeModifier pModifier =  CCardTypeModifier(m_Choice);
				pModifier.ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CWinnowCard::CWinnowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Winnow"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWinnowCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CWinnowCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pTarget));
	CPlayer* pController = pAction->GetController();

	bool bFound = false;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0)
		{
			bFound = true;
			break;
		}
	}

	if (bFound)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
		pModifier1.ApplyTo(pTarget);
	}

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier2.ApplyTo(pController);

	return false;
}

//____________________________________________________________________________
//
CGlobalRuinCard::CGlobalRuinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("GlobalRuin"), CardType::Sorcery, nID)
	, m_PlainsSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGlobalRuinCard::OnPlainsSelected))
	, m_IslandSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGlobalRuinCard::OnIslandSelected))
	, m_SwampSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGlobalRuinCard::OnSwampSelected))
	, m_MountainSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGlobalRuinCard::OnMountainSelected))
	, m_ForestSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGlobalRuinCard::OnForestSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGlobalRuinCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGlobalRuinCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	int n = 0;
	while (GetGame()->GetPlayer(n) != pActivePlayer) ++n;

	Players.RemoveAll();
	Cards.RemoveAll();
	Players.Add(GetGame()->GetPlayer(n));
	n = (n + 1) % GetGame()->GetPlayerCount();

	while (GetGame()->GetPlayer(n) != pActivePlayer)
	{
		if (GetGame()->GetPlayer(n) != pController)
			Players.Add(GetGame()->GetPlayer(n));
		n = (n + 1) % GetGame()->GetPlayerCount();
	}

	PlainsSelection(0);
	return true;
}

void CGlobalRuinCard::PlainsSelection(int nPlayer)
{
	if (nPlayer < Players.GetSize())
	{
		CPlayer* pPlayer = Players.GetAt(nPlayer);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		if (CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if ((pCard->GetCardType() & CardType::Plains).Any())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Select %s."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_PlainsSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
		}
		else
			IslandSelection(nPlayer);
	}
	else
	{
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, GetGame()->GetPlayer(ip))));

			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

void CGlobalRuinCard::IslandSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pCard->GetCardType() & CardType::Island).Any())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_IslandSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		SwampSelection(nPlayer);
}

void CGlobalRuinCard::SwampSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pCard->GetCardType() & CardType::Swamp).Any())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_SwampSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		MountainSelection(nPlayer);
}

void CGlobalRuinCard::MountainSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pCard->GetCardType() & CardType::Mountain).Any())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_MountainSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		ForestSelection(nPlayer);
}

void CGlobalRuinCard::ForestSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pCard->GetCardType() & CardType::Forest).Any())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_ForestSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		PlainsSelection(nPlayer + 1);
}

void CGlobalRuinCard::OnPlainsSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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
			Cards.AddCard(pCard, CardPlacement::Top);

			IslandSelection(nPlayer);
				
			return;
		}
}

void CGlobalRuinCard::OnIslandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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
			Cards.AddCard(pCard, CardPlacement::Top);

			SwampSelection(nPlayer);
				
			return;
		}
}

void CGlobalRuinCard::OnSwampSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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
			Cards.AddCard(pCard, CardPlacement::Top);

			MountainSelection(nPlayer);
				
			return;
		}
}

void CGlobalRuinCard::OnMountainSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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
			Cards.AddCard(pCard, CardPlacement::Top);

			ForestSelection(nPlayer);
				
			return;
		}
}

void CGlobalRuinCard::OnForestSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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
			Cards.AddCard(pCard, CardPlacement::Top);

			PlainsSelection(nPlayer + 1);
				
			return;
		}
}
//____________________________________________________________________________
//
CDeathOrGloryCard::CDeathOrGloryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death or Glory"), CardType::Sorcery, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDeathOrGloryCard::OnResolutionCompleted))
, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDeathOrGloryCard::OnTargetZoneSelected))
{	
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT));	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
}

void CDeathOrGloryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	if (bResult)
	{
		CPlayer* target =  pAbilityAction->GetController();
		CPlayer* opponent =  m_pGame->GetNextPlayer(target);
		CZone* pGraveyard = target->GetZoneById(ZoneId::Graveyard);	
		int size = pGraveyard->GetSize();
		
		CCountedCardContainer SelectFrom;
		//CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

		for (int i = 0; i < size; ++i)
		{
			if (pGraveyard->GetAt(i)->GetCardType().IsCreature())
				SelectFrom.AddCard(pGraveyard->GetAt(i), CardPlacement::Top);
		}

		if(SelectFrom.GetSize())

			if (m_pGame->IsThinking() || target->IsComputer())
			{
				SelectFrom.Sort(TRUE);

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
					else
						m_SelectedCards1.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				if (!opponent->IsComputer() && !m_pGame->IsThinking())
				{
					for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
					{
						CString strMessage;
						strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

						m_pGame->Message(
							strMessage,
							opponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}

					for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
					{
						CString strMessage;
						strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

						m_pGame->Message(
							strMessage,
							opponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}
				}

				ProcessPiling(opponent, pAbilityAction->GetController());
			}
			else
			{
				SelectCardsData selectCardData;

				selectCardData.pCardContainer = &SelectFrom;
				selectCardData.nMinSelect = MinimumValue(0);
				selectCardData.nMaxSelect = MaximumValue(SelectFrom.GetSize());
				selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

				target->GetInterface()->SelectCard(&selectCardData);
				m_SelectedCards1 = selectCardData.SelectedCards;

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (!m_SelectedCards1.HasCard(SelectFrom.GetAt(i)))
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						opponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						opponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				ProcessPiling(opponent, pAbilityAction->GetController());
			}

	}
}
void CDeathOrGloryCard::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
{	
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Select pile 1"));

		entries.push_back(selectionEntry);
	}

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Select pile 2"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer1, (DWORD)pPlayer2);
}

void CDeathOrGloryCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CPlayer* pController = (CPlayer*)dwContext1;

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards1.GetAt(i));
				}
			
				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards2.GetAt(i));
				}

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CPlayer* pController = (CPlayer*)dwContext1;

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards2.GetAt(i));
				}
				
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards1.GetAt(i));
				}

				return;
			}
			return;
		}
}

//____________________________________________________________________________
//
CSkizzikCard::CSkizzikCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Skizzik"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(3))
		, m_KickerCost1(_T("") RED_MANA_TEXT)
{
	this->GetSpells().GetAt(0)->GetCost().AddOptionalManaCost(m_KickerCost1);

	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkizzikCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkizzikCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost1))
	{
		return true;
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	return true;
}

//____________________________________________________________________________
//
CPhyrexianDelverCard::CPhyrexianDelverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Delver"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianDelverCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianDelverCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	
	int nCMC = pTarget->GetConvertedManaCost();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
	pModifier1.ApplyTo(pTarget);

	CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CAEtherRiftCard::CAEtherRiftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("AEther Rift"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAEtherRiftCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAEtherRiftCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CAEtherRiftCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() == 0) return true;

	int nCard = 0;

	if (!m_pGame->IsThinking())
	{
		nCard = pController->GetRand() % pHand->GetSize();
	}

	CCard* pCard = pHand->GetAt(nCard);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pController);
	pModifier.ApplyTo(pCard);

	if (!pCard->GetCardType().IsCreature()) return true;

	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	bSomeonePaid = 0;
	PunisherFunction(pActivePlayerID, pCard, pController);

	return true;
}

void CAEtherRiftCard::PunisherFunction(int PlayerID, CCard* pCard, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't pay life"));

		entries.push_back(selectionEntry);
	}
	if ((pPlayer->GetLife() >= 5) && !pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Pay 5 life"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pCard, (DWORD)pController);
}

void CAEtherRiftCard::Advance(int PlayerID, CCard* pCard, CPlayer* pController)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer, pCard, pController);
	else if (bSomeonePaid == 0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pCard);
	}
}

void CAEtherRiftCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				Advance(dwContext1, (CCard*)dwContext2, (CPlayer*)dwContext3);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays 5 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				bSomeonePaid = 1;
				Advance(dwContext1, (CCard*)dwContext2, (CPlayer*)dwContext3);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CPureReflectionCard::CPureReflectionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pure Reflection"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPureReflectionCard::BeforeResolution));		
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPureReflectionCard::SetTriggerContext));		

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CPureReflectionCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.nValue1 = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	triggerContext.nValue2 = (DWORD)pCard->GetController();

	return true;
}

bool CPureReflectionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nValue = pAction->GetTriggerContext().nValue1;
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue2;
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Reflection), false));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Reflection B"), 62005));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62005); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Reflection B")); }

		pPlayer->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nValue));
		pCreature->SetPrintedToughness(Life(nValue));		

		cpToken->Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
/*
CScorchingLavaCard::CScorchingLavaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scorching Lava"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,	TRUE,
					Life(-2), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Kicker cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,	TRUE,
					Life(-2), PreventableType::Preventable));	

		cpSpell->SetAbilityText(_T("Casts kicked"));

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();

		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::GraveyardToExile);
		
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}
*/
//____________________________________________________________________________
//
CScorchingLavaCard::CScorchingLavaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scorching Lava"), CardType::Instant, nID)
		, m_KickerCost(RED_MANA_TEXT)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CScorchingLavaCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE));

	cpSpell->GetCost().AddOptionalManaCost(m_KickerCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->AddAbilityTag(AbilityTag::DamageSource);

	AddSpell(cpSpell.GetPointer());
}

void CScorchingLavaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pCreature = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pAbilityAction->GetAssociatedPlayer();

	CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (pCreature)
	{
		pModifier1.ApplyTo(pCreature);

		if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_KickerCost) && bResult) // kicked?
		{
			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::CantRegenerate, TRUE);
			pModifier2.ApplyTo(pCreature);

			CReplacementKeywordModifier* pModifier3 = new CReplacementKeywordModifier();
			pModifier3->GetModifier().SetOneTurnOnly(TRUE);
			pModifier3->GetModifier().SetToAdd(ReplacementKeyword::GraveyardToExile);

			pModifier3->ApplyTo(pCreature);
		}
	}
	else
		pModifier1.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CCauldronDanceCard::CCauldronDanceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cauldron Dance"), CardType::Instant, nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCauldronDanceCard::OnCardSelected))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CCauldronDanceCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CCauldronDanceCard::CanPlay)));
	m_pTargetMoveCardSpell->Add(cpTrait.GetPointer());

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

BOOL CCauldronDanceCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

void CCauldronDanceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
	pModifier1.ApplyTo(pTarget);

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pController);

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

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

void CCauldronDanceCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CCountedCardContainer pSubjects;

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
				pModifier2.ApplyTo((CCreatureCard*)pCard);

				if (pCard->IsInplay())
					pSubjects.AddCard(pCard, CardPlacement::Top);

				CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sure Sacrifice Effect"), 61064, &pSubjects);
				pModifier3.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CSpinalEmbraceCard::CSpinalEmbraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spinal Embrace"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CSpinalEmbraceCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpinalEmbraceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

BOOL CSpinalEmbraceCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CSpinalEmbraceCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(FALSE);
	pModifier1.ApplyTo(pTarget);

	pTarget->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
	pModifier2.ApplyTo(pTarget);

	CCountedCardContainer pSubjects;

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("Spinal Embrace Effect"), 61094, &pSubjects);
	pModifier3.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CLoafingGiantCard::CLoafingGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loafing Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLoafingGiantCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CLoafingGiantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	if (pLibrary->GetSize() > 0)
	{
		bool bLand = false;

		if (pLibrary->GetTopCard()->GetCardType().IsLand()) bLand = true;

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

		pModifier1.ApplyTo(pController);

		if (bLand)
		{
			CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::DealNoCombatDamage, TRUE);
			pModifier2.ApplyTo(this);
		}
	}

	return true;
}

//____________________________________________________________________________
//
