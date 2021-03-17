#include "stdafx.h"
#include "CardGatecrash.h"

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
		DEFINE_CARD(CAdaptiveSnapjawCard);
		DEFINE_CARD(CAerialManeuverCard);
		DEFINE_CARD(CAEtherizeCard);
		DEFINE_CARD(CAgoraphobiaCard);
		DEFINE_CARD(CAlphaAuthorityCard);
		DEFINE_CARD(CAngelicEdictCard);
		DEFINE_CARD(CAngelicSkirmisherCard);
		DEFINE_CARD(CArrowsOfJusticeCard);
		DEFINE_CARD(CAssembleTheLegionCard);
		DEFINE_CARD(CAureliasFuryCard);
		DEFINE_CARD(CAureliaTheWarleaderCard);
		DEFINE_CARD(CBalustradeSpyCard);
		DEFINE_CARD(CBaneAlleyBrokerCard);
		DEFINE_CARD(CBasilicaGuardsCard);
		DEFINE_CARD(CBasilicaScreecherCard);
		DEFINE_CARD(CBiomassMutationCard);
		DEFINE_CARD(CBioshiftCard);
		DEFINE_CARD(CBiovisionaryCard);
		DEFINE_CARD(CBlindObedienceCard);
		DEFINE_CARD(CBomberCorpsCard);
		DEFINE_CARD(CBorborygmosEnragedCard);
		DEFINE_CARD(CBorosCharmCard);
		DEFINE_CARD(CBorosEliteCard);
		DEFINE_CARD(CBorosGuildgateCard);
		DEFINE_CARD(CBorosKeyruneCard);
		DEFINE_CARD(CBorosReckonerCard);
		DEFINE_CARD(CBurningTreeEmissaryCard);
		DEFINE_CARD(CBurstOfStrengthCard);
		DEFINE_CARD(CCallOfTheNightwingCard);
		DEFINE_CARD(CCartelAristocratCard);
		DEFINE_CARD(CClingingAnemonesCard);
		DEFINE_CARD(CCloudfinRaptorCard);
		DEFINE_CARD(CCoercedConfessionCard);
		DEFINE_CARD(CConsumingAberrationCard);
		DEFINE_CARD(CCorpseBlockadeCard);
		DEFINE_CARD(CCourtStreetDenizenCard);
		DEFINE_CARD(CCracklingPerimeterCard);
		DEFINE_CARD(CCrocanuraCard);
		DEFINE_CARD(CCrownedCeratokCard);
		DEFINE_CARD(CCryptGhastCard);
		DEFINE_CARD(CDaringSkyjekCard);
		DEFINE_CARD(CDeathcultRogueCard);
		DEFINE_CARD(CDeathpactAngelCard);
		DEFINE_CARD(CDebtorsPulpitCard);
		DEFINE_CARD(CDevourFleshCard);
		DEFINE_CARD(CDimirGuildgateCard);
		DEFINE_CARD(CDimirCharmCard);
		DEFINE_CARD(CDimirKeyruneCard);
		DEFINE_CARD(CDinrovaHorrorCard);
		DEFINE_CARD(CDiscipleOfTheOldWaysCard);
		DEFINE_CARD(CDomriRadeCard);
		DEFINE_CARD(CDrakewingKrasisCard);
		DEFINE_CARD(CDuskmantleGuildmageCard);
		DEFINE_CARD(CDuskmantleSeerCard);
		DEFINE_CARD(CDutifulThrullCard);
		DEFINE_CARD(CDyingWishCard);
		DEFINE_CARD(CElusiveKrasisCard);
		DEFINE_CARD(CEnterTheInfiniteCard);
		DEFINE_CARD(CExecutionersSwingCard);
		DEFINE_CARD(CExperimentOneCard);
		DEFINE_CARD(CFathomMageCard);
		DEFINE_CARD(CFirefistStrikerCard);
		DEFINE_CARD(CFiremaneAvengerCard);
		DEFINE_CARD(CFiveAlarmFireCard);
		DEFINE_CARD(CForcedAdaptationCard);
		DEFINE_CARD(CFortressCyclopsCard);
		DEFINE_CARD(CFoundryChampionCard);
		DEFINE_CARD(CFoundryStreetDenizenCard);
		DEFINE_CARD(CFrilledOculusCard);
		DEFINE_CARD(CFrontlineMedicCard);
		DEFINE_CARD(CFuriousResistanceCard);
		DEFINE_CARD(CGatewayShadeCard);
		DEFINE_CARD(CGhorClanRampagerCard);
		DEFINE_CARD(CGlaringSpotlightCard);
		DEFINE_CARD(CGiantAdephageCard);
		DEFINE_CARD(CGideonChampionOfJusticeCard);
		DEFINE_CARD(CGiftOfOrzhovaCard);
		DEFINE_CARD(CGreensideWatcherCard);
		DEFINE_CARD(CGridlockCard);
		DEFINE_CARD(CGrislySpectacleCard);
		DEFINE_CARD(CGroundAssaultCard);
		DEFINE_CARD(CGruulCharmCard);
		DEFINE_CARD(CGruulGuildgateCard);
		DEFINE_CARD(CGruulKeyruneCard);
		DEFINE_CARD(CGruulRagebeastCard);
		DEFINE_CARD(CGuardianOfTheGatelessCard);
		DEFINE_CARD(CGutterSkulkCard);
		DEFINE_CARD(CGyreSageCard);
		DEFINE_CARD(CHandsOfBindingCard);
		DEFINE_CARD(CHellkiteTyrantCard);
		DEFINE_CARD(CHellraiserGoblinCard);
		DEFINE_CARD(CHighPriestOfPenanceCard);
		DEFINE_CARD(CHindervinesCard);
		DEFINE_CARD(CHomingLightningCard);
		DEFINE_CARD(CHorrorOfTheDimCard);
		DEFINE_CARD(CHydroformCard);
		DEFINE_CARD(CIllnessInTheRanksCard);
		DEFINE_CARD(CImmortalServitudeCard);
		DEFINE_CARD(CIncursionSpecialistCard);
		DEFINE_CARD(CIvyLaneDenizenCard);
		DEFINE_CARD(CKeymasterRogueCard);
		DEFINE_CARD(CKillingGlareCard);
		DEFINE_CARD(CKingpinsPetCard);
		DEFINE_CARD(CKnightWatchCard);
		DEFINE_CARD(CKnightOfObligationCard);
		DEFINE_CARD(CLastThoughtsCard);
		DEFINE_CARD(CLegionLoyalistCard);
		DEFINE_CARD(CLeylinePhantomCard);
		DEFINE_CARD(CLordOfTheVoidCard);
		DEFINE_CARD(CLuminatePrimordialCard);
		DEFINE_CARD(CMadcapSkillsCard);
		DEFINE_CARD(CMartialGloryCard);
		DEFINE_CARD(CMassiveRaidCard);
		DEFINE_CARD(CMasterBiomancerCard);
		DEFINE_CARD(CMentalVaporsCard);
		DEFINE_CARD(CMercilessEvictionCard);
		DEFINE_CARD(CMerfolkOfTheDepthsCard);
		DEFINE_CARD(CMetropolisSpriteCard);
		DEFINE_CARD(CMillennialGargoyleCard);
		DEFINE_CARD(CMidnightRecoveryCard);
		DEFINE_CARD(CMimingSlimeCard);
		DEFINE_CARD(CMindeyeDrakeCard);
		DEFINE_CARD(CMindGrindCard);
		DEFINE_CARD(CMoltenPrimordialCard);
		DEFINE_CARD(CMortusStriderCard);
		DEFINE_CARD(CMurderInvestigationCard);
		DEFINE_CARD(CMuggingCard);
		DEFINE_CARD(CMysticGenesisCard);
		DEFINE_CARD(CNavSquadCommandosCard);
		DEFINE_CARD(CNimbusSwimmerCard);
		DEFINE_CARD(CObzedatGhostCouncilCard)
		DEFINE_CARD(COgreSlumlordCard);
		DEFINE_CARD(COneThousandLashesCard);
		DEFINE_CARD(COrdruunVeteranCard);
		DEFINE_CARD(COrzhovCharmCard);
		DEFINE_CARD(COrzhovGuildgateCard);
		DEFINE_CARD(COrzhovKeyruneCard);
		DEFINE_CARD(CParanoidDelusionsCard);
		DEFINE_CARD(CPitFightCard);
		DEFINE_CARD(CPredatorsRapportCard);
		DEFINE_CARD(CPrimalVisitationCard);
		DEFINE_CARD(CPrimeSpeakerZeganaCard);
		DEFINE_CARD(CPsychicStrikeCard);
		DEFINE_CARD(CPurgeTheProfaneCard);
		DEFINE_CARD(CRapidHybridizationCard);
		DEFINE_CARD(CRazortipWhipCard);
		DEFINE_CARD(CRealmwrightCard);
		DEFINE_CARD(CRiotGearCard);
		DEFINE_CARD(CRipscalePredatorCard);
		DEFINE_CARD(CRubblebeltRaidersCard);
		DEFINE_CARD(CRubblehulkCard);
		DEFINE_CARD(CRuinationWurmCard);
		DEFINE_CARD(CRustScarabCard);
		DEFINE_CARD(CSagesRowDenizenCard);
		DEFINE_CARD(CSapphireDrakeCard);
		DEFINE_CARD(CScabClanChargerCard);
		DEFINE_CARD(CScatterArcCard);
		DEFINE_CARD(CScorchwalkerCard);
		DEFINE_CARD(CSepulchralPrimordialCard);
		DEFINE_CARD(CSereneRemembranceCard);
		DEFINE_CARD(CShadowAlleyDenizenCard);
		DEFINE_CARD(CShadowSliceCard);
		DEFINE_CARD(CShamblesharkCard);
		DEFINE_CARD(CShatteringBlowCard);
		DEFINE_CARD(CShieldedPassageCard);
		DEFINE_CARD(CSignalTheClansCard);
		DEFINE_CARD(CSimicCharmCard);
		DEFINE_CARD(CSimicFluxmageCard);
		DEFINE_CARD(CSimicGuildgateCard);
		DEFINE_CARD(CSimicKeyruneCard);
		DEFINE_CARD(CSimicManipulatorCard);
		DEFINE_CARD(CSkarrgGoliathCard);
		DEFINE_CARD(CSkarrgGuildmageCard);
		DEFINE_CARD(CSkinbrandGoblinCard);
		DEFINE_CARD(CSkullcrackCard);
		DEFINE_CARD(CSkyblinderStaffCard);
		DEFINE_CARD(CSkygamesCard);
		DEFINE_CARD(CSlateStreetRuffianCard);
		DEFINE_CARD(CSlaughterhornCard);
		DEFINE_CARD(CSmogElementalCard);
		DEFINE_CARD(CSparkTrooperCard);
		DEFINE_CARD(CSpellRuptureCard);
		DEFINE_CARD(CSpireTracerCard);
		DEFINE_CARD(CStolenIdentityCard);
		DEFINE_CARD(CStructuralCollapseCard);
		DEFINE_CARD(CSunhomeGuildmageCard);
		DEFINE_CARD(CSylvanPrimordialCard);
		DEFINE_CARD(CSyndicOfTithesCard);
		DEFINE_CARD(CSyndicateEnforcerCard);
		DEFINE_CARD(CThrullParasiteCard);
		DEFINE_CARD(CTinStreetMarketCard);
		DEFINE_CARD(CTotallyLostCard);
		DEFINE_CARD(CTowerDefenseCard);
		DEFINE_CARD(CToweringThunderfistCard);
		DEFINE_CARD(CTreasuryThrullCard);
		DEFINE_CARD(CTruefirePaladinCard);
		DEFINE_CARD(CUndercityInformerCard);
		DEFINE_CARD(CUndercityPlagueCard);
		DEFINE_CARD(CUnexpectedResultsCard);
		DEFINE_CARD(CUrbanEvolutionCard);
		DEFINE_CARD(CUrbisProtectorCard);
		DEFINE_CARD(CViashinoShanktailCard);
		DEFINE_CARD(CVizkopaConfessorCard);
		DEFINE_CARD(CVizkopaGuildmageCard);
		DEFINE_CARD(CVoidwalkCard);
		DEFINE_CARD(CWarmindInfantryCard);
		DEFINE_CARD(CWastelandViperCard);
		//DEFINE_CARD(CWayOfTheThiefCard);
		DEFINE_CARD(CWhisperingMadnessCard);
		DEFINE_CARD(CWightOfPrecinctSixCard);
		DEFINE_CARD(CWildwoodRebirthCard);
		DEFINE_CARD(CWojekHalberdiersCard);
		DEFINE_CARD(CWreckingOgreCard);
		DEFINE_CARD(CZameckGuildmageCard);
		DEFINE_CARD(CZarichiTigerCard);
		DEFINE_CARD(CZhurTaaSwineCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here

CBorborygmosEnragedCard::CBorborygmosEnragedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borborygmos Enraged"), CardType::_LegendaryCreature, CREATURE_TYPE(Cyclops), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CBorborygmosEnragedCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetRevealCount(3);
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""), 
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

void CBorborygmosEnragedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 3;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::_Land).Any())
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
			pGraveyard->AddCard(revealedCards.GetAt(0), GetController(), MoveType::Others, CardPlacement::Top);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				revealedCards.Sort();	// ascending
				pGraveyard->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Top);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &revealedCards;

				if (GetController()->GetInterface()->OrderCards(&orderCardsData))
					pGraveyard->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Top);
			}
		}
	}
}

//____________________________________________________________________________
//
CBorosEliteCard::CBorosEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boros Elite"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBorosEliteCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CBorosEliteCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CBorosGuildgateCard::CBorosGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Boros Guildgate"), nID, CardType::_GateLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CDimirGuildgateCard::CDimirGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dimir Guildgate"), nID, CardType::_GateLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CGruulGuildgateCard::CGruulGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gruul Guildgate"), nID, CardType::_GateLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

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
COrzhovGuildgateCard::COrzhovGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Orzhov Guildgate"), nID, CardType::_GateLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CSimicGuildgateCard::CSimicGuildgateCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Simic Guildgate"), nID, CardType::_GateLand)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

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
CBurningTreeEmissaryCard::CBurningTreeEmissaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burning-Tree Emissary"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT GREEN_MANA_TEXT));

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
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT GREEN_MANA_TEXT)));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCloudfinRaptorCard::CCloudfinRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudfin Raptor"), CardType::Creature, CREATURE_TYPE2(Bird, Mutant), nID,
		BLUE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloudfinRaptorCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloudfinRaptorCard::BeforeResolution));

	cpAbility->SetAbilityName(_T("Evolve ability"));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCloudfinRaptorCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CCloudfinRaptorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CDeathpactAngelCard::CDeathpactAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Deathpact Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Cleric"), 2986, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDomriRadeCard::CDomriRadeCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Domri Rade"), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
		PlaneswalkerType::Domri, 3)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDomriRadeCard::OnResolutionCompleted))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CDomriRadeCard::OnSelected))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T(""),
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDomriRadeFightSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDomriRadeFightSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Domri Rade Emblem"), 61008, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Creatures you control have double strike, trample, hexproof, and haste."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Creatures you control have double strike, trample, hexproof, and haste."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());			
	}
}

void CDomriRadeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CPlayer* pController = pAbilityAction->GetController();
	CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

	if (pNextDraw && pNextDraw->GetCardType().IsCreature())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Reveal %s and put it into your hand"), pNextDraw->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't reveal %s"), pNextDraw->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController(), (DWORD)pNextDraw);
	}
	return;
}

void CDomriRadeCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);

				return;
			}
			return;
		}
}

CDomriRadeCard::CDomriRadeFightSpell::CDomriRadeFightSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""), TRUE)
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CDomriRadeCard::CDomriRadeFightSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
	
}

//____________________________________________________________________________
//
CDrakewingKrasisCard::CDrakewingKrasisCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drakewing Krasis"), CardType::Creature, CREATURE_TYPE2(Lizard, Drake), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CExperimentOneCard::CExperimentOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Experiment One"), CardType::Creature, CREATURE_TYPE2(Human, Ooze), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExperimentOneCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CExperimentOneCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CExperimentOneCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CExperimentOneCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CFiremaneAvengerCard::CFiremaneAvengerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Firemane Avenger"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))

{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiremaneAvengerCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CFiremaneAvengerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CEnterTheInfiniteCard::CEnterTheInfiniteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Enter the Infinite"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEnterTheInfiniteCard::BeforeResolution));
	cpSpell->SetDiscard(1, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Enter the Infinite Effect"), 61020, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

bool CEnterTheInfiniteCard::BeforeResolution(CAbilityAction* pAction) const
{
	ContextValue Context(pAction->GetValue());

	Context.nValue1 = pAction->GetController()->GetZoneById(ZoneId::Library)->GetSize();

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CGatewayShadeCard::CGatewayShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Gateway Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Gate, false));
	
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, _T(""), Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGridlockCard::CGridlockCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gridlock"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			TRUE, FALSE,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false))));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->AdjustTargetCountWithExtraCostValue();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHellkiteTyrantCard::CHellkiteTyrantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hellkite Tyrant"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHellkiteTyrantCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHellkiteTyrantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHellkiteTyrantCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	triggerContext.m_MoveCardModifier.SetToPlayer(pPlayer);
	return true;
}

bool CHellkiteTyrantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CPlayer* pController = pAction->GetController();
	CPlayer* pPlayer = triggerContext.m_MoveCardModifier.GetToPlayer();
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CZone* pControllerBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	int nBattlefield = pBattlefield->GetSize();

	for (int i = 0; i < nBattlefield; ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsArtifact())
			pCard->Move(pControllerBattlefield, pController, MoveType::Others);
	}

	return false;
}

//____________________________________________________________________________
//
CMurderInvestigationCard::CMurderInvestigationCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Murder Investigation"), CardType::EnchantCreature, nID,
		_T("1") WHITE_MANA_TEXT,
		new AnyCreatureComparer)		
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMurderInvestigationCard::SetTriggerContext));
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier M"), 2908, 0);	

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CMurderInvestigationCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pEnchantedCard);
	if (!pCreature) return false;

	triggerContext.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());
	return true;
}

//____________________________________________________________________________
//
CRubblehulkCard::CRubblehulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rubblehulk"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CRubblehulkCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Land, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

void CRubblehulkCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CPowerModifier pModifier1 = CPowerModifier(Power(+nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);

	if (bResult)
	{
		pModifier1.ApplyTo(pTarget);
		pModifier2.ApplyTo(pTarget);
	}
}

//____________________________________________________________________________
//
CSimicFluxmageCard::CSimicFluxmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simic Fluxmage"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSimicFluxmageCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSimicFluxmageCard::BeforeResolution1));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Move a +1/+1 counter from Simic Fluxmage onto target creature. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSimicFluxmageCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSimicFluxmageCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CSimicFluxmageCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CSimicFluxmageCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();
	if (!this->IsInplay() || (this->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() == 0) || pTarget->GetCardKeyword()->HasCantGetCounters() || (pTarget == this))
		return false;
	
	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -1);
	CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

	pModifier1.ApplyTo((CCard*)this);
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CTinStreetMarketCard::CTinStreetMarketCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tin Street Market"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CTinStreetMarketCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CTinStreetMarketCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pEnchantedCard,
			_T(""), 1));

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashinoShanktailCard::CViashinoShanktailCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Shanktail"), CardType::Creature, CREATURE_TYPE2(Viashino, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") RED_MANA_TEXT,
				Power(+3), Life(+1),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CZhurTaaSwineCard::CZhurTaaSwineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhur-Taa Swine"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
			Power(+5), Life(+4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CFoundryChampionCard::CFoundryChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foundry Champion"), CardType::Creature, CREATURE_TYPE2(Elemental, Soldier), nID,
		_T("4") RED_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))

{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFoundryChampionCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, WHITE_MANA_TEXT, Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	};
}

bool CFoundryChampionCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(
		m_CardFilter.CountIncluded(pBattlefield->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSkarrgGoliathCard::CSkarrgGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skarrg Goliath"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+9), Life(+9),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CConsumingAberrationCard::CConsumingAberrationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Consuming Aberration"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new TrueCardComparer));

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CConsumingAberrationCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CConsumingAberrationCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
		{
			CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

			int landcount = 0;
			int n = 0;

			for (int i = 0; i < pLibrary->GetSize(); ++i)
			{
				CCard* pOppCard = pLibrary->GetAt(pLibrary->GetSize()-1-i);
				if (pOppCard->GetCardType().IsLand())
					landcount = landcount +1;
				if (landcount==1) { n = i+1; landcount = landcount +1;}
			}

			if (n==0) n=pLibrary->GetSize();

			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
			pModifier.ApplyTo(pPlayer);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CGruulKeyruneCard::CGruulKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gruul Keyrune"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast AC"), 64017));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBiovisionaryCard::CBiovisionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Biovisionary"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkullcrackCard::CSkullcrackCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Skullcrack"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkullcrackCard::BeforeResolution));
}

bool CSkullcrackCard::BeforeResolution(CAbilityAction* pAction)
{
	CScheduledPlayerModifier* pModifier1 = new CScheduledPlayerModifier(GetGame(),
		new CPlayerEffectModifier(PlayerEffectType::CantGainLife),
		TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(GetGame(),
		new CPlayerEffectModifier(PlayerEffectType::CantPreventDamage),
		TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1->ApplyTo(GetGame()->GetPlayer(ip));
		pModifier2->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CAngelicSkirmisherCard::CAngelicSkirmisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Skirmisher"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CAngelicSkirmisherCard::OnSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAngelicSkirmisherCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CAngelicSkirmisherCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("First strike"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Vigilance"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Lifelink"));

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CAngelicSkirmisherCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects first strike"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::FirstStrike, true, true)));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects vigilance"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Vigilance, true, true)));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects lifelink"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Lifelink, true, true)));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CDuskmantleGuildmageCard::CDuskmantleGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duskmantle Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Duskmantle Guildmage Effect"), 61019, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, 2));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CHighPriestOfPenanceCard::CHighPriestOfPenanceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("High Priest of Penance"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	AddAbility(cpAbility.GetPointer());
}


//____________________________________________________________________________
//
CElusiveKrasisCard::CElusiveKrasisCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Elusive Krasis"), CardType::Creature, CREATURE_TYPE2(Fish, Mutant), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElusiveKrasisCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CElusiveKrasisCard::BeforeResolution));

	cpAbility->SetAbilityName(_T("Evolve ability"));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CElusiveKrasisCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CElusiveKrasisCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CRapidHybridizationCard::CRapidHybridizationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rapid Hybridization"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Frog Lizard"), 2992, 1));
}

//____________________________________________________________________________
//
CSunhomeGuildmageCard::CSunhomeGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunhome Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1") RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+0),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") RED_MANA_TEXT WHITE_MANA_TEXT,
				_T("Soldier C"), 2993,
				1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBorosKeyruneCard::CBorosKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Boros Keyrune"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				_T("Soldier AB"), 64067));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDimirCharmCard::CDimirCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dimir Charm"), CardType::Instant, nID)
{
	{
		//Counter target sorcery spell.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery, false)));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Counter target sorcery spell. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target creature with power 2 or less.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				new CreaturePowerComparer<std::less<int>>(3),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Destroy target creature with power 2 or less. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Look at the top three cards of target player's library, then put one back and the rest into that player's graveyard.
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				3));

		cpSpell->SetSelectionOptions(MaximumValue(1), ZoneId::Library, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")), MinimumValue(1));
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Look at the top three cards of target player's library, then put one back and the rest into that player's graveyard. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrocanuraCard::CCrocanuraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crocanura"), CardType::Creature, CREATURE_TYPE2(Crocodile, Frog), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrocanuraCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCrocanuraCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCrocanuraCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CCrocanuraCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CUrbanEvolutionCard::CUrbanEvolutionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Urban Evolution"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayExtraLandSpell> cpSpell(
		::CreateObject<CPlayExtraLandSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, 1, TRUE));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrbanEvolutionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CUrbanEvolutionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSignalTheClansCard::CSignalTheClansCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Signal the Clans"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSignalTheClansCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CSignalTheClansCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCountedCardContainer pSelectedCards;

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(3), pController, ZoneId::Library, CCardFilter::GetFilter(_T("creatures")), ZoneId::Library, FALSE, CardPlacement::Top, FALSE, TRUE, FALSE, &pSelectedCards, FALSE);
	pModifier1.ApplyTo(pController);

	if (pSelectedCards.GetSize() < 3) return false;
	if (pSelectedCards.GetAt(0)->GetPrintedCardName() == pSelectedCards.GetAt(1)->GetPrintedCardName()) return false;
	if (pSelectedCards.GetAt(1)->GetPrintedCardName() == pSelectedCards.GetAt(2)->GetPrintedCardName()) return false;
	if (pSelectedCards.GetAt(2)->GetPrintedCardName() == pSelectedCards.GetAt(0)->GetPrintedCardName()) return false;

	int nRandom = 0;

	if (!m_pGame->IsThinking())
		nRandom = pController->GetRand() % 3;

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pController);
	pModifier2.ApplyTo(pSelectedCards.GetAt(nRandom));

	if (!m_pGame->IsThinking())
	{

		CString strMessage;
		strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pSelectedCards.GetAt(nRandom)->GetCardName(TRUE));

		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
		{
			m_pGame->GetPlayer(j)->MemorizeCard(pSelectedCards.GetAt(nRandom));
		}
	}

	pController->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CRubblebeltRaidersCard::CRubblebeltRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rubblebelt Raiders"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRubblebeltRaidersCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRubblebeltRaidersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter mCardFilter;
	mCardFilter.SetComparer(new AttackingCreatureComparer);

	int nAttackingCreatures = mCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nAttackingCreatures);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

//____________________________________________________________________________
//
CHellraiserGoblinCard::CHellraiserGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hellraiser Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
			
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
			
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::MustAttackEachCombat);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectControllerCardsOnly();
	
		AddAbility(cpAbility.GetPointer());
	}
}

//______________________________________________________________________________
//
CBiomassMutationCard::CBiomassMutationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Biomass Mutation"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();
		cpSpell->SetReplace(TRUE);
		cpSpell->SetAffectControllerCardsOnly();
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();
		cpSpell->SetReplace(TRUE);
		cpSpell->SetAffectControllerCardsOnly();
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();
		cpSpell->SetReplace(TRUE);
		cpSpell->SetAffectControllerCardsOnly();
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPitFightCard::CPitFightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pit Fight"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CPitFightSpell> cpSpell(
			::CreateObject <CPitFightSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CPitFightSpell> cpSpell(
			::CreateObject <CPitFightSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}

CPitFightCard::CPitFightSpell::CPitFightSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""), TRUE)
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
}

void CPitFightCard::CPitFightSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
	
}

//____________________________________________________________________________
//
CPrimeSpeakerZeganaCard::CPrimeSpeakerZeganaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prime Speaker Zegana"), CardType::_LegendaryCreature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPrimeSpeakerZeganaCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPrimeSpeakerZeganaCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CPrimeSpeakerZeganaCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

		int nPower = 0;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsCreature() && pCard != this)
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				int nCreaturePower = GET_INTEGER(pCreature->GetPower());

				if (nCreaturePower > nPower)
					nPower = nCreaturePower;
			}
		}

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nPower);

		pModifier.ApplyTo(this);
	}
}

bool CPrimeSpeakerZeganaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = this->GetLastKnownPower();
	pAction->SetTriggerContext(triggerContext);

	return TRUE;
}

//____________________________________________________________________________
//
CGhorClanRampagerCard::CGhorClanRampagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghor-Clan Rampager"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGyreSageCard::CGyreSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gyre Sage"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGyreSageCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGyreSageCard::BeforeResolution1));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool for each +1/+1 counter on Gyre Sage"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGyreSageCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGyreSageCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CGyreSageCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CGyreSageCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int n = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n != 0) for (int i = 0; i < n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CLeylinePhantomCard::CLeylinePhantomCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leyline Phantom"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, &CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiantAdephageCard::CGiantAdephageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Adephage"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGiantAdephageCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CGiantAdephageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	return true;
}

//____________________________________________________________________________
//
CFrontlineMedicCard::CFrontlineMedicCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frontline Medic"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrontlineMedicCard::SetTriggerContext));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetAbilityName(_T("Battalion ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFrontlineMedicCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T(""),
				new CardExtraCostComparer()));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("3"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFrontlineMedicCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

bool CFrontlineMedicCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::IndestructibleCreatures);	
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pController);
	pModifier2->ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CGroundAssaultCard::CGroundAssaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ground Assault"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::_Land, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShamblesharkCard::CShamblesharkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shambleshark"), CardType::Creature, CREATURE_TYPE2(Fish, Crab), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShamblesharkCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShamblesharkCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CShamblesharkCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CShamblesharkCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CSimicKeyruneCard::CSimicKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Simic Keyrune"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				_T("Crab AA"), 64026));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDimirKeyruneCard::CDimirKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dimir Keyrune"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDimirKeyruneCard::OnResolutionCompleted))
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				_T("Horror AB"), 64028));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CDimirKeyruneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Unblockable, TRUE);
	pModifier.ApplyTo((CCreatureCard*)GetIsAlsoA());
}

//____________________________________________________________________________
//
CBorosCharmCard::CBorosCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boros Charm"), CardType::Instant, nID)
{
	{
		//Boros Charm deals 4 damage to target player.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant, 
				RED_MANA_TEXT WHITE_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Boros Charm deals 4 damage to target player. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Permanents you control are indestructible this turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Permanents you control gain indestructible until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Target creature gains double strike until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Target creature gains double strike until end of turn."));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGideonChampionOfJusticeCard::CGideonChampionOfJusticeCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Gideon, Champion of Justice"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Gideon, 4)	
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGideonChampionOfJusticeCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, true));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGideonChampionOfJusticeCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T(""),
				_T("Animated Gideon, Champion of Justice"), 64006));

		cpAbility->SetAbilityText(_T("0: Gideon, Champion of Justice becomes a creature. Activates")); 

		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::PreventDamagetoGideon2);
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	

		pmodifier->LinkPlayerModifier(pModifier2);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier);	
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -15);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGideonChampionOfJusticeCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGideonChampionOfJusticeCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pTarget->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	CCardCounterModifier pModifier = CCardCounterModifier(LOYALTY_COUNTER, +nCreatures);
	pModifier.ApplyTo((CCard*)this);

	return true;
}

void CGideonChampionOfJusticeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCardKeywordModifier pModifier = CCardKeywordModifier(CardKeyword::Indestructible, TRUE);
	pModifier.ApplyTo((CCard*)this);
}

bool CGideonChampionOfJusticeCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CFiveAlarmFireCard::CFiveAlarmFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Five-Alarm Fire"), CardType::GlobalEnchantment, nID, 
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(BLAZE_COUNTER, +1, false));	
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-5), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(BLAZE_COUNTER), -5);
		
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkarrgGuildmageCard::CSkarrgGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skarrg Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetToActivatedAbility();

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetOneTurnOnly(TRUE);
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Trample);

		CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier1));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1") RED_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false), false));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkarrgGuildmageCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSkarrgGuildmageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Elemental AK"), 64041, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CAssembleTheLegionCard::CAssembleTheLegionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Assemble the Legion"), CardType::GlobalEnchantment, nID, 
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CAssembleTheLegionCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAssembleTheLegionCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CAssembleTheLegionCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(MUSTER_COUNTER, +1);
		pModifier1.ApplyTo(this);
		m_nCounterCount = GetCounterContainer()->GetCounter(MUSTER_COUNTER)->GetCount();
	}

	if (m_nCounterCount > 0)
	{
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Soldier C"), 2993, m_nCounterCount);
		pModifier2.ApplyTo(pAction->GetController());
	}

	return true;
}

void CAssembleTheLegionCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CAssembleTheLegionCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != MUSTER_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CLordOfTheVoidCard::CLordOfTheVoidCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lord of the Void"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLordOfTheVoidCard::OnCardSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLordOfTheVoidCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CLordOfTheVoidCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pTriggered = pAction->GetTriggeredPlayer();
	CZone* pLibrary = pTriggered->GetZoneById(ZoneId::Library);

	int n = pLibrary->GetSize();

	if (n > 7) n = 7;

	if (n > 0)
	{
		CCountedCardContainer pExiledCards;

		for (int i = 1; i <= n; ++i)
		{
			CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);

			if (pCard->GetCardType().IsCreature())
				pExiledCards.AddCard(pCard, CardPlacement::Top);
		}

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.SetReorderInformation(true, ZoneId::Exile);

		pModifier.ApplyTo(pTriggered);

		if (pExiledCards.GetSize() > 0);
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pExiledCards.GetSize(); ++i)
			{
				CCard* pCard = pExiledCards.GetAt(i);

				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield under your control"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
		}
	}

	return true;
}

void CLordOfTheVoidCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s puts %s onto the battlefield under his control"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pCard->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);

			return;
		}
}

//____________________________________________________________________________
//
CBasilicaGuardsCard::CBasilicaGuardsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Basilica Guards"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlindObedienceCard::CBlindObedienceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blind Obedience"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				_T("1") WHITE_MANA_TEXT,
				PlayerEffectType::InPlayTapped,
				(int)CCardFilter::GetFilter(_T("artifacts or creatures")),	
				TRUE));

		cpEnchantment->SetAffectOpponentsOnly();

		AddSpell(cpEnchantment.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCryptGhastCard::CCryptGhastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crypt Ghast"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Swamps")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT)));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSyndicOfTithesCard::CSyndicOfTithesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Syndic of Tithes"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
		DamageType::NotDealingDamage)));

	cpAbility->SetAbilityName(_T("Extort ability"));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrullParasiteCard::CThrullParasiteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thrull Parasite"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRemoveCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRemoveCounterSpell>>(this,
				_T(""),
				new TrueCardComparer,
				1));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-2));
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTreasuryThrullCard::CTreasuryThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treasury Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVizkopaConfessorCard::CVizkopaConfessorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vizkopa Confessor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVizkopaConfessorCard::OnNumberSelected))
	, m_CardSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CVizkopaConfessorCard::OnCardSelected1))
	, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CVizkopaConfessorCard::OnCardSelected2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVizkopaConfessorCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVizkopaConfessorCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	if ((pController->GetLife() > 0) && !pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		int n = GET_INTEGER(pController->GetLife());

		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= n; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			entry.strText.Format(_T("Pay %d life"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pAction->GetAssociatedPlayer());
	}

	return true;
}

void CVizkopaConfessorCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nValue = it->dwContext;
			CPlayer* pTarget = (CPlayer*)dwContext1;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s pays %d life"), pSelectionPlayer->GetPlayerName(), nValue);
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			if (nValue == 0) return;
			
			CLifeModifier pModifier1 = CLifeModifier(Life(-nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier1.ApplyTo(pSelectionPlayer);

			pPickedCards.RemoveAll();

			CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

			if (nValue >= pHand->GetSize())
			{
				for (int i = 0; i < pHand->GetSize(); ++i)
				{
					CCard* pCard = pHand->GetAt(i);

					pPickedCards.AddCard(pCard, CardPlacement::Top);

					if (!m_pGame->IsThinking())
					{
						CString strMessage;
						strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));
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
				}
				PickExile(pSelectionPlayer, pTarget);
			}
			else
				PickCards(pSelectionPlayer, pTarget, nValue);

			return;
		}
}

void CVizkopaConfessorCard::PickCards (CPlayer* pController, CPlayer* pTarget, int nValue)
{
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	int nSoFar = pPickedCards.GetSize() + 1;

	if (nSoFar <= nValue)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Reveal %s (card %d of %d)"),
				pCard->GetCardName(TRUE), nSoFar, nValue);

			entries.push_back(entry);
		}
		m_CardSelection1.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController, nValue);
	}
	else
		PickExile(pController, pTarget);
}

void CVizkopaConfessorCard::OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
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
			pPickedCards.AddCard(pCard, CardPlacement::Top);

			PickCards((CPlayer*)dwContext1, pSelectionPlayer, dwContext2);
				
			return;
		}
}

void CVizkopaConfessorCard::PickExile (CPlayer* pController, CPlayer* pTarget)
{
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pPickedCards.GetSize(); ++i)
	{
		CCard* pCard = pPickedCards.GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Exile %s"), pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
}

void CVizkopaConfessorCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			CPlayer* pTarget = (CPlayer*)dwContext1;

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
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CUndercityInformerCard::CUndercityInformerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undercity Informer"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1"),
			FALSE_CARD_COMPARER, true));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUndercityInformerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CUndercityInformerCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	int landcount = 0;
	int n = 0;

	for (int i = 0; i < pLibrary->GetSize(); ++i)
	{
		CCard* pOppCard = pLibrary->GetAt(pLibrary->GetSize()-1-i);
		if (pOppCard->GetCardType().IsLand())
			landcount = landcount +1;
		if (landcount==1) { n = i+1; landcount = landcount +1;}
	}

	if (n==0) n=pLibrary->GetSize();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CLegionLoyalistCard::CLegionLoyalistCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Legion Loyalist"), CardType::Creature, CREATURE_TYPE2(Goblin, Soldier), nID,
		RED_MANA_TEXT, Power(1), Life(1))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLegionLoyalistCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(CTriggeredModifyCreatureAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLegionLoyalistCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CLegionLoyalistCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

bool CLegionLoyalistCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CZoneCreatureModifier pModifier1 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::FirstStrike, TRUE)));
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Trample, TRUE)));

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));

	pModifier1.ApplyTo(pController);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSimicCharmCard::CSimicCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Simic Charm"), CardType::Instant, nID)
{
	{
		//Target creature gets +3/+3 until end of turn.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				Power(+3), Life(+3), 
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Target creature gets +3/+3 until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Permanents you control gain hexproof until end of turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Permanents you control gain hexproof until end of turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Return target creature to its owner's hand.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield,
				ZoneId::Hand,
				true, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Return target creature to its owner's hand. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
COrzhovKeyruneCard::COrzhovKeyruneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orzhov Keyrune"), CardType::Artifact, nID,
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
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				_T("Thrull AA"), 64025));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCallOfTheNightwingCard::CCallOfTheNightwingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Call of the Nightwing"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCallOfTheNightwingCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CCallOfTheNightwingCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCallOfTheNightwingCard::OnZoneChanged))
{
	{		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Horror B"), 2995, 1));
	
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CCallOfTheNightwingCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCallOfTheNightwingCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCallOfTheNightwingCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCallOfTheNightwingCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CCallOfTheNightwingCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CCallOfTheNightwingCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CCallOfTheNightwingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CCallOfTheNightwingCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CCallOfTheNightwingCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CGruulCharmCard::CGruulCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gruul Charm"), CardType::Instant, nID)
{
	{
		//Creatures without flying can't block this turn.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Falter Effect"), 2916, 1, FALSE, ZoneId::_Effects));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Creatures without flying can't block this turn. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Gain control of all permanents you own.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGruulCharmCard::BeforeResolution));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Gain control of all permanents you own. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Gruul Charm deals 3 damage to each creature with flying.
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT GREEN_MANA_TEXT,
				Life(-3),
				new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Gruul Charm deals 3 damage to each creature with flying. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CGruulCharmCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
		{
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard->GetOwner() == pController)
					pCard->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//
CHandsOfBindingCard::CHandsOfBindingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hands of Binding"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHandsOfBindingCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CHandsOfBindingCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHandsOfBindingCard::OnZoneChanged))
{
	{		
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,
				TRUE, FALSE,
				new AnyCreatureComparer));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

		cpSpell->GetTargetModifier().CCardModifiers::Add(new CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE));
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CHandsOfBindingCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHandsOfBindingCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHandsOfBindingCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHandsOfBindingCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CHandsOfBindingCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CHandsOfBindingCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CHandsOfBindingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CHandsOfBindingCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CHandsOfBindingCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CStolenIdentityCard::CStolenIdentityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stolen Identity"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CStolenIdentityCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CStolenIdentityCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CStolenIdentityCard::OnZoneChanged))
{
	{		
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false), FALSE));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CStolenIdentityCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStolenIdentityCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStolenIdentityCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CStolenIdentityCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CStolenIdentityCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CStolenIdentityCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CStolenIdentityCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), this);
	pModifier.ApplyTo(pAbilityAction->GetAssociatedCard());

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CStolenIdentityCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CStolenIdentityCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CUndercityPlagueCard::CUndercityPlagueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Undercity Plague"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CUndercityPlagueCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CUndercityPlagueCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CUndercityPlagueCard::OnZoneChanged))
{
	{		
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CUndercityPlagueCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUndercityPlagueCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUndercityPlagueCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CUndercityPlagueCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CUndercityPlagueCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CUndercityPlagueCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CUndercityPlagueCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	CPlayer* pTarget = pAbilityAction->GetAssociatedPlayer();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pTarget);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier2.ApplyTo(pTarget);
	
	CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier3.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier3.ApplyTo(pTarget);

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CUndercityPlagueCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CUndercityPlagueCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CWhisperingMadnessCard::CWhisperingMadnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whispering Madness"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CWhisperingMadnessCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CWhisperingMadnessCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWhisperingMadnessCard::OnZoneChanged))
{
	{		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CWhisperingMadnessCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWhisperingMadnessCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWhisperingMadnessCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CWhisperingMadnessCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CWhisperingMadnessCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CWhisperingMadnessCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CWhisperingMadnessCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	int n = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		int nHandSize = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Hand)->GetSize();

		if (nHandSize > n) n = nHandSize;
	}

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.SetReorderInformation(true, ZoneId::Graveyard, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, MoveType::Discard);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
	}

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CWhisperingMadnessCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CWhisperingMadnessCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
COgreSlumlordCard::COgreSlumlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Slumlord"), CardType::Creature, CREATURE_TYPE2(Ogre, Rogue), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetCreateTokenOption(TRUE, _T("Rat B"), 2968, 1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Rat), false),	
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGlaringSpotlightCard::CGlaringSpotlightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glaring Spotlight"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::IgnoreHexproofOnCreatures));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("3"),
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddSacrificeCost();

		cpAbility->SetAffectControllerCardsOnly();

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetOneTurnOnly(TRUE);
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Unblockable);

		CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(pModifier1));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

		CCardKeywordModifier* pModifier3 = new CCardKeywordModifier;
		pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		pModifier3->GetModifier().SetToAdd(CardKeyword::Hexproof);

		CZoneCardModifier* pModifier4 = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(pModifier3));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier4);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlaughterhornCard::CSlaughterhornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slaughterhorn"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+3), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMercilessEvictionCard::CMercilessEvictionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Merciless Eviction"), CardType::Sorcery, nID)
{
	{
		//Exile all artifacts.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Exile all artifacts. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile all creatures.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Exile all creatures. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile all enchantments.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Exile all enchantments. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Exile all planeswalkers.
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Planeswalker, false),
				ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Exile all planeswalkers. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CAEtherizeCard::CAEtherizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("AEtherize"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT,
			new AttackingCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFirefistStrikerCard::CFirefistStrikerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firefist Striker"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))

{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFirefistStrikerCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CFirefistStrikerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CGruulRagebeastCard::CGruulRagebeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gruul Ragebeast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGruulRagebeastCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGruulRagebeastCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CGruulRagebeastCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CGruulRagebeastCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pCard);
	CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pAction->GetAssociatedCard());

	CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
	if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));

	return true;
}

//____________________________________________________________________________
//
COrzhovCharmCard::COrzhovCharmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Orzhov Charm"), CardType::Instant, nID)
{
	{
		//Return target creature you control and all Auras you control attached to it to their owner's hand.
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant, 
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovCharmCard::BeforeResolution1));

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Return target creature you control and all Auras you control attached to it to their owner's hand. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target creature and you lose life equal to its toughness.
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrzhovCharmCard::BeforeResolution2));

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Destroy target creature and you lose life equal to its toughness. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Return target creature card with converted mana cost 1 or less from your graveyard to the battlefield.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(2));
		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->SetAbilityName(_T("Mode 3"));
		cpSpell->SetAbilityText(_T("Return target creature card with converted mana cost 1 or less from your graveyard to the battlefield. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

bool COrzhovCharmCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CCountedCardContainer pAuras;

	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetEnchantedOn() == pTarget)
			pAuras.AddCard(pCard, CardPlacement::Top);
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pController);

	pModifier.ApplyTo(pTarget);

	for (int i = 0; i < pAuras.GetSize(); ++i)
		pModifier.ApplyTo(pAuras.GetAt(i));

	return true;
}

bool COrzhovCharmCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	int nToughness = GET_INTEGER(pTarget->GetLastKnownToughness());

	CMoveCardModifier pModifier1 = CMoveCardModifier (ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	CLifeModifier pModifier2 = CLifeModifier(Life(-nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CDuskmantleSeerCard::CDuskmantleSeerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Duskmantle Seer"), CardType::Creature, CREATURE_TYPE2(Vampire, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDuskmantleSeerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDuskmantleSeerCard::BeforeResolution(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

		if (pLibrary->GetSize() > 0)
		{
			CCard* pCard = pLibrary->GetTopCard();

			int nCMC = 0;
			
			if (!pCard->GetCardType().IsLand())
				nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
			
			CZoneModifier pModifier1 = CZoneModifier(GetGame(),
				ZoneId::Library, 1,
				CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier1.ApplyTo(pPlayer);

			CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier2.ApplyTo(pPlayer);

			CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pPlayer);
			pModifier3.ApplyTo(pCard);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CSparkTrooperCard::CSparkTrooperCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Spark Trooper"), CardType::Creature, CREATURE_TYPE2(Elemental, Soldier), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMimingSlimeCard::CMimingSlimeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Miming Slime"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMimingSlimeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CMimingSlimeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	bool bFirst = true;
	Power n = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;

			if (bFirst)
			{
				n = pCreature->GetPower();
				bFirst = false;
			}
			else if (pCreature->GetPower() > n)
				n = pCreature->GetPower();
		}
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Ooze D"), 2863));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2863); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Ooze D")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(n);
		pCreature->SetPrintedToughness(Life(n));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CVizkopaGuildmageCard::CVizkopaGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vizkopa Guildmage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Vizkopa Guildmage Effect"), 61001, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTruefirePaladinCard::CTruefirePaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Truefire Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRealmwrightCard::CRealmwrightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Realmwright"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CRealmwrightCard::OnSelectionDone))
	, nSelection(0)
{
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility1a(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Plains, CardType::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Realmwright add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility1b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRealmwrightCard::CreateAbility1)));	


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, WHITE_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility2a(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Island, CardType::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Realmwright add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility2b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRealmwrightCard::CreateAbility2)));	


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLUE_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility3a(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Swamp, CardType::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Realmwright add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility3b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRealmwrightCard::CreateAbility1)));	


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLACK_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility4a(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Mountain, CardType::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Realmwright add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility4b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRealmwrightCard::CreateAbility4)));	


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, RED_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility5a(CCard* pCard)
{
	counted_ptr<CCardTypeEnchantment> cpAbility(
		::CreateObject<CCardTypeEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),
			CardType::Forest, CardType::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Realmwright add"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CRealmwrightCard::CreateAdditionAbility5b(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Land, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRealmwrightCard::CreateAbility5)));	


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRealmwrightCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, GREEN_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

void CRealmwrightCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		nSelection = 0;

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry entry;
			entry.dwContext = 1;
			entry.strText.Format(_T("choose %s"), _T("Plains"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 2;
			entry.strText.Format(_T("choose %s"), _T("Island"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 3;
			entry.strText.Format(_T("choose %s"), _T("Swamp"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 4;
			entry.strText.Format(_T("choose %s"), _T("Mountain"));
			entries.push_back(entry);
		}
		{
			SelectionEntry entry;
			entry.dwContext = 5;
			entry.strText.Format(_T("choose %s"), _T("Forest"));
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		if (nSelection > 0)
		{
			CCardAbilityModifier pModifier1;
			CCardAbilityModifier pModifier2;

			if (nSelection == 1)
			{
				pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility1a));
				pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility1b));
			}
			if (nSelection == 2)
			{
				pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility2a));
				pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility2b));
			}
			if (nSelection == 1)
			{
				pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility3a));
				pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility3b));
			}
			if (nSelection == 1)
			{
				pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility4a));
				pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility4b));
			}
			if (nSelection == 1)
			{
				pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility5a));
				pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
						&CRealmwrightCard::CreateAdditionAbility5b));
			}

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
}

void CRealmwrightCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 1)
			{
				nSelection = 1;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility1a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility1b));

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
			if (nSelectedIndex == 2)
			{
				nSelection = 2;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility2a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility2b));

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
			if (nSelectedIndex == 3)
			{
				nSelection = 3;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility3a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility3b));

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
			if (nSelectedIndex == 4)
			{
				nSelection = 4;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility4a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility4b));

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
			if (nSelectedIndex == 5)
			{
				nSelection = 5;

				CCardAbilityModifier pModifier1 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility5a));
				CCardAbilityModifier pModifier2 = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CRealmwrightCard::CreateAdditionAbility5b));

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
CMysticGenesisCard::CMysticGenesisCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mystic Genesis"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMysticGenesisCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CMysticGenesisCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Ooze D"), 2863));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2863); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Ooze D")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(nCMC);
		pCreature->SetPrintedToughness(Life(nCMC));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return;
}

//____________________________________________________________________________
//
CAdaptiveSnapjawCard::CAdaptiveSnapjawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Adaptive Snapjaw"), CardType::Creature, CREATURE_TYPE2(Lizard, Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(6), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAdaptiveSnapjawCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAdaptiveSnapjawCard::BeforeResolution));

	cpAbility->SetAbilityName(_T("Evolve ability"));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAdaptiveSnapjawCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CAdaptiveSnapjawCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CAerialManeuverCard::CAerialManeuverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Aerial Maneuver"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Flying | CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CAgoraphobiaCard::CAgoraphobiaCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Agoraphobia"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(-5), Life(-0))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlphaAuthorityCard::CAlphaAuthorityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Alpha Authority"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::CantBeBlockedByMultiple)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
}

//____________________________________________________________________________
//
CAngelicEdictCard::CAngelicEdictCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Angelic Edict"), CardType::Sorcery, nID,
		_T("4") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CArrowsOfJusticeCard::CArrowsOfJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Arrows of Justice"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				false,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				false,
				Life(-4), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBalustradeSpyCard::CBalustradeSpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Balustrade Spy"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBalustradeSpyCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CBalustradeSpyCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	int landcount = 0;
	int n = 0;

	for (int i = 0; i < pLibrary->GetSize(); ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - 1 - i);
		if (pCard->GetCardType().IsLand())
			landcount = landcount +1;
		if (landcount == 1) { n = i+1; landcount = landcount +1;}
	}

	if (n == 0) n = pLibrary->GetSize();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CBaneAlleyBrokerCard::CBaneAlleyBrokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bane Alley Broker"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBaneAlleyBrokerCard::OnZoneChanged))
	, m_CardSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CBaneAlleyBrokerCard::OnCardSelected1))
	, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CBaneAlleyBrokerCard::OnCardSelected2))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::_ExileFaceDown));

		cpAbility->SetAbilityText(_T("Draw a card, then exile a card from your hand face down. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBaneAlleyBrokerCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Hand));

		cpAbility->SetAbilityText(_T("Return a card exiled with Bane Alley Broker to its owner's hand. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBaneAlleyBrokerCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CBaneAlleyBrokerCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CBaneAlleyBrokerCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetAbilityText(_T("Look at cards exiled with Bane Alley Broker. Activates"));
		cpAbility->SetMaxTurnUsageCount(3);		// to prevent AI's infinite loop
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBaneAlleyBrokerCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBaneAlleyBrokerCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CBaneAlleyBrokerCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CBaneAlleyBrokerCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier.ApplyTo(pController);

	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Exile %s face down"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection1.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

bool CBaneAlleyBrokerCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	if (pExiled.GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pExiled.GetSize(); ++i)
		{
			CCard* pCard = pExiled.GetAt(i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;

			if (pCard->GetOwner() == pController)
				entry.strText.Format(_T("Return %s to your hand"),
					pCard->GetCardName(TRUE));
			else
				entry.strText.Format(_T("Return %s to %s's hand"),
					pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());

			entries.push_back(entry);
		}
		m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

bool CBaneAlleyBrokerCard::BeforeResolution3(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	if (pExiled.GetSize() == 0)
		if (!m_pGame->IsThinking() && !pController->IsComputer())
		{

			CString strMessage;
			strMessage.Format(_T("%s isn't holding any cards"), GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

	for (int i = 0; i < pExiled.GetSize(); ++i)
	{
		CCard* pCard = pExiled.GetAt(i);

		if (!m_pGame->IsThinking() && !pController->IsComputer())
		{

			CString strMessage;
			if (pCard->GetOwner() == pController)
				strMessage.Format(_T("%s is holding %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));
			else
				strMessage.Format(_T("%s is holding %s, owned by %s"), GetCardName(TRUE), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			pController->MemorizeCard(pCard);
		}
	}

	return true;
}

void CBaneAlleyBrokerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

void CBaneAlleyBrokerCard::OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pSelectionPlayer);
			pExiled.AddCard(pCard, CardPlacement::Top);

			pModifier.ApplyTo(pCard);
				
			return;
		}
}

void CBaneAlleyBrokerCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
			pExiled.RemoveCard(pCard);

			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CBasilicaScreecherCard::CBasilicaScreecherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Basilica Screecher"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
		DamageType::NotDealingDamage)));

	cpAbility->SetAbilityName(_T("Extort ability"));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBioshiftCard::CBioshiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bioshift"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBioshiftCard::OnNumberSelected))
{
	{
		// hybrid mana cost
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T(""), TRUE));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBioshiftCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T(""), TRUE));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBioshiftCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T(""), TRUE));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting2()->SetIncludeControllerCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBioshiftCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T(""), TRUE));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBioshiftCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CBioshiftCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	if (!pTarget2->GetCardKeyword()->HasCantGetCounters())
	{
		int nCounters = pTarget1->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

		if (nCounters > 0)
		{
			std::vector<SelectionEntry> entries;
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = 0;
				selectionEntry.strText.Format(_T("Don't move counters"));

				entries.push_back(selectionEntry);
			}
			for (int i = 1; i <= nCounters; ++i)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)i;

				if (i == 1)
					entry.strText.Format(_T("Move %d +1/+1 counter from %s to %s"),
						i, pTarget1->GetCardName(TRUE), pTarget2->GetCardName(TRUE));
				else
					entry.strText.Format(_T("Move %d +1/+1 counters from %s to %s"),
						i, pTarget1->GetCardName(TRUE), pTarget2->GetCardName(TRUE));

				entries.push_back(entry);
			}
			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pTarget1, (DWORD)pTarget2);
		}
	}
	return true;
}

void CBioshiftCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't move counters"), pSelectionPlayer->GetPlayerName());
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
				CCard* pTarget1 = (CCard*)dwContext1;
				CCard* pTarget2 = (CCard*)dwContext2;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s moves %d +1/+1 counter from %s to %s"), pSelectionPlayer->GetPlayerName(), nValue, pTarget1->GetCardName(TRUE), pTarget2->GetCardName(TRUE));
					else
						strMessage.Format(_T("%s moves %d +1/+1 counters from %s to %s"), pSelectionPlayer->GetPlayerName(), nValue, pTarget1->GetCardName(TRUE), pTarget2->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -nValue);
				CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), +nValue);

				pModifier1.ApplyTo(pTarget1);
				pModifier2.ApplyTo(pTarget2);

				return;
			}
		}
}

//____________________________________________________________________________
//
CBomberCorpsCard::CBomberCorpsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bomber Corps"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))

{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBomberCorpsCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);	

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CBomberCorpsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CBorosReckonerCard::CBorosReckonerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boros Reckoner"), CardType::Creature, CREATURE_TYPE2(Minotaur, Wizard), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBorosReckonerCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBorosReckonerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CBurstOfStrengthCard::CBurstOfStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Burst of Strength"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

//____________________________________________________________________________
//
CCartelAristocratCard::CCartelAristocratCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cartel Aristocrat"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCartelAristocratCard::OnColorSelected))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetAbilityText(_T("Gain protection from color of your choice. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCartelAristocratCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCartelAristocratCard::BeforeResolution(CAbilityAction* pAction)
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

void CCartelAristocratCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CClingingAnemonesCard::CClingingAnemonesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clinging Anemones"), CardType::Creature, CREATURE_TYPE(Jellyfish), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClingingAnemonesCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CClingingAnemonesCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CClingingAnemonesCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CClingingAnemonesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CCoercedConfessionCard::CCoercedConfessionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coerced Confession"), CardType::Sorcery, nID)
{
	{
		// hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCoercedConfessionCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, true));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCoercedConfessionCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CCoercedConfessionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

	CCountedCardContainer pCreatures;

	int n = pLibrary->GetSize();

	if (n > 4) n = 4;

	if (n > 0)
	{
		for (int i = 1; i <= n; ++i)
		{
			CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);
			if (pCard->GetCardType().IsCreature())
				pCreatures.AddCard(pCard, CardPlacement::Top);
		}

		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier1.SetReorderInformation(true, ZoneId::Graveyard);
		
		pModifier1.ApplyTo(pTarget);

		int nDraw = 0;

		for (int i = 0; i < pCreatures.GetSize(); ++i)
			if (pCreatures.GetAt(i)->IsInGraveyard())
				nDraw += 1;

		if (nDraw > 0)
		{
			CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(nDraw), MaximumValue(nDraw));
			pModifier2.ApplyTo(pController);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CCorpseBlockadeCard::CCorpseBlockadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Blockade"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(4))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCreatureKeyword()->AddDefender(FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CCourtStreetDenizenCard::CCourtStreetDenizenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Court Street Denizen"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::White, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCracklingPerimeterCard::CCracklingPerimeterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crackling Perimeter"), CardType::GlobalEnchantment, nID, 
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Gate, false));

	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-1),
			FALSE_CARD_COMPARER,
			TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	cpAbility->SetTargetOpponentPlayerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrownedCeratokCard::CCrownedCeratokCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crowned Ceratok"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDaringSkyjekCard::CDaringSkyjekCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daring Skyjek"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDaringSkyjekCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
 	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CDaringSkyjekCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CMasterBiomancerCard::CMasterBiomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Biomancer"), CardType::Creature, CREATURE_TYPE2(Elf, Wizard), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
// No code as the effect is handled in Card.cpp
}

//____________________________________________________________________________
//
CZameckGuildmageCard::CZameckGuildmageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zameck Guildmage"), CardType::Creature, CREATURE_TYPE2(Elf, Wizard), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT));

		CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::Extrap11Counter, 1, TRUE);	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);

		pModifier1->LinkPlayerModifier(pModifier2);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier1);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				GREEN_MANA_TEXT BLUE_MANA_TEXT, 1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CDeathcultRogueCard::CDeathcultRogueCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathcult Rogue"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rogue), false));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDebtorsPulpitCard::CDebtorsPulpitCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Debtor's Pulpit"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("4") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDebtorsPulpitCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDebtorsPulpitCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(pEnchantedCard,
			_T(""),
			TRUE, // tap
			FALSE, // untap
			new AnyCreatureComparer));

	cpEnchantAbility->AddTapCost();
	
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevourFleshCard::CDevourFleshCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devour Flesh"), CardType::Instant, nID)
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDevourFleshCard::OnCardSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevourFleshCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CDevourFleshCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	
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
									
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}

	return true;
}

void CDevourFleshCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
			Life Toughness = pCard->GetLastKnownToughness();
			pModifier1.ApplyTo(pCard);

			if (Toughness > 0)
			{
				CLifeModifier pModifier2 = CLifeModifier(Toughness, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier2.ApplyTo(pSelectionPlayer);
			}
				
			return;
		}
}

//____________________________________________________________________________
//
CDinrovaHorrorCard::CDinrovaHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dinrova Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDinrovaHorrorCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CDinrovaHorrorCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pAction->GetController());
	pModifier1.ApplyTo(pTarget);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("cards")), // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier.ApplyTo(pTarget->GetOwner());

	return true;
}

//____________________________________________________________________________
//
CDiscipleOfTheOldWaysCard::CDiscipleOfTheOldWaysCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Disciple of the Old Ways"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CDutifulThrullCard::CDutifulThrullCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Dutiful Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		WHITE_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CDyingWishCard::CDyingWishCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Dying Wish"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)		
{
	m_pEnchantSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDyingWishCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDyingWishCard::BeforeResolution));
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CDyingWishCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pEnchantedCard);
	if (!pCreature) return false;

	triggerContext.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());
	return true;
}

bool CDyingWishCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nPower = pAction->GetTriggerContext().nValue1;

	if (nPower > 0)
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(-nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		CLifeModifier pModifier2 = CLifeModifier(Life(+nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	
		pModifier1.ApplyTo(pTarget);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CExecutionersSwingCard::CExecutionersSwingCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Executioner's Swing"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT BLACK_MANA_TEXT,
		Power(-5), Life(-5),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardFlagComparer(CardFlag::_DealtDamage, false));
}

//____________________________________________________________________________
//
CForcedAdaptationCard::CForcedAdaptationCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Forced Adaptation"), CardType::EnchantCreature, nID,
		GREEN_MANA_TEXT,
		new AnyCreatureComparer)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifySingleCard);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CForcedAdaptationCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));

	AddAbility(cpAbility.GetPointer());
}

bool CForcedAdaptationCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;

	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

//____________________________________________________________________________
//
CFortressCyclopsCard::CFortressCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fortress Cyclops"), CardType::Creature, CREATURE_TYPE2(Cyclops, Soldier), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFoundryStreetDenizenCard::CFoundryStreetDenizenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Foundry Street Denizen"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Red, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFrilledOculusCard::CFrilledOculusCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Frilled Oculus"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3),
		_T("1") GREEN_MANA_TEXT, Power(+2), Life(+2))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CFuriousResistanceCard::CFuriousResistanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Furious Resistance"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			Power(+3), Life(+0), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGiftOfOrzhovaCard::CGiftOfOrzhovaCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Gift of Orzhova"), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Flying)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);

	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Enchantment,
				_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false));		

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Enchantment,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer, false));		

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGreensideWatcherCard::CGreensideWatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greenside Watcher"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::Gate, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGrislySpectacleCard::CGrislySpectacleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grisly Spectacle"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrislySpectacleCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGrislySpectacleCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	int nPower = GET_INTEGER(pTarget->GetLastKnownPower());
	CPlayer* pTargetController = pTarget->GetController();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	pModifier1.ApplyTo(pTarget);

	if (nPower > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nPower, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
		pModifier.ApplyTo(pTargetController);
	}

	return true;
}

//____________________________________________________________________________
//
CGuardianOfTheGatelessCard::CGuardianOfTheGatelessCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Guardian of the Gateless"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	SetMaxBlockingCount(SpecialNumber::Any);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGuardianOfTheGatelessCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGuardianOfTheGatelessCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AttackingThisCreatureComparer(this));

	int nValue = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nValue += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	
	if (nValue > 0)
	{
		CPowerModifier pModifier1 = CPowerModifier(Power(+nValue));
		CLifeModifier pModifier2 = CLifeModifier(Life(+nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(this);
		pModifier2.ApplyTo(this);
	}

	return true;
}

//____________________________________________________________________________
//
CGutterSkulkCard::CGutterSkulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gutter Skulk"), CardType::Creature, CREATURE_TYPE2(Zombie, Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CHindervinesCard::CHindervinesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hindervines"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage));

	cpSpell->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::equal_to<int>>(_T("+1/+1"), 0));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHomingLightningCard::CHomingLightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Homing Lightning"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHomingLightningCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CHomingLightningCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardNameComparer(pTarget->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	CLifeModifier* pModifier1 = new CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier1));
	
	pModifier1->ApplyTo(pTarget);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CHorrorOfTheDimCard::CHorrorOfTheDimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horror of the Dim"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHydroformCard::CHydroformCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hydroform"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHydroformCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHydroformCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Elemental AM"), 64059, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CIllnessInTheRanksCard::CIllnessInTheRanksCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Illness in the Ranks"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(-1), Life(-1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImmortalServitudeCard::CImmortalServitudeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Immortal Servitude"), CardType::Sorcery, nID)
{
	{
		// hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImmortalServitudeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImmortalServitudeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImmortalServitudeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CImmortalServitudeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CImmortalServitudeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nValue));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)));

	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CIvyLaneDenizenCard::CIvyLaneDenizenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ivy Lane Denizen"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Green, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeymasterRogueCard::CKeymasterRogueCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Keymaster Rogue"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKillingGlareCard::CKillingGlareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Killing Glare"), CardType::Instant, nID)
{
	counted_ptr<CTargetExtraPowerMoveCardSpell> cpSpell(::CreateObject<CTargetExtraPowerMoveCardSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT, new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, true));		

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
			
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKingpinsPetCard::CKingpinsPetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kingpin's Pet"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
		DamageType::NotDealingDamage)));

	cpAbility->SetAbilityName(_T("Extort ability"));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightOfObligationCard::CKnightOfObligationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of Obligation"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
		cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetAbilityName(_T("Extort ability"));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKnightWatchCard::CKnightWatchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Knight Watch"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT,
			_T("Knight D"), 2967,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLastThoughtsCard::CLastThoughtsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last Thoughts"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CLastThoughtsCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CLastThoughtsCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLastThoughtsCard::OnZoneChanged))
{
	{		
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT, 1));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CLastThoughtsCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLastThoughtsCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLastThoughtsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CLastThoughtsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CLastThoughtsCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CLastThoughtsCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CLastThoughtsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CLastThoughtsCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CLastThoughtsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMadcapSkillsCard::CMadcapSkillsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Madcap Skills"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+3), Life(+0), CreatureKeyword::CantBeBlockedBy1)
{
}

//____________________________________________________________________________
//
CMartialGloryCard::CMartialGloryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Martial Glory"), CardType::Instant, nID)
{
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer, false,
				new AnyCreatureComparer, false,
				_T("")));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMartialGloryCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
}

bool CMartialGloryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CPowerModifier* pModifier1 = new CPowerModifier(Power(+3));
	if (pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()->GetCardType().IsCreature())
			pModifier1->ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CLifeModifier* pModifier2 = new CLifeModifier(Life(+3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	if (pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()->GetCardType().IsCreature())
			pModifier2->ApplyTo((CCreatureCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CMassiveRaidCard::CMassiveRaidCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Massive Raid"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Battlefield, TRUE,
			new AnyCreatureComparer, PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMentalVaporsCard::CMentalVaporsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mental Vapors"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMentalVaporsCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CMentalVaporsCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMentalVaporsCard::OnZoneChanged))
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CMentalVaporsCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMentalVaporsCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMentalVaporsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMentalVaporsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CMentalVaporsCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CMentalVaporsCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CMentalVaporsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CMentalVaporsCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CMentalVaporsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMerfolkOfTheDepthsCard::CMerfolkOfTheDepthsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk of the Depths"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CMetropolisSpriteCard::CMetropolisSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Metropolis Sprite"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this, BLUE_MANA_TEXT, Power(+1), Life(-1)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMidnightRecoveryCard::CMidnightRecoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Midnight Recovery"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CMidnightRecoveryCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CMidnightRecoveryCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMidnightRecoveryCard::OnZoneChanged))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard,
				ZoneId::Hand,
				true, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CMidnightRecoveryCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMidnightRecoveryCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMidnightRecoveryCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMidnightRecoveryCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CMidnightRecoveryCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CMidnightRecoveryCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CMidnightRecoveryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CMidnightRecoveryCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CMidnightRecoveryCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMillennialGargoyleCard::CMillennialGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Millennial Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("4"), Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CMindeyeDrakeCard::CMindeyeDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mindeye Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(5);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindGrindCard::CMindGrindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Grind"), CardType::Sorcery, nID)
{
	counted_ptr<CXLowerLimitSpell> cpSpell(
		::CreateObject<CXLowerLimitSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindGrindCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMindGrindCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
		{
			CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

			int landcount = 0;
			int n = 0;

			for (int i = 0; i < pLibrary->GetSize(); ++i)
			{
				CCard* pOppCard = pLibrary->GetAt(pLibrary->GetSize()-1-i);
				if (pOppCard->GetCardType().IsLand())
					landcount = landcount +1;
				if (landcount == nValue) { n = i+1; landcount = landcount +1;}
			}

			if (n == 0) n=pLibrary->GetSize();

			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
			pModifier.ApplyTo(pPlayer);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CMortusStriderCard::CMortusStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mortus Strider"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
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
CMuggingCard::CMuggingCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Mugging"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetTargetModifier().CCreatureModifiers::push_back(
		new CCreatureKeywordModifier(CreatureKeyword::CantBlock, TRUE));
}

//____________________________________________________________________________
//
CNavSquadCommandosCard::CNavSquadCommandosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nav Squad Commandos"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNavSquadCommandosCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CNavSquadCommandosCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CNimbusSwimmerCard::CNimbusSwimmerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nimbus Swimmer"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CNimbusSwimmerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
}

void CNimbusSwimmerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
COneThousandLashesCard::COneThousandLashesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("One Thousand Lashes"), nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);
	m_pEnchantSpell = m_pChgPwrTghAttrEnchant;

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COneThousandLashesCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool COneThousandLashesCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
COrdruunVeteranCard::COrdruunVeteranCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ordruun Veteran"), CardType::Creature, CREATURE_TYPE2(Minotaur, Soldier), nID,
		_T("2") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(1))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdruunVeteranCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool COrdruunVeteranCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CParanoidDelusionsCard::CParanoidDelusionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Paranoid Delusions"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CParanoidDelusionsCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CParanoidDelusionsCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CParanoidDelusionsCard::OnZoneChanged))
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT BLACK_MANA_TEXT,
				3));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CParanoidDelusionsCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParanoidDelusionsCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParanoidDelusionsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CParanoidDelusionsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CParanoidDelusionsCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CParanoidDelusionsCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CParanoidDelusionsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CParanoidDelusionsCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CParanoidDelusionsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CPredatorsRapportCard::CPredatorsRapportCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Predator's Rapport"), CardType::Instant, nID)
{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPredatorsRapportCard::BeforeResolution));
				
		AddSpell(cpSpell.GetPointer());
}

bool CPredatorsRapportCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	int nValue = GET_INTEGER(pTarget->GetLastKnownPower()) + GET_INTEGER(pTarget->GetLastKnownToughness());

	if (nValue > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(+nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CPrimalVisitationCard::CPrimalVisitationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Primal Visitation"), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+3), CreatureKeyword::Haste)
{
}

//____________________________________________________________________________
//
CPsychicStrikeCard::CPsychicStrikeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Psychic Strike"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPsychicStrikeCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CPsychicStrikeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer = pAbilityAction->GetAssociatedCard()->GetController();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 2, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.SetReorderInformation(true, ZoneId::Graveyard);
		
	pModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CPurgeTheProfaneCard::CPurgeTheProfaneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Purge the Profane"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPurgeTheProfaneCard::OnResolutionCompleted))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPurgeTheProfaneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();

	CLifeModifier pModifier = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);
}

//____________________________________________________________________________
//
CRazortipWhipCard::CRazortipWhipCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Razortip Whip"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			FALSE_CARD_COMPARER, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiotGearCard::CRiotGearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Riot Gear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRipscalePredatorCard::CRipscalePredatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ripscale Predator"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
}

//____________________________________________________________________________
//
CRuinationWurmCard::CRuinationWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ruination Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
{
}

//____________________________________________________________________________
//
CRustScarabCard::CRustScarabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rust Scarab"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSagesRowDenizenCard::CSagesRowDenizenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sage's Row Denizen"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Blue, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSapphireDrakeCard::CSapphireDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sapphire Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScabClanChargerCard::CScabClanChargerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scab-Clan Charger"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+2), Life(+4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CScatterArcCard::CScatterArcCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Scatter Arc"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant, 
		new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)))
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CScorchwalkerCard::CScorchwalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scorchwalker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(1))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			Power(+5), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSereneRemembranceCard::CSereneRemembranceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Serene Remembrance"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT,
				new TrueCardComparer, false));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetSingleSourceZone(TRUE);
		cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
		cpSpell->GetTargeting()->SetSubjectCount(1, 3);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSereneRemembranceCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSereneRemembranceCard::BeforeResolution0));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CSereneRemembranceCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CCountedCardContainer pTargets;
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	pTargetAction->GetTargetGroup().GetCardSubjects(pTargets);

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Stack, ZoneId::Library, TRUE, MoveType::Others, pController);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others, pController);

	pModifier1.ApplyTo(this);

	for (int i = 0; i < pTargets.GetSize(); ++i)
		pModifier2.ApplyTo(pTargets.GetAt(i));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		CCardFilter m_OwnerFilter;
		m_OwnerFilter.SetComparer(new CardOwnerComparer(pPlayer));

		if ((pPlayer == this->GetOwner()) || (m_OwnerFilter.CountIncluded(pTargets) > 0))
			pPlayer->GetZoneById(ZoneId::Library)->Shuffle();
	}

	return true;
}

bool CSereneRemembranceCard::BeforeResolution0(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Library, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(this);

	GetOwner()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CShadowAlleyDenizenCard::CShadowAlleyDenizenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shadow Alley Denizen"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Black, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShadowSliceCard::CShadowSliceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shadow Slice"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CShadowSliceCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CShadowSliceCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CShadowSliceCard::OnZoneChanged))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER,
				true,
				Life(-3), PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CShadowSliceCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShadowSliceCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShadowSliceCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CShadowSliceCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CShadowSliceCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CShadowSliceCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CShadowSliceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CShadowSliceCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CShadowSliceCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CShatteringBlowCard::CShatteringBlowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shattering Blow"), CardType::Instant, nID)
{
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CShieldedPassageCard::CShieldedPassageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shielded Passage"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(PreventionType::PreventAllDamage), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSimicManipulatorCard::CSimicManipulatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simic Manipulator"), CardType::Creature, CREATURE_TYPE2(Mutant, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSimicManipulatorCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSimicManipulatorCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSimicManipulatorSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSimicManipulatorSpell>>(this,
				_T(""), 
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSimicManipulatorCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CSimicManipulatorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

//____________________________________________________________________________
//
CSkinbrandGoblinCard::CSkinbrandGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skinbrand Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	//Bloodrush ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+2), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->SetAbilityText(_T("Bloodrush - "));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSkyblinderStaffCard::CSkyblinderStaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skyblinder Staff"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Unblockable, (DWORD)CCardFilter::GetFilter(_T("non-flying creatures")))); // unblockable except for non-flying creatures
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkygamesCard::CSkygamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skygames"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSkygamesCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSkygamesCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetAbilityType((cpEnchantAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlateStreetRuffianCard::CSlateStreetRuffianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slate Street Ruffian"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
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
CSmogElementalCard::CSmogElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Smog Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(-1), Life(-1)));

	cpAbility->SetAffectOpponentCardsOnly();

	cpAbility->SetListenToKeyword();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpellRuptureCard::CSpellRuptureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spell Rupture"), CardType::Instant, nID)
{
	{
		counted_ptr<CSpellRuptureAbility> cpSpell(
		::CreateObject<CSpellRuptureAbility>(this, _T("1") BLUE_MANA_TEXT));

		cpSpell->GetDenialCost().SetManaCost(_T("9999"));
		cpSpell->SetCanBeDenied();
		cpSpell->SetSpecialDenialCost();

		AddSpell(cpSpell.GetPointer());
	}
}

CSpellRuptureCard::CSpellRuptureAbility::CSpellRuptureAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Instant, strManaCost,
		new TrueCardComparer)
{	
}

CCost CSpellRuptureCard::CSpellRuptureAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	int nMaxPower = 0;
	CZone* pBattlefield = GetCard()->GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

			if (nPower > nMaxPower) nMaxPower = nPower;
		}
	}
	
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, nMaxPower);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}

//____________________________________________________________________________
//
CFathomMageCard::CFathomMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fathom Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFathomMageCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFathomMageCard::BeforeResolution));

		cpAbility->SetAbilityName(_T("Evolve ability"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFathomMageCard::SetTriggerContextAux1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFathomMageCard::SetTriggerContextAux2));
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(COUNTER_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
}

bool CFathomMageCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CFathomMageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = pAction->GetTriggerContext().m_pCard;

	if (!pCard->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	
	return (pCreature->GetLastKnownPower() > this->GetPower()) || (pCreature->GetLastKnownToughness() > this->GetLife());
}

bool CFathomMageCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	int nValue = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
	if (nValue > 0)
	{
		CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, COUNTER_TRIGGER_ID);

		for (int i = 1; i <= nValue; ++i)
			pModifier.ApplyTo(this);
	}

	return false;
}

bool CFathomMageCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard != this) return false;
	if ((CString)name != _T("+1/+1")) return false;
	if (n_value <= old) return false;

	CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, COUNTER_TRIGGER_ID);

	for (int i = 1; i <= n_value - old; ++i)
		pModifier.ApplyTo(this);
	
	return false;
}

//____________________________________________________________________________
//
CSpireTracerCard::CSpireTracerCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Spire Tracer"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		&m_CardFilter) //can't be blocked except by "this"

	, m_CardFilter(_T("a creature with flying or reach"), _T("creatures with flying or reach"), new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Reach, false))
{
}

//____________________________________________________________________________
//
CLuminatePrimordialCard::CLuminatePrimordialCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Luminate Primordial"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(7))
{
	// Will need an update if/when we get multiplayer.
	GetCreatureKeyword()->AddVigilance(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLuminatePrimordialCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CLuminatePrimordialCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetController = pTarget->GetController();
	
	Power nPower = pTarget->GetLastKnownPower();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId:: Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
	pModifier1.ApplyTo(pTarget);

	if (nPower > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pTargetController);
	}

	return true;
}

//____________________________________________________________________________
//
CMoltenPrimordialCard::CMoltenPrimordialCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Molten Primordial"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(4))
{
	// Will need an update if/when we get multiplayer.
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoltenPrimordialCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CMoltenPrimordialCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1->ApplyTo(pTarget);
	pModifier2->ApplyTo(pTarget);

	CCardOrientationModifier pModifier3 = CCardOrientationModifier(0);

	pModifier3.ApplyTo(pTarget);

	CCreatureKeywordModifier pModifier4;
	pModifier4.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier4.GetModifier().SetOneTurnOnly(TRUE);

	pModifier4.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CSepulchralPrimordialCard::CSepulchralPrimordialCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sepulchral Primordial"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	// Will need an update if/when we get multiplayer.
	GetCreatureKeyword()->AddIntimidate(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSepulchralPrimordialCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSepulchralPrimordialCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	pTarget->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CSylvanPrimordialCard::CSylvanPrimordialCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Primordial"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(8))
{
	// Will need an update if/when we get multiplayer.
	GetCreatureKeyword()->AddReach(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSylvanPrimordialCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSylvanPrimordialCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	CZone* pBattlefield = pTarget->GetController()->GetZoneById(ZoneId::Battlefield);
	
	int nPrevious = pBattlefield->GetSize();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	pModifier1.ApplyTo(pTarget);

	int nNext = pBattlefield->GetSize();

	if (nPrevious > nNext)
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(0), MaximumValue(nPrevious - nNext), pController, ZoneId::Library,
			CCardFilter::GetFilter(_T("Forests")), ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE);
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CStructuralCollapseCard::CStructuralCollapseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Structural Collapse"), CardType::Sorcery, nID)
		, m_CardSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CStructuralCollapseCard::OnCardSelected1))
		, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CStructuralCollapseCard::OnCardSelected2))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStructuralCollapseCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CStructuralCollapseCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Land, false));

	pSelected.RemoveAll();

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsArtifact() || pCard->GetCardType().IsLand())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection1.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	}

	return true;
}

void CStructuralCollapseCard::OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pSelectedCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pSelectedCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			bool bArtifact = pSelectedCard->GetCardType().IsArtifact();
			bool bLand = pSelectedCard->GetCardType().IsLand();

			pSelected.AddCard(pSelectedCard, CardPlacement::Top);

			CCardFilter m_CardFilter;
			m_CardFilter.AddNegateComparer(new SpecificCardComparer(pSelectedCard));

			if (bArtifact)
				if (bLand)
					m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Land, false));
				else
					m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
			else
				m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

			CZone* pBattlefield = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);

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
				m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}
				
			return;
		}
}

void CStructuralCollapseCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
			pModifier1.ApplyTo(pSelected.GetAt(0));
			pModifier1.ApplyTo(pCard);

			CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			pModifier2.ApplyTo(pSelectionPlayer);
				
			return;
		}
}

//____________________________________________________________________________
//
CSyndicateEnforcerCard::CSyndicateEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Syndicate Enforcer"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	cpAbility->SetResolutionCost1(BLACK_MANA_TEXT);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
		DamageType::NotDealingDamage)));

	cpAbility->SetAbilityName(_T("Extort ability"));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTotallyLostCard::CTotallyLostCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Totally Lost"), CardType::Instant, nID,
		_T("4") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CTowerDefenseCard::CTowerDefenseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tower Defense"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+5), CreatureKeyword::Reach));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAureliasFuryCard::CAureliasFuryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Aurelia's Fury"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT WHITE_MANA_TEXT,
		new AnyCreatureComparer, TRUE,
		Life(0),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::CreatureTapDamage | DamageType::CreatureSpellOnlyDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT WHITE_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CToweringThunderfistCard::CToweringThunderfistCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Towering Thunderfist"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4),
		WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CUrbisProtectorCard::CUrbisProtectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Urbis Protector"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Angel H"), 2818, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoidwalkCard::CVoidwalkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Voidwalk"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVoidwalkCard::OnResolutionCompleted))
   , m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CVoidwalkCard::OnSelected))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVoidwalkCard::OnZoneChanged))
{
	{		
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCipherCastAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, & CVoidwalkCard::SetTriggerContext));
				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVoidwalkCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVoidwalkCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CVoidwalkCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pEncodeBearer.GetSize() == 0) return false;
	if (pCard != pEncodeBearer.GetAt(0)) return false;
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pToZone->GetZoneId() == ZoneId::_PhasedOut) return false;
	return true;
}

bool CVoidwalkCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pEncodeBearer.RemoveAll();
	return true;
}

bool CVoidwalkCard::SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage)
{
	if ((pEncodeBearer.GetSize() == 0) || (GetZone()->GetZoneId() != ZoneId::Exile)) return false;
	
	return (pCard == pEncodeBearer.GetAt(0));
	//return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CVoidwalkCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (!bResult) return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());

	if (this->GetCardType().IsCopy())
	{
		CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
		pModifier3.ApplyTo(this);
		return;
	}
	std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't encode"));

			entries.push_back(selectionEntry);
		}
		
		for (int i = 0; i < pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize(); ++i)
		{		
			const CCard* pCard = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetAt(i);
			
			if (!pCard->GetCardType().IsCreature()) continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Encode %s on %s"), GetCardName(TRUE), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CVoidwalkCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, FALSE);
				pModifier.ApplyTo(this);
				return;
			
			}
			else
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, FALSE);
				pModifier.ApplyTo(this);

				pEncodeBearer.AddCard((CCard*)it->dwContext, CardPlacement::Top);
			}
			return;
		}
}

void CVoidwalkCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() == ZoneId::Exile)
	{
		pEncodeBearer.RemoveAll();
	}
}

//____________________________________________________________________________
//
CWarmindInfantryCard::CWarmindInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warmind Infantry"), CardType::Creature, CREATURE_TYPE2(Elemental, Soldier), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarmindInfantryCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CWarmindInfantryCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CWastelandViperCard::CWastelandViperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wasteland Viper"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+1), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
/*
CWayOfTheThiefCard::CWayOfTheThiefCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Way of the Thief"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+2), Life(+2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new EnchantedByComparer(this),
			Power(+0), Life(+0)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new AnyCreatureComparer);

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Gate, false));
	cpAbility->SetConditionValue(1);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}
*/
//____________________________________________________________________________
//
CWightOfPrecinctSixCard::CWightOfPrecinctSixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wight of Precinct Six"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildwoodRebirthCard::CWildwoodRebirthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Wildwood Rebirth"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CWojekHalberdiersCard::CWojekHalberdiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wojek Halberdiers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2))

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWojekHalberdiersCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
 	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetAbilityName(_T("Battalion ability"));

	AddAbility(cpAbility.GetPointer());
}

bool CWojekHalberdiersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	int nOtherAttackingCreatures = 0;
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AttackingCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nOtherAttackingCreatures += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (nOtherAttackingCreatures >= 2)
		return true;
	else
		return false;
}

//____________________________________________________________________________
//
CWreckingOgreCard::CWreckingOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wrecking Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
	{
		//Bloodrush ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				Power(+3), Life(+3),
				CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AttackingCreatureComparer));

		cpAbility->SetAbilityText(_T("Bloodrush - "));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CZarichiTigerCard::CZarichiTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zarichi Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Life(+2), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnexpectedResultsCard::CUnexpectedResultsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unexpected Results"), CardType::Sorcery, nID)
{
	counted_ptr<CUnexpectedResultsSpell> cpSpell(
		::CreateObject<CUnexpectedResultsSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT,  CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetToZoneIfSuccess(ZoneId::Stack, TRUE);

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CIncursionSpecialistCard::CIncursionSpecialistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Incursion Specialist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIncursionSpecialistCard::SetTriggerContext));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CIncursionSpecialistCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (GetGame()->GetTurnCastedSpellCount() == 2);
}

//____________________________________________________________________________
//
CAureliaTheWarleaderCard::CAureliaTheWarleaderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aurelia, the Warleader"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
		,bFirstAttack(true)
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAureliaTheWarleaderCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAureliaTheWarleaderCard::BeforeResolution));
		
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAureliaTheWarleaderCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAureliaTheWarleaderCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAureliaTheWarleaderCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked)
{
	if (bFirstAttack)
	{
		bFirstAttack = FALSE;
		return true;
	}
	else
		return false;
}

bool CAureliaTheWarleaderCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));

	pModifier.ApplyTo(pController);

	CFastCombatModifier pModifier1 = CFastCombatModifier(m_pGame);

	pModifier1.ApplyTo(pController);
	
	return true;
}

bool CAureliaTheWarleaderCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	bFirstAttack = TRUE;

	return true;
}
//____________________________________________________________________________
//
CObzedatGhostCouncilCard::CObzedatGhostCouncilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obzedat, Ghost Council"), CardType::_LegendaryCreature, CREATURE_TYPE2(Spirit, Advisor), nID,
		_T("1") WHITE_MANA_TEXT  WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
			, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CObzedatGhostCouncilCard::OnResolutionCompleted))
				   ,m_WhenSelfMoved(this)
{
		m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CObzedatGhostCouncilCard::OnZoneChanged));

		m_CardFlagModifier1 = new CCardFlagModifier;
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		m_CardFlagModifier1->GetModifier().SetOneTurnOnly(TRUE);
		m_CardFlagModifier1->GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1->GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(m_CardFlagModifier1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
		{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CObzedatGhostCouncilCard::SetTriggerContext));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CObzedatGhostCouncilCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) 
{
	if (this->GetZoneId() != ZoneId::Exile || this->GetCardFlag()->GetData(CardFlag::AbilityFlag) != GetSpells().GetAt(0)->GetInstanceID() ) return false;

	if (pToNode->GetGraph()->GetPlayer() == GetController())
	{
		m_CardFlagModifier1->RemoveFrom(this);
	}

	return true;
}

void CObzedatGhostCouncilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureKeywordModifier pModifier4;
	pModifier4.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier4.GetModifier().SetOneTurnOnly(TRUE);

	pModifier4.ApplyTo(this);
}

void CObzedatGhostCouncilCard::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	if ((pFromZone->GetZoneId()  == ZoneId::Exile))
	{
		m_CardFlagModifier1->RemoveFrom(this);
	}
}
//____________________________________________________________________________
//