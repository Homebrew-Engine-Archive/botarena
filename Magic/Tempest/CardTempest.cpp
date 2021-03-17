#include "stdafx.h"
#include "CardTempest.h"

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

		DEFINE_CARD(CAdvanceScoutCard);
		DEFINE_CARD(CAftershockCard);
		DEFINE_CARD(CAltarOfDementiaCard);
		DEFINE_CARD(CAncientRunesCard);
		DEFINE_CARD(CAncientTombCard);
		DEFINE_CARD(CAngelicProtectorCard);
		DEFINE_CARD(CAnointCard);
		DEFINE_CARD(CApesOfRathCard);
		DEFINE_CARD(CApocalypseCard);
		DEFINE_CARD(CArmorSliverCard);
		DEFINE_CARD(CAuratogCard);
		DEFINE_CARD(CAvengingAngelCard);
		DEFINE_CARD(CBarbedSliverCard);
		DEFINE_CARD(CBayouDragonflyCard);
		DEFINE_CARD(CBloodFrenzyCard);
		DEFINE_CARD(CBountyHunterCard);
		DEFINE_CARD(CBrokenFallCard);
		DEFINE_CARD(CCalderaLakeCard);
		DEFINE_CARD(CCapsizeCard);
		DEFINE_CARD(CChaoticGooCard);
		DEFINE_CARD(CCinderMarshCard);
		DEFINE_CARD(CClergyEnVecCard);
		DEFINE_CARD(CClotSliverCard);
		DEFINE_CARD(CCoffinQueenCard);
		DEFINE_CARD(CCoiledTinviperCard);
		DEFINE_CARD(CColdStorageCard);
		DEFINE_CARD(CCommanderGrevenIlVecCard);
		DEFINE_CARD(CCorpseDanceCard);
		DEFINE_CARD(CCrazedArmodonCard);
		DEFINE_CARD(CCrownOfFlamesCard);
		DEFINE_CARD(CCursedScrollCard);
		DEFINE_CARD(CDarklingStalkerCard);
		DEFINE_CARD(CDauthiEmbraceCard);
		DEFINE_CARD(CDauthiGhoulCard);
		DEFINE_CARD(CDauthiHorrorCard);
		DEFINE_CARD(CDauthiMarauderCard);
		DEFINE_CARD(CDauthiMercenaryCard);
		DEFINE_CARD(CDauthiMindripperCard);
		DEFINE_CARD(CDauthiSlayerCard);
		DEFINE_CARD(CDiabolicEdictCard);
		DEFINE_CARD(CDirtcowlWurmCard);
		DEFINE_CARD(CDismissCard);
		DEFINE_CARD(CDisturbedBurialCard);
		DEFINE_CARD(CEarthcraftCard);
		DEFINE_CARD(CEladamriLordOfLeavesCard);
		DEFINE_CARD(CEladamrisVineyardCard);
		DEFINE_CARD(CElvenWarhoundsCard);
		DEFINE_CARD(CElvishFuryCard);
		DEFINE_CARD(CEmeraldMedallionCard);
		DEFINE_CARD(CEmmessiTomeCard);
		DEFINE_CARD(CEnergizerCard);
		DEFINE_CARD(CEscapedShapeshifterCard);
		DEFINE_CARD(CEssenceBottleCard);
		DEFINE_CARD(CEvincarsJusticeCard);
		DEFINE_CARD(CFeveredConvulsionsCard);
		DEFINE_CARD(CFieldOfSoulsCard);
		DEFINE_CARD(CFireflyCard);
		DEFINE_CARD(CFireslingerCard);
		DEFINE_CARD(CFlailingDrakeCard);
		DEFINE_CARD(CFlowstoneGiantCard);
		DEFINE_CARD(CFlowstoneSalamanderCard);
		DEFINE_CARD(CFlowstoneSculptureCard);
		DEFINE_CARD(CFlowstoneWyvernCard);
		DEFINE_CARD(CFoolsTomeCard);
		DEFINE_CARD(CFrogTongueCard);
		//DEFINE_CARD(CFugitiveDruidCard);
		DEFINE_CARD(CFylamaridCard);
		DEFINE_CARD(CGallantryCard);
		DEFINE_CARD(CGerrardsBattleCryCard);
		DEFINE_CARD(CGhostTownCard);
		DEFINE_CARD(CGiantCrabCard);
		DEFINE_CARD(CGoblinBombardmentCard);
		DEFINE_CARD(CGrindstoneCard);
		DEFINE_CARD(CHandToHandCard);
		DEFINE_CARD(CHannasCustodyCard);
		DEFINE_CARD(CHarrowCard);
		DEFINE_CARD(CHavocCard);
		DEFINE_CARD(CHeartSliverCard);
		DEFINE_CARD(CHeartwoodDryadCard);
		DEFINE_CARD(CHeartwoodGiantCard);
		DEFINE_CARD(CHeartwoodTreefolkCard);
		DEFINE_CARD(CHornedSliverCard);
		//DEFINE_CARD(CHumilityCard);
		DEFINE_CARD(CImpsTauntCard);
		DEFINE_CARD(CIntuitionCard);
		DEFINE_CARD(CInvulnerabilityCard);
		DEFINE_CARD(CJackalPupCard);
		DEFINE_CARD(CJetMedallionCard);
		DEFINE_CARD(CKezzerdrixCard);
		DEFINE_CARD(CKindleCard);
		DEFINE_CARD(CKnightOfDawnCard);
		DEFINE_CARD(CKrakilinCard);
		DEFINE_CARD(CLivingDeathCard);
		DEFINE_CARD(CLobotomyCard);
		DEFINE_CARD(CLotusPetalCard);
		DEFINE_CARD(CLowlandGiantCard);
		DEFINE_CARD(CMaddeningImpCard);
		DEFINE_CARD(CMagmasaurCard);
		DEFINE_CARD(CManakinCard);
		DEFINE_CARD(CManaSeveranceCard);
		DEFINE_CARD(CMantaRidersCard);
		DEFINE_CARD(CMarshLurkerCard);
		DEFINE_CARD(CMazeOfShadowsCard);
		DEFINE_CARD(CMeditateCard);
		DEFINE_CARD(CMetallicSliverCard);
		DEFINE_CARD(CMindwhipSliverCard);
		DEFINE_CARD(CMinionOfTheWastesCard);
		DEFINE_CARD(CMirrisGuileCard);
		DEFINE_CARD(CMnemonicSliverCard);
		DEFINE_CARD(CMoggCannonCard);
		DEFINE_CARD(CMoggConscriptsCard);
		DEFINE_CARD(CMoggHollowsCard);
		DEFINE_CARD(CMoggRaiderCard);
		DEFINE_CARD(CMoggSquadCard);
		DEFINE_CARD(CMongrelPackCard);
		DEFINE_CARD(CMountedArchersCard);
		DEFINE_CARD(CMuscleSliverCard);
		DEFINE_CARD(COpportunistCard);
		DEFINE_CARD(COrimSamiteHealerCard);
		DEFINE_CARD(COrimsPrayerCard);
		DEFINE_CARD(CPallimudCard);
		DEFINE_CARD(CPatchworkGnomesCard);
		DEFINE_CARD(CPearlMedallionCard);
		DEFINE_CARD(CPegasusRefugeCard);
		DEFINE_CARD(CPhyrexianGrimoireCard);
		DEFINE_CARD(CPhyrexianSplicerCard);
		DEFINE_CARD(CPineBarrensCard);
		DEFINE_CARD(CPitImpCard);
		DEFINE_CARD(CPrecognitionCard);
		DEFINE_CARD(CPropagandaCard);
		DEFINE_CARD(CPuppetStringsCard);
		DEFINE_CARD(CRangerEnVecCard);
		DEFINE_CARD(CRatsOfRathCard);
		DEFINE_CARD(CRealityAnchorCard);
		DEFINE_CARD(CReanimateCard);
		DEFINE_CARD(CRecklessSpiteCard);
		DEFINE_CARD(CReflectingPoolCard);
		DEFINE_CARD(CRenegadeWarlordCard);
		DEFINE_CARD(CRepentanceCard);
		DEFINE_CARD(CRollingThunderCard);
		DEFINE_CARD(CRootwaterDepthsCard);
		DEFINE_CARD(CRootwaterDiverCard);
		DEFINE_CARD(CRootwaterHunterCard);
		DEFINE_CARD(CRootwaterShamanCard);
		DEFINE_CARD(CRubyMedallionCard);
		DEFINE_CARD(CSacredGuideCard);
		DEFINE_CARD(CSadisticGleeCard);
		DEFINE_CARD(CSafeguardCard);
		DEFINE_CARD(CSaltFlatsCard);
		DEFINE_CARD(CSapphireMedallionCard);
		DEFINE_CARD(CSarcomancyCard);
		DEFINE_CARD(CScablandCard);
		DEFINE_CARD(CScaldingTongsCard);
		DEFINE_CARD(CScragnothCard);
		DEFINE_CARD(CScreechingHarpyCard);
		DEFINE_CARD(CScrollRackCard);
		DEFINE_CARD(CSearingTouchCard);
		DEFINE_CARD(CSegmentedWurmCard);
		DEFINE_CARD(CSeleniaDarkAngelCard);
		DEFINE_CARD(CSereneOfferingCard);
		DEFINE_CARD(CServantOfVolrathCard);
		DEFINE_CARD(CShadowRiftCard);
		DEFINE_CARD(CShadowstormCard);
		DEFINE_CARD(CShockerCard);
		DEFINE_CARD(CSkyshroudCondorCard);
		DEFINE_CARD(CSkyshroudElfCard);
		DEFINE_CARD(CSkyshroudForestCard);
		DEFINE_CARD(CSkyshroudTrollCard);
		DEFINE_CARD(CSkyshroudVampireCard);
		DEFINE_CARD(CSkySpiritCard);
		DEFINE_CARD(CSoltariCrusaderCard);
		DEFINE_CARD(CSoltariEmissaryCard);
		DEFINE_CARD(CSoltariFootSoldierCard);
		DEFINE_CARD(CSoltariLancerCard);
		DEFINE_CARD(CSoltariMonkCard);
		DEFINE_CARD(CSoltariPriestCard);
		DEFINE_CARD(CSoltariTrooperCard);
		DEFINE_CARD(CSouldrinkerCard);
		DEFINE_CARD(CSpikeDroneCard);
		DEFINE_CARD(CSpinalGraftCard);
		DEFINE_CARD(CSpiritMirrorCard);
		DEFINE_CARD(CSpontaneousCombustionCard);
		DEFINE_CARD(CSqueesToyCard);
		DEFINE_CARD(CStalkingStonesCard);
		DEFINE_CARD(CStormFrontCard);
		DEFINE_CARD(CTalonSliverCard);
		DEFINE_CARD(CTelethopterCard);
		DEFINE_CARD(CThalakosLowlandsCard);
		DEFINE_CARD(CThalakosMistfolkCard);
		DEFINE_CARD(CThalakosSeerCard);
		DEFINE_CARD(CThalakosSentryCard);
		DEFINE_CARD(CThumbscrewsCard);
		DEFINE_CARD(CToothAndClawCard);
		DEFINE_CARD(CTortureChamberCard);
		DEFINE_CARD(CTradewindRiderCard);
		DEFINE_CARD(CVecTownshipsCard);
		DEFINE_CARD(CVerdigrisCard);
		DEFINE_CARD(CVhatiIlDalCard);
		DEFINE_CARD(CWallOfDiffusionCard);
		DEFINE_CARD(CWastelandCard);
		DEFINE_CARD(CWhispersOfTheMuseCard);
		DEFINE_CARD(CWildWurmCard);
		DEFINE_CARD(CWindsOfRathCard);
		DEFINE_CARD(CWingedSliverCard);
		DEFINE_CARD(CWoodSageCard);
		DEFINE_CARD(CWorthyCauseCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CClotSliverCard::CClotSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clot Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CClotSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CClotSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			_T("2"))); // regeneration cost

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeartSliverCard::CHeartSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heart Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornedSliverCard::CHornedSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horned Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLotusPetalCard::CLotusPetalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lotus Petal"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMetallicSliverCard::CMetallicSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Metallic Sliver"), CardType::_ArtifactCreature, CREATURE_TYPE(Sliver), nID,
		_T("1"), Power(1), Life(1))
{
}

//____________________________________________________________________________
//
COrimSamiteHealerCard::COrimSamiteHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orim, Samite Healer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(3), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CSkyshroudVampireCard::CSkyshroudVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyshroud Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTalonSliverCard::CTalonSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talon Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWastelandCard::CWastelandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Wasteland"), nID)
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
				_T(""),
				new CardTypeComparer(CardType::NonbasicLand, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhispersOfTheMuseCard::CWhispersOfTheMuseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whispers of the Muse"), CardType::Instant, nID)

	, m_BuybackCost(_T("5"))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 1));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CWhispersOfTheMuseCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CCapsizeCard::CCapsizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Capsize"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CCapsizeCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CWingedSliverCard::CWingedSliverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Winged Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuratogCard::CAuratogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auratog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMuscleSliverCard::CMuscleSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Muscle Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAdvanceScoutCard::CAdvanceScoutCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Advance Scout"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CApesOfRathCard::CApesOfRathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Apes of Rath"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBayouDragonflyCard::CBayouDragonflyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bayou Dragonfly"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Swampwalk, FALSE);
}

//____________________________________________________________________________
//
CClergyEnVecCard::CClergyEnVecCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clergy en-Vec"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
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
CCommanderGrevenIlVecCard::CCommanderGrevenIlVecCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Commander Greven il-Vec"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(5))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrazedArmodonCard::CCrazedArmodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crazed Armodon"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CCrazedArmodonCard::OnResolutionCompleted))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			GREEN_MANA_TEXT,
			Power(+3), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->SetMaxTurnUsageCount(1);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CCrazedArmodonCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDarklingStalkerCard::CDarklingStalkerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Darkling Stalker"), CardType::Creature, CREATURE_TYPE2(Shade, Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDirtcowlWurmCard::CDirtcowlWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dirtcowl Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	//lands played from the hand or graveyard
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand | ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEladamriLordOfLeavesCard::CEladamriLordOfLeavesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eladamri, Lord of Leaves"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
			Power(+0), Life(+0), CreatureKeyword::Forestwalk));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvenWarhoundsCard::CElvenWarhoundsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elven Warhounds"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElvenWarhoundsCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

bool CElvenWarhoundsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CFireflyCard::CFireflyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Firefly"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
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
CFireslingerCard::CFireslingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fireslinger"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneGiantCard::CFlowstoneGiantCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		RED_MANA_TEXT, Power(+2), Life(-2))
{
}

//____________________________________________________________________________
//
CFlowstoneWyvernCard::CFlowstoneWyvernCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Wyvern"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		RED_MANA_TEXT, Power(+2), Life(-2))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CGiantCrabCard::CGiantCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
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
CHeartwoodGiantCard::CHeartwoodGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heartwood Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-2), PreventableType::Preventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeartwoodTreefolkCard::CHeartwoodTreefolkCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Heartwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CKnightOfDawnCard::CKnightOfDawnCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Knight of Dawn"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CKnightOfDawnCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Gain protection from color of your choice. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKnightOfDawnCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKnightOfDawnCard::BeforeResolution(CAbilityAction* pAction)
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

void CKnightOfDawnCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CLowlandGiantCard::CLowlandGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lowland Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CMantaRidersCard::CMantaRidersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Manta Riders"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT, Power(1), Life(1),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CMarshLurkerCard::CMarshLurkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marsh Lurker"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+0)));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggRaiderCard::CMoggRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Raider"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CAngelicProtectorCard::CAngelicProtectorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Protector"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
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
CMoggSquadCard::CMoggSquadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Squad"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetPowerMultiplier(Power(-1));
	cpAbility->SetToughnessMultiplier(Life(-1));
	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COpportunistCard::COpportunistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Opportunist"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPitImpCard::CPitImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pit Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
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
CRangerEnVecCard::CRangerEnVecCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Ranger en-Vec"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2),
		GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CRatsOfRathCard::CRatsOfRathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rats of Rath"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootwaterDiverCard::CRootwaterDiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rootwater Diver"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootwaterHunterCard::CRootwaterHunterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Rootwater Hunter"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
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
CScragnothCard::CScragnothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scragnoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
		GetCardKeyword()->AddCantBeCountered(FALSE);
		GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CScreechingHarpyCard::CScreechingHarpyCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Screeching Harpy"), CardType::Creature, CREATURE_TYPE2(Harpy, Beast), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSegmentedWurmCard::CSegmentedWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Segmented Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeleniaDarkAngelCard::CSeleniaDarkAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Selenia, Dark Angel"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CServantOfVolrathCard::CServantOfVolrathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Servant of Volrath"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkySpiritCard::CSkySpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sky Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSkyshroudElfCard::CSkyshroudElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkyshroudTrollCard::CSkyshroudTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skyshroud Troll"), CardType::Creature, CREATURE_TYPE2(Troll, Giant), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		_T("1") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSouldrinkerCard::CSouldrinkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Souldrinker"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddPayLifeDeltaCost(Life(-3));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTradewindRiderCard::CTradewindRiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tradewind Rider"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	CCardFilter* tapable=new CCardFilter(new AnyCreatureComparer());
	tapable->AddNegateComparer(new SpecificCardComparer(this)); // can't tap this twice!
	cpAbility->GetCost().AddTapCardCost(2, tapable);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoiledTinviperCard::CCoiledTinviperCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Coiled Tinviper"), CardType::_ArtifactCreature, CREATURE_TYPE(Snake), nID,
		_T("3"), Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CEnergizerCard::CEnergizerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Energizer"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneSculptureCard::CFlowstoneSculptureCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flowstone Sculpture"), CardType::_ArtifactCreature, CREATURE_TYPE(Shapeshifter), nID,
		_T("6"), Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+0), Life(+0)));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+0), Life(+0)));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("2"),
				Power(+0), Life(+0)));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CManakinCard::CManakinCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Manakin"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(1), Life(1),
		_T("1"))
{
}

//____________________________________________________________________________
//
CPatchworkGnomesCard::CPatchworkGnomesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Patchwork Gnomes"), CardType::_ArtifactCreature, CREATURE_TYPE(Gnome), nID,
		_T("3"), Power(2), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTelethopterCard::CTelethopterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Telethopter"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("4"), Power(3), Life(1),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CAncientTombCard::CAncientTombCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ancient Tomb"), nID)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

	cpAbility->AddTapCost();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->SetAbilityName(_T("Take 2 damage from"));
		cpAbility->SetAbilityText(_T("Take 2 damage from"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCalderaLakeCard::CCalderaLakeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Caldera Lake"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPineBarrensCard::CPineBarrensCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Pine Barrens"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSaltFlatsCard::CSaltFlatsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Salt Flats"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScablandCard::CScablandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Scabland"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkyshroudForestCard::CSkyshroudForestCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Skyshroud Forest"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmmessiTomeCard::CEmmessiTomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Emmessi Tome"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("5"), 2));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFoolsTomeCard::CFoolsTomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fool's Tome"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CFoolsTomeCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CFoolsTomeCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CMoggCannonCard::CMoggCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mogg Cannon"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	,m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMoggCannonCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CMoggCannonCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPuppetStringsCard::CPuppetStringsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Puppet Strings"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2"),
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSqueesToyCard::CSqueesToyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Squee's Toy"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(1),
			SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrownOfFlamesCard::CCrownOfFlamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crown of Flames"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				RED_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CCrownOfFlamesCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CCrownOfFlamesCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
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
CEarthcraftCard::CEarthcraftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Earthcraft"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::BasicLand, false)));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFrogTongueCard::CFrogTongueCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Frog Tongue"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Reach)
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
CGerrardsBattleCryCard::CGerrardsBattleCryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gerrard's Battle Cry"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("2") WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinBombardmentCard::CGoblinBombardmentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Bombardment"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHannasCustodyCard::CHannasCustodyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hanna's Custody"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHavocCard::CHavocCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Havoc"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPegasusRefugeCard::CPegasusRefugeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pegasus Refuge"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2"),
			_T("Pegasus B"), 2896,
			1));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSafeguardCard::CSafeguardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Safeguard"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormFrontCard::CStormFrontCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Storm Front"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToothAndClawCard::CToothAndClawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tooth and Claw"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Carnivore"), TOKEN_ID_BY_NAME,
			1));

	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnointCard::CAnointCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Anoint"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AnyCreatureComparer, 
			FALSE,
			Life(3), SourceColor::Null));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CAnointCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CDiabolicEdictCard::CDiabolicEdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diabolic Edict"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Instant,					
			_T("1") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDismissCard::CDismissCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dismiss"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CElvishFuryCard::CElvishFuryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elvish Fury"), CardType::Instant, nID)

	, m_BuybackCost(_T("4"))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CElvishFuryCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CGallantryCard::CGallantryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gallantry"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+4), Life(+4), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHarrowCard::CHarrowCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Harrow"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));

	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CImpsTauntCard::CImpsTauntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Imps' Taunt"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::MustAttack, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CImpsTauntCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CInvulnerabilityCard::CInvulnerabilityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Invulnerability"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CDamagePreventionSpell> cpSpell(
		::CreateObject<CDamagePreventionSpell>(this, AbilityType::Instant, 
			_T("1") WHITE_MANA_TEXT, 
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources, TRUE));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CInvulnerabilityCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CMeditateCard::CMeditateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Meditate"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpSpell->SetAffectOpponentsOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRecklessSpiteCard::CRecklessSpiteCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Reckless Spite"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
	new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable;
}

//____________________________________________________________________________
//
CSearingTouchCard::CSearingTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Searing Touch"), CardType::Instant, nID)

	, m_BuybackCost(_T("4"))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

void CSearingTouchCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSpontaneousCombustionCard::CSpontaneousCombustionCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Spontaneous Combustion"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CVerdigrisCard::CVerdigrisCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Verdigris"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CAftershockCard::CAftershockCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Aftershock"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																				DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CDisturbedBurialCard::CDisturbedBurialCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disturbed Burial"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CDisturbedBurialCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CEvincarsJusticeCard::CEvincarsJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Evincar's Justice"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Life(-2),
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CEvincarsJusticeCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CManaSeveranceCard::CManaSeveranceCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Mana Severance"), CardType::Sorcery, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("lands")),
		ZoneId::Exile, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
}

//____________________________________________________________________________
//
CRollingThunderCard::CRollingThunderCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Rolling Thunder"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFylamaridCard::CFylamaridCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fylamarid"), CardType::Creature, CREATURE_TYPE2(Squid, Beast), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, // Unblockable unless...
		CCardFilter::GetFilter(_T("non-blue cards"))); // blocking creature is non-blue

	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReflectingPoolCard::CReflectingPoolCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Reflecting Pool"), nID)
{
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Black));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Blue));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Red));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Green));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::White));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Colorless));

		cpAbility->SetMonitorControllerOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAncientRunesCard::CAncientRunesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ancient Runes"), CardType::GlobalEnchantment, nID,
		_T("2")	RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAncientRunesCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CAncientRunesCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);

	int nCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer());

	CLifeModifier pModifier1 = CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier1.ApplyTo(GetGame()->GetActivePlayer());

	return true;
}

//____________________________________________________________________________
//
CAvengingAngelCard::CAvengingAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avenging Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieldOfSoulsCard::CFieldOfSoulsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Field of Souls"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit B"), 2810, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
//CFugitiveDruidCard::CFugitiveDruidCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Fugitive Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
//		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
//
//		, m_CardFilter(_T("an aura"), _T("auras"), new CardTypeComparer(CardType::_Enchantment, TRUE))
//	{
//	typedef
//		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSubjectTargeted, 
//							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, false));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter); 
//	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
//CHumilityCard::CHumilityCard(CGame* pGame, UINT nID)
//: CInPlaySpellCard(pGame, _T("Humility"), CardType::GlobalEnchantment, nID,
//				   _T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
//{
//	{
//		counted_ptr<CPlayerEffectEnchantment> cpAbility( 
//			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::CantPlayActivatedAbilities, (int)CCardFilter::GetFilter(_T("creature permanents"))));
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
//			::CreateObject<CPwrTghAttrEnchantment>(this,
//				new CardTypeComparer(CardType::Creature, true),
//				Power(0), Life(0)));
//
//			cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
//			cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
//			cpAbility->GetLifeModifier().SetReplacement(TRUE);
//			cpAbility->GetLifeModifier().SetToBase(TRUE);
//			cpAbility->GetLifeModifier().SetOneTurnOnly(true);
//			cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
//			cpAbility->GetPowerModifier().SetToBase(TRUE);
//			cpAbility->GetPowerModifier().SetReplacement(TRUE);
//			cpAbility->GetPowerModifier().SetOneTurnOnly(true);
//
//			//cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
//
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
////____________________________________________________________________________
////
CMirrisGuileCard::CMirrisGuileCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirri's Guile"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVhatiIlDalCard::CVhatiIlDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vhati il-Dal"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		CPowerModifier* pPowerModifier = new CPowerModifier;
			pPowerModifier->SetPowerDelta(Power(1));
			pPowerModifier->SetToBase(TRUE);
			pPowerModifier->SetReplacement(TRUE);
			pPowerModifier->SetOneTurnOnly(TRUE);

		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

		cpAbility->SetAbilityText(_T("Target creature's power becomes 1 until end of turn. Activates"));

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

		CLifeModifier* pLifeModifier = new CLifeModifier;
			pLifeModifier->SetLifeDelta(Life(1));
			pLifeModifier->SetPreventable(PreventableType::NotPreventable);
			pLifeModifier->SetToBase(TRUE);
			pLifeModifier->SetReplacement(TRUE);
			pLifeModifier->SetOneTurnOnly(TRUE);

		cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);

		cpAbility->SetAbilityText(_T("Target creature's toughness becomes 1 until end of turn. Activates"));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CLivingDeathCard::CLivingDeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Death"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLivingDeathCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLivingDeathCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pExiled;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

		for (int i = 0; i < pGraveyard->GetSize(); ++i)
			if (pGraveyard->GetAt(i)->GetCardType().IsCreature())
				pExiled.AddCard(pGraveyard->GetAt(i), CardPlacement::Top);
	}

	for (int i = 0; i < pExiled.GetSize(); ++i)
		pExiled.GetAt(i)->Move(pExiled.GetAt(i)->GetOwner()->GetZoneById(ZoneId::Exile), pExiled.GetAt(i)->GetOwner(), MoveType::Others);
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		
		CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pPlayer)));

		pModifier2.ApplyTo(pPlayer);
	}

	for (int i = 0; i < pExiled.GetSize(); ++i)
		pExiled.GetAt(i)->Move(pExiled.GetAt(i)->GetOwner()->GetZoneById(ZoneId::Battlefield), pExiled.GetAt(i)->GetOwner(), MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CSarcomancyCard::CSarcomancyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sarcomancy"), CardType::GlobalEnchantment, nID, 
		BLACK_MANA_TEXT, AbilityType::Enchantment)

	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), FALSE))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie C"), 2880, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSarcomancyCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSarcomancyCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSarcomancyCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0;
}

bool CSarcomancyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0;
}

//____________________________________________________________________________
//
CPrecognitionCard::CPrecognitionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Precognition"), CardType::GlobalEnchantment, nID,
		_T("4") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrecognitionCard::SetTriggerContext));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPrecognitionCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return toCardKeyword == CardKeyword::Flash;
}

//____________________________________________________________________________
//
CRepentanceCard::CRepentanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Repentance"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericTargetCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetCreatureSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT, new AnyCreatureComparer()));
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CDamagetoItselfModifier(DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CBrokenFallCard::CBrokenFallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Broken Fall"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->GetCost().AddReturnThisCardCost(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CApocalypseCard::CApocalypseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Apocalypse"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Exile, TRUE, MoveType::Others));

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
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmorSliverCard::CArmorSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armor Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CArmorSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CArmorSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			_T("2"),
			Power(+0), Life(+1)));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarbedSliverCard::CBarbedSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbed Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBarbedSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CBarbedSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			_T("2"),
			Power(+1), Life(+0)));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindwhipSliverCard::CMindwhipSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindwhip Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMindwhipSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMindwhipSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(pCard,
			_T("2"),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE, TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetAtRandom();

	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMnemonicSliverCard::CMnemonicSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mnemonic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMnemonicSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMnemonicSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pCard,
			_T("2"), 1));

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEladamrisVineyardCard::CEladamrisVineyardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eladamri's Vineyard"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEladamrisVineyardCard::SetTriggerContext));

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CEladamrisVineyardCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return m_pGame->IsFirstMainPhase();
}

//____________________________________________________________________________
//
CFlailingDrakeCard::CFlailingDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flailing Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlailingDrakeCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CFlailingDrakeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CFlowstoneSalamanderCard::CFlowstoneSalamanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flowstone Salamander"), CardType::Creature, CREATURE_TYPE(Salamander), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			RED_MANA_TEXT,
			new BlockingThisCreatureComparer(this), FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJackalPupCard::CJackalPupCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jackal Pup"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJackalPupCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CJackalPupCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CPallimudCard::CPallimudCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pallimud"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(3))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Land, false))); //"lands"

		cpAbility->SetChangePowerOnly();

		cpAbility->GetSurveyCardFilter().AddComparer(new TappedComparer); //"tapped"
		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenOrientationChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

			cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
			cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
			cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

			cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
			cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
			cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

			
			cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
			cpAbility->GetPowerModifier().SetToBase(TRUE);
			cpAbility->GetPowerModifier().SetReplacement(false);
			cpAbility->GetPowerModifier().SetOneTurnOnly(false);

			cpAbility->SetSkipStack(true);

			cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenOrientationChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

			cpAbility->GetTrigger().SetFromOrientation(Orientation::Tap);
			cpAbility->GetTrigger().SetToOrientation(Orientation::Untap);
			cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

			cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
			cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
			cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

			/*cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
			cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));*/
			cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
			cpAbility->GetPowerModifier().SetToBase(TRUE);
			cpAbility->GetPowerModifier().SetReplacement(false);
			cpAbility->GetPowerModifier().SetOneTurnOnly(false);
			cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

			cpAbility->SetSkipStack(true);

			cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRenegadeWarlordCard::CRenegadeWarlordCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Renegade Warlord"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScaldingTongsCard::CScaldingTongsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scalding Tongs"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScaldingTongsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScaldingTongsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CScaldingTongsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() <= 3;
}

bool CScaldingTongsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() <= 3;
}

//____________________________________________________________________________
//
CThumbscrewsCard::CThumbscrewsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thumbscrews"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThumbscrewsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThumbscrewsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CThumbscrewsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 5;
}

bool CThumbscrewsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 5;
}

//____________________________________________________________________________
//
CFeveredConvulsionsCard::CFeveredConvulsionsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fevered Convulsions"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSadisticGleeCard::CSadisticGleeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sadistic Glee"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSadisticGleeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSadisticGleeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pEnchantedCard, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBountyHunterCard::CBountyHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bounty Hunter"), CardType::Creature, CREATURE_TYPE3(Human, Archer, Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(	new CardTypeComparer(CardType::Black, false));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(BOUNTY_COUNTER, +1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(BOUNTY_COUNTER, 0));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeDroneCard::CSpikeDroneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Drone"), CardType::Creature, CREATURE_TYPE2(Spike, Drone), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrakilinCard::CKrakilinCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Krakilin"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0),
		_T("1") GREEN_MANA_TEXT)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKrakilinCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
}

void CKrakilinCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CLobotomyCard::CLobotomyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lobotomy"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLobotomyCard::OnResolutionCompleted))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::BasicLand, false)))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			1, MoveType::Others, ZoneId::_Tokens, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	// Exclude creature OR land cards

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CLobotomyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);
	CZone* pExile = target->GetZoneById(ZoneId::_Tokens);
	if (pExile->GetSize()>0)

	{
		CCard* pCard = pExile->GetTopCard();

		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
		CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
		CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others)));
		CZoneCardModifier pModifier4 = CZoneCardModifier(ZoneId::_Tokens, &m_CardFilter_temp,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::_Tokens, ZoneId::Exile, TRUE, MoveType::Others)));

		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
														CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		CZoneModifier pmodifier3 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
														CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		if (bResult)
		{
			pModifier1.ApplyTo(target);
			pmodifier2.ApplyTo(target);
			pModifier2.ApplyTo(target);
			pmodifier3.ApplyTo(target);
			pModifier3.ApplyTo(target);
			pModifier4.ApplyTo(target);

			pLibrary->Shuffle();
		}
	}
}

//____________________________________________________________________________
//
CBloodFrenzyCard::CBloodFrenzyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Blood Frenzy"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+4), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AttackingBlockingCreatureComparer)
	,m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBloodFrenzyCard::OnResolutionCompleted1))
{
	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CBloodFrenzyCard::CanPlay)));
	m_pTargetChgPwrTghAttrSpell->Add(cpTrait1.GetPointer());
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

}

BOOL CBloodFrenzyCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2);
}

void CBloodFrenzyCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CWorthyCauseCard::CWorthyCauseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Worthy Cause"), CardType::Instant, nID)

	, m_BuybackCost(_T("2"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CWorthyCauseCard::OnResolutionCompleted))
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CWorthyCauseCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}
void CWorthyCauseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(pCreature->GetLastKnownToughness()), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NonCombatDamage // Damage Type
		);
		pmodifier1.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CDauthiMarauderCard::CDauthiMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Marauder"), CardType::Creature, CREATURE_TYPE2(Dauthi, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CHeartwoodDryadCard::CHeartwoodDryadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heartwood Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadowReach(FALSE);
}

//____________________________________________________________________________
//
CDauthiGhoulCard::CDauthiGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Ghoul"), CardType::Creature, CREATURE_TYPE2(Dauthi, Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauthiHorrorCard::CDauthiHorrorCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Dauthi Horror"), CardType::Creature, CREATURE_TYPE2(Dauthi, Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1),
		CCardFilter::GetFilter(_T("non-white cards"))) //can't be blocked except by "this"
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CDauthiMercenaryCard::CDauthiMercenaryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dauthi Mercenary"), CardType::Creature, CREATURE_TYPE3(Dauthi, Knight, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1),
		_T("1") BLACK_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CDauthiMindripperCard::CDauthiMindripperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Mindripper"), CardType::Creature, CREATURE_TYPE2(Dauthi, Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	GetCreatureKeyword()->AddShadow(FALSE);
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDauthiMindripperCard::SetTriggerContext));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetDiscardCount(3);
		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CDauthiMindripperCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDauthiMindripperCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}
bool CDauthiMindripperCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
											  CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return (toCardKeyword == CardKeyword::Flash);
}

//____________________________________________________________________________
//
CDauthiSlayerCard::CDauthiSlayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Slayer"), CardType::Creature, CREATURE_TYPE2(Dauthi, Soldier), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddShadow(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CSoltariCrusaderCard::CSoltariCrusaderCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Soltari Crusader"), CardType::Creature, CREATURE_TYPE2(Soltari, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1),
		_T("1") WHITE_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CSoltariEmissaryCard::CSoltariEmissaryCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Soltari Emissary"), CardType::Creature, CREATURE_TYPE2(Soltari, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1),
		WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Shadow)
{
}

//____________________________________________________________________________
//
CSoltariFootSoldierCard::CSoltariFootSoldierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Foot Soldier"), CardType::Creature, CREATURE_TYPE2(Soltari, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CSoltariLancerCard::CSoltariLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Lancer"), CardType::Creature, CREATURE_TYPE2(Soltari, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new AttackingCreatureComparer);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::AttackEventCallback,
			&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::FirstStrike);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	} */
}

//____________________________________________________________________________
//
CSoltariMonkCard::CSoltariMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Monk"), CardType::Creature, CREATURE_TYPE3(Soltari, Monk, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CSoltariPriestCard::CSoltariPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Priest"), CardType::Creature, CREATURE_TYPE2(Soltari, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CSoltariTrooperCard::CSoltariTrooperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Trooper"), CardType::Creature, CREATURE_TYPE2(Soltari, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosMistfolkCard::CThalakosMistfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thalakos Mistfolk"), CardType::Creature, CREATURE_TYPE2(Thalakos, Illusion), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				BLUE_MANA_TEXT,
				ZoneId::Library, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosSeerCard::CThalakosSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thalakos Seer"), CardType::Creature, CREATURE_TYPE2(Thalakos, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosSentryCard::CThalakosSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thalakos Sentry"), CardType::Creature, CREATURE_TYPE2(Thalakos, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddShadow(FALSE);
}

//____________________________________________________________________________
//
CWallOfDiffusionCard::CWallOfDiffusionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Diffusion"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddShadowReach(FALSE);
}

//____________________________________________________________________________
//
CMazeOfShadowsCard::CMazeOfShadowsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Maze of Shadows"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauthiEmbraceCard::CDauthiEmbraceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dauthi Embrace"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Shadow, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRealityAnchorCard::CRealityAnchorCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Reality Anchor"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Shadow,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShadowRiftCard::CShadowRiftCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Shadow Rift"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Shadow, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShadowstormCard::CShadowstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Shadowstorm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		Life(-2),
		new CreatureKeywordComparer(CreatureKeyword::Shadow, false), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CSpinalGraftCard::CSpinalGraftCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Spinal Graft"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(+3), Life(+3))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSpinalGraftCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSpinalGraftCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGhostTownCard::CGhostTownCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ghost Town"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetUseInSpecificNode(NodeId::Null, TRUE, FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCinderMarshCard::CCinderMarshCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cinder Marsh"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoggHollowsCard::CMoggHollowsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mogg Hollows"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRootwaterDepthsCard::CRootwaterDepthsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rootwater Depths"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosLowlandsCard::CThalakosLowlandsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Thalakos Lowlands"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVecTownshipsCard::CVecTownshipsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vec Townships"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKezzerdrixCard::CKezzerdrixCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Kezzerdrix"), CardType::Creature, CREATURE_TYPE2(Rabbit, Beast), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKezzerdrixCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKezzerdrixCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CKezzerdrixCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CKezzerdrixCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CMongrelPackCard::CMongrelPackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mongrel Pack"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Hound"), TOKEN_ID_BY_NAME, 4);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMongrelPackCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMongrelPackCard::SetTriggerContext));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CMongrelPackCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CMongrelPackCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

//____________________________________________________________________________
//
COrimsPrayerCard::COrimsPrayerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orim's Prayer"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrimsPrayerCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool COrimsPrayerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	return (pCreature->GetAttackedPlayer() == GetController()); //Does the creature attack defending player (and not a planeswalker)?
}

//____________________________________________________________________________
//
CSpiritMirrorCard::CSpiritMirrorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spirit Mirror"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Reflection), false));
	
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetCreateTokenOption(TRUE, _T("Reflection A"), 2861, 1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpiritMirrorCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritMirrorCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Reflection), false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpiritMirrorCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
		if (m_CardFilter.CountIncluded(pSurvey->GetCardContainer()) > 0)
			return false;
	}

	return true;
}

bool CSpiritMirrorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
		if (m_CardFilter.CountIncluded(pSurvey->GetCardContainer()) > 0)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CSereneOfferingCard::CSereneOfferingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Serene Offering"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSereneOfferingCard::BeforeResolution));
}

bool CSereneOfferingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CReanimateCard::CReanimateCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Reanimate"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false), 
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CReanimateCard::OnResolutionCompleted))

{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CReanimateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(-converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (bResult) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CEmeraldMedallionCard::CEmeraldMedallionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Emerald Medallion"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Green, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJetMedallionCard::CJetMedallionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jet Medallion"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Black, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPearlMedallionCard::CPearlMedallionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pearl Medallion"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::White, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRubyMedallionCard::CRubyMedallionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ruby Medallion"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Red, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSapphireMedallionCard::CSapphireMedallionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sapphire Medallion"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Blue, false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIntuitionCard::CIntuitionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Intuition"), CardType::Instant, nID)
{
	counted_ptr<CIntuitionSpell> cpSpell(
		::CreateObject<CIntuitionSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			MinimumValue(3), MaximumValue(3),
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetSearchLibraryData(ZoneId::Library, TRUE, TRUE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRootwaterShamanCard::CRootwaterShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rootwater Shaman"), CardType::Creature, CREATURE_TYPE2(Merfolk, Shaman), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::EnchantCreature, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStalkingStonesCard::CStalkingStonesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Stalking Stones"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,_T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("6"),
				_T("Elemental AG"), 64037));

		cpAbility->SetDoesntEnd();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrindstoneCard::CGrindstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grindstone"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
 	&CGrindstoneCard::OnResolutionCompleted1))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3"),
				FALSE_CARD_COMPARER, TRUE));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());	
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
}
void CGrindstoneCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CZone* pLib = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library);
		CPlayer* pTarget = pAbilityAction->GetAssociatedPlayer();
		CCard* pCard1;
		CCard* pCard2;
		BOOL pBreak = FALSE;
		
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 2, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library,ZoneId::Graveyard,TRUE,MoveType::Others, pTarget);

		for (int i = 0; !pBreak; ++i)
		{ 
			if (pLib->GetSize() > 0 ) pCard1= pLib->GetTopCard();
			if (pLib->GetSize() > 1 ) pCard2= pLib->GetAt(pLib->GetSize()-2);
			else 
			 if (pLib->GetSize() == 0) return;
			 else 
				 pModifier1.ApplyTo(pCard1);

			pModifier.ApplyTo(pTarget);
			
			if (!(((pCard1->GetCardType() & CardType::Black).Any() && (pCard2->GetCardType() & CardType::Black).Any()) ||
				((pCard1->GetCardType() & CardType::Red).Any() && (pCard2->GetCardType() & CardType::Red).Any()) ||
				((pCard1->GetCardType() & CardType::Blue).Any() && (pCard2->GetCardType() & CardType::Blue).Any()) ||
				((pCard1->GetCardType() & CardType::White).Any() && (pCard2->GetCardType() & CardType::White).Any()) ||
				((pCard1->GetCardType() & CardType::Green).Any() && (pCard2->GetCardType() & CardType::Green).Any()) 
				)) return;
		}
	}
}
//____________________________________________________________________________
//
CCursedScrollCard::CCursedScrollCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cursed Scroll"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CCursedScrollSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCursedScrollSpell>>(this,
			_T("3")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKindleCard::CKindleCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Kindle"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKindleCard::BeforeResolution));
}

bool CKindleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CZone* pOppGraveyard = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Kindle")));

	int nDomainCount = 2 + (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppGraveyard->GetCardContainer()));

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
CTortureChamberCard::CTortureChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Torture Chamber"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(PAIN_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTortureChamberCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, false,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(PAIN_COUNTER), SpecialNumber::All);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetExtraActionValueVector(ContextValue(+1));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTortureChamberCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	int nCounters = GetCounterContainer()->GetCounter(PAIN_COUNTER)->GetCount();
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-nCounters));
	return true;
}

//____________________________________________________________________________
//
CEssenceBottleCard::CEssenceBottleCard(CGame* pGame, UINT nID)
    : CInPlaySpellCard(pGame, _T("Essence Bottle"), CardType::Artifact, nID,
        _T("2"), AbilityType::Artifact)
{
    {
        counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
            ::CreateObject<CActivatedAbility<CGenericSpell>>(this,
                _T("3")));

        cpAbility->AddTapCost();
        cpAbility->SetAbilityText(_T("Put an elixir counter on"));
        cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(ELIXIR_COUNTER, +1, false));

        AddAbility(cpAbility.GetPointer());
    }
    {
    counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
            _T(""),
            Life(+0), PreventableType::NotPreventable));

        cpAbility->AddTapCost();
        cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(ELIXIR_COUNTER), SpecialNumber::All);
        cpAbility->SetExtraValueMultiplier(-2);

        AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CMoggConscriptsCard::CMoggConscriptsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Conscripts"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMoggConscriptsCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CMoggConscriptsCard::CanAttack(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainTypeCastedCount(CardType::Creature)>0);
}

//____________________________________________________________________________
//
CPropagandaCard::CPropagandaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Propaganda"), CardType::GlobalEnchantment, nID, 
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CConsAttackExtraManaEnchantment> cpAbility(
		::CreateObject<CConsAttackExtraManaEnchantment>(this,
			new AnyCreatureComparer,
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectOpponentCardsOnly();
	cpAbility->SetAffectOnlyPlayerDeclaration();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMinionOfTheWastesCard::CMinionOfTheWastesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minion of the Wastes"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CMinionOfTheWastesCard::OnSelectionDone))
	, m_nLifePaid(0)
{
	GetCreatureKeyword()->AddTrample(false);
}

void CMinionOfTheWastesCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_nLifePaid = 0;

		if ((GetController()->GetLife() > 0) && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			int n = GET_INTEGER(GetController()->GetLife());

			std::vector<SelectionEntry> entries;
			for (int i = 0; i <= n; ++i)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)i;
			
				entry.strText.Format(_T("Pay %d life"),
						i);

				entries.push_back(entry);
			}
			m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
		}
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CMinionOfTheWastesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			m_nLifePaid = it->dwContext;

			CLifeModifier pModifier = CLifeModifier(Life(-m_nLifePaid), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier.ApplyTo(pSelectionPlayer);

			this->SetPower(Power(m_nLifePaid), true);
			this->SetPermanentPower(Power(m_nLifePaid), true);
			this->SetLife(this, Life(m_nLifePaid));
			this->SetPermanentLife(Life(m_nLifePaid), true);

			return;
		}
}

//____________________________________________________________________________
//
CAltarOfDementiaCard::CAltarOfDementiaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Altar of Dementia"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 0));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetRevealCardsToOthers(true);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAltarOfDementiaCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CAltarOfDementiaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CWindsOfRathCard::CWindsOfRathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Winds of Rath"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetGlobalCardFilter().AddNegateComparer(new EnchantedCardComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShockerCard::CShockerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shocker"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility2, CWhenSelfDamageDealt,
		CWhenSelfDamageDealt::PlayerEventCallback,
		&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDiscardCount(SpecialNumber::All);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//________________________________________________________________________________
//
CSkyshroudCondorCard::CSkyshroudCondorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyshroud Condor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))	
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CSkyshroudCondorCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

BOOL CSkyshroudCondorCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainAntiTypeCastedCount(CardType::_Land) > 0);
}

//____________________________________________________________________________
//
CPhyrexianSplicerCard::CPhyrexianSplicerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Splicer"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpAbility->GetTargeting1()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Transfer flying with"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::FirstStrike,
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpAbility->GetTargeting1()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::FirstStrike, false));
		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Transfer first strike with"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Shadow,
				CreatureKeyword::Shadow, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpAbility->GetTargeting1()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));
		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Transfer shadow with"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Trample,
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpAbility->GetTargeting1()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Trample, false));
		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Transfer trample with"));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CMountedArchersCard::CMountedArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mounted Archers"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChaoticGooCard::CChaoticGooCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chaotic Goo"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChaoticGooCard::OnFlipSelected))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	
	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CChaoticGooCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CChaoticGooCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
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
		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);
		pModifier->ApplyTo(this);
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
		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), +1);
		pModifier->ApplyTo(this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CChaoticGooCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

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
				CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), +1);
				pModifier->ApplyTo(this);
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
				CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CWildWurmCard::CWildWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(4))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWildWurmCard::OnFlipSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWildWurmCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CWildWurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pController);
		pModifier->ApplyTo(this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CWildWurmCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pSelectionPlayer);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CSacredGuideCard::CSacredGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sacred Guide"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this, 
			_T("1") WHITE_MANA_TEXT));

	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSacredGuideCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSacredGuideCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{		
		if (!bSearch)
			break;
		else
		{
			++n;
			if (pLibrary->GetAt(i)->IsColor(CManaPoolBase::Color::White))
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::White, false));

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.SetReorderInformation(true, ZoneId::Exile);
		
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CEscapedShapeshifterCard::CEscapedShapeshifterCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Escaped Shapeshifter"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::FirstStrike, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Trample, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CardKeywordComparer(CardKeyword::ProtectionFromWhite, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CardKeywordComparer(CardKeyword::ProtectionFromBlue, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CardKeywordComparer(CardKeyword::ProtectionFromBlack, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CardKeywordComparer(CardKeyword::ProtectionFromRed, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetConditionFilter().AddComparer(new CardKeywordComparer(CardKeyword::ProtectionFromGreen, false));
		cpAbility->GetConditionFilter().AddNegateComparer(new CardNameComparer(_T("Escaped Shapeshifter")));
		cpAbility->SetConditionValue(1);

		cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodSageCard::CWoodSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wood Sage"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWoodSageCard::OnNameSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWoodSageCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWoodSageCard::BeforeResolution(CAbilityAction* pAction)
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
			if (!pCard->GetCardType().IsToken() && pCard->GetCardType().IsCreature())
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CWoodSageCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 4, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(SpecialNumber::Any), MaximumValue(SpecialNumber::All), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CCorpseDanceCard::CCorpseDanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Corpse Dance"), CardType::Instant, nID)

	, m_BuybackCost(_T("2"))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorpseDanceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

void CCorpseDanceCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CCorpseDanceCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	int nGraveSize = pGraveyard->GetSize();
	bool bFound = false;
	CCreatureCard* pCard;

	for (int i = nGraveSize - 1; i >= 0; --i)
	{
		if (pGraveyard->GetAt(i)->GetCardType().IsCreature())
		{
			pCard = (CCreatureCard*)pGraveyard->GetAt(i);
			bFound = true;
			break;
		}
	}

	if (bFound)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pController);

		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier();
			pModifier2.GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier2.GetModifier().SetOneTurnOnly(TRUE);

		pModifier1.ApplyTo(pCard);
		pModifier2.ApplyTo(pCard);

		CCountedCardContainer pSubjects;

		if (pCard->IsInplay())
			pSubjects.AddCard(pCard, CardPlacement::Top);

		CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
		pModifier3.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CPhyrexianGrimoireCard::CPhyrexianGrimoireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Grimoire"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPhyrexianGrimoireCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
		_T("4"),
		FALSE_CARD_COMPARER, TRUE));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianGrimoireCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianGrimoireCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	if (pGraveyard->GetSize() == 0) return false;
	if (pGraveyard->GetSize() == 1)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pGraveyard->GetAt(0));

		return true;
	}

	CCard* pCard1 = pGraveyard->GetAt(pGraveyard->GetSize() - 1);
	CCard* pCard2 = pGraveyard->GetAt(pGraveyard->GetSize() - 2);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s to exile, %s to hand"), pCard1->GetCardName(TRUE), pCard2->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s to exile, %s to hand"), pCard2->GetCardName(TRUE), pCard1->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pCard1, (DWORD)pCard2, (DWORD)pController);

	return true;
}

void CPhyrexianGrimoireCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard1 = (CCard*)dwContext1;
				CCard* pCard2 = (CCard*)dwContext2;
				CPlayer* pController = (CPlayer*)dwContext3;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard1->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
				pModifier1.ApplyTo(pCard1);
				
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pController);
				pModifier2.ApplyTo(pCard2);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCard* pCard1 = (CCard*)dwContext1;
				CCard* pCard2 = (CCard*)dwContext2;
				CPlayer* pController = (CPlayer*)dwContext3;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard2->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pController);
				pModifier1.ApplyTo(pCard2);
				
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pController);
				pModifier2.ApplyTo(pCard1);

				return;
			}
		}
}

//____________________________________________________________________________
//
CColdStorageCard::CColdStorageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cold Storage"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CColdStorageCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3"),
				new AnyCreatureComparer, false));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CColdStorageCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddSacrificeCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CColdStorageCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CColdStorageCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CColdStorageCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CColdStorageCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CColdStorageCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CColdStorageCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	
	pExiled.AddCard(pTarget, CardPlacement::Top);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CColdStorageCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pBattlefield, pController, MoveType::Others);
	}

	return true;
}

void CColdStorageCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CScrollRackCard::CScrollRackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scroll Rack"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CScrollRackCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
		_T("1")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScrollRackCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CScrollRackCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	pExiled.RemoveAll();

	Process(pController);

	return true;
}

void CScrollRackCard::Process (CPlayer* pController)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop exiling cards"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Exile %s"),
			pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CScrollRackCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops exiling cards"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				Finale(pSelectionPlayer);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s exiles a card"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pSelectionPlayer);
				pExiled.AddCard(pCard, CardPlacement::Top);

				pModifier.ApplyTo(pCard);

				Process(pSelectionPlayer);

				return;
			}
		}
}

void CScrollRackCard::Finale (CPlayer* pController)
{
	int nCount = pExiled.GetSize();

	if (nCount > 0)
	{
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, nCount , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier1.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier1.ApplyTo(pController);

		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new ContainedinComparer(&pExiled));

		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::_ExileFaceDown, nCount, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.AddSelection(MinimumValue(nCount), MaximumValue(nCount), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier2.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CMaddeningImpCard::CMaddeningImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Maddening Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CMaddeningImpCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaddeningImpCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

BOOL CMaddeningImpCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetGame()->GetActivePlayer() == GetController()) return false;

	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE);
}

bool CMaddeningImpCard::BeforeResolution (CAbilityAction* pAction)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Maddening Imp Effect"), 61076, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CMagmasaurCard::CMagmasaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magmasaur"), CardType::Creature, CREATURE_TYPE2(Elemental, Lizard), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(0))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CMagmasaurCard::OnSelected))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 5, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMagmasaurCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMagmasaurCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	if (IsInplay() && (GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Remove a +1/+1 counter from %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Sacrifice %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CMagmasaurCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1);
				pModifier.ApplyTo(this);
				
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier1.ApplyTo(this);

				int nCounters;

				if (IsInplay()) nCounters = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
				else nCounters = GetLastKnownp11Counters();
				
				CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCounters), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				m_CardFilter.AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

				CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCreatureModifier>(pModifier2));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					pModifier3.ApplyTo(GetGame()->GetPlayer(ip));

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					pModifier2->ApplyTo(GetGame()->GetPlayer(ip));

				return;
			}
		}
}

//____________________________________________________________________________
//

CCoffinQueenCard::CCoffinQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coffin Queen"), CardType::Creature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
				::CreateObject<CActivatedAbility<CTargetSpell>>(this,
					_T("2") BLACK_MANA_TEXT,
					new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCoffinQueenCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCoffinQueenCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	if (!pTarget->IsInGraveyard()) return false;

	pTarget->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	if (this->IsInplay())
	{
		CCountedCardContainer pSubjects1;
		CCountedCardContainer pSubjects2;

		if (pTarget->IsInplay())
			pSubjects1.AddCard(pTarget, CardPlacement::Top);

		pSubjects2.AddCard(this, CardPlacement::Top);

		CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Coffin Queen Effect"), 61115, &pSubjects1, &pSubjects2);
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CHandToHandCard::CHandToHandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hand to Hand"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
		PlayerEffectType::HandToHandEffect));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//