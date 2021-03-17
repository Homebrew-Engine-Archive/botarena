#include "stdafx.h"
#include "CardTimeSpiral.h"

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
		DEFINE_CARD(CAcademyRuinsCard);
		DEFINE_CARD(CAEtherflameWallCard);
		DEFINE_CARD(CAEtherWebCard);
		DEFINE_CARD(CAmrouScoutCard);
		DEFINE_CARD(CAmrouSeekersCard);
		DEFINE_CARD(CAncestralVisionCard);
		DEFINE_CARD(CAncientGrudgeCard);
		DEFINE_CARD(CAngelsGraceCard);
		DEFINE_CARD(CAshcoatBearCard);
		DEFINE_CARD(CAspectofMongooseCard);
		DEFINE_CARD(CAssemblyWorkerCard);
		DEFINE_CARD(CBarbedShockerCard);
		DEFINE_CARD(CBasalSliverCard);
		DEFINE_CARD(CBasaltGargoyleCard);
		DEFINE_CARD(CBenalishCavalryCard);
		DEFINE_CARD(CBewilderCard);
		DEFINE_CARD(CBlazingBladeAskariCard);
		DEFINE_CARD(CBogardanRagerCard);
		DEFINE_CARD(CBonesplitterSliverCard);
		DEFINE_CARD(CBrassGnatCard);
		DEFINE_CARD(CBrineElementalCard);
		DEFINE_CARD(CCalciformPoolsCard);
		DEFINE_CARD(CCallToTheNetherworldCard);
		DEFINE_CARD(CCandlesOfLengCard);
		DEFINE_CARD(CCarefulConsiderationCard);
		DEFINE_CARD(CCastleRaptorsCard);
		DEFINE_CARD(CCavalryMasterCard);
		DEFINE_CARD(CCelestialCrusaderCard);
		DEFINE_CARD(CChildrenOfKorlisCard);
		DEFINE_CARD(CChronatogTotemCard);
		DEFINE_CARD(CChronosavantCard);
		DEFINE_CARD(CClockworkHydraCard);
		DEFINE_CARD(CCloudchaserKestrelCard);
		DEFINE_CARD(CCoalStokerCard);
		//DEFINE_CARD(CConflagrateCard);
		DEFINE_CARD(CCorpulentCorpseCard);
		DEFINE_CARD(CCrookclawTransmuterCard);
		DEFINE_CARD(CCurseOfTheCabalCard);
		DEFINE_CARD(CDarkWitheringCard);
		DEFINE_CARD(CDAvenantHealerCard);
		DEFINE_CARD(CDeathsporeThallidCard);
		DEFINE_CARD(CDeepSeaKrakenCard);
		DEFINE_CARD(CDementiaSliverCard);
		DEFINE_CARD(CDemonicCollusionCard);
		DEFINE_CARD(CDivineCongregationCard);
		DEFINE_CARD(CDrainingWhelkCard);
		DEFINE_CARD(CDreadReturnCard);
		DEFINE_CARD(CDreadshipReefCard);
		DEFINE_CARD(CDreamStalkerCard);
		DEFINE_CARD(CDrifterIlDalCard);
		DEFINE_CARD(CDrudgeReaversCard);
		DEFINE_CARD(CDurkwoodBalothCard);
		DEFINE_CARD(CDurkwoodTrackerCard);
		DEFINE_CARD(CDuskriderPeregrineCard);
		DEFINE_CARD(CEmptyTheWarrensCard);
		DEFINE_CARD(CEndrekSahrMasterBreederCard);
		DEFINE_CARD(CErrantDoomsayersCard);
		DEFINE_CARD(CErrantEphemeronCard);
		DEFINE_CARD(CEternitySnareCard);
		DEFINE_CARD(CEvilEyeOfUrborgCard);
		DEFINE_CARD(CFacelessDevourerCard);
		DEFINE_CARD(CFallenIdealCard);
		DEFINE_CARD(CFathomSeerCard);
		DEFINE_CARD(CFeeblenessCard);
		DEFINE_CARD(CFiremawKavuCard);
		DEFINE_CARD(CFirewakeSliverCard);
		DEFINE_CARD(CFlagstonesofTrokairCard);
		DEFINE_CARD(CFlamecoreElementalCard);
		DEFINE_CARD(CFledglingMawcorCard);
		DEFINE_CARD(CFlickeringSpiritCard);
		DEFINE_CARD(CFlowstoneChannelerCard);
		DEFINE_CARD(CFoolsDemiseCard);
		DEFINE_CARD(CForiysianInterceptorCard);
		DEFINE_CARD(CForiysianTotemCard);
		DEFINE_CARD(CFungalReachesCard);
		DEFINE_CARD(CFungusSliverCard);
		DEFINE_CARD(CFurySliverCard);
		DEFINE_CARD(CGauntletOfPowerCard);
		DEFINE_CARD(CGazeOfJusticeCard);
		DEFINE_CARD(CGemhideSliverCard);
		DEFINE_CARD(CGhituFirebreathingCard);
		DEFINE_CARD(CGhostflameSliverCard);
		DEFINE_CARD(CGoblinSkycutterCard);
		DEFINE_CARD(CGorgonRecluseCard);
		DEFINE_CARD(CGrapeshotCard);
		DEFINE_CARD(CGreaterGargadonCard);
		DEFINE_CARD(CGreenseekerCard);
		DEFINE_CARD(CGriffinGuideCard);
		DEFINE_CARD(CGroundRiftCard);
		DEFINE_CARD(CGustcloakCavalierCard);
		DEFINE_CARD(CHarmonicSliverCard);
		DEFINE_CARD(CHauntingHymnCard);
		DEFINE_CARD(CHavenwoodWurmCard);
		DEFINE_CARD(CHerdGnarrCard);
		DEFINE_CARD(CHivestoneCard);
		DEFINE_CARD(CHypergenesisCard);
		DEFINE_CARD(CIbHalfheartGoblinTacticianCard);
		DEFINE_CARD(CIcatianCrierCard);
		DEFINE_CARD(CIgniteMemoriesCard);
		DEFINE_CARD(CIronclawBuzzardiersCard);
		DEFINE_CARD(CIthHighArcanistCard);
		DEFINE_CARD(CIvoryGiantCard);
		DEFINE_CARD(CJayaBallardTaskMageCard);
		DEFINE_CARD(CJeditsDragoonsCard);
		DEFINE_CARD(CKaervekTheMercilessCard);
		DEFINE_CARD(CKeldonHalberdierCard);
		DEFINE_CARD(CKherKeepCard);
		DEFINE_CARD(CKrosanGripCard);
		DEFINE_CARD(CLightningAxeCard);
		DEFINE_CARD(CLimDulTheNecromancerCard);
		DEFINE_CARD(CLivingEndCard);
		DEFINE_CARD(CLooterIlKorCard);
		DEFINE_CARD(CLotusBloomCard);
		DEFINE_CARD(CMagusOfTheCandelabraCard);
		DEFINE_CARD(CMagusOfTheDiskCard);
		DEFINE_CARD(CMagusOfTheJarCard);
		DEFINE_CARD(CMagusOfTheMirrorCard);
		DEFINE_CARD(CMagusoftheScrollCard);
		DEFINE_CARD(CManaSkimmerCard);
		DEFINE_CARD(CMangaraOfCorondorCard);
		DEFINE_CARD(CMightOfOldKrosaCard);
		DEFINE_CARD(CMightSliverCard);
		DEFINE_CARD(CMindlashSliverCard);
		DEFINE_CARD(CMindstabCard);
		DEFINE_CARD(CMishraArtificerProdigyCard);
		DEFINE_CARD(CMoggWarMarshalCard);
		DEFINE_CARD(CMolderCard);
		DEFINE_CARD(CMoltenSlagheapCard);
		DEFINE_CARD(CMomentaryBlinkCard);
		DEFINE_CARD(CMoonlaceCard);
		DEFINE_CARD(CMwonvuliAcidMossCard);
		DEFINE_CARD(CMysticalTeachingsCard);
		DEFINE_CARD(CNantukoShamanCard);
		DEFINE_CARD(CNetherTraitorCard);
		DEFINE_CARD(CNightshadeAssassinCard);
		DEFINE_CARD(CNorinTheWaryCard);
		DEFINE_CARD(COpalineSliverCard);
		DEFINE_CARD(COphidianEyeCard);
		DEFINE_CARD(COrcishCannonadeCard);
		DEFINE_CARD(COutriderEnKorCard);
		DEFINE_CARD(CParadisePlumeCard);
		DEFINE_CARD(CPardicDragonCard);
		DEFINE_CARD(CPendelhavenElderCard);
		DEFINE_CARD(CPentarchPaladinCard);
		DEFINE_CARD(CPenumbraSpiderCard);
		DEFINE_CARD(CPhantomWurmCard);
		DEFINE_CARD(CPhthisisCard);
		DEFINE_CARD(CPhyrexianTotemCard);
		DEFINE_CARD(CPitKeeperCard);
		DEFINE_CARD(CPlagueSliverCard);
		DEFINE_CARD(CPlunderCard);
		DEFINE_CARD(CPrimalForcemageCard);
		DEFINE_CARD(CPrismaticLensCard);
		DEFINE_CARD(CPsionicSliverCard);
		DEFINE_CARD(CPullFromEternityCard);
		DEFINE_CARD(CQuilledSliverCard);
		DEFINE_CARD(CReiterateCard);
		DEFINE_CARD(CRestoreBalanceCard);
		DEFINE_CARD(CReturnToDustCard);
		DEFINE_CARD(CRiftBoltCard);
		DEFINE_CARD(CRiftwingCloudskateCard);
		DEFINE_CARD(CSaffiEriksdotterCard);
		DEFINE_CARD(CSageOfEpityrCard);
		DEFINE_CARD(CSaltcrustedSteppeCard);
		DEFINE_CARD(CSangrophageCard);
		DEFINE_CARD(CSavageThallidCard);
		DEFINE_CARD(CSarpadianEmpiresVolVIICard);
		DEFINE_CARD(CScarwoodTreefolkCard);
		DEFINE_CARD(CScreechingSliverCard);
		DEFINE_CARD(CScrybRangerCard);
		DEFINE_CARD(CSearchforTomorrowCard);
		DEFINE_CARD(CSedgeSliverCard);
		DEFINE_CARD(CSengirNosferatuCard);
		DEFINE_CARD(CShadowSliverCard);
		DEFINE_CARD(CSidewinderSliverCard);
		DEFINE_CARD(CSkitteringMonstrosityCard);
		DEFINE_CARD(CSkulkingKnightCard);
		DEFINE_CARD(CSnapbackCard);
		DEFINE_CARD(CSpectralForceCard);
		DEFINE_CARD(CSpellBurstCard);
		DEFINE_CARD(CSpikeTillerCard);
		DEFINE_CARD(CSpiketailDrakelingCard);
		DEFINE_CARD(CSpinneretSliverCard);
		DEFINE_CARD(CSpiritLoopCard);
		DEFINE_CARD(CSporesowerThallidCard);
		DEFINE_CARD(CSpriteNobleCard);
		DEFINE_CARD(CSproutCard);
		DEFINE_CARD(CSquallLineCard);
		DEFINE_CARD(CStonebrowKrosanHeroCard);
		DEFINE_CARD(CStonewoodInvocationCard);
		DEFINE_CARD(CStormcloudDjinnCard);
		DEFINE_CARD(CStranglingSootCard);
		DEFINE_CARD(CStrengthInNumbersCard);
		DEFINE_CARD(CStrongholdOverseerCard);
		DEFINE_CARD(CSubterraneanShamblerCard);
		DEFINE_CARD(CSuddenDeathCard);
		DEFINE_CARD(CSuddenShockCard);
		DEFINE_CARD(CSulfurousBlastCard);
		DEFINE_CARD(CSwarmyardCard);
		DEFINE_CARD(CTectonicFiendCard);
		DEFINE_CARD(CTeferiMageOfZhalfirCard);
		DEFINE_CARD(CTelekineticSliverCard);
		DEFINE_CARD(CTemporalEddyCard);
		DEFINE_CARD(CTemporalIsolationCard);
		DEFINE_CARD(CThallidGerminatorCard);
		DEFINE_CARD(CThallidShellDwellerCard);
		DEFINE_CARD(CTheloniteHermitCard);
		DEFINE_CARD(CThinkTwiceCard);
		DEFINE_CARD(CThrillOfTheHuntCard);
		DEFINE_CARD(CThunderTotemCard);
		DEFINE_CARD(CTivadarOfThornCard);
		DEFINE_CARD(CTolarianSentinelCard);
		DEFINE_CARD(CTraitorsClutchCard);
		DEFINE_CARD(CTrespasserIlVecCard);
		DEFINE_CARD(CTriskelavusCard);
		DEFINE_CARD(CTrompTheDomainsCard);
		DEFINE_CARD(CTwoHeadedSliverCard);
		DEFINE_CARD(CUndyingRageCard);
		DEFINE_CARD(CUnyaroBeesCard);
		DEFINE_CARD(CUrborgSyphonMageCard);
		DEFINE_CARD(CUrzasFactoryCard);
		DEFINE_CARD(CVampiricSliverCard);
		DEFINE_CARD(CVensersSliverCard);
		DEFINE_CARD(CVerdantEmbraceCard);
		DEFINE_CARD(CViashinoBladescoutCard);
		DEFINE_CARD(CVisceridDeepwalkerCard);
		DEFINE_CARD(CViscidLemuresCard);
		DEFINE_CARD(CVolcanicAwakeningCard);
		DEFINE_CARD(CWalkTheAeonsCard);
		DEFINE_CARD(CWatcherSliverCard);
		DEFINE_CARD(CWeatherseedTotemCard);
		DEFINE_CARD(CWheelofFateCard);
		DEFINE_CARD(CWipeAwayCard);
		DEFINE_CARD(CWordOfSeizingCard);
		DEFINE_CARD(CWormwoodDryadCard);
		DEFINE_CARD(CWurmcallingCard);
		DEFINE_CARD(CYavimayaDryadCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBonesplitterSliverCard::CBonesplitterSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bonesplitter Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+2), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrassGnatCard::CBrassGnatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Brass Gnat"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("1"), Power(1), Life(1))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetAbilityName(_T("untap ability"));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionCost(_T("1"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagusOfTheDiskCard::CMagusOfTheDiskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Disk"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
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
CMightSliverCard::CMightSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Might Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+2), Life(+2), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpinneretSliverCard::CSpinneretSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spinneret Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Reach));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwoHeadedSliverCard::CTwoHeadedSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Two-Headed Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVensersSliverCard::CVensersSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venser's Sliver"), CardType::_ArtifactCreature, CREATURE_TYPE(Sliver), nID,
		_T("5"), Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CWatcherSliverCard::CWatcherSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Watcher Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+2), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncientGrudgeCard::CAncientGrudgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancient Grudge"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CDreadReturnCard::CDreadReturnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dread Return"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T(""), 
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("Creatures")));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGazeOfJusticeCard::CGazeOfJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gaze of Justice"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));

	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->GetCost().AddTapCardCost(3, &m_CardFilter);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("5") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThinkTwiceCard::CThinkTwiceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Think Twice"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT, 1));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT, 1));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThrillOfTheHuntCard::CThrillOfTheHuntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thrill of the Hunt"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+1), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Power(+1), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Green, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CAcademyRuinsCard::CAcademyRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Academy Ruins"), nID, CardType::NonbasicLand | CardType::Legendary)
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
				_T("1") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlagstonesofTrokairCard::CFlagstonesofTrokairCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Flagstones of Trokair"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Plains")));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);
		cpAbility->SetTapped(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//_______________________________________________________________________________
//
CAmrouScoutCard::CAmrouScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amrou Scout"), CardType::Creature, CREATURE_TYPE3(Kithkin, Rebel, Scout), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
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
CAmrouSeekersCard::CAmrouSeekersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amrou Seekers"), CardType::Creature, CREATURE_TYPE2(Kithkin, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("artifact creatures or white creatures")));
}

//____________________________________________________________________________________
//
CAshcoatBearCard::CAshcoatBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashcoat Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//______________________________________________________________________________________
//
CAspectofMongooseCard::CAspectofMongooseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aspect of Mongoose"), CardType::EnchantCreature, nID)
{
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			CardKeyword::Shroud));

	AddSpell(cpSpell.GetPointer());
}
{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
}
}

//_______________________________________________________________________________________
//
CAssemblyWorkerCard::CAssemblyWorkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Assembly-Worker"), CardType::_ArtifactCreature, CREATURE_TYPE(AssemblyWorker), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreatureTypeComparer(CREATURE_TYPE(AssemblyWorker), false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//________________________________________________________________________________________
//
CBarbedShockerCard::CBarbedShockerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Barbed Shocker"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

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
CBasaltGargoyleCard::CBasaltGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Basalt Gargoyle"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							 CWhenSelfInplay::EventCallback,
							 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CBasaltGargoyleCard::CreateTemporaryAbility),
			_T("2") RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CBasaltGargoyleCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBasaltGargoyleCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBasaltGargoyleCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CBasaltGargoyleCard::CreateTemporaryAbility()
{
	return this;
}

void CBasaltGargoyleCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CBewilderCard::CBewilderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bewilder"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			Power(-3), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//___________________________________________________________________________
//
CBogardanRagerCard::CBogardanRagerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bogardan Rager"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(4))
{
		GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//_____________________________________________________________________________
//
CCastleRaptorsCard::CCastleRaptorsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Castle Raptors"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+2)));

	cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudchaserKestrelCard::CCloudchaserKestrelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudchaser Kestrel"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				WHITE_MANA_TEXT,
				new TrueCardComparer));

		cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white permanent"));

		AddAbility(cpAbility.GetPointer());
	}
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
}

//________________________________________________________________________________________________________
//
CDAvenantHealerCard::CDAvenantHealerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("D'Avenant Healer"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Archer), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-1),
		PreventableType::Preventable)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//_____________________________________________________________________________________________________________
//
CDemonicCollusionCard::CDemonicCollusionCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Demonic Collusion"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE)

	, m_CardFilter(_T("No Itself"), _T("No Themselves"), new NegateCardComparer(new SpecificCardComparer(this)))
{
	m_pSearchLibrarySpell->SetRevealCards(FALSE);

	{
		//Buyback cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("cards")),
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->GetCost().AddDiscardCardCost(2, &m_CardFilter);

		cpSpell->SetRevealCards(FALSE);

		cpSpell->SetAbilityText(_T("Buyback. Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//________________________________________________________________________________
//
CDreamStalkerCard::CDreamStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dream Stalker"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//__________________________________________________________________________________
//
CDrudgeReaversCard::CDrudgeReaversCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Drudge Reavers"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1),
		BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//__________________________________________________________________________________
//
CDurkwoodTrackerCard::CDurkwoodTrackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Durkwood Tracker"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetReceiveDamageFromTargetedCreature();

	AddAbility(cpAbility.GetPointer());
}

//_________________________________________________________________________________
//
CErrantDoomsayersCard::CErrantDoomsayersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Errant Doomsayers"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new CreatureToughnessComparer<std::less_equal<int>>(2)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________________
//
CEternitySnareCard::CEternitySnareCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Eternity Snare"), nID,
		_T("5") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//_______________________________________________________________________________________
//
CFeeblenessCard::CFeeblenessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Feebleness"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-2), Life(-1))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//________________________________________________________________________________________
//
CFiremawKavuCard::CFiremawKavuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firemaw Kavu"), CardType::Creature, CREATURE_TYPE(Kavu), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(2))
{
{
typedef
	TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	//cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
}
{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CFiremawKavuCard::CreateTemporaryAbility),
			_T("5") RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CFiremawKavuCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiremawKavuCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFiremawKavuCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CFiremawKavuCard::CreateTemporaryAbility()
{
	return this;
}

void CFiremawKavuCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//_____________________________________________________________________________________________
//
CFlamecoreElementalCard::CFlamecoreElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamecore Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CFlamecoreElementalCard::CreateTemporaryAbility),
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CFlamecoreElementalCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlamecoreElementalCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFlamecoreElementalCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CFlamecoreElementalCard::CreateTemporaryAbility()
{
	return this;
}

void CFlamecoreElementalCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CFlowstoneChannelerCard::CFlowstoneChannelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flowstone Channeler"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Power(+1), Life(-1),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());	
}

//___________________________________________________________________________
//
CMightOfOldKrosaCard::CMightOfOldKrosaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Might of Old Krosa"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMightOfOldKrosaCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMightOfOldKrosaCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValue = 2;

	if (GetGame()->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep && GetGame()->GetActivePlayer() == pAction->GetController())
		nValue = 4;

	CPowerModifier pModifier1 = CPowerModifier(Power(nValue));
	CLifeModifier pModifier2 = CLifeModifier(Life(nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo((CCreatureCard*)pAction->GetAssociatedCard());
	pModifier2.ApplyTo((CCreatureCard*)pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CPlagueSliverCard::CPlagueSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPlagueSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CPlagueSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetLifeModifier().SetSourceCard(pCard);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBasalSliverCard::CBasalSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Basal Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBasalSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CBasalSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(pCard,
			BLACK_MANA_TEXT BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCelestialCrusaderCard::CCelestialCrusaderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Celestial Crusader"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddSplitSecond(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________
//
CEvilEyeOfUrborgCard::CEvilEyeOfUrborgCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Evil Eye of Urborg"), CardType::Creature, CREATURE_TYPE(Eye), nID,
		_T("4") BLACK_MANA_TEXT, Power(6), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, 
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantAttack));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Eye), false)); // Exclude all Eyes
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEvilEyeOfUrborgCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEvilEyeOfUrborgCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CFirewakeSliverCard::CFirewakeSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firewake Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		//"All Sliver creatures"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//"All Slivers"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CFirewakeSliverCard::CreateAbility)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CFirewakeSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			_T("1"),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CForiysianInterceptorCard::CForiysianInterceptorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foriysian Interceptor"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddFlash(FALSE);

	SetMaxBlockingCount(2);
}

//____________________________________________________________________________
//
CFungusSliverCard::CFungusSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fungus Sliver"), CardType::Creature, CREATURE_TYPE2(Fungus, Sliver), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CFungusSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CFungusSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt,
							CWhenDamageDealt::CreatureEventCallback, 
							&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFurySliverCard::CFurySliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fury Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGemhideSliverCard::CGemhideSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gemhide Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGemhideSliverCard::CreateAbility1)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGemhideSliverCard::CreateAbility2)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGemhideSliverCard::CreateAbility3)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGemhideSliverCard::CreateAbility4)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGemhideSliverCard::CreateAbility5)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGemhideSliverCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGemhideSliverCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGemhideSliverCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGemhideSliverCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGemhideSliverCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinSkycutterCard::CGoblinSkycutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Skycutter"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Flying,
			TRUE, PreventableType::Preventable,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreenseekerCard::CGreenseekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greenseeker"), CardType::Creature, CREATURE_TYPE2(Elf, Spellshaper), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHavenwoodWurmCard::CHavenwoodWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Havenwood Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT, Power(5), Life(6))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//___________________________________________________________________________
//
CHerdGnarrCard::CHerdGnarrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Herd Gnarr"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________
//
CIcatianCrierCard::CIcatianCrierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Crier"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			_T("Citizen A"), 2701,
			2));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIronclawBuzzardiersCard::CIronclawBuzzardiersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ironclaw Buzzardiers"), CardType::Creature, CREATURE_TYPE2(Orc, Scout), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("creatures with power less than 2")));
}

//____________________________________________________________________________
//
CJayaBallardTaskMageCard::CJayaBallardTaskMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jaya Ballard, Task Mage"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				RED_MANA_TEXT,
				new CardTypeComparer(CardType::Blue, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-6),	// life delta
				new AnyCreatureComparer, 
				TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJeditsDragoonsCard::CJeditsDragoonsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jedit's Dragoons"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMagusOfTheCandelabraCard::CMagusOfTheCandelabraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Candelabra"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,	// Tap, Untap
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMagusOfTheMirrorCard::CMagusOfTheMirrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Mirror"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(2))
{
	counted_ptr<CActivatedAbility<CExchangeLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CExchangeLifeSpell>>(this,
			_T(""),
			32767));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggWarMarshalCard::CMoggWarMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg War Marshal"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin I"), 62020, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin I"), 62020, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							 CWhenSelfInplay::EventCallback,
							 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CMoggWarMarshalCard::CreateTemporaryAbility),
			_T("1") RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CMoggWarMarshalCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoggWarMarshalCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMoggWarMarshalCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CMoggWarMarshalCard::CreateTemporaryAbility()
{
	return this;
}

void CMoggWarMarshalCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CPendelhavenElderCard::CPendelhavenElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pendelhaven Elder"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T(""),
			Power(+1), Life(+2),
			new CreaturePowerComparer<std::equal_to<int>>(1)));
	
	cpAbility->SetToActivatedAbility();

	cpAbility->GetGlobalCardFilter().AddComparer(new CreatureLifeComparer<std::equal_to<int>>(1));

	cpAbility->AddTapCost();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPenumbraSpiderCard::CPenumbraSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Penumbra Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spider A"), 2807, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPsionicSliverCard::CPsionicSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Psionic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPsionicSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CPsionicSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(new CLifeModifier(Life(-3), pCard, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuilledSliverCard::CQuilledSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quilled Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CQuilledSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CQuilledSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AttackingBlockingCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSageOfEpityrCard::CSageOfEpityrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sage of Epityr"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
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
CSangrophageCard::CSangrophageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sangrophage"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSangrophageCard::OnPaymentSelected))
{ 
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSangrophageCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSangrophageCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	if ((pController->GetLife() > Life(1)) && (!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Pay 2 life"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Tap %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CSangrophageCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s pays 2 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s taps %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				if (IsInplay())
				{
					CCardOrientationModifier pModifier = CCardOrientationModifier(TRUE);
					pModifier.ApplyTo(this);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CScarwoodTreefolkCard::CScarwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(5))
{
	SetIntoPlayTapped();
}

//___________________________________________________________________________
//
CScreechingSliverCard::CScreechingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Screeching Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CScreechingSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CScreechingSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(pCard,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSedgeSliverCard::CSedgeSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sedge Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//"All Slivers"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSedgeSliverCard::CreateAbility1)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//"All Sliver creatures"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSedgeSliverCard::CreateAbility2)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CSedgeSliverCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			BLACK_MANA_TEXT)); // regeneration cost

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSedgeSliverCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkitteringMonstrosityCard::CSkitteringMonstrosityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skittering Monstrosity"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiketailDrakelingCard::CSpiketailDrakelingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spiketail Drakeling"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpriteNobleCard::CSpriteNobleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sprite Noble"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				Power(+0), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //Not this
		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetListenToKeyword();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T(""),
				Power(+1), Life(+0),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false)));

		cpAbility->SetExceptParent(); //Not this
		//cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //Not this

		cpAbility->AddTapCost();

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStormcloudDjinnCard::CStormcloudDjinnCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Stormcloud Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3),
		RED_MANA_TEXT RED_MANA_TEXT, Power(+2), Life(+0))
{
	m_pPumpAbility->GetResolutionModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CSubterraneanShamblerCard::CSubterraneanShamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Subterranean Shambler"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CSubterraneanShamblerCard::CreateTemporaryAbility),
			_T("3") RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CSubterraneanShamblerCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSubterraneanShamblerCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSubterraneanShamblerCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CSubterraneanShamblerCard::CreateTemporaryAbility()
{
	return this;
}

void CSubterraneanShamblerCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CTectonicFiendCard::CTectonicFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tectonic Fiend"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CTectonicFiendCard::CreateTemporaryAbility),
			_T("4") RED_MANA_TEXT RED_MANA_TEXT,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CTectonicFiendCard::PreRemoveAbilityCallback));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTectonicFiendCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTectonicFiendCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
										CNode* pToNode) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CTectonicFiendCard::CreateTemporaryAbility()
{
	return this;
}

void CTectonicFiendCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CTelekineticSliverCard::CTelekineticSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Telekinetic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CTelekineticSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CTelekineticSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(pCard,
			_T(""),
			TRUE, FALSE,
			new TrueCardComparer));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTivadarOfThornCard::CTivadarOfThornCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Tivadar of Thorn"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTolarianSentinelCard::CTolarianSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tolarian Sentinel"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnyaroBeesCard::CUnyaroBeesCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Unyaro Bees"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(1),
		GREEN_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("3") GREEN_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUrborgSyphonMageCard::CUrborgSyphonMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urborg Syphon-Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") BLACK_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrborgSyphonMageCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	AddAbility(cpAbility.GetPointer());
}

bool CUrborgSyphonMageCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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

	return true;
}

//____________________________________________________________________________
//
CVampiricSliverCard::CVampiricSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampiric Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CVampiricSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CVampiricSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashinoBladescoutCard::CViashinoBladescoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Bladescout"), CardType::Creature, CREATURE_TYPE2(Viashino, Scout), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CViscidLemuresCard::CViscidLemuresCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Viscid Lemures"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3),
		_T("0"), Power(-1), Life(+0), CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CWormwoodDryadCard::CWormwoodDryadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormwood Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Forestwalk));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(
			new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Swampwalk));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(
			new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKherKeepCard::CKherKeepCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kher Keep"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1") RED_MANA_TEXT,
				_T("Kobolds of Kher Keep"), 2808, 1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSwarmyardCard::CSwarmyardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Swarmyard"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Insect) | CREATURE_TYPE(Rat) | CREATURE_TYPE(Spider) | CREATURE_TYPE(Squirrel), false)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUrzasFactoryCard::CUrzasFactoryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urza's Factory"), nID, CardType::_UrzasLand)
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
				_T("7"),
				_T("Assembly-Worker A"), 2728,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CForiysianTotemCard::CForiysianTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Foriysian Totem"), CardType::Artifact, nID,
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
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") RED_MANA_TEXT,
				_T("Giant AA"), 64044));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrismaticLensCard::CPrismaticLensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prismatic Lens"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());

	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThunderTotemCard::CThunderTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thunder Totem"), CardType::Artifact, nID,
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
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Spirit AA"), 64068));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGhituFirebreathingCard::CGhituFirebreathingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghitu Firebreathing"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

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
				_T("1") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGhituFirebreathingCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CGhituFirebreathingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
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
COphidianEyeCard::COphidianEyeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ophidian Eye"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("2") BLUE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&COphidianEyeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> COphidianEyeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiritLoopCard::CSpiritLoopCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spirit Loop"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") WHITE_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CSpiritLoopCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CSpiritLoopCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritLoopCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSpiritLoopCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CUndyingRageCard::CUndyingRageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Undying Rage"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::CantBlock)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanGripCard::CKrosanGripCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Krosan Grip"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CLightningAxeCard::CLightningAxeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lightning Axe"), CardType::Instant, nID)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-5), PreventableType::Preventable));

		cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("5") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-5), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
COrcishCannonadeCard::COrcishCannonadeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Orcish Cannonade"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CSnapbackCard::CSnapbackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Snapback"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

		//Alternative cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSnapbackCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSnapbackCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSpellBurstCard::CSpellBurstCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Burst"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_BuybackCost(_T("3"))
{
	m_pCounterSpell->SetTargetOnlySpellsWithEqualCost();
	m_pCounterSpell->GetCost().AddOptionalManaCost(m_BuybackCost);
}

void CSpellBurstCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
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
CSproutCard::CSproutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sprout"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			_T("Saproling H"), 2923,
			1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSquallLineCard::CSquallLineCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Squall Line"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CStonewoodInvocationCard::CStonewoodInvocationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Stonewood Invocation"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT,
		Power(+5), Life(+5),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CStranglingSootCard::CStranglingSootCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strangling Soot"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				new CreatureToughnessComparer<std::less_equal<int>>(3),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("5") RED_MANA_TEXT,
				new CreatureToughnessComparer<std::less_equal<int>>(3),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Black, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CSuddenDeathCard::CSuddenDeathCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sudden Death"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(-4), Life(-4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CSuddenShockCard::CSuddenShockCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Sudden Shock"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CWipeAwayCard::CWipeAwayCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wipe Away"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CWordOfSeizingCard::CWordOfSeizingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Word of Seizing"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CWordOfSeizingCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddSplitSecond(FALSE);

	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new TrueCardComparer, 
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2); 

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CWordOfSeizingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	if (pTarget->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
		pModifier1.ApplyTo((CCreatureCard*)pTarget);
	}
	else
	{
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::CardHaste, TRUE);
		pModifier2.ApplyTo(pTarget);
	}

	CCardOrientationModifier pModifier3 = CCardOrientationModifier(FALSE);

	pModifier3.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CMwonvuliAcidMossCard::CMwonvuliAcidMossCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mwonvuli Acid-Moss"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMwonvuliAcidMossCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMwonvuliAcidMossCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, TRUE);

	if (bResult) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CTemporalEddyCard::CTemporalEddyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Temporal Eddy"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CTrompTheDomainsCard::CTrompTheDomainsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tromp the Domains"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTrompTheDomainsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTrompTheDomainsCard::BeforeResolution(CAbilityAction* pAction) const
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
			CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(nDomainCount), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(nDomainCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			return true;
		}

	return true;
}

//____________________________________________________________________________
//
CDeathsporeThallidCard::CDeathsporeThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathspore Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSavageThallidCard::CSavageThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savage Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(2))
	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Fungus), false)));

			cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThallidGerminatorCard::CThallidGerminatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thallid Germinator"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Saproling"), _T("Saprolings"), new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("0"),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThallidShellDwellerCard::CThallidShellDwellerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thallid Shell-Dweller"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(SPORE_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923, 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPitKeeperCard::CPitKeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pit Keeper"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPitKeeperCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPitKeeperCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CPitKeeperCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
				 										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 4)
			return true;
		}
	}

	return false;
}

bool CPitKeeperCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 4)
			return true;
		}
	}

	return false;
}

//____________________________________________________________________________
//
CPrimalForcemageCard::CPrimalForcemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primal Forcemage"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalForcemageCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CPrimalForcemageCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

//____________________________________________________________________________
//
CSengirNosferatuCard::CSengirNosferatuCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sengir Nosferatu"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			_T("Bat B"), 2838,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddExileCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStonebrowKrosanHeroCard::CStonebrowKrosanHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonebrow, Krosan Hero"), CardType::_LegendaryCreature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		//Not supported:
		//cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		//cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Trample, false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStonebrowKrosanHeroCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStonebrowKrosanHeroCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	if (!pCreature->GetCreatureKeyword()->Trample()) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CTriskelavusCard::CTriskelavusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Triskelavus"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("7"), Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Triskelavite"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWalkTheAeonsCard::CWalkTheAeonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Walk the Aeons"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWalkTheAeonsCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Buyback cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("Islands"))); // sacrifice cards Buyback cost

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

void CWalkTheAeonsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();	

	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);	
	
	if (bResult) pmodifier.ApplyTo(target);  // You can apply it two times if you want to add two turns
	//pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CDrainingWhelkCard::CDrainingWhelkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Draining Whelk"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CDrainingWhelkCard::OnResolutionCompleted1))
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

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CDrainingWhelkCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCMC = pAbilityAction->GetAssociatedCard()->GetConvertedManaCost();
	
	CCardCounterModifier modifier(_T("+1/+1"), +nCMC);
	modifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CAEtherflameWallCard::CAEtherflameWallCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Ætherflame Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT, Power(0), Life(4),
		RED_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddShadowReach(FALSE);
}

//____________________________________________________________________________
//
CDrifterIlDalCard::CDrifterIlDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drifter il-Dal"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	AddUpkeepCost(BLUE_MANA_TEXT);
}

//____________________________________________________________________________
//
CFacelessDevourerCard::CFacelessDevourerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faceless Devourer"), CardType::Creature, CREATURE_TYPE2(Nightmare, Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFacelessDevourerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFacelessDevourerCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFacelessDevourerCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFacelessDevourerCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFacelessDevourerCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFacelessDevourerCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFacelessDevourerCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CFacelessDevourerCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CFacelessDevourerCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CFacelessDevourerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CFacelessDevourerCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
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

void CFacelessDevourerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CLooterIlKorCard::CLooterIlKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Looter il-Kor"), CardType::Creature, CREATURE_TYPE2(Kor, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShadowSliverCard::CShadowSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shadow Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Shadow));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrespasserIlVecCard::CTrespasserIlVecCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Trespasser il-Vec"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Shadow)
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CAEtherWebCard::CAEtherWebCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Æther Web"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Reach | CreatureKeyword::ShadowReach)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CTemporalIsolationCard::CTemporalIsolationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Temporal Isolation"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Shadow | CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CTraitorsClutchCard::CTraitorsClutchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Traitor's Clutch"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Shadow);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Shadow);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+1)));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CScrybRangerCard::CScrybRangerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scryb Ranger"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);

		cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("Forests")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVerdantEmbraceCard::CVerdantEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Verdant Embrace"), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+3))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CVerdantEmbraceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CVerdantEmbraceCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling H"), 2923, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNorinTheWaryCard::CNorinTheWaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Norin the Wary"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		RED_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNorinTheWaryCard::OnResolutionCompleted1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

void CNorinTheWaryCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!IsInplay()) return;

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAbilityAction->GetController());
	pModifier1.ApplyTo(this);

	CCountedCardContainer pSubjects;
	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CSporesowerThallidCard::CSporesowerThallidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sporesower Thallid"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Fungus), false));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(SPORE_COUNTER, +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Saproling H"), 2923,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(SPORE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpectralForceCard::CSpectralForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Force"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSpectralForceCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpectralForceCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpectralForceCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												AttackSubject attacked) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CSpectralForceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("black cards"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CBenalishCavalryCard::CBenalishCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBenalishCavalryCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBenalishCavalryCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CBlazingBladeAskariCard::CBlazingBladeAskariCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blazing Blade Askari"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlazingBladeAskariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("2"),
				new SpecificCardComparer(this)));

		cpAbility->AddCardTypeToSelection(CardType::Null, CardType::_ColorMask, TRUE, _T("colorless permanent"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlazingBladeAskariCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CCavalryMasterCard::CCavalryMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cavalry Master"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCavalryMasterCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flanking, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CCavalryMasterCard::CreateAbility)));
		cpAbility->SetListenToKeyword();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCavalryMasterCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

counted_ptr<CAbility> CCavalryMasterCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
		CWhenSelfAttackedBlocked::BlockEventCallback, 
		&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCavalryMasterCard::SetTriggerContext2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityText(_T("Flanking ability (Cavalry Master)"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CCavalryMasterCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
COutriderEnKorCard::COutriderEnKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Outrider en-Kor"), CardType::Creature, CREATURE_TYPE3(Kor, Rebel, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COutriderEnKorCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
				_T("0"),
				new AnyCreatureComparer, FALSE,
				SourceColor::Null, TRUE));

		cpAbility->SetRedirectValue(Life(1));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool COutriderEnKorCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSidewinderSliverCard::CSidewinderSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sidewinder Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSidewinderSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSidewinderSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
		CWhenSelfAttackedBlocked::BlockEventCallback, 
		&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSidewinderSliverCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityText(_T("Flanking ability (Sidewinder Sliver)"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CSidewinderSliverCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CSkulkingKnightCard::CSkulkingKnightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skulking Knight"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkulkingKnightCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
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

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkulkingKnightCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CGhostflameSliverCard::CGhostflameSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghostflame Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),
			CardType::Null, CardType::_ColorMask));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIbHalfheartGoblinTacticianCard::CIbHalfheartGoblinTacticianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ib Halfheart, Goblin Tactician"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Advisor), nID,
	_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockedEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		//cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIbHalfheartGoblinTacticianCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIbHalfheartGoblinTacticianCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Goblin I"), 62020,
				2));

		cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Mountains")));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIbHalfheartGoblinTacticianCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
	CCreatureCard* pCreature) const
{
	CCardFilter tempFilter;
	tempFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	tempFilter.AddNegateComparer(new SpecificCardComparer((CCard*)this));

	if (tempFilter.IsCardIncluded(pCreature))
	{
		triggerContext.m_pCard = pCreature;
		return true;
	}
	else
		return false;
}

bool CIbHalfheartGoblinTacticianCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (triggerContext.m_pCard->GetZoneId() == ZoneId::Battlefield)
	{
		CCardFilter tempFilter;
		tempFilter.SetComparer(new BlockingThisCreatureComparer((CCreatureCard*)triggerContext.m_pCard));

		CLifeModifier pModifier = CLifeModifier(Life(-4), triggerContext.m_pCard, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		CCountedCardContainer pCreatures;
		if (tempFilter.GetIncluded(*m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield), pCreatures))					
		{
			for (int i = 0; i < pCreatures.GetSize(); ++i)
				{
				pModifier.ApplyTo((CCreatureCard*)pCreatures.GetAt(i));
				}
		}

	}
	else
		return false;
	

	return true;
}

//____________________________________________________________________________
//
CPhantomWurmCard::CPhantomWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Wurm"), CardType::Creature, CREATURE_TYPE2(Wurm, Spirit), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomWurmCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomWurmCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomWurmCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomWurmCard::BeforeResolution(CPhantomWurmCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CChronosavantCard::CChronosavantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chronosavant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") WHITE_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CChronosavantCard::OnResolutionCompleted))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") WHITE_MANA_TEXT,
			ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->SetGraveyardOnly();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));//To tap this card on resolution.

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CChronosavantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayerEffectModifier pModifier = CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);	

	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CNetherTraitorCard::CNetherTraitorCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Nether Traitor"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{		
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->SetResolutionCost(BLACK_MANA_TEXT);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNetherTraitorCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNetherTraitorCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNetherTraitorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CNetherTraitorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
COpalineSliverCard::COpalineSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Opaline Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&COpalineSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> COpalineSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COpalineSliverCard::SetTriggerContext));
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool COpalineSliverCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	return (GetController() != byPlayer && GetGame()->GetStack().GetTopAction()->IsSpell());
}

//____________________________________________________________________________
//
CCrookclawTransmuterCard::CCrookclawTransmuterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crookclaw Transmuter"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::SwitchedPT);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHarmonicSliverCard::CHarmonicSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harmonic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CHarmonicSliverCard::CreateAbility)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Stack | ZoneId::Exile | ZoneId::_Tokens);

		AddAbility(cpAbility.GetPointer());
	}
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
}

counted_ptr<CAbility> CHarmonicSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetAbilityName(_T("Battlefield ability"));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrengthInNumbersCard::CStrengthInNumbersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strength in Numbers"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CStrengthInNumbersCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CStrengthInNumbersCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AttackingCreatureComparer);

	int nDomainCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));

	CPowerModifier pModifier = CPowerModifier(Power(+nDomainCount));
	CLifeModifier pModifier1 = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);

	if (bResult)
	{
		pModifier.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
		pModifier1.ApplyTo((CCreatureCard*)pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CMomentaryBlinkCard::CMomentaryBlinkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Momentary Blink"), CardType::Instant, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMomentaryBlinkCard::OnResolutionCompleted1))
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.
	}
}

void CMomentaryBlinkCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
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

//____________________________________________________________________________
//
CMoonlaceCard::CMoonlaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moonlace"), CardType::Instant, nID)
{
	{
		//target spell
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);

		cpSpell->AddCardTypeToSelection(CardType::Null, CardType::_ColorMask, FALSE, _T("colorless spell"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
			::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardTypeToSelection(CardType::Null, CardType::_ColorMask, FALSE, _T("colorless permanent"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CChildrenOfKorlisCard::CChildrenOfKorlisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Children of Korlis"), CardType::Creature, CREATURE_TYPE3(Human, Rebel, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+0), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChildrenOfKorlisCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CChildrenOfKorlisCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nLifeLoss = GET_INTEGER(pAction->GetController()->GetTotalLifeLossTakenThisTurn());

	ContextValue context(pAction->GetValue());
	context.nValue1 = nLifeLoss;
	pAction->SetValue(context);

	return true;
}

//____________________________________________________________________________
//
CEndrekSahrMasterBreederCard::CEndrekSahrMasterBreederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Endrek Sahr, Master Breeder"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Thrull), false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Thrull B"), 2885, 0);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndrekSahrMasterBreederCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndrekSahrMasterBreederCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndrekSahrMasterBreederCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEndrekSahrMasterBreederCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										CCard* pCard) const
{
	triggerContext.nValue1 = pCard->GetConvertedManaCost();
	return true;
}

bool CEndrekSahrMasterBreederCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 6)
		return true;

	return false;
}

bool CEndrekSahrMasterBreederCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 6)
		return true;

	return false;
}

//____________________________________________________________________________
//
CFlickeringSpiritCard::CFlickeringSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flickering Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFlickeringSpiritCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("3") WHITE_MANA_TEXT,
			new SpecificCardComparer(this),
			ZoneId::Exile, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CFlickeringSpiritCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = (CCard*)this;
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
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

//____________________________________________________________________________
//
CManaSkimmerCard::CManaSkimmerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mana Skimmer"), CardType::Creature, CREATURE_TYPE(Leech), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CManaSkimmerCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfDamageDealt,
									CWhenSelfDamageDealt::PlayerEventCallback, 
									&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfDamageDealt,
									CWhenSelfDamageDealt::PlayerEventCallback, 
									&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		
		AddAbility(cpAbility.GetPointer());
	}
}

void CManaSkimmerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();

	CCardKeywordModifier pModifier = CCardKeywordModifier();
		pModifier.GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier.GetModifier().SetOneTurnOnly(FALSE);

	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CMindlashSliverCard::CMindlashSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindlash Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMindlashSliverCard::OnResolutionCompleted))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CMindlashSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMindlashSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pCard,
			_T("1"),
			Life(+0), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityText(_T("Each player discards a card. Activates"));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CMindlashSliverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CFallenIdealCard::CFallenIdealCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Fallen Ideal"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFallenIdealCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CFallenIdealCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			_T(""),
			Power(+2), Life(+1)));
	ATLASSERT(cpAbility);
	
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChronatogTotemCard::CChronatogTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chronatog Totem"), CardType::Artifact, nID,
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
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				_T("Atog AA"), 64014));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
				_T(""),
				PlayerEffectType::TimeWalk, FALSE, 1));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CChronatogTotemCard::CanPlay)));
			cpAbility->Add(cpTrait1.GetPointer());

		cpAbility->SetAffectOpponentsOnly();

		cpAbility->SetMaxTurnUsageCount(1);

		cpAbility->SetAbilityText(_T("This creature gets +3/+3 until end of turn. You skip your next turn. Activates"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChronatogTotemCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CChronatogTotemCard::CanPlay(BOOL bIncludeTricks)
{
	CCard* Alter = this->GetIsAlsoA();

	return (Alter && Alter->GetCardType().IsCreature());
}

bool CChronatogTotemCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* Alter = this->GetIsAlsoA();

	if (Alter && Alter->GetCardType().IsCreature())
	{
		CCreatureCard* Alter2 = (CCreatureCard*)Alter;
		CPowerModifier pModifier1 = CPowerModifier(Power(+3));
		CLifeModifier pModifier2 = CLifeModifier(Life(+3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(Alter2);
		pModifier2.ApplyTo(Alter2);
	}

	return true;
}
//____________________________________________________________________________
//
CPhyrexianTotemCard::CPhyrexianTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Totem"), CardType::Artifact, nID,
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
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2") BLACK_MANA_TEXT,
				_T("Horror AA"), 64027));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhyrexianTotemCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CPhyrexianTotemCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(GET_INTEGER(-damage.m_nLifeDelta), GET_INTEGER(-damage.m_nLifeDelta), TRUE);
	return (pToCreature->GetIsAlsoOf() == this);
}


//____________________________________________________________________________
//
CCarefulConsiderationCard::CCarefulConsiderationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Careful Consideration"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CCarefulConsiderationCard::OnResolutionCompleted))
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, 4));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCarefulConsiderationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nDiscard;
	if (GetGame()->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep && GetGame()->GetActivePlayer() == pAbilityAction->GetController())
		nDiscard = 2;
	else
		nDiscard = 3;

	CTargetDrawCardSpell* pSpell = dynamic_cast<CTargetDrawCardSpell*>(pAbilityAction->GetAbility());
	pSpell->SetDiscard(nDiscard, false, MoveType::Discard);

	return;
}

//____________________________________________________________________________
//
CHauntingHymnCard::CHauntingHymnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Haunting Hymn"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, true, true,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHauntingHymnCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHauntingHymnCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetGame()->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep && GetGame()->GetActivePlayer() == pAction->GetController())
	{
		ContextValue context(pAction->GetValue());
		context.nValue1 = 4;
		pAction->SetValue(context);
	}

	return true;
}

//____________________________________________________________________________
//
CMysticalTeachingsCard::CMysticalTeachingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mystical Teachings"), CardType::Instant, nID)
{
	m_CardFilter.SetFilterName(_T("an instant card or a card with flash"), _T("instant cards or cards with flash"));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant, false));
	m_CardFilter.AddChildFilter(new CCardFilter(new CardKeywordComparer(CardKeyword::Flash, false)));

	{
		//Regular mana cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CReturnToDustCard::CReturnToDustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Return to Dust"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CReturnToDustCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(1, 2);
		cpSpell->SetUseInSpecificNode(NodeId::MainPhaseStep, FALSE, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CReturnToDustCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetGame()->GetActivePlayer() != GetController() || GetGame()->GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep);
}

//____________________________________________________________________________
//
CAngelsGraceCard::CAngelsGraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Angel's Grace"), CardType::Instant, nID)
{
	GetCardKeyword()->AddSplitSecond(FALSE);

	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			PlayerEffectType::Worship, TRUE, 1, TRUE));

	cpSpell->SetAffectControllerOnly();
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CPlayerEffectModifier(PlayerEffectType::CantLoseGame));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CScheduledPlayerModifier(
			GetGame(), new CPlayerEffectModifier(PlayerEffectType::CantLoseGame), TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater));


	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCoalStokerCard::CCoalStokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coal Stoker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCoalStokerCard::OnZoneChanged))
	, m_bHandStack(false)
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoalStokerCard::SetTriggerContext));
			
	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CCoalStokerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (pFromZone->GetPlayer() == pByPlayer && pFromZone->GetZoneId() == ZoneId::Stack &&
			moveType == MoveType::Cast && m_bHandStack);
}

void CCoalStokerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;
	if (pToZone->GetZoneId() != ZoneId::Stack) return;

	if (pFromZone->GetZoneId() == ZoneId::Hand && moveType == MoveType::Cast)
		m_bHandStack = true;
	else
		m_bHandStack = false;
}

//____________________________________________________________________________
//
CEmptyTheWarrensCard::CEmptyTheWarrensCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Empty the Warrens"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				_T("Goblin I"), 62020,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmptyTheWarrensCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmptyTheWarrensCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CEmptyTheWarrensCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CEmptyTheWarrensCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CEmptyTheWarrensCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CEmptyTheWarrensCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CGrapeshotCard::CGrapeshotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grapeshot"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGrapeshotCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrapeshotCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrapeshotCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CGrapeshotCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGrapeshotCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CGrapeshotCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGroundRiftCard::CGroundRiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ground Rift"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGroundRiftCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGroundRiftCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGroundRiftCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CGroundRiftCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CGroundRiftCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CGroundRiftCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVolcanicAwakeningCard::CVolcanicAwakeningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volcanic Awakening"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVolcanicAwakeningCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVolcanicAwakeningCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVolcanicAwakeningCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CVolcanicAwakeningCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CVolcanicAwakeningCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CVolcanicAwakeningCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTeferiMageOfZhalfirCard::CTeferiMageOfZhalfirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teferi, Mage of Zhalfir"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TeferiEffect));

		cpAbility->SetAffectOpponentsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardOwnerComparer(this));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSulfurousBlastCard::CSulfurousBlastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sulfurous Blast"), CardType::Instant, nID)
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			Life(-2),	// life delta
			new AnyCreatureComparer, 
			TRUE, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSulfurousBlastCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSulfurousBlastCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetGame()->GetActivePlayer() == GetController() && GetGame()->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep)
	{
        ContextValue Context(pAction->GetValue());
		Context.nValue1 = -3;
		pAction->SetValue(Context);	
	}

	return true;
}

//____________________________________________________________________________
//
CMagusoftheScrollCard::CMagusoftheScrollCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Scroll"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCursedScrollSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCursedScrollSpell>>(this,
			_T("3")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLotusBloomCard::CLotusBloomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lotus Bloom"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CLotusBloomCard::CanPlay)));
				this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());

	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, _T(""), 3));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
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
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CLotusBloomCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CLotusBloomCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CLotusBloomCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CLotusBloomCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLotusBloomCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CLotusBloomCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CLotusBloomCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CLotusBloomCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

BOOL CLotusBloomCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSuspendCard::CSuspendCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,									
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCard(pGame, strCardName, cardType, uID)
{	
	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
	}
	
		{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

bool CSuspendCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

//____________________________________________________________________________
//
CCurseOfTheCabalCard::CCurseOfTheCabalCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Curse of the Cabal"), CardType::Sorcery, nID, _T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 2)
	, m_CardFilter1(_T("a card"), _T("cards"), new TrueCardComparer)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData((m_CardFlagModifier1.GetModifier().GetAdditionData()));

	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("9") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-0), PreventableType::NotPreventable));

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCurseOfTheCabalCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
 
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCurseOfTheCabalCard::SetTriggerContext4));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCurseOfTheCabalCard::BeforeResolution4));

		cpAbility->SetAbilityName(_T("sacrifice ability"));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(TIME_COUNTER, +2, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardFlagModifier(m_CardFlagModifier2));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCurseOfTheCabalCard::SetTriggerContext3));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
}

bool CCurseOfTheCabalCard::SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CCurseOfTheCabalCard::BeforeResolution4(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CCurseOfTheCabalCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetAssociatedPlayer() == GetController())
	{
		m_CardFlagModifier1.ApplyTo((CCard*)this);
	}

	return true;
}

bool CCurseOfTheCabalCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) != m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
		m_pTriggeredAbility1->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		CZone* pBat = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
		int n = 0;

		n =  (int)floor((float)m_CardFilter1.CountIncluded(pBat->GetCardContainer()) / 2.0);	

		m_pTriggeredAbility1->GetGatherer().SetSubjectCount(
			n, // minimum
			n, // maximum
			TRUE);
	}
	else
	{
		m_pTriggeredAbility1->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);	
		int n = 0;

		n =  (int)floor((float)m_CardFilter1.CountIncluded(pBat->GetCardContainer()) / 2.0);	

		m_pTriggeredAbility1->GetGatherer().SetSubjectCount(
			n, // minimum
			n, // maximum
			TRUE);
	}

	return true;
}

//____________________________________________________________________________
//
CRiftBoltCard::CRiftBoltCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Rift Bolt"), CardType::Sorcery, nID, RED_MANA_TEXT, 1)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-3), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSuspendCreatureCard::CSuspendCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR suspendstrCostText,
									 int suspendNumber)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);	

	{
		counted_ptr<CSuspendAbility> cpAbility(
			::CreateObject<CSuspendAbility>(this, suspendstrCostText, suspendNumber));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
	}
	
	{ // Removes 'cast off suspend' flag when leaving the stack.
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_AllZones));

		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Gains haste if cast off suspend.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{ // Removes haste on leaving the battlefield or changing control.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a time counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{ // When the last time counter is removed, cast this.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSuspendCreatureCard::SetTriggerContextS2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSuspendCreatureCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetCardFlag()->HasAbilityFlag(0) && moveType == MoveType::Cast);
}

bool CSuspendCreatureCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CSuspendCreatureCard::SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	if ((CString)name != TIME_COUNTER) return false;
	if (pFromCard != this) return false;
	if (!old) return false;
	if (n_value) return false;
	
	return true;
	//return (pFromCard == this) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
}

bool CSuspendCreatureCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

bool CSuspendCreatureCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	else m_CardFlagModifier1.ApplyTo(this);
	return true;
}

bool CSuspendCreatureCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return (pFromCard == this) && (n_value < old) && ((CString)name == TIME_COUNTER);
}

//____________________________________________________________________________
//
CDurkwoodBalothCard::CDurkwoodBalothCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Durkwood Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5), GREEN_MANA_TEXT, 5)
{
	
}

//____________________________________________________________________________
//
CAncestralVisionCard::CAncestralVisionCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Ancestral Vision"), CardType::Sorcery, nID, BLUE_MANA_TEXT, 4)
{
	{	
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
				_T("0"), 3));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CAncestralVisionCard::CanPlay)));
		
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

BOOL CAncestralVisionCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CCorpulentCorpseCard::CCorpulentCorpseCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Corpulent Corpse"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3), BLACK_MANA_TEXT, 5)
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CDeepSeaKrakenCard::CDeepSeaKrakenCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Deep-Sea Kraken"), CardType::Creature, CREATURE_TYPE(Kraken), nID,
		_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6), _T("2") BLUE_MANA_TEXT, 9)
{
	GetCreatureKeyword()->AddUnblockable(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeepSeaKrakenCard::SetTriggerContext));		

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDeepSeaKrakenCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CDeepSeaKrakenCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

//____________________________________________________________________________
//
CDuskriderPeregrineCard::CDuskriderPeregrineCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Duskrider Peregrine"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3), _T("1") WHITE_MANA_TEXT, 3)
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CDivineCongregationCard::CDivineCongregationCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Divine Congregation"), CardType::Sorcery, nID, _T("1") WHITE_MANA_TEXT, 5)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDivineCongregationCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDivineCongregationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	CZone* pInplay = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new AnyCreatureComparer);

	int n = 2 * m_CardFilter_temp.CountIncluded(pInplay->GetCardContainer());

	CLifeModifier modifier1 = CLifeModifier(Life(n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier1.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CErrantEphemeronCard::CErrantEphemeronCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Errant Ephemeron"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("6") BLUE_MANA_TEXT, Power(4), Life(4), _T("1") BLUE_MANA_TEXT, 4)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CGreaterGargadonCard::CGreaterGargadonCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Greater Gargadon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("9") RED_MANA_TEXT, Power(9), Life(7), RED_MANA_TEXT, 10)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false));

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetAbilityText(_T("Remove a time counter from"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(TIME_COUNTER, -1, false));

		cpAbility->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CGreaterGargadonCard::CanPlay)));
			
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CGreaterGargadonCard::CanPlay(BOOL bIncludeTricks)
{
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}
//____________________________________________________________________________
//
CPullFromEternityCard::CPullFromEternityCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Pull from Eternity"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardZoneComparer(ZoneId::Exile),
		ZoneId::Exile, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CIthHighArcanistCard::CIthHighArcanistCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Ith, High Arcanist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(5), WHITE_MANA_TEXT BLUE_MANA_TEXT, 4)
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIvoryGiantCard::CIvoryGiantCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Ivory Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4), WHITE_MANA_TEXT, 5)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-white creatures")));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeldonHalberdierCard::CKeldonHalberdierCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Keldon Halberdier"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(1), RED_MANA_TEXT, 4)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CLivingEndCard::CLivingEndCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Living End"), CardType::Sorcery, nID, _T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 3)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CLivingEndCard::CanPlay)));
		
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLivingEndCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}

	AddCardType(CardType::Black, CardType::_ColorMask);
}

bool CLivingEndCard::BeforeResolution(CAbilityAction* pAction) const
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

BOOL CLivingEndCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CMindstabCard::CMindstabCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Mindstab"), CardType::Sorcery, nID, BLACK_MANA_TEXT, 4)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT,
			3, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNantukoShamanCard::CNantukoShamanCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Nantuko Shaman"), CardType::Creature, CREATURE_TYPE2(Insect, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2), _T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, 1)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNantukoShamanCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNantukoShamanCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CNantukoShamanCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter_temp.AddComparer(new TappedComparer);

	return (m_CardFilter_temp.CountIncluded(pInplay->GetCardContainer()) == 0);
}

bool CNantukoShamanCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter_temp.AddComparer(new TappedComparer);

	return (m_CardFilter_temp.CountIncluded(pInplay->GetCardContainer()) == 0);
}

//____________________________________________________________________________
//
CPardicDragonCard::CPardicDragonCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Pardic Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4), RED_MANA_TEXT RED_MANA_TEXT, 2)
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPardicDragonCard::SetTriggerContext));		

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPardicDragonCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CPardicDragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

//____________________________________________________________________________
//
CPhthisisCard::CPhthisisCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Phthisis"), CardType::Sorcery, nID, _T("1") BLACK_MANA_TEXT, 5)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CPhthisisCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPhthisisCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* target = (CCreatureCard*)pCard;

	int n = GET_INTEGER(target->GetLastKnownPower()) + GET_INTEGER(target->GetLastKnownToughness());

	if (bResult && n > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(target->GetController());
	}
}

//____________________________________________________________________________
//
CPlunderCard::CPlunderCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Plunder"), CardType::Sorcery, nID, _T("1") RED_MANA_TEXT, 4)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRestoreBalanceCard::CRestoreBalanceCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Restore Balance"), CardType::Sorcery, nID, WHITE_MANA_TEXT, 6)

	, m_CardFilter1(_T("a creature"), _T("creatures"), new AnyCreatureComparer)
	, m_CardFilter2(_T("a land"), _T("lands"), new CardTypeComparer(CardType::_Land, false))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			_T(""),	// Cost
			Life(0),		// life delta
			new TrueCardComparer,	// Affects creatures without flying
			TRUE,	// Affects players
			PreventableType::Preventable,	// Preventable
			DamageType::NotDealingDamage)); //No regeneration

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(
			this, &CRestoreBalanceCard::CanPlay)));
	
	cpSpell->Add(cpTrait.GetPointer());

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext1));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext2));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext3));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext4));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext5));

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
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRestoreBalanceCard::SetTriggerContext6));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility4 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility4);
	}

	AddCardType(CardType::White, CardType::_ColorMask);
}

bool CRestoreBalanceCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* AIHand =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);	
	int n = 0;

	if (pHand->GetSize()>AIHand->GetSize()) n = pHand->GetSize()-AIHand->GetSize();

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CRestoreBalanceCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* AIHand =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);	
	int n = 0;

	if (AIHand->GetSize()>pHand->GetSize()) n = AIHand->GetSize()-pHand->GetSize();

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CRestoreBalanceCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CRestoreBalanceCard::SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CRestoreBalanceCard::SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CRestoreBalanceCard::SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

BOOL CRestoreBalanceCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSearchforTomorrowCard::CSearchforTomorrowCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Search for Tomorrow"), CardType::Sorcery, nID, GREEN_MANA_TEXT, 2)
{	
	counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2")GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWheelofFateCard::CWheelofFateCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Wheel of Fate"), CardType::Sorcery, nID, _T("1") RED_MANA_TEXT, 4)
{	
	{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T(""), 7, 7));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(
			this, &CWheelofFateCard::CanPlay)));
	
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->SetDiscardHand(TRUE);

	AddSpell(cpSpell.GetPointer());
	}

	AddCardType(CardType::Red, CardType::_ColorMask);
}

BOOL CWheelofFateCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CHypergenesisCard::CHypergenesisCard(CGame* pGame, UINT nID)
	: CSuspendCard(pGame, _T("Hypergenesis"), CardType::Sorcery, nID, _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, 3)
	, m_CardFilter(new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Enchantment | CardType::_Land | CardType::Planeswalker, false))
{	
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("")));	

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHypergenesisCard::BeforeResolution));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(
			this, &CHypergenesisCard::CanPlay)));
	
	cpSpell->Add(cpTrait.GetPointer());
	
	AddSpell(cpSpell.GetPointer());

	AddCardType(CardType::Green, CardType::_ColorMask);
}

BOOL CHypergenesisCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetCardKeyword()->HasFreecast());
}

bool CHypergenesisCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* cont = GetController();
	CPlayer* opp = m_pGame->GetNextPlayer(cont);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer,					 // select by 
			CZoneModifier::RoleType::PrimaryPlayer,					 // reveal to
			&m_CardFilter,											 // what cards
			ZoneId::Battlefield,									 // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,					 // select by this player
			CardPlacement::Top,										 // put selected cards on 
			MoveType::Others,										 // move type
			CZoneModifier::RoleType::PrimaryPlayer);				 // order selected cards by this player

	int cont_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
	int opp_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

	int loop = cont_hand;
	if (opp_hand > cont_hand) 
		loop = opp_hand;

	for (int i = 0; i < loop; ++i)
	{
		cont_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
		opp_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

		pModifier.ApplyTo(cont);
		pModifier.ApplyTo(opp);

		int cont_new_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
		int opp_new_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

		if (cont_hand == cont_new_hand && opp_hand == opp_new_hand) 
			break;
	}

	return true;
}

//____________________________________________________________________________
//
CGorgonRecluseCard::CGorgonRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorgon Recluse"), CardType::Creature, CREATURE_TYPE(Gorgon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGorgonRecluseCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-black creatures")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGorgonRecluseCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGorgonRecluseCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGorgonRecluseCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}

bool CGorgonRecluseCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

BOOL CGorgonRecluseCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CVisceridDeepwalkerCard::CVisceridDeepwalkerCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Viscerid Deepwalker"), CardType::Creature, CREATURE_TYPE2(Homarid, Warrior), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(3), BLUE_MANA_TEXT, 4)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+1), Life(+0)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiftwingCloudskateCard::CRiftwingCloudskateCard(CGame* pGame, UINT nID)
	: CSuspendCreatureCard(pGame, _T("Riftwing Cloudskate"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2), _T("1") BLUE_MANA_TEXT, 3)
{
	GetCreatureKeyword()->AddFlying(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

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
CDarkWitheringCard::CDarkWitheringCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dark Withering"), CardType::Instant, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	GetCardKeyword()->AddMadness(FALSE);

	{
		m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDarkWitheringCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDarkWitheringCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CCallToTheNetherworldCard::CCallToTheNetherworldCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Call to the Netherworld"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Black | CardType::Creature, true),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	GetCardKeyword()->AddMadness(FALSE);
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		
		{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("0"),
				new CardTypeComparer(CardType::Black | CardType::Creature, true),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		
		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCallToTheNetherworldCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCallToTheNetherworldCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CMolderCard::CMolderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Molder"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMolderCard::OnResolutionCompleted))

{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, false));	

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
			
	AddSpell(cpSpell.GetPointer());
}

void CMolderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int n = GetLastCastingExtraValue();
	CLifeModifier* life = new CLifeModifier(Life(+n), this, PreventableType::NotPreventable);
	if (bResult)
		life->ApplyTo(GetController());
}

//____________________________________________________________________________
//

CGriffinGuideCard::CGriffinGuideCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Griffin Guide"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Flying)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Griffin"), TOKEN_ID_BY_NAME, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheloniteHermitCard::CTheloniteHermitCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Thelonite Hermit"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(1), _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elf);
	this->AddCreatureType(SingleCreatureType::Shaman);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Saproling), false),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetAbilityName(_T("Morph Enchantment"));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Saproling H"), 2923, 4);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CFathomSeerCard::CFathomSeerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Fathom Seer"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Illusion);
	this->GetMorphAbility()->GetCost().AddReturnFromPlayCardCost(2, CCardFilter::GetFilter(_T("Islands")));
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetDrawCount(2);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBrineElementalCard::CBrineElementalCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Brine Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(4), _T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elemental);	
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextUntapStep, FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFledglingMawcorCard::CFledglingMawcorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Fledgling Mawcor"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2), _T("") BLUE_MANA_TEXT BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false));
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				true,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);
		
		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayUnMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());
		
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFoolsDemiseCard::CFoolsDemiseCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Fool's Demise"), CardType::EnchantCreature, nID,
		_T("4") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFoolsDemiseCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFoolsDemiseCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController());
	return true;
}

//____________________________________________________________________________
//
//Flashback doesn't work. If I remove the SetExtraActionValueVector you can cast it with flashback but no damage is dealt
//
//CConflagrateCard::CConflagrateCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Conflagrate"), CardType::Sorcery, nID)
//{
//	{
//		//Regular mana cost
//		counted_ptr<CTargetChgLifeSpell> cpSpell(
//				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
//					RED_MANA_TEXT,
//					new AnyCreatureComparer,
//					TRUE,
//					Life(0), PreventableType::Preventable));
//
//		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
//		cpSpell->SetExtraActionValueVector(ContextValue(-1));
//		cpSpell->GetTargeting()->SetDistributeValues();
//
//		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
//
//		AddSpell(cpSpell.GetPointer());
//	}
//	{
//		//Flashback cost
//		counted_ptr<CTargetChgLifeSpell> cpSpell(
//				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
//					RED_MANA_TEXT RED_MANA_TEXT,
//					new AnyCreatureComparer,
//					TRUE,
//					Life(0), PreventableType::Preventable));
//
//		cpSpell->GetCost().AddDiscardCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("cards")));
//		
//		cpSpell->SetAbilityName(_T("Flashback"));
//		cpSpell->SetAbilityText(_T("Flashback. Casts"));
//
//		cpSpell->SetGraveyardOnly();
//
//		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConflagrateCard::BeforeResolution));
//		
//		cpSpell->SetExtraActionValueVector(ContextValue(-1));
//		cpSpell->GetTargeting()->SetDistributeValues();
//		
//		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
//
//		cpSpell->SetMainSpell(FALSE);
//		AddSpell(cpSpell.GetPointer());
//	}
//}
//bool CConflagrateCard::BeforeResolution(CAbilityAction* pAction) const
//{
//	int nCount = pAction->GetCostConfigEntry().GetDiscardCards()->GetSize();
//
//	ContextValue Context(pAction->GetValue());
//
//	Context.nValue1 = nCount;
//	
//
//	pAction->SetValue(Context);
//
//	return true;
//}
//____________________________________________________________________________
//
CLimDulTheNecromancerCard::CLimDulTheNecromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lim-Dûl the Necromancer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLimDulTheNecromancerCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetResolutionCost(_T("1") BLACK_MANA_TEXT);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLimDulTheNecromancerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CLimDulTheNecromancerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CLimDulTheNecromancerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CGainControlModifier pModifier1 = CGainControlModifier(m_pGame, this);
	if (triggerContext.m_pCard->GetZoneId() == ZoneId::Graveyard)
	{
		if (triggerContext.m_pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)triggerContext.m_pCard;
			CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Zombie);
			pModifier2->ApplyTo(pCreature);
		}
		pModifier1.ApplyTo(triggerContext.m_pCard);
	}
	return false;
}
//____________________________________________________________________________
//
CKaervekTheMercilessCard::CKaervekTheMercilessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kaervek the Merciless"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("5") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{

	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCastAny > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		
   	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKaervekTheMercilessCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

bool CKaervekTheMercilessCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-(int)(pCard->GetConvertedManaCost())));
	return (this->GetZone()->GetZoneId() == ZoneId::Battlefield);
}
//____________________________________________________________________________
//
CHivestoneCard::CHivestoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hivestone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetOtherCardModifiers().Add((CCardModifier*)(new CCreatureTypeModifier(SingleCreatureType::Sliver)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReiterateCard::CReiterateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reiterate"), CardType::Instant, nID)
	, m_BuybackCost(_T("3"))
{
	{
		counted_ptr<CTargetCopyCastSpell> cpSpell(
			::CreateObject<CTargetCopyCastSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));

		cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);
		AddSpell(cpSpell.GetPointer());
	}
}

void CReiterateCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
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
CStrongholdOverseerCard::CStrongholdOverseerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stronghold Overseer"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("BB"),
			Power(-1), Life(+0),
			new AnyCreatureComparer));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStrongholdOverseerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CStrongholdOverseerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddComparer(new CreatureKeywordComparer(CreatureKeyword::Shadow, false));

	CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+1))));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}
//____________________________________________________________________________
//
CGustcloakCavalierCard::CGustcloakCavalierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gustcloak Cavalier"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGustcloakCavalierCard::SetTriggerContext));

		cpAbility->SetAbilityText(_T("Flanking ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
									 CWhenSelfAttackedBlocked::AttackEventCallback,
									 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGustcloakCavalierCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CGustcloakCavalierCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

bool CGustcloakCavalierCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(this);
	RemoveFromCombat(FALSE);

	return false;
}
//____________________________________________________________________________
//
CWeatherseedTotemCard::CWeatherseedTotemCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Weatherseed Totem"), CardType::Artifact, nID,
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
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Treefolk AC"), 64077));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWeatherseedTotemCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWeatherseedTotemCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CWeatherseedTotemCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const

{	
	return ((pCard->GetIsAlsoOf() == this) && (pCard->GetCardType().IsCreature()));
}

bool CWeatherseedTotemCard::BeforeResolution(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, GetController());

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CMangaraOfCorondorCard::CMangaraOfCorondorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mangara of Corondor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new TrueCardComparer, false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMangaraOfCorondorCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMangaraOfCorondorCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(this);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CParadisePlumeCard::CParadisePlumeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paradise Plume"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CParadisePlumeCard::OnSelectionDone))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life gained
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParadisePlumeCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CParadisePlumeCard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CParadisePlumeCard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CParadisePlumeCard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CParadisePlumeCard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CParadisePlumeCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CParadisePlumeCard::Move(CZone* pToZone,
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

void CParadisePlumeCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

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

bool CParadisePlumeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) ||
		   (cBlue  && pCard->IsColor(CManaPoolBase::Color::Blue))  ||
		   (cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) ||
		   (cRed   && pCard->IsColor(CManaPoolBase::Color::Red))   ||
		   (cGreen && pCard->IsColor(CManaPoolBase::Color::Green));
}

BOOL CParadisePlumeCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CParadisePlumeCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CParadisePlumeCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CParadisePlumeCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CParadisePlumeCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CPentarchPaladinCard::CPentarchPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pentarch Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CPentarchPaladinCard::OnSelectionDone))
{
	GetCreatureKeyword()->AddFlanking(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPentarchPaladinCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetAbilityText(_T("Flanking ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::White, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPentarchPaladinCard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Blue, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPentarchPaladinCard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Black, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPentarchPaladinCard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Red, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPentarchPaladinCard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Green, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CPentarchPaladinCard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CPentarchPaladinCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue  = false;
		cBlack = false;
		cRed   = false;
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

void CPentarchPaladinCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

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

bool CPentarchPaladinCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

BOOL CPentarchPaladinCard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CPentarchPaladinCard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CPentarchPaladinCard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CPentarchPaladinCard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CPentarchPaladinCard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CSarpadianEmpiresVolVIICard::CSarpadianEmpiresVolVIICard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sarpadian Empires, Vol. VII"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSarpadianEmpiresVolVIICard::OnSelectionDone))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Citizen A"), 2701,
				1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSarpadianEmpiresVolVIICard::CanPlayW)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Camarid B"), 2997,
				1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSarpadianEmpiresVolVIICard::CanPlayU)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Thrull B"), 2885,
				1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSarpadianEmpiresVolVIICard::CanPlayB)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Goblin I"), 62020,
				1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSarpadianEmpiresVolVIICard::CanPlayR)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Saproling H"), 2923,
				1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSarpadianEmpiresVolVIICard::CanPlayG)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSarpadianEmpiresVolVIICard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		cWhite = false;
		cBlue  = false;
		cBlack = false;
		cRed   = false;
		cGreen = false;

		std::vector<SelectionEntry> entries;

		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("white Citizen"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("blue Camarid"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("black Thrull"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("red Goblin"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("green Saproling"));
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CSarpadianEmpiresVolVIICard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

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

BOOL CSarpadianEmpiresVolVIICard::CanPlayW(BOOL bIncludeTricks)
{
	return cWhite;
}

BOOL CSarpadianEmpiresVolVIICard::CanPlayU(BOOL bIncludeTricks)
{
	return cBlue;
}

BOOL CSarpadianEmpiresVolVIICard::CanPlayB(BOOL bIncludeTricks)
{
	return cBlack;
}

BOOL CSarpadianEmpiresVolVIICard::CanPlayR(BOOL bIncludeTricks)
{
	return cRed;
}

BOOL CSarpadianEmpiresVolVIICard::CanPlayG(BOOL bIncludeTricks)
{
	return cGreen;
}

//____________________________________________________________________________
//
CCandlesOfLengCard::CCandlesOfLengCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Candles of Leng"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("4"), 1));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCandlesOfLengCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCandlesOfLengCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	if (pController->GetZoneById(ZoneId::Library)->GetSize() > 0)
	{
		CCard* pCard = pController->GetZoneById(ZoneId::Library)->GetTopCard();

		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

		if (m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Graveyard)->GetCardContainer()) > 0)
		{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
			pModifier.ApplyTo(pController);

			return false;
		}
		else
		{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		
			pModifier.ApplyTo(pController);

			return true;
		}
	}
	else return true;
}

//____________________________________________________________________________
//
CMishraArtificerProdigyCard::CMishraArtificerProdigyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mishra, Artificer Prodigy"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMishraArtificerProdigyCard::OnCardSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMishraArtificerProdigyCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMishraArtificerProdigyCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}
bool CMishraArtificerProdigyCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;

	return true;
}

bool CMishraArtificerProdigyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	bLibrarySearch = false;

	CardSelection(pAction->GetController(), pAction->GetTriggerContext().m_pCard);

	return true;
}

void CMishraArtificerProdigyCard::CardSelection(CPlayer* pController, CCard* pSelected)
{
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't select a card"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		const CCard* pCard = pGraveyard->GetAt(i);

		if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Select %s from graveyard"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		const CCard* pCard = pHand->GetAt(i);

		if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Select %s from hand"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	}
	if (bLibrarySearch)
	{
		for (int i = 0; i < pLibrary->GetSize(); ++i)
		{
			const CCard* pCard = pLibrary->GetAt(i);

			if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Select %s from library"), pCard->GetCardName(TRUE));

				entries.push_back(selectionEntry);
			}
		}
	}
	else
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Add library to search"));

		entries.push_back(selectionEntry);
	}

	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pSelected);
}

void CMishraArtificerProdigyCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects nothing"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			else if (it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s adds library to the search"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				bLibrarySearch = true;

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		
				pModifier.ApplyTo(pSelectionPlayer);

				CardSelection(pSelectionPlayer, (CCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				int nZone;
				if (pCard->GetZoneId() == ZoneId::Graveyard) nZone = 0;
				else if (pCard->GetZoneId() == ZoneId::Hand) nZone = 1;
				else nZone = 2;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;

					if (nZone == 0)
						strMessage.Format(_T("%s selects %s from his graveyard"), pSelectionPlayer->GetPlayerName(), pCard->GetPrintedCardName());
					if (nZone == 1)
						strMessage.Format(_T("%s selects %s from his hand"), pSelectionPlayer->GetPlayerName(), pCard->GetPrintedCardName());
					if (nZone == 0)
						strMessage.Format(_T("%s selects %s from his library"), pSelectionPlayer->GetPlayerName(), pCard->GetPrintedCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				if (nZone == 0)
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier.ApplyTo(pCard);
				}
				else if (nZone == 1)
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier.ApplyTo(pCard);
				}
				else
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier.ApplyTo(pCard);
				}
				
				if (bLibrarySearch)
					pSelectionPlayer->GetZoneById(ZoneId::Library)->Shuffle();

				return;
			}
		}
}

//____________________________________________________________________________
//
CGauntletOfPowerCard::CGauntletOfPowerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gauntlet of Power"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CGauntletOfPowerCard::OnSelectionDone))
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGauntletOfPowerCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}

counted_ptr<CAbility> CGauntletOfPowerCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CardTypeComparer(SelectedColor, false));

	cpAbility->SetAbilityName(_T("Gauntlet of Power boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CGauntletOfPowerCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedColor = CardType::Null;

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
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CGauntletOfPowerCard::CreateAdditionAbility));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier.RemoveFrom(this);
	}
}

void CGauntletOfPowerCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				SelectedColor = CardType::White;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CGauntletOfPowerCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 2)
			{
				SelectedColor = CardType::Blue;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CGauntletOfPowerCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 3)
			{
				SelectedColor = CardType::Black;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CGauntletOfPowerCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 4)
			{
				SelectedColor = CardType::Red;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CGauntletOfPowerCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
				{
					CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
					if (!pEnchantSpell) 
						continue;

					pEnchantSpell->StartEnchantment();
				}

				return;
			}
			if (nSelectedIndex == 5)
			{
				SelectedColor = CardType::Green;

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CGauntletOfPowerCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

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

bool CGauntletOfPowerCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red) && (SelectedColor == CardType::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green) && (SelectedColor == CardType::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue) && (SelectedColor == CardType::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black) && (SelectedColor == CardType::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White) && (SelectedColor == CardType::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}

bool CGauntletOfPowerCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CNightshadeAssassinCard::CNightshadeAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightshade Assassin"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNightshadeAssassinCard::OnCardSelected))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCardKeyword()->AddMadness(FALSE);

	{
			counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT,
				TRUE));
		

		cpSpell->SetAbilityName(_T("Madness"));
		cpSpell->SetPlayableFrom(ZoneId::Exile);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNightshadeAssassinCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMadnessAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(666);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));


		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNightshadeAssassinCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNightshadeAssassinCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

bool CNightshadeAssassinCard::BeforeResolution(CAbilityAction* pAction)
{
	pRevealedCards.RemoveAll();
	RevealCards(pAction->GetController(), (CCreatureCard*)pAction->GetAssociatedCard());
	return true;
}

void CNightshadeAssassinCard::RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop revealing cards"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);

		if (pCard->IsColor(CManaPoolBase::Color::Black) && !pRevealedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature);
}

void CNightshadeAssassinCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				Finale(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				pRevealedCards.AddCard(pCard, CardPlacement::Top);
				RevealCards(pSelectionPlayer, (CCreatureCard*)dwContext1);
				
				return;
			}
		}
}

void CNightshadeAssassinCard::Finale(CPlayer* pController, CCreatureCard* pTargetCreature)
{
	int nSize = pRevealedCards.GetSize();

	if (nSize > 0)
	{
		for (int i = 0; i < nSize; ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}

		CPowerModifier pModifier1 = CPowerModifier(Power(-nSize));
		CLifeModifier pModifier2 = CLifeModifier(Life(-nSize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTargetCreature);
		pModifier2.ApplyTo(pTargetCreature);
	}
}

//____________________________________________________________________________
//
CCalciformPoolsCard::CCalciformPoolsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Calciform Pools"), nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CCalciformPoolsCard::OnNumberSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCalciformPoolsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CCalciformPoolsCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounterCount > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nCounterCount; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == nCounterCount)
				selectionEntry.strText.Format(_T("%d white mana"), nCounterCount);
			else if (i == 0)
				selectionEntry.strText.Format(_T("%d blue mana"), nCounterCount);
			else
				selectionEntry.strText.Format(_T("%d white mana, %d blue mana"), i, nCounterCount - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounterCount);
	}
	return true;
}

void CCalciformPoolsCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CDreadshipReefCard::CDreadshipReefCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dreadship Reef"), nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CDreadshipReefCard::OnNumberSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDreadshipReefCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CDreadshipReefCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounterCount > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nCounterCount; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == nCounterCount)
				selectionEntry.strText.Format(_T("%d blue mana"), nCounterCount);
			else if (i == 0)
				selectionEntry.strText.Format(_T("%d black mana"), nCounterCount);
			else
				selectionEntry.strText.Format(_T("%d blue mana, %d black mana"), i, nCounterCount - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounterCount);
	}
	return true;
}

void CDreadshipReefCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CMoltenSlagheapCard::CMoltenSlagheapCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Molten Slagheap"), nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CMoltenSlagheapCard::OnNumberSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoltenSlagheapCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CMoltenSlagheapCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounterCount > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nCounterCount; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == nCounterCount)
				selectionEntry.strText.Format(_T("%d black mana"), nCounterCount);
			else if (i == 0)
				selectionEntry.strText.Format(_T("%d red mana"), nCounterCount);
			else
				selectionEntry.strText.Format(_T("%d black mana, %d red mana"), i, nCounterCount - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounterCount);
	}
	return true;
}

void CMoltenSlagheapCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CFungalReachesCard::CFungalReachesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Fungal Reaches"), nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CFungalReachesCard::OnNumberSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFungalReachesCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CFungalReachesCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounterCount > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nCounterCount; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == nCounterCount)
				selectionEntry.strText.Format(_T("%d red mana"), nCounterCount);
			else if (i == 0)
				selectionEntry.strText.Format(_T("%d green mana"), nCounterCount);
			else
				selectionEntry.strText.Format(_T("%d red mana, %d green mana"), i, nCounterCount - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounterCount);
	}
	return true;
}

void CFungalReachesCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CSaltcrustedSteppeCard::CSaltcrustedSteppeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Saltcrusted Steppe"), nID)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CSaltcrustedSteppeCard::OnNumberSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a storage counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 storage counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSaltcrustedSteppeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSaltcrustedSteppeCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounterCount > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nCounterCount; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == nCounterCount)
				selectionEntry.strText.Format(_T("%d green mana"), nCounterCount);
			else if (i == 0)
				selectionEntry.strText.Format(_T("%d white mana"), nCounterCount);
			else
				selectionEntry.strText.Format(_T("%d green mana, %d white mana"), i, nCounterCount - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), nCounterCount);
	}
	return true;
}

void CSaltcrustedSteppeCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			CManaPoolModifier pModifier1 = CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = dwContext1 - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CIgniteMemoriesCard::CIgniteMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ignite Memories"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIgniteMemoriesCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIgniteMemoriesCard::BeforeResolution2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIgniteMemoriesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIgniteMemoriesCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);
		int nDamage = pCard->GetConvertedManaCost();

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}

		if (nDamage > 0)
		{
			CLifeModifier pModifier = CLifeModifier(Life(-nDamage), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			pModifier.ApplyTo(pTarget);
		}
	}

	return true;
}

bool CIgniteMemoriesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CIgniteMemoriesCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CIgniteMemoriesCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CIgniteMemoriesCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClockworkHydraCard::CClockworkHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Hydra"), CardType::_ArtifactCreature, CREATURE_TYPE(Hydra), nID,
		_T("5"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClockworkHydraCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CClockworkHydraCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay() && GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0)
	{
		CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
		CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -1);
		pModifier1.ApplyTo(this);

		CLifeModifier pModifier2 = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		if (pTargetCreature)
			pModifier2.ApplyTo(pTargetCreature);
		else
			pModifier2.ApplyTo(pTargetPlayer);
	}

	return true;
}

//____________________________________________________________________________
//
CDementiaSliverCard::CDementiaSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dementia Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDementiaSliverCard::OnNameSelected))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDementiaSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDementiaSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(pCard,
			_T(""),
			FALSE_CARD_COMPARER, true));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDementiaSliverCard::BeforeResolution));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CDementiaSliverCard::BeforeResolution(CAbilityAction* pAction)
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	return true;
}

void CDementiaSliverCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CPlayer* pTarget = (CPlayer*)dwContext1;

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
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

				if (pHand->GetSize() > 0)
				{
					int nRand;

					if (m_pGame->IsThinking())
						nRand = 0;
					else
						nRand = pSelectionPlayer->GetRand() % pHand->GetSize();

					CCard* pCard = pHand->GetAt(nRand);

					if (!m_pGame->IsThinking())
					{

						CString strMessage;
						strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

						m_pGame->Message(
							strMessage,
							pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);

						for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
						{
							m_pGame->GetPlayer(j)->MemorizeCard(pCard);
						}
					}
				}

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
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

				if (pHand->GetSize() > 0)
				{
					int nRand;

					if (m_pGame->IsThinking())
						nRand = 0;
					else
						nRand = pSelectionPlayer->GetRand() % pHand->GetSize();

					CCard* pCard = pHand->GetAt(nRand);

					if (!m_pGame->IsThinking())
					{

						CString strMessage;
						strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

						m_pGame->Message(
							strMessage,
							pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);

						for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
						{
							m_pGame->GetPlayer(j)->MemorizeCard(pCard);
						}
					}

					if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
					{
						CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pTarget);
						pModifier.ApplyTo(pCard);
					}
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CSpikeTillerCard::CSpikeTillerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Tiller"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::_Land, false), false));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpikeTillerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSpikeTillerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier1 = CCardIsAlsoAModifier( _T("Animated Land B"), 64008, pAction->GetController());

	pModifier1.ApplyTo(pCard);

	CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier2.ApplyTo(pCard->GetIsAlsoA());

	return true;
}

//____________________________________________________________________________
//
CWurmcallingCard::CWurmcallingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wurmcalling"), CardType::Sorcery, nID)
	, m_BuybackCost(_T("2") GREEN_MANA_TEXT)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));


	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWurmcallingCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

void CWurmcallingCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
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

bool CWurmcallingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int n = pAction->GetCostConfigEntry().GetExtraValue();

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
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Wurm C"), 2845));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2845); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Wurm C")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(n));
		pCreature->SetPrintedToughness(Life(n));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//________________________________________________________________________________
//
CMagusOfTheJarCard::CMagusOfTheJarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magus of the Jar"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMagusOfTheJarCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CMagusOfTheJarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CCountedCardContainer pSubjects;
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, true, MoveType::Others, pController);
	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pHand = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Hand);

		for (int i = pHand->GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = pHand->GetAt(i);
			pModifier1.ApplyTo(pCard);

			if (pCard->GetZoneId() == ZoneId::_ExileFaceDown)
				pSubjects.AddCard(pCard, CardPlacement::Top);
		}
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("Magus of the Jar Effect"), 61081, &pSubjects);
	pModifier3.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSaffiEriksdotterCard::CSaffiEriksdotterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saffi Eriksdotter"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Scout), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, false));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSaffiEriksdotterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CSaffiEriksdotterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Saffi Eriksdotter Effect"), 61101, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CYavimayaDryadCard::CYavimayaDryadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Forestwalk, FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CYavimayaDryadCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CYavimayaDryadCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CCountedCardContainer pCards;
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Library, FALSE, CardPlacement::Top, TRUE, FALSE, FALSE, &pCards);

	pModifier.ApplyTo(pAction->GetController());
	
	if (pCards.GetSize() > 0)
	{
		CCard* pCard = pCards.GetAt(0);

		pCard->GetOrientation()->Tap();
		pCard->Move(pTarget->GetZoneById(ZoneId::Battlefield), pTarget, MoveType::Others);
	}

	return true;
}

//_____________________________________________________________________________
//