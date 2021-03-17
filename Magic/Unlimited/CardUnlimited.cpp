#include "stdafx.h"
#include "CardUnlimited.h"

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

		DEFINE_CARD(CAirElementalCard);
		DEFINE_CARD(CAncestralRecallCard);
		DEFINE_CARD(CAnimateDeadCard);
		DEFINE_CARD(CAnimateWallCard);
		DEFINE_CARD(CAnkhOfMishraCard);
		DEFINE_CARD(CArmageddonCard);
		DEFINE_CARD(CBadMoonCard);
		DEFINE_CARD(CBadlandsCard);
		DEFINE_CARD(CBalanceCard);
		DEFINE_CARD(CBasaltMonolithCard);
		DEFINE_CARD(CBayouCard);
		DEFINE_CARD(CBerserkCard);
		DEFINE_CARD(CBirdsOfParadiseCard);
		DEFINE_CARD(CBlackKnightCard);
		DEFINE_CARD(CBlackLotusCard);
		DEFINE_CARD(CBlackViseCard);
		DEFINE_CARD(CBlackWardCard);
		DEFINE_CARD(CBlessingCard);
		DEFINE_CARD(CBlueElementalBlastCard);
		DEFINE_CARD(CBlueWardCard);
		DEFINE_CARD(CBogWraithCard);
		DEFINE_CARD(CBraingeyserCard);
		DEFINE_CARD(CBurrowingCard);
		DEFINE_CARD(CCastleCard);
		DEFINE_CARD(CCelestialPrismCard);
		DEFINE_CARD(CChannelCard);
		DEFINE_CARD(CChaoslaceCard);
		DEFINE_CARD(CCircleOfProtectionBlackCard);
		DEFINE_CARD(CCircleOfProtectionBlueCard);
		DEFINE_CARD(CCircleOfProtectionGreenCard);
		DEFINE_CARD(CCircleOfProtectionRedCard);
		DEFINE_CARD(CCircleOfProtectionWhiteCard);
		DEFINE_CARD(CCockatriceCard);
		DEFINE_CARD(CConservatorCard);
		DEFINE_CARD(CControlMagicCard);
		DEFINE_CARD(CConversionCard);
		DEFINE_CARD(CCopperTabletCard);
		DEFINE_CARD(CCounterspellCard);
		DEFINE_CARD(CCrawWurmCard);
		DEFINE_CARD(CCreatureBondCard);
		DEFINE_CARD(CCrusadeCard);
		DEFINE_CARD(CCrystalRodCard);
		DEFINE_CARD(CCursedLandCard);
		DEFINE_CARD(CDarkRitualCard);
		DEFINE_CARD(CDeathWardCard);
		DEFINE_CARD(CDeathgripCard);
		DEFINE_CARD(CDeathlaceCard);
		DEFINE_CARD(CDemonicTutorCard);
		DEFINE_CARD(CDingusEggCard);
		DEFINE_CARD(CDisenchantCard);
		DEFINE_CARD(CDisintegrateCard);
		DEFINE_CARD(CDisruptingScepterCard);
		DEFINE_CARD(CDragonWhelpCard);
		DEFINE_CARD(CDrainLifeCard);
		DEFINE_CARD(CDrudgeSkeletonsCard);
		DEFINE_CARD(CDwarvenDemolitionTeamCard);
		DEFINE_CARD(CDwarvenWarriorsCard);
		DEFINE_CARD(CEarthElementalCard);
		DEFINE_CARD(CEarthquakeCard);
		DEFINE_CARD(CElvishArchersCard);
		DEFINE_CARD(CEvilPresenceCard);
		DEFINE_CARD(CFarmsteadCard);
		DEFINE_CARD(CFastbondCard);
		DEFINE_CARD(CFearCard);
		DEFINE_CARD(CFeedbackCard);
		DEFINE_CARD(CFireballCard);
		DEFINE_CARD(CFirebreathingCard);
		DEFINE_CARD(CFireElementalCard);
		DEFINE_CARD(CFlashfiresCard);
		DEFINE_CARD(CFlightCard);
		DEFINE_CARD(CFogCard);
		DEFINE_CARD(CForceOfNatureCard);
		DEFINE_CARD(CFrozenShadeCard);
		DEFINE_CARD(CFungusaurCard);
		DEFINE_CARD(CGauntletOfMightCard);
		DEFINE_CARD(CGiantGrowthCard);
		DEFINE_CARD(CGiantSpiderCard);
		DEFINE_CARD(CGlassesOfUrzaCard);
		DEFINE_CARD(CGoblinBalloonBrigadeCard);
		DEFINE_CARD(CGoblinKingCard);
		DEFINE_CARD(CGraniteGargoyleCard);
		DEFINE_CARD(CGrayOgreCard);
		DEFINE_CARD(CGreenWardCard);
		DEFINE_CARD(CGrizzlyBearsCard);
		//DEFINE_CARD(CGuardianAngelCard);
		DEFINE_CARD(CHealingSalveCard);
		DEFINE_CARD(CHillGiantCard);
		DEFINE_CARD(CHolyArmorCard);
		DEFINE_CARD(CHolyStrengthCard);
		DEFINE_CARD(CHowlFromBeyondCard);
		DEFINE_CARD(CHowlingMineCard);
		DEFINE_CARD(CHurloonMinotaurCard);
		DEFINE_CARD(CHurricaneCard);
		DEFINE_CARD(CHypnoticSpecterCard);
		DEFINE_CARD(CIceStormCard);
		DEFINE_CARD(CIcyManipulatorCard);
		DEFINE_CARD(CInstillEnergyCard);
		DEFINE_CARD(CInvisibilityCard);
		DEFINE_CARD(CIronclawOrcsCard);
		DEFINE_CARD(CIronrootTreefolkCard);
		DEFINE_CARD(CIronStarCard);
		DEFINE_CARD(CIvoryCupCard);
		DEFINE_CARD(CJadeMonolithCard);
		DEFINE_CARD(CJadeStatueCard);
		DEFINE_CARD(CJayemdaeTomeCard);
		DEFINE_CARD(CJuggernautCard);
		DEFINE_CARD(CJumpCard);
		DEFINE_CARD(CKarmaCard);
		DEFINE_CARD(CKeldonWarlordCard);
		DEFINE_CARD(CKormusBellCard);
		DEFINE_CARD(CLanceCard);
		DEFINE_CARD(CLeyDruidCard);
		DEFINE_CARD(CLifeforceCard);
		DEFINE_CARD(CLifelaceCard);
		DEFINE_CARD(CLifetapCard);
		DEFINE_CARD(CLightningBoltCard);
		DEFINE_CARD(CLivingArtifactCard);
		DEFINE_CARD(CLivingLandsCard);
		DEFINE_CARD(CLivingWallCard);
		DEFINE_CARD(CLlanowarElvesCard);
		DEFINE_CARD(CLordOfAtlantisCard);
		DEFINE_CARD(CLordOfThePitCard);
		DEFINE_CARD(CLureCard);
		DEFINE_CARD(CMahamotiDjinnCard);
		DEFINE_CARD(CManabarbsCard);
		DEFINE_CARD(CManaFlareCard);
		DEFINE_CARD(CManaShortCard);
		DEFINE_CARD(CManaVaultCard);
		DEFINE_CARD(CMeekstoneCard);
		DEFINE_CARD(CMerfolkOfThePearlTridentCard);
		DEFINE_CARD(CMindTwistCard);
		DEFINE_CARD(CMonssGoblinRaidersCard);
		DEFINE_CARD(CMoxEmeraldCard);
		DEFINE_CARD(CMoxJetCard);
		DEFINE_CARD(CMoxPearlCard);
		DEFINE_CARD(CMoxRubyCard);
		DEFINE_CARD(CMoxSapphireCard);
		DEFINE_CARD(CNaturalSelectionCard);
		DEFINE_CARD(CNetherShadowCard);
		DEFINE_CARD(CNevinyrralsDiskCard);
		DEFINE_CARD(CNightmareCard);
		DEFINE_CARD(CNorthernPaladinCard);
		DEFINE_CARD(CObsianusGolemCard);
		DEFINE_CARD(COrcishArtilleryCard);
		DEFINE_CARD(COrcishOriflammeCard);
		DEFINE_CARD(CParalyzeCard);
		DEFINE_CARD(CPearledUnicornCard);
		DEFINE_CARD(CPestilenceCard);
		DEFINE_CARD(CPhantasmalForcesCard);
		DEFINE_CARD(CPhantasmalTerrainCard);
		DEFINE_CARD(CPhantomMonsterCard);
		DEFINE_CARD(CPirateShipCard);
		DEFINE_CARD(CPlagueRatsCard);
		DEFINE_CARD(CPlateauCard);
		DEFINE_CARD(CPowerSinkCard);
		DEFINE_CARD(CProdigalSorcererCard);
		DEFINE_CARD(CPsionicBlastCard);
		DEFINE_CARD(CPsychicVenomCard);
		DEFINE_CARD(CPurelaceCard);
		DEFINE_CARD(CRaiseDeadCard);
		DEFINE_CARD(CRedElementalBlastCard);
		DEFINE_CARD(CRedWardCard);
		DEFINE_CARD(CRegenerationCard);
		DEFINE_CARD(CRegrowthCard);
		DEFINE_CARD(CResurrectionCard);
		DEFINE_CARD(CReverseDamageCard);
		DEFINE_CARD(CRighteousnessCard);
		DEFINE_CARD(CRocOfKherRidgesCard);
		DEFINE_CARD(CRodOfRuinCard);
		DEFINE_CARD(CRoyalAssassinCard);
		DEFINE_CARD(CSacrificeCard);
		DEFINE_CARD(CSamiteHealerCard);
		DEFINE_CARD(CSavannahCard);
		DEFINE_CARD(CSavannahLionsCard);
		DEFINE_CARD(CScatheZombiesCard);
		DEFINE_CARD(CScavengingGhoulCard);
		DEFINE_CARD(CScrublandCard);
		DEFINE_CARD(CScrybSpritesCard);
		DEFINE_CARD(CSeaSerpentCard);
		DEFINE_CARD(CSedgeTrollCard);
		DEFINE_CARD(CSengirVampireCard);
		DEFINE_CARD(CSerraAngelCard);
		DEFINE_CARD(CShanodinDryadsCard);
		DEFINE_CARD(CShatterCard);
		DEFINE_CARD(CShivanDragonCard);
		DEFINE_CARD(CSinkholeCard);
		DEFINE_CARD(CSmokeCard);
		DEFINE_CARD(CSolRingCard);
		DEFINE_CARD(CSoulNetCard);
		DEFINE_CARD(CSpellBlastCard);
		DEFINE_CARD(CStasisCard);
		DEFINE_CARD(CStealArtifactCard);
		DEFINE_CARD(CStoneGiantCard);
		DEFINE_CARD(CStoneRainCard);
		DEFINE_CARD(CStreamOfLifeCard);
		DEFINE_CARD(CSwordsToPlowsharesCard);
		DEFINE_CARD(CTaigaCard);
		DEFINE_CARD(CTerrorCard);
		DEFINE_CARD(CTheHiveCard);
		DEFINE_CARD(CThicketBasiliskCard);
		DEFINE_CARD(CThoughtlaceCard);
		DEFINE_CARD(CThroneOfBoneCard);
		DEFINE_CARD(CTimeWalkCard);
		DEFINE_CARD(CTimeVaultCard);
		DEFINE_CARD(CTimetwisterCard);
		DEFINE_CARD(CTranquilityCard);
		DEFINE_CARD(CTropicalIslandCard);
		DEFINE_CARD(CTsunamiCard);
		DEFINE_CARD(CTundraCard);
		DEFINE_CARD(CTunnelCard);
		DEFINE_CARD(CTwiddleCard);
		DEFINE_CARD(CTwoheadedGiantOfForiysCard);
		DEFINE_CARD(CUndergroundSeaCard);
		DEFINE_CARD(CUnholyStrengthCard);
		DEFINE_CARD(CUnsummonCard);
		DEFINE_CARD(CUthdenTrollCard);
		DEFINE_CARD(CVerduranEnchantressCard);
		//DEFINE_CARD(CVeteranBodyguardCard);
		DEFINE_CARD(CVolcanicIslandCard);
		DEFINE_CARD(CWallOfAirCard);
		DEFINE_CARD(CWallOfBoneCard);
		DEFINE_CARD(CWallOfBramblesCard);
		DEFINE_CARD(CWallOfFireCard);
		DEFINE_CARD(CWallOfIceCard);
		DEFINE_CARD(CWallOfStoneCard);
		DEFINE_CARD(CWallOfSwordsCard);
		DEFINE_CARD(CWallOfWaterCard);
		DEFINE_CARD(CWallOfWoodCard);
		DEFINE_CARD(CWanderlustCard);
		DEFINE_CARD(CWarMammothCard);
		DEFINE_CARD(CWarpArtifactCard);
		DEFINE_CARD(CWaterElementalCard);
		DEFINE_CARD(CWeaknessCard);
		DEFINE_CARD(CWebCard);
		DEFINE_CARD(CWheelOfFortuneCard);
		DEFINE_CARD(CWhiteKnightCard);
		DEFINE_CARD(CWildGrowthCard);
		DEFINE_CARD(CWillOTheWispCard);
		DEFINE_CARD(CWinterOrbCard);
		DEFINE_CARD(CWoodenSphereCard);
		DEFINE_CARD(CWrathOfGodCard);
		DEFINE_CARD(CZombieMasterCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBlackLotusCard::CBlackLotusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Black Lotus"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoxEmeraldCard::CMoxEmeraldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Emerald"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoxJetCard::CMoxJetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Jet"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoxPearlCard::CMoxPearlCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Pearl"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoxRubyCard::CMoxRubyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Ruby"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoxSapphireCard::CMoxSapphireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Sapphire"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncestralRecallCard::CAncestralRecallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancestral Recall"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimeWalkCard::CTimeWalkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Walk"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpSpell->SetAffectControllerOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimetwisterCard::CTimetwisterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Timetwister"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 7, 7));

	cpSpell->SetMergeGraveyard(TRUE);
	cpSpell->SetMergeHand(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTundraCard::CTundraCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Tundra"), nID, 
		CardType::Island | CardType::Plains | CardType::NonbasicLand, 
		BLUE_MANA_TEXT, WHITE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CBadlandsCard::CBadlandsCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Badlands"), nID, 
		CardType::Mountain | CardType::Swamp | CardType::NonbasicLand, 
		RED_MANA_TEXT, BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CBayouCard::CBayouCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Bayou"), nID, 
		CardType::Forest | CardType::Swamp | CardType::NonbasicLand, 
		BLACK_MANA_TEXT, GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CPlateauCard::CPlateauCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Plateau"), nID, 
		CardType::Mountain | CardType::Plains | CardType::NonbasicLand, 
		RED_MANA_TEXT, WHITE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSavannahCard::CSavannahCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Savannah"), nID, 
		CardType::Plains | CardType::Forest | CardType::NonbasicLand, 
		WHITE_MANA_TEXT, GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CScrublandCard::CScrublandCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Scrubland"), nID, 
		CardType::Plains | CardType::Swamp | CardType::NonbasicLand, 
		WHITE_MANA_TEXT, BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CTaigaCard::CTaigaCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Taiga"), nID, 
		CardType::Forest | CardType::Mountain | CardType::NonbasicLand, 
		GREEN_MANA_TEXT, RED_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CTropicalIslandCard::CTropicalIslandCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Tropical Island"), nID, 
		CardType::Forest | CardType::Island | CardType::NonbasicLand, 
		GREEN_MANA_TEXT, BLUE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CUndergroundSeaCard::CUndergroundSeaCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Underground Sea"), nID, 
		CardType::Swamp | CardType::Island | CardType::NonbasicLand, 
		BLACK_MANA_TEXT, BLUE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CVolcanicIslandCard::CVolcanicIslandCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Volcanic Island"), nID, 
		CardType::Mountain | CardType::Island | CardType::NonbasicLand, 
		RED_MANA_TEXT, BLUE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSolRingCard::CSolRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sol Ring"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRegrowthCard::CRegrowthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Regrowth"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CDemonicTutorCard::CDemonicTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Demonic Tutor"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);
}

//____________________________________________________________________________
//
CWheelOfFortuneCard::CWheelOfFortuneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wheel of Fortune"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT, 7, 7));

	cpSpell->SetDiscardHand(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlackViseCard::CBlackViseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Black Vise"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CBlackViseCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlackViseCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBlackViseCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

void CBlackViseCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedPlayer = NULL;

		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (GetController() != GetGame()->GetPlayer(ip))
			{
				SelectionEntry entry;
				entry.dwContext = ip;
				entry.strText.Format(_T("choose %s"), GetGame()->GetPlayer(ip)->GetPlayerName());
				entries.push_back(entry);
			}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CBlackViseCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SelectedPlayer = GetGame()->GetPlayer(it->dwContext);
			return;
		}
}

bool CBlackViseCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetGame()->GetActivePlayer() == SelectedPlayer);
}

bool CBlackViseCard::BeforeResolution(CBlackViseCard::TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pHand = pAction->GetTriggeredPlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() <= 4)
		return false;

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(pHand->GetSize() - 4));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CLightningBoltCard::CLightningBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lightning Bolt"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CDarkRitualCard::CDarkRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dark Ritual"), CardType::Instant, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJuggernautCard::CJuggernautCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juggernaut"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(5), Life(3))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("non-Walls")));
}

//____________________________________________________________________________
//
CMindTwistCard::CMindTwistCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Twist"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetExtraActionValueVector(ContextValue(1));
	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetAtRandom();

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CSwordsToPlowsharesCard::CSwordsToPlowsharesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swords to Plowshares"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell3> cpSpell(
		::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others,
			TRUE,
			FALSE));
	
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetCreatureControllerGainLife(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNevinyrralsDiskCard::CNevinyrralsDiskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nevinyrral's Disk"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("1"), 
			new CardTypeComparer(CardType::_Enchantment | CardType::Artifact | CardType::Creature, false), 
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CControlMagicCard::CControlMagicCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Control Magic"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBraingeyserCard::CBraingeyserCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Braingeyser"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBadMoonCard::CBadMoonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bad Moon"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlackKnightCard::CBlackKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Black Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CFrozenShadeCard::CFrozenShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Frozen Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CCockatriceCard::CCockatriceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cockatrice"), CardType::Creature, CREATURE_TYPE(Cockatrice), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-Wall creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCockatriceCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CCockatriceCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CDwarvenWarriorsCard::CDwarvenWarriorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Warriors"), CardType::Creature, CREATURE_TYPE2(Dwarf, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGraniteGargoyleCard::CGraniteGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Granite Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+1)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrayOgreCard::CGrayOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gray Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CHurloonMinotaurCard::CHurloonMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hurloon Minotaur"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CIronclawOrcsCard::CIronclawOrcsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ironclaw Orcs"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("creatures with power less than 2")));
}

//____________________________________________________________________________
//
CIronrootTreefolkCard::CIronrootTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ironroot Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CKeldonWarlordCard::CKeldonWarlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keldon Warlord"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false))));	// Exclude Walls

	cpAbility->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer); // Must be creatures

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMonssGoblinRaidersCard::CMonssGoblinRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mons's Goblin Raiders"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CPearledUnicornCard::CPearledUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pearled Unicorn"), CardType::Creature, CREATURE_TYPE(Unicorn), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CPhantomMonsterCard::CPhantomMonsterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantom Monster"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CRocOfKherRidgesCard::CRocOfKherRidgesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Roc of Kher Ridges"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CScrybSpritesCard::CScrybSpritesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scryb Sprites"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSedgeTrollCard::CSedgeTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Sedge Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT)
{
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

//____________________________________________________________________________
//
CTwoheadedGiantOfForiysCard::CTwoheadedGiantOfForiysCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Two-Headed Giant of Foriys"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
	SetMaxBlockingCount(2);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CUthdenTrollCard::CUthdenTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Uthden Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CWallOfBramblesCard::CWallOfBramblesCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Wall of Brambles"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfIceCard::CWallOfIceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Ice"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfWaterCard::CWallOfWaterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Water"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(5),
		BLUE_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWarMammothCard::CWarMammothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War Mammoth"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWaterElementalCard::CWaterElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Water Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CWhiteKnightCard::CWhiteKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("White Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CKormusBellCard::CKormusBellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kormus Bell"), CardType::Artifact, nID)
{
	counted_ptr<CIsAlsoAEnchantment> cpSpell(
		::CreateObject<CIsAlsoAEnchantment>(this,
			_T("4"),
			new CardTypeComparer(CardType::Swamp, false),
			_T("Animated Swamp"), 64010));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CConservatorCard::CConservatorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conservator"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("3"),
			Life(2),
			SourceColor::_AllSources, 
			TRUE)); // prevent damage to this card's controller

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGauntletOfMightCard::CGauntletOfMightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gauntlet of Might"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CProdExtraManaEnchantment> cpAbility(
			::CreateObject<CProdExtraManaEnchantment>(this,
				new CardTypeComparer(CardType::Mountain, false),
				RED_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathgripCard::CDeathgripCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deathgrip"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Green, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLifeforceCard::CLifeforceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifeforce"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Black, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlagueRatsCard::CPlagueRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardNameComparer(_T("Plague Rats"))));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlessingCard::CBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blessing"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBlessingCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBlessingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			WHITE_MANA_TEXT,
			Power(+1), Life(+1), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvilPresenceCard::CEvilPresenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Evil Presence"), CardType::EnchantLand, nID)
{
	counted_ptr<CCardTypeEnchant> cpSpell(
		::CreateObject<CCardTypeEnchant>(this,
			BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->AddCardTypeToAdd(CardType::Swamp | CardType::BasicLand, CardType::_All, _T("Swamp"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSinkholeCard::CSinkholeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Sinkhole"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CIceStormCard::CIceStormCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ice Storm"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CTsunamiCard::CTsunamiCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tsunami"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCursedLandCard::CCursedLandCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Cursed Land"), CardType::EnchantLand, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new CardTypeComparer(CardType::_Land, false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCursedLandCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CCursedLandCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CLivingWallCard::CLivingWallCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Living Wall"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("4"), Power(0), Life(6),
		_T("1"))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CPhantasmalForcesCard::CPhantasmalForcesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantasmal Forces"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(1))
{
	AddUpkeepCost(BLUE_MANA_TEXT);
}

//____________________________________________________________________________
//
CResurrectionCard::CResurrectionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Resurrection"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CWeaknessCard::CWeaknessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Weakness"), nID,
		BLACK_MANA_TEXT,
		Power(-2), Life(-1))
{
}

//____________________________________________________________________________
//
CJumpCard::CJumpCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Jump"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CLanceCard::CLanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lance"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CLifetapCard::CLifetapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifetap"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTunnelCard::CTunnelCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Tunnel"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CDeathWardCard::CDeathWardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death Ward"), CardType::Instant, nID)
{
	counted_ptr<CTargetRegenerationSpell> cpSpell(
		::CreateObject<CTargetRegenerationSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCopperTabletCard::CCopperTabletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Copper Tablet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); 
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBasaltMonolithCard::CBasaltMonolithCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Basalt Monolith"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)	
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("3")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFeedbackCard::CFeedbackCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Feedback"), CardType::EnchantEnchantment, nID,
		_T("2") BLUE_MANA_TEXT,
		new CardTypeComparer(CardType::_Enchantment, false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFeedbackCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CFeedbackCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CWanderlustCard::CWanderlustCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Wanderlust"), CardType::EnchantCreature, nID,
		_T("2") GREEN_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWanderlustCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CWanderlustCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CWarpArtifactCard::CWarpArtifactCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Warp Artifact"), CardType::EnchantArtifact, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new CardTypeComparer(CardType::Artifact, false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarpArtifactCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CWarpArtifactCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CCelestialPrismCard::CCelestialPrismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Celestial Prism"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("2"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
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
	}*/
}

//____________________________________________________________________________
//
CSeaSerpentCard::CSeaSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sea Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CSeaSerpentCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeaSerpentCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSeaSerpentCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSeaSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CSeaSerpentCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CSeaSerpentCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPirateShipCard::CPirateShipCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Pirate Ship"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(3),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CPirateShipCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPirateShipCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CPirateShipCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CPirateShipCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CPirateShipCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CPirateShipCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPsionicBlastCard::CPsionicBlastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psionic Blast"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-4), PreventableType::Preventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																 DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlueElementalBlastCard::CBlueElementalBlastCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Blue Elemental Blast"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Red, false))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Red, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRedElementalBlastCard::CRedElementalBlastCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Red Elemental Blast"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Blue, false))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Blue, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStasisCard::CStasisCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Stasis"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(BLUE_MANA_TEXT);

	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));	

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextUntapStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlackWardCard::CBlackWardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Black Ward"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromBlack));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlueWardCard::CBlueWardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blue Ward"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromBlue));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGreenWardCard::CGreenWardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Green Ward"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromGreen));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRedWardCard::CRedWardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Red Ward"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::ProtectionFromRed));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFarmsteadCard::CFarmsteadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Farmstead"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CFarmsteadCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFarmsteadCard::CreateEnchantAbility(CCard* pEnchantedCard,
									CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged
								> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(
								pEnchantCard, NodeId::UpkeepStep, pEnchantedCard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetCreateAbilityCallback(CCreateTempTriggeredAbilityAbility
		::CreateAbilityCallback(this, &CFarmsteadCard::CreateTemporaryAbility));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CFarmsteadCard::CreateTemporaryAbility()
{
	return 
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT, Life(+1),
			PreventableType::NotPreventable).GetPointer();
}

//____________________________________________________________________________
//
//CGuardianAngelCard::CGuardianAngelCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Guardian Angel"), CardType::Instant, nID)
//{
//	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
//		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
//			WHITE_MANA_TEXT,
//			new AnyCreatureComparer, FALSE,
//			Life(0), SourceColor::Null));
//
//	cpSpell->SetExtraManaCost(SpecialNumber::Any, TRUE,
//				CManaCost::Colors(CManaCost::AllCostColors));
//
//	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
//				CCardAbilityModifier::CreateAbilityCallback(this,
//				&CGuardianAngelCard::CreatePreventionAbility)));
//
//	AddSpell(cpSpell.GetPointer());
//}
//
//counted_ptr<CAbility> CGuardianAngelCard::CreatePreventionAbility(CCard* pCard)
//{
//	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
//				::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
//						_T("1"), Life(1), SourceColor::Null, FALSE));
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//____________________________________________________________________________
//
//CVeteranBodyguardCard::CVeteranBodyguardCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Veteran Bodyguard"), CardType::Creature, CREATURE_TYPE(Human), nID,
//		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
//{
//	counted_ptr<CDamageRedirectionEnchantment> cpAbility(
//		::CreateObject<CDamageRedirectionEnchantment>(this,
//			DamageType::CombatDamage,
//			this));
//
//	cpAbility->SetDisableWhenTapped();
//	cpAbility->SetAffectControllerOnly();
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//____________________________________________________________________________
//
CManaVaultCard::CManaVaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Vault"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetAbilityName(_T("untap ability"));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionCost(_T("4"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaVaultCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CManaVaultCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CManaVaultCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	return GetOrientation()->IsTapped() == TRUE;
}

bool CManaVaultCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetOrientation()->IsTapped() == TRUE;
}

//____________________________________________________________________________
//
CAirElementalCard::CAirElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Air Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CAnimateWallCard::CAnimateWallCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Animate Wall"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::DefenderMayAttack)
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
}

//____________________________________________________________________________
//
CAnkhOfMishraCard::CAnkhOfMishraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ankh of Mishra"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArmageddonCard::CArmageddonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Armageddon"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBirdsOfParadiseCard::CBirdsOfParadiseCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Birds of Paradise"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
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
CBogWraithCard::CBogWraithCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bog Wraith"), CardType::Creature, CREATURE_TYPE(Wraith), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CBurrowingCard::CBurrowingCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Burrowing"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CCastleCard::CCastleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Castle"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+2)));

	cpAbility->SetAffectUntappedOnly();
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfProtectionBlackCard::CCircleOfProtectionBlackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Protection: Black"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::BlackSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfProtectionBlueCard::CCircleOfProtectionBlueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Protection: Blue"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::BlueSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfProtectionGreenCard::CCircleOfProtectionGreenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Protection: Green"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::GreenSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfProtectionRedCard::CCircleOfProtectionRedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Protection: Red"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::RedSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfProtectionWhiteCard::CCircleOfProtectionWhiteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Protection: White"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::WhiteSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCounterspellCard::CCounterspellCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Counterspell"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
}

//____________________________________________________________________________
//
CCrawWurmCard::CCrawWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Craw Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CCrusadeCard::CCrusadeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crusade"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::White, true),
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIvoryCupCard::CIvoryCupCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ivory Cup"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWoodenSphereCard::CWoodenSphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wooden Sphere"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrystalRodCard::CCrystalRodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crystal Rod"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIronStarCard::CIronStarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Iron Star"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThroneOfBoneCard::CThroneOfBoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Throne of Bone"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDingusEggCard::CDingusEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dingus Egg"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);	// From zone's controller
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDisenchantCard::CDisenchantCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Disenchant"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CDisruptingScepterCard::CDisruptingScepterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Disrupting Scepter"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("3"),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrudgeSkeletonsCard::CDrudgeSkeletonsCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Drudge Skeletons"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CDwarvenDemolitionTeamCard::CDwarvenDemolitionTeamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Demolition Team"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEarthElementalCard::CEarthElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earth Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CEarthquakeCard::CEarthquakeCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Earthquake"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CElvishArchersCard::CElvishArchersCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Elvish Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CFearCard::CFearCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Fear"), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Fear)
{
}

//____________________________________________________________________________
//
CFireElementalCard::CFireElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fire Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
}

//____________________________________________________________________________
//
CFirebreathingCard::CFirebreathingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Firebreathing"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CFirebreathingCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFirebreathingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlashfiresCard::CFlashfiresCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flashfires"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Plains, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlightCard::CFlightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Flight"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CFogCard::CFogCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fog"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CForceOfNatureCard::CForceOfNatureCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Force of Nature"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
				&CForceOfNatureCard::CreateTemporaryAbility),
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
				&CForceOfNatureCard::PreRemoveAbilityCallback));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

CCard* CForceOfNatureCard::CreateTemporaryAbility()
{
	return this;
}

void CForceOfNatureCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CLifeModifier modifier(Life(-8), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(pTriggeredPlayer);
}

//____________________________________________________________________________
//
CFungusaurCard::CFungusaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fungusaur"), CardType::Creature, CREATURE_TYPE2(Fungus, Lizard), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::CreatureEventCallback, 
							&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiantGrowthCard::CGiantGrowthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Giant Growth"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CGiantSpiderCard::CGiantSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CGlassesOfUrzaCard::CGlassesOfUrzaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glasses of Urza"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
#if 1
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""), 
			0, MoveType::Others, ZoneId::Null, FALSE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
#else
	/*
	CTargetPlayerRevealHandAbility* cpAbility(
		new CTargetPlayerRevealHandAbility(this,
			_T(""),
			NULL);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());

	*/
#endif
}

//____________________________________________________________________________
//
CGoblinBalloonBrigadeCard::CGoblinBalloonBrigadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Goblin Balloon Brigade"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CGoblinKingCard::CGoblinKingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin King"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
			Power(+1), Life(+1), CreatureKeyword::Mountainwalk));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrizzlyBearsCard::CGrizzlyBearsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grizzly Bears"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CHealingSalveCard::CHealingSalveCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Healing Salve"), CardType::Instant, nID, AbilityType::Instant, 
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(+3), PreventableType::NotPreventable)
{
	// Second spell
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(3), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHillGiantCard::CHillGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hill Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CHolyStrengthCard::CHolyStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Holy Strength"), nID,
		WHITE_MANA_TEXT,
		Power(+1), Life(+2))
{
}

//____________________________________________________________________________
//
CHowlFromBeyondCard::CHowlFromBeyondCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Howl from Beyond"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1));
}

//____________________________________________________________________________
//
CHowlingMineCard::CHowlingMineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Howling Mine"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHurricaneCard::CHurricaneCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Hurricane"), CardType::Sorcery, nID, AbilityType::Sorcery,
		GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	
	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CHypnoticSpecterCard::CHypnoticSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hypnotic Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIcyManipulatorCard::CIcyManipulatorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Icy Manipulator"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1"),
			TRUE, FALSE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInvisibilityCard::CInvisibilityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Invisibility"), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Walls")));
}

//____________________________________________________________________________
//
CJadeMonolithCard::CJadeMonolithCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jade Monolith"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell>>(this,
			_T("1"),
			new AnyCreatureComparer,
			SourceColor::_AllSources,
			TRUE));

	cpAbility->SetRedirectValue(Life(RedirectionType::RedirectNextDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJayemdaeTomeCard::CJayemdaeTomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jayemdae Tome"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("4"), 1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKarmaCard::CKarmaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Karma"), CardType::GlobalEnchantment, nID,
		_T("2")	WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKarmaCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CKarmaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pInplay = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (CCardFilter::GetFilter(_T("Swamps"))->IsCardIncluded(pCard))
			++nCount;
	}

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCount));

	return true;
}

//____________________________________________________________________________
//
CLeyDruidCard::CLeyDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ley Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CLivingLandsCard::CLivingLandsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Lands"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CIsAlsoAEnchantment> cpSpell(
		::CreateObject<CIsAlsoAEnchantment>(this,
			_T("3") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			_T("Animated Forest B"), 64002));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLlanowarElvesCard::CLlanowarElvesCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Llanowar Elves"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CLordOfAtlantisCard::CLordOfAtlantisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of Atlantis"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
			Power(+1), Life(+1), CreatureKeyword::Islandwalk));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLordOfThePitCard::CLordOfThePitCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lord of the Pit"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-7), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
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
CLureCard::CLureCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lure"), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Lure)
{
}

//____________________________________________________________________________
//
CMahamotiDjinnCard::CMahamotiDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mahamoti Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
}

//____________________________________________________________________________
//
CManaShortCard::CManaShortCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mana Short"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 
			ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands"))));

	cpSpell->AddCardModifier(new CCardOrientationModifier(TRUE));
	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(new CManaPoolModifier(CManaPoolModifier::Operation::Empty));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CManabarbsCard::CManabarbsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Manabarbs"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMeekstoneCard::CMeekstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Meekstone"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::Meekstone, 2));

	ATLASSERT(cpAbility);

	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerfolkOfThePearlTridentCard::CMerfolkOfThePearlTridentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk of the Pearl Trident"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CNightmareCard::CNightmareCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nightmare"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horse), nID,
		_T("5") BLACK_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNorthernPaladinCard::CNorthernPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Northern Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Black, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CObsianusGolemCard::CObsianusGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obsianus Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(4), Life(6))
{
}

//____________________________________________________________________________
//
COrcishArtilleryCard::COrcishArtilleryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Orcish Artillery"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(3),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																				 DamageType::AbilityDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
COrcishOriflammeCard::COrcishOriflammeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orcish Oriflamme"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+0)));

	cpAbility->SetToAttackingOnly();
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPestilenceCard::CPestilenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pestilence"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPestilenceCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPestilenceCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				BLACK_MANA_TEXT,
				Life(-1),	// life delta
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPestilenceCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
			if (pSurvey->GetAt(j)->GetCardType().IsCreature())
				return false;
	}

	return true;
}

bool CPestilenceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
			if (pSurvey->GetAt(j)->GetCardType().IsCreature())
				return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPhantasmalTerrainCard::CPhantasmalTerrainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Phantasmal Terrain"), CardType::EnchantLand, nID)
{
	counted_ptr<CCardTypeEnchant> cpSpell(
		::CreateObject<CCardTypeEnchant>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT, 
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->AddCardTypeToAdd(CardType::Swamp | CardType::BasicLand, CardType::_All, _T("Swamp"));
	cpSpell->AddCardTypeToAdd(CardType::Plains | CardType::BasicLand, CardType::_All, _T("Plains"));
	cpSpell->AddCardTypeToAdd(CardType::Forest | CardType::BasicLand, CardType::_All, _T("Forest"));
	cpSpell->AddCardTypeToAdd(CardType::Mountain | CardType::BasicLand, CardType::_All, _T("Mountain"));
	cpSpell->AddCardTypeToAdd(CardType::Island | CardType::BasicLand, CardType::_All, _T("Island"));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPowerSinkCard::CPowerSinkCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Power Sink"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	//Old/current: "Counter target spell unless its controller pays {X}. If he or she doesn't, that player taps all lands he or she controls and empties his or her mana pool."
	//Worldwake rules update: "Counter target spell unless its controller pays {X}. If he or she doesn't, that player taps all lands with mana abilities he or she controls and empties his or her mana pool."
	//Should now check for presence of mana abilities on lands and not tap lands without them.
	m_pCounterSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, FALSE, CManaCost::AllCostColors);
	m_pCounterSpell->SetExtraActionValueVector();
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->SetExtraCostToDenialCost();
	m_pCounterSpell->SetTapAllLands();
	m_pCounterSpell->SetClearManaPool();
}

//____________________________________________________________________________
//
CProdigalSorcererCard::CProdigalSorcererCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Prodigal Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CPsychicVenomCard::CPsychicVenomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Venom"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPsychicVenomCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPsychicVenomCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRaiseDeadCard::CRaiseDeadCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Raise Dead"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CRegenerationCard::CRegenerationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Regeneration"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CRegenerationCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRegenerationCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, GREEN_MANA_TEXT, (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CReverseDamageCard::CReverseDamageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reverse Damage"), CardType::Instant, nID)
{
	counted_ptr<CDamagePreventionSpell> cpSpell(
		::CreateObject<CDamagePreventionSpell>(this, AbilityType::Instant, 
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, 
			Life(PreventionType::ReverseNextDamage),
			SourceColor::_AllSources,
			TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRighteousnessCard::CRighteousnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Righteousness"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Power(+7), Life(+7), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRodOfRuinCard::CRodOfRuinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rod of Ruin"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3"),
			new AnyCreatureComparer, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRoyalAssassinCard::CRoyalAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Royal Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSamiteHealerCard::CSamiteHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samite Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
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
CSavannahLionsCard::CSavannahLionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savannah Lions"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		WHITE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CScatheZombiesCard::CScatheZombiesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scathe Zombies"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CSengirVampireCard::CSengirVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sengir Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerraAngelCard::CSerraAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serra Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CShanodinDryadsCard::CShanodinDryadsCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Shanodin Dryads"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CShatterCard::CShatterCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Shatter"), CardType::Instant, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CShivanDragonCard::CShivanDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shivan Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulNetCard::CSoulNetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soul Net"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetCreateAbilityCallback(CCreateTempTriggeredAbilityAbility::CreateAbilityCallback(this,
		&CSoulNetCard::CreateTemporaryAbility));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSoulNetCard::CreateTemporaryAbility()
{
	return 
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+1), PreventableType::NotPreventable).GetPointer();
}

//____________________________________________________________________________
//
CSpellBlastCard::CSpellBlastCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Blast"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetTargetOnlySpellsWithEqualCost();
}

//____________________________________________________________________________
//
CStealArtifactCard::CStealArtifactCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Steal Artifact"), CardType::EnchantArtifact, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStoneRainCard::CStoneRainCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Stone Rain"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CStreamOfLifeCard::CStreamOfLifeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Stream of Life"), CardType::Sorcery, nID, AbilityType::Sorcery,
		GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER, TRUE,
		Life(0), PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::LifeGain);
}

//____________________________________________________________________________
//
CTerrorCard::CTerrorCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Terror"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude artifact OR black cards
}

//____________________________________________________________________________
//
CTheHiveCard::CTheHiveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("The Hive"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("5"),
			_T("Wasp"), TOKEN_ID_BY_NAME,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThicketBasiliskCard::CThicketBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thicket Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-Wall creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThicketBasiliskCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CThicketBasiliskCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CTranquilityCard::CTranquilityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tranquility"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTwiddleCard::CTwiddleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twiddle"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnholyStrengthCard::CUnholyStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Unholy Strength"), nID,
		BLACK_MANA_TEXT,
		Power(+2), Life(+1))
{
}

//____________________________________________________________________________
//
CUnsummonCard::CUnsummonCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unsummon"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CVerduranEnchantressCard::CVerduranEnchantressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Verduran Enchantress"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(2))
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
CWallOfAirCard::CWallOfAirCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Air"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfBoneCard::CWallOfBoneCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Wall of Bone"), CardType::Creature, CREATURE_TYPE2(Skeleton, Wall), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(4),
		BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfFireCard::CWallOfFireCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Fire"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(5),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfStoneCard::CWallOfStoneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Stone"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(8))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfSwordsCard::CWallOfSwordsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wall of Swords"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfWoodCard::CWallOfWoodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Wood"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWebCard::CWebCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Web"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+2),
		CreatureKeyword::Reach)
{
}

//____________________________________________________________________________
//
CWildGrowthCard::CWildGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wild Growth"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this, &CWildGrowthCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CWildGrowthCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWillOTheWispCard::CWillOTheWispCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Will-o'-the-Wisp"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT, Power(0), Life(1),
		BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CWrathOfGodCard::CWrathOfGodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wrath of God"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CZombieMasterCard::CZombieMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zombie Master"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	
			Power(+0), Life(+0),
			CreatureKeyword::Swampwalk));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier( //Give to other permanents regeneration ability
		CCardAbilityModifier::CreateAbilityCallback(this, &CZombieMasterCard::CreateRegenerationAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CZombieMasterCard::CreateRegenerationAbility1(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFastbondCard::CFastbondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fastbond"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
			::CreateObject<CPlayExtraLandEnchantment>(this, +9999));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand | ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFastbondCard::SetTriggerContext));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFastbondCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CMainNode* pMainNode = (CMainNode*)(pByPlayer->GetGraph()->GetCurrentNode());
	return moveType == MoveType::Play &&  pMainNode->GetLandCount() > 0;
}

//____________________________________________________________________________
//
CWinterOrbCard::CWinterOrbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Winter Orb"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)

{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::WinterOrb, 1, 1));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSmokeCard::CSmokeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Smoke"), CardType::GlobalEnchantment, nID,
		   RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)

{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::Smoke, 1, 1));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBerserkCard::CBerserkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Berserk"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CBerserkCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(SpecialNumber::MultiplyBy2), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CBerserkCard::CanPlay)));
	cpSpell->Add(cpTrait1.GetPointer());

	cpSpell->FlagTargets(TRUE,  // flag targets
						 TRUE); // until end of turn

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	pSpell = cpSpell.GetPointer(); 
	AddSpell(pSpell);
}

BOOL CBerserkCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2);
}

void CBerserkCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_CardFilter.AddComparer(new CreatureFlagComparer(CreatureFlag::Attacked, FALSE));
	m_CardFilter.AddComparer(new CardAbilityFlagComparer(pSpell)); // flagged by this spell

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter, // move all creatures attacked and marked by this spell 
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);
	
	CPlayer* pPlayer = pAbilityAction->GetAssociatedCard()->GetController();
	if (bResult) pModifier2->ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CDragonWhelpCard::CDragonWhelpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragon Whelp"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));

		m_pAbility = cpAbility.GetPointer();

		AddAbility(m_pAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonWhelpCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonWhelpCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CNode* pToNode) const
{
	return m_pAbility->GetTurnUsageCount() > 3;

}

//____________________________________________________________________________
//
CConversionCard::CConversionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Conversion"), CardType::GlobalEnchantment, nID)
{
	AddUpkeepCost(WHITE_MANA_TEXT WHITE_MANA_TEXT);

	{
		counted_ptr<CCardTypeEnchantment> cpSpell(
			::CreateObject<CCardTypeEnchantment>(this,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Mountain, false),
				CardType::Plains | CardType::BasicLand, CardType::_All));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBalanceCard::CBalanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Balance"), CardType::Sorcery, nID)

	, m_CardFilter1(_T("a creature"), _T("creatures"), new AnyCreatureComparer)
	, m_CardFilter2(_T("a land"), _T("lands"), new CardTypeComparer(CardType::_Land, false))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,	// Cost
			Life(0),		// life delta
			new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),	// Affects creatures without flying
			TRUE,	// Affects players
			PreventableType::Preventable,	// Preventable
			DamageType::NotDealingDamage)); //No regeneration

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
	AddSpell(cpSpell.GetPointer());

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

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext3));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext4));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility2 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility2);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext5));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility3 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility3);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalanceCard::SetTriggerContext6));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility4 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility4);
	}
}

bool CBalanceCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* AIHand =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);	
	int n = 0;

	if (pHand->GetSize()>AIHand->GetSize()) n = pHand->GetSize()-AIHand->GetSize();

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CBalanceCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* AIHand =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);	
	int n = 0;

	if (AIHand->GetSize()>pHand->GetSize()) n = AIHand->GetSize()-pHand->GetSize();

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CBalanceCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* AIBat =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	if (m_CardFilter1.CountIncluded(pBat->GetCardContainer())>m_CardFilter1.CountIncluded(AIBat->GetCardContainer()))
		n = m_CardFilter1.CountIncluded(pBat->GetCardContainer())-m_CardFilter1.CountIncluded(AIBat->GetCardContainer());
	
	m_pTriggeredAbility1->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CBalanceCard::SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* AIBat =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	if (m_CardFilter1.CountIncluded(AIBat->GetCardContainer())>m_CardFilter1.CountIncluded(pBat->GetCardContainer()))
		n = m_CardFilter1.CountIncluded(AIBat->GetCardContainer())-m_CardFilter1.CountIncluded(pBat->GetCardContainer());
	
	m_pTriggeredAbility2->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CBalanceCard::SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* AIBat =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	if (m_CardFilter2.CountIncluded(pBat->GetCardContainer())>m_CardFilter2.CountIncluded(AIBat->GetCardContainer()))
		n = m_CardFilter2.CountIncluded(pBat->GetCardContainer())-m_CardFilter2.CountIncluded(AIBat->GetCardContainer());
	
	m_pTriggeredAbility3->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CBalanceCard::SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* AIBat =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	if (m_CardFilter2.CountIncluded(AIBat->GetCardContainer())>m_CardFilter2.CountIncluded(pBat->GetCardContainer()))
		n = m_CardFilter2.CountIncluded(AIBat->GetCardContainer())-m_CardFilter2.CountIncluded(pBat->GetCardContainer());
	
	m_pTriggeredAbility4->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

//____________________________________________________________________________
//
CInstillEnergyCard::CInstillEnergyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Instill Energy"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::HasteCombat)
{
	counted_ptr<CModifyEnchantedCardAbility> cpAbility(
		::CreateObject<CModifyEnchantedCardAbility>(this, m_pChgPwrTghAttrEnchant,
			_T("")));

	cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChaoslaceCard::CChaoslaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chaoslace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, FALSE, _T("red spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, FALSE, _T("red permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathlaceCard::CDeathlaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deathlace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, FALSE, _T("black spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, FALSE, _T("black permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CLifelaceCard::CLifelaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lifelace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, FALSE, _T("green spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, FALSE, _T("green permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPurelaceCard::CPurelaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Purelace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, FALSE, _T("white spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, FALSE, _T("white permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThoughtlaceCard::CThoughtlaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughtlace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, FALSE, _T("blue spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, FALSE, _T("blue permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSacrificeCard::CSacrificeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sacrifice"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSacrificeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSacrificeCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);

	int n = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal(); //uses the real converted mana cost

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
		); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());
	return true;
}

//____________________________________________________________________________
//
CChannelCard::CChannelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Channel"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Channel Effect"), 2900, 1, FALSE, ZoneId::_Effects));


	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDisintegrateCard::CDisintegrateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disintegrate"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(0), PreventableType::Preventable));

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();

		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::GraveyardToExile);
		
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHolyArmorCard::CHolyArmorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Holy Armor"), nID, 
		WHITE_MANA_TEXT,
		Power(+0), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CHolyArmorCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CHolyArmorCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+1), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CParalyzeCard::CParalyzeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Paralyze"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				CardKeyword::NoUntapInUntapPhase));
		
		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParalyzeCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParalyzeCard::SetTriggerContext3));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionCost(_T("4"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetAbilityName(_T("untap ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CParalyzeCard::SetTriggerContext2(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();
	return true;
}

bool CParalyzeCard::SetTriggerContext3(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CJadeStatueCard::CJadeStatueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jade Statue"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(this,
			_T("2"),
			_T("Golem AD"), 64048,
			(CCreatureCard*) NULL, NodeId::EndOfCombatStep));
	cpAbility->SetUseInSpecificNode(NodeId::_CombatPhase, FALSE, FALSE);
	cpAbility->SetAbilityText(_T("Jade Statue becomes a 3/6 Golem artifact creature. Activates"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManaFlareCard::CManaFlareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Flare"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaFlareCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}
	
bool CManaFlareCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
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
bool CManaFlareCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CNetherShadowCard::CNetherShadowCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Nether Shadow"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNetherShadowCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CNetherShadowCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	unsigned int nCreatures = 0;

	if (GetZoneId() != ZoneId::Graveyard) return false;
	for (int i = GetZone()->GetSize() - 1; i >= 0; --i)
	{
		if (GetZone()->GetAt(i) == this) break;
		if (GetZone()->GetAt(i)->GetCardType().IsCreature()) ++nCreatures;
	}
	if (nCreatures < 3) return false;

	return true;
}

//____________________________________________________________________________
//
CLivingArtifactCard::CLivingArtifactCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Artifact"), CardType::EnchantArtifact, nID)
{
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				CardKeyword::Null));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLivingArtifactCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLivingArtifactCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VITALITY_COUNTER, -1));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CLivingArtifactCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLivingArtifactCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CLivingArtifactCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardCounterModifier pModifier = CCardCounterModifier(VITALITY_COUNTER, triggerContext.nValue1, false);

	pModifier.ApplyTo(this);

	return true;
}

bool CLivingArtifactCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(VITALITY_COUNTER)->GetCount();
	if (nCounterCount<1) return false;	
	return true;
}

//____________________________________________________________________________
//
CCreatureBondCard::CCreatureBondCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Creature Bond"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCreatureBondCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CCreatureBondCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	triggerContext.m_LifeModifier.SetLifeDelta(-pCreature->GetLastKnownToughness());

	return true;
}

//____________________________________________________________________________
//
CFireballCard::CFireballCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fireball"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, true, CManaCost::AllCostColors, false, false);

	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	m_pTargetChgLifeSpell->GetTargeting()->SetFancyDistribute(CSubjectGatherer::DistributeMethodType::Fireball);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFireballCard::BeforeResolution));
}

bool CFireballCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());

	int nOldTargets = pTargetAction->GetTargetGroup().GetSubjectCount();
	int nNewTargets = 0;
	BOOL bTrick;

	// Count valid player targets
	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
	{
		if (m_pTargetChgLifeSpell->GetTargeting()->TargetAllowed(const_cast<const CPlayer*>(*it), TRUE, bTrick))
			++nNewTargets;
	}

	// Count valid creature targets
	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		if (m_pTargetChgLifeSpell->GetTargeting()->TargetAllowed(const_cast<const CCard*>(it->GetPointer()), TRUE, bTrick))
			++nNewTargets;
	}

	if (nOldTargets == nNewTargets) return true;
	if (nNewTargets == 0) return false;

	// Reasing recalculated damage
	Context.nValue1 = -(pAction->GetCostConfigEntry().GetExtraValue() + 1 - nOldTargets) / nNewTargets;

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
CTimeVaultCard::CTimeVaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Time Vault"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
				_T(""), PlayerEffectType::TimeWalk, false, 1));

		cpAbility->SetAffectControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeforeBeginningStep));

		cpAbility->SetAbilityName(_T("untap ability"));
		cpAbility->SetSkipStack(true);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CPlayerEffectModifier(PlayerEffectType::SkipNextTurn, 1, true));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTimeVaultCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTimeVaultCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsTapped() == TRUE);
}

//____________________________________________________________________________
//
CScavengingGhoulCard::CScavengingGhoulCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Scavenging Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CORPSE_COUNTER), -1);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScavengingGhoulCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScavengingGhoulCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCreatures = GetGame()->GetCertainTypeDiedCount(CardType::Creature);
	if (nCreatures == 0) return false;

	CCardCounterModifier* pModifier = new CCardCounterModifier(CORPSE_COUNTER, nCreatures);
	return true;
}

//____________________________________________________________________________
//
CDrainLifeCard::CDrainLifeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Drain Life"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, true,	CManaCost::Colors(CManaCost::Color::Black));
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDrainLifeCard::BeforeResolution));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

bool CDrainLifeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();
	if (nExtra == 0) return true;

	if (pAction->GetAssociatedPlayer())
	{
		nExtra = std::min(nExtra, GET_INTEGER(pAction->GetAssociatedPlayer()->GetLife()));
	}
	else if (pAction->GetAssociatedCard())
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetAssociatedCard());
		if (!pCreature) return false;

		nExtra = std::min(nExtra, GET_INTEGER(pCreature->GetToughness()));
	}

	CLifeModifier* pModifier = new CLifeModifier(Life(nExtra), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CAnimateDeadCard::CAnimateDeadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Animate Dead"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CEnchantDeadCreature> cpSpell(
			::CreateObject<CEnchantDeadCreature>(this,
				_T("1") BLACK_MANA_TEXT,
				Power(-1), Life(-0),
				false));

		m_pSpell = cpSpell.GetPointer();
		AddSpell(m_pSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Exile, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnimateDeadCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnimateDeadCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCard* pCard = m_pSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetByPlayer(pCard->GetController());

	return true;
}

//____________________________________________________________________________
//
CNaturalSelectionCard::CNaturalSelectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Natural Selection"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CNaturalSelectionCard::OnResolutionCompleted))
	, m_ShuffleSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNaturalSelectionCard::OnShuffleSelected))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			3));

	cpSpell->SetReorder(TRUE, ZoneId::Library);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CNaturalSelectionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Shuffle the library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Don't shuffle"));

		entries.push_back(selectionEntry);
	}

	m_ShuffleSelection.AddSelectionRequest(entries, 1, 1, this, pAbilityAction->GetController(),(DWORD)pAbilityAction->GetAssociatedPlayer());
}

void CNaturalSelectionCard::OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				((CPlayer*)dwContext1)->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
		return;
		}
}

//____________________________________________________________________________
//
CStoneGiantCard::CStoneGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new TrueCardComparer, false, new CStoneGiantTargeting));

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(
		new CCreatureKeywordModifier(CreatureKeyword::Flying, TRUE));
	cpAbility->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(pGame,
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy),
			TurnNumberDelta(-1),
			NodeId::EndStep, 
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToLater));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CStoneGiantCard::CStoneGiantTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

BOOL CStoneGiantCard::CStoneGiantTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (!pCard->GetCardType().IsCreature()) return FALSE;
	if (pCard->GetController() != GetSourceCard()->GetController()) return FALSE;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	int nToughness = (int)pCreature->GetLastKnownToughness();
	int nPower = (int)((CCreatureCard*)GetSourceCard())->GetLastKnownPower();

	if (nToughness >= nPower) return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
