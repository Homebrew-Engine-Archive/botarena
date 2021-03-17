#include "stdafx.h"
#include "CardInnistrad.h"

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
		DEFINE_CARD(CAbattoirGhoulCard);
		DEFINE_CARD(CAbbeyGriffinCard);
		DEFINE_CARD(CAmbushViperCard);
		DEFINE_CARD(CAngelicOverseerCard);
		DEFINE_CARD(CAngelOfFlightAlabasterCard);
		DEFINE_CARD(CArmoredSkaabCard);
		DEFINE_CARD(CArmyOfTheDamnedCard);
		DEFINE_CARD(CAshmouthHoundCard);
		DEFINE_CARD(CAvacynianPriestCard);
		DEFINE_CARD(CAvacynsPilgrimCard);
		DEFINE_CARD(CBalefireDragonCard);
		DEFINE_CARD(CBaneOfHanweirCard);
		DEFINE_CARD(CBattlegroundGeistCard);
		//DEFINE_CARD(CBlasphemousActCard);
		DEFINE_CARD(CBloodcrazedNeonateCard);
		DEFINE_CARD(CBloodgiftDemonCard);
		DEFINE_CARD(CBloodlineKeeperCard);
		DEFINE_CARD(CBoneyardWurmCard);
		DEFINE_CARD(CBrainWeevilCard);
		DEFINE_CARD(CBrimstoneVolleyCard);
		DEFINE_CARD(CBumpInTheNightCard);
		DEFINE_CARD(CBurningVengeanceCard);
		DEFINE_CARD(CCacklingCounterpartCard);
		DEFINE_CARD(CCaravanVigilCard);
		DEFINE_CARD(CCellarDoorCard);
		DEFINE_CARD(CChampionOfTheParishCard);
		DEFINE_CARD(CChapelGeistCard);
		DEFINE_CARD(CCharmbreakerDevilsCard);
		DEFINE_CARD(CCivilizedScholarCard);
		DEFINE_CARD(CClifftopRetreatCard);
		DEFINE_CARD(CCloisteredYouthCard);
		DEFINE_CARD(CCobbledWingsCard);
		DEFINE_CARD(CCorpseLungeCard);
		DEFINE_CARD(CCreepyDollCard);
		DEFINE_CARD(CCreepingRenaissanceCard);
		DEFINE_CARD(CCrosswayVampireCard);
		DEFINE_CARD(CDarkthicketWolfCard);
		DEFINE_CARD(CDaybreakRangerCard);
		DEFINE_CARD(CDeadWeightCard);
		DEFINE_CARD(CDearlyDepartedCard);
		DEFINE_CARD(CDelverOfSecretsCard);
		DEFINE_CARD(CDemonmailHauberkCard);
		DEFINE_CARD(CDesperateRavingsCard);
		DEFINE_CARD(CDevilsPlayCard);
		DEFINE_CARD(CDiregrafGhoulCard);
		DEFINE_CARD(CDiscipleOfGriselbrandCard);
		DEFINE_CARD(CDivineReckoningCard);
		DEFINE_CARD(CDoomedTravelerCard);
		DEFINE_CARD(CDreamTwistCard);
		DEFINE_CARD(CElderCatharCard);
		DEFINE_CARD(CElderOfLaurelsCard);
		DEFINE_CARD(CEliteInquisitorCard);
		DEFINE_CARD(CEndlessRanksOfTheDeadCard);
		DEFINE_CARD(CFalkenrathMaraudersCard);
		DEFINE_CARD(CFalkenrathNobleCard);
		DEFINE_CARD(CFeelingOfDreadCard);
		DEFINE_CARD(CFeralRidgewolfCard);
		DEFINE_CARD(CFesterhideBoarCard);
		DEFINE_CARD(CFiendHunterCard);
		DEFINE_CARD(CForbiddenAlchemyCard);
		DEFINE_CARD(CFortressCrabCard);
		DEFINE_CARD(CFrightfulDelusionCard);
		DEFINE_CARD(CFullMoonsRiseCard);
		DEFINE_CARD(CFurorOfTheBittenCard);
		DEFINE_CARD(CGallowsWardenCard);
		DEFINE_CARD(CGalvanicJuggernautCard);
		DEFINE_CARD(CGarrukRelentlessCard);
		DEFINE_CARD(CGarruktheVeilCursedCard);
		DEFINE_CARD(CGatstafHowlerCard);
		DEFINE_CARD(CGatstafShepherdCard);
		DEFINE_CARD(CGavonyTownshipCard);
		DEFINE_CARD(CGeistcatchersRigCard);
		DEFINE_CARD(CGeistflameCard);
		DEFINE_CARD(CGeistHonoredMonkCard);
		DEFINE_CARD(CGeistOfSaintTraftCard);
		DEFINE_CARD(CGhostlyPossessionCard);
		DEFINE_CARD(CGhoulcallersBellCard);
		DEFINE_CARD(CGhoulcallersChantCard);
		DEFINE_CARD(CGhoulraiserCard);
		DEFINE_CARD(CGnawToTheBoneCard);
		DEFINE_CARD(CGraspOfPhantomsCard);
		DEFINE_CARD(CGraveBrambleCard);
		DEFINE_CARD(CGraveyardShovelCard);
		DEFINE_CARD(CGrimgrinCorpseBornCard);
		DEFINE_CARD(CGrimoireOfTheDeadCard);
		DEFINE_CARD(CGrizzledOutcastsCard);
		DEFINE_CARD(CGruesomeDeformityCard);
		DEFINE_CARD(CGutterGrimeCard);
		DEFINE_CARD(CHamletCaptainCard);
		DEFINE_CARD(CHanweirWatchkeepCard);
		DEFINE_CARD(CHarvestPyreCard);
		DEFINE_CARD(CHeartlessSummoningCard);
		DEFINE_CARD(CHereticsPunishmentCard);
		DEFINE_CARD(CHinterlandHarborCard);
		DEFINE_CARD(CHollowhengeScavengerCard);
		DEFINE_CARD(CHomicidalBruteCard);
		DEFINE_CARD(CHowlpackAlphaCard);
		DEFINE_CARD(CHowlpackOfEstwaldCard);
		DEFINE_CARD(CHystericalBlindnessCard);
		DEFINE_CARD(CInfernalPlungeCard);
		DEFINE_CARD(CInsectileAberrationCard);
		DEFINE_CARD(CInstigatorGangCard);
		DEFINE_CARD(CIntangibleVirtueCard);
		DEFINE_CARD(CIntoTheMawOfHellCard);
		DEFINE_CARD(CInvisibleStalkerCard);
		DEFINE_CARD(CIronfangCard);
		DEFINE_CARD(CIsolatedChapelCard);
		DEFINE_CARD(CKessigCagebreakersCard);
		DEFINE_CARD(CKessigWolfCard);
		DEFINE_CARD(CKessigWolfRunCard);
		DEFINE_CARD(CKindercatchCard);
		DEFINE_CARD(CKrallenhordeWantonsCard);
		DEFINE_CARD(CKruinOutlawCard);
		DEFINE_CARD(CLaboratoryManiacCard);
		DEFINE_CARD(CLanternSpiritCard);
		DEFINE_CARD(CLilianaoftheVeilCard);
		DEFINE_CARD(CLordOfLineageCard);
		DEFINE_CARD(CLudevicsAbominationCard);
		DEFINE_CARD(CLudevicsTestSubjectCard);
		DEFINE_CARD(CLumberknotCard);
		DEFINE_CARD(CMakeAWishCard);
		DEFINE_CARD(CMakeshiftMaulerCard);
		DEFINE_CARD(CManorSkeletonCard);
		DEFINE_CARD(CMarkovPatricianCard);
		DEFINE_CARD(CMaskOfAvacynCard);
		DEFINE_CARD(CMausoleumGuardCard);
		DEFINE_CARD(CMayorofAvabruckCard);
		DEFINE_CARD(CMawOfTheMireCard);
		DEFINE_CARD(CMemorysJourneyCard);
		DEFINE_CARD(CMentorOfTheMeekCard);
		DEFINE_CARD(CMercilessPredatorCard);
		DEFINE_CARD(CMidnightHauntingCard);
	 	DEFINE_CARD(CMikaeustheLunarchCard);
		DEFINE_CARD(CMindshriekerCard);
		DEFINE_CARD(CMirrorMadPhantasmCard);
		DEFINE_CARD(CMoanOfTheUnhallowedCard);
		DEFINE_CARD(CMoldgrafMonstrosityCard);
		DEFINE_CARD(CMomentOfHeroismCard);
		DEFINE_CARD(CMoonHeronCard);
		DEFINE_CARD(CMoonmistCard);
		DEFINE_CARD(CMorkrutBansheeCard);
		DEFINE_CARD(CMoorlandHauntCard);
		DEFINE_CARD(CMurderOfCrowsCard);
		DEFINE_CARD(CNephaliaDrownyardCard);
		DEFINE_CARD(CNevermoreCard);
		DEFINE_CARD(CNightbirdsClutchesCard);
		DEFINE_CARD(CNightfallPredatorCard);
		DEFINE_CARD(CNightRevelersCard);
		DEFINE_CARD(CNightTerrorsCard);
		DEFINE_CARD(COliviaVoldarenCard);
		DEFINE_CARD(COneEyedScarecrowCard);
		DEFINE_CARD(COrchardSpiritCard);
		DEFINE_CARD(CParallelLivesCard);
		DEFINE_CARD(CParaseleneCard);
		DEFINE_CARD(CPastInFlamesCard);
		DEFINE_CARD(CPurifyTheGraveCard);
		DEFINE_CARD(CRageThrowerCard);
		DEFINE_CARD(CRakishHeirCard);
		DEFINE_CARD(CRallyThePeasantsCard);
		DEFINE_CARD(CRampagingWerewolfCard);
		DEFINE_CARD(CReaperFromTheAbyssCard);
		DEFINE_CARD(CRebukeCard);
		DEFINE_CARD(CRecklessWaifCard);
		DEFINE_CARD(CRiotDevilsCard);
		DEFINE_CARD(CRollingTemblorCard);
		DEFINE_CARD(CRottingFensnakeCard);
		DEFINE_CARD(CRooftopStormCard);
		DEFINE_CARD(CRunechantersPikeCard);
		DEFINE_CARD(CScourgeOfGeierReachCard);
		DEFINE_CARD(CScreechingBatCard);
		DEFINE_CARD(CSelhoffOccultistCard);
		DEFINE_CARD(CSeverTheBloodlineCard);
		DEFINE_CARD(CSilentDepartureCard);
		DEFINE_CARD(CSilverchaseFoxCard);
		DEFINE_CARD(CSkaabGoliathCard);
		DEFINE_CARD(CSkaabRuinatorCard);
		DEFINE_CARD(CSkeletalGrimaceCard);
		DEFINE_CARD(CSkirsdagCultistCard);
		DEFINE_CARD(CSkirsdagHighPriestCard);
		DEFINE_CARD(CSlayerOfTheWickedCard);
		DEFINE_CARD(CSmiteTheMonstrousCard);
		DEFINE_CARD(CSnapcasterMageCard);
		DEFINE_CARD(CSomberwaldSpiderCard);
		DEFINE_CARD(CSpareFromEvilCard);
		DEFINE_CARD(CSpectralFlightCard);
		DEFINE_CARD(CSpectralRiderCard);
		DEFINE_CARD(CSpiderSpawningCard);
		DEFINE_CARD(CSpideryGraspCard);
		DEFINE_CARD(CSplinterfrightCard);
		DEFINE_CARD(CStalkingVampireCard);
		DEFINE_CARD(CStensiaBloodhallCard);
		DEFINE_CARD(CStitchedDrakeCard);
		DEFINE_CARD(CStitchersApprenticeCard);
		DEFINE_CARD(CStonySilenceCard);
		DEFINE_CARD(CStromkirkNobleCard);
		DEFINE_CARD(CStromkirkPatrolCard);
		DEFINE_CARD(CSturmgeistCard);
		DEFINE_CARD(CSulfurFallsCard);
		DEFINE_CARD(CTerrorOfKruinPassCard);
		DEFINE_CARD(CThrabenMilitiaCard);
		DEFINE_CARD(CThrabenPurebloodsCard);
		DEFINE_CARD(CThrabenSentryCard);
		DEFINE_CARD(CTormentedPariahCard);
		DEFINE_CARD(CTraitorousBloodCard);
		DEFINE_CARD(CTravelersAmuletCard);
		DEFINE_CARD(CTravelPreparationsCard);
		DEFINE_CARD(CTreeOfRedemptionCard);
		DEFINE_CARD(CTrepanationBladeCard);
		DEFINE_CARD(CTributetoHungerCard);
		DEFINE_CARD(CUnburialRitesCard);
		DEFINE_CARD(CUnholyFiendCard);
		DEFINE_CARD(CUnrulyMobCard);
		DEFINE_CARD(CUlvenwaldMysticsCard);
		DEFINE_CARD(CUlvenwaldPrimordialsCard);
		DEFINE_CARD(CUnbreathingHordeCard);
		DEFINE_CARD(CUndeadAlchemistCard);
		DEFINE_CARD(CUrgentExorcismCard);
		DEFINE_CARD(CVampireInterloperCard);
		DEFINE_CARD(CVampiricFuryCard);
		DEFINE_CARD(CVictimOfNightCard);
		DEFINE_CARD(CVillageBellRingerCard);
		DEFINE_CARD(CVillageCannibalsCard);
		DEFINE_CARD(CVillageIronsmithCard);
		DEFINE_CARD(CVillagersOfEstwaldCard);
		DEFINE_CARD(CVoicelessSpiritCard);
		DEFINE_CARD(CWildbloodPackCard);
		DEFINE_CARD(CWoodenStakeCard);
		DEFINE_CARD(CWoodlandCemeteryCard);
		DEFINE_CARD(CWoodlandSleuthCard);
		DEFINE_CARD(CWreathOfGeistsCard);
		

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here
//____________________________________________________________________________
//
CMikaeustheLunarchCard::CMikaeustheLunarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mikaeus, the Lunarch"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMikaeustheLunarchCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);
	
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetExceptParent();
		cpAbility->GetOtherCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetAbilityText(_T("Remove a +1/+1, put a +1/+1 counter on each other creature you control. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

void CMikaeustheLunarchCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = GetLastCastingExtraValue();

		CCardCounterModifier modifier(_T("+1/+1"), nCount, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSpectralRiderCard::CSpectralRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Rider"), CardType::Creature, CREATURE_TYPE2(Spirit, Knight), nID,
		_T("") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
}

//____________________________________________________________________________
//
CMurderOfCrowsCard::CMurderOfCrowsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Murder of Crows"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbbeyGriffinCard::CAbbeyGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abbey Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBattlegroundGeistCard::CBattlegroundGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battleground Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Spirit), false),
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGraspOfPhantomsCard::CGraspOfPhantomsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grasp of Phantoms"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		ATLASSERT(cpSpell);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("7") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpideryGraspCard::CSpideryGraspCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spidery Grasp"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			Power(+2), Life(+4), 
			CreatureKeyword::Reach, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	ATLASSERT(cpSpell);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVampireInterloperCard::CVampireInterloperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vampire Interloper"), CardType::Creature, CREATURE_TYPE2(Vampire, Scout), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CStitchersApprenticeCard::CStitchersApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stitcher's Apprentice"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CStitchersApprenticeCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			_T("Homunculus B"), 2930,
			1));
	ATLASSERT(cpAbility);
	
	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CStitchersApprenticeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	if (bResult) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CBoneyardWurmCard::CBoneyardWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boneyard Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiregrafGhoulCard::CDiregrafGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Diregraf Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(2), Life(2))
{
	SetIntoPlayTapped();
}

//____________________________________________________________________________
//
CEliteInquisitorCard::CEliteInquisitorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Elite Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(false);

	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	m_CardFilter.AddChildFilter(new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false)));
	m_CardFilter.AddChildFilter(new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));
	GetCardKeyword()->AddSpecialProtection(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CClifftopRetreatCard::CClifftopRetreatCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Clifftop Retreat"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CClifftopRetreatCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CClifftopRetreatCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CHinterlandHarborCard::CHinterlandHarborCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Hinterland Harbor"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHinterlandHarborCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CHinterlandHarborCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CIsolatedChapelCard::CIsolatedChapelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Isolated Chapel"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CIsolatedChapelCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CIsolatedChapelCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CSulfurFallsCard::CSulfurFallsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sulfur Falls"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSulfurFallsCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CSulfurFallsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CWoodlandCemeteryCard::CWoodlandCemeteryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Woodland Cemetery"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWoodlandCemeteryCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CWoodlandCemeteryCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer()) +
		 CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pInplay->GetCardContainer()) == 0))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CStitchedDrakeCard::CStitchedDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stitched Drake"), CardType::Creature, CREATURE_TYPE2(Zombie, Drake), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CFiendHunterCard::CFiendHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fiend Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFiendHunterCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFiendHunterCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiendHunterCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFiendHunterCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiendHunterCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFiendHunterCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CFiendHunterCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CFiendHunterCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CFiendHunterCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pExiled.AddCard(pTarget, CardPlacement::Top);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CFiendHunterCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CFiendHunterCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
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

void CFiendHunterCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CSilentDepartureCard::CSilentDepartureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Silent Departure"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CInvisibleStalkerCard::CInvisibleStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Invisible Stalker"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);
	GetCreatureKeyword()->AddUnblockable(false);
}

//____________________________________________________________________________
//
CStromkirkNobleCard::CStromkirkNobleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stromkirk Noble"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	GetCreatureKeyword()->AddUnblockable(false, &m_CardFilter);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelOfFlightAlabasterCard::CAngelOfFlightAlabasterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Flight Alabaster"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEndlessRanksOfTheDeadCard::CEndlessRanksOfTheDeadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Endless Ranks of the Dead"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEndlessRanksOfTheDeadCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CEndlessRanksOfTheDeadCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCreatures = m_CardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	if (nCreatures == 0) return false;

	int nValue = nCreatures / 2;

	for (int i = 0; i < nValue; ++i)
	{
		int nRand = 0;
		int nUID = 0;
		CString name = _T("");

		if (!m_pGame->IsThinking())
		{
			nRand = pAction->GetController()->GetRand() % 3;
		}
		
		if (nRand == 0)
		{
			nUID = 2891;
			name = _T("Zombie I");
		}
		else if (nRand == 1)
		{
			nUID = 2951;
			name = _T("Zombie J");
		}
		else
		{
			nUID = 2955;
			name = _T("Zombie K");
		}

		CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), name, nUID, 1, false);
		pModifier->ApplyTo(pAction->GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CSkirsdagCultistCard::CSkirsdagCultistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirsdag Cultist"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoanOfTheUnhallowedCard::CMoanOfTheUnhallowedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moan of the Unhallowed"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoanOfTheUnhallowedCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoanOfTheUnhallowedCard::BeforeResolution));
		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CMoanOfTheUnhallowedCard::BeforeResolution(CAbilityAction* pAction)
{
	for (int i = 0; i < 2; ++i)
	{
		int nRand = 0;
		int nUID = 0;
		CString name = _T("");

		if (!m_pGame->IsThinking())
		{
			nRand = pAction->GetController()->GetRand() % 3;
		}
		
		if (nRand == 0)
		{
			nUID = 2891;
			name = _T("Zombie I");
		}
		else if (nRand == 1)
		{
			nUID = 2951;
			name = _T("Zombie J");
		}
		else
		{
			nUID = 2955;
			name = _T("Zombie K");
		}

		CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), name, nUID, 1, false);
		pModifier->ApplyTo(pAction->GetController());
	}
	return true;
}

//____________________________________________________________________________
//
CSlayerOfTheWickedCard::CSlayerOfTheWickedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slayer of the Wicked"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddChildFilter(new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false)));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddChildFilter(new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false)));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVillageCannibalsCard::CVillageCannibalsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Village Cannibals"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
// Rooftop Storm\n{5U}\nEnchantment\nISD,R\nYou may pay {0} rather than pay the mana cost for Zombie creature spells you cast.
//CRooftopStormCard::CRooftopStormCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Rooftop Storm"), CardType::GlobalEnchantment, nID,
//		_T("5") BLUE_MANA_TEXT, AbilityType::Enchantment)
//{
//	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
//		::CreateObject<CPwrTghAttrEnchantment>(this,
//			new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),	
//			Power(+0), Life(+0)));
//	ATLASSERT(cpAbility);
//
//	cpAbility->SetAffectControllerCardsOnly();
//	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Battlefield);
//
//	cpAbility->GetOtherCardModifiers().push_back(new CCardSpellModifier(
//		CCardSpellModifier::CreateSpellCallback(this,
//			&CRooftopStormCard::CreateSpell)));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//counted_ptr<CSpell> CRooftopStormCard::CreateSpell(CCard* pCard)
//{
//	counted_ptr<CGenericSpell> cpSpell(
//		::CreateObject<CGenericSpell>(pCard, AbilityType::Creature,
//			_T("0")));
//	ATLASSERT(cpSpell);
//
//	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
//	return counted_ptr<CSpell>(cpSpell.GetPointer());
//}

//____________________________________________________________________________
//
CArmyOfTheDamnedCard::CArmyOfTheDamnedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Army of the Damned"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArmyOfTheDamnedCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArmyOfTheDamnedCard::BeforeResolution));
		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CArmyOfTheDamnedCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nTokenCount = 13;
	int nMultiplyBy = 1;

	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		int nRand = 0;
		int nUID = 0;
		CString name = _T("");

		if (!m_pGame->IsThinking())
		{
			nRand = pController->GetRand() % 3;
		}
		
		if (nRand == 0)
		{
			nUID = 2891;
			name = _T("Zombie I");
		}
		else if (nRand == 1)
		{
			nUID = 2951;
			name = _T("Zombie J");
		}
		else
		{
			nUID = 2955;
			name = _T("Zombie K");
		}

		for (int j = 0; j < nMultiplyBy; ++j)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, name, nUID));		
		
			if (!m_pGame->IsThinking())
			{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(nUID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(name); }

			pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
			cpToken.GetPointer()->SetIntoPlayTapped();

			cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}

	return true;
}


//____________________________________________________________________________
//
CBalefireDragonCard::CBalefireDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Balefire Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBalefireDragonCard::SetTriggerContext));


	AddAbility(cpAbility.GetPointer());
}

bool CBalefireDragonCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CGrimgrinCorpseBornCard::CGrimgrinCorpseBornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grimgrin, Corpse-Born"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	SetIntoPlayTapped();
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());

	}
}

//____________________________________________________________________________
//
CChampionOfTheParishCard::CChampionOfTheParishCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Champion of the Parish"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKessigWolfRunCard::CKessigWolfRunCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kessig Wolf Run"), nID)
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
				RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().SetExtraManaCost(
			SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkeletalGrimaceCard::CSkeletalGrimaceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Skeletal Grimace"), nID, 
		_T("1") BLACK_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSkeletalGrimaceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSkeletalGrimaceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			BLACK_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiderSpawningCard::CSpiderSpawningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spider Spawning"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT,
				_T("Spider B"), 2931,
				0));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpiderSpawningCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("6") BLACK_MANA_TEXT,
				_T("Spider B"), 2931,
				0));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpiderSpawningCard::BeforeResolution));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Green, CardType::_ColorMask); //to fix the color of this card.
	}
}

bool CSpiderSpawningCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());
	if (nCreatures == 0) return false;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatures;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CAvacynsPilgrimCard::CAvacynsPilgrimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avacyn's Pilgrim"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("W")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelicOverseerCard::CAngelicOverseerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Overseer"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),	// Not this card
			Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(false);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(false);

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->SetConditionValue(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFalkenrathMaraudersCard::CFalkenrathMaraudersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Falkenrath Marauders"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(false);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGavonyTownshipCard::CGavonyTownshipCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gavony Township"), nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CGavonyTownshipCard::OnResolutionCompleted))
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each creature you control. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

void CGavonyTownshipCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pOppCard = pBattle->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
			pModifier.ApplyTo(pOppCard);
	}
}

//____________________________________________________________________________
//
CLudevicsTestSubjectCard::CLudevicsTestSubjectCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ludevic's Test Subject"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3), Power(13), Life(13), _T("Ludevic's Abomination"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CLudevicsTestSubjectCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Horror, TRUE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier();
		pModifier3->GetModifier().SetToRemove(CreatureKeyword::Defender);
		pModifier3->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("1") BLUE_MANA_TEXT));

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(HATCHLING_COUNTER, +1));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedCreatureCard::CanPlayFirstFace)));
  
    cpAbility->Add(cpTrait.GetPointer());
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddAbility(cpAbility.GetPointer());
}

void CLudevicsTestSubjectCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetZoneId() != ZoneId::Battlefield || GetCounterContainer()->GetCounter(HATCHLING_COUNTER)->GetCount() < 5) return;

	CCardCounterModifier* pModifier = new CCardCounterModifier(HATCHLING_COUNTER, 0, true);
	pModifier->ApplyTo(this);
	Transform();
}

//____________________________________________________________________________
//
CLudevicsAbominationCard::CLudevicsAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ludevic's Abomination"), CardType::Creature, CREATURE_TYPE2(Lizard, Horror), nID,
		_T(""), Power(13), Life(13))
{	
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CMayorofAvabruckCard::CMayorofAvabruckCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Mayor of Avabruck"), CardType::Creature, CREATURE_TYPE3(Human, Advisor, Werewolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1), Power(3), Life(3), _T("Howlpack Alpha"))
{	
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Advisor, FALSE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Human), false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAbilityName(_T("First Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE2(Werewolf, Wolf), false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf H"), 2837, 1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMayorofAvabruckCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMayorofAvabruckCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMayorofAvabruckCard::SetTriggerContext3));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMayorofAvabruckCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() == TRUE);
}

bool CMayorofAvabruckCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CMayorofAvabruckCard::SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CHowlpackAlphaCard::CHowlpackAlphaCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Howlpack Alpha"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(3), Life(3), Power(1), Life(1), _T("Mayor of Avabruck"))
{	
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Advisor, TRUE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Human), false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE2(Werewolf, Wolf), false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAbilityName(_T("First Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf H"), 2837, 1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHowlpackAlphaCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHowlpackAlphaCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHowlpackAlphaCard::SetTriggerContext3));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHowlpackAlphaCard::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() == FALSE);
}

bool CHowlpackAlphaCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CHowlpackAlphaCard::SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CGarrukRelentlessCard::CGarrukRelentlessCard(CGame* pGame, UINT nID)
	: CDoubleFacedPlaneswalkerCard(pGame, _T("Garruk Relentless"), nID,
		_T("3") GREEN_MANA_TEXT, 
		PlaneswalkerType::Garruk, 3, _T("Garruk, the Veil-Cursed"))
{
	CCardTypeModifier* pModifier1 = new CCardTypeModifier(CardType::Black, FALSE);
	AddCardModifier(pModifier1);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Wolf H"), 2837,
				1));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedPlaneswalkerCard::CanPlayFirstFace)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Wolf C"), 2934,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedPlaneswalkerCard::CanPlaySecondFace)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGarrukRelentlessCard::BeforeResolution1));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedPlaneswalkerCard::CanPlaySecondFace)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("creatures")), 
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGarrukRelentlessCard::BeforeResolution2));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedPlaneswalkerCard::CanPlaySecondFace)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
 	}
	{
		counted_ptr<CActivatedAbility<CTargetPlaneswalkerChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetPlaneswalkerChgLifeSpell3>>(this, 
			_T(""),
			new AnyCreatureComparer, FALSE,
			PreventableType::Preventable, Life(-3), DamageType::AbilityDamage | DamageType::NonCombatDamage));	
	
		cpAbility->SetReceiveDamageFromTargetedCreature();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDoubleFacedPlaneswalkerCard::CanPlayFirstFace)));
  
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);			
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGarrukRelentlessCard::SetTriggerContext));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGarrukRelentlessCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (!GetOrientation()->IsSecondFaced()) && (n_value < 3) && ((CString)name == LOYALTY_COUNTER);
}

bool CGarrukRelentlessCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int n = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(+n));		
		pPowerModifier->SetOneTurnOnly(TRUE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(+n));		
		pLifeModifier->SetOneTurnOnly(TRUE);

	CZoneCreatureModifier* pModifier1 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pPowerModifier));

	CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pLifeModifier));

	pModifier1->ApplyTo(pAction->GetController());
	pModifier2->ApplyTo(pAction->GetController());
	
	return TRUE;
}

bool CGarrukRelentlessCard::BeforeResolution2(CAbilityAction* pAction) const
{
	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
		return false;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
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
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGarruktheVeilCursedCard::CGarruktheVeilCursedCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Garruk, the Veil-Cursed"), nID,
		_T(""),
		PlaneswalkerType::Garruk, 0)
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Wolf C"), 2934,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGarruktheVeilCursedCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("creatures")), 
				ZoneId::Hand, TRUE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGarruktheVeilCursedCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
 	}
}

bool CGarruktheVeilCursedCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int n = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(+n));		
		pPowerModifier->SetOneTurnOnly(TRUE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(+n));		
		pLifeModifier->SetOneTurnOnly(TRUE);

	CZoneCreatureModifier* pModifier1 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pPowerModifier));

	CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pLifeModifier));

	pModifier1->ApplyTo(pAction->GetController());
	pModifier2->ApplyTo(pAction->GetController());
	
	return true;
}

bool CGarruktheVeilCursedCard::BeforeResolution2(CAbilityAction* pAction) const
{
	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
		return false;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
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
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSkirsdagHighPriestCard::CSkirsdagHighPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirsdag High Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Demon A"), 2935,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(2, CCardFilter::GetFilter(_T("creatures")));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSkirsdagHighPriestCard::CanPlay)));
  
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CSkirsdagHighPriestCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CBumpInTheNightCard::CBumpInTheNightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bump in the Night"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				true,
				Life(-3), PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				true,
				Life(-3), PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetDamageType(DamageType::NotDealingDamage);
		
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
CKessigCagebreakersCard::CKessigCagebreakersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kessig Cagebreakers"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTokenName(_T("Wolf H"));
	cpAbility->SetTokenuID(2837);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKessigCagebreakersCard::BeforeResolution));

	pAbility = cpAbility.GetPointer();
	AddAbility(pAbility);
}

bool CKessigCagebreakersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount > 0);
}

//____________________________________________________________________________
//
CNephaliaDrownyardCard::CNephaliaDrownyardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nephalia Drownyard"), nID)
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
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, 3));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(true);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVampiricFuryCard::CVampiricFuryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vampiric Fury"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Vampire), false),
			Power(+2), Life(+0),
			CreatureKeyword::FirstStrike));
	ATLASSERT(cpSpell);

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSplinterfrightCard::CSplinterfrightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Splinterfright"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(false);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetRevealCount(2);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkaabRuinatorCard::CSkaabRuinatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skaab Ruinator"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
{
	GetCreatureKeyword()->AddFlying(false);

	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("creatures")));

	{
        counted_ptr<CGenericSpell> cpSpell(
            ::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("creatures")));
        
		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);

        AddSpell(cpSpell.GetPointer());
    }
}

//____________________________________________________________________________
//
CSkaabGoliathCard::CSkaabGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skaab Goliath"), CardType::Creature, CREATURE_TYPE2(Zombie, Giant), nID,
		_T("5") BLUE_MANA_TEXT, Power(6), Life(9))
{
	GetCreatureKeyword()->AddTrample(false);

	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("creatures")));

}

//____________________________________________________________________________
//
CHeartlessSummoningCard::CHeartlessSummoningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heartless Summoning"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new AnyCreatureComparer(),
				_T("2")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer(),
				Power(-1), Life(-1), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();
	
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CLaboratoryManiacCard::CLaboratoryManiacCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Laboratory Maniac"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::WinInsteadTopDeck));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CParallelLivesCard::CParallelLivesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Parallel Lives"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			_T("3") GREEN_MANA_TEXT,
			PlayerEffectType::DoubleTokens, 1, TRUE));

	cpEnchantment->SetAffectControllerOnly();

	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CForbiddenAlchemyCard::CForbiddenAlchemyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forbidden Alchemy"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("6") BLACK_MANA_TEXT,
				4));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CStensiaBloodhallCard::CStensiaBloodhallCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Stensia Bloodhall"), nID)
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
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGeistHonoredMonkCard::CGeistHonoredMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geist-Honored Monk"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddVigilance(false);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spirit K"), 2945, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnburialRitesCard::CUnburialRitesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unburial Rites"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, false, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, false, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		
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
CCreepingRenaissanceCard::CCreepingRenaissanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Creeping Renaissance"), CardType::Sorcery, nID)
{
	//Regular mana costs
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Move Lands. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Move Enchantments. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Move Creatures. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Move Artifacts. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Planeswalker, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Move Planeswalkers. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	//Flashback costs
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Move Lands. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Move Enchantments. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Move Creatures. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Move Artifacts. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Planeswalker, false),
			ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Move Planeswalkers. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAmbushViperCard::CAmbushViperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ambush Viper"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CCobbledWingsCard::CCobbledWingsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cobbled Wings"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier->GetModifier().SetOneTurnOnly(false);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVictimOfNightCard::CVictimOfNightCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Victim of Night"), CardType::Instant, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false));
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
}

//____________________________________________________________________________
//
CInfernalPlungeCard::CInfernalPlungeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Infernal Plunge"), CardType::Sorcery, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Sorcery,					
			RED_MANA_TEXT,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIntangibleVirtueCard::CIntangibleVirtueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Intangible Virtue"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(+1), Life(+1),
			CreatureKeyword::Vigilance));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMomentOfHeroismCard::CMomentOfHeroismCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Moment of Heroism"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		true, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
}

//____________________________________________________________________________
//
CNightTerrorsCard::CNightTerrorsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Night Terrors"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Exile, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			CCardFilter::GetFilter(_T("non-lands"))));	// Exclude land cards
	ATLASSERT(cpSpell);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CArmoredSkaabCard::CArmoredSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Skaab"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSmiteTheMonstrousCard::CSmiteTheMonstrousCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Smite the Monstrous"), CardType::Instant, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(3));
}

//____________________________________________________________________________
//
CTrepanationBladeCard::CTrepanationBladeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trepanation Blade"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CTrepanationBladeCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CTrepanationBladeCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTrepanationBladeCard::BeforeResolution));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CTrepanationBladeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	CZone* pLib = pPlayer->GetZoneById(ZoneId::Library);
	int reveal = 0;
	
	for (int i = 0; i < pLib->GetSize(); i++)
	{
		CCard* pCard = pLib->GetAt(pLib->GetSize()-1-i);
		++reveal;
		if (pCard->GetCardType().IsLand()) break;
	}
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.AddSelection(MinimumValue(reveal), MaximumValue(reveal), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier1.ApplyTo(pPlayer);

	CPowerModifier pModifier2 = CPowerModifier(Power(reveal));
	pModifier2.ApplyTo((CCreatureCard*)pAction->GetOriginatingCard());

	return true;
}

//____________________________________________________________________________
//
CGraveBrambleCard::CGraveBrambleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grave Bramble"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	GetCreatureKeyword()->AddDefender(false);
	GetCardKeyword()->AddSpecialProtection(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CFortressCrabCard::CFortressCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fortress Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(6))
{
}

//____________________________________________________________________________
//
CMarkovPatricianCard::CMarkovPatricianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Markov Patrician"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddLifelink(false);
}

//____________________________________________________________________________
//
CVoicelessSpiritCard::CVoicelessSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voiceless Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(false);
}

//____________________________________________________________________________
//
CMirrorMadPhantasmCard::CMirrorMadPhantasmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mirror-Mad Phantasm"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(1))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMirrorMadPhantasmCard::OnResolutionCompleted))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") BLUE_MANA_TEXT,
			ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}
void CMirrorMadPhantasmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	
	if (!bResult || GetZoneId() != ZoneId::Library) return;

	GetOwner()->GetZoneById(ZoneId::Library)->Shuffle();

	int n = 0;

	CCard* pCard;

	CZone* pZone = GetOwner()->GetZoneById(ZoneId::Library);

	for (int i = pZone->GetSize() - 1; i >= 0; --i)
	{		
		n = n+1;
		if (pZone->GetAt(i)->GetPrintedCardName() == _T("Mirror-Mad Phantasm"))
		{
			pCard = pZone->GetAt(i);
			break;
		}
	}	

	CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
		CZoneModifier::RoleType::AllPlayers);	

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n-1, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
		CZoneModifier::RoleType::AllPlayers);			
		pModifier.AddSelection(MinimumValue(n), MaximumValue(n), // select cards to bottom
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
			ZoneId::Graveyard,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);

		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE);

	pModifier3.ApplyTo(GetOwner());
	pModifier2.ApplyTo(pCard);
	pModifier.ApplyTo(GetOwner());
}
//____________________________________________________________________________
//
CAvacynianPriestCard::CAvacynianPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avacynian Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1"),
			true, false,
			new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false))));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChapelGeistCard::CChapelGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chapel Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CDoomedTravelerCard::CDoomedTravelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Doomed Traveler"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit K"), 2945, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFeelingOfDreadCard::CFeelingOfDreadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Feeling of Dread"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				true, false,
				new AnyCreatureComparer));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CGallowsWardenCard::CGallowsWardenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gallows Warden"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Spirit), false),
			Power(+0), Life(+1)));
	ATLASSERT(cpAbility);

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhostlyPossessionCard::CGhostlyPossessionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ghostly Possession"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage)
{
}

//____________________________________________________________________________
//
CMausoleumGuardCard::CMausoleumGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mausoleum Guard"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit K"), 2945, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMentorOfTheMeekCard::CMentorOfTheMeekCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mentor of the Meek"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(true);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(3));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMidnightHauntingCard::CMidnightHauntingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Midnight Haunting"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			_T("Spirit K"), 2945,
			2));
	ATLASSERT(cpSpell);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CParaseleneCard::CParaseleneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Paraselene"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CParaseleneCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParaseleneCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CParaseleneCard::BeforeResolution(CAbilityAction* pAction)
{
	m_nEnchantments = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nEnchantments += CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CParaseleneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nEnchantments -= CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer());
	}

	CLifeModifier* pModifier = new CLifeModifier(Life(m_nEnchantments), this, PreventableType::NotPreventable);
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CPurifyTheGraveCard::CPurifyTheGraveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Purify the Grave"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRallyThePeasantsCard::CRallyThePeasantsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rally the Peasants"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));
		ATLASSERT(cpSpell);

		cpSpell->SetAffectControllerCardsOnly();
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CRebukeCard::CRebukeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rebuke"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CSilverchaseFoxCard::CSilverchaseFoxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverchase Fox"), CardType::Creature, CREATURE_TYPE(Fox), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpareFromEvilCard::CSpareFromEvilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spare from Evil"), CardType::Instant, nID)
	, m_CardFilter(_T("a non-Human"), _T("non-Humans"), new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false)))
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));
	ATLASSERT(cpSpell);

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpareFromEvilCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSpareFromEvilCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer creatures;
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*(pAction->GetController()->GetZoneById(ZoneId::Battlefield)), creatures);

	for (int i = 0; i < creatures.GetSize(); ++i)
		creatures.GetAt(i)->GetCardKeyword()->AddSpecialProtection(true, &m_CardFilter);

	return true;
}
//____________________________________________________________________________
//
CStonySilenceCard::CStonySilenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Stony Silence"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this, 
			PlayerEffectType::CantPlayActivatedAbilities,
			reinterpret_cast<int>(CCardFilter::GetFilter(_T("artifact cards")))));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrabenPurebloodsCard::CThrabenPurebloodsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thraben Purebloods"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CUnrulyMobCard::CUnrulyMobCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Unruly Mob"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetFromControllerOnly(true);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrgentExorcismCard::CUrgentExorcismCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Urgent Exorcism"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddChildFilter(
		new CCardFilter(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)));
}

//____________________________________________________________________________
//
CVillageBellRingerCard::CVillageBellRingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Village Bell-Ringer"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCardKeyword()->AddFlash(false);

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDreamTwistCard::CDreamTwistCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream Twist"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				3));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				3));
		ATLASSERT(cpSpell);

		cpSpell->SetReorder(true, ZoneId::Graveyard);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHystericalBlindnessCard::CHystericalBlindnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hysterical Blindness"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-4), Life(+0)));
	ATLASSERT(cpSpell);

	cpSpell->SetAffectOpponentCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLanternSpiritCard::CLanternSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lantern Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Hand, true, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMakeshiftMaulerCard::CMakeshiftMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Makeshift Mauler"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(5))
{
	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CMemorysJourneyCard::CMemorysJourneyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Memory's Journey"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMemorysJourneyCard::OnResolutionCompleted))
{
	{
		//Regular mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT));

			ATLASSERT(cpSpell);

			cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT));

			ATLASSERT(cpSpell);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Blue, CardType::_ColorMask); //to fix the color of this card.
	}
}

void CMemorysJourneyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);
	CZone* pGraveyard = target->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;

	m_CardFilter_temp.SetComparer(new NegateCardComparer(new SpecificCardComparer(this)));	
	if (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())>0)
	{
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All, 
			                                     CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, 
												 CZoneModifier::RoleType::AllPlayers);
		pmodifier2.AddSelection(MinimumValue(0), MaximumValue(3),       // select cards to reorder (target player may
			                                                            // target 0..3 cards)
		                        CZoneModifier::RoleType::PrimaryPlayer, // select by 
		                        CZoneModifier::RoleType::PrimaryPlayer, // reveal to
							    &m_CardFilter_temp,                     // what cards
							    ZoneId::Library,                        // if selected, move cards to
							    CZoneModifier::RoleType::PrimaryPlayer, // select by this player
								CardPlacement::Top,                     // put selected cards on 
								MoveType::Others,                       // move type
							    CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player
		pmodifier2.ApplyTo(target);

		pLibrary->Shuffle();                                            // If no cards were targeted by Memory's Journey or if all 
		                                                                // the targeted cards are illegal targets by the time 
		                                                                // Memory's Journey resolves, the targeted player will still 
		                                                                // shuffle his or her library.
	}
}

//____________________________________________________________________________
//
CMindshriekerCard::CMindshriekerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mindshrieker"), CardType::Creature, CREATURE_TYPE2(Spirit, Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("2"), 1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(true);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindshriekerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CMindshriekerCard::BeforeResolution(CAbilityAction* pAction)
{
	if (pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library)->GetSize() == 0) return false;

	int nCMC = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library)->GetTopCard()->GetConvertedManaCost();

	CPowerModifier* pPowerModifier = new CPowerModifier(Power(+nCMC));
	CLifeModifier* pLifeModifier = new CLifeModifier(Life(+nCMC), this, PreventableType::NotPreventable);
	pPowerModifier->ApplyTo(this);
	pLifeModifier->ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CMoonHeronCard::CMoonHeronCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moon Heron"), CardType::Creature, CREATURE_TYPE2(Spirit, Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CSpectralFlightCard::CSpectralFlightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Spectral Flight"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CSturmgeistCard::CSturmgeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sturmgeist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		ATLASSERT(cpAbility);
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAbattoirGhoulCard::CAbattoirGhoulCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Abattoir Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAbattoirGhoulCard::SetTriggerContext));
	cpAbility->SetAbilityText(_T("Life gain."));

	AddAbility(cpAbility.GetPointer());
}

bool CAbattoirGhoulCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_LifeModifier.SetLifeDelta(pCreature->GetToughness());
	return true;
}

//____________________________________________________________________________
//
CBrainWeevilCard::CBrainWeevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brain Weevil"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			2, MoveType::Discard, ZoneId::Graveyard,
			true,  true,
			CCardFilter::GetFilter(_T("cards"))));
	ATLASSERT(cpAbility);

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CCorpseLungeCard::CCorpseLungeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Corpse Lunge"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		false,
		Life(-0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCorpseLungeCard::BeforeResolution));
}

bool CCorpseLungeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetAt(0));
	if (!pCreature) return false;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -GET_INTEGER(pCreature->GetToughness());

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CDeadWeightCard::CDeadWeightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dead Weight"), nID,
		BLACK_MANA_TEXT,
		Power(-2), Life(-2))
{
}

//____________________________________________________________________________
//
CDiscipleOfGriselbrandCard::CDiscipleOfGriselbrandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Griselbrand"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+0), PreventableType::NotPreventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetExtraValueMultiplier(1);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscipleOfGriselbrandCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDiscipleOfGriselbrandCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	CLifeModifier* pModifier = new CLifeModifier(Life(pCreature->GetLastKnownToughness()), this, PreventableType::NotPreventable, DamageType::NonCombatDamage);
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGhoulcallersChantCard::CGhoulcallersChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghoulcaller's Chant"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, false, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, false, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CManorSkeletonCard::CManorSkeletonCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Manor Skeleton"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T("1") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddHaste(false);
}

//____________________________________________________________________________
//
CMawOfTheMireCard::CMawOfTheMireCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Maw of the Mire"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::Add(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CRottingFensnakeCard::CRottingFensnakeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotting Fensnake"), CardType::Creature, CREATURE_TYPE2(Zombie, Snake), nID,
		_T("3") BLACK_MANA_TEXT, Power(5), Life(1))
{
}

//____________________________________________________________________________
//
CSeverTheBloodlineCard::CSeverTheBloodlineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sever the Bloodline"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeverTheBloodlineCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others));
		ATLASSERT(cpSpell);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeverTheBloodlineCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

// BeforeResolution not OnResolutionCompleted, as moving card from the Battelfield can result in name change
bool CSeverTheBloodlineCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cardfilter;
	cardfilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others);		
		CZoneCardModifier* pZoneModifier = new CZoneCardModifier(ZoneId::Battlefield, &cardfilter,
			std::auto_ptr<CCardModifier>(pCardModifier));
		pZoneModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	// Target card is already removed
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	pTargetAction->GetTargetGroup().RemoveAll();

	return true;
}

//____________________________________________________________________________
//
CStromkirkPatrolCard::CStromkirkPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stromkirk Patrol"), CardType::Creature, CREATURE_TYPE2(Vampire, Soldier), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodcrazedNeonateCard::CBloodcrazedNeonateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodcrazed Neonate"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(false);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAshmouthHoundCard::CAshmouthHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ashmouth Hound"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAshmouthHoundCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CAshmouthHoundCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CCharmbreakerDevilsCard::CCharmbreakerDevilsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charmbreaker Devils"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		ATLASSERT(cpAbility);

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCharmbreakerDevilsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCharmbreakerDevilsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("instant cards or sorcery cards"))->GetIncluded(*pZone, cards)) return false;
	cards.Shuffle(pAction->GetController());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_pCard = cards.GetAt(0);
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CCrosswayVampireCard::CCrosswayVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crossway Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility,
								 CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevilsPlayCard::CDevilsPlayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devil's Play"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFeralRidgewolfCard::CFeralRidgewolfCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Feral Ridgewolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2),
		_T("1") RED_MANA_TEXT, Power(+2), Life(+0))
{
	GetCreatureKeyword()->AddTrample(false);
}

//____________________________________________________________________________
//
CFurorOfTheBittenCard::CFurorOfTheBittenCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Furor of the Bitten"), nID,
		RED_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::MustAttack)
{
}

//____________________________________________________________________________
//
CGeistflameCard::CGeistflameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Geistflame"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHarvestPyreCard::CHarvestPyreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harvest Pyre"), CardType::Instant, nID)
{
	{
		/*
			Exile X cards from graveyard, where X > 0.
			sample message: 
				Exile from graveyard Viscera Seer(1/1), Exile from graveyard Viscera Seer2(1/1): Casts Harvest Pyre and targets Soulmender3(1/1)
		*/
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,   // FALSE->don't target players, target creatures only
				Life(-0),					   
				PreventableType::Preventable));  
		cpSpell->SetExtraActionValueVector(ContextValue(-1));
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		// must be SpecialNumber::AnyPositive i.e. X > 0 so that X = 0 case is not included here 
		cpSpell->GetCost().AddExileGraveyardCardCost(SpecialNumber::AnyPositive, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHarvestPyreCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		/*
			Exile no cards from graveyard, X = 0.
			sample message: 
				Exile no cards from graveyard. Casts Harvest Pyre and targets Soulmender3(1/1)
		*/
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable)); 
		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->SetAbilityText(_T("Exile no cards from graveyard. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CHarvestPyreCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCards = pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetSize();
	if (nCards == 0) return false;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCards;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CHereticsPunishmentCard::CHereticsPunishmentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heretic's Punishment"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, true,
			Life(-0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHereticsPunishmentCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHereticsPunishmentCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer SelectedCards;

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 3,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer,	&SelectedCards);
	pModifier->AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier->ApplyTo(pAction->GetController());

	if (SelectedCards.GetSize() == 0) return false;

	int nMaxCMC = 0;
	for (int i = 0; i < SelectedCards.GetSize(); ++i)
		nMaxCMC = std::max(nMaxCMC, (int)SelectedCards.GetAt(i)->GetConvertedManaCost());

	// Apply the result to the target
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nMaxCMC;

	if (pAction->GetAssociatedPlayer())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	
	if (pAction->GetAssociatedCard())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CIntoTheMawOfHellCard::CIntoTheMawOfHellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Into the Maw of Hell"), CardType::Sorcery, nID)
{
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIntoTheMawOfHellCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
}

bool CIntoTheMawOfHellCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CLifeModifier* pModifier2 = new CLifeModifier(Life(-13), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	if (pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()->GetCardType().IsCreature())
			pModifier2->ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CNightbirdsClutchesCard::CNightbirdsClutchesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nightbird's Clutches"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT,
				Power(0), Life(0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				Power(0), Life(0),
				CreatureKeyword::CantBlock, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);
		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRageThrowerCard::CRageThrowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rage Thrower"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().SetIncludePlayers(true);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRakishHeirCard::CRakishHeirCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rakish Heir"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt,
						CWhenDamageDealt::PlayerEventCallback, 
						&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->GetTrigger().SetCombatDamageOnly(true);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRakishHeirCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CRakishHeirCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage d_damage) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CRiotDevilsCard::CRiotDevilsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riot Devils"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CRollingTemblorCard::CRollingTemblorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rolling Temblor"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,					
				_T("2") RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer,
				false,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpSpell);

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,					
				_T("4") RED_MANA_TEXT RED_MANA_TEXT,
				Life(-2),
				new AnyCreatureComparer,
				false,
				PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpSpell);

		cpSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTraitorousBloodCard::CTraitorousBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Traitorous Blood"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));
	ATLASSERT(cpSpell);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(false));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste | CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(true);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDarkthicketWolfCard::CDarkthicketWolfCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Darkthicket Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		_T("2") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CElderOfLaurelsCard::CElderOfLaurelsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder of Laurels"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElderOfLaurelsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CElderOfLaurelsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	if (nCreatures == 0) return false;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatures;
	Context.nValue2 = nCreatures;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CGnawToTheBoneCard::CGnawToTheBoneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gnaw to the Bone"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetCardsMultiplier(2, CCardFilter::GetFilter(_T("creatures")), ZoneId::Graveyard);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CHamletCaptainCard::CHamletCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hamlet Captain"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::EventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKindercatchCard::CKindercatchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kindercatch"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
}

//____________________________________________________________________________
//
CLumberknotCard::CLumberknotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lumberknot"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrchardSpiritCard::COrchardSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orchard Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Reach, false))
{
	GetCreatureKeyword()->AddUnblockable(false, &m_CardFilter);
}

//____________________________________________________________________________
//
CDemonmailHauberkCard::CDemonmailHauberkCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Demonmail Hauberk"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+4), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGeistcatchersRigCard::CGeistcatchersRigCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geistcatcher's Rig"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(4), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(FALSE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTravelPreparationsCard::CTravelPreparationsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Travel Preparations"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		
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
CTreeOfRedemptionCard::CTreeOfRedemptionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tree of Redemption"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(13))
{
	GetCreatureKeyword()->AddDefender(false);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);
	
	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTreeOfRedemptionCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTreeOfRedemptionCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetZoneId() != ZoneId::Battlefield || !GetCardType().IsCreature() || pAction->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		return false;

	CLifeModifier* pModifier1 = new CLifeModifier(GetToughness(), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1->SetReplacement(true);

	CLifeModifier* pModifier2 = new CLifeModifier(pAction->GetController()->GetLife(), this,
											PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true);
	pModifier2->SetReplacement(true);

	pModifier1->ApplyTo(pAction->GetController());
	pModifier2->ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CWreathOfGeistsCard::CWreathOfGeistsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wreath of Geists"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CWreathOfGeistsCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CWreathOfGeistsCard::PostEnchant)));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CWreathOfGeistsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Graveyard,
			new AnyCreatureComparer, (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CWreathOfGeistsCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CCellarDoorCard::CCellarDoorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cellar Door"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3"),
				FALSE_CARD_COMPARER, true));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Bottom, CZoneModifier::RoleType::AllPlayers);				
		pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->GetTargetModifier().CPlayerModifiers::Add(pModifier);
		cpAbility->GetTargeting()->SetDefaultCharacteristic((Characteristic::Negative));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCellarDoorCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
}

bool CCellarDoorCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library)->GetSize() == 0) return false;
	if (!pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library)->GetAt(0)->GetCardType().IsCreature()) return true;

	int nRand = 0;
	int nUID = 0;
	CString name = _T("");

	if (!m_pGame->IsThinking())
	{
		nRand = pAction->GetController()->GetRand() % 3;
	}
		
	if (nRand == 0)
	{
		nUID = 2891;
		name = _T("Zombie I");
	}
	else if (nRand == 1)
	{
		nUID = 2951;
		name = _T("Zombie J");
	}
	else
	{
		nUID = 2955;
		name = _T("Zombie K");
	}

	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), name, nUID, 1, false);
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGraveyardShovelCard::CGraveyardShovelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Graveyard Shovel"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGraveyardShovelCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetDefaultCharacteristic((Characteristic::Negative));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGraveyardShovelCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer selectedCards;
	CZoneModifier modifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,	CardPlacement::Top, CZoneModifier::RoleType::AllPlayers,
		&selectedCards);				
	modifier.AddSelection(MinimumValue(1), MaximumValue(1),
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	modifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());

	if(selectedCards.GetSize() > 0 && selectedCards.GetAt(0)->GetCardType().IsCreature())
	{
		CLifeModifier modifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		modifier.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CGalvanicJuggernautCard::CGalvanicJuggernautCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Galvanic Juggernaut"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(5), Life(5))
{
	GetCreatureKeyword()->AddMustAttack(false);
	GetCardKeyword()->AddNoUntapInUntapPhase();

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTravelersAmuletCard::CTravelersAmuletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Traveler's Amulet"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("1"), 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Hand, FALSE, FALSE, FALSE));
	ATLASSERT(cpAbility);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRunechantersPikeCard::CRunechantersPikeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Runechanter's Pike"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{

	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier->GetModifier().SetOneTurnOnly(false);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CRunechantersPikeCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());

}

counted_ptr<CAbility> CRunechantersPikeCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Sorcery | CardType::Instant, false)));

	cpEquipAbility->SetChangePowerOnly();
	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
COneEyedScarecrowCard::COneEyedScarecrowCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("One-Eyed Scarecrow"), CardType::_ArtifactCreature, CREATURE_TYPE(Scarecrow), nID,
		_T("3"), Power(2), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(-1), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectOpponentCardsOnly();

	cpAbility->SetListenToKeyword();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaskOfAvacynCard::CMaskOfAvacynCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mask of Avacyn"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Hexproof);
	
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrimstoneVolleyCard::CBrimstoneVolleyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Brimstone Volley"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		true,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrimstoneVolleyCard::BeforeResolution));
}

bool CBrimstoneVolleyCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetGame()->GetCertainTypeDiedCount(CardType::Creature) == 0)
		return true;

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -5;

	if (pAction->GetAssociatedPlayer())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));
	
	if (pAction->GetAssociatedCard())
		pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CCaravanVigilCard::CCaravanVigilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Caravan Vigil"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
				GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Hand, true, true, false));
		ATLASSERT(cpSpell);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
				GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("basic lands")), 
				ZoneId::Battlefield, true, true, false));
		ATLASSERT(cpSpell);

		cpSpell->SetAbilityText(_T("Morbid. Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CCaravanVigilCard::CanPlay)));
  
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CCaravanVigilCard::CanPlay(BOOL bIncludeTricks) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CFesterhideBoarCard::CFesterhideBoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Festerhide Boar"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFesterhideBoarCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(false);
}

void CFesterhideBoarCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CHollowhengeScavengerCard::CHollowhengeScavengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hollowhenge Scavenger"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHollowhengeScavengerCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CHollowhengeScavengerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CMorkrutBansheeCard::CMorkrutBansheeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Morkrut Banshee"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMorkrutBansheeCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CMorkrutBansheeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CReaperFromTheAbyssCard::CReaperFromTheAbyssCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Reaper from the Abyss"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
		 
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReaperFromTheAbyssCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());	
}

bool CReaperFromTheAbyssCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CSomberwaldSpiderCard::CSomberwaldSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Somberwald Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSomberwaldSpiderCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddReach(false);
}

void CSomberwaldSpiderCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CWoodlandSleuthCard::CWoodlandSleuthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodland Sleuth"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWoodlandSleuthCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWoodlandSleuthCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWoodlandSleuthCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

bool CWoodlandSleuthCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pZone = GetController()->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, cards)) return false;
	cards.Shuffle(GetController());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_pCard = cards.GetAt(0);
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CHanweirWatchkeepCard::CHanweirWatchkeepCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Hanweir Watchkeep"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Werewolf), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(5), Power(5), Life(5), _T("Bane of Hanweir"))
{	
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, FALSE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToRemove(CreatureKeyword::Defender);
		pModifier3->GetModifier().SetOneTurnOnly(false);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier;
		pModifier4->GetModifier().SetToAdd(CreatureKeyword::MustAttack);
		pModifier4->GetModifier().SetOneTurnOnly(false);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	GetCreatureKeyword()->AddDefender(false);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHanweirWatchkeepCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
				cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHanweirWatchkeepCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHanweirWatchkeepCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CHanweirWatchkeepCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CBaneOfHanweirCard::CBaneOfHanweirCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Bane of Hanweir"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(5), Life(5), Power(1), Life(5), _T("Hanweir Watchkeep"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToRemove(CreatureKeyword::MustAttack);
		pModifier3->GetModifier().SetOneTurnOnly(false);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier;
		pModifier4->GetModifier().SetToAdd(CreatureKeyword::Defender);
		pModifier4->GetModifier().SetOneTurnOnly(false);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	GetCreatureKeyword()->AddMustAttack(false);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBaneOfHanweirCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBaneOfHanweirCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBaneOfHanweirCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CBaneOfHanweirCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CGatstafShepherdCard::CGatstafShepherdCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Gatstaf Shepherd"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2), Power(3), Life(3), _T("Gatstaf Howler"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Intimidate);
		pModifier2->GetModifier().SetOneTurnOnly(false);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGatstafShepherdCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGatstafShepherdCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGatstafShepherdCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CGatstafShepherdCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CGatstafHowlerCard::CGatstafHowlerCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Gatstaf Howler"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(3), Life(3), Power(2), Life(2), _T("Gatstaf Shepherd"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToRemove(CreatureKeyword::Intimidate);
		pModifier2->GetModifier().SetOneTurnOnly(false);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	GetCreatureKeyword()->AddIntimidate(FALSE);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGatstafHowlerCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGatstafHowlerCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGatstafHowlerCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CGatstafHowlerCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CVillagersOfEstwaldCard::CVillagersOfEstwaldCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Villagers of Estwald"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3), Power(4), Life(6), _T("Howlpack of Estwald"))
{
	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);

	AddCreatureModifier(pModifier);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVillagersOfEstwaldCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVillagersOfEstwaldCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVillagersOfEstwaldCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CVillagersOfEstwaldCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CHowlpackOfEstwaldCard::CHowlpackOfEstwaldCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Howlpack of Estwald"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(4), Life(6), Power(2), Life(3), _T("Villagers of Estwald"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);

	AddCreatureModifier(pModifier);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHowlpackOfEstwaldCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHowlpackOfEstwaldCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHowlpackOfEstwaldCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CHowlpackOfEstwaldCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CRecklessWaifCard::CRecklessWaifCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Reckless Waif"), CardType::Creature, CREATURE_TYPE3(Human, Rogue, Werewolf), nID,
		_T("") RED_MANA_TEXT, Power(1), Life(1), Power(3), Life(2), _T("Merciless Predator"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Rogue, FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRecklessWaifCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRecklessWaifCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRecklessWaifCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CRecklessWaifCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CMercilessPredatorCard::CMercilessPredatorCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Merciless Predator"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(3), Life(2), Power(1), Life(1), _T("Reckless Waif"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Rogue, TRUE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMercilessPredatorCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMercilessPredatorCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMercilessPredatorCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CMercilessPredatorCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CInstigatorGangCard::CInstigatorGangCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Instigator Gang"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3), Power(5), Life(5), _T("Wildblood Pack"))
{
	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToRemove(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+0)));

		cpAbility->SetToAttackingOnly();
		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("First Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+3), Life(+0)));

		cpAbility->SetToAttackingOnly();
		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInstigatorGangCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInstigatorGangCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInstigatorGangCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CInstigatorGangCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CWildbloodPackCard::CWildbloodPackCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Wildblood Pack"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(5), Life(5), Power(2), Life(3), _T("Instigator Gang"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+0)));

		cpAbility->SetToAttackingOnly();
		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+3), Life(+0)));

		cpAbility->SetToAttackingOnly();
		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("First Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWildbloodPackCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWildbloodPackCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWildbloodPackCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CWildbloodPackCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CKruinOutlawCard::CKruinOutlawCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Kruin Outlaw"), CardType::Creature, CREATURE_TYPE3(Human, Rogue, Werewolf), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2), Power(3), Life(3), _T("Terror of Kruin Pass"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Rogue, FALSE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToRemove(CreatureKeyword::DoubleStrike);
		pModifier3->GetModifier().SetOneTurnOnly(false);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier;
		pModifier4->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		pModifier4->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false),	
				Power(+0), Life(+0),
				CreatureKeyword::CantBeBlockedBy1));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKruinOutlawCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKruinOutlawCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKruinOutlawCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CKruinOutlawCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CTerrorOfKruinPassCard::CTerrorOfKruinPassCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Terror of Kruin Pass"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(3), Life(3), Power(2), Life(2), _T("Kruin Outlaw"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Rogue, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
		pModifier3->GetModifier().SetOneTurnOnly(false);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier;
		pModifier4->GetModifier().SetToRemove(CreatureKeyword::FirstStrike);
		pModifier4->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false),	
				Power(+0), Life(+0),
				CreatureKeyword::CantBeBlockedBy1));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("First Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTerrorOfKruinPassCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTerrorOfKruinPassCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTerrorOfKruinPassCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CTerrorOfKruinPassCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CUlvenwaldMysticsCard::CUlvenwaldMysticsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ulvenwald Mystics"), CardType::Creature, CREATURE_TYPE3(Human, Shaman, Werewolf), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3), Power(5), Life(5), _T("Ulvenwald Primordials"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, FALSE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CUlvenwaldMysticsCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUlvenwaldMysticsCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUlvenwaldMysticsCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUlvenwaldMysticsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CUlvenwaldMysticsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CUlvenwaldPrimordialsCard::CUlvenwaldPrimordialsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ulvenwald Primordials"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(5), Life(5), Power(3), Life(3), _T("Ulvenwald Mystics"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, TRUE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CUlvenwaldPrimordialsCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUlvenwaldPrimordialsCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUlvenwaldPrimordialsCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUlvenwaldPrimordialsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CUlvenwaldPrimordialsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CFalkenrathNobleCard::CFalkenrathNobleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Falkenrath Noble"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFrightfulDelusionCard::CFrightfulDelusionCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Frightful Delusion"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFrightfulDelusionCard::OnResolutionCompleted))
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CFrightfulDelusionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneModifier modifier(GetGame(),
		ZoneId::Hand, SpecialNumber::All,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	modifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	modifier.ApplyTo(pAbilityAction->GetAssociatedCard()->GetController());
}

//____________________________________________________________________________
//
CGrizzledOutcastsCard::CGrizzledOutcastsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Grizzled Outcasts"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4), Power(7), Life(7), _T("Krallenhorde Wantons"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	AddCreatureModifier(pModifier1);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrizzledOutcastsCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrizzledOutcastsCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrizzledOutcastsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CGrizzledOutcastsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CKrallenhordeWantonsCard::CKrallenhordeWantonsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Krallenhorde Wantons"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(7), Life(7), Power(4), Life(4), _T("Grizzled Outcasts"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	AddCreatureModifier(pModifier1);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrallenhordeWantonsCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrallenhordeWantonsCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrallenhordeWantonsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CKrallenhordeWantonsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CVillageIronsmithCard::CVillageIronsmithCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Village Ironsmith"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1), Power(3), Life(1), _T("Ironfang"))
{
	GetCreatureKeyword()->AddFirstStrike(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	AddCreatureModifier(pModifier1);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVillageIronsmithCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVillageIronsmithCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVillageIronsmithCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CVillageIronsmithCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CIronfangCard::CIronfangCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ironfang"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(3), Life(1), Power(1), Life(1), _T("Village Ironsmith"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddFirstStrike(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	AddCreatureModifier(pModifier1);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIronfangCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIronfangCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIronfangCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CIronfangCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CSnapcasterMageCard::CSnapcasterMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snapcaster Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility,
								 CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	
	CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
	pModifier->GetModifier().SetOneTurnOnly(TRUE);
	pModifier->GetModifier().SetToAdd(ReplacementKeyword::Flashback);

	cpAbility->GetCardModifiers().Add(pModifier);		

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTributetoHungerCard::CTributetoHungerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tribute to Hunger"), CardType::Instant, nID)		
{	
	counted_ptr<CTargetSacrificePlusSpell> cpSpell(
	::CreateObject<CTargetSacrificePlusSpell>(this, AbilityType::Instant,					
		_T("2") BLACK_MANA_TEXT,
		CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->SetGainLifeEqualToughness(TRUE);	
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMoorlandHauntCard::CMoorlandHauntCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Moorland Haunt"), nID)
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
				_T("")WHITE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Spirit K"), 2945,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CNightRevelersCard::CNightRevelersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Night Revelers"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0),
			CreatureKeyword::Haste));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->GetConditionFilter().AddComparer(new NegateCardComparer(new CardControllerComparer(this)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodlineKeeperCard::CBloodlineKeeperCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Bloodline Keeper"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3), Power(5), Life(5), _T("Lord of Lineage"))
{
	GetCreatureKeyword()->AddFlying(false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Vampire A"), 2938,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CBloodlineKeeperCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Transform"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Vampire), false),
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAbilityName(_T("Second Face Enchantment"));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CBloodlineKeeperCard::CanPlay(BOOL bIncludeTricks) const
{
	if (!CanPlayFirstFace(bIncludeTricks)) return false;
	
	CCardFilter cfilter(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	return (cfilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= 5);
}

//____________________________________________________________________________
//
CLordOfLineageCard::CLordOfLineageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of Lineage"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T(""), Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Vampire A"), 2938,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Vampire), false),
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFullMoonsRiseCard::CFullMoonsRiseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Full Moon's Rise"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false),
				Power(+1), Life(+0),
				CreatureKeyword::Trample));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFullMoonsRiseCard::BeforeResolution));
		cpAbility->SetAbilityText(_T("Regenerare Werewolves. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFullMoonsRiseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter cfilter(new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false));
	cfilter.AddComparer(new CardControllerComparer(pAction->GetController()));

	CCountedCardContainer cards;
	if (cfilter.GetIncluded(*pZone, cards))
		for (int i = 0; i < cards.GetSize(); ++i)
		{
			CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(i));
			if (!pCreature) 
				continue;
			pCreature->AddRegenerationShield();
		}

	return true;
}

//____________________________________________________________________________
//
CGhoulraiserCard::CGhoulraiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghoulraiser"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGhoulraiserCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGhoulraiserCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pZone = GetController()->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!m_CardFilter.GetIncluded(*pZone, cards)) return false;
	cards.Shuffle(GetController());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_pCard = cards.GetAt(0);
	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CNevermoreCard::CNevermoreCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nevermore"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(CCardFilter::GetFilter(_T("non-lands")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKessigWolfCard::CKessigWolfCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kessig Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1),
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CBloodgiftDemonCard::CBloodgiftDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bloodgift Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->GetTargeting().SetIncludePlayers(true);
	cpAbility->GetTriggeredPlayerModifiers().Add(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NonCombatDamage | DamageType::AbilityDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTormentedPariahCard::CTormentedPariahCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Tormented Pariah"), CardType::Creature, CREATURE_TYPE3(Human, Warrior, Werewolf), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2), Power(6), Life(4), _T("Rampaging Werewolf"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTormentedPariahCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTormentedPariahCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTormentedPariahCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CTormentedPariahCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CRampagingWerewolfCard::CRampagingWerewolfCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Rampaging Werewolf"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T("") , Power(6), Life(5), Power(3), Life(2), _T("Tormented Pariah"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, TRUE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRampagingWerewolfCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRampagingWerewolfCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRampagingWerewolfCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CRampagingWerewolfCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CCloisteredYouthCard::CCloisteredYouthCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Cloistered Youth"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1), Power(3), Life(3), _T("Unholy Fiend"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Horror, TRUE);
	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::Black, FALSE, CardType::White);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCardModifier(pModifier3);

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloisteredYouthCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloisteredYouthCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCloisteredYouthCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetOrientation()->IsSecondFaced() == FALSE;
}

bool CCloisteredYouthCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetOrientation()->IsSecondFaced() == TRUE;
}

//____________________________________________________________________________
//
CUnholyFiendCard::CUnholyFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Unholy Fiend"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T(""), Power(3), Life(3))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	typedef TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

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
CScreechingBatCard::CScreechingBatCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Screeching Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2), Power(5), Life(5), _T("Stalking Vampire"))
{
	GetCreatureKeyword()->AddFlying(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Bat, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Vampire, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToRemove(CreatureKeyword::Flying);
		pModifier3->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);


	typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT);
	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStalkingVampireCard::CStalkingVampireCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Stalking Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T(""), Power(5), Life(5), Power(2), Life(2), _T("Screeching Bat"))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Bat, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Vampire, FALSE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
		pModifier3->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier3->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT);
	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrabenSentryCard::CThrabenSentryCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Thraben Sentry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2), Power(5), Life(4), _T("Thraben Militia"))
{
	GetCreatureKeyword()->AddVigilance(false);

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetToRemove(CreatureKeyword::Vigilance);
		pModifier1->GetModifier().SetOneTurnOnly(false);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(false);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThrabenSentryCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThrabenSentryCard::BeforeResolution));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().SetFromControllerOnly(true);

	cpAbility->GetCardModifiers().Add(new CFaceTransformModifier);

	AddAbility(cpAbility.GetPointer());
}

bool CThrabenSentryCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetOrientation()->IsSecondFaced() == FALSE;
}

bool CThrabenSentryCard::BeforeResolution(CAbilityAction* pAction) const
{
	return GetZoneId() == ZoneId::Battlefield;
}

//____________________________________________________________________________
//
CThrabenMilitiaCard::CThrabenMilitiaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thraben Militia"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T(""), Power(5), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddTrample(false);
}

//____________________________________________________________________________
//
CMakeAWishCard::CMakeAWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Make a Wish"), CardType::Sorcery, nID)		
{	
	counted_ptr<CGenericSpell> cpSpell(
	::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,					
		_T("3") GREEN_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(new CRandomDiscardModifier(2, ZoneId::Graveyard, ZoneId::Hand, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMoldgrafMonstrosityCard::CMoldgrafMonstrosityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moldgraf Monstrosity"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CMoldgrafMonstrosityCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(false);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CMoldgrafMonstrosityCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pFromZone = pAbilityAction->GetController()->GetZoneById(ZoneId::Graveyard);
	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pFromZone, cards)) return;
	cards.Shuffle(pAbilityAction->GetController());

	CZone* pToZone = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = std::min(2, cards.GetSize()) - 1; i >= 0; --i)
		cards.GetAt(i)->Move(pToZone, pAbilityAction->GetController(), MoveType::Others);
}

//____________________________________________________________________________
//
CWoodenStakeCard::CWoodenStakeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wooden Stake"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"),
			new AnyCreatureComparer));
	
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CWoodenStakeCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

	counted_ptr<CAbility> CWoodenStakeCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CWoodenStakeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (pCreature->IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CDelverOfSecretsCard::CDelverOfSecretsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Delver of Secrets"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1), Power(3), Life(2), _T("Insectile Aberration"))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CDelverOfSecretsCard::OnSelected))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Wizard, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Insect, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier(CreatureKeyword::Flying, TRUE, FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);


	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(
					new CZoneModifier(GetGame(),
						ZoneId::Library, 1,
						CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
						CZoneModifier::RoleType::AllPlayers));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDelverOfSecretsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDelverOfSecretsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDelverOfSecretsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() == FALSE);
}

bool CDelverOfSecretsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZoneModifier modifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	modifier.ApplyTo(pAction->GetController());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s ability"), GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s ability"), GetCardName());

		entries.push_back(selectionEntry);
	}
	
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CDelverOfSecretsCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CardType cardtype = GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardType();

				if ((GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardType() & (CardType::Instant | CardType::Sorcery)).Any())
					Transform();
				return;
			}
		}
}

//____________________________________________________________________________
//
CInsectileAberrationCard::CInsectileAberrationCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Insectile Aberration"), CardType::Creature, CREATURE_TYPE2(Human, Insect), nID,
		_T(""), Power(3), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGhoulcallersBellCard::CGhoulcallersBellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ghoulcaller's Bell"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGlobalRevealLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalRevealLibrarySpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetRevealCardsToOthers(true, false);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPastInFlamesCard::CPastInFlamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Past in Flames"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject <CGenericSpell>(this,  AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT));
		ATLASSERT(cpSpell);

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::Flashback);

		CZoneCardModifier* pZoneModifier = new CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("instant cards or sorcery cards")),
			std::auto_ptr<CCardModifier>(pModifier));

		cpSpell->GetResolutionModifier().CPlayerModifiers::Add(pZoneModifier);

		cpSpell->SetAbilityText(_T("Each instant and sorcery card in your graveyard gains flashback until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject <CGenericSpell>(this,  AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT));
		ATLASSERT(cpSpell);

		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
		pModifier->GetModifier().SetOneTurnOnly(TRUE);
		pModifier->GetModifier().SetToAdd(ReplacementKeyword::Flashback);

		CZoneCardModifier* pZoneModifier = new CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("instant cards or sorcery cards")),
			std::auto_ptr<CCardModifier>(pModifier));

		cpSpell->GetResolutionModifier().CPlayerModifiers::Add(pZoneModifier);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Each instant and sorcery card in your graveyard gains flashback until end of turn. Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDesperateRavingsCard::CDesperateRavingsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Desperate Ravings"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this, &CDesperateRavingsCard::OnResolutionCompleted))
{
	{
		//Regular mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT, 2));
		ATLASSERT(cpSpell);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT, 2));
		ATLASSERT(cpSpell);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Red, CardType::_ColorMask); //to fix the color of this card.
	}
}

void CDesperateRavingsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CRandomDiscardModifier modifier = CRandomDiscardModifier(1);
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CCacklingCounterpartCard::CCacklingCounterpartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cackling Counterpart"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetSpell> cpSpell( 
			::CreateObject<CTargetSpell>(this,  AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCopyModifier(GetGame(), this));
				
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetSpell> cpSpell( 
			::CreateObject<CTargetSpell>(this,  AbilityType::Instant,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCopyModifier(GetGame(), this));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Blue, CardType::_ColorMask);
	}
}

//____________________________________________________________________________
//
COliviaVoldarenCard::COliviaVoldarenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Olivia Voldaren"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(new ControlledByCardComparer((CCard*)this))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &COliviaVoldarenCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetExcludeOwnerCard();

		cpAbility->GetTargetModifier().CCreatureModifiers::Add(new CCreatureTypeModifier(SingleCreatureType::Vampire, true));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Vampire), false),
				FALSE));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CGainControlModifier(GetGame(), (CCard*)this));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		m_pStealAbility = cpAbility.GetPointer();
		AddAbility(m_pStealAbility);
	}
}

void COliviaVoldarenCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pFromZone == pToZone)
		return;

	// Remove abilities from stack
	CStack& stack = GetGame()->GetStack();
	for (int i = stack.GetStackSize() -1; i >= 0; --i)
		if (stack.GetStackAction(i).GetPointer()->GetAbility() == m_pStealAbility)
			stack.RemoveActionAt(i);

	// Return stolen cards
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pZone, cards);
	}

	CGainControlModifier modifier = CGainControlModifier(GetGame(), (CCard*)this, true);

	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CLilianaoftheVeilCard::CLilianaoftheVeilCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Liliana of the Veil"), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Liliana, 3)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLilianaoftheVeilCard::OnResolutionCompleted))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLilianaoftheVeilCard::OnResolutionCompleted1))
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLilianaoftheVeilCard::OnTargetZoneSelected))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->SetAbilityText(_T("Each player discards a card. Activates"));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerSacrificeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerSacrificeSpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("creatures"))));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
}

void CLilianaoftheVeilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	if (bResult)
	{
		CPlayer* target =  pAbilityAction->GetAssociatedPlayer();
		CZone* Battle = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);	

		CCountedCardContainer SelectFrom;
		CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

		if(Battle->GetSize())

			if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
			{
				SelectFrom.Sort(TRUE);

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
						m_SelectedCards2.AddCard(Battle->GetAt(i), CardPlacement::Top);
					else
						m_SelectedCards1.AddCard(Battle->GetAt(i), CardPlacement::Top);
				}

				if (!target->IsComputer() && !m_pGame->IsThinking())
				{
						for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pAbilityAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pAbilityAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
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

				pAbilityAction->GetController()->GetInterface()->SelectCard(&selectCardData);
				m_SelectedCards1 = selectCardData.SelectedCards;

				for (int i = 0; i < Battle->GetSize(); ++i)
				{
					if (!m_SelectedCards1.HasCard(Battle->GetAt(i)))
						m_SelectedCards2.AddCard(Battle->GetAt(i), CardPlacement::Top);
				}

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pAbilityAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pAbilityAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				ProcessPiling(target, pAbilityAction->GetController());
			}

	}
}

void CLilianaoftheVeilCard::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
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

void CLilianaoftheVeilCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards1.GetAt(i));
				}

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards2.GetAt(i));
				}

				return;
			}
			return;
		}
}

void CLilianaoftheVeilCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CGruesomeDeformityCard::CGruesomeDeformityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Gruesome Deformity"), nID,
		BLACK_MANA_TEXT,
		Power(0), Life(0))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
}

//____________________________________________________________________________
//

CDaybreakRangerCard::CDaybreakRangerCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Daybreak Ranger"), CardType::Creature, CREATURE_TYPE3(Human, Archer, Werewolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2), Power(4), Life(4), _T("Nightfall Predator"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Archer, FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-2),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CDaybreakRangerCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
				_T("") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetIsFightAbility();

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CDaybreakRangerCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDaybreakRangerCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDaybreakRangerCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDaybreakRangerCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CDaybreakRangerCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CNightfallPredatorCard::CNightfallPredatorCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Nightfall Predator"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(4), Life(4), Power(2), Life(2), _T("Daybreak Ranger"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Archer, TRUE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-2),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CNightfallPredatorCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this, 
				_T("") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetIsFightAbility();

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CNightfallPredatorCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightfallPredatorCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightfallPredatorCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNightfallPredatorCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CNightfallPredatorCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CBurningVengeanceCard::CBurningVengeanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Burning Vengeance"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Stack));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);	
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(true);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGeistOfSaintTraftCard::CGeistOfSaintTraftCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geist of Saint Traft"), CardType::_LegendaryCreature, CREATURE_TYPE2(Spirit, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_SubjectSelection(pGame,CSelectionSupport::SelectionCallback(this, &CGeistOfSaintTraftCard::OnSubjectSelected))
{
	GetCardKeyword()->AddHexproof(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGeistOfSaintTraftCard::BeforeResolution));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

bool CGeistOfSaintTraftCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Angel D"), 2886, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pController);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End of Combat Exile Effect"), 61111, &pTokens);
	pModifier2.ApplyTo(pController);

	CCardOrientationModifier pTapModifier = CCardOrientationModifier();	

	for (int i = 0; i < pTokens.GetSize(); ++i)
	{
		pTapModifier.ApplyTo(pTokens.GetAt(i));					
	}

	CZone* pBattlefield = m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::Battlefield);
	
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsPlaneswalker())
		{
				
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Attack %s"), pCard->GetCardName());

			entries.push_back(selectionEntry);
		}
	}
		
	{
	SelectionEntry selectionEntry;

	selectionEntry.dwContext = 0;
	selectionEntry.strText.Format(_T("Attack player"));

	entries.push_back(selectionEntry);
	}

	for (int i = 0; i < pTokens.GetSize(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)pTokens.GetAt(i);
		m_SubjectSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pCard);
	}

	return true;
}

void CGeistOfSaintTraftCard::OnSubjectSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)dwContext1;
			
			if ( pSelectionPlayer != pCard->GetController())
				return;

			if (!it->dwContext)
			{								
				pCard->Attack(m_pGame->GetNextPlayer(pCard->GetController()));
				return;
			}
			else
			{
				CPlaneswalkerCard* pAttackedWalker = (CPlaneswalkerCard*)it->dwContext;
				pCard->Attack(pAttackedWalker);
			}
		}
}

//____________________________________________________________________________
//
CSelhoffOccultistCard::CSelhoffOccultistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selhoff Occultist"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, true, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScourgeOfGeierReachCard::CScourgeOfGeierReachCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scourge of Geier Reach"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Creature, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRooftopStormCard::CRooftopStormCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rooftop Storm"), CardType::GlobalEnchantment, nID,
		_T("5") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),	
			Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Battlefield);

	cpAbility->GetOtherCardModifiers().push_back(new CCardSpellModifier(
		CCardSpellModifier::CreateSpellCallback(this,
			&CRooftopStormCard::CreateSpell)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CSpell> CRooftopStormCard::CreateSpell(CCard* pCard)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(pCard, AbilityType::Creature,
			_T("0")));
	ATLASSERT(cpSpell);

	for (int i = 0; i <  pCard->GetSpells().GetSize(); ++i)
	{
		if (pCard->GetSpells().GetAt(i)->IsMainSpell())
		{
			CCost_ pCost = pCard->GetSpells().GetAt(i)->GetCost();
			pCost.RemoveManaCost(pCost.GetManaCost());
			pCost.RemoveExtraManaCost();
			cpSpell->SetCost(pCost);
			break;
		}

	}

	cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
	return counted_ptr<CSpell>(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCreepyDollCard::CCreepyDollCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Creepy Doll"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(1), Life(1))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCreepyDollCard::OnFlipSelected))
{
	GetCardKeyword()->AddIndestructible(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCreepyDollCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCreepyDollCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCreepyDollCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

bool CCreepyDollCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = triggerContext.m_pCard;
	
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		int Thumb = 0;
		int Exponent = 2;
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) 
			Exponent = 2 * Exponent;
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
		pModifier->ApplyTo(pCard);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), DWORD(pCard));
	}
	return false;
}

void CCreepyDollCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
				pModifier->ApplyTo((CCard*)dwContext1);
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
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CGrimoireOfTheDeadCard::CGrimoireOfTheDeadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grimoire of the Dead"), CardType::_LegendaryArtifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));
		ATLASSERT(cpAbility);
	
		cpAbility->SetAbilityText(_T("Put a study counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(STUDY_COUNTER, +1));
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STUDY_COUNTER), -3);

		cpAbility-> SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrimoireOfTheDeadCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CGrimoireOfTheDeadCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardTypeModifier(CardType::Black)));
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureTypeModifier(SingleCreatureType::Zombie)));
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}

	CCountedCardContainer creatures;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}

	CGainControlModifier modifier = CGainControlModifier(GetGame(),(CCard*)this);

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
		modifier.ApplyTo(creatures.GetAt(ic));

	return true;
}

//____________________________________________________________________________
//
CElderCatharCard::CElderCatharCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder Cathar"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>,CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElderCatharCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CElderCatharCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	if (pTarget->GetCreatureType().HasType(SingleCreatureType::Human) || pTarget->GetCardKeyword()->HasChangeling())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 2);
		pModifier.ApplyTo((CCard*)pTarget);
	}
	else
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 1);
		pModifier.ApplyTo((CCard*)pTarget);
	}
	
	return true;
}

//____________________________________________________________________________
//
CDivineReckoningCard::CDivineReckoningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divine Reckoning"), CardType::Sorcery, nID)
	, m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDivineReckoningCard::OnCreatureSelected))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDivineReckoningCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDivineReckoningCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CDivineReckoningCard::BeforeResolution(CAbilityAction* pAction)
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

	CreatureSelection(0, pController);
	return true;
}

void CDivineReckoningCard::CreatureSelection(int nPlayer, CPlayer* pController)
{
	if (nPlayer < Players.GetSize())
	{
		CPlayer* pPlayer = Players.GetAt(nPlayer);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard->GetCardType().IsCreature())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Select %s."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer, (DWORD)pController);
		}
		else
			CreatureSelection(nPlayer + 1, pController);
	}
	else
	{
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController)));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}
}

void CDivineReckoningCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;
			CPlayer* pController = (CPlayer*)dwContext2;

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

			CreatureSelection(nPlayer + 1, pController);
				
			return;
		}
}

//____________________________________________________________________________
//
CUnbreathingHordeCard::CUnbreathingHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Unbreathing Horde"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(0), Life(0))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CUnbreathingHordeCard::OnZoneChanged))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);

	m_CardFilter1.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	m_CardFilter1.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUnbreathingHordeCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CUnbreathingHordeCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CUnbreathingHordeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
		CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	
		int nZombies = m_CardFilter1.CountIncluded(pBattlefield->GetCardContainer()) + m_CardFilter2.CountIncluded(pGraveyard->GetCardContainer());

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nZombies);

		pModifier.ApplyTo(this);
	}
}

bool CUnbreathingHordeCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CUnbreathingHordeCard::BeforeResolution(CUnbreathingHordeCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CDearlyDepartedCard::CDearlyDepartedCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dearly Departed"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	/*
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::DearlyDepartedEffect, 1, TRUE));

	cpAbility->SetAffectControllerOnly();

	cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
	*/
}

//____________________________________________________________________________
//
/*
CBlasphemousActCard::CBlasphemousActCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Blasphemous Act"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("8") RED_MANA_TEXT,
		Life(-13),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
	, m_CardFilter(_T("creature"), _T("creatures"), new AnyCreatureComparer)
{
	counted_ptr<CTriggeredAllAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAllAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}
*/
//____________________________________________________________________________
//
CGutterGrimeCard::CGutterGrimeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gutter Grime"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGutterGrimeCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGutterGrimeCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardCounterModifier pModifier1 = CCardCounterModifier(SLIME_COUNTER, +1);
	pModifier1.ApplyTo(this);

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Ooze E"), 2857, 1);
	pModifier2.ApplyTo(pAction->GetController());
	
	return true;
}

//____________________________________________________________________________
//
CUndeadAlchemistCard::CUndeadAlchemistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Alchemist"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CUndeadAlchemistCard::OnResolutionCompleted))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::ZombieMill));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Library, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUndeadAlchemistCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUndeadAlchemistCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

void CUndeadAlchemistCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nRand = 0;
	int nUID = 0;
	CString name = _T("");

	if (!m_pGame->IsThinking())
	{
		nRand = pAbilityAction->GetController()->GetRand() % 3;
	}
		
	if (nRand == 0)
	{
		nUID = 2891;
		name = _T("Zombie I");
	}
	else if (nRand == 1)
	{
		nUID = 2951;
		name = _T("Zombie J");
	}
	else
	{
		nUID = 2955;
		name = _T("Zombie K");
	}

	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), name, nUID, 1, false);
	pModifier->ApplyTo(pAbilityAction->GetController());

	return;
}

//____________________________________________________________________________
//
CCivilizedScholarCard::CCivilizedScholarCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Civilized Scholar"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(1), Power(5), Life(1), _T("Homicidal Brute"))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCivilizedScholarCard::OnCardSelected))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Advisor, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Mutant, TRUE);
	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::Red, FALSE, CardType::Blue);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCardModifier(pModifier3);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCivilizedScholarCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCivilizedScholarCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCivilizedScholarCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCivilizedScholarCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCivilizedScholarCard::CanPlay(BOOL bIncludeTricks)
{
	return !GetOrientation()->IsSecondFaced();
}

bool CCivilizedScholarCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier1.ApplyTo(pController);

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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CCivilizedScholarCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
			bool bCreature = pCard->GetCardType().IsCreature();

			pModifier1.ApplyTo(pCard);

			if (bCreature)
			{
				CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);
				pModifier2.ApplyTo(this);

				CFaceTransformModifier pModifier3 = CFaceTransformModifier();
				pModifier3.ApplyTo(this);
			}
				
			return;
		}
}

bool CCivilizedScholarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && !AttackedThisTurn());
}

bool CCivilizedScholarCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	pModifier1.ApplyTo(this);

	CFaceTransformModifier pModifier2 = CFaceTransformModifier();
	pModifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CHomicidalBruteCard::CHomicidalBruteCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Homicidal Brute"), CardType::Creature, CREATURE_TYPE2(Human, Mutant), nID,
		_T(""), Power(5), Life(1), Power(0), Life(1), _T("Civilized Scholar"))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CHomicidalBruteCard::OnCardSelected))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Mutant, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Advisor, TRUE);
	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::Blue, FALSE, CardType::Red);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCardModifier(pModifier3);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CHomicidalBruteCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHomicidalBruteCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHomicidalBruteCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHomicidalBruteCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CHomicidalBruteCard::CanPlay(BOOL bIncludeTricks)
{
	return GetOrientation()->IsSecondFaced();
}

bool CHomicidalBruteCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier1.ApplyTo(pController);

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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CHomicidalBruteCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
			bool bCreature = pCard->GetCardType().IsCreature();

			pModifier1.ApplyTo(pCard);

			if (bCreature)
			{
				CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);
				pModifier2.ApplyTo(this);

				CFaceTransformModifier pModifier3 = CFaceTransformModifier();
				pModifier3.ApplyTo(this);
			}
				
			return;
		}
}

bool CHomicidalBruteCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && !AttackedThisTurn());
}

bool CHomicidalBruteCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	pModifier1.ApplyTo(this);

	CFaceTransformModifier pModifier2 = CFaceTransformModifier();
	pModifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CMoonmistCard::CMoonmistCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Moonmist"), CardType::Instant, nID)		
{	
	counted_ptr<CGenericSpell> cpSpell(
	::CreateObject<CGenericSpell>(this, AbilityType::Instant,					
		_T("1") GREEN_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoonmistCard::BeforeResolution));

	cpSpell->AddAbilityTag(AbilityTag::CardChange);
	cpSpell->AddAbilityTag(AbilityTag::DamagePrevention);
	AddSpell(cpSpell.GetPointer());
}

bool CMoonmistCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CFaceTransformModifier()));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
	}

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Moonmist Effect"), 61036, 1, FALSE, ZoneId::_Effects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//