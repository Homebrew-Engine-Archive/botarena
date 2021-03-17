#include "stdafx.h"
#include "CardRavnica.h"

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

		DEFINE_CARD(CAgrusKosWojekVeteranCard);
		DEFINE_CARD(CBarbarianRiftcutterCard);
		DEFINE_CARD(CBatheInLightCard);
		DEFINE_CARD(CBenevolentAncestorCard);
		DEFINE_CARD(CBlazingArchonCard);
		DEFINE_CARD(CBlockbusterCard);
		DEFINE_CARD(CBloodbondMarchCard);
		DEFINE_CARD(CBloodletterQuillCard);
		DEFINE_CARD(CBorosGarrisonCard);
		DEFINE_CARD(CBorosGuildmageCard);
		DEFINE_CARD(CBorosRecruitCard);
		DEFINE_CARD(CBorosSignetCard);
		DEFINE_CARD(CBorosSwiftbladeCard);
		DEFINE_CARD(CBottledCloisterCard);
		DEFINE_CARD(CBrainspoilCard);
		DEFINE_CARD(CBrambleElementalCard);
		DEFINE_CARD(CCaregiverCard);
		DEFINE_CARD(CCarrionHowlerCard);
		DEFINE_CARD(CCarvenCaryatidCard);
		DEFINE_CARD(CCentaurSafeguardCard);
		DEFINE_CARD(CCeruleanSphinxCard);
		DEFINE_CARD(CCharCard);
		DEFINE_CARD(CCircuDimirLobotomistCard);
		DEFINE_CARD(CCleansingBeamCard);
		DEFINE_CARD(CClingingDarknessCard);
		DEFINE_CARD(CCloudstoneCurioCard);
		DEFINE_CARD(CClutchOfTheUndercityCard);
		DEFINE_CARD(CCoalhaulerSwineCard);
		DEFINE_CARD(CCompulsiveResearchCard);
		DEFINE_CARD(CCongregationAtDawnCard);
		DEFINE_CARD(CConsultTheNecrosagesCard);
		DEFINE_CARD(CConvoluteCard);
		DEFINE_CARD(CCourierHawkCard);
		//DEFINE_CARD(CCrownOfConvergenceCard);
		DEFINE_CARD(CCyclopeanSnareCard);
		DEFINE_CARD(CDarkblastCard);
		DEFINE_CARD(CDarkConfidantCard);
		DEFINE_CARD(CDimirAqueductCard);
		DEFINE_CARD(CDimirCutpurseCard);
		DEFINE_CARD(CDimirGuildmageCard);
		DEFINE_CARD(CDimirHouseGuardCard);
		DEFINE_CARD(CDimirInfiltratorCard);
		DEFINE_CARD(CDimirMachinationsCard);
		DEFINE_CARD(CDimirSignetCard);
		DEFINE_CARD(CDisembowelCard);
		DEFINE_CARD(CDivebomberGriffinCard);
		DEFINE_CARD(CDizzySpellCard);
		DEFINE_CARD(CDogpileCard);
		DEFINE_CARD(CDoublingSeasonCard);
		DEFINE_CARD(CDowsingShamanCard);
		DEFINE_CARD(CDrakeFamiliarCard);
		DEFINE_CARD(CDreamLeashCard);
		DEFINE_CARD(CDriftOfPhantasmsCard);
		DEFINE_CARD(CDroolingGroodionCard);
		DEFINE_CARD(CDromadPurebredCard);
		DEFINE_CARD(CDryadsCaressCard);
		DEFINE_CARD(CDuskmantleHouseOfShadowCard);
		DEFINE_CARD(CElvishSkysweeperCard);
		DEFINE_CARD(CEmptyTheCatacombsCard);
		DEFINE_CARD(CEtherealUsherCard);
		DEFINE_CARD(CExcruciatorCard);
		DEFINE_CARD(CFaithsFettersCard);
		DEFINE_CARD(CFiremaneAngelCard);
		DEFINE_CARD(CFistsOfIronwoodCard);
		DEFINE_CARD(CFlameFusilladeCard);
		DEFINE_CARD(CFlameKinZealotCard);
		DEFINE_CARD(CFlashConscriptionCard);
		DEFINE_CARD(CFlickerformCard);
		DEFINE_CARD(CFlightOfFancyCard);
		DEFINE_CARD(CFlowOfIdeasCard);
		DEFINE_CARD(CFollowedFootstepsCard);
		DEFINE_CARD(CGalvanicArcCard);
		DEFINE_CARD(CGateHoundCard);
		DEFINE_CARD(CGlareOfSubdualCard);
		DEFINE_CARD(CGlassGolemCard);
		DEFINE_CARD(CGleancrawlerCard);
		DEFINE_CARD(CGlimpseTheUnthinkableCard);
		DEFINE_CARD(CGolgariBrownscaleCard);
		DEFINE_CARD(CGolgariGerminationCard);
		DEFINE_CARD(CGolgariGraveTrollCard);
		DEFINE_CARD(CGolgariGuildmageCard);
		DEFINE_CARD(CGolgariRotFarmCard);
		DEFINE_CARD(CGolgariRotwurmCard);
		DEFINE_CARD(CGolgariSignetCard);
		DEFINE_CARD(CGolgariThugCard);
		DEFINE_CARD(CGoliathSpiderCard);
		DEFINE_CARD(CGraveShellScarabCard);
		DEFINE_CARD(CGrayscaledGharialCard);
		DEFINE_CARD(CGreaterForgelingCard);
		DEFINE_CARD(CGreaterMossdogCard);
		DEFINE_CARD(CGrozothCard);
		DEFINE_CARD(CHammerfistGiantCard);
		DEFINE_CARD(CHelldozerCard);
		DEFINE_CARD(CHexCard);
		DEFINE_CARD(CHuntedDragonCard);
		DEFINE_CARD(CHuntedHorrorCard);
		DEFINE_CARD(CHuntedLammasuCard);
		DEFINE_CARD(CHuntedPhantasmCard);
		DEFINE_CARD(CHuntedTrollCard);
		DEFINE_CARD(CInciteHysteriaCard);
		DEFINE_CARD(CInduceParanoiaCard);
		DEFINE_CARD(CInfectiousHostCard);
		DEFINE_CARD(CInstillFurorCard);
		DEFINE_CARD(CIvyDancerCard);
		DEFINE_CARD(CJunktrollerCard);
		DEFINE_CARD(CKeeningBansheeCard);
		DEFINE_CARD(CLastGaspCard);
		DEFINE_CARD(CLeaveNoTraceCard);
		DEFINE_CARD(CLifeFromTheLoamCard);
		DEFINE_CARD(CLightningHelixCard);
		DEFINE_CARD(CLoreBrokerCard);
		DEFINE_CARD(CLoxodonGatekeeperCard);
		DEFINE_CARD(CLoxodonHierarchCard);
		DEFINE_CARD(CLurkingInformantCard);
		DEFINE_CARD(CMarkOfEvictionCard);
		DEFINE_CARD(CMausoleumTurnkeyCard);
		DEFINE_CARD(CMindleechMassCard);
		DEFINE_CARD(CMnemonicNexusCard);
		DEFINE_CARD(CMoldervineCloakCard);
		DEFINE_CARD(CMoonlightBargainCard);
		DEFINE_CARD(CMoroiiCard);
		DEFINE_CARD(CMortipedeCard);
		DEFINE_CARD(CMuddleTheMixtureCard);
		DEFINE_CARD(CNecromanticThirstCard);
		DEFINE_CARD(CNecroplasmCard);
		DEFINE_CARD(CNetherbornPhalanxCard);
		DEFINE_CARD(CNightguardPatrolCard);
		DEFINE_CARD(CNightmareVoidCard);
		DEFINE_CARD(CNullmageShepherdCard);
		DEFINE_CARD(CNullstoneGargoyleCard);
		DEFINE_CARD(COathswornGiantCard);
		DEFINE_CARD(COrdruunCommandoCard);
		DEFINE_CARD(COvergrownTombCard);
		DEFINE_CARD(CPeregrineMaskCard);
		DEFINE_CARD(CPerilousForaysCard);
		//DEFINE_CARD(CPhytohydraCard);
		DEFINE_CARD(CPlagueBoilerCard);
		DEFINE_CARD(CPollenbrightWingsCard);
		DEFINE_CARD(CPrimordialSageCard);
		DEFINE_CARD(CPrivilegedPositionCard);
		DEFINE_CARD(CPsychicDrainCard);
		DEFINE_CARD(CPutrefyCard);
		DEFINE_CARD(CQuickchangeCard);
		DEFINE_CARD(CRainOfEmbersCard);
		DEFINE_CARD(CRallyTheRighteousCard);
		DEFINE_CARD(CRaziasPurificationCard);
		DEFINE_CARD(CRemandCard);
		DEFINE_CARD(CRibbonsOfNightCard);
		DEFINE_CARD(CRollingSpoilCard);
		DEFINE_CARD(CRoofstalkerWightCard);
		DEFINE_CARD(CSacredFoundryCard);
		DEFINE_CARD(CSadisticAugermageCard);
		DEFINE_CARD(CSandsowerCard);
		DEFINE_CARD(CSavraQueenoftheGolgariCard);
		DEFINE_CARD(CScreechingGriffinCard);
		DEFINE_CARD(CSearingMeditationCard);
		DEFINE_CARD(CSeedSparkCard);
		DEFINE_CARD(CSeedsOfStrengthCard);
		DEFINE_CARD(CSeismicSpikeCard);
		DEFINE_CARD(CSelesnyaEvangelCard);
		DEFINE_CARD(CSelesnyaGuildmageCard);
		DEFINE_CARD(CSelesnyaSagittarsCard);
		DEFINE_CARD(CSelesnyaSanctuaryCard);
		DEFINE_CARD(CSelesnyaSignetCard);
		DEFINE_CARD(CSellSwordBruteCard);
		DEFINE_CARD(CSewerdregCard);
		DEFINE_CARD(CShamblingShellCard);
		DEFINE_CARD(CShredMemoryCard);
		DEFINE_CARD(CSkyknightLegionnaireCard);
		DEFINE_CARD(CStinkweedImpCard);
		DEFINE_CARD(CStoneSeederHierophantCard);
		DEFINE_CARD(CStoneshakerShamanCard);
		DEFINE_CARD(CStrandsOfUndeathCard);
		DEFINE_CARD(CSunhomeEnforcerCard);
		DEFINE_CARD(CSunhomeFortressOfTheLegionCard);
		DEFINE_CARD(CSurgeOfZealCard);
		DEFINE_CARD(CSurveillingSpriteCard);
		DEFINE_CARD(CSvogthosTheRestlessTombCard);
		DEFINE_CARD(CSzadekLordofSecretsCard);
		DEFINE_CARD(CTatteredDrakeCard);
		DEFINE_CARD(CTempleGardenCard);
		DEFINE_CARD(CTerraformerCard);
		DEFINE_CARD(CTerrarionCard);
		DEFINE_CARD(CThoughtpickerWitchCard);
		DEFINE_CARD(CThreeDreamsCard);
		DEFINE_CARD(CThundersongTrumpeterCard);
		DEFINE_CARD(CTidewaterMinionCard);
		DEFINE_CARD(CTolsimirWolfbloodCard);
		DEFINE_CARD(CTorpidMolochCard);
		DEFINE_CARD(CTransluminantCard);
		//DEFINE_CARD(CTrophyHunterCard);
		DEFINE_CARD(CTunnelVisionCard);
		DEFINE_CARD(CTwilightDroverCard);
		DEFINE_CARD(CTwistedJusticeCard);
		DEFINE_CARD(CUndercityShadeCard);
		DEFINE_CARD(CUrsapineCard);
		DEFINE_CARD(CVedalkenDismisserCard);
		DEFINE_CARD(CVeteranArmorerCard);
		DEFINE_CARD(CViashinoFangtailCard);
		DEFINE_CARD(CViashinoSlasherCard);
		DEFINE_CARD(CVigorMortisCard);
		DEFINE_CARD(CVindictiveMobCard);
		DEFINE_CARD(CVinelasherKudzuCard);
		DEFINE_CARD(CVituGhaziTheCityTreeCard);
		DEFINE_CARD(CVotaryOfTheConclaveCard);
		DEFINE_CARD(CVoyagerStaffCard);
		DEFINE_CARD(CVulturousZombieCard);
		DEFINE_CARD(CWarTorchGoblinCard);
		DEFINE_CARD(CWatchwolfCard);
		DEFINE_CARD(CWateryGraveCard);
		DEFINE_CARD(CWoebringerDemonCard);
		DEFINE_CARD(CWojekEmbermageCard);
		DEFINE_CARD(CWojekSirenCard);
		DEFINE_CARD(CWoodwraithCorrupterCard);
		DEFINE_CARD(CWoodwraithStranglerCard);
		DEFINE_CARD(CZephyrSpiritCard);
		DEFINE_CARD(CSpectralSearchlightCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBlazingArchonCard::CBlazingArchonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blazing Archon"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(6))

	, m_CardFilter(FALSE_CARD_COMPARER)
{
	counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
		::CreateObject<CCanBeAttackedByEnchantment>(this,
			&m_CardFilter));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBorosGarrisonCard::CBorosGarrisonCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Boros Garrison"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDimirAqueductCard::CDimirAqueductCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dimir Aqueduct"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFistsOfIronwoodCard::CFistsOfIronwoodCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Fists of Ironwood"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Trample)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling G"), 2956, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGlimpseTheUnthinkableCard::CGlimpseTheUnthinkableCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glimpse the Unthinkable"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			10));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGolgariRotFarmCard::CGolgariRotFarmCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Golgari Rot Farm"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoroiiCard::CMoroiiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moroii"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimordialSageCard::CPrimordialSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primordial Sage"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPutrefyCard::CPutrefyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Putrefy"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CRemandCard::CRemandCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Remand"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Hand, TRUE);

	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CSelesnyaSanctuaryCard::CSelesnyaSanctuaryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Selesnya Sanctuary"), nID)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSurveillingSpriteCard::CSurveillingSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Surveilling Sprite"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWatchwolfCard::CWatchwolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Watchwolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CFlowOfIdeasCard::CFlowOfIdeasCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flow of Ideas"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("5") BLUE_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpSpell->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::Island, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COvergrownTombCard::COvergrownTombCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Overgrown Tomb"), nID, 
		CardType::Forest | CardType::Swamp | CardType::NonbasicLand, 
		BLACK_MANA_TEXT, GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CSacredFoundryCard::CSacredFoundryCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Sacred Foundry"), nID, 
		CardType::Mountain | CardType::Plains | CardType::NonbasicLand, 
		RED_MANA_TEXT, WHITE_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CTempleGardenCard::CTempleGardenCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Temple Garden"), nID, 
		CardType::Forest | CardType::Plains | CardType::NonbasicLand, 
		GREEN_MANA_TEXT, WHITE_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CWateryGraveCard::CWateryGraveCard(CGame* pGame, UINT nID)
	: CDualLandCard(pGame, _T("Watery Grave"), nID, 
		CardType::Island | CardType::Swamp | CardType::NonbasicLand, 
		BLUE_MANA_TEXT, BLACK_MANA_TEXT)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 0, _T("pay 2 life"), NULL);
}

//____________________________________________________________________________
//
CDarkConfidantCard::CDarkConfidantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dark Confidant"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDarkConfidantCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDarkConfidantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
	if (cont->GetZoneById(ZoneId::Library)->GetSize() == 0)  // if library contains no cards
	{
		cont->SetDrawFailed();								 // can not draw a card to put into your hand, so draw has failed
		return;												 // no point continuing
	}
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	int nCost = 0;
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // any cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

    CLifeModifier* pModifier1 = new CLifeModifier(Life(-nCost), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1->ApplyTo(cont);
	pModifier->ApplyTo(cont);
}

//____________________________________________________________________________
//
CLightningHelixCard::CLightningHelixCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lightning Helix"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT WHITE_MANA_TEXT, new AnyCreatureComparer, TRUE,
		Life(-3), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CHuntedDragonCard::CHuntedDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hunted Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetCreateTokenOption(TRUE, _T("Knight A"), 2786, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHuntedHorrorCard::CHuntedHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunted Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetCreateTokenOption(TRUE, _T("Centaur C"), 2787, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHuntedLammasuCard::CHuntedLammasuCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hunted Lammasu"), CardType::Creature, CREATURE_TYPE(Lammasu), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetCreateTokenOption(TRUE, _T("Horror A"), 2788, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHuntedPhantasmCard::CHuntedPhantasmCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Hunted Phantasm"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetCreateTokenOption(TRUE, _T("Goblin H"), 62019, 5);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHuntedTrollCard::CHuntedTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Hunted Troll"), CardType::Creature, CREATURE_TYPE2(Troll, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(4),
		GREEN_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetCreateTokenOption(TRUE, _T("Faerie"), 2789, 4);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAgrusKosWojekVeteranCard::CAgrusKosWojekVeteranCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agrus Kos, Wojek Veteran"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAgrusKosWojekVeteranCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAgrusKosWojekVeteranCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_RedCreatures;
	m_RedCreatures.AddComparer(new AttackingCreatureComparer);
	m_RedCreatures.AddComparer(new CardTypeComparer(CardType::Red, false));

	CCardFilter m_WhiteCreatures;
	m_WhiteCreatures.AddComparer(new AttackingCreatureComparer);
	m_WhiteCreatures.AddComparer(new CardTypeComparer(CardType::White, false));

	CZoneCreatureModifier pModifier1 = CZoneCreatureModifier(ZoneId::Battlefield, &m_RedCreatures,
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+2))));
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_WhiteCreatures,
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CBarbarianRiftcutterCard::CBarbarianRiftcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian Riftcutter"), CardType::Creature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBenevolentAncestorCard::CBenevolentAncestorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benevolent Ancestor"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
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
CBorosGuildmageCard::CBorosGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boros Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBorosRecruitCard::CBorosRecruitCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Boros Recruit"), CardType::Creature, CREATURE_TYPE2(Goblin, Soldier), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	//hybrid mana cost
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Creature,
			WHITE_MANA_TEXT));

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBorosSwiftbladeCard::CBorosSwiftbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boros Swiftblade"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CCaregiverCard::CCaregiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caregiver"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarrionHowlerCard::CCarrionHowlerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Carrion Howler"), CardType::Creature, CREATURE_TYPE2(Zombie, Wolf), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(-1))
{
	m_pPumpAbility->AddPayLifeDeltaCost(Life(-1));
}

//____________________________________________________________________________
//
CCarvenCaryatidCard::CCarvenCaryatidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carven Caryatid"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

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
CCentaurSafeguardCard::CCentaurSafeguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Safeguard"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCeruleanSphinxCard::CCeruleanSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cerulean Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CCeruleanSphinxCard::OnResolutionCompleted))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

	void CCeruleanSphinxCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	pLib->Shuffle();
}

//____________________________________________________________________________
//
CCoalhaulerSwineCard::CCoalhaulerSwineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coalhauler Swine"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoalhaulerSwineCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CCoalhaulerSwineCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CCourierHawkCard::CCourierHawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Courier Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CDimirCutpurseCard::CDimirCutpurseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dimir Cutpurse"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDimirGuildmageCard::CDimirGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dimir Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
				_T("3") BLUE_MANA_TEXT, 1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDimirHouseGuardCard::CDimirHouseGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dimir House Guard"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddFear(FALSE);
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Transmute for a card with converted mana cost of 4
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 4"), _T("cards with converted mana cost 4"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(4));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CDimirInfiltratorCard::CDimirInfiltratorCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Dimir Infiltrator"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
{
	//Transmute for a card with converted mana cost of 2
	m_CardFilter.SetFilterName(_T("a card with converted mana cost 2"), _T("cards with converted mana cost 2"));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(2));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			&m_CardFilter,
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CDivebomberGriffinCard::CDivebomberGriffinCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Divebomber Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2),
		_T(""),
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-3),	// life delta
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->AddSacrificeCost();

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CDowsingShamanCard::CDowsingShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dowsing Shaman"), CardType::Creature, CREATURE_TYPE2(Centaur, Shaman), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDrakeFamiliarCard::CDrakeFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drake Familiar"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDriftOfPhantasmsCard::CDriftOfPhantasmsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drift of Phantasms"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		//Transmute for a card with converted mana cost of 3
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 3"), _T("cards with converted mana cost 3"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(3));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CDromadPurebredCard::CDromadPurebredCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dromad Purebred"), CardType::Creature, CREATURE_TYPE2(Camel, Beast), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishSkysweeperCard::CElvishSkysweeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Skysweeper"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("4") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEtherealUsherCard::CEtherealUsherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ethereal Usher"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Transmute for a card with converted mana cost of 6
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 6"), _T("cards with converted mana cost 6"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(6));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CFlameKinZealotCard::CFlameKinZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flame-Kin Zealot"), CardType::Creature, CREATURE_TYPE2(Elemental, Berserker), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGateHoundCard::CGateHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gate Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfEnchantCountChanged, 
								CWhenSelfEnchantCountChanged::EventCallback, 
								&CWhenSelfEnchantCountChanged::SetDisenchantEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariGuildmageCard::CGolgariGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Guildmage"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("4") GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariRotwurmCard::CGolgariRotwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Rotwurm"), CardType::Creature, CREATURE_TYPE2(Zombie, Wurm), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoliathSpiderCard::CGoliathSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goliath Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CGrayscaledGharialCard::CGrayscaledGharialCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Grayscaled Gharial"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		BLUE_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CGreaterForgelingCard::CGreaterForgelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Greater Forgeling"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4),
		_T("1") RED_MANA_TEXT, Power(+3), Life(-3))
{
}

//____________________________________________________________________________
//
CGrozothCard::CGrozothCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Grozoth"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(9), Life(9),
		_T("4"), Power(+0), Life(+0))
{
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(9));
		cpAbility->SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Transmute for a card with converted mana cost of 9
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 9"), _T("cards with converted mana cost 9"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(9));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CHammerfistGiantCard::CHammerfistGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hammerfist Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-4),	// life delta
			new AnyCreatureComparer, TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHelldozerCard::CHelldozerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Helldozer"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHelldozerCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

void CHelldozerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CCard* pTarget = pAbilityAction->GetAssociatedCard();
		CPlayer* pPlayer = pTarget->GetController();
		bool bBasic = (pTarget->GetCardType() & CardType::BasicLand).Any();

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAbilityAction->GetController());
		pModifier1.ApplyTo(pTarget);

		if (!bBasic)
		{
			CCardOrientationModifier pModifier2 = CCardOrientationModifier(TRUE);
			pModifier2.ApplyTo(this);
		}
	}
}

//____________________________________________________________________________
//
CInfectiousHostCard::CInfectiousHostCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infectious Host"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIvyDancerCard::CIvyDancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ivy Dancer"), CardType::Creature, CREATURE_TYPE2(Dryad, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Forestwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeeningBansheeCard::CKeeningBansheeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Keening Banshee"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonGatekeeperCard::CLoxodonGatekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Gatekeeper"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("artifacts, creatures or lands")),	
			TRUE));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMortipedeCard::CMortipedeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Mortipede"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(1),
		_T("2") GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Lure)
{
}

//____________________________________________________________________________
//
CNightguardPatrolCard::CNightguardPatrolCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Nightguard Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddVigilance(false);
}

//____________________________________________________________________________
//
CNullmageShepherdCard::CNullmageShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nullmage Shepherd"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetCost().AddTapCardCost(4, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COathswornGiantCard::COathswornGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oathsworn Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddVigilance(false);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+2), CreatureKeyword::Vigilance));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrdruunCommandoCard::COrdruunCommandoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ordruun Commando"), CardType::Creature, CREATURE_TYPE2(Minotaur, Soldier), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(1))
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
//
//"Phytohydra\n{2GWW}\nCreature - Plant Hydra\nRAV,R\nIf damage would be dealt to Phytohydra, put that many +1/+1 counters on it instead.\n1/1"
//
//CPhytohydraCard::CPhytohydraCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Phytohydra"), CardType::Creature, CREATURE_TYPE2(Plant, Hydra), nID,
//		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
//{
//	typedef
//		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenDamageDealt,
//								 CWhenDamageDealt::CreatureEventCallback, 
//								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
//
//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
//
//	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhytohydraCard::SetTriggerContext));
//
//	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//bool CPhytohydraCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
//{
//	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
//	triggerContext.m_LifeModifier.SetToBase(TRUE);
//	triggerContext.m_LifeModifier.SetOneTurnOnly(FALSE);
//	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
//	triggerContext.m_PowerModifier.SetPowerDelta(Power(GET_INTEGER(-damage.m_nLifeDelta)));
//	triggerContext.m_PowerModifier.SetToBase(TRUE);
//	triggerContext.m_PowerModifier.SetOneTurnOnly(FALSE);
//	triggerContext.m_CreatureKeywordModifier.GetModifier().SetToAdd(CreatureKeyword::PreventAllCombatDamage);
//	triggerContext.m_CreatureKeywordModifier.GetModifier().SetToAdd(CreatureKeyword::PreventAllNoncombatDamage);
//	triggerContext.m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
//	return true;
//}
//
////____________________________________________________________________________
////
CRoofstalkerWightCard::CRoofstalkerWightCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Roofstalker Wight"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CSandsowerCard::CSandsowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandsower"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetCost().AddTapCardCost(3, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSelesnyaEvangelCard::CSelesnyaEvangelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selesnya Evangel"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1"),
			_T("Saproling G"), 2956,
			1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSelesnyaGuildmageCard::CSelesnyaGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selesnya Guildmage"), CardType::Creature, CREATURE_TYPE2(Elf, Wizard), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3") GREEN_MANA_TEXT,
				_T("Saproling G"), 2956,
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("3") WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSelesnyaSagittarsCard::CSelesnyaSagittarsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selesnya Sagittars"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
	SetMaxBlockingCount(2);
}

//____________________________________________________________________________
//
CSellSwordBruteCard::CSellSwordBruteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sell-Sword Brute"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSewerdregCard::CSewerdregCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sewerdreg"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyknightLegionnaireCard::CSkyknightLegionnaireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skyknight Legionnaire"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CStoneSeederHierophantCard::CStoneSeederHierophantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone-Seeder Hierophant"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
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
}

//____________________________________________________________________________
//
CStoneshakerShamanCard::CStoneshakerShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stoneshaker Shaman"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunhomeEnforcerCard::CSunhomeEnforcerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sunhome Enforcer"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4),
		_T("1") RED_MANA_TEXT, Power(+1), Life(+0))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSunhomeEnforcerCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSunhomeEnforcerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CTatteredDrakeCard::CTatteredDrakeCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Tattered Drake"), CardType::Creature, CREATURE_TYPE2(Zombie, Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2),
		BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CThundersongTrumpeterCard::CThundersongTrumpeterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thundersong Trumpeter"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::CantAttack | CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTidewaterMinionCard::CTidewaterMinionCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Tidewater Minion"), CardType::Creature, CREATURE_TYPE2(Elemental, Minion), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4),
		_T("4"), Power(+0), Life(+0))
{
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CTolsimirWolfbloodCard::CTolsimirWolfbloodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tolsimir Wolfblood"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Voja"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTorpidMolochCard::CTorpidMolochCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Torpid Moloch"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		RED_MANA_TEXT, Power(3), Life(2),
		_T(""), Power(+0), Life(+0))
{
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	m_pPumpAbility->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("lands")));

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
//"Trophy Hunter\n{2G}\nCreature - Human Archer\nRAV,U\n{1G}: Trophy Hunter deals 1 damage to target creature with flying.\rWhenever a creature with flying dealt damage by Trophy Hunter this turn is put into a graveyard, put a +1/+1 counter on Trophy Hunter.\n2/3"
//pCard in SetTriggerContext seems to be this creature instead of the damaged one.
//CTrophyHunterCard::CTrophyHunterCard(CGame* pGame, UINT nID)
//	: CCreatureCard(pGame, _T("Trophy Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
//		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
//{
//	{
//		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
//			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
//				_T("1") GREEN_MANA_TEXT,
//				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
//				Life(-1),	// life delta
//				PreventableType::Preventable));
//		ATLASSERT(cpAbility);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfDamageDealt2 > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//		//Not supported:
//		//cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
//		//cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
//
//		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
//		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
//		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
//		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTrophyHunterCard::SetTriggerContext));
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//bool CTrophyHunterCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										CCard* pCard) const
//{
//	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
//	return true;
//
//	if (pCreatureCard->GetCreatureKeyword()->Flying() == TRUE)
//	return true;
//}

//____________________________________________________________________________
//
CUndercityShadeCard::CUndercityShadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undercity Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("4") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrsapineCard::CUrsapineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ursapine"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CVedalkenDismisserCard::CVedalkenDismisserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Dismisser"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("5") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVeteranArmorerCard::CVeteranArmorerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veteran Armorer"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashinoFangtailCard::CViashinoFangtailCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Viashino Fangtail"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CViashinoSlasherCard::CViashinoSlasherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Viashino Slasher"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CVindictiveMobCard::CVindictiveMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vindictive Mob"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Saproling), false)));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	{
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
}

//____________________________________________________________________________
//
CVinelasherKudzuCard::CVinelasherKudzuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vinelasher Kudzu"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVotaryOfTheConclaveCard::CVotaryOfTheConclaveCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Votary of the Conclave"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		_T("2") GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CVulturousZombieCard::CVulturousZombieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vulturous Zombie"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarTorchGoblinCard::CWarTorchGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War-Torch Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new BlockingCreatureComparer, FALSE,
			Life(-2),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZephyrSpiritCard::CZephyrSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zephyr Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLUE_MANA_TEXT, Power(0), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGlassGolemCard::CGlassGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glass Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(6), Life(2))
{
}

//____________________________________________________________________________
//
CJunktrollerCard::CJunktrollerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Junktroller"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDuskmantleHouseOfShadowCard::CDuskmantleHouseOfShadowCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Duskmantle, House of Shadow"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT, 1));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CSunhomeFortressOfTheLegionCard::CSunhomeFortressOfTheLegionCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sunhome, Fortress of the Legion"), nID)
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
				_T("2") RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
//
//"Svogthos, the Restless Tomb\n\nLand\nRAV,U\n{T}: Add {1} to your mana pool.\r{3BG}: Until end of turn, Svogthos, the Restless Tomb becomes a black and green Plant Zombie creature with "This creature's power and toughness are each equal to the number of creature cards in your graveyard." It's still a land."
//See the token for the problem.
//
CSvogthosTheRestlessTombCard::CSvogthosTheRestlessTombCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Svogthos, the Restless Tomb"), nID)
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
				_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				_T("Plant Zombie"), 2896));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVituGhaziTheCityTreeCard::CVituGhaziTheCityTreeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vitu-Ghazi, the City-Tree"), nID)
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
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Saproling G"), 2956,
				1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBorosSignetCard::CBorosSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Boros Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CCyclopeanSnareCard::CCyclopeanSnareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cyclopean Snare"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("3"),
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));//To return this card to its owner's hand on resolution.

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDimirSignetCard::CDimirSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dimir Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CGolgariSignetCard::CGolgariSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golgari Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CPeregrineMaskCard::CPeregrineMaskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Peregrine Mask"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Defender);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier2);

	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier3->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier3);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSelesnyaSignetCard::CSelesnyaSignetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Selesnya Signet"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}
//{
//	counted_ptr<CManaFilterAbility> cpAbility(
//		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("1")));
//	ATLASSERT(cpAbility);
//
//	cpAbility->AddTapCost();
//
//	AddAbility(cpAbility.GetPointer());
//}

//____________________________________________________________________________
//
CTerrarionCard::CTerrarionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Terrarion"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT BLACK_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT WHITE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT RED_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT BLUE_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT GREEN_MANA_TEXT, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlockbusterCard::CBlockbusterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blockbuster"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT,
			Life(-3),	// life delta
			new TappedComparer, 
			TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClingingDarknessCard::CClingingDarknessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Clinging Darkness"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-4), Life(-1))
{
}

//____________________________________________________________________________
//
CFlightOfFancyCard::CFlightOfFancyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Flight of Fancy"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGalvanicArcCard::CGalvanicArcCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Galvanic Arc"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGlareOfSubdualCard::CGlareOfSubdualCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glare of Subdual"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,
			new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGolgariGerminationCard::CGolgariGerminationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golgari Germination"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling G"), 2956, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecromanticThirstCard::CNecromanticThirstCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Necromantic Thirst"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CNecromanticThirstCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CNecromanticThirstCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrivilegedPositionCard::CPrivilegedPositionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Privileged Position"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new TrueCardComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSearingMeditationCard::CSearingMeditationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Searing Meditation"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(_T("2"));

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSearingMeditationCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSearingMeditationCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife) return true;

	return false;
}

//____________________________________________________________________________
//
CStrandsOfUndeathCard::CStrandsOfUndeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strands of Undeath"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("3") BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CStrandsOfUndeathCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
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
}

counted_ptr<CAbility> CStrandsOfUndeathCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, BLACK_MANA_TEXT, (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CCharCard::CCharCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Char"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this, PreventableType::Preventable,
																			   DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CClutchOfTheUndercityCard::CClutchOfTheUndercityCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Clutch of the Undercity"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	{
		//Transmute for a card with converted mana cost of 4
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 4"), _T("cards with converted mana cost 4"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(4));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CCongregationAtDawnCard::CCongregationAtDawnCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Congregation at Dawn"), CardType::Instant, nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("creatures")),
		ZoneId::Library, TRUE, TRUE, FALSE) // on top of your library
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(3));
}

//____________________________________________________________________________
//
CConvoluteCard::CConvoluteCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Convolute"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("4"));
}

//____________________________________________________________________________
//
CDizzySpellCard::CDizzySpellCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Dizzy Spell"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(-3), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Transmute for a card with converted mana cost of 1
	m_CardFilter.SetFilterName(_T("a card with converted mana cost 1"), _T("cards with converted mana cost 1"));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(1));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			&m_CardFilter,
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CDogpileCard::CDogpileCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dogpile"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Battlefield, TRUE,
			new AttackingCreatureComparer, PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLastGaspCard::CLastGaspCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last Gasp"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CMnemonicNexusCard::CMnemonicNexusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mnemonic Nexus"), CardType::Instant, nID)
{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT, 0, 0));

		cpSpell->SetMergeGraveyard(TRUE);

		AddSpell(cpSpell.GetPointer());
	}

//____________________________________________________________________________
//
CMuddleTheMixtureCard::CMuddleTheMixtureCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Muddle the Mixture"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Sorcery | CardType::Instant, false))
{
	//Transmute for a card with converted mana cost of 2
	m_CardFilter.SetFilterName(_T("a card with converted mana cost 2"), _T("cards with converted mana cost 2"));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(2));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			&m_CardFilter,
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CQuickchangeCard::CQuickchangeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Quickchange"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));
	cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));	
	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));
	cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));
	cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShredMemoryCard::CShredMemoryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shred Memory"), CardType::Instant, nID)
{	
	{
		// Exile up to four target cards from a single graveyard.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetSubjectCount(0, 4);
		cpSpell->GetTargeting()->SetSingleSourceZone(true);

		AddSpell(cpSpell.GetPointer());
	}
	{
		// Transmute for a card with converted mana cost of 2
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 2"), _T("cards with converted mana cost 2"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(2));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CConsultTheNecrosagesCard::CConsultTheNecrosagesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consult the Necrosages"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetDrawCardSpell> cpSpell(
			::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmptyTheCatacombsCard::CEmptyTheCatacombsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Empty the Catacombs"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, TRUE, MoveType::Others, ZoneId::Graveyard));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHexCard::CHexCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hex"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(6, 6);
}

//____________________________________________________________________________
//
CRainOfEmbersCard::CRainOfEmbersCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Rain of Embers"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		Life(-1),	// life delta
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CSeismicSpikeCard::CSeismicSpikeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Seismic Spike"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT RED_MANA_TEXT)));
}

//____________________________________________________________________________
//
CFiremaneAngelCard::CFiremaneAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Firemane Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

    {
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("6") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiremaneAngelCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFiremaneAngelCard::BeforeResolution));
	    cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFiremaneAngelCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard) || (GetZone()->GetZoneId() == ZoneId::Battlefield);
}

bool CFiremaneAngelCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard) || (GetZone()->GetZoneId() == ZoneId::Battlefield);
}

//____________________________________________________________________________
//
CPerilousForaysCard::CPerilousForaysCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Perilous Forays"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)

	, m_CardFilter(_T("land card with a basic land type"), _T("land cards with a basic land type"), new CardTypeComparer(CardType::Mountain | CardType::Plains | CardType::Forest | CardType::Swamp | CardType::Island, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			&m_CardFilter, 
			ZoneId::Battlefield, FALSE, FALSE, TRUE));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlameFusilladeCard::CFlameFusilladeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flame Fusillade"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT, 
			new TrueCardComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Null));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CFlameFusilladeCard::CreateAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFlameFusilladeCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSadisticAugermageCard::CSadisticAugermageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sadistic Augermage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetDiscardMoveType(MoveType::Others);
	cpAbility->SetToZone(ZoneId::Library); //"discard" on top of the library.

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLurkingInformantCard::CLurkingInformantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lurking Informant"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T("2"), 1));
		ATLASSERT(cpAbility);

		cpAbility->SetSelectionOptions(MaximumValue(1), ZoneId::Graveyard, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")), MinimumValue(0));
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);	

	    cpAbility->SetRevealCardsToOthers(TRUE);	

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CNetherbornPhalanxCard::CNetherbornPhalanxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Netherborn Phalanx"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("5") BLACK_MANA_TEXT, Power(2), Life(4))
{
	{
		typedef
			TTriggeredAbility < CTriggeredModifyLifeAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNetherbornPhalanxCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		//Transmute for a card with converted mana cost of 6
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 6"), _T("cards with converted mana cost 6"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(6));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CNetherbornPhalanxCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	Life nOppCount(0);

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
            ++nOppCount;
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(-nOppCount));
	pAction->SetTriggerContext(triggerContext);

	return nOppCount >= Life(1);
}

//____________________________________________________________________________
//
CDryadsCaressCard::CDryadsCaressCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dryad's Caress"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
				TRUE, //Opponent Zones
				TRUE)); //Controller Zones

		cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

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
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDryadsCaressCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDryadsCaressCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::White);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CSeedSparkCard::CSeedSparkCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Seed Spark"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Saproling G"), 2956, 2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeedSparkCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSeedSparkCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CSeedsOfStrengthCard::CSeedsOfStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Seeds of Strength"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRibbonsOfNightCard::CRibbonsOfNightCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Ribbons of Night"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));

	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRibbonsOfNightCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRibbonsOfNightCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Blue);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CRollingSpoilCard::CRollingSpoilCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rolling Spoil"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRollingSpoilCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRollingSpoilCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Black);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CTwilightDroverCard::CTwilightDroverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Twilight Drover"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				_T("Spirit J"), 2944,
				2));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPsychicDrainCard::CPsychicDrainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Drain"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLACK_MANA_TEXT,
			0));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPsychicDrainCard::BeforeResolution));
		
	AddSpell(cpSpell.GetPointer());
}

bool CPsychicDrainCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nExtraCount = pAction->GetCostConfigEntry().GetExtraValue();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nExtraCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	CLifeModifier* pModifier = new CLifeModifier(Life(nExtraCount), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CCircuDimirLobotomistCard::CCircuDimirLobotomistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Circu, Dimir Lobotomist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))

	, m_CardFilter(_T("exiled card"), _T("exiled cards"), FALSE_CARD_COMPARER)
	, m_CardFilter1(_T("a black spell"), _T("black spells"), new CardTypeComparer(CardType::Black, true))
	, m_CardFilter2(_T("a blue spell"), _T("blue spells"), new CardTypeComparer(CardType::Blue, true))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCircuDimirLobotomistCard::OnResolutionCompleted))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)&m_CardFilter));

		cpAbility->SetAffectOpponentsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter1);				

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter2);				

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
}

void CCircuDimirLobotomistCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* lib_owner = pAbilityAction->GetAssociatedPlayer();
	CZone* lib=lib_owner->GetZoneById(ZoneId::Library);
	if (lib->GetSize()>0){
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
		
	if (!pNextDraw->GetCardType().IsLand() && !m_pGame->IsThinking())
	m_CardFilter.AddChildFilter(new CCardFilter(new CardNameComparer(pNextDraw->GetPrintedCardName())));	

	pModifier.ApplyTo(lib_owner);}
}

//____________________________________________________________________________
//
/*
	Doubling Season {4}{G}
	Enchantment
	If an effect would put one or more tokens onto the battlefield under your control, 
	it puts twice that many of those tokens onto the battlefield instead.
	If an effect would place one or more counters on a permanent you control, 
	it places twice that many of those counters on that permanent instead.

	Doubling Season only works for EFFECTS. That means there are some cases where it won't apply.
	
	Planeswalkers will enter the battlefield with double the normal amount of loyalty counters. 
	However, if a player activates an ability whose cost has them put loyalty counters on a planeswalker, 
	the number they put on isn't doubled. This is because those counters are put on as a cost, 
	not as an effect.

	Tokens created by paying cumulative upkeep (another form of cost) of Varchild's War-Riders are also 
	not doubled by Doubling Season.
	
	For these reasons we've added "doubling" variable (bDoubling) to modifiers that create tokens or counters 
	(CCardCounterModifier, CTokenCreationModifier) to manually switch the doubling mechanisms off 
	when needed.
*/
CDoublingSeasonCard::CDoublingSeasonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Doubling Season"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::DoubleCounters, 1, TRUE));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::DoubleTokens, 1, TRUE));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodwraithStranglerCard::CWoodwraithStranglerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Woodwraith Strangler"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CPollenbrightWingsCard::CPollenbrightWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Pollenbright Wings"), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CPollenbrightWingsCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CPollenbrightWingsCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPollenbrightWingsCard::SetTriggerContextL));
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling G"), 2956, 0);

	m_pTriggeredAbility = cpAbility.GetPointer();

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	return counted_ptr<CAbility>(m_pTriggeredAbility);
}

bool CPollenbrightWingsCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CVoyagerStaffCard::CVoyagerStaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Voyager Staff"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
    , m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CVoyagerStaffCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));
	
	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CVoyagerStaffCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CInstillFurorCard::CInstillFurorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Instill Furor"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CInstillFurorCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CInstillFurorCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pEnchantCard, NodeId::EndStep, pEnchantedCard));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInstillFurorCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CInstillFurorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												 CNode* pToNode) const
{
	CZone* pInplay = pToNode->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (!pCard->GetCardType().IsCreature())
			return false;

		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
		if (pCreatureCard->GetCreatureFlag()->HasAttacked() == FALSE)
			return true;
	}
	return true;
}

//____________________________________________________________________________
//
CGolgariBrownscaleCard::CGolgariBrownscaleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Brownscale"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddDredge(FALSE, 2);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGolgariGraveTrollCard::CGolgariGraveTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Golgari Grave-Troll"), CardType::Creature, CREATURE_TYPE2(Skeleton, Troll), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(0),
		_T("1"))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGolgariGraveTrollCard::OnZoneChanged))
{
	m_pRegenerationAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
	
	GetCardKeyword()->AddDredge(FALSE, 6);

	m_CardFilter.AddComparer(new AnyCreatureComparer);

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}
void CGolgariGraveTrollCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{

	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
	
	int creature = m_CardFilter.CountIncluded(pGrave->GetCardContainer());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +creature);

	pModifier.ApplyTo(this);
	}
}
/*
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		//cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGolgariGraveTrollCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGolgariGraveTrollCard::BeforeResolution1));
		cpAbility->SetSkipStack(TRUE);

	//	m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
}
bool CGolgariGraveTrollCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
	
	int creature = m_CardFilter.CountIncluded(pGrave->GetCardContainer());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +creature, true);

	pModifier.ApplyTo(this);

	return (creature > 0);
}*/
/*bool CGolgariGraveTrollCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
	
	int creature = m_CardFilter.CountIncluded(pGrave->GetCardContainer());

	m_pTriggeredAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +creature, true));

	return (creature > 0);
}*/

//____________________________________________________________________________
//
CGolgariThugCard::CGolgariThugCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golgari Thug"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDredge(FALSE, 4);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGraveShellScarabCard::CGraveShellScarabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grave-Shell Scarab"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddDredge(FALSE, 1);

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
CGreaterMossdogCard::CGreaterMossdogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greater Mossdog"), CardType::Creature, CREATURE_TYPE2(Plant, Hound), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddDredge(FALSE, 3);
}

//____________________________________________________________________________
//
CShamblingShellCard::CShamblingShellCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shambling Shell"), CardType::Creature, CREATURE_TYPE2(Plant, Zombie), nID,
		_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddDredge(FALSE, 3);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStinkweedImpCard::CStinkweedImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stinkweed Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddDredge(FALSE, 5);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStinkweedImpCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStinkweedImpCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CMoldervineCloakCard::CMoldervineCloakCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Moldervine Cloak"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+3), Life(+3))
{
	GetCardKeyword()->AddDredge(FALSE, 2);
}

//____________________________________________________________________________
//
CDarkblastCard::CDarkblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Darkblast"), CardType::Instant, nID)
{
	GetCardKeyword()->AddDredge(FALSE, 3);

	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CLifeFromTheLoamCard::CLifeFromTheLoamCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Life from the Loam"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	GetCardKeyword()->AddDredge(FALSE, 3);

	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 3);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CNightmareVoidCard::CNightmareVoidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nightmare Void"), CardType::Sorcery, nID)
{
	GetCardKeyword()->AddDredge(FALSE, 2);

	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CThoughtpickerWitchCard::CThoughtpickerWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thoughtpicker Witch"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("1"), 2));
	ATLASSERT(cpAbility);

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetSelectionOptions(MaximumValue(1), ZoneId::Exile, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")), MinimumValue(1));
	cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);

	cpAbility->SetRevealCardsToOthers(TRUE);
	
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CVigorMortisCard::CVigorMortisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vigor Mortis"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery, 
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVigorMortisCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CVigorMortisCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Green);

	if (nColorCount > 0)
	{
		int nCounters = 1;

		int nMultiplier = 0;
		if (pTarget->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
			nCounters <<= nMultiplier;
		if (pTarget->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE))
			nCounters <<= nMultiplier;
		// for Primal Vigor
		if (pTarget->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11CountersAlways, nMultiplier, FALSE))
			nCounters <<= nMultiplier;
		CCardCounterModifier pModifier1(_T("+1/+1"), +nCounters, true);

		pModifier1.ApplyTo(pTarget);
	}

	CMoveCardModifier pModifier2(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others);
	pModifier2.ApplyTo(pTarget);
	return true;
}

//____________________________________________________________________________
//
CMausoleumTurnkeyCard::CMausoleumTurnkeyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mausoleum Turnkey"), CardType::Creature, CREATURE_TYPE2(Ogre, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSavraQueenoftheGolgariCard::CSavraQueenoftheGolgariCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Savra, Queen of the Golgari"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Black, true));

		cpAbility->SetPayLifeResolutionCost(Life(-2));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavraQueenoftheGolgariCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSavraQueenoftheGolgariCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Green, true));

		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavraQueenoftheGolgariCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetPayLifeResolutionCost(Life(-2));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavraQueenoftheGolgariCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSavraQueenoftheGolgariCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavraQueenoftheGolgariCard::SetTriggerContext3));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSavraQueenoftheGolgariCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice);
}

bool CSavraQueenoftheGolgariCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice);
}

bool CSavraQueenoftheGolgariCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice) && (this->GetCardType() & CardType::Black).Any();   // Last known cardtype should be used here
}

bool CSavraQueenoftheGolgariCard::SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice) && (this->GetCardType() & CardType::Green).Any();  // Last known cardtype should be used here
}

bool CSavraQueenoftheGolgariCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZoneModifier pModifier2 = CZoneModifier(GetGame(),
		ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	CCardFilter tempCardFilter;
	tempCardFilter.SetComparer(new AnyCreatureComparer);
	
	if (tempCardFilter.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)
		pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	return true;
}

bool CSavraQueenoftheGolgariCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZoneModifier pModifier2 = CZoneModifier(GetGame(),
		ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("creatures")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	CCardFilter tempCardFilter;
	tempCardFilter.SetComparer(new AnyCreatureComparer);
	
	if (tempCardFilter.CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)
		pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	return true;
}

//____________________________________________________________________________
//
CSzadekLordofSecretsCard::CSzadekLordofSecretsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Szadek, Lord of Secrets"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
								CBeforeDamageDealt::PlayerEventCallback, 
								&CBeforeDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSzadekLordofSecretsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
			&CSzadekLordofSecretsCard::BeforeResolution));

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CSzadekLordofSecretsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* pPlayer, Damage damage, int effect_index) const
{
	triggerContext.m_pCreature = (CCreatureCard*)this;
	triggerContext.m_LifeModifier.SetLifeDelta(-damage.m_nLifeDelta);
	
	return (effect_index==3);
}

bool CSzadekLordofSecretsCard::BeforeResolution(CSzadekLordofSecretsCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta()), false);
	pModifier.ApplyTo(triggerContext.m_pCreature);
	
	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta()), CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta())), MaximumValue(GET_INTEGER(triggerContext.m_LifeModifier.GetLifeDelta())), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	triggerContext.m_LifeModifier.SetLifeDelta(Life(0));

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CCompulsiveResearchCard::CCompulsiveResearchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Compulsive Research"), CardType::Sorcery, nID)
{
	counted_ptr<CCompulsiveResearchSpell> cpSpell(
		::CreateObject<CCompulsiveResearchSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonHierarchCard::CLoxodonHierarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Hierarch"), CardType::Creature, CREATURE_TYPE2(Elephant, Cleric), nID,
		_T("2") WHITE_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(
			new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CRegenerateModifier())));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBrambleElementalCard::CBrambleElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bramble Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfEnchantCountChanged, 
							CWhenSelfEnchantCountChanged::EventCallback, 
							&CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling G"), 2956, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoreBrokerCard::CLoreBrokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lore Broker"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLoreBrokerCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this,
			_T(""), 1, 1));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Each player draws a card, then discards a card. Activates"));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CLoreBrokerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CNecroplasmCard::CNecroplasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necroplasm"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CNecroplasmCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddDredge(FALSE, 2);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

void CNecroplasmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCounterCount));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
}

//____________________________________________________________________________
//
CTransluminantCard::CTransluminantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Transluminant"), CardType::Creature, CREATURE_TYPE2(Dryad, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CTransluminantCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			WHITE_MANA_TEXT));

	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CTransluminantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Transluminant Effect"), 61095, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CWoebringerDemonCard::CWoebringerDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Woebringer Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodletterQuillCard::CBloodletterQuillCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bloodletter Quill"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CBloodletterQuillCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(BLOOD_COUNTER), +1);
		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Remove a blood counter from"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(BLOOD_COUNTER, -1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

void CBloodletterQuillCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCounterCount = GetCounterContainer()->GetCounter(BLOOD_COUNTER)->GetCount();

	CLifeModifier modifier(Life(-nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CPlagueBoilerCard::CPlagueBoilerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Plague Boiler"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(PLAGUE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Put a plague counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(PLAGUE_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Remove a plague counter from"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(PLAGUE_COUNTER, -1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlagueBoilerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPlagueBoilerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old <= 2) && (n_value >= 3) && ((CString)name == PLAGUE_COUNTER);
}

//____________________________________________________________________________
//
//"Twisted Justice\n{4UB}\nSorcery\nRAV,U\nTarget player sacrifices a creature. You draw cards equal to that creature's power."
//Doesn't work this way - game engine exception error.
//CTwistedJusticeCard::CTwistedJusticeCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Twisted Justice"), CardType::Sorcery, nID)
//{
//	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
//		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
//			_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT,
//			CCardFilter::GetFilter(_T("creatures"))));
//
//	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTwistedJusticeCard::BeforeResolution));
//
//	AddSpell(cpSpell.GetPointer());
//}
//
//bool CTwistedJusticeCard::BeforeResolution(CAbilityAction* pAction) const
//{
//	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
//	if (!pCard->GetCardType().IsCreature())
//	return false;
//	
//	CCreatureCard* pCreature = (CCreatureCard*)pCard;
//	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());
//		
//	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nPower), MaximumValue(nPower));
//
//	pModifier.ApplyTo(GetController());
//	return true;
//}
//
////____________________________________________________________________________
////
CFlashConscriptionCard::CFlashConscriptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flash Conscription"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("5") RED_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier1->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier1);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFlashConscriptionCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFlashConscriptionCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlashConscriptionCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CFlashConscriptionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));

	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::White);

	return (nColorCount!=0); //Warning: "!=" operator used. Means: "If this color was spent, then it will trigger."
}

//____________________________________________________________________________
//
CInduceParanoiaCard::CInduceParanoiaCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Induce Paranoia"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CInduceParanoiaCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CInduceParanoiaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	int converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CPlayer* target = pCard->GetController();

	CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(converted), MaximumValue(converted));		
	pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier.GetSelection(0).moveType = MoveType::Others;
	pModifier.AddSelection(MinimumValue(converted), MaximumValue(converted), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	int nColorCount = GetLastCastingManaCost().GetMana(CManaPool::Color::Black);

	if ((nColorCount != 0) && bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CTwistedJusticeCard::CTwistedJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twisted Justice"), CardType::Sorcery, nID)
{
		counted_ptr<CTargetSacrificePlusSpell> cpSpell(
		::CreateObject<CTargetSacrificePlusSpell>(this, AbilityType::Sorcery,					
			_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->SetDrawCardsEqualPower(TRUE);

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CDroolingGroodionCard::CDroolingGroodionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drooling Groodion"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDoubleTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDisembowelCard::CDisembowelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disembowel"), CardType::Instant, nID)

{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, false));		

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
			
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFaithsFettersCard::CFaithsFettersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Faith's Fetters"), CardType::EnchantPermanent, nID)
	, m_CardFilter1(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))	
{
	{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("3") WHITE_MANA_TEXT,
			new TrueCardComparer,
			CardKeyword::Null));

	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter1);
	cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFaithsFettersCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new EnchantedByComparer(this));	

	m_pAbility = cpAbility.GetPointer();

	AddAbility(cpAbility.GetPointer());
	}
}
bool CFaithsFettersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	m_pAbility->EndEnchantment();
	m_pAbility->StartEnchantment();

	return true;
}
//____________________________________________________________________________
//
CDreamLeashCard::CDreamLeashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream Leash"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TappedComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMarkOfEvictionCard::CMarkOfEvictionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mark of Eviction"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CMarkOfEvictionCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CMarkOfEvictionCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddChildFilter(new CCardFilter(new EnchantedOnComparer(pEnchantedCard)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGleancrawlerCard::CGleancrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gleancrawler"), CardType::Creature, CREATURE_TYPE2(Insect, Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(false);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardPresentinHistoryComparer(ZoneId::Graveyard, ZoneId::Battlefield));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBrainspoilCard::CBrainspoilCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Brainspoil"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new EnchantedCardComparer);

	{
		//Transmute for a card with converted mana cost of 5
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 5"), _T("cards with converted mana cost 5"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(5));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CLeaveNoTraceCard::CLeaveNoTraceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Leave No Trace"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLeaveNoTraceCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield,
			ZoneId::Graveyard,
			true, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLeaveNoTraceCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Destroy target enchantment and each other enchantment that shares a color with it. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CLeaveNoTraceCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Enchantment, false));
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CLeaveNoTraceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CBatheInLightCard::CBatheInLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bathe in Light"), CardType::Instant, nID)
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CBatheInLightCard::OnColorSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,FALSE));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBatheInLightCard::BeforeResolution));
	cpSpell->SetAbilityText(_T("Choose a color. Target creature and each other creature that shares a color with it gain protection from the chosen color until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CBatheInLightCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter1.SetComparer(new AnyCreatureComparer);
	m_CardFilter1.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter1.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	m_CardFilter2.SetComparer(new AnyCreatureComparer);
	m_CardFilter2.AddComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	int i = 0;

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
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(),(DWORD)pAction->GetAssociatedCard(), i);

	return true;
}
void CBatheInLightCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	CCountedCardContainer cards1;
	CCountedCardContainer cards2;

	CZone* pFromZone;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					m_CardFilter1.GetIncluded(*pFromZone, cards1);
					m_CardFilter2.GetIncluded(*pFromZone, cards2);
				}

				for (int ic = 0; ic < cards2.GetSize(); ++ic)
					modifier->ApplyTo(cards2.GetAt(ic));
				for (int ic = 0; ic < cards1.GetSize(); ++ic)
					modifier->ApplyTo(cards1.GetAt(ic));
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					m_CardFilter1.GetIncluded(*pFromZone, cards1);
					m_CardFilter2.GetIncluded(*pFromZone, cards2);
				}

				for (int ic = 0; ic < cards2.GetSize(); ++ic)
					modifier->ApplyTo(cards2.GetAt(ic));
				for (int ic = 0; ic < cards1.GetSize(); ++ic)
					modifier->ApplyTo(cards1.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					m_CardFilter1.GetIncluded(*pFromZone, cards1);
					m_CardFilter2.GetIncluded(*pFromZone, cards2);
				}

				for (int ic = 0; ic < cards2.GetSize(); ++ic)
					modifier->ApplyTo(cards2.GetAt(ic));
				for (int ic = 0; ic < cards1.GetSize(); ++ic)
					modifier->ApplyTo(cards1.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					m_CardFilter1.GetIncluded(*pFromZone, cards1);
					m_CardFilter2.GetIncluded(*pFromZone, cards2);
				}

				for (int ic = 0; ic < cards2.GetSize(); ++ic)
					modifier->ApplyTo(cards2.GetAt(ic));
				for (int ic = 0; ic < cards1.GetSize(); ++ic)
					modifier->ApplyTo(cards1.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
					m_CardFilter1.GetIncluded(*pFromZone, cards1);
					m_CardFilter2.GetIncluded(*pFromZone, cards2);
				}

				for (int ic = 0; ic < cards2.GetSize(); ++ic)
					modifier->ApplyTo(cards2.GetAt(ic));
				for (int ic = 0; ic < cards1.GetSize(); ++ic)
					modifier->ApplyTo(cards1.GetAt(ic));
				
				return;
			}
		}
	
}
//____________________________________________________________________________
//
CCleansingBeamCard::CCleansingBeamCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cleansing Beam"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCleansingBeamCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("4") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-2), PreventableType::Preventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCleansingBeamCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Cleansing Beam deals 2 damage to target creature and each other creature that shares a color with it. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CCleansingBeamCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CCleansingBeamCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CLifeModifier modifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage, TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo((CCreatureCard*)cards.GetAt(ic));
}

//____________________________________________________________________________
//
CInciteHysteriaCard::CInciteHysteriaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Incite Hysteria"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CInciteHysteriaCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInciteHysteriaCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Until end of turn, target creature and each other creature won't be able to block. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CInciteHysteriaCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CInciteHysteriaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CCreatureKeywordModifier* modifier = new CCreatureKeywordModifier;
	modifier->GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	modifier->GetModifier().SetOneTurnOnly(TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier->ApplyTo((CCreatureCard*)cards.GetAt(ic));
}

//____________________________________________________________________________
//
CSurgeOfZealCard::CSurgeOfZealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Surge of Zeal"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSurgeOfZealCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSurgeOfZealCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Target creature and each other creature that shares a color with it gain haste until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CSurgeOfZealCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CSurgeOfZealCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CCreatureKeywordModifier* modifier = new CCreatureKeywordModifier;
	modifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	modifier->GetModifier().SetOneTurnOnly(TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier->ApplyTo((CCreatureCard*)cards.GetAt(ic));
}

//____________________________________________________________________________
//
CWojekEmbermageCard::CWojekEmbermageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wojek Embermage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWojekEmbermageCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));

	cpAbility->SetAbilityText(_T("Wojek Embermage deals 1 damage to target creature and each other creature that shares a color with it. Activates"));
	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWojekEmbermageCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	AddAbility(cpAbility.GetPointer());
}

bool CWojekEmbermageCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CWojekEmbermageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CLifeModifier modifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage, TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo((CCreatureCard*)cards.GetAt(ic));
}
//____________________________________________________________________________
//
CWojekSirenCard::CWojekSirenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wojek Siren"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWojekSirenCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWojekSirenCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Target creature and each other creature that shares a color with it get +1/+1 until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CWojekSirenCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CWojekSirenCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CPowerModifier* modifier1 = new CPowerModifier(Power(+1));
	CLifeModifier* modifier2 = new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
	{
		modifier1->ApplyTo((CCreatureCard*)cards.GetAt(ic));
		modifier2->ApplyTo((CCreatureCard*)cards.GetAt(ic));
	}
}

//____________________________________________________________________________
//
CMindleechMassCard::CMindleechMassCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindleech Mass"), CardType::Creature, CREATURE_TYPE(Horror), nID,
	_T("5") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredFreeCastAbility1, CWhenSelfDamageDealt, 
			CWhenSelfDamageDealt::PlayerEventCallback, 
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeNonControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers)));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CScreechingGriffinCard::CScreechingGriffinCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Screeching Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2), &m_CardFilter)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CScreechingGriffinCard::OnResolutionCompleted))
	,m_WhenNodeChanged(this, NodeId::CleanupStep1, FALSE)
{
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CScreechingGriffinCard::OnNodeChanged));
	m_CardFilter.AddNegateComparer(new  ContainedinComparer(&m_AffectedCards));

	GetCreatureKeyword()->AddFlying(FALSE);
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CScreechingGriffinCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	m_AffectedCards.AddCard(pAbilityAction->GetAssociatedCard(),CardPlacement::Top);
}
void CScreechingGriffinCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
}
//____________________________________________________________________________
//
CRallyTheRighteousCard::CRallyTheRighteousCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rally the Righteous"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRallyTheRighteousCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,FALSE));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRallyTheRighteousCard::BeforeResolution));
	cpSpell->SetAbilityText(_T("Untap target creature and each other creature that shares a color with it. Those creatures get +2/+0 until end of turn. Casts"));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CRallyTheRighteousCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter1.SetComparer(new AnyCreatureComparer);
	m_CardFilter1.AddComparer(new CardSharingCardColorComparer(pAction->GetAssociatedCard()));
	m_CardFilter1.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	m_CardFilter2.SetComparer(new AnyCreatureComparer);
	m_CardFilter2.AddComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CRallyTheRighteousCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
	CCountedCardContainer cards1;
	CCountedCardContainer cards2;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter1.GetIncluded(*pFromZone, cards1);
		m_CardFilter2.GetIncluded(*pFromZone, cards2);
	}

	CCardOrientationModifier* modifier1 = new CCardOrientationModifier(FALSE);
	CPowerModifier* modifier2 = new CPowerModifier(Power(+2));

	for (int ic = 0; ic < cards2.GetSize(); ++ic)
		modifier1->ApplyTo(cards2.GetAt(ic));

	for (int ic = 0; ic < cards1.GetSize(); ++ic)
		modifier1->ApplyTo(cards1.GetAt(ic));

	for (int ic = 0; ic < cards2.GetSize(); ++ic)
		modifier2->ApplyTo((CCreatureCard*)cards2.GetAt(ic));

	for (int ic = 0; ic < cards1.GetSize(); ++ic)
		modifier2->ApplyTo((CCreatureCard*)cards1.GetAt(ic));
}
//____________________________________________________________________________
//
CDimirMachinationsCard::CDimirMachinationsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dimir Machinations"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				3));

		cpSpell->SetSelectionOptions(MaximumValue(SpecialNumber::Any), ZoneId::Exile, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("cards")), MinimumValue(0));
		cpSpell->SetReorder(TRUE, ZoneId::Library);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Transmute for a card with converted mana cost of 3
		m_CardFilter.SetFilterName(_T("a card with converted mana cost 3"), _T("cards with converted mana cost 3"));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(3));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetAbilityText(_T("Transmute - "));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CMoonlightBargainCard::CMoonlightBargainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moonlight Bargain"), CardType::Instant, nID)
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMoonlightBargainCard::OnPaymentSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoonlightBargainCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMoonlightBargainCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int nCards;
	if (pLibrary->GetSize() < 5)
		nCards = pLibrary->GetSize();
	else
		nCards = 5;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nCards , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.ApplyTo(pController);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		if (nCards == 1)
			selectionEntry.strText.Format(_T("Don't pay life (%d card to graveyard)"), nCards);
		else
			selectionEntry.strText.Format(_T("Don't pay life (%d cards to graveyard)"), nCards);

		entries.push_back(selectionEntry);
	}
	if (!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		for (int i = 1; i <= nCards; i++)
		{
			if (pController->GetLife() >= Life(2*i))
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = i;
				if (i == nCards)
					if (i == 1)
						selectionEntry.strText.Format(_T("Pay %d life (%d card to hand)"), 2*i, i);
					else
						selectionEntry.strText.Format(_T("Pay %d life (%d cards to hand)"), 2*i, i);
				else if (nCards - i == 1)
					if (i == 1)
						selectionEntry.strText.Format(_T("Pay %d life (%d card to graveyard, %d card to hand)"), 2*i, nCards - i, i);
					else
						selectionEntry.strText.Format(_T("Pay %d life (%d card to graveyard, %d cards to hand)"), 2*i, nCards - i, i);
				else
					if (i == 1)
						selectionEntry.strText.Format(_T("Pay %d life (%d cards to graveyard, %d card to hand)"), 2*i, nCards - i, i);
					else
						selectionEntry.strText.Format(_T("Pay %d life (%d cards to graveyard, %d cards to hand)"), 2*i, nCards - i, i);

				entries.push_back(selectionEntry);
			}
		}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)nCards);
	
	return true;
}

void CMoonlightBargainCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nCards = (int)dwContext1;
			int nHand = (int)it->dwContext;
			int nGraveyard = nCards - nHand;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (nHand == 0)
					strMessage.Format(_T("%s doesn't pay life"), pSelectionPlayer->GetPlayerName());
				else
					strMessage.Format(_T("%s pays %d life"), pSelectionPlayer->GetPlayerName(), 2*nHand);
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CLifeModifier pModifier1 = CLifeModifier(Life(-2*nHand), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier1.ApplyTo(pSelectionPlayer);

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, nCards, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(nGraveyard), MaximumValue(nGraveyard), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
			pModifier2.SetReorderInformation(true, ZoneId::Hand);
		
			pModifier2.ApplyTo(pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CThreeDreamsCard::CThreeDreamsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Three Dreams"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThreeDreamsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CThreeDreamsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	CCountedCardContainer SelectedCards;

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Aura, false));

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController, ZoneId::Library, &m_CardFilter, ZoneId::Hand, TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &SelectedCards, FALSE);
	pModifier1.ApplyTo(pController);

	if (SelectedCards.GetSize() > 0)
	{
		m_CardFilter.AddNegateComparer(new CardNameComparer(SelectedCards.GetAt(0)->GetPrintedCardName()));
		SelectedCards.RemoveAll();

		CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController, ZoneId::Library, &m_CardFilter, ZoneId::Hand, TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &SelectedCards, FALSE);
		pModifier1.ApplyTo(pController);

		if (SelectedCards.GetSize() > 0)
		{
			m_CardFilter.AddNegateComparer(new CardNameComparer(SelectedCards.GetAt(0)->GetPrintedCardName()));
			SelectedCards.RemoveAll();

			CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(1), pController, ZoneId::Library, &m_CardFilter, ZoneId::Hand, TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &SelectedCards, FALSE);
			pModifier1.ApplyTo(pController);
		}
	}

	pLibrary->Shuffle();
	return true;
}

//____________________________________________________________________________
//
CBloodbondMarchCard::CBloodbondMarchCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bloodbond March"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodbondMarchCard::SetTriggerContext));		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodbondMarchCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CBloodbondMarchCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
		return true;
}

bool CBloodbondMarchCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(triggerContext.m_pCard->GetPrintedCardName()));

	for (int ip = 0; ip< GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pPlayer)));

		pModifier.ApplyTo(pPlayer);
	}


	return false;
}


//____________________________________________________________________________
//
CTunnelVisionCard::CTunnelVisionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tunnel Vision"), CardType::Sorcery, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTunnelVisionCard::OnNameSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("5") BLUE_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTunnelVisionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTunnelVisionCard::BeforeResolution(CAbilityAction* pAction)
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

void CTunnelVisionCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CPlayer* pTarget = (CPlayer*)dwContext1;
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				
				pModifier.ApplyTo(pTarget);
				
				pTarget->GetZoneById(ZoneId::Library)->Shuffle();
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
				bool bSearch = true;
				CCard* pFound;
				CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);
				int n = 0;

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
					}
				}

				if (pFound)
				{
					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, n-1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					pModifier1.SetReorderInformation(true, ZoneId::Graveyard);
		
					pModifier1.ApplyTo(pTarget);

					CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
					pModifier2.ApplyTo(pTarget);
				}
				else
				{
					CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		
					pModifier.ApplyTo(pTarget);

					pLibrary->Shuffle();
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CCloudstoneCurioCard::CCloudstoneCurioCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cloudstone Curio"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCloudstoneCurioCard::OnCardSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloudstoneCurioCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloudstoneCurioCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CCloudstoneCurioCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CCloudstoneCurioCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCard* pOriginalCard = pAction->GetTriggerContext().m_pCard;
	
	if (pBattlefield->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't return anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pOriginalCard != pCard) &&
				((pOriginalCard->GetCardType().IsArtifact() && pCard->GetCardType().IsArtifact()) ||
				(pOriginalCard->GetCardType().IsCreature() && pCard->GetCardType().IsCreature()) ||
				(pOriginalCard->GetCardType().IsEnchantment() && pCard->GetCardType().IsEnchantment()) ||
				(pOriginalCard->GetCardType().IsLand() && pCard->GetCardType().IsLand()) ||
				(pOriginalCard->GetCardType().IsPlaneswalker() && pCard->GetCardType().IsPlaneswalker()) ||
				(pOriginalCard->GetCardType().IsTribal() && pCard->GetCardType().IsTribal())))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Return %s to its owner's hand."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CCloudstoneCurioCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't return anything"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s returns %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CRaziasPurificationCard::CRaziasPurificationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Razia's Purification"), CardType::Sorcery, nID)
	, m_FirstPermanentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRaziasPurificationCard::OnFirstPermanentSelected))
	, m_SecondPermanentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRaziasPurificationCard::OnSecondPermanentSelected))
	, m_ThirdPermanentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRaziasPurificationCard::OnThirdPermanentSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRaziasPurificationCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CRaziasPurificationCard::BeforeResolution(CAbilityAction* pAction)
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

	FirstPermanentSelection(0);
	return true;
}

void CRaziasPurificationCard::FirstPermanentSelection(int nPlayer)
{
	if (nPlayer < Players.GetSize())
	{
		CPlayer* pPlayer = Players.GetAt(nPlayer);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		CCardFilter m_CardFilter;
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

		if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (!Cards.HasCard(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Select %s."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_FirstPermanentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
		}
		else
			FirstPermanentSelection(nPlayer + 1);
	}
	else
	{
		CCardFilter m_CardFilter;
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, GetGame()->GetPlayer(ip))));

			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

void CRaziasPurificationCard::SecondPermanentSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (!Cards.HasCard(pCard))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_SecondPermanentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		FirstPermanentSelection(nPlayer + 1);
}

void CRaziasPurificationCard::ThirdPermanentSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (!Cards.HasCard(pCard))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_ThirdPermanentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		FirstPermanentSelection(nPlayer + 1);
}

void CRaziasPurificationCard::OnFirstPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

			SecondPermanentSelection(nPlayer);
				
			return;
		}
}

void CRaziasPurificationCard::OnSecondPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

			ThirdPermanentSelection(nPlayer);
				
			return;
		}
}

void CRaziasPurificationCard::OnThirdPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

			FirstPermanentSelection(nPlayer + 1);
				
			return;
		}
}

//____________________________________________________________________________
//
/*
CCrownOfConvergenceCard::CCrownOfConvergenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crown of Convergence"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
		, m_CardFilter(_T("creature card"), _T("creature cards"), new AnyCreatureComparer())
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCrownOfConvergenceCard::OnZoneChanged))
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
		counted_ptr<CTriggeredTopCardEnchantAbility> cpAbility(
		::CreateObject<CTriggeredTopCardEnchantAbility>(this, &m_CardFilter));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new CardSharingCardColorWithYourLibraryTopComparer());
		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer());
		cpAbility->GetEnchantment()->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetEnchantment()->GetLifeModifier().SetLifeDelta(Power(+1));
		cpAbility->GetEnchantment()->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT WHITE_MANA_TEXT));

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->GetResolutionModifier().CPlayerModifiers::Add(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

void CCrownOfConvergenceCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
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
*/
//____________________________________________________________________________
//
CExcruciatorCard::CExcruciatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Excruciator"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	GetCardKeyword()->AddUnpreventableDamage(TRUE);
}

//____________________________________________________________________________
//
CBottledCloisterCard::CBottledCloisterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bottled Cloister"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBottledCloisterCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::_ExileFaceDown));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBottledCloisterCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Hand));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBottledCloisterCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CBottledCloisterCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CBottledCloisterCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBottledCloisterCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CBottledCloisterCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CBottledCloisterCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	for (int i = 0; i < pHand->GetSize(); ++i)
		pExiled.AddCard(pHand->GetAt(i), CardPlacement::Top);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pController)));
	pModifier.ApplyTo(pController);

	return true;
}

bool CBottledCloisterCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pHand, pController, MoveType::Others);
	}
	
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier.ApplyTo(pController);

	return true;
}

void CBottledCloisterCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CWoodwraithCorrupterCard::CWoodwraithCorrupterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodwraith Corrupter"), CardType::Creature, CREATURE_TYPE2(Elemental, Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") BLACK_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWoodwraithCorrupterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CWoodwraithCorrupterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Elemental Horror AA"), 64054, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CFollowedFootstepsCard::CFollowedFootstepsCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Followed Footsteps"), CardType::EnchantCreature, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFollowedFootstepsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFollowedFootstepsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CFollowedFootstepsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.nValue1 = (DWORD)m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

bool CFollowedFootstepsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo(pCard);
	return true;
}


//____________________________________________________________________________
//
CFlickerformCard::CFlickerformCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Flickerform"), CardType::EnchantCreature, nID,
		_T("1") WHITE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlickerformCard::BeforeResolution));
	cpAbility->SetAbilityText(_T("Exile enchanted creature and all Auras attached to it. Activates"));

	AddAbility(cpAbility.GetPointer());
}

bool CFlickerformCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2a;
	CCountedCardContainer pSubjects2b;

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new EnchantedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			if (m_CardFilter.IsCardIncluded(pBattlefield->GetAt(i)))
				pSubjects2a.AddCard(pBattlefield->GetAt(i), CardPlacement::Top);
	}

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others);

	for (int i = 0; i < pSubjects2a.GetSize(); ++i)
	{
		pModifier1.ApplyTo(pSubjects2a.GetAt(i));
		if (pSubjects2a.GetAt(i)->GetZoneId() == ZoneId::Exile)
			pSubjects2b.AddCard(pSubjects2a.GetAt(i), CardPlacement::Top);
	}

	pModifier1.ApplyTo(pCard);
	if (pCard->GetZoneId() == ZoneId::Exile)
		pSubjects1.AddCard(pCard, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier2 = CDoubleContainerEffectModifier(GetGame(), _T("Flickerform Effect"), 61066, &pSubjects1, &pSubjects2b);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CTerraformerCard::CTerraformerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terraformer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
	, m_LandTypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CTerraformerCard::OnLandTypeSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1")));

	cpAbility->AddSacrificeCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTerraformerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CTerraformerCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Forest"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Island"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("Mountain"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("Plains"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("Swamp"));

		entries.push_back(selectionEntry);
	}
	
	m_LandTypeSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CTerraformerCard::OnLandTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Forest | CardType::PseudoBasicLand, TRUE, CardType::_LandTypeChangeMask)));
				pModifier.ApplyTo(pSelectionPlayer);
			
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Island | CardType::PseudoBasicLand, TRUE, CardType::_LandTypeChangeMask)));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Mountain | CardType::PseudoBasicLand, TRUE, CardType::_LandTypeChangeMask)));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Plains | CardType::PseudoBasicLand, TRUE, CardType::_LandTypeChangeMask)));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Swamp | CardType::PseudoBasicLand, TRUE, CardType::_LandTypeChangeMask)));
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
	
}

//____________________________________________________________________________
//
CSpectralSearchlightCard::CSpectralSearchlightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spectral Searchlight"), CardType::Artifact, nID,
	_T("3"), AbilityType::Artifact)
	, m_PlayerSelection(pGame,CSelectionSupport::SelectionCallback(this, &CSpectralSearchlightCard::OnPlayerSelected))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CSpectralSearchlightCard::OnColorSelected))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this,
		_T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpectralSearchlightCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::Mana);

	//Not sure of that, sounds painful when the computer says it.
	cpAbility->SetAbilityText(_T("Choose a player. Activates"));

	AddAbility(cpAbility.GetPointer());
}

bool CSpectralSearchlightCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		SelectionEntry entry;
		entry.dwContext = ip;
		entry.strText.Format(_T("choose %s"), GetGame()->GetPlayer(ip)->GetPlayerName());
		entries.push_back(entry);
	}
	m_PlayerSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CSpectralSearchlightCard::OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	CPlayer* chosenPlayer;
	ATLASSERT(nSelectedCount == 1);

	//So we just choose a player
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			chosenPlayer = GetGame()->GetPlayer(it->dwContext);
		}
	//Just in case
	if(!chosenPlayer) return;

	//Create color selection prompt
	static const CManaPool::Color::Enum cardColors[] =
	{
		CManaPool::Color::White,
		CManaPool::Color::Blue,
		CManaPool::Color::Black,
		CManaPool::Color::Red,
		CManaPool::Color::Green
	};
	std::vector<SelectionEntry> entries;

	for (int i = 0; i < ARRAY_SIZE(cardColors); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("Choose %s for %s"), CManaPool::Color::ToDrawString(cardColors[i]), GetCardName());
		entries.push_back(entry);
	}

		//Show the mana color prompt to the selected player
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, chosenPlayer);
}

void CSpectralSearchlightCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	//Add the selected mana color to the selected player
	LPCTSTR manaColor;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			switch (it->dwContext)
			{
			case 0:
				manaColor = WHITE_MANA_TEXT;
				break;
			case 1:
				manaColor = BLUE_MANA_TEXT;
				break;
			case 2:
				manaColor = BLACK_MANA_TEXT;
				break;
			case 3:
				manaColor = RED_MANA_TEXT;
				break;
			case 4:
				manaColor = GREEN_MANA_TEXT;
				break;
			default:
				return;
			}
		}
	//Just in case
	if(!manaColor) return;

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(manaColor)
	);
	//Add the Mana to the chosen player
	pModifier.ApplyTo(pSelectionPlayer);
}

//____________________________________________________________________________
//
CNullstoneGargoyleCard::CNullstoneGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nullstone Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("9"), Power(4), Life(5))
{
	typedef 
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNullstoneGargoyleCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::Counterspell);

	AddAbility(cpAbility.GetPointer());
}

bool CNullstoneGargoyleCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;

	int nNonCreatureSpells = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nNonCreatureSpells += GetGame()->GetPlayer(ip)->GetCertainAntiTypeCastedCount(CardType::Creature);
	
	return (nNonCreatureSpells == 1);
}

//____________________________________________________________________________
//
