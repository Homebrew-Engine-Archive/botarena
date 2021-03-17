#include "stdafx.h"
#include "CardMercadianMasques.h"

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

		DEFINE_CARD(CAlabasterWallCard);
		DEFINE_CARD(CAlleyGriftersCard);
		DEFINE_CARD(CAncestralMaskCard);
		DEFINE_CARD(CArmisticeCard);
		DEFINE_CARD(CArrestCard);
		DEFINE_CARD(CAssemblyHallCard);
		DEFINE_CARD(CBalloonPeddlerCard);
		DEFINE_CARD(CBattleRampartCard);
		DEFINE_CARD(CBattleSquadronCard);
		DEFINE_CARD(CBifurcateCard);
		DEFINE_CARD(CBlackMarketCard);
		DEFINE_CARD(CBlasterMageCard);
		DEFINE_CARD(CBlockadeRunnerCard);
		DEFINE_CARD(CBloodOathCard);
		DEFINE_CARD(CBloodHoundCard);
		DEFINE_CARD(CBoaConstrictorCard);
		DEFINE_CARD(CBogSmugglersCard);
		DEFINE_CARD(CBogWitchCard);
		DEFINE_CARD(CBrawlCard);
		DEFINE_CARD(CBriarPatchCard);
		DEFINE_CARD(CBuoyancyCard);
		DEFINE_CARD(CCacklingWitchCard);
		DEFINE_CARD(CCateranBruteCard);
		DEFINE_CARD(CCateranEnforcerCard);
		DEFINE_CARD(CCateranKidnappersCard);
		DEFINE_CARD(CCateranOverlordCard);
		DEFINE_CARD(CCateranPersuaderCard);
		DEFINE_CARD(CCateranSlaverCard);
		DEFINE_CARD(CCateranSummonsCard);
		DEFINE_CARD(CCausticWaspsCard);
		DEFINE_CARD(CCaveInCard);
		DEFINE_CARD(CCavernCrawlerCard);
		DEFINE_CARD(CCaveSenseCard);
		DEFINE_CARD(CCeremonialGuardCard);
		DEFINE_CARD(CChamberedNautilusCard);
		DEFINE_CARD(CCharmPeddlerCard);
		DEFINE_CARD(CCharmedGriffinCard);
		DEFINE_CARD(CChoArrimAlchemistCard);
		DEFINE_CARD(CChoArrimBruiserCard);
		DEFINE_CARD(CChoArrimLegateCard);
		DEFINE_CARD(CCinderElementalCard);
		DEFINE_CARD(CClearTheLandCard);
		DEFINE_CARD(CCloseQuartersCard);
		DEFINE_CARD(CCorruptOfficialCard);
		DEFINE_CARD(CCrackdownCard);
		DEFINE_CARD(CCragSaurianCard);
		DEFINE_CARD(CCrashCard);
		DEFINE_CARD(CCreditVoucherCard);
		DEFINE_CARD(CCrenellatedWallCard);
		DEFINE_CARD(CCustomsDepotCard);
		DEFINE_CARD(CDartingMerfolkCard);
		DEFINE_CARD(CDawnstriderCard);
		DEFINE_CARD(CDeepwoodDrummerCard);
		DEFINE_CARD(CDeepwoodElderCard);
		DEFINE_CARD(CDeepwoodLegateCard);
		DEFINE_CARD(CDeepwoodTantivCard);
		DEFINE_CARD(CDeepwoodWolverineCard);
		DEFINE_CARD(CDelraichCard);
		DEFINE_CARD(CDiplomaticImmunityCard);
		DEFINE_CARD(CDevoutWitnessCard);
		DEFINE_CARD(CDrakeHatchlingCard);
		DEFINE_CARD(CDustBowlCard);
		DEFINE_CARD(CEmbargoCard);
		DEFINE_CARD(CEnslavedHorrorCard);
		DEFINE_CARD(CErithizonCard);
		DEFINE_CARD(CExtortionCard);
		DEFINE_CARD(CEyeOfRamosCard);
		DEFINE_CARD(CFerocityCard);
		DEFINE_CARD(CFlamingSwordCard);
		DEFINE_CARD(CForcedMarchCard);
		DEFINE_CARD(CFountainOfChoCard);
		DEFINE_CARD(CFountainWatchCard);
		DEFINE_CARD(CFreshVolunteersCard);
		DEFINE_CARD(CFuriousAssaultCard);
		DEFINE_CARD(CGerrardSIrregularsCard);
		DEFINE_CARD(CGhoulsFeastCard);
		DEFINE_CARD(CGlowingAnemoneCard);
		DEFINE_CARD(CGushCard);
		DEFINE_CARD(CHammerMageCard);
		DEFINE_CARD(CHauntedCrossroadsCard);
		DEFINE_CARD(CHeartOfRamosCard);
		DEFINE_CARD(CHengeGuardianCard);
		DEFINE_CARD(CHengeOfRamosCard);
		DEFINE_CARD(CHickoryWoodlotCard);
		DEFINE_CARD(CHighMarketCard);
		DEFINE_CARD(CHighSeasCard);
		DEFINE_CARD(CHiredGiantCard);
		DEFINE_CARD(CHoodwinkCard);
		DEFINE_CARD(CHornOfRamosCard);
		DEFINE_CARD(CHowlingWolfCard);
		DEFINE_CARD(CIgnobleSoldierCard);
		DEFINE_CARD(CInstigatorCard);
		DEFINE_CARD(CInsubordinationCard);
		DEFINE_CARD(CIntimidationCard);
		DEFINE_CARD(CInvigorateCard);
		DEFINE_CARD(CInviolabilityCard);
		DEFINE_CARD(CIronLanceCard);
		DEFINE_CARD(CJeweledTorqueCard);
		DEFINE_CARD(CJhovallQueenCard);
		DEFINE_CARD(CJhovallRiderCard);
		DEFINE_CARD(CKarnsTouchCard);
		DEFINE_CARD(CKrisMageCard);
		DEFINE_CARD(CKyrenArchiveCard);
		DEFINE_CARD(CKyrenGliderCard);
		DEFINE_CARD(CKyrenLegateCard);
		DEFINE_CARD(CKyrenNegotiationsCard);
		DEFINE_CARD(CKyrenSniperCard);
		DEFINE_CARD(CKyrenToyCard);
		DEFINE_CARD(CLandGrantCard);
		DEFINE_CARD(CLastBreathCard);
		DEFINE_CARD(CLeyLineCard);
		DEFINE_CARD(CLiabilityCard);
		DEFINE_CARD(CLightningHoundsCard);
		DEFINE_CARD(CLithophageCard);
		DEFINE_CARD(CLumberingSatyrCard);
		DEFINE_CARD(CLungeCard);
		DEFINE_CARD(CMaggotTherapyCard);
        DEFINE_CARD(CMagistratesScepterCard);
		DEFINE_CARD(CMagistratesVetoCard);
		DEFINE_CARD(CMercadianBazaarCard);
		DEFINE_CARD(CMercadianLiftCard);
		DEFINE_CARD(CMisdirectionCard);
		DEFINE_CARD(CMisshapenFiendCard);
		DEFINE_CARD(CMisstepCard);
		DEFINE_CARD(CMoltingHarpyCard);
		DEFINE_CARD(CMomentOfSilenceCard);
		DEFINE_CARD(CMonkeyCageCard);
		DEFINE_CARD(CMoonlitWakeCard);
		DEFINE_CARD(CMuzzleCard);
		DEFINE_CARD(CNetherSpiritCard);
		DEFINE_CARD(CNightwindGliderCard);
		DEFINE_CARD(CNotoriousAssassinCard);
		DEFINE_CARD(COrimsCureCard);
		DEFINE_CARD(COvertakerCard);
		DEFINE_CARD(CPanaceaCard);
		DEFINE_CARD(CPangosaurCard);
		DEFINE_CARD(CPeatBogCard);
		DEFINE_CARD(CPiousWarriorCard);
		DEFINE_CARD(CPortInspectorCard);
		DEFINE_CARD(CPowerMatrixCard);
		DEFINE_CARD(CPretendersClaimCard);
		DEFINE_CARD(CPufferExtractCard);
		DEFINE_CARD(CPulverizeCard);
		DEFINE_CARD(CPuppetsVerdictCard);
		DEFINE_CARD(CPutrefactionCard);
		DEFINE_CARD(CQuagmireLampreyCard);
		DEFINE_CARD(CRamosianCaptainCard);
		DEFINE_CARD(CRamosianCommanderCard);
		DEFINE_CARD(CRamosianLieutenantCard);
		DEFINE_CARD(CRamosianRallyCard);
		DEFINE_CARD(CRamosianSergeantCard);
		DEFINE_CARD(CRamosianSkyMarshalCard);
		DEFINE_CARD(CRampartCrawlerCard);
		DEFINE_CARD(CRappellingScoutsCard);
		DEFINE_CARD(CRemoteFarmCard);
		DEFINE_CARD(CRenounceCard);
		DEFINE_CARD(CReveredElderCard);
		DEFINE_CARD(CReverentMantraCard);
		//DEFINE_CARD(CRighteousIndignationCard);
		DEFINE_CARD(CRishadanAirshipCard);
		DEFINE_CARD(CRishadanPawnshopCard);
		DEFINE_CARD(CRishadanPortCard);
		DEFINE_CARD(CRobberFlyCard);
		DEFINE_CARD(CRouseCard);
		DEFINE_CARD(CRushwoodElementalCard);
		DEFINE_CARD(CRushwoodGroveCard);
		DEFINE_CARD(CRushwoodHerbalistCard);
		DEFINE_CARD(CRushwoodLegateCard);
		DEFINE_CARD(CSaberAntsCard);
		DEFINE_CARD(CSacredPreyCard);
		DEFINE_CARD(CSandstoneNeedleCard);
		DEFINE_CARD(CSaprazzanBailiffCard);
		DEFINE_CARD(CSaprazzanCoveCard);
		DEFINE_CARD(CSaprazzanHeirCard);
		DEFINE_CARD(CSaprazzanLegateCard);
		DEFINE_CARD(CSaprazzanOutriggerCard);
		DEFINE_CARD(CSaprazzanRaiderCard);
		DEFINE_CARD(CSaprazzanSkerryCard);
		DEFINE_CARD(CSecurityDetailCard);
		DEFINE_CARD(CSeismicMageCard);
		DEFINE_CARD(CShovingMatchCard);
		DEFINE_CARD(CSilentAssassinCard);
		DEFINE_CARD(CSilvergladeElementalCard);
		DEFINE_CARD(CSilvergladePathfinderCard);
		DEFINE_CARD(CSkulkingFugitiveCard);
		DEFINE_CARD(CSkullOfRamosCard);
		DEFINE_CARD(CSnakePitCard);
		DEFINE_CARD(CSnortingGahrCard);
		DEFINE_CARD(CSnuffOutCard);
		DEFINE_CARD(CSoothingBalmCard);
		DEFINE_CARD(CSoothsayingCard);
		DEFINE_CARD(CSoulChannelingCard);
		DEFINE_CARD(CSpectersWailCard);
		DEFINE_CARD(CSpidersilkArmorCard);
		DEFINE_CARD(CSpiritualFocusCard);
		DEFINE_CARD(CSpontaneousGenerationCard);
		DEFINE_CARD(CSqueezeCard);
		DEFINE_CARD(CStaminaCard);
		DEFINE_CARD(CStatecraftCard);
		DEFINE_CARD(CStingingBarrierCard);
		DEFINE_CARD(CStrongarmThugCard);
		DEFINE_CARD(CSubterraneanHangarCard);
		DEFINE_CARD(CSustenanceCard);
		DEFINE_CARD(CTaskForceCard);
		DEFINE_CARD(CTectonicBreakCard);
		DEFINE_CARD(CThermalGliderCard);
		DEFINE_CARD(CThrashingWumpusCard);
		DEFINE_CARD(CThunderclapCard);
		DEFINE_CARD(CThwartCard);
		DEFINE_CARD(CTidalBoreCard);
		DEFINE_CARD(CTigerClawsCard);
		DEFINE_CARD(CTonicPeddlerCard);
		DEFINE_CARD(CToothOfRamosCard);
		DEFINE_CARD(CTowerOfTheMagistrateCard);
		DEFINE_CARD(CToymakerCard);
		DEFINE_CARD(CUndertakerCard);
		DEFINE_CARD(CUnmaskCard);
		DEFINE_CARD(CUphillBattleCard);
		DEFINE_CARD(CVendettaCard);
		DEFINE_CARD(CVenomousDragonflyCard);
		DEFINE_CARD(CVernalEquinoxCard);
		DEFINE_CARD(CVineDryadCard);
		DEFINE_CARD(CWallOfDistortionCard);
		DEFINE_CARD(CWarpathCard);
		DEFINE_CARD(CWaterfrontBouncerCard);
		DEFINE_CARD(CWaveofReckoningCard);
		DEFINE_CARD(CWildJhovallCard);
		DEFINE_CARD(CWorryBeadsCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CEyeOfRamosCard::CEyeOfRamosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eye of Ramos"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHeartOfRamosCard::CHeartOfRamosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heart of Ramos"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHornOfRamosCard::CHornOfRamosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horn of Ramos"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkullOfRamosCard::CSkullOfRamosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skull of Ramos"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CToothOfRamosCard::CToothOfRamosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tooth of Ramos"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHengeOfRamosCard::CHengeOfRamosCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Henge of Ramos"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGerrardSIrregularsCard::CGerrardSIrregularsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Gerrard's Irregulars"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CRishadanPortCard::CRishadanPortCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rishadan Port"), nID)
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
				TRUE, FALSE,
				new CardTypeComparer(CardType::_Land, false)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CSpidersilkArmorCard::CSpidersilkArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spidersilk Armor"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+1), CreatureKeyword::Reach));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLastBreathCard::CLastBreathCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Last Breath"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CreaturePowerComparer<std::less<int>>(3),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CAlabasterWallCard::CAlabasterWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alabaster Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAlleyGriftersCard::CAlleyGriftersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alley Grifters"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalloonPeddlerCard::CBalloonPeddlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balloon Peddler"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattleRampartCard::CBattleRampartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battle Rampart"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBattleSquadronCard::CBattleSquadronCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battle Squadron"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlasterMageCard::CBlasterMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blaster Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlockadeRunnerCard::CBlockadeRunnerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Blockade Runner"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
}

//____________________________________________________________________________
//
CBoaConstrictorCard::CBoaConstrictorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Boa Constrictor"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+3), Life(+3), CreatureKeyword::Null)
{
	m_pPumpAbility->AddTapCost();
}

//____________________________________________________________________________
//
CBogSmugglersCard::CBogSmugglersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bog Smugglers"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CBogWitchCard::CBogWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Witch"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCacklingWitchCard::CCacklingWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cackling Witch"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCateranBruteCard::CCateranBruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cateran Brute"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 2 or less"), _T("Mercenary permanents with converted mana cost 2 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCateranEnforcerCard::CCateranEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cateran Enforcer"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	GetCreatureKeyword()->AddFear(FALSE);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(5));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 4 or less"), _T("Mercenary permanents with converted mana cost 4 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCateranKidnappersCard::CCateranKidnappersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cateran Kidnappers"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(2))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 3 or less"), _T("Mercenary permanents with converted mana cost 3 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCateranOverlordCard::CCateranOverlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cateran Overlord"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(5))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(7));
		m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 6 or less"), _T("Mercenary permanents with converted mana cost 6 or less"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("6"),
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CCateranPersuaderCard::CCateranPersuaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cateran Persuader"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 1 or less"), _T("Mercenary permanents with converted mana cost 1 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCateranSlaverCard::CCateranSlaverCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Cateran Slaver"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5),
		CreatureKeyword::Swampwalk)

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(6));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 5 or less"), _T("Mercenary permanents with converted mana cost 5 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("5"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CCausticWaspsCard::CCausticWaspsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Caustic Wasps"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCavernCrawlerCard::CCavernCrawlerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cavern Crawler"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(3),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Mountainwalk, FALSE);
}

//____________________________________________________________________________
//
CCeremonialGuardCard::CCeremonialGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ceremonial Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCeremonialGuardCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCeremonialGuardCard::BeforeResolution(CAbilityAction* pAction)
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
CChamberedNautilusCard::CChamberedNautilusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chambered Nautilus"), CardType::Creature, CREATURE_TYPE2(Nautilus, Beast), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCharmPeddlerCard::CCharmPeddlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charm Peddler"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CCharmedGriffinCard::CCharmedGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Charmed Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());

	/*
	counted_ptr<CTriggeredMoveCardWhenSelfMovedAbility> cpAbility(
		::CreateObject<CTriggeredMoveCardWhenSelfMovedAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Hand, ZoneId::Battlefield, FALSE));

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::CardsInTriggeredPlayersZone);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetOptional(TRUE);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
CChoArrimAlchemistCard::CChoArrimAlchemistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cho-Arrim Alchemist"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Life(PreventionType::ReverseNextDamage),
			SourceColor::_AllSources,
			TRUE));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChoArrimBruiserCard::CChoArrimBruiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cho-Arrim Bruiser"), CardType::Creature, CREATURE_TYPE2(Ogre, Rebel), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetSubjectCount(0, 2);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCinderElementalCard::CCinderElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cinder Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(-1));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorruptOfficialCard::CCorruptOfficialCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Corrupt Official"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(1),
		_T("2") BLACK_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE); //discard at random

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDartingMerfolkCard::CDartingMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darting Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDawnstriderCard::CDawnstriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dawnstrider"), CardType::Creature, CREATURE_TYPE2(Dryad, Spellshaper), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			GREEN_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepwoodDrummerCard::CDeepwoodDrummerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepwood Drummer"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CDeepwoodTantivCard::CDeepwoodTantivCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepwood Tantiv"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback
							> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepwoodWolverineCard::CDeepwoodWolverineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepwood Wolverine"), CardType::Creature, CREATURE_TYPE(Wolverine), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDelraichCard::CDelraichCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Delraich"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("6") BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("black creatures")));
		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDelraichCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CDelraichCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CDevoutWitnessCard::CDevoutWitnessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devout Witness"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrakeHatchlingCard::CDrakeHatchlingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drake Hatchling"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEnslavedHorrorCard::CEnslavedHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enslaved Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFountainWatchCard::CFountainWatchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fountain Watch"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			Power(+0), Life(+0)));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFreshVolunteersCard::CFreshVolunteersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fresh Volunteers"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGlowingAnemoneCard::CGlowingAnemoneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glowing Anemone"), CardType::Creature, CREATURE_TYPE2(Jellyfish, Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHowlingWolfCard::CHowlingWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Howling Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Howling Wolf")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJhovallQueenCard::CJhovallQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhovall Queen"), CardType::Creature, CREATURE_TYPE2(Cat, Rebel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(7))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CJhovallRiderCard::CJhovallRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhovall Rider"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CKrisMageCard::CKrisMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kris Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKyrenGliderCard::CKyrenGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kyren Glider"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CKyrenSniperCard::CKyrenSniperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kyren Sniper"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightningHoundsCard::CLightningHoundsCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Lightning Hounds"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CLithophageCard::CLithophageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lithophage"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLumberingSatyrCard::CLumberingSatyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lumbering Satyr"), CardType::Creature, CREATURE_TYPE2(Satyr, Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Forestwalk));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMisshapenFiendCard::CMisshapenFiendCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Misshapen Fiend"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMoltingHarpyCard::CMoltingHarpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Molting Harpy"), CardType::Creature, CREATURE_TYPE2(Harpy, Mercenary), nID,
		BLACK_MANA_TEXT, Power(2), Life(1))
{
	AddUpkeepCost(_T("2"));
}

//____________________________________________________________________________
//
CNightwindGliderCard::CNightwindGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nightwind Glider"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CNotoriousAssassinCard::CNotoriousAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Notorious Assassin"), CardType::Creature, CREATURE_TYPE3(Human, Spellshaper, Assassin), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COvertakerCard::COvertakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Overtaker"), CardType::Creature, CREATURE_TYPE2(Merfolk, Spellshaper), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpAbility->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1); 

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPangosaurCard::CPangosaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pangosaur"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	//lands played from the hand or graveyard
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand | ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPiousWarriorCard::CPiousWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pious Warrior"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Warrior), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
							CWhenDamageDealt::DamageEventCallback, 
							&CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(
		new SpecificCardComparer(this));

	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
		&CPiousWarriorCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CPiousWarriorCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CInstigatorCard::CInstigatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Instigator"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	//"Target a player" isn't supported yet, so this ability is split into two and only "affects" the creatures
	{
		//affects your creatures
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
				::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
					_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
					new AnyCreatureComparer,
					Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetAbilityText(_T("Creatures you control attack this turn if able. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//affects opponents creatures
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
				::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
					_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
					new AnyCreatureComparer,
					Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->SetAffectOpponentCardsOnly();

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetAbilityText(_T("Creatures your opponent controls attack this turn if able. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPortInspectorCard::CPortInspectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Port Inspector"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	//It currently "targets" the opponent to see his hand, but you just should be able to look at defending player's hand.
	typedef
		TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfAttackedBlocked, 
								 CWhenSelfAttackedBlocked::BlockEventCallback, &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CPortInspectorCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CPortInspectorCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CQuagmireLampreyCard::CQuagmireLampreyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quagmire Lamprey"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false)); // add one counter

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
		&CQuagmireLampreyCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CQuagmireLampreyCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CRamosianCaptainCard::CRamosianCaptainCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ramosian Captain"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(5));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 4 or less"), _T("Rebel permanents with converted mana cost 4 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("5"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CRamosianCommanderCard::CRamosianCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramosian Commander"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(6));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 5 or less"), _T("Rebel permanents with converted mana cost 5 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("6"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CRamosianLieutenantCard::CRamosianLieutenantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramosian Lieutenant"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 3 or less"), _T("Rebel permanents with converted mana cost 3 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CRamosianSergeantCard::CRamosianSergeantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramosian Sergeant"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 2 or less"), _T("Rebel permanents with converted mana cost 2 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CRamosianSkyMarshalCard::CRamosianSkyMarshalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ramosian Sky Marshal"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(7));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 6 or less"), _T("Rebel permanents with converted mana cost 6 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("7"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CRampartCrawlerCard::CRampartCrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rampart Crawler"), CardType::Creature, CREATURE_TYPE2(Lizard, Mercenary), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("non-Walls")));
}

//____________________________________________________________________________
//
CRappellingScoutsCard::CRappellingScoutsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rappelling Scouts"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Scout), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(4))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRappellingScoutsCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") WHITE_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Gain protection from color of your choice. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRappellingScoutsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRappellingScoutsCard::BeforeResolution(CAbilityAction* pAction)
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

void CRappellingScoutsCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CReveredElderCard::CReveredElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Revered Elder"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(1),
			SourceColor::Null, FALSE));
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRishadanAirshipCard::CRishadanAirshipCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rishadan Airship"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CRobberFlyCard::CRobberFlyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Robber Fly"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	//It currently "targets" the opponent to let him/her discard his/her hand and draws that many cards, instead to let the defending player do that.
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility2, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetDiscardCount(SpecialNumber::All);
	cpAbility->SetToZone(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}


//________________________________________________________________________________
//
CRushwoodElementalCard::CRushwoodElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rushwood Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRushwoodHerbalistCard::CRushwoodHerbalistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rushwood Herbalist"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSacredPreyCard::CSacredPreyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sacred Prey"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback
							> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSaprazzanBailiffCard::CSaprazzanBailiffCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saprazzan Bailiff"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		// Not optional
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		// Not optional
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSaprazzanHeirCard::CSaprazzanHeirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saprazzan Heir"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetDrawCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSaprazzanOutriggerCard::CSaprazzanOutriggerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saprazzan Outrigger"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("3") BLUE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSaprazzanRaiderCard::CSaprazzanRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saprazzan Raider"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeismicMageCard::CSeismicMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seismic Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilentAssassinCard::CSilentAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silent Assassin"), CardType::Creature, CREATURE_TYPE3(Human, Mercenary, Assassin), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	//A tricky way to destroy the target "at end of combat".
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, new BlockingCreatureComparer));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(pGame, new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy),
							TurnNumberDelta(-1),
							NodeId::EndOfCombatStep, 
							true, // in-play only
							CScheduledCardModifier::Operation::ApplyToLater));

	AddAbility(cpAbility.GetPointer());

	//This I've not used because "at end of combat." isn't supported by an activated ability:
	//counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
	//	::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
	//		_T("3") BLACK_MANA_TEXT,
	//		new BlockingCreatureComparer,
	//		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
	//
	//cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);

	//AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilvergladeElementalCard::CSilvergladeElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverglade Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilvergladePathfinderCard::CSilvergladePathfinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverglade Pathfinder"), CardType::Creature, CREATURE_TYPE2(Dryad, Spellshaper), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkulkingFugitiveCard::CSkulkingFugitiveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skulking Fugitive"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, 
							&CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

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
CSnortingGahrCard::CSnortingGahrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snorting Gahr"), CardType::Creature, CREATURE_TYPE2(Rhino, Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStingingBarrierCard::CStingingBarrierCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Stinging Barrier"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(4),
		BLUE_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-1),
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CStrongarmThugCard::CStrongarmThugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Strongarm Thug"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTaskForceCard::CTaskForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Task Force"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+0));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThermalGliderCard::CThermalGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thermal Glider"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CThrashingWumpusCard::CThrashingWumpusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrashing Wumpus"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			BLACK_MANA_TEXT,
			Life(-1),	// life delta
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTonicPeddlerCard::CTonicPeddlerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Tonic Peddler"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(+3),	// life delta
		PreventableType::NotPreventable)
{
	m_pTargetChgLifeAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CUndertakerCard::CUndertakerCard(CGame* pGame, UINT uID)
	: CCreatureCard(pGame, _T("Undertaker"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), uID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVenomousDragonflyCard::CVenomousDragonflyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Venomous Dragonfly"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVenomousDragonflyCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVenomousDragonflyCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CVenomousDragonflyCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CVenomousDragonflyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
CVineDryadCard::CVineDryadCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Vine Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(3),
		CreatureKeyword::Forestwalk)
{
		GetCardKeyword()->AddFlash(FALSE);
		
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green, false));

		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature | AbilityType::AsInstant, //Flash
				_T("")));

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetAbilityText(_T("Casts"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CVineDryadCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CVineDryadCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CWallOfDistortionCard::CWallOfDistortionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Distortion"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

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
}

//____________________________________________________________________________
//
CWaterfrontBouncerCard::CWaterfrontBouncerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Waterfront Bouncer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Spellshaper), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildJhovallCard::CWildJhovallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Jhovall"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CCrenellatedWallCard::CCrenellatedWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crenellated Wall"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("4"), Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHengeGuardianCard::CHengeGuardianCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Henge Guardian"), CardType::_ArtifactCreature, CREATURE_TYPE2(Dragon, Wurm), nID,
		_T("5"), Power(3), Life(4),
		_T("2"), Power(+0), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CDustBowlCard::CDustBowlCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dust Bowl"), nID)
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
				_T("3"),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHighMarketCard::CHighMarketCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("High Market"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIronLanceCard::CIronLanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Iron Lance"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPanaceaCard::CPanaceaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Panacea"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(0), SourceColor::Null));

	cpAbility->AddTapCost();
	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
	cpAbility->SetExtraActionValueVector(ContextValue(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPowerMatrixCard::CPowerMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Power Matrix"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Flying | CreatureKeyword::FirstStrike | CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPufferExtractCard::CPufferExtractCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Puffer Extract"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	,m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPufferExtractCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(1 /*toughness*/, 1 /*power*/));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CPufferExtractCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{

	if (!bResult) return;
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CRishadanPawnshopCard::CRishadanPawnshopCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rishadan Pawnshop"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRishadanPawnshopCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2"),
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false)); //nontoken
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CRishadanPawnshopCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* target = pCard->GetController();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);

	if (bResult) pLibrary->Shuffle();
}

//____________________________________________________________________________
//
CWorryBeadsCard::CWorryBeadsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Worry Beads"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArmisticeCard::CArmisticeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Armistice"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(+3), PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBriarPatchCard::CBriarPatchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Briar Patch"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBriarPatchCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CBriarPatchCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return (pCreature->GetAttackedPlayer() == GetController());

	//Does the creature attack defending player (and not a planeswalker)?
}

//____________________________________________________________________________
//
CBuoyancyCard::CBuoyancyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Buoyancy"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CCaveSenseCard::CCaveSenseCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cave Sense"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CCloseQuartersCard::CCloseQuartersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Close Quarters"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockedEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiplomaticImmunityCard::CDiplomaticImmunityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Diplomatic Immunity"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Null)
{
	GetCardKeyword()->AddShroud(FALSE);

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CEmbargoCard::CEmbargoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Embargo"), CardType::GlobalEnchantment, nID)
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	{
		counted_ptr<CCardKeywordEnchantment> cpSpell(
			::CreateObject<CCardKeywordEnchantment>(this,
				_T("3") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false))));

		cpSpell->GetCardKeywordMod()->GetModifier().SetAdditionData((DWORD)&m_CardFilter); 

		cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFerocityCard::CFerocityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ferocity"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CFerocityCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFerocityCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlamingSwordCard::CFlamingSwordCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Flaming Sword"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+1), Life(+0), CreatureKeyword::FirstStrike)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CFuriousAssaultCard::CFuriousAssaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Furious Assault"), CardType::GlobalEnchantment, nID, 
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHauntedCrossroadsCard::CHauntedCrossroadsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Haunted Crossroads"), CardType::GlobalEnchantment, nID, 
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHighSeasCard::CHighSeasCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("High Seas"), CardType::GlobalEnchantment, nID, 
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new AnyCreatureComparer,
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CardTypeComparer(CardType::Red | CardType::Green, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrackdownCard::CCrackdownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crackdown"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::White, false));
	cpSpell->GetEnchantmentCardFilter().AddComparer(
		new CreaturePowerComparer<std::greater<int>>(2));

	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIntimidationCard::CIntimidationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Intimidation"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Fear));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CInviolabilityCard::CInviolabilityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Inviolability"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage)
{
}

//____________________________________________________________________________
//
CKyrenNegotiationsCard::CKyrenNegotiationsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kyren Negotiations"), CardType::GlobalEnchantment, nID, 
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeyLineCard::CLeyLineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ley Line"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLiabilityCard::CLiabilityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Liability"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new TrueCardComparer);
	//m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield)); //with this it doesn't work
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	m_CardFilter.SetFilterName(_T("a nontoken permanent"), _T("nontoken permanents"));

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaggotTherapyCard::CMaggotTherapyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Maggot Therapy"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+2), Life(-2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CMagistratesVetoCard::CMagistratesVetoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magistrate's Veto"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CardTypeComparer(CardType::White | CardType::Blue, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoonlitWakeCard::CMoonlitWakeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moonlit Wake"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMuzzleCard::CMuzzleCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Muzzle"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage)
{
}

//____________________________________________________________________________
//
CPutrefactionCard::CPutrefactionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Putrefaction"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));

	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPretendersClaimCard::CPretendersClaimCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pretender's Claim"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPretendersClaimCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPretendersClaimCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents); //this is not completely correct, because the trigger should get the defending player (but this isn't possible). It works only correct, when you don't enchant an opponents creature (unusual).

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSecurityDetailCard::CSecurityDetailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Security Detail"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Soldier D"), 2994,
			1));
	ATLASSERT(cpAbility);

	cpAbility->SetMaxTurnUsageCount(1);

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CSecurityDetailCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CSecurityDetailCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer()) < 1)
		return true;

	return false;
}

//____________________________________________________________________________
//
CSnakePitCard::CSnakePitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Snake Pit"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)

	, m_CardFilter(_T("a blue or black card"), _T("blue or black cards"), new CardTypeComparer(CardType::Blue | CardType::Black, false))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->SetCreateTokenOption(TRUE, _T("Snake E"), 2970, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulChannelingCard::CSoulChannelingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul Channeling"), CardType::EnchantCreature, nID)
{
	/*
	counted_ptr<CRegenerationAbilityEnchant> cpSpell(
		::CreateObject<CRegenerationAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT,
			_T("")));
	*/

	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSoulChannelingCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSoulChannelingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, _T(""), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->AddPayLifeDeltaCost(Life(-2));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSqueezeCard::CSqueezeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Squeeze"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CConsExtraManaEnchantment> cpSpell(
		::CreateObject<CConsExtraManaEnchantment>(this,
			_T("3") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Sorcery, false),
			_T("3")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStatecraftCard::CStatecraftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Statecraft"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::DealNoCombatDamage));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSustenanceCard::CSustenanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sustenance"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTigerClawsCard::CTigerClawsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Tiger Claws"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Trample)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CUphillBattleCard::CUphillBattleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Uphill Battle"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("2") RED_MANA_TEXT,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("creatures")),	
			TRUE));

	cpEnchantment->SetAffectOpponentsOnly();

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CCrashCard::CCrashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crash"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCrashCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CCrashCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CHoodwinkCard::CHoodwinkCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hoodwink"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CMisdirectionCard::CMisdirectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Misdirection"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CDeflectionSpell> cpSpell(
			::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
				new TrueCardComparer));

		//cpSpell->SetDeflectAbilities(TRUE); for testing only

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

		//Alternative cost
		counted_ptr<CDeflectionSpell> cpSpell(
			::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
				_T(""), 
				new TrueCardComparer));

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMisdirectionCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMisdirectionCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CReverentMantraCard::CReverentMantraCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reverent Mantra"), CardType::Instant, nID)
{
	{
		//Regular mana cost: Choice = Protection From White
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityText(_T("Choose white. All creatures gain protection from white until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regular mana cost: Choice = Protection From Blue
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityText(_T("Choose blue. All creatures gain protection from blue until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regular mana cost: Choice = Protection From Black
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityText(_T("Choose black. All creatures gain protection from black until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regular mana cost: Choice = Protection From Red
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityText(_T("Choose red. All creatures gain protection from red until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Regular mana cost: Choice = Protection From Green
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityText(_T("Choose green. All creatures gain protection from green until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost: Choice = Protection From White
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetAbilityText(_T("Choose white. All creatures gain protection from white until end of turn. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReverentMantraCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost: Choice = Protection From Blue
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetAbilityText(_T("Choose blue. All creatures gain protection from blue until end of turn. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReverentMantraCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost: Choice = Protection From Black
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetAbilityText(_T("Choose black. All creatures gain protection from black until end of turn. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReverentMantraCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost: Choice = Protection From Red
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetAbilityText(_T("Choose red. All creatures gain protection from red until end of turn. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReverentMantraCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::White, false));

		//Alternative cost: Choice = Protection From Green
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		cpSpell->SetAbilityText(_T("Choose green. All creatures gain protection from green until end of turn. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReverentMantraCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CReverentMantraCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSoothingBalmCard::CSoothingBalmCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Soothing Balm"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+5), PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CThunderclapCard::CThunderclapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thunderclap"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CThunderclapCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CThunderclapCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CWarpathCard::CWarpathCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Warpath"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") RED_MANA_TEXT,
		Life(-3), // life delta
		new BlockingCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddChildFilter(
		new CCardFilter(new BlockedCreatureComparer));
}

//____________________________________________________________________________
//
CCateranSummonsCard::CCateranSummonsCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Cateran Summons"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter,
		ZoneId::Hand, TRUE, TRUE, FALSE)

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CCaveInCard::CCaveInCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cave-In"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

		//Alternative cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
				_T(""),
				Life(-2),
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCaveInCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CCaveInCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CPulverizeCard::CPulverizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pulverize"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPulverizeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CPulverizeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSpectersWailCard::CSpectersWailCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Specter's Wail"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetAtRandom();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnmaskCard::CUnmaskCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unmask"), CardType::Sorcery, nID)

	, m_CardFilter1(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	{
		//Regular mana cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				&m_CardFilter1));	// Exclude land cards

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

		//Alternative cost
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T(""),
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				&m_CardFilter1));	// Exclude land cards

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CUnmaskCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CUnmaskCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CGushCard::CGushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gush"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant, 
				_T("4") BLUE_MANA_TEXT, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant, 
				_T(""), 2));

		cpSpell->GetCost().AddReturnFromPlayCardCost(2, CCardFilter::GetFilter(_T("Islands")));

		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGushCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CGushCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSnuffOutCard::CSnuffOutCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Snuff Out"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	{ //ACC
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpSpell->AddPayLifeDeltaCost(Life(-4));
		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSnuffOutCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSnuffOutCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);		
		if ((pCard->GetCardType() & CardType::Swamp).Any())
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CInvigorateCard::CInvigorateCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Invigorate"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		//alternative cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CInvigorateCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetAbilityText(_T("Have an opponent gain 3 life to cast"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CInvigorateCard::BeforeResolveSelection));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CInvigorateCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nForestCount = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);		
		if ((pCard->GetCardType() & CardType::Forest).Any())
			++nForestCount;
	}

	return ((nForestCount >= 1) && !m_pGame->GetNextPlayer(GetController())->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife));
}

bool CInvigorateCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	// valid until mana cost reduction is implanted and
	// there aren't effects requiring 3 or more extra mana to cast spells

	return GetLastCastingManaCost().GetTotal() < 3;
}

//____________________________________________________________________________
//
CThwartCard::CThwartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thwart"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T(""),
				new TrueCardComparer));

		cpSpell->GetCost().AddReturnFromPlayCardCost(3, CCardFilter::GetFilter(_T("Islands")));
		cpSpell->SetAbilityText(_T("casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CThwartCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}
	
BOOL CThwartCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CHickoryWoodlotCard::CHickoryWoodlotCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Hickory Woodlot"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEPLETION_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHickoryWoodlotCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CHickoryWoodlotCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                                          const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CPeatBogCard::CPeatBogCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Peat Bog"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEPLETION_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPeatBogCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CPeatBogCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                                          const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CRemoteFarmCard::CRemoteFarmCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Remote Farm"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEPLETION_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRemoteFarmCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CRemoteFarmCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                                          const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CSandstoneNeedleCard::CSandstoneNeedleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sandstone Needle"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEPLETION_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandstoneNeedleCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CSandstoneNeedleCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                                          const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CSaprazzanSkerryCard::CSaprazzanSkerryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Saprazzan Skerry"), nID)
{
	SetIntoPlayTapped();
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(DEPLETION_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEPLETION_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
	{
		typedef
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSaprazzanSkerryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CSaprazzanSkerryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                                          const CManaProductionAbilityAction* pAction) const
{
	return GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() == 0;
}

//____________________________________________________________________________
//
CMagistratesScepterCard::CMagistratesScepterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Magistrate's Scepter"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

	cpAbility->AddTapCost();
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""), PlayerEffectType::TimeWalk, FALSE, 1));

	cpAbility->SetAffectControllerOnly();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHiredGiantCard::CHiredGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hired Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIgnobleSoldierCard::CIgnobleSoldierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ignoble Soldier"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DealNoCombatDamage);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncestralMaskCard::CAncestralMaskCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancestral Mask"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CAncestralMaskCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CAncestralMaskCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CAncestralMaskCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Enchantment, false), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->GetSurveyCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpEnchantAbility->SetPowerMultiplier(Power(2));
	cpEnchantAbility->SetToughnessMultiplier(Life(2));

	cpEnchantAbility->SetListenToAllPlayersZones();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CAncestralMaskCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
//
//"Righteous Indignation\n{2W}\nEnchantment\nMMQ,U\nWhenever a creature blocks a black or red creature, the blocking creature gets +1/+1 until end of turn."
//
//CRighteousIndignationCard::CRighteousIndignationCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Righteous Indignation"), CardType::GlobalEnchantment, nID,
//		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
//{
//	m_CardFilter.AddComparer(new AnyCreatureComparer);
//	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));
//
//	typedef
//		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
//							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter); //not a member of 'CWhenAttackedBlocked'
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
//	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
//
//	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CBrawlCard::CBrawlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brawl"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Null));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBrawlCard::CreateAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBrawlCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(pCard,
			_T(""),
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShovingMatchCard::CShovingMatchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shoving Match"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Null));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CShovingMatchCard::CreateAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CShovingMatchCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(pCard,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNetherSpiritCard::CNetherSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nether Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNetherSpiritCard::SetTriggerContext));
    cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNetherSpiritCard::BeforeResolution));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CNetherSpiritCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pController = GetController();
	CZone* pOppInplay = GetController()->GetZoneById(ZoneId::Graveyard);	
	int nOppCount = 0;
	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
            ++nOppCount;
	}

	return ((nOppCount==1) && (GetZone()->GetZoneId() == ZoneId::Graveyard));
}

bool CNetherSpiritCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	CZone* pOppInplay = GetController()->GetZoneById(ZoneId::Graveyard);	
	int nOppCount = 0;
	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
            ++nOppCount;
	}

	return ((nOppCount==1) && (GetZone()->GetZoneId() == ZoneId::Graveyard));
}

//____________________________________________________________________________
//
CCustomsDepotCard::CCustomsDepotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Customs Depot"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetResolutionCost(_T("1"));
	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVendettaCard::CVendettaCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vendetta"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVendettaCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false)); // Exclude black cards
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CVendettaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	if (!pTarget->GetCardType().IsCreature()) return;

	Life n = pTarget->GetLastKnownToughness();
	CLifeModifier pModifier = CLifeModifier(
		Life(-n), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable, // preventable or not prevantable
		DamageType::NotDealingDamage); // Damage Type
		
	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CTidalBoreCard::CTidalBoreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tidal Bore"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				TRUE, TRUE,
				new AnyCreatureComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T(""),
				TRUE, TRUE,
				new AnyCreatureComparer));

		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CTidalBoreCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CTidalBoreCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CBlackMarketCard::CBlackMarketCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Black Market"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlackMarketCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlackMarketCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlackMarketCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->IsFirstMainPhase();
}

bool CBlackMarketCard::BeforeResolution(CAbilityAction* pAction)
{
	int n = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	CManaPoolModifier modifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));
	for (int i = 0; i < n; ++i) modifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CChoArrimLegateCard::CChoArrimLegateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cho-Arrim Legate"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Swamp, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Plains, false));

		//alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("casts"));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CChoArrimLegateCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CChoArrimLegateCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CChoArrimLegateCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CChoArrimLegateCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CDeepwoodElderCard::CDeepwoodElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deepwood Elder"), CardType::Creature, CREATURE_TYPE2(Dryad, Spellshaper), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->AddCardTypeToSelection(CardType::Forest | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Forest"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeepwoodLegateCard::CDeepwoodLegateCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Deepwood Legate"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Forest, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Swamp, false));

	//alternative cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("")));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	cpSpell->SetAbilityText(_T("casts"));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CDeepwoodLegateCard::CanPlay1)));
	cpSpell->Add(cpTrait1.GetPointer());

	counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CDeepwoodLegateCard::CanPlay2)));
	cpSpell->Add(cpTrait2.GetPointer());

	cpSpell->SetMainSpell(FALSE);
	AddSpell(cpSpell.GetPointer());
}

BOOL CDeepwoodLegateCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CDeepwoodLegateCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CErithizonCard::CErithizonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Erithizon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKyrenLegateCard::CKyrenLegateCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Kyren Legate"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Plains, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Mountain, false));

	//alternative cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("")));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	cpSpell->SetAbilityText(_T("casts"));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CKyrenLegateCard::CanPlay1)));
	cpSpell->Add(cpTrait1.GetPointer());

	counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CKyrenLegateCard::CanPlay2)));
	cpSpell->Add(cpTrait2.GetPointer());

	cpSpell->SetMainSpell(FALSE);
	AddSpell(cpSpell.GetPointer());
}

BOOL CKyrenLegateCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CKyrenLegateCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLungeCard::CLungeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lunge"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-2), PreventableType::Preventable));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

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

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMisstepCard::CMisstepCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Misstep"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgUntapCardTypeSpell> cpSpell(
		::CreateObject<CTargetChgUntapCardTypeSpell>(this, AbilityType::Sorcery,					
			_T("1") BLUE_MANA_TEXT,
			CardType::Creature));
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COrimsCureCard::COrimsCureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Orim's Cure"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT, 
				new AnyCreatureComparer, TRUE,
				Life(4), SourceColor::Null));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains, false));

		//alternative cost
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T(""), 
				new AnyCreatureComparer, TRUE,
				Life(4), SourceColor::Null));

		cpSpell->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&COrimsCureCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL COrimsCureCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CRamosianRallyCard::CRamosianRallyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ramosian Rally"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains, false));

		//alternative cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRamosianRallyCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CRamosianRallyCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CRouseCard::CRouseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rouse"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Swamp, false));

		//alternative cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(+2), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->AddPayLifeDeltaCost(Life(-2));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRouseCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CRouseCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CRushwoodLegateCard::CRushwoodLegateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rushwood Legate"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Island, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Forest, false));

	//alternative cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("")));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	cpSpell->SetAbilityText(_T("casts"));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CRushwoodLegateCard::CanPlay1)));
	cpSpell->Add(cpTrait1.GetPointer());

	counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CRushwoodLegateCard::CanPlay2)));
	cpSpell->Add(cpTrait2.GetPointer());

	cpSpell->SetMainSpell(FALSE);
	AddSpell(cpSpell.GetPointer());
}

BOOL CRushwoodLegateCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CRushwoodLegateCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CSaberAntsCard::CSaberAntsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saber Ants"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetCreateTokenOption(TRUE, _T("Insect F"), 2804, 0);

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSaberAntsCard::SetTriggerContextL));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation); 

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CSaberAntsCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CSaprazzanLegateCard::CSaprazzanLegateCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Saprazzan Legate"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Mountain, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Island, false));

	//alternative cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			_T("")));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	cpSpell->SetAbilityText(_T("casts"));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CSaprazzanLegateCard::CanPlay1)));
	cpSpell->Add(cpTrait1.GetPointer());

	counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CSaprazzanLegateCard::CanPlay2)));
	cpSpell->Add(cpTrait2.GetPointer());

	cpSpell->SetMainSpell(FALSE);
	AddSpell(cpSpell.GetPointer());
}

BOOL CSaprazzanLegateCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CSaprazzanLegateCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLandGrantCard::CLandGrantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Land Grant"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("Forests")),
			ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

		//alternative cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T(""),
			CCardFilter::GetFilter(_T("Forests")),
			ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpSpell->GetCost().AddRevealCardCost(SpecialNumber::All, CCardFilter::GetFilter(_T("cards")));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CLandGrantCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CLandGrantCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Hand);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CSpontaneousGenerationCard::CSpontaneousGenerationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spontaneous Generation"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			_T("Saproling E"), 2981,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpontaneousGenerationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSpontaneousGenerationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Hand);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	int nCount = m_CardFilter_temp.CountIncluded(pSurvey->GetCardContainer());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CVernalEquinoxCard::CVernalEquinoxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vernal Equinox"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//_____________________________________________________________________________
//
CArrestCard::CArrestCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Arrest"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);
}

//____________________________________________________________________________
//
CGhoulsFeastCard::CGhoulsFeastCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Ghoul's Feast"), CardType::Instant, nID, AbilityType::Instant,
	    _T("1") BLACK_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGhoulsFeastCard::BeforeResolution));
}

bool CGhoulsFeastCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int nDomainCount = m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

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
CForcedMarchCard::CForcedMarchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forced March"), CardType::Sorcery, nID)
{
	counted_ptr<CPerniciousDeedSpell> cpSpell(
		::CreateObject<CPerniciousDeedSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			 CCardFilter::GetFilter(_T("creatures"))));	

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();		

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMomentOfSilenceCard::CMomentOfSilenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moment of Silence"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CMomentOfSilenceCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);	
	AddSpell(cpSpell.GetPointer());
}

void CMomentOfSilenceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CScheduledPlayerModifier pModifier = CScheduledPlayerModifier (
		GetGame(), new CPlayerEffectModifier(PlayerEffectType::SkipNextCombatPhase),
		TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater,
		CScheduledPlayerModifier::DeltaOption::CustomPlayerTurn, target);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CStaminaCard::CStaminaCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Stamina"), nID, 
		_T("2") GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CStaminaCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CStaminaCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T(""),
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerOfTheMagistrateCard::CTowerOfTheMagistrateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tower of the Magistrate"), nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CTowerOfTheMagistrateCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1"),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

void CTowerOfTheMagistrateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	if (bResult) pCard->GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CFountainOfChoCard::CFountainOfChoCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Fountain of Cho"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFountainOfChoCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CFountainOfChoCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CMercadianBazaarCard::CMercadianBazaarCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mercadian Bazaar"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercadianBazaarCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CMercadianBazaarCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CRushwoodGroveCard::CRushwoodGroveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rushwood Grove"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRushwoodGroveCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CRushwoodGroveCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSaprazzanCoveCard::CSaprazzanCoveCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Saprazzan Cove"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSaprazzanCoveCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSaprazzanCoveCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSubterraneanHangarCard::CSubterraneanHangarCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Subterranean Hangar"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSubterraneanHangarCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSubterraneanHangarCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CBloodHoundCard::CBloodHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), 0, true));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodHoundCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodHoundCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloodHoundCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CBloodHoundCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CInsubordinationCard::CInsubordinationCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Insubordination"), CardType::EnchantCreature, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInsubordinationCard::SetTriggerContext));
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CInsubordinationCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard())
		return false;

	if (pToNode->GetGraph()->GetPlayer() != m_pEnchantSpell->GetEnchantedOnCard()->GetController())
		return false;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(m_pEnchantSpell->GetEnchantedOnCard());
	if (!pCreature) return false;

	if (pCreature->AttackedThisTurn()) return false;

	return true;
}

//____________________________________________________________________________
//
CSoothsayingCard::CSoothsayingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soothsaying"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Shuffle your library. Activates"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoothsayingCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T(""), 0));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);

		cpAbility->SetReorder(true, ZoneId::Library, CardPlacement::Top);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSoothsayingCard::BeforeResolution(CAbilityAction* pAction) const
{
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CBifurcateCard::CBifurcateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bifurcate"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBifurcateCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CBifurcateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer = pAbilityAction->GetController();
	CCardFilter cardfilter(new CardNameComparer(pAbilityAction->GetAssociatedCard()->GetPrintedCardName()));

	CPlayerSearchModifier modifier(pPlayer,
		MinimumValue(0), MaximumValue(1),
		pPlayer,
		ZoneId::Library,
		&cardfilter,
		ZoneId::Battlefield);
	modifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CWaveofReckoningCard::CWaveofReckoningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wave of Reckoning"), CardType::Sorcery, nID)
{
	
	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT));

		
		CZoneCreatureModifier* pModifier3r = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CDamagetoItselfModifier(DamageType::SpellDamage | DamageType::NonCombatDamage)));


		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3r);
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),pModifier3r));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CTectonicBreakCard::CTectonicBreakCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tectonic Break"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
				::CreateObject<CGenericSpell>(this, AbilityType::Creature,
					RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Effects, TRUE);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTectonicBreakCard::SetTriggerContext));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CTectonicBreakCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	
	n = this->GetLastCastingExtraValue();
	
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}
//____________________________________________________________________________
//
CHammerMageCard::CHammerMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hammer Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CPerniciousDeedSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPerniciousDeedSpell>>(this,
			RED_MANA_TEXT,
			CCardFilter::GetFilter(_T("artifact cards"))));

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->SetExtraActionValueVector();		

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPuppetsVerdictCard::CPuppetsVerdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Puppet's Verdict"), CardType::Instant, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPuppetsVerdictCard::OnFlipSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPuppetsVerdictCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CPuppetsVerdictCard::BeforeResolution (CAbilityAction* pAction)
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

		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new CreaturePowerComparer<std::less<int>>(3));
		
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));


		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}

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

		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(2));
		
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));


		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}

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

void CPuppetsVerdictCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(2));
		
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));


				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

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
				
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CreaturePowerComparer<std::less<int>>(3));
		
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));


				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));
				}

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CBloodOathCard::CBloodOathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blood Oath"), CardType::Instant, nID)
	, m_TypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CBloodOathCard::OnTypeSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodOathCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBloodOathCard::BeforeResolution(CAbilityAction* pAction)
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

void CBloodOathCard::OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("instant cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}
			if ((int)it->dwContext == 6)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("planeswalkers"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}
			if ((int)it->dwContext == 7)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("sorcery cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

				return;
			}
			if ((int)it->dwContext == 8)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CZoneModifier* pModifier1 = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1->ApplyTo(pPlayer);
				
				CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
				int nCount = CCardFilter::GetFilter(_T("tribal cards"))->CountIncluded(pHand->GetCardContainer());

				CLifeModifier* pModifier2 = new CLifeModifier(Life(-3*nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2->ApplyTo(pPlayer);

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
CCreditVoucherCard::CCreditVoucherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Credit Voucher"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCreditVoucherCard::OnNumberSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCreditVoucherCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CCreditVoucherCard::BeforeResolution(CAbilityAction* pAction)
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
			selectionEntry.strText.Format(_T("Don't shuffle anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCards; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
									
			entry.strText.Format(_T("Shuffle %d cards from your hand into your library"),
				i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CCreditVoucherCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't shuffle anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				pSelectionPlayer->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
			else
			{
				int nValue = it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s shuffles %d cards from hand into library"), pSelectionPlayer->GetPlayerName(), nValue);
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
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&temp, // what cards
					ZoneId::Library, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(nValue), MaximumValue(nValue));

				pModifier1.ApplyTo(pSelectionPlayer);
				pSelectionPlayer->GetZoneById(ZoneId::Library)->Shuffle();

				pModifier2.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CRenounceCard::CRenounceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Renounce"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRenounceCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRenounceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRenounceCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	int nPermanents = pBattlefield->GetSize();

	if (nPermanents > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nPermanents; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Sacrifice %d permanent"),
					i);
			else
				entry.strText.Format(_T("Sacrifice %d permanents"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CRenounceCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't sacrifice anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s sacrifices %d permanent"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s sacrifices %d permanents"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CLifeModifier pModifier2 = CLifeModifier(Life(2*nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CJeweledTorqueCard::CJeweledTorqueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jeweled Torque"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CJeweledTorqueCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionCost(_T("2"));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life gained
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJeweledTorqueCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

void CJeweledTorqueCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue = false;
		cBlack = false;
		cRed = false;
		cGreen = false;

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
}

void CJeweledTorqueCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	CCard* pCard = (CCard*)dwContext1;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				cWhite = true;

				return;
			}
			if (nSelectedIndex == 2)
			{
				cBlue = true;

				return;
			}
			if (nSelectedIndex == 3)
			{
				cBlack = true;

				return;
			}
			if (nSelectedIndex == 4)
			{
				cRed = true;

				return;
			}
			if (nSelectedIndex == 5)
			{
				cGreen = true;

				return;
			}
		}
}

bool CJeweledTorqueCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) ||
		(cBlue && pCard->IsColor(CManaPoolBase::Color::Blue)) ||
		(cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) ||
		(cRed && pCard->IsColor(CManaPoolBase::Color::Red)) ||
		(cGreen && pCard->IsColor(CManaPoolBase::Color::Green));
}

//____________________________________________________________________________
//
CAssemblyHallCard::CAssemblyHallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Assembly Hall"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAssemblyHallCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAssemblyHallCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CAssemblyHallCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pHand->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't reveal anything"));

		entries.push_back(selectionEntry);
	}
	if (nCreatures > 0)
	{
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Reveal %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CAssemblyHallCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't reveal anything"), pSelectionPlayer->GetPlayerName());
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
					&m_CardFilter, 
					ZoneId::Hand, TRUE, CardPlacement::Top,
					FALSE, TRUE, FALSE);
				pModifier.ApplyTo(GetController());
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CClearTheLandCard::CClearTheLandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Clear the Land"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClearTheLandCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CClearTheLandCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	int n = 0;
	while (GetGame()->GetPlayer(n) != pActivePlayer) ++n;

	Players.RemoveAll();
	Players.Add(GetGame()->GetPlayer(n));
	n = (n + 1) % GetGame()->GetPlayerCount();

	while (GetGame()->GetPlayer(n) != pActivePlayer)
	{
		if (GetGame()->GetPlayer(n) != pController)
			Players.Add(GetGame()->GetPlayer(n));
		n = (n + 1) % GetGame()->GetPlayerCount();
	}

	for (int i = 0; i < Players.GetSize(); ++i)
		Process(i);
	return true;
}

void CClearTheLandCard::Process(int nPlayer)
{
	if (nPlayer < Players.GetSize())
	{
		CPlayer* pPlayer = Players.GetAt(nPlayer);
		
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 5,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		pModifier1.ApplyTo(pPlayer);

		CCountedCardContainer_ pCards;

		int nCards = 5;
		int nLibrarySize = pPlayer->GetZoneById(ZoneId::Library)->GetSize();
		if (nLibrarySize < 5)
			nCards = nLibrarySize;

		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pPlayer);
		pModifier2.SetTapped(TRUE);
		CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pPlayer);

		for (int i = nLibrarySize - 1; i >= nLibrarySize - nCards; --i)
		{
			CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetAt(i);
			if (pCard->GetCardType().IsLand())
				pModifier2.ApplyTo(pCard);
			else
				pModifier3.ApplyTo(pCard);
		}
	}
}

//____________________________________________________________________________
//
CKyrenToyCard::CKyrenToyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kyren Toy"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a charge counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKyrenToyCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CKyrenToyCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));

	for (int i = 0; i <= nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CMercadianLiftCard::CMercadianLiftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mercadian Lift"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMercadianLiftCard::OnCardSelected))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a winch counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(WINCH_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 winch counters from"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercadianLiftCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(WINCH_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMercadianLiftCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CMercadianLiftCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Do nothing"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->GetCardType().IsCreature() && pCard->GetConvertedManaCost() == 0)
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

	return true;
}

bool CMercadianLiftCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Do nothing"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->GetCardType().IsCreature() && pCard->GetConvertedManaCost() == nCounterCount)
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

	return true;
}

void CMercadianLiftCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CExtortionCard::CExtortionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Extortion"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CExtortionCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExtortionCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CExtortionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CDiscardCardCommon::ResolveDiscardCards(pTarget, pController, pController, 0, MoveType::Discard, ZoneId::Hand, TRUE, CCardFilter::GetFilter(_T("cards")));

	int nMax = pTarget->GetZoneById(ZoneId::Hand)->GetSize();

	if (nMax > 2)
		nMax = 2;

	if (nMax > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nMax; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 0)
				entry.strText.Format(_T("Have %s discard no cards"),
					pTarget->GetPlayerName());
			else if (i == 1)
				entry.strText.Format(_T("Have %s discard %d card"),
					pTarget->GetPlayerName(), i);
			else
				entry.strText.Format(_T("Have %s discard %d cards"),
					pTarget->GetPlayerName(), i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}

	return true;
}

void CExtortionCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't have %s discard anything"), pSelectionPlayer->GetPlayerName(), ((CPlayer*)dwContext1)->GetPlayerName());
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
				CPlayer* pTarget = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s has %s discard %d card"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s has %s discard %d cards"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CDiscardCardCommon::ResolveDiscardCards(pTarget, pSelectionPlayer, pSelectionPlayer, nValue, MoveType::Discard, ZoneId::Hand, TRUE, CCardFilter::GetFilter(_T("cards")));

				return;
			}
		}
}

//____________________________________________________________________________
//
CKyrenArchiveCard::CKyrenArchiveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kyren Archive"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKyrenArchiveCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::_ExileFaceDown));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKyrenArchiveCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5")));

		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,CCardFilter::GetFilter(_T("cards")));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Hand));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKyrenArchiveCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CKyrenArchiveCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CKyrenArchiveCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKyrenArchiveCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CKyrenArchiveCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CKyrenArchiveCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	
	if (pLibrary->GetSize() == 0) return false;

	CCard* pCard = pLibrary->GetTopCard();
	pExiled.AddCard(pCard, CardPlacement::Top);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(pCard);

	return true;
}

bool CKyrenArchiveCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, TRUE, MoveType::Others, pController);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pModifier.ApplyTo(pCard);
	}

	return true;
}

void CKyrenArchiveCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMonkeyCageCard::CMonkeyCageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Monkey Cage"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMonkeyCageCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMonkeyCageCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMonkeyCageCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CMonkeyCageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	int nValue = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
	pModifier1.ApplyTo((CCard*)this);

	if (nValue > 0)
	{
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Ape B"), 2719, nValue);
		pModifier2.ApplyTo(pController);
	}
	return true;
}

//____________________________________________________________________________
//
CKarnsTouchCard::CKarnsTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Karn's Touch"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false), false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKarnsTouchCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CKarnsTouchCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Artifact B"), 64058, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(nCMC);
	pCreature->SetPrintedToughness(nCMC);

	return true;
}

//____________________________________________________________________________
//
CToymakerCard::CToymakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Toymaker"), CardType::_ArtifactCreature, CREATURE_TYPE(Spellshaper), nID,
		_T("2"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1"),
		new CardTypeComparer(CardType::Artifact, false), false));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CToymakerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CToymakerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Artifact B"), 64058, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(nCMC);
	pCreature->SetPrintedToughness(nCMC);

	return true;
}

//____________________________________________________________________________
//
CCragSaurianCard::CCragSaurianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crag Saurian"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCragSaurianCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCragSaurianCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();

	if (IsInplay())
		Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CSpiritualFocusCard::CSpiritualFocusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spiritual Focus"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_DrawSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSpiritualFocusCard::OnDrawSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Hand, ZoneId::_AllZones, FALSE, TRUE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritualFocusCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpiritualFocusCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);
		
	AddAbility(cpAbility.GetPointer());
}

bool CSpiritualFocusCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	return true;
}

bool CSpiritualFocusCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't draw a card"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Draw a card"));

		entries.push_back(selectionEntry);
	}
	m_DrawSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CSpiritualFocusCard::OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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