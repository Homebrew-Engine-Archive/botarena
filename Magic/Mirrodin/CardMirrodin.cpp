#include "stdafx.h"
#include "CardMirrodin.h"

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

		DEFINE_CARD(CAEtherSpellbombCard);
		DEFINE_CARD(CAlphaMyrCard);
		DEFINE_CARD(CAltarOfShadowsCard);
		DEFINE_CARD(CAltarsLightCard);
		DEFINE_CARD(CAncientDenCard);
		DEFINE_CARD(CAssertAuthorityCard);
		DEFINE_CARD(CAuriokBladewardenCard);
		DEFINE_CARD(CAuriokTransfixerCard);
		DEFINE_CARD(CBansheesBladeCard);
		DEFINE_CARD(CBarterInBloodCard);
		DEFINE_CARD(CBattlegrowthCard);
		DEFINE_CARD(CBetrayalOfFleshCard);
		DEFINE_CARD(CBlinkmothUrnCard);
		DEFINE_CARD(CBlinkmothWellCard);
		DEFINE_CARD(CBloodscentCard);
		DEFINE_CARD(CBonesplitterCard);
		DEFINE_CARD(CBoshIronGolemCard);
		DEFINE_CARD(CBroodstarCard);
		DEFINE_CARD(CChaliceOfTheVoidCard);
		DEFINE_CARD(CChimneyImpCard);
		DEFINE_CARD(CChromeMoxCard);
		DEFINE_CARD(CClockworkBeetleCard);
		DEFINE_CARD(CClockworkCondorCard);
		DEFINE_CARD(CClockworkDragonCard);
		DEFINE_CARD(CClockworkVorracCard);
		DEFINE_CARD(CCloudpostCard);
		DEFINE_CARD(CCobaltGolemCard);
		DEFINE_CARD(CCopperhoofVorracCard);
		DEFINE_CARD(CCopperMyrCard);
		DEFINE_CARD(CCrystalShardCard);
		DEFINE_CARD(CDampingMatrixCard);
		DEFINE_CARD(CDeconstructCard);
		//DEFINE_CARD(CDeadIronSledgeCard);
		DEFINE_CARD(CDiscipleOfTheVaultCard);
		DEFINE_CARD(CDreamsGripCard);
		DEFINE_CARD(CDrossHarvesterCard);
		DEFINE_CARD(CDrossProwlerCard);
		DEFINE_CARD(CDrossScorpionCard);
		DEFINE_CARD(CDomineerCard);
		DEFINE_CARD(CDuskworkerCard);
		DEFINE_CARD(CElectrostaticBoltCard);
		DEFINE_CARD(CElfReplicaCard);
		DEFINE_CARD(CEmpyrialPlateCard);
		DEFINE_CARD(CExtraplanarLensCard);
		DEFINE_CARD(CFangrenHunterCard);
		DEFINE_CARD(CFieryGambitCard);
		DEFINE_CARD(CFireshriekerCard);
		DEFINE_CARD(CFlayedNimCard);
		DEFINE_CARD(CForgeArmorCard);
		DEFINE_CARD(CFrogmiteCard);
		DEFINE_CARD(CGalvanicKeyCard);
		DEFINE_CARD(CGlimmervoidCard);
		DEFINE_CARD(CGlissaSunseekerCard);
		DEFINE_CARD(CGoblinCharbelcherCard);
		DEFINE_CARD(CGoblinDirigibleCard);
		DEFINE_CARD(CGoblinReplicaCard);
		DEFINE_CARD(CGoblinStrikerCard);
		DEFINE_CARD(CGoblinWarWagonCard);
		DEFINE_CARD(CGoldMyrCard);
		DEFINE_CARD(CGrabTheReinsCard);
		DEFINE_CARD(CGraniteShardCard);
		DEFINE_CARD(CGreatFurnaceCard);
		DEFINE_CARD(CGridMonitorCard);
		DEFINE_CARD(CGroffskithurCard);
		DEFINE_CARD(CHeartwoodShardCard);
		DEFINE_CARD(CHematiteGolemCard);
		DEFINE_CARD(CInertiaBubbleCard);
		DEFINE_CARD(CIronMyrCard);
		DEFINE_CARD(CIrradiateCard);
		DEFINE_CARD(CJourneyOfDiscoveryCard);
		DEFINE_CARD(CKrarkClanGruntCard);
		DEFINE_CARD(CKrarkClanShamanCard);
		DEFINE_CARD(CKrarksThumbCard);
		DEFINE_CARD(CLeadenMyrCard);
		DEFINE_CARD(CLeoninAbunasCard);
		DEFINE_CARD(CLeoninBladetrapCard);
		DEFINE_CARD(CLeoninDenGuardCard);
		DEFINE_CARD(CLeoninElderCard);
		DEFINE_CARD(CLeoninSunStandardCard);
		DEFINE_CARD(CLevelerCard);
		DEFINE_CARD(CLiarsPendulumCard);
		DEFINE_CARD(CLifesparkSpellbombCard);
		DEFINE_CARD(CLightningCoilsCard);
		DEFINE_CARD(CLightningGreavesCard);
		DEFINE_CARD(CLivingHiveCard);
		DEFINE_CARD(CLodestoneMyrCard);
		DEFINE_CARD(CLoomingHoverguardCard);
		DEFINE_CARD(CLoxodonMenderCard);
		DEFINE_CARD(CLumengridSentinelCard);
		DEFINE_CARD(CLuminousAngelCard);
		DEFINE_CARD(CMalachiteGolemCard);
		DEFINE_CARD(CMaskOfMemoryCard);
		DEFINE_CARD(CMassHysteriaCard);
		DEFINE_CARD(CMegatogCard);
		DEFINE_CARD(CMesmericOrbCard);
		DEFINE_CARD(CMindsEyeCard);
		DEFINE_CARD(CMirrorGolemCard);
		DEFINE_CARD(CMolderSlugCard);
		DEFINE_CARD(CMoltenRainCard);
		DEFINE_CARD(CMoriokScavengerCard);
		DEFINE_CARD(CMyrEnforcerCard);
		DEFINE_CARD(CMyrIncubatorCard);
		DEFINE_CARD(CMyrMindservantCard);
		DEFINE_CARD(CMyrRetrieverCard);
		DEFINE_CARD(CNecrogenMistsCard);
		DEFINE_CARD(CNecrogenSpellbombCard);
		DEFINE_CARD(CNeedlebugCard);
		DEFINE_CARD(CNeurokFamiliarCard);
		DEFINE_CARD(CNeurokHoversailCard);
		DEFINE_CARD(CNeurokSpyCard);
		DEFINE_CARD(CNightmareLashCard);
		DEFINE_CARD(CNimDevourerCard);
		DEFINE_CARD(CNimLasherCard);
		DEFINE_CARD(CNimReplicaCard);
		DEFINE_CARD(CNimShamblerCard);
		DEFINE_CARD(CNimShriekerCard);
		DEFINE_CARD(CNuisanceEngineCard);
		DEFINE_CARD(COblivionStoneCard);
		DEFINE_CARD(COgreLeadfootCard);
		DEFINE_CARD(COverrideCard);
		DEFINE_CARD(COmegaMyrCard);
		DEFINE_CARD(COneDozenEyesCard);
		DEFINE_CARD(CPearlShardCard);
		DEFINE_CARD(CPewterGolemCard);
		DEFINE_CARD(CPlatedSlagwurmCard);
		DEFINE_CARD(CPredatorsStrikeCard);
		DEFINE_CARD(CPromiseOfPowerCard);
		DEFINE_CARD(CProteusStaffCard);
		DEFINE_CARD(CPsychicMembraneCard);
		DEFINE_CARD(CPyriteSpellbombCard);
		DEFINE_CARD(CRaiseTheAlarmCard);
		DEFINE_CARD(CRazorBarrierCard);
		DEFINE_CARD(CRegressCard);
		DEFINE_CARD(CReiverDemonCard);
		DEFINE_CARD(CRelicBaneCard);
		DEFINE_CARD(CRoarOfTheKhaCard);
		DEFINE_CARD(CRustElementalCard);
		DEFINE_CARD(CRustmouthOgreCard);
		DEFINE_CARD(CRustsporeRamCard);
		DEFINE_CARD(CScaleOfChissGoriaCard);
		DEFINE_CARD(CScrabblingClawsCard);
		DEFINE_CARD(CSeatOfTheSynodCard);
		DEFINE_CARD(CSerumTankCard);
		DEFINE_CARD(CShrapnelBlastCard);
		DEFINE_CARD(CSilverMyrCard);
		DEFINE_CARD(CSkeletonShardCard);
		DEFINE_CARD(CSkyhunterCubCard);
		DEFINE_CARD(CSlagwurmArmorCard);
		DEFINE_CARD(CSlithAscendantCard);
		DEFINE_CARD(CSlithBloodletterCard);
		DEFINE_CARD(CSlithFirewalkerCard);
		DEFINE_CARD(CSlithPredatorCard);
		DEFINE_CARD(CSlithStriderCard);
		DEFINE_CARD(CSolarTideCard);
		DEFINE_CARD(CSoldierReplicaCard);
		DEFINE_CARD(CSomberHoverguardCard);
		DEFINE_CARD(CSoulNovaCard);
		DEFINE_CARD(CSpikeshotGoblinCard);
		DEFINE_CARD(CSpoilsOfTheVaultCard);
		DEFINE_CARD(CSteelWallCard);
		DEFINE_CARD(CSunbeamSpellbombCard);
		DEFINE_CARD(CSunDropletCard);
		DEFINE_CARD(CSwordOfKaldraCard);
		DEFINE_CARD(CTalismanOfDominanceCard);
		DEFINE_CARD(CTalismanOfImpulseCard);
		DEFINE_CARD(CTalismanOfIndulgenceCard);
		DEFINE_CARD(CTalismanOfProgressCard);
		DEFINE_CARD(CTalismanOfUnityCard);
		DEFINE_CARD(CTanglerootCard);
		DEFINE_CARD(CTelJiladArchersCard);
		DEFINE_CARD(CTelJiladChosenCard);
		DEFINE_CARD(CTelJiladExileCard);
		DEFINE_CARD(CTelJiladStylusCard);
		DEFINE_CARD(CTemporalCascadeCard);
		DEFINE_CARD(CThirstforKnowledgeCard);
		DEFINE_CARD(CThoughtcastCard);
		DEFINE_CARD(CTitaniumGolemCard);
		DEFINE_CARD(CToothAndNailCard);
		DEFINE_CARD(CToothOfChissGoriaCard);
		DEFINE_CARD(CTowerOfChampionsCard);
		DEFINE_CARD(CTowerOfEonsCard);
		DEFINE_CARD(CTowerOfFortunesCard);
		DEFINE_CARD(CTowerOfMurmursCard);
		DEFINE_CARD(CTrashForTreasureCard);
		DEFINE_CARD(CTreeOfTalesCard);
		DEFINE_CARD(CTrollsOfTelJiladCard);
		DEFINE_CARD(CTurnToDustCard);
		DEFINE_CARD(CVaultOfWhispersCard);
		DEFINE_CARD(CVedalkenArchmageCard);
		DEFINE_CARD(CVermiculosCard);
		DEFINE_CARD(CViridianJoinerCard);
		DEFINE_CARD(CViridianLongbowCard);
		DEFINE_CARD(CVorracBattlehornsCard);
		DEFINE_CARD(CVulshokBattlegearCard);
		DEFINE_CARD(CVulshokGauntletsCard);
		DEFINE_CARD(CWailOfTheNimCard);
		DEFINE_CARD(CWallOfBloodCard);
		DEFINE_CARD(CWarElementalCard);
		DEFINE_CARD(CWeldingJarCard);
		DEFINE_CARD(CWizardReplicaCard);
		DEFINE_CARD(CWoebearerCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAlphaMyrCard::CAlphaMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alpha Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CCopperMyrCard::CCopperMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Copper Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CGoldMyrCard::CGoldMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Gold Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		WHITE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CIronMyrCard::CIronMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Iron Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		RED_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CLeadenMyrCard::CLeadenMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Leaden Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSilverMyrCard::CSilverMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Silver Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1),
		BLUE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CLodestoneMyrCard::CLodestoneMyrCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Lodestone Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("4"), Power(2), Life(2),
		_T(""), Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
COmegaMyrCard::COmegaMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Omega Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CLevelerCard::CLevelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leveler"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("5"), Power(10), Life(10))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	// Not optional
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightningGreavesCard::CLightningGreavesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lightning Greaves"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("0")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Shroud);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMegatogCard::CMegatogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Megatog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4),
		_T(""), Power(+3), Life(+3), CreatureKeyword::Trample)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CSlithAscendantCard::CSlithAscendantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Slith Ascendant"), CardType::Creature, CREATURE_TYPE(Slith), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlithBloodletterCard::CSlithBloodletterCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Slith Bloodletter"), CardType::Creature, CREATURE_TYPE(Slith), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlithFirewalkerCard::CSlithFirewalkerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Slith Firewalker"), CardType::Creature, CREATURE_TYPE(Slith), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlithPredatorCard::CSlithPredatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slith Predator"), CardType::Creature, CREATURE_TYPE(Slith), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSteelWallCard::CSteelWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steel Wall"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("1"), Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CTowerOfChampionsCard::CTowerOfChampionsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Champions"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("8"),
			Power(+6), Life(+6),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerOfEonsCard::CTowerOfEonsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Eons"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("8"),
			Life(+10), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerOfFortunesCard::CTowerOfFortunesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Fortunes"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("8"), 4));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerOfMurmursCard::CTowerOfMurmursCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Murmurs"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("8"), 8));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRaiseTheAlarmCard::CRaiseTheAlarmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Raise the Alarm"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			_T("Soldier A"), 2713,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSwordOfKaldraCard::CSwordOfKaldraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Kaldra"), CardType::_LegendaryArtifact | CardType::Equipment, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+5), this, PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));
		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+5), FALSE));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSwordOfKaldraCard::SetTriggerContext));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CSwordOfKaldraCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CAuriokTransfixerCard::CAuriokTransfixerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Transfixer"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new CardTypeComparer(CardType::Artifact, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CDrossProwlerCard::CDrossProwlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Prowler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CFangrenHunterCard::CFangrenHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fangren Hunter"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CGoblinStrikerCard::CGoblinStrikerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Goblin Striker"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CKrarkClanGruntCard::CKrarkClanGruntCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Krark-Clan Grunt"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+1), Life(+0), CreatureKeyword::FirstStrike)
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CKrarkClanShamanCard::CKrarkClanShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krark-Clan Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-1),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeoninAbunasCard::CLeoninAbunasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Abunas"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),	
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeoninElderCard::CLeoninElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Elder"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoomingHoverguardCard::CLoomingHoverguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Looming Hoverguard"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

			cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

			/*cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
			cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
			cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);*/

			cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
			cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
			cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);

			cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
			cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
			cpAbility->GetMoveCardModifier().SetToTop(TRUE);
			cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

			cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
/*{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}*/

//____________________________________________________________________________
//
CLoxodonMenderCard::CLoxodonMenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Mender"), CardType::Creature, CREATURE_TYPE2(Elephant, Cleric), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLumengridSentinelCard::CLumengridSentinelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lumengrid Sentinel"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLuminousAngelCard::CLuminousAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Luminous Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit D"), 2752, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMolderSlugCard::CMolderSlugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Molder Slug"), CardType::Creature, CREATURE_TYPE2(Slug, Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoriokScavengerCard::CMoriokScavengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moriok Scavenger"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimLasherCard::CNimLasherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nim Lasher"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimShamblerCard::CNimShamblerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Nim Shambler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->SetChangePowerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNimShriekerCard::CNimShriekerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nim Shrieker"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COgreLeadfootCard::COgreLeadfootCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Leadfoot"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COgreLeadfootCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool COgreLeadfootCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CPlatedSlagwurmCard::CPlatedSlagwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plated Slagwurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CPsychicMembraneCard::CPsychicMembraneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Psychic Membrane"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRustmouthOgreCard::CRustmouthOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rustmouth Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
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
CSlithStriderCard::CSlithStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slith Strider"), CardType::Creature, CREATURE_TYPE(Slith), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeshotGoblinCard::CSpikeshotGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spikeshot Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTelJiladExileCard::CTelJiladExileCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Tel-Jilad Exile"), CardType::Creature, CREATURE_TYPE2(Troll, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3),
		_T("1") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CTrollsOfTelJiladCard::CTrollsOfTelJiladCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trolls of Tel-Jilad"), CardType::Creature, CREATURE_TYPE2(Troll, Shaman), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Green, true)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVedalkenArchmageCard::CVedalkenArchmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Archmage"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChimneyImpCard::CChimneyImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chimney Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("4") BLACK_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetToZone(ZoneId::Library); //"discard" on top of the library.

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCopperhoofVorracCard::CCopperhoofVorracCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Copperhoof Vorrac"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new UntappedComparer)); //"untapped"

	cpAbility->GetSurveyCardFilter().AddComparer(new TrueCardComparer); //"permanents"
	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiscipleOfTheVaultCard::CDiscipleOfTheVaultCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of the Vault"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrossHarvesterCard::CDrossHarvesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Harvester"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGroffskithurCard::CGroffskithurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Groffskithur"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardNameComparer(_T("Groffskithur")));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVermiculosCard::CVermiculosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vermiculos"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfBloodCard::CWallOfBloodCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Blood"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(2),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->AddPayLifeDeltaCost(Life(-1));

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWoebearerCard::CWoebearerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woebearer"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCobaltGolemCard::CCobaltGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cobalt Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(2), Life(3),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CDrossScorpionCard::CDrossScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Scorpion"), CardType::_ArtifactCreature, CREATURE_TYPE(Scorpion), nID,
		_T("4"), Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDrossScorpionCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDrossScorpionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();

	if (pTarget->GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CElfReplicaCard::CElfReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elf Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Elf), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinDirigibleCard::CGoblinDirigibleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goblin Dirigible"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(4), Life(4))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetAbilityName(_T("untap ability"));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionCost(_T("4"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinReplicaCard::CGoblinReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Goblin), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinWarWagonCard::CGoblinWarWagonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin War Wagon"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(3), Life(3))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetAbilityName(_T("untap ability"));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionCost(_T("2"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGridMonitorCard::CGridMonitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grid Monitor"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(4), Life(6))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("creatures"))));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHematiteGolemCard::CHematiteGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Hematite Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(1), Life(4),
		_T("1") RED_MANA_TEXT, Power(+2), Life(+0), CreatureKeyword::Null)
{
}

//____________________________________________________________________________
//
CMalachiteGolemCard::CMalachiteGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Malachite Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(5), Life(3),
		_T("1") GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CMyrRetrieverCard::CMyrRetrieverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Retriever"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimReplicaCard::CNimReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nim Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Zombie), nID,
		_T("3"), Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPewterGolemCard::CPewterGolemCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Pewter Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(4), Life(2),
		_T("1") BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CRustElementalCard::CRustElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rust Elemental"), CardType::_ArtifactCreature, CREATURE_TYPE(Elemental), nID,
		_T("4"), Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
	cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRustsporeRamCard::CRustsporeRamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rustspore Ram"), CardType::_ArtifactCreature, CREATURE_TYPE(Sheep), nID,
		_T("4"), Power(1), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoldierReplicaCard::CSoldierReplicaCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Soldier Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("3"), Power(1), Life(3),
		_T("1") WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-3), PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->AddSacrificeCost();
}

//____________________________________________________________________________
//
CTitaniumGolemCard::CTitaniumGolemCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Titanium Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3),
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CWizardReplicaCard::CWizardReplicaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wizard Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Wizard), nID,
		_T("3"), Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();
	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncientDenCard::CAncientDenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ancient Den"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlinkmothWellCard::CBlinkmothWellCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Blinkmoth Well"), nID)
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
				_T("2"),
				TRUE, FALSE,
				new CardTypeComparer(CardType::Artifact, false)));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGlimmervoidCard::CGlimmervoidCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Glimmervoid"), nID)
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
    {
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
        cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlimmervoidCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGlimmervoidCard::BeforeResolution));

        AddAbility(cpAbility.GetPointer());
    }
}

bool CGlimmervoidCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) == 0;
}

bool CGlimmervoidCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = pAction->GetTriggeredPlayer()->GetZoneById(ZoneId::Battlefield);
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) == 0;
}

//____________________________________________________________________________
//
CGreatFurnaceCard::CGreatFurnaceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Great Furnace"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeatOfTheSynodCard::CSeatOfTheSynodCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seat of the Synod"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CTreeOfTalesCard::CTreeOfTalesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tree of Tales"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CVaultOfWhispersCard::CVaultOfWhispersCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vault of Whispers"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CAEtherSpellbombCard::CAEtherSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Æther Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBonesplitterCard::CBonesplitterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bonesplitter"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrystalShardCard::CCrystalShardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crystal Shard"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3"),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmpyrialPlateCard::CEmpyrialPlateCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Empyrial Plate"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CEmpyrialPlateCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CEmpyrialPlateCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Hand,
			new TrueCardComparer));

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireshriekerCard::CFireshriekerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fireshrieker"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGalvanicKeyCard::CGalvanicKeyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Galvanic Key"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("3"),
				FALSE, TRUE,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGraniteShardCard::CGraniteShardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Granite Shard"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
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
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE, 
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHeartwoodShardCard::CHeartwoodShardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heartwood Shard"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3"),
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeoninBladetrapCard::CLeoninBladetrapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leonin Bladetrap"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("2"),
				Life(-2),	// life delta
				new AttackingCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeoninSunStandardCard::CLeoninSunStandardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leonin Sun Standard"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMesmericOrbCard::CMesmericOrbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mesmeric Orb"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetFromOrientation(Orientation::Tap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Untap);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindsEyeCard::CMindsEyeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mind's Eye"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecrogenSpellbombCard::CNecrogenSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necrogen Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNeurokHoversailCard::CNeurokHoversailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Neurok Hoversail"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNuisanceEngineCard::CNuisanceEngineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nuisance Engine"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2"),
			_T("Pest"), TOKEN_ID_BY_NAME,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPearlShardCard::CPearlShardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pearl Shard"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T("3"),
				new AnyCreatureComparer, TRUE,
				Life(2), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(2), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CPyriteSpellbombCard::CPyriteSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyrite Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkeletonShardCard::CSkeletonShardCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skeleton Shard"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3"),
				new CardTypeComparer(CardType::_ArtifactCreature, true),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_ArtifactCreature, true),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlagwurmArmorCard::CSlagwurmArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Slagwurm Armor"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+6), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunbeamSpellbombCard::CSunbeamSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sunbeam Spellbomb"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				WHITE_MANA_TEXT,
				Life(+5), PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalismanOfDominanceCard::CTalismanOfDominanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Talisman of Dominance"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalismanOfImpulseCard::CTalismanOfImpulseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Talisman of Impulse"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalismanOfIndulgenceCard::CTalismanOfIndulgenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Talisman of Indulgence"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalismanOfProgressCard::CTalismanOfProgressCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Talisman of Progress"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTalismanOfUnityCard::CTalismanOfUnityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Talisman of Unity"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTelJiladStylusCard::CTelJiladStylusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tel-Jilad Stylus"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardOwnerComparer(this),
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->SetCardPlacement(CardPlacement::Bottom);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViridianLongbowCard::CViridianLongbowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Viridian Longbow"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CViridianLongbowCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CViridianLongbowCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEquipAbility);

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CVorracBattlehornsCard::CVorracBattlehornsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vorrac Battlehorns"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::CantBeBlockedByMultiple);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVulshokBattlegearCard::CVulshokBattlegearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vulshok Battlegear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+3), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVulshokGauntletsCard::CVulshokGauntletsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vulshok Gauntlets"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+4), FALSE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeldingJarCard::CWeldingJarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Welding Jar"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDomineerCard::CDomineerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Domineer"), CardType::EnchantCreature | CardType::EnchantArtifact, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_ArtifactCreature, true)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInertiaBubbleCard::CInertiaBubbleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inertia Bubble"), CardType::EnchantCreature, nID)
{
	//Artifact
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			CardKeyword::NoUntapInUntapPhase));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMassHysteriaCard::CMassHysteriaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mass Hysteria"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Haste));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecrogenMistsCard::CNecrogenMistsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necrogen Mists"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetDiscardCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRelicBaneCard::CRelicBaneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Relic Bane"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CRelicBaneCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRelicBaneCard::CreateEnchantAbility(CCard* pEnchantedCard,
									CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(
								pEnchantCard, NodeId::UpkeepStep, pEnchantedCard));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAltarsLightCard::CAltarsLightCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Altar's Light"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CBattlegrowthCard::CBattlegrowthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Battlegrowth"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

//____________________________________________________________________________
//
CBloodscentCard::CBloodscentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Bloodscent"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Lure, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CElectrostaticBoltCard::CElectrostaticBoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Electrostatic Bolt"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElectrostaticBoltCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CElectrostaticBoltCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)target;
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	CLifeModifier pModifier2 = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (!pCreature->GetCardType().IsArtifact()) pModifier1.ApplyTo(pCreature);
	if (pCreature->GetCardType().IsArtifact()) pModifier2.ApplyTo(pCreature);

	return true;
}

//____________________________________________________________________________
//
CIrradiateCard::CIrradiateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Irradiate"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIrradiateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CIrradiateCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nArtifactCount;
		Context.nValue2 = -nArtifactCount;

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
CPredatorsStrikeCard::CPredatorsStrikeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Predator's Strike"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Trample, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CRegressCard::CRegressCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Regress"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CShrapnelBlastCard::CShrapnelBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shrapnel Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards"))); // sacrifice a artifact in addition to cast
}

//____________________________________________________________________________
//
CTrashForTreasureCard::CTrashForTreasureCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Trash for Treasure"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards"))); // sacrifice a artifact in addition to cast

	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CBetrayalOfFleshCard::CBetrayalOfFleshCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Betrayal of Flesh"), CardType::Instant, nID)
{
	{
		//Destroy target creature.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Return target creature card from your graveyard to the battlefield.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entwine-Sacrifice three lands.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetAbilityText(_T("Entwine - Choose both. Casts"));

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

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDreamsGripCard::CDreamsGripCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream's Grip"), CardType::Instant, nID)

	, m_EntwineCost(_T("1"))
{
	{
		//Tap target permanent.
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				TRUE, FALSE, //only tap
				new TrueCardComparer));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Untap target permanent.
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				FALSE, TRUE, //only untap
				new TrueCardComparer));

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
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TappedComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CDreamsGripCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::_Tokens);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CRoarOfTheKhaCard::CRoarOfTheKhaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Roar of the Kha"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRoarOfTheKhaCard::OnResolutionCompleted))
	, m_EntwineCost(_T("1") WHITE_MANA_TEXT)
{
	{
		//Creatures you control get +1/+1 until end of turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+1), Life(+1)));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Creatures you control get +1/+1 until end of turn. Casts"));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Untap all creatures you control.
		counted_ptr<CGlobalUntapSpell> cpSpell(
			::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->SetAbilityText(_T("Untap all creatures you control. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CRoarOfTheKhaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CPlayer* cont = GetController();

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));

		pModifier.ApplyTo(cont);
	}
}

//____________________________________________________________________________
//
COneDozenEyesCard::COneDozenEyesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("One Dozen Eyes"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &COneDozenEyesCard::OnResolutionCompleted))
	, m_EntwineCost(GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	{
		//Put a 5/5 green Beast creature token onto the battlefield.
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") GREEN_MANA_TEXT,
				_T("Beast D"), 2793,
				1));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Put five 1/1 green Insect creature tokens onto the battlefield.
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") GREEN_MANA_TEXT,
				_T("Insect B"), 2723,
				5));

		AddSpell(cpSpell.GetPointer());
	}
}

void COneDozenEyesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Insect B"), 2723, 5);

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CSolarTideCard::CSolarTideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Solar Tide"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CSolarTideCard::OnResolutionCompleted))
{
	{
		//Destroy all creatures with power 2 or less.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CreaturePowerComparer<std::less<int>>(3),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy all creatures with power 2 or less. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy all creatures with power 3 or greater.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CreaturePowerComparer<std::greater<int>>(2),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy all creatures with power 3 or greater. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entwine-Sacrifice two lands.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CreaturePowerComparer<std::less<int>>(3),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetAbilityText(_T("Entwine - Choose both. Casts"));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CSolarTideCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
	CPlayer* opp =  m_pGame->GetNextPlayer(GetController());

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreaturePowerComparer<std::greater<int>>(2));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier.ApplyTo(cont);
	pModifier.ApplyTo(opp);
}

//____________________________________________________________________________
//
CTemporalCascadeCard::CTemporalCascadeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Cascade"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTemporalCascadeCard::OnResolutionCompleted))
	, m_EntwineCost(_T("2"))
{
	{
		//Each player shuffles his or her hand and graveyard into his or her library.
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, 0, 0));

		cpSpell->SetMergeGraveyard(TRUE);
		cpSpell->SetMergeHand(TRUE);

		cpSpell->SetAbilityText(_T("Each player shuffles his or her hand and graveyard into his or her library. Casts"));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Each player draws seven cards.
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, 7, 7));

		cpSpell->SetAbilityText(_T("Each player draws seven cards. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CTemporalCascadeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CPlayer* cont = GetController();
		CPlayer* opp =  m_pGame->GetNextPlayer(GetController());

		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));

		pModifier.ApplyTo(cont);
		pModifier.ApplyTo(opp);
	}
}

//____________________________________________________________________________
//
CToothAndNailCard::CToothAndNailCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tooth and Nail"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CToothAndNailCard::OnResolutionCompleted))
	, m_EntwineCost(_T("2"))
{
	{
		//Search your library for up to two creature cards, reveal them, put them into your hand, then shuffle your library.
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("creatures")), 
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Put up to two creature cards from your hand onto the battlefield.
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("creatures")), 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpSpell->SetFromZoneId(ZoneId::Hand);

		AddSpell(cpSpell.GetPointer());
	}
}

void CToothAndNailCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(0), MaximumValue(2), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("creatures")), // what cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CNightmareLashCard::CNightmareLashCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nightmare Lash"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("0")));

	cpAbility->AddPayLifeDeltaCost(Life(-3));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CNightmareLashCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CNightmareLashCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerumTankCard::CSerumTankCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serum Tank"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("3"), 1));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlayedNimCard::CFlayedNimCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Flayed Nim"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("2") BLACK_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlayedNimCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CFlayedNimCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
//
//"Dead-Iron Sledge\n{1}\nArtifact - Equipment\nMRD,U\nWhenever equipped creature blocks or becomes blocked by a creature, destroy both creatures.\rEquip {2}"
//It doesn't trigger.
//
//CDeadIronSledgeCard::CDeadIronSledgeCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Dead-Iron Sledge"), CardType::Artifact | CardType::Equipment, nID, 
//		_T("1"), AbilityType::Artifact)
//{
//	counted_ptr<CEquipAbility> cpAbility(
//		::CreateObject<CEquipAbility>(this, _T("2")));
//
//	cpAbility->AddCardModifier(new CCardAbilityModifier(
//		CCardAbilityModifier::CreateAbilityCallback(this,
//			&CDeadIronSledgeCard::CreateEquipmentAbility)));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//counted_ptr<CAbility> CDeadIronSledgeCard::CreateEquipmentAbility(CCard* pCard)
//{
//	typedef
//		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
//							CWhenSelfAttackedBlocked::BlockEventCallback2, 
//							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
//
//	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
//
//	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//
//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeadIronSledgeCard::SetTriggerContext));
//
//	// Move this card too
//	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
//bool CDeadIronSledgeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
//												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
//{
//	triggerContext.m_pCard = pCreature2;
//	return true;
//}
//
////____________________________________________________________________________
////
CTanglerootCard::CTanglerootCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tangleroot"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTurnToDustCard::CTurnToDustCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Turn to Dust"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Equipment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT)));
}

//____________________________________________________________________________
//
CDeconstructCard::CDeconstructCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Deconstruct"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT)));
}

//____________________________________________________________________________
//
CLightningCoilsCard::CLightningCoilsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lightning Coils"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		// Put a counter when a nontoken creature you control is put into a graveyard from the battlefield
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Token creation
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	    counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		 
	    cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	    cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLightningCoilsCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLightningCoilsCard::BeforeResolution));

        AddAbility(cpAbility.GetPointer());
	}
}

bool CLightningCoilsCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	return GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount() >= 5;
}

bool CLightningCoilsCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();
	if (nCounterCount < 5) return false;	

	CCardCounterModifier pModifier1 = CCardCounterModifier(CHARGE_COUNTER, 0, true);
	pModifier1.ApplyTo(this);

	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Elemental F"), 2801, nCounterCount, false, ZoneId::Battlefield, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	CScheduledCardModifier* pModifier3 = new CScheduledCardModifier(GetGame(),
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater);

	for (int i = 0; i < pTokens.GetSize(); ++i)
		pModifier3->ApplyTo(pTokens.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CDampingMatrixCard::CDampingMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Damping Matrix"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature, false));
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));

	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlayActivatedAbilities2,
			(int)(&m_CardFilter)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarterInBloodCard::CBarterInBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Barter in Blood"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			2,
			new AnyCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CClockworkBeetleCard::CClockworkBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Beetle"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("1"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);

		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CClockworkCondorCard::CClockworkCondorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Clockwork Condor"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("4"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);

		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CClockworkDragonCard::CClockworkDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Clockwork Dragon"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("7"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 6, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);

		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CClockworkVorracCard::CClockworkVorracCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Vorrac"), CardType::_ArtifactCreature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("5"), Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), -1);

		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCardModifier::Operation::ApplyToLater, CScheduledCardModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

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

//____________________________________________________________________________
//
CChromeMoxCard::CChromeMoxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chrome Mox"), CardType::Artifact, nID,
		_T(""), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChromeMoxCard::OnCardSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CChromeMoxCard::OnZoneChanged))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChromeMoxCard::BeforeResolution));

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
				&CChromeMoxCard::CanPlay1)));

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
				&CChromeMoxCard::CanPlay2)));

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
				&CChromeMoxCard::CanPlay3)));

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
				&CChromeMoxCard::CanPlay4)));

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
				&CChromeMoxCard::CanPlay5)));

		cpAbility->Add(cpTrait.GetPointer());

    	AddAbility(cpAbility.GetPointer());
    }
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

        cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CChromeMoxCard::CanPlay6)));

		cpAbility->Add(cpTrait.GetPointer());

    	AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChromeMoxCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChromeMoxCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CChromeMoxCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CChromeMoxCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CChromeMoxCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't imprint anything"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);
		if (!pCard->GetCardType().IsArtifact() && !pCard->GetCardType().IsLand())
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Imprint %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CChromeMoxCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't imprint anything"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s imprints %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pExiled.AddCard(pCard, CardPlacement::Top);
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Discard, pSelectionPlayer);

				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

BOOL CChromeMoxCard::CanPlay1(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return false;

    return pExiled.GetAt(0)->IsColor(CManaPool::Color::White);
}

BOOL CChromeMoxCard::CanPlay2(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return false;

    return pExiled.GetAt(0)->IsColor(CManaPool::Color::Blue);
}

BOOL CChromeMoxCard::CanPlay3(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return false;

    return pExiled.GetAt(0)->IsColor(CManaPool::Color::Black);
}

BOOL CChromeMoxCard::CanPlay4(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return false;

    return pExiled.GetAt(0)->IsColor(CManaPool::Color::Red);
}

BOOL CChromeMoxCard::CanPlay5(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return false;

	return pExiled.GetAt(0)->IsColor(CManaPool::Color::Green);
}

BOOL CChromeMoxCard::CanPlay6(BOOL bIncludeTricks)
{
	if (pExiled.GetSize() == 0) return TRUE;
	if (pExiled.GetAt(0)->IsColor(CManaPool::Color::White)) return FALSE;
	if (pExiled.GetAt(0)->IsColor(CManaPool::Color::Blue)) return FALSE;
	if (pExiled.GetAt(0)->IsColor(CManaPool::Color::Black)) return FALSE;
	if (pExiled.GetAt(0)->IsColor(CManaPool::Color::Red)) return FALSE;
	if (pExiled.GetAt(0)->IsColor(CManaPool::Color::Green)) return FALSE;
	return TRUE;
}

void CChromeMoxCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CTelJiladArchersCard::CTelJiladArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CTelJiladChosenCard::CTelJiladChosenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Chosen"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CNeedlebugCard::CNeedlebugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Needlebug"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("4"), Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CChaliceOfTheVoidCard::CChaliceOfTheVoidCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chalice of the Void"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChaliceOfTheVoidCard::SetTriggerContext2));
	    cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CChaliceOfTheVoidCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);
     
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);	
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CChaliceOfTheVoidCard::SetTriggerContext1));		
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->AddAbilityTag(AbilityTag::Counterspell);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CChaliceOfTheVoidCard::SetTriggerContext1(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	if (pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal() == GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount())
	{
		triggerContext.m_pCard = pCard;
		return true;
	}
	return false;
}
bool CChaliceOfTheVoidCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	int nColorCount = GetLastCastingExtraValue();

	CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, +nColorCount, true);
	pModifier.ApplyTo((CCard*)this);	
	return true;
}
bool CChaliceOfTheVoidCard::SetTriggerContext2(TriggeredAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}

//____________________________________________________________________________
//
CNimDevourerCard::CNimDevourerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nim Devourer"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CNimDevourerCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->SetChangePowerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CNimDevourerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CMyrMindservantCard::CMyrMindservantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Mindservant"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("1"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Shuffle your library. Activates"));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMyrMindservantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMyrMindservantCard::BeforeResolution(CAbilityAction* pAction) const
{
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CFrogmiteCard::CFrogmiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frogmite"), CardType::_ArtifactCreature, CREATURE_TYPE(Frog), nID,
		_T("4"), Power(2), Life(2))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBroodstarCard::CBroodstarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Broodstar"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSomberHoverguardCard::CSomberHoverguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Somber Hoverguard"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMyrEnforcerCard::CMyrEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Enforcer"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("7"), Power(4), Life(4))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScaleOfChissGoriaCard::CScaleOfChissGoriaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scale of Chiss-Goria"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CToothOfChissGoriaCard::CToothOfChissGoriaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tooth of Chiss-Goria"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAssertAuthorityCard::CAssertAuthorityCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Assert Authority"), CardType::Instant, nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	m_pCounterSpell->SetToZone(ZoneId::Exile, TRUE);

	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThoughtcastCard::CThoughtcastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thoughtcast"), CardType::Sorcery, nID)

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThirstforKnowledgeCard::CThirstforKnowledgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thirst for Knowledge"), CardType::Instant, nID)
{
	counted_ptr<CThirstforKnowledgeSpell> cpSpell(
		::CreateObject<CThirstforKnowledgeSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 3));
	ATLASSERT(cpSpell);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAuriokBladewardenCard::CAuriokBladewardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Bladewarden"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAuriokBladewardenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAuriokBladewardenCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = GET_INTEGER(GetLastKnownPower());
	Context.nValue2 = GET_INTEGER(GetLastKnownPower());

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CLivingHiveCard::CLivingHiveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Living Hive"), CardType::Creature, CREATURE_TYPE2(Elemental, Insect), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLivingHiveCard::SetTriggerContextL));
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect B"), 2723, 0);

		m_pTriggeredAbility = cpAbility.GetPointer();

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(m_pTriggeredAbility);
	}
}

bool CLivingHiveCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CNeurokFamiliarCard::CNeurokFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Neurok Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNeurokFamiliarCard::BeforeResolution));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CNeurokFamiliarCard::BeforeResolution(CNeurokFamiliarCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (pNextDraw->GetCardType().IsArtifact())
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Hand);
	}
	else
	{
		m_pTriggeredAbility->SetReorder(TRUE, ZoneId::Graveyard);
	}

	return true;
}

//____________________________________________________________________________
//
CNeurokSpyCard::CNeurokSpyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Neurok Spy"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddUnblockableWalk(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CViridianJoinerCard::CViridianJoinerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Joiner"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add an amount of {G} to your mana pool equal to its power with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViridianJoinerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CViridianJoinerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (nPower!=0) for (int i=0; i<nPower; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CMaskOfMemoryCard::CMaskOfMemoryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mask of Memory"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback, 
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->SetDrawCount(2);
		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScrabblingClawsCard::CScrabblingClawsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scrabbling Claws"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));

		cpAbility->AddTapCost();

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScrabblingClawsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CScrabblingClawsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* target = pAction->GetAssociatedPlayer();	

	CZoneModifier pModifier = CZoneModifier(GetGame(),
		ZoneId::Graveyard, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(target);
	return true;
}

//____________________________________________________________________________
//
CJourneyOfDiscoveryCard::CJourneyOfDiscoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Journey of Discovery"), CardType::Sorcery, nID)

	, m_EntwineCost(_T("2") GREEN_MANA_TEXT)
{
	{
		//Search your library for up to two basic land cards, reveal them, put them into your hand, then shuffle your library.
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("basic lands")),
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//You may play up to two additional lands this turn.
		counted_ptr<CPlayExtraLandSpell> cpSpell(
			::CreateObject<CPlayExtraLandSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT, 2, TRUE));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJourneyOfDiscoveryCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CJourneyOfDiscoveryCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
			MinimumValue(0), MaximumValue(2),
			GetController(), ZoneId::Library,
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Hand, TRUE, CardPlacement::Top, FALSE, TRUE);

		pModifier.ApplyTo(GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CMoltenRainCard::CMoltenRainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Molten Rain"), CardType::Sorcery, nID)
{
	{
		//Destroy target basic land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::BasicLand, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target nonbasic land and deal damage on resolution.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::NonbasicLand, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
													   DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CWailOfTheNimCard::CWailOfTheNimCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wail of the Nim"), CardType::Instant, nID)
{
	{
		//Regenerate each creature you control.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(
			new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CRegenerateModifier())));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Wail of the Nim deals 1 damage to each creature and each player.
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				Life(-1),
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entwine {B}.
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Life(-1),
				new AnyCreatureComparer, TRUE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityText(_T("Entwine - Choose both. Casts"));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWailOfTheNimCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CWailOfTheNimCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CRegenerateModifier()));

	pModifier.ApplyTo(GetController());
	return true;
}

//____________________________________________________________________________
//
CDuskworkerCard::CDuskworkerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Duskworker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(2),
		_T("3"), Power(+1), Life(+0))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDuskworkerCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::Regeneration);

	AddAbility(cpAbility.GetPointer());
}

void CDuskworkerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetOriginatingCard(); //=Source card
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CRegenerateModifier pModifier = CRegenerateModifier();

	pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
/*CIsochronScepterCard::CIsochronScepterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Isochron Scepter"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFilter.AddComparer(pComparer);
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();		
	
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);		

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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}*/
//____________________________________________________________________________
//
CPromiseOfPowerCard::CPromiseOfPowerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Promise of Power"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPromiseOfPowerCard::OnResolutionCompleted))
	, m_EntwineCost(_T("4"))
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, 
				5));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPromiseOfPowerCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

void CPromiseOfPowerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost))
	{
		CPlayer* pController = pAbilityAction->GetController();

		int nHandSize = pController->GetZoneById(ZoneId::Hand)->GetSize();

		int nTokenCount = 1;

		int nMultiplier = 0;
		if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
				nTokenCount <<= nMultiplier;

		for (int i = 0; i < nTokenCount; ++i)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Demon B"), 2904));		

			if (!m_pGame->IsThinking())
			{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2904); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Demon B")); }

			pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
			CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

			pCreature->SetPrintedPower(Power(nHandSize));
			pCreature->SetPrintedToughness(Life(nHandSize));		

			cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}
}

bool CPromiseOfPowerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nHandSize = pController->GetZoneById(ZoneId::Hand)->GetSize();

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Demon B"), 2904));		

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2904); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Demon B")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nHandSize));
		pCreature->SetPrintedToughness(Life(nHandSize));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CReiverDemonCard::CReiverDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Reiver Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Hand, ZoneId::Stack));

		CCardFlagModifier* pModifier1 = new CCardFlagModifier;
		pModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier1);
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CReiverDemonCard::SetTriggerContext));
			
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact | CardType::Black, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CReiverDemonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pFromZone->GetPlayer() == pByPlayer &&
		pFromZone->GetZoneId() == ZoneId::Stack &&
		GetCardFlag()->HasAbilityFlag(0) == TRUE &&
		moveType == MoveType::Cast)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLeoninDenGuardCard::CLeoninDenGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Den-Guard"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CEquipPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CEquipPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1), CreatureKeyword::Vigilance));		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CSkyhunterCubCard::CSkyhunterCubCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyhunter Cub"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
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
CMyrIncubatorCard::CMyrIncubatorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Myr Incubator"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CMyrIncubatorSearchLibrarySpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CMyrIncubatorSearchLibrarySpell>>(this,
				 _T("6"), CCardFilter::GetFilter(_T("artifact cards")),
															ZoneId::Exile, TRUE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0),MaximumValue(SpecialNumber::Any));
		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRazorBarrierCard::CRazorBarrierCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Razor Barrier"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CRazorBarrierCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetGainKeywordSpell> cpSpell(
			::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Casts (color)"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new TrueCardComparer));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Casts (artifacts)"));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
}

void CRazorBarrierCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	if (bResult) pCard->GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CCloudpostCard::CCloudpostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cloudpost"), nID, CardType::_LocusLand)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));//2-Dec-2011 AI will use its ability now.

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {1} to your mana pool for each Locus on the battlefield. Activate"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCloudpostCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCloudpostCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattle = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Locus, false));

	int n = (m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer()) + m_CardFilter_temp.CountIncluded(pOppBattle->GetCardContainer()))-1;//2-Dec-2011 AI will use its ability now.

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CWarElementalCard::CWarElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CWarElementalCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarElementalCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWarElementalCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWarElementalCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return GetGame()->GetNextPlayer(GetController())->GetDamageTakenThisTurn() == Life(0);
}

bool CWarElementalCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CWarElementalCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCardCounterModifier modifier(_T("+1/+1"), triggerContext.nValue1, false);
	modifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CSunDropletCard::CSunDropletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sun Droplet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunDropletCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSunDropletCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, -1));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSunDropletCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunDropletCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CSunDropletCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, triggerContext.nValue1, false);

	pModifier.ApplyTo(this);

	return true;
}

bool CSunDropletCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();
	if (nCounterCount<1) return false;	
	return true;
}

//____________________________________________________________________________
//
CMirrorGolemCard::CMirrorGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirror Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMirrorGolemCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->SetAbilityName(_T("Imprint"));

	AddAbility(cpAbility.GetPointer());
}

void CMirrorGolemCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CardType ctype = pAbilityAction->GetAssociatedCard()->GetCardType();
	m_CardFilter.SetComparer(new CardTypeComparer(ctype & CardType::_AllOfficial, false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CGoblinCharbelcherCard::CGoblinCharbelcherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Charbelcher"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
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

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinCharbelcherCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CGoblinCharbelcherCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = 0;
	int k = 1;
	bool search = true; 

	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Library);

	for (int i = pZone->GetSize() - 1; i >= 0; --i)
	{		
		if (search && !pZone->GetAt(i)->GetCardType().IsLand())
		{
			n = n+1;
			if ( (pZone->GetAt(i)->GetCardType() & CardType::Mountain).Any() ) k = 2;
			
		}
		else 
			if ((search && pZone->GetAt(i)->GetCardType().IsLand()))
			{
				if ( (pZone->GetAt(i)->GetCardType() & CardType::Mountain).Any() ) k = 2;
				n=n+1;
				search = false;
			}
	}	

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
		CZoneModifier::RoleType::AllPlayers);			
		pModifier.AddSelection(MinimumValue(0), MaximumValue(0), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		pModifier.SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);

	//if (n > 0)
	//{	
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -1*n*k;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
			it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}				
	
        pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		Context = pAction->GetValue();

		Context.nValue1 = -1*n*k;


		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
			it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

	//}

	pModifier.ApplyTo(pAction->GetController());

	return TRUE;
}
//____________________________________________________________________________
//
CSoulNovaCard::CSoulNovaCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Soul Nova"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulNovaCard::BeforeResolution));
}

bool CSoulNovaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EquippedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CBoshIronGolemCard::CBoshIronGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bosh, Iron Golem"), CardType::_LegendaryCreature | CardType::Artifact, CREATURE_TYPE(Golem), nID,
		_T("8"), Power(6), Life(7))
{
	GetCreatureKeyword()->AddTrample(false);

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer,
			true,
			Life(-0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoshIronGolemCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBoshIronGolemCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCMC = pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)->GetConvertedManaCost();

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCMC;

	if (pAction->GetAssociatedPlayer())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	
	if (pAction->GetAssociatedCard())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CForgeArmorCard::CForgeArmorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forge Armor"), CardType::Instant, nID)
{
    counted_ptr<CTargetSpell> cpSpell(
        ::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("4") RED_MANA_TEXT,
			new AnyCreatureComparer,
			false));
	ATLASSERT(cpSpell);

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForgeArmorCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CForgeArmorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	if (!pCard->GetCardType().IsCreature()) return false;

	int nCMC = pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)->GetConvertedManaCost();

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nCMC);
	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CAltarOfShadowsCard::CAltarOfShadowsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Altar of Shadows"), CardType::Artifact, nID,
		_T("7"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("7"),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAltarOfShadowsCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAltarOfShadowsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAltarOfShadowsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->IsMainPhase(true);
}

bool CAltarOfShadowsCard::BeforeResolution(CAbilityAction* pAction)
{
	int n = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	CManaPoolModifier modifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));
	for (int i = 0; i < n; ++i) modifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CBlinkmothUrnCard::CBlinkmothUrnCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blinkmoth Urn"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBlinkmothUrnCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBlinkmothUrnCard::BeforeResolveSelection));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CBlinkmothUrnCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetGame()->IsMainPhase(true);
}

bool CBlinkmothUrnCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (GetOrientation()->IsTapped()) return false;

	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

	int n = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer());
	CManaPoolModifier modifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
	for (int i = 0; i < n; ++i) modifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CGlissaSunseekerCard::CGlissaSunseekerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Glissa Sunseeker"), CardType::_LegendaryCreature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""), 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGlissaSunseekerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGlissaSunseekerCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* target = pAction->GetAssociatedCard();
	return (target->GetConvertedManaCost() == pAction->GetController()->GetManaPool().GetTotal());
}
//____________________________________________________________________________
//
CBansheesBladeCard::CBansheesBladeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Banshee's Blade"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, CHARGE_COUNTER));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddComparer(new EquippedByComparer(this));		
		cpAbility->SetEquipment();


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, 
								&CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
COblivionStoneCard::COblivionStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oblivion Stone"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &COblivionStoneCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("4"),
				new TrueCardComparer, FALSE));

		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(FATE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T("5"), 
				new TrueCardComparer,
				ZoneId::Graveyard, TRUE, MoveType::Destroy));
		ATLASSERT(cpAbility);

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGlobalCardFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(FATE_COUNTER, 0));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void COblivionStoneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(FATE_COUNTER, 0, true)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}
}
//____________________________________________________________________________
//
CKrarksThumbCard::CKrarksThumbCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Krark's Thumb"), CardType::_LegendaryArtifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CoinFlipCheating, 1));

		cpEnchantment->SetMultipleEffectType(TRUE);
		cpEnchantment->SetAffectControllerOnly();

		AddSpell(cpEnchantment.GetPointer());
	}
}
//____________________________________________________________________________
//
CFieryGambitCard::CFieryGambitCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fiery Gambit"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFieryGambitCard::OnFlipSelected))
	, m_Continue(pGame, CSelectionSupport::SelectionCallback(this, &CFieryGambitCard::OnContinueSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFieryGambitCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CFieryGambitCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	FlipCount = 0;
	FlipFunction(pController, pTarget);
	return true;
}

void CFieryGambitCard::FlipFunction (CPlayer* pController, CCreatureCard* pTarget)
{
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
		FlipCount++;
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_Continue.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pTarget);

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
	return;
}

void CFieryGambitCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				FlipCount++;
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());
			
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

					entries.push_back(selectionEntry);
				}
				m_Continue.AddSelectionRequest(entries, 1, 1, NULL, GetController(), dwContext1);

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
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
		}
}

void CFieryGambitCard::OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s decides to continue flipping"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				FlipFunction(pSelectionPlayer, (CCreatureCard*)dwContext1);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s decides to stop flipping"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				if (FlipCount >= 1)
				{
					CLifeModifier* pModifier1 = new CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
					pModifier1->ApplyTo((CCreatureCard*)dwContext1);
				}

				if (FlipCount >= 2)
				{
					CLifeModifier* pModifier2 = new CLifeModifier(Life(-6), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
					for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					{
						if(GetGame()->GetPlayer(ip) != pSelectionPlayer)
							pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
					}
				}
				
				if (FlipCount >= 3)
				{
					CDrawCardModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(9), MaximumValue(9));
					pModifier3->ApplyTo(pSelectionPlayer);
					CZoneCardModifier pModifier4 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
						std::auto_ptr<CCardModifier>(new CCardOrientationModifier(false)));
					pModifier4.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CGrabTheReinsCard::CGrabTheReinsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grab the Reins"), CardType::Instant, nID)
   , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGrabTheReinsCard::OnCreatureSelected))
{
	{
		//Until end of turn, you gain control of target creature and it gains haste.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2);

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Until end of turn, you gain control of target creature and it gains haste. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Sacrifice a creature, then Grab the Reins deals damage equal to that creature's power to target creature or player.
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrabTheReinsCard::BeforeResolution1));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Sacrifice a creature, then Grab the Reins deals damage equal to that creature's power to target creature or player."));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entwine {2R}
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, true,
				_T("")));

		cpSpell->GetCost().AddManaCost(_T("2") RED_MANA_TEXT);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrabTheReinsCard::BeforeResolution2));

		cpSpell->SetAbilityName(_T("Entwine"));
		cpSpell->SetAbilityText(_T("Entwine - Choose both. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CGrabTheReinsCard::BeforeResolution1(CAbilityAction* pAction)
{
	CreatureSelection(pAction->GetController(), pAction->GetAssociatedCard(), pAction->GetAssociatedPlayer());
	return true;
}

bool CGrabTheReinsCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCreatureCard* pTarget = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTargetCreature = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();
	CPlayer* pTargetPlayer = (CPlayer*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();
		
	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier3->GetModifier().SetOneTurnOnly(TRUE);

	pModifier1->ApplyTo(pTarget);
	pModifier2->ApplyTo(pTarget);
	pModifier3->ApplyTo(pTarget);

	CreatureSelection(pController, pTargetCreature, pTargetPlayer);
	return true;
}

void CGrabTheReinsCard::CreatureSelection(CPlayer* pPlayer, CCard* pTargetCreature, CPlayer* pTargetPlayer)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);

	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;
					entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
								
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));
				entries.push_back(entry);
			}
		}
		if (!pTargetPlayer)
			m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTargetCreature, 0);
		else
			m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTargetPlayer, 1);
	}
}

void CGrabTheReinsCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCreature = (CCreatureCard*)it->dwContext;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCreature->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			int nPower = (int)pCreature->GetPower();
			
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

			pModifier1.ApplyTo(pCreature);

			if (nPower > 0)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				if (dwContext2 == 0)
					pModifier2.ApplyTo((CCreatureCard*)dwContext1);
				else
					pModifier2.ApplyTo((CPlayer*)dwContext1);
			}
			return;
		}
}

//____________________________________________________________________________
//
CSpoilsOfTheVaultCard::CSpoilsOfTheVaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Demonic Consultation"), CardType::Instant, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSpoilsOfTheVaultCard::OnNameSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpoilsOfTheVaultCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSpoilsOfTheVaultCard::BeforeResolution(CAbilityAction* pAction)
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

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CSpoilsOfTheVaultCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				int nLibrarySize = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize();

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(nLibrarySize), MaximumValue(nLibrarySize), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				CLifeModifier pModifier2 = CLifeModifier(Life(-nLibrarySize), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

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
				int n = 0;
				int nLifeLoss = 0;
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
						if (pLibrary->GetAt(i)->GetPrintedCardName() == pSelected->GetPrintedCardName())
						{
							bSearch = false;
							pFound = pLibrary->GetAt(i);
						}
						else
							++nLifeLoss;
					}
				}

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new SpecificCardComparer(pFound));

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter, // any cards
						ZoneId::Hand, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on top
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier1.SetReorderInformation(true, ZoneId::Exile);
				
				CLifeModifier pModifier2 = CLifeModifier(Life(-nLifeLoss), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CProteusStaffCard::CProteusStaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Proteus Staff"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject <CActivatedAbility<CTargetSpell>>(this, 
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProteusStaffCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CProteusStaffCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	pTarget->Move(pTarget->GetOwner()->GetZoneById(ZoneId::Library), pAction->GetController(), MoveType::Others, CardPlacement::Bottom);
	
	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

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

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier2.ApplyTo(pPlayer);
	
	return false;
}

//____________________________________________________________________________
//
CExtraplanarLensCard::CExtraplanarLensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Extraplanar Lens"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CExtraplanarLensCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExtraplanarLensCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExtraplanarLensCard::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExtraplanarLensCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExtraplanarLensCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CExtraplanarLensCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pImprinted.GetSize() == 0) return false;
	if (pCard != pImprinted.GetAt(0)) return false;
	return true;
}

bool CExtraplanarLensCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pImprinted.RemoveAll();
	return true;
}

bool CExtraplanarLensCard::BeforeResolution(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(pAction->GetAssociatedCard());

	pImprinted.AddCard(pAction->GetAssociatedCard(), CardPlacement::Top);
	return false;
}

void CExtraplanarLensCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pImprinted.RemoveAll();
	}
}

bool CExtraplanarLensCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	if (pImprinted.GetSize() == 0) return false;
	if (pManaAction->GetOriginatingCard()->GetPrintedCardName() != pImprinted.GetAt(0)->GetPrintedCardName()) return false;

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
bool CExtraplanarLensCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CLiarsPendulumCard::CLiarsPendulumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Liar's Pendulum"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLiarsPendulumCard::OnNameSelected))
	, m_Guess(pGame, CSelectionSupport::SelectionCallback(this, &CLiarsPendulumCard::OnGuessed))
	, m_RevealSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLiarsPendulumCard::OnRevealSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject <CActivatedAbility<CTargetSpell>>(this, 
			_T("2"),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLiarsPendulumCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CLiarsPendulumCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
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

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	return true;
}

void CLiarsPendulumCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Guess that an impossible card is in %s's hand"), pSelectionPlayer->GetPlayerName());

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Guess that an impossible card is NOT in %s's hand"), pSelectionPlayer->GetPlayerName());

					entries.push_back(selectionEntry);
				}

				m_Guess.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pSelectionPlayer, 0);
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
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Guess that a card named %s is in %s's hand"), pSelected->GetPrintedCardName(), pSelectionPlayer->GetPlayerName());

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
						selectionEntry.strText.Format(_T("Guess that a card named %s is NOT in %s's hand"), pSelected->GetPrintedCardName(), pSelectionPlayer->GetPlayerName());

					entries.push_back(selectionEntry);
				}

				m_Guess.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pSelectionPlayer, (DWORD)pSelected);

				return;
			}
		}
}

void CLiarsPendulumCard::OnGuessed(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CPlayer* pController = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (dwContext2 == 0)
						strMessage.Format(_T("%s guesses that an impossible card is in %s's hand"), pSelectionPlayer->GetPlayerName(), pController->GetPlayerName());
					else
						strMessage.Format(_T("%s guesses that a card named %s is in %s's hand"), pSelectionPlayer->GetPlayerName(), ((CCard*)dwContext2)->GetPrintedCardName(), pController->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Reveal your hand"));

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Don't reveal your hand"));

					entries.push_back(selectionEntry);
				}

				if (dwContext2 == 0)
					m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 0, (DWORD)pSelectionPlayer);
				else
				{
					CCardFilter m_CardFilter;
					m_CardFilter.SetComparer(new CardNameComparer(((CCard*)dwContext2)->GetPrintedCardName()));

					if (m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
						m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 1, (DWORD)pSelectionPlayer);
					else
						m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 0, (DWORD)pSelectionPlayer);
				}
				return;
			}
			if (it->dwContext == 1)
			{
				CPlayer* pController = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (dwContext2 == 0)
						strMessage.Format(_T("%s guesses that an impossible card is NOT in %s's hand"), pSelectionPlayer->GetPlayerName(), pController->GetPlayerName());
					else
						strMessage.Format(_T("%s guesses that a card named %s is NOT in %s's hand"), pSelectionPlayer->GetPlayerName(), ((CCard*)dwContext2)->GetPrintedCardName(), pController->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("Reveal your hand"));

					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("Don't reveal your hand"));

					entries.push_back(selectionEntry);
				}

				if (dwContext2 == 0)
					m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 1, (DWORD)pSelectionPlayer);
				else
				{
					CCardFilter m_CardFilter;
					m_CardFilter.SetComparer(new CardNameComparer(((CCard*)dwContext2)->GetPrintedCardName()));

					if (m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
						m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 0, (DWORD)pSelectionPlayer);
					else
						m_RevealSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, 1, (DWORD)pSelectionPlayer);
				}
				return;
			}
		}
}

void CLiarsPendulumCard::OnRevealSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CPlayer* pTarget = (CPlayer*)dwContext2;
				if (dwContext1 == 0)
				{
					if (!m_pGame->IsThinking())
					{
						CString strMessage;
						strMessage.Format(_T("%s reveals his hand -- %s's guess was wrong"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName());
						m_pGame->Message(
							strMessage,
							pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}

					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

					pModifier1.ApplyTo(pSelectionPlayer);
					pModifier2.ApplyTo(pSelectionPlayer);

				}
				if (dwContext1 == 1)
				{
					if (!m_pGame->IsThinking())
					{
						CString strMessage;
						strMessage.Format(_T("%s reveals his hand -- %s's guess was right"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName());
						m_pGame->Message(
							strMessage,
							pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}

					CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

					pModifier.ApplyTo(pSelectionPlayer);
				}
				return;
			}
			if (it->dwContext == 1)
			{
				CPlayer* pController = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't reveal his hand"), pSelectionPlayer->GetPlayerName(), pController->GetPlayerName());
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
CLifesparkSpellbombCard::CLifesparkSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifespark Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), false));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLifesparkSpellbombCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLifesparkSpellbombCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land D"), 64049, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
COverrideCard::COverrideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Override"), CardType::Instant, nID)
{
	{
		counted_ptr<COverrideAbility> cpSpell(
		::CreateObject<COverrideAbility>(this, _T("2") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}

COverrideCard::COverrideAbility::COverrideAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost COverrideCard::COverrideAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	CZone* pBattlefield = GetCard()->GetController()->GetZoneById(ZoneId::Battlefield);
	int nArtifacts = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pBattlefield->GetCardContainer());

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, nArtifacts);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
