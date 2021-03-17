#include "stdafx.h"
#include "CardChampionsOfKamigawa.h"

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

		DEFINE_CARD(CAkkiAvalanchersCard);
		DEFINE_CARD(CAkkiCoalflingerCard);
		DEFINE_CARD(CAkkiLavarunnerCard);
		DEFINE_CARD(CAkkiRockspeakerCard);
		DEFINE_CARD(CAkkiUnderminerCard);
		DEFINE_CARD(CAuraOfDominionCard);
		DEFINE_CARD(CAzamiLadyOfScrollsCard);
		DEFINE_CARD(CAzusaLostButSeekingCard);
		DEFINE_CARD(CBattleMadRoninCard);
		DEFINE_CARD(CBenBenAkkiHermitCard);
		DEFINE_CARD(CBlindWithAngerCard);
		DEFINE_CARD(CBloodRitesCard);
		DEFINE_CARD(CBloodSpeakerCard);
		DEFINE_CARD(CBloodthirstyOgreCard);
		DEFINE_CARD(CBrothersYamazakiCard);
		DEFINE_CARD(CBrutalDeceiverCard);
		DEFINE_CARD(CBudokaGardenerCard);
		DEFINE_CARD(CBurrGrafterCard);
		DEFINE_CARD(CBushiTenderfootCard);
		DEFINE_CARD(CCageOfHandsCard);
		DEFINE_CARD(CCallousDeceiverCard);
		DEFINE_CARD(CCallToGloryCard);
		DEFINE_CARD(CCleanfallCard);
		DEFINE_CARD(CCloudcrestLakeCard);
		DEFINE_CARD(CCranialExtractionCard);
		DEFINE_CARD(CCruelDeceiverCard);
		DEFINE_CARD(CCrushingPainCard);
		DEFINE_CARD(CCursedRoninCard);
		DEFINE_CARD(CDanceOfShadowsCard);
		DEFINE_CARD(CDeathcurseOgreCard);
		DEFINE_CARD(CDevotedRetainerCard);
		DEFINE_CARD(CDevouringGreedCard);
		DEFINE_CARD(CDevouringRageCard);
		DEFINE_CARD(CDosanTheFallingLeafCard);
		DEFINE_CARD(CEarthshakerCard);
		DEFINE_CARD(CEerieProcessionCard);
		DEFINE_CARD(CEiganjoCastleCard);
		DEFINE_CARD(CEightAndAHalfTailsCard);
		DEFINE_CARD(CEtherealHazeCard);
		DEFINE_CARD(CEyeOfNowhereCard);
		DEFINE_CARD(CFeralDeceiverCard);
		DEFINE_CARD(CFieldOfRealityCard);
		DEFINE_CARD(CForbiddenOrchardCard);
		DEFINE_CARD(CGaleForceCard);
		DEFINE_CARD(CGeneralsKabutoCard);
		DEFINE_CARD(CGhostlyPrisonCard);
		DEFINE_CARD(CGibberingKamiCard);
		DEFINE_CARD(CGiftsUngivenCard);
		DEFINE_CARD(CGlimpseofNatureCard);
		DEFINE_CARD(CGodoBanditWarlordCard);
		DEFINE_CARD(CGracefulAdeptCard);
		DEFINE_CARD(CGuardianOfSolitudeCard);
		DEFINE_CARD(CGutwrencherOniCard);
		DEFINE_CARD(CHairStrungKotoCard);
		DEFINE_CARD(CHanabiBlastCard);
		DEFINE_CARD(CHanaKamiCard);
		DEFINE_CARD(CHankyuCard);
		DEFINE_CARD(CHarshDeceiverCard);
		DEFINE_CARD(CHeartbeatOfSpringCard);
		DEFINE_CARD(CHearthKamiCard);
		DEFINE_CARD(CHeWhoHungersCard);
		DEFINE_CARD(CHikariTwilightGuardianCard);
		DEFINE_CARD(CHinderCard);
		DEFINE_CARD(CHisokasDefianceCard);
		DEFINE_CARD(CHisokaMinamoSenseiCard);
		DEFINE_CARD(CHoldTheLineCard);
		DEFINE_CARD(CHorizonSeedCard);
		DEFINE_CARD(CHondenofCleansingFireCard);
		DEFINE_CARD(CHondenofInfiniteRageCard);
		DEFINE_CARD(CHondenofLifesWebCard);
		DEFINE_CARD(CHondenofNightsReachCard);
		DEFINE_CARD(CHondenofSeeingWindsCard);
		DEFINE_CARD(CHonorWornShakuCard);
		DEFINE_CARD(CHorobiDeathsWailCard);
		DEFINE_CARD(CHumbleBudokaCard);
		DEFINE_CARD(CHundredTalonKamiCard);
		DEFINE_CARD(CImiStatueCard);
		DEFINE_CARD(CInameDeathAspectCard);
		DEFINE_CARD(CInameLifeAspectCard);
		DEFINE_CARD(CIndomitableWillCard);
		DEFINE_CARD(CInitiateOfBloodCard);
		DEFINE_CARD(CInnocenceKamiCard);
		DEFINE_CARD(CIsamaruHoundOfKondaCard);
		DEFINE_CARD(CJourneyersKiteCard);
		DEFINE_CARD(CJoyousRespiteCard);
		DEFINE_CARD(CJukaiMessengerCard);
		DEFINE_CARD(CJunkyoBellCard);
		DEFINE_CARD(CJushiApprenticeCard);
		DEFINE_CARD(CKabutoMothCard);
		DEFINE_CARD(CKamiOfAncientLawCard);
		DEFINE_CARD(CKamiOfFiresRoarCard);
		DEFINE_CARD(CKamiOfLunacyCard);
		DEFINE_CARD(CKamiOfTheHuntCard);
		DEFINE_CARD(CKamiOfThePaintedRoadCard);
		DEFINE_CARD(CKamiOfThePalaceFieldsCard);
		DEFINE_CARD(CKamiOfTheWaningMoonCard);
		DEFINE_CARD(CKamiOfTwistedReflectionCard);
		DEFINE_CARD(CKashiTribeReaverCard);
		DEFINE_CARD(CKashiTribeWarriorsCard);
		DEFINE_CARD(CKeigatheTideStarCard);
		DEFINE_CARD(CKikiJikiMirrorBreakerCard);
		DEFINE_CARD(CKikuNightsFlowerCard);
		DEFINE_CARD(CKitsuneBlademasterCard);
		DEFINE_CARD(CKitsuneDivinerCard);
		DEFINE_CARD(CKitsuneHealerCard);
		DEFINE_CARD(CKitsuneRiftwalkerCard);
		DEFINE_CARD(CKodamaOfTheNorthTreeCard);
		DEFINE_CARD(CKodamaOfTheSouthTreeCard);
		DEFINE_CARD(CKodamasReachCard);
		DEFINE_CARD(CKondaLordOfEiganjoCard);
		DEFINE_CARD(CKokushoTheEveningStarCard);
		DEFINE_CARD(CKondasHatamotoCard);
		DEFINE_CARD(CKuroPitlordCard);
		DEFINE_CARD(CLanternKamiCard);
		DEFINE_CARD(CLanternLitGraveyardCard);
		DEFINE_CARD(CLavaSpikeCard);
		DEFINE_CARD(CLongForgottenGoheiCard);
		DEFINE_CARD(CManaSeismCard);
		DEFINE_CARD(CMarrowGnawerCard);
		DEFINE_CARD(CMasakoTheHumorlessCard);
		DEFINE_CARD(CMelokuTheCloudedMirrorCard);
		DEFINE_CARD(CMidnightCovenantCard);
		DEFINE_CARD(CMinamoSchoolAtWatersEdgeCard);
		DEFINE_CARD(CMindblazeCard);
		DEFINE_CARD(CMossKamiCard);
		DEFINE_CARD(CMothriderSamuraiCard);
		DEFINE_CARD(CMyojinOfCleansingFireCard);
		DEFINE_CARD(CMyojinOfInfiniteRageCard);
		DEFINE_CARD(CMyojinOfLifesWebCard);
		DEFINE_CARD(CMyojinOfNightsReachCard);
		DEFINE_CARD(CMyojinOfSeeingWindsCard);
		DEFINE_CARD(CMysticRestraintsCard);
		DEFINE_CARD(CNagaoBoundByHonorCard);
		DEFINE_CARD(CNezumiBoneReaderCard);
		DEFINE_CARD(CNezumiCutthroatCard);
		DEFINE_CARD(CNezumiGraverobberCard);
		DEFINE_CARD(CNezumiRoninCard);
		DEFINE_CARD(CNezumiShortfangCard);
		DEFINE_CARD(CNightDealingsCard);
		DEFINE_CARD(CNightOfSoulsBetrayalCard);
		DEFINE_CARD(CNoDachiCard);
		DEFINE_CARD(CNumaiOutcastCard);
		DEFINE_CARD(COkinaTempleToTheGrandfathersCard);
		DEFINE_CARD(COrbweaverKumoCard);
		DEFINE_CARD(COreGorgerCard);
		DEFINE_CARD(COrochiEggwatcherCard);
		DEFINE_CARD(COrochiHatcheryCard);
		DEFINE_CARD(COrochiLeafcallerCard);
		DEFINE_CARD(COrochiRangerCard);
		DEFINE_CARD(COrochiSustainerCard);
		DEFINE_CARD(COtherworldlyJourneyCard);
		DEFINE_CARD(CPainKamiCard);
		DEFINE_CARD(CPainwrackerOniCard);
		DEFINE_CARD(CPartTheVeilCard);
		DEFINE_CARD(CPeerThroughDepthsCard);
		DEFINE_CARD(CPinecrestRidgeCard);
		DEFINE_CARD(CPiousKitsuneCard);
		DEFINE_CARD(CPullUnderCard);
		DEFINE_CARD(CQuietPurityCard);
		DEFINE_CARD(CRagDealerCard);
		DEFINE_CARD(CRaggedVeinsCard);
		DEFINE_CARD(CReachThroughMistsCard);
		DEFINE_CARD(CReitoLanternCard);
		DEFINE_CARD(CRendFleshCard);
		DEFINE_CARD(CRendSpiritCard);
		DEFINE_CARD(CRiverKaijinCard);
		DEFINE_CARD(CRoninHoundmasterCard);
		DEFINE_CARD(CRootrunnerCard);
		DEFINE_CARD(CRyuseiTheFallingStarCard);
		DEFINE_CARD(CSachiDaughterOfSeshiroCard);
		DEFINE_CARD(CSakuraTribeElderCard);
		DEFINE_CARD(CSamuraiEnforcersCard);
		DEFINE_CARD(CSamuraiOfThePaleCurtainCard);
		DEFINE_CARD(CScuttlingDeathCard);
		DEFINE_CARD(CSeizanPerverterOfTruthCard);
		DEFINE_CARD(CSenseisDiviningTopCard);
		DEFINE_CARD(CSerpentSkinCard);
		DEFINE_CARD(CSeshiroTheAnointedCard);
		DEFINE_CARD(CShimatsuTheBloodcloakedCard);
		DEFINE_CARD(CShinkaTheBloodsoakedKeepCard);
		DEFINE_CARD(CShisatoWhisperingHunterCard);
		DEFINE_CARD(CShizoDeathsStorehouseCard);
		DEFINE_CARD(CSireoftheStormCard);
		DEFINE_CARD(CSoilshaperCard);
		DEFINE_CARD(CSokenzanBruiserCard);
		DEFINE_CARD(CSoratamiCloudskaterCard);
		DEFINE_CARD(CSoratamiMirrorGuardCard);
		DEFINE_CARD(CSoratamiMirrorMageCard);
		DEFINE_CARD(CSoratamiRainshaperCard);
		DEFINE_CARD(CSoratamiSavantCard);
		DEFINE_CARD(CSosukeSonOfSeshiroCard);
		DEFINE_CARD(CSoulOfMagmaCard);
		DEFINE_CARD(CSquelchCard);
		DEFINE_CARD(CStrengthOfCedarsCard);
		DEFINE_CARD(CStudentOfElementsCard);
		DEFINE_CARD(CSwallowingPlagueCard);
		DEFINE_CARD(CTatsumasaTheDragonsFangCard);
		DEFINE_CARD(CTellerOfTalesCard);
		DEFINE_CARD(CTerashisCryCard);
		DEFINE_CARD(CTheUnspeakableCard);
		DEFINE_CARD(CThiefOfHopeCard);
		DEFINE_CARD(CThoughtbindCard);
		DEFINE_CARD(CThousandLeggedKamiCard);
		DEFINE_CARD(CTimeOfNeedCard);
		DEFINE_CARD(CTranquilGardenCard);
		DEFINE_CARD(CUnearthlyBlizzardCard);
		DEFINE_CARD(CUnnaturalSpeedCard);
		DEFINE_CARD(CUyoSilentProphetCard);
		DEFINE_CARD(CVenerableKumoCard);
		DEFINE_CARD(CVigilanceCard);
		DEFINE_CARD(CVineKamiCard);
		DEFINE_CARD(CWakingNightmareCard);
		DEFINE_CARD(CWanderingOnesCard);
		DEFINE_CARD(CWaterveilCavernCard);
		DEFINE_CARD(CWickedAkubaCard);
		DEFINE_CARD(CYamabushisFlameCard);
		DEFINE_CARD(CYamabushisStormCard);
		DEFINE_CARD(CYoseiTheMorningStarCard);
		DEFINE_CARD(CZoZuThePunisherCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAzamiLadyOfScrollsCard::CAzamiLadyOfScrollsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azami, Lady of Scrolls"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(2))

	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzusaLostButSeekingCard::CAzusaLostButSeekingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azusa, Lost but Seeking"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
		::CreateObject<CPlayExtraLandEnchantment>(this, +2));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHairStrungKotoCard::CHairStrungKotoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hair-Strung Koto"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 1));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CIsamaruHoundOfKondaCard::CIsamaruHoundOfKondaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Isamaru, Hound of Konda"), CardType::_LegendaryCreature, CREATURE_TYPE(Hound), nID,
		WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CKodamaOfTheNorthTreeCard::CKodamaOfTheNorthTreeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kodama of the North Tree"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	GetCardKeyword()->AddShroud(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CLavaSpikeCard::CLavaSpikeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lava Spike"), CardType::Sorcery | CardType::Arcane,
		nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	
		Life(-3),		
		PreventableType::Preventable)	
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CSakuraTribeElderCard::CSakuraTribeElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sakura-Tribe Elder"), CardType::Creature, CREATURE_TYPE2(Snake, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGeneralsKabutoCard::CGeneralsKabutoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("General's Kabuto"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::PreventAllCombatDamage);
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
CDosanTheFallingLeafCard::CDosanTheFallingLeafCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dosan the Falling Leaf"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDosanTheFallingLeafCard::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDosanTheFallingLeafCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return true;
}

//____________________________________________________________________________
//
CMinamoSchoolAtWatersEdgeCard::CMinamoSchoolAtWatersEdgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Minamo, School at Water's Edge"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				BLUE_MANA_TEXT,
				FALSE, TRUE,
				new CardTypeComparer(CardType::Legendary, true)));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CShizoDeathsStorehouseCard::CShizoDeathsStorehouseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shizo, Death's Storehouse"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Fear, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_LegendaryCreature, true)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSenseisDiviningTopCard::CSenseisDiviningTopCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sensei's Divining Top"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSenseisDiviningTopCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"), 3));

		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSenseisDiviningTopCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others, GetController());
	modifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CAkkiAvalanchersCard::CAkkiAvalanchersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Akki Avalanchers"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		_T(""), Power(+2), Life(+0))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CAkkiCoalflingerCard::CAkkiCoalflingerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Akki Coalflinger"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkkiRockspeakerCard::CAkkiRockspeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Rockspeaker"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkkiUnderminerCard::CAkkiUnderminerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Underminer"), CardType::Creature, CREATURE_TYPE3(Goblin, Rogue, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattleMadRoninCard::CBattleMadRoninCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battle-Mad Ronin"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		//Bushido 2
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBurrGrafterCard::CBurrGrafterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burr Grafter"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
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
	{
		//Soulshift 3
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCursedRoninCard::CCursedRoninCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cursed Ronin"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathcurseOgreCard::CDeathcurseOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deathcurse Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevotedRetainerCard::CDevotedRetainerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devoted Retainer"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGibberingKamiCard::CGibberingKamiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gibbering Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	//Soulshift 3
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGracefulAdeptCard::CGracefulAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Graceful Adept"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

	cpAbility->SetAffectControllerOnly();
	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeWhoHungersCard::CHeWhoHungersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("He Who Hungers"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("a Spirit"), _T("Spirits"), new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this, 
				_T("1"), 
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				FALSE,	// targeted player chooses?
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 4
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHorobiDeathsWailCard::CHorobiDeathsWailCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Horobi, Death's Wail"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHorobiDeathsWailCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CHorobiDeathsWailCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	triggerContext.m_pCard = pToCard;
	return true;
}

//____________________________________________________________________________
//
CHumbleBudokaCard::CHumbleBudokaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Humble Budoka"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CHundredTalonKamiCard::CHundredTalonKamiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hundred-Talon Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
{
	//Soulshift 4
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInameDeathAspectCard::CInameDeathAspectCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iname, Death Aspect"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
	cpAbility->SetToZone(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJukaiMessengerCard::CJukaiMessengerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Jukai Messenger"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CKabutoMothCard::CKabutoMothCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kabuto Moth"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKamiOfAncientLawCard::CKamiOfAncientLawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Ancient Law"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfLunacyCard::CKamiOfLunacyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kami of Lunacy"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(1))
{
	//Soulshift 5
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 5
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(6)); //=Soulshift 5

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfThePalaceFieldsCard::CKamiOfThePalaceFieldsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kami of the Palace Fields"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
		//Soulshift 5
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 5
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(6)); //=Soulshift 5

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKamiOfTwistedReflectionCard::CKamiOfTwistedReflectionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Twisted Reflection"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKitsuneBlademasterCard::CKitsuneBlademasterCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Kitsune Blademaster"), CardType::Creature, CREATURE_TYPE2(Fox, Samurai), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKitsuneDivinerCard::CKitsuneDivinerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Diviner"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		WHITE_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKitsuneHealerCard::CKitsuneHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Healer"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
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
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_LegendaryCreature, true),
				FALSE,
				Life(PreventionType::PreventAllDamage),
				SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CKuroPitlordCard::CKuroPitlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kuro, Pitlord"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(9), Life(9))
{
	AddUpkeepCost(BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT);

	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLanternKamiCard::CLanternKamiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lantern Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMossKamiCard::CMossKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moss Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CMothriderSamuraiCard::CMothriderSamuraiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mothrider Samurai"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNagaoBoundByHonorCard::CNagaoBoundByHonorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nagao, Bound by Honor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Samurai), false));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNezumiBoneReaderCard::CNezumiBoneReaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nezumi Bone-Reader"), CardType::Creature, CREATURE_TYPE2(Rat, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNezumiCutthroatCard::CNezumiCutthroatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nezumi Cutthroat"), CardType::Creature, CREATURE_TYPE2(Rat, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CNezumiRoninCard::CNezumiRoninCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nezumi Ronin"), CardType::Creature, CREATURE_TYPE2(Rat, Samurai), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNumaiOutcastCard::CNumaiOutcastCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Numai Outcast"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
	m_pRegenerationAbility->AddPayLifeDeltaCost(Life(-5));

	{
		//Bushido 2
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrochiLeafcallerCard::COrochiLeafcallerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orochi Leafcaller"), CardType::Creature, CREATURE_TYPE2(Snake, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrochiSustainerCard::COrochiSustainerCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Orochi Sustainer"), CardType::Creature, CREATURE_TYPE2(Snake, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CPainKamiCard::CPainKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pain Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(-1));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRagDealerCard::CRagDealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rag Dealer"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetSubjectCount(0, 3);
	cpAbility->GetTargeting()->SetSingleSourceZone(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiverKaijinCard::CRiverKaijinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("River Kaijin"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CRoninHoundmasterCard::CRoninHoundmasterCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ronin Houndmaster"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	//Bushido 1
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootrunnerCard::CRootrunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rootrunner"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 3
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRyuseiTheFallingStarCard::CRyuseiTheFallingStarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ryusei, the Falling Star"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSamuraiEnforcersCard::CSamuraiEnforcersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samurai Enforcers"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	//Bushido 2
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScuttlingDeathCard::CScuttlingDeathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scuttling Death"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 4
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeizanPerverterOfTruthCard::CSeizanPerverterOfTruthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seizan, Perverter of Truth"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetDrawCount(2);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSeizanPerverterOfTruthCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSeizanPerverterOfTruthCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pAction->GetTriggeredPlayer());
	
	return true;
}

//____________________________________________________________________________
//
CSeshiroTheAnointedCard::CSeshiroTheAnointedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seshiro the Anointed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Snake, Monk), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))

	, m_CardFilter(_T("a Snake"), _T("Snakes"), new CreatureTypeComparer(CREATURE_TYPE(Snake), false))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt,
								CWhenDamageDealt::PlayerEventCallback, 
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShisatoWhisperingHunterCard::CShisatoWhisperingHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shisato, Whispering Hunter"), CardType::_LegendaryCreature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextUntapStep, FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSokenzanBruiserCard::CSokenzanBruiserCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sokenzan Bruiser"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CThousandLeggedKamiCard::CThousandLeggedKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thousand-legged Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	//Soulshift 7
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 7
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(8)); //=Soulshift 7

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVenerableKumoCard::CVenerableKumoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venerable Kumo"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		//Soulshift 4
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVineKamiCard::CVineKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vine Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("6") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);

	{
		//Soulshift 6
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 6
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(7)); //=Soulshift 6

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWanderingOnesCard::CWanderingOnesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wandering Ones"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CZoZuThePunisherCard::CZoZuThePunisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zo-Zu the Punisher"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
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
CEiganjoCastleCard::CEiganjoCastleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Eiganjo Castle"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_LegendaryCreature, true), FALSE,
				Life(2), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CForbiddenOrchardCard::CForbiddenOrchardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Forbidden Orchard"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetCreateTokenOption(TRUE, _T("Spirit A"), 2800, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COkinaTempleToTheGrandfathersCard::COkinaTempleToTheGrandfathersCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Okina, Temple to the Grandfathers"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_LegendaryCreature, true)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShinkaTheBloodsoakedKeepCard::CShinkaTheBloodsoakedKeepCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shinka, the Bloodsoaked Keep"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::FirstStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_LegendaryCreature, true)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHonorWornShakuCard::CHonorWornShakuCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honor-Worn Shaku"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)

	, m_CardFilter(_T("a legendary card"), _T("legendary cards"), new CardTypeComparer(CardType::Legendary, false))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());

	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CImiStatueCard::CImiStatueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Imi Statue"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::UntapLimit, 1));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredChgUntapCardTypeWhenNodeChangedAbility> cpAbility(
			::CreateObject<CTriggeredChgUntapCardTypeWhenNodeChangedAbility>(this));

		cpAbility->SetOptionalType(CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OptionalType::Required);
		cpAbility->AddCardTypeSelection(CardType::Artifact, _T("artifact"));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));	

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::NoUntapInUntapPhase, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJourneyersKiteCard::CJourneyersKiteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Journeyer's Kite"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"), 
			CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNoDachiCard::CNoDachiCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("No-Dachi"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReitoLanternCard::CReitoLanternCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Reito Lantern"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3"),
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->SetCardPlacement(CardPlacement::Bottom);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodRitesCard::CBloodRitesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blood Rites"), CardType::GlobalEnchantment, nID, 
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCageOfHandsCard::CCageOfHandsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cage of Hands"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") WHITE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieldOfRealityCard::CFieldOfRealityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Field of Reality"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)

	, m_CardFilter(_T("non-Spirit"), _T("non-Spirits"), new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)&m_CardFilter); //can't be blocked by Spirits

	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIndomitableWillCard::CIndomitableWillCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Indomitable Will"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CNightOfSoulsBetrayalCard::CNightOfSoulsBetrayalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Night of Souls' Betrayal"), CardType::GlobalEnchantment | CardType::Legendary, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVigilanceCard::CVigilanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Vigilance"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Vigilance)
{
}

//____________________________________________________________________________
//
CBlindWithAngerCard::CBlindWithAngerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blind with Anger"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Legendary, false)); //target nonlegendary

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1); 

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCallToGloryCard::CCallToGloryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Call to Glory"), CardType::Instant, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CCallToGloryCard::OnResolutionCompleted))
		, m_CardFilter(_T("a Samurai"), _T("Samurai"), new CreatureTypeComparer(CREATURE_TYPE(Samurai), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	{
		counted_ptr<CGlobalUntapSpell> cpSpell(
			::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CCallToGloryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCreatureModifier pModifier1 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(+1))));
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable)));

	pModifier1.ApplyTo(pAbilityAction->GetController());
	pModifier2.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CCrushingPainCard::CCrushingPainCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Crushing Pain"), CardType::Instant | CardType::Arcane, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-6),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
}

//____________________________________________________________________________
//
CEtherealHazeCard::CEtherealHazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ethereal Haze"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHoldTheLineCard::CHoldTheLineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hold the Line"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new BlockingCreatureComparer,
			Power(+7), Life(+7)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPartTheVeilCard::CPartTheVeilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Part the Veil"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPeerThroughDepthsCard::CPeerThroughDepthsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Peer Through Depths"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPullUnderCard::CPullUnderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pull Under"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
		_T("5") BLACK_MANA_TEXT,
		Power(-5), Life(-5),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CQuietPurityCard::CQuietPurityCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Quiet Purity"), CardType::Instant | CardType::Arcane, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CReachThroughMistsCard::CReachThroughMistsCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Reach Through Mists"), CardType::Instant | CardType::Arcane, nID)
{
    counted_ptr<CDrawCardSpell> cpSpell(
        ::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
            BLUE_MANA_TEXT, 1));

    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRendFleshCard::CRendFleshCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rend Flesh"), CardType::Instant | CardType::Arcane, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
}

//____________________________________________________________________________
//
CRendSpiritCard::CRendSpiritCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rend Spirit"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new CreatureTypeComparer(CREATURE_TYPE(Spirit), false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CThoughtbindCard::CThoughtbindCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Thoughtbind"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant, 
		new ConvertedManaCostComparer<std::less<int>>(5))
{
}

//____________________________________________________________________________
//
CUnnaturalSpeedCard::CUnnaturalSpeedCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Unnatural Speed"), CardType::Instant | CardType::Arcane, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CCleanfallCard::CCleanfallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cleanfall"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDanceOfShadowsCard::CDanceOfShadowsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dance of Shadows"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+0), CreatureKeyword::Fear));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEyeOfNowhereCard::CEyeOfNowhereCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Eye of Nowhere"), CardType::Sorcery | CardType::Arcane, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CGaleForceCard::CGaleForceCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Gale Force"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") GREEN_MANA_TEXT,
		Life(-5),
		new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CJoyousRespiteCard::CJoyousRespiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Joyous Respite"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CChgLifeBySurveySpell> cpSpell(
		::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT));

	cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("lands")), ZoneId::Battlefield);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTerashisCryCard::CTerashisCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Terashi's Cry"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTimeOfNeedCard::CTimeOfNeedCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Time of Need"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter, 
		ZoneId::Hand, TRUE, TRUE, FALSE)

	, m_CardFilter(_T("a legendary creature card"), _T("legendary creature cards"), new CardTypeComparer(CardType::_LegendaryCreature, true))
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CUnearthlyBlizzardCard::CUnearthlyBlizzardCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unearthly Blizzard"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWakingNightmareCard::CWakingNightmareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Waking Nightmare"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKokushoTheEveningStarCard::CKokushoTheEveningStarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kokusho, the Evening Star"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
    typedef
        TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

    counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

    cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKokushoTheEveningStarCard::BeforeResolution));
    cpAbility->AddAbilityTag(AbilityTag::LifeLost);
    cpAbility->AddAbilityTag(AbilityTag::LifeGain);

    AddAbility(cpAbility.GetPointer());
}

bool CKokushoTheEveningStarCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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
CSachiDaughterOfSeshiroCard::CSachiDaughterOfSeshiroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sachi, Daughter of Seshiro"), CardType::_LegendaryCreature, CREATURE_TYPE2(Snake, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+0), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Shaman), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSachiDaughterOfSeshiroCard::CreateAbility)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CSachiDaughterOfSeshiroCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSosukeSonOfSeshiroCard::CSosukeSonOfSeshiroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sosuke, Son of Seshiro"), CardType::_LegendaryCreature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSosukeSonOfSeshiroCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSosukeSonOfSeshiroCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSosukeSonOfSeshiroCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (pCard->GetController() != GetController()) return false;

	if (pCard->GetCardType().IsCreature())
		if (pCard->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)pCard)->GetCreatureType().HasType(SingleCreatureType::Warrior))
		{
			triggerContext.nValue1 = (DWORD)pToCreature;

			return true;
		}

	if (pCard->GetCardType().IsTribal())
		if (pCard->GetCardKeyword()->HasChangeling() || ((CTribalCard*)pCard)->GetCreatureType().HasType(SingleCreatureType::Warrior))
		{
			triggerContext.nValue1 = (DWORD)pToCreature;

			return true;
		}

	return false;
}

bool CSosukeSonOfSeshiroCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
CAuraOfDominionCard::CAuraOfDominionCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Aura of Dominion"), CardType::EnchantCreature, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<CModifyEnchantedCardAbility> cpAbility(
		::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
			_T("1")));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

	cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMidnightCovenantCard::CMidnightCovenantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Midnight Covenant"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CMidnightCovenantCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CMidnightCovenantCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantedCard,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));
	ATLASSERT(cpEnchantAbility);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CRaggedVeinsCard::CRaggedVeinsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ragged Veins"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CRaggedVeinsCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CRaggedVeinsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pEnchantedCard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRaggedVeinsCard::SetTriggerContext));
	
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CRaggedVeinsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	return true;
}

//____________________________________________________________________________
//
CInameLifeAspectCard::CInameLifeAspectCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iname, Life Aspect"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetSubjectCount(0, SpecialNumber::Any);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetExileGraveyardResolutionCost(1, &m_CardFilter);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeigatheTideStarCard::CKeigatheTideStarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Keiga, the Tide Star"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(5))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CKeigatheTideStarCard::OnResolutionCompleted))
{
    typedef
        TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

    counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

    cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

    AddAbility(cpAbility.GetPointer());
}

void CKeigatheTideStarCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* getCard = pAbilityAction->GetAssociatedCard();    // getting targeted card
	CPlayer* controller = getCard->GetController();			// getting targeted card controller
	CZone* pOppInplay = controller->GetZoneById(ZoneId::Battlefield); // getting zone from which we remove targeted card
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield); // getting zone to which we add targeted card
	CGainControlModifier pModifier = CGainControlModifier(GetGame(),(CCard*)this);

	if (getCard->GetZone()->GetZoneId() == ZoneId::Battlefield) pModifier.ApplyTo(getCard);     // Should be moved to Activated ability
}

//____________________________________________________________________________
//
CKondasHatamotoCard::CKondasHatamotoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Konda's Hatamoto"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Legendary, false));
		cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Samurai), false));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHondenofSeeingWindsCard::CHondenofSeeingWindsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honden of Seeing Winds"), CardType::_LegendaryGlobalEnchantment, nID, 
		_T("4") BLUE_MANA_TEXT, AbilityType::Enchantment)    // Shrine subtype should be added when possible
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);	

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHondenofSeeingWindsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHondenofSeeingWindsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardNameComparer(_T("Honden of Cleansing Fire")));
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CardNameComparer(_T("Honden of Infinite Rage")));
	CCardFilter m_CardFilter3;
	m_CardFilter3.SetComparer(new CardNameComparer(_T("Honden of Life's Web")));
	CCardFilter m_CardFilter4;
	m_CardFilter4.SetComparer(new CardNameComparer(_T("Honden of Night's Reach")));
	CCardFilter m_CardFilter5;
	m_CardFilter5.SetComparer(new CardNameComparer(_T("Honden of Seeing Winds")));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter2.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter3.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter4.CountIncluded(pContBattle->GetCardContainer()) +
		m_CardFilter5.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CHondenofLifesWebCard::CHondenofLifesWebCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honden of Life's Web"), CardType::_LegendaryGlobalEnchantment, nID, 
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment) // Shrine subtype should be added when possible
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit A"), 2800, 1);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHondenofLifesWebCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHondenofLifesWebCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardNameComparer(_T("Honden of Cleansing Fire")));
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CardNameComparer(_T("Honden of Infinite Rage")));
	CCardFilter m_CardFilter3;
	m_CardFilter3.SetComparer(new CardNameComparer(_T("Honden of Seeing Winds")));
	CCardFilter m_CardFilter4;
	m_CardFilter4.SetComparer(new CardNameComparer(_T("Honden of Night's Reach")));
	CCardFilter m_CardFilter5;
	m_CardFilter5.SetComparer(new CardNameComparer(_T("Honden of Life's Web")));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter2.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter3.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter4.CountIncluded(pContBattle->GetCardContainer()) +
		m_CardFilter5.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CHondenofCleansingFireCard::CHondenofCleansingFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honden of Cleansing Fire"), CardType::_LegendaryGlobalEnchantment, nID, 
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment) // Shrine subtype should be added when possible
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHondenofCleansingFireCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHondenofCleansingFireCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardNameComparer(_T("Honden of Life's Web")));
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CardNameComparer(_T("Honden of Infinite Rage")));
	CCardFilter m_CardFilter3;
	m_CardFilter3.SetComparer(new CardNameComparer(_T("Honden of Seeing Winds")));
	CCardFilter m_CardFilter4;
	m_CardFilter4.SetComparer(new CardNameComparer(_T("Honden of Night's Reach")));
	CCardFilter m_CardFilter5;
	m_CardFilter5.SetComparer(new CardNameComparer(_T("Honden of Cleansing Fire")));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter2.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter3.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter4.CountIncluded(pContBattle->GetCardContainer()) +
		m_CardFilter5.CountIncluded(pContBattle->GetCardContainer());
	
	nCount = nCount*2;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CHondenofInfiniteRageCard::CHondenofInfiniteRageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honden of Infinite Rage"), CardType::_LegendaryGlobalEnchantment, nID, 
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment) // Shrine subtype should be added when possible
{
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHondenofInfiniteRageCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHondenofInfiniteRageCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardNameComparer(_T("Honden of Life's Web")));
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CardNameComparer(_T("Honden of Cleansing Fire")));
	CCardFilter m_CardFilter3;
	m_CardFilter3.SetComparer(new CardNameComparer(_T("Honden of Seeing Winds")));
	CCardFilter m_CardFilter4;
	m_CardFilter4.SetComparer(new CardNameComparer(_T("Honden of Night's Reach")));
	CCardFilter m_CardFilter5;
	m_CardFilter5.SetComparer(new CardNameComparer(_T("Honden of Infinite Rage")));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter2.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter3.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter4.CountIncluded(pContBattle->GetCardContainer()) +
		m_CardFilter5.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCount));
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CHondenofNightsReachCard::CHondenofNightsReachCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Honden of Night's Reach"), CardType::_LegendaryGlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)    // Shrine subtype should be added when possible
{
	typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetPickerIsTriggeredPlayer(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHondenofNightsReachCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHondenofNightsReachCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = 0;

	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CardNameComparer(_T("Honden of Cleansing Fire")));
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CardNameComparer(_T("Honden of Infinite Rage")));
	CCardFilter m_CardFilter3;
	m_CardFilter3.SetComparer(new CardNameComparer(_T("Honden of Life's Web")));
	CCardFilter m_CardFilter4;
	m_CardFilter4.SetComparer(new CardNameComparer(_T("Honden of Seeing Winds")));
	CCardFilter m_CardFilter5;
	m_CardFilter5.SetComparer(new CardNameComparer(_T("Honden of Night's Reach")));

	nCount = m_CardFilter1.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter2.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter3.CountIncluded(pContBattle->GetCardContainer()) + 
		m_CardFilter4.CountIncluded(pContBattle->GetCardContainer()) +
		m_CardFilter5.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_nDiscardCount = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}

//____________________________________________________________________________
//
CSwallowingPlagueCard::CSwallowingPlagueCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Swallowing Plague"), CardType::Sorcery | CardType::Arcane, nID, AbilityType::Sorcery,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(0),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::LifeGain);
}

//____________________________________________________________________________
//
CSireoftheStormCard::CSireoftheStormCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sire of the Storm"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKondaLordOfEiganjoCard::CKondaLordOfEiganjoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Konda, Lord of Eiganjo"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		//Bushido 5
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+5)); //=Bushido 5
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5)); //=Bushido 5

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEarthshakerCard::CEarthshakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earthshaker"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGuardianOfSolitudeCard::CGuardianOfSolitudeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian of Solitude"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInnocenceKamiCard::CInnocenceKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Innocence Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
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
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKamiOfFiresRoarCard::CKamiOfFiresRoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Fire's Roar"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTheHuntCard::CKamiOfTheHuntCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of the Hunt"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTheWaningMoonCard::CKamiOfTheWaningMoonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kami of the Waning Moon"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Fear);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKodamaOfTheSouthTreeCard::CKodamaOfTheSouthTreeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kodama of the South Tree"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrbweaverKumoCard::COrbweaverKumoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orbweaver Kumo"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Forestwalk);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COreGorgerCard::COreGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ore Gorger"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulOfMagmaCard::CSoulOfMagmaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul of Magma"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThiefOfHopeCard::CThiefOfHopeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thief of Hope"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
		
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 2
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 2
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3)); //=Soulshift 2

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHisokasDefianceCard::CHisokasDefianceCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Hisoka's Defiance"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardSpiritArcaneComparer)
{
}

//____________________________________________________________________________
//
CMelokuTheCloudedMirrorCard::CMelokuTheCloudedMirrorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Meloku the Clouded Mirror"), CardType::_LegendaryCreature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1"),
			_T("Illusion B"), 2856,
			1));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiCloudskaterCard::CSoratamiCloudskaterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Cloudskater"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiMirrorGuardCard::CSoratamiMirrorGuardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Mirror-Guard"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiMirrorMageCard::CSoratamiMirrorMageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Mirror-Mage"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddReturnFromPlayCardCost(3, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiRainshaperCard::CSoratamiRainshaperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Rainshaper"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("3"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiSavantCard::CSoratamiSavantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Savant"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("3"),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("3"));

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKitsuneRiftwalkerCard::CKitsuneRiftwalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kitsune Riftwalker"), CardType::Creature, CREATURE_TYPE2(Fox, Wizard), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	m_CardFilter.AddComparer(new CardSpiritArcaneComparer);

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CTellerOfTalesCard::CTellerOfTalesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Teller of Tales"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHanaKamiCard::CHanaKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hana Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID, 
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Arcane, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheUnspeakableCard::CTheUnspeakableCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("The Unspeakable"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Arcane, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEerieProcessionCard::CEerieProcessionCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Eerie Procession"), CardType::Sorcery | CardType::Arcane, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter,
		ZoneId::Hand, TRUE, FALSE, FALSE)
{
	m_CardFilter.SetFilterName(_T("an Arcane card"), _T("Arcane cards"));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Arcane, false));

	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CHikariTwilightGuardianCard::CHikariTwilightGuardianCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hikari, Twilight Guardian"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHikariTwilightGuardianCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CHikariTwilightGuardianCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CCloudcrestLakeCard::CCloudcrestLakeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cloudcrest Lake"), nID)
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
CLanternLitGraveyardCard::CLanternLitGraveyardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Lantern-Lit Graveyard"), nID)
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
CPinecrestRidgeCard::CPinecrestRidgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Pinecrest Ridge"), nID)
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
CTranquilGardenCard::CTranquilGardenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tranquil Garden"), nID)
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
CWaterveilCavernCard::CWaterveilCavernCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Waterveil Cavern"), nID)
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
CMarrowGnawerCard::CMarrowGnawerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marrow-Gnawer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Rat, Rogue), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Rat), false),	
				Power(+0), Life(+0), CreatureKeyword::Fear));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rat), false));

		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Rat D"), 2899,
				0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarrowGnawerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMarrowGnawerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Rat), false));

	int nCount = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
COrochiHatcheryCard::COrochiHatcheryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orochi Hatchery"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrochiHatcheryCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrochiHatcheryCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetSkipStack(TRUE);

	//	m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("5"),
				_T("Snake F"), 2877,
				0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrochiHatcheryCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COrochiHatcheryCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	int nColorCount = GetLastCastingExtraValue();
	
	CCardCounterModifier pModifier = CCardCounterModifier(CHARGE_COUNTER, +nColorCount);

	pModifier.ApplyTo(this);

	return true;
}

bool COrochiHatcheryCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (moveType != MoveType::Cast)
		return false;
		
	return true;
}

bool COrochiHatcheryCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CHanabiBlastCard::CHanabiBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hanabi Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::Add(new CRandomDiscardModifier(1));
}

//____________________________________________________________________________
//
CCranialExtractionCard::CCranialExtractionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cranial Extraction"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			ZoneId::Exile, TRUE, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLongForgottenGoheiCard::CLongForgottenGoheiCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Long-Forgotten Gohei"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::Arcane, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Spirit), false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBloodSpeakerCard::CBloodSpeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Speaker"), CardType::Creature, CREATURE_TYPE2(Ogre, Shaman), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodSpeakerCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloodSpeakerCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CBloodthirstyOgreCard::CBloodthirstyOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodthirsty Ogre"), CardType::Creature, CREATURE_TYPE3(Ogre, Warrior, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a devotion counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(DEVOTION_COUNTER, +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-0), Life(-0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodthirstyOgreCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CBloodthirstyOgreCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBloodthirstyOgreCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(DEVOTION_COUNTER)->GetCount();

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCounterCount;
	Context.nValue2 = -nCounterCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

BOOL CBloodthirstyOgreCard::CanPlay(BOOL bIncludeTricks)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CGutwrencherOniCard::CGutwrencherOniCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gutwrencher Oni"), CardType::Creature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ogre), false));

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(1);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGutwrencherOniCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGutwrencherOniCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CMasakoTheHumorlessCard::CMasakoTheHumorlessCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Masako the Humorless"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::TappedCanBlock));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKamiOfThePaintedRoadCard::CKamiOfThePaintedRoadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of the Painted Road"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredGainKeywordAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKamiOfThePaintedRoadCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKamiOfThePaintedRoadCard::SetTriggerContext(CTriggeredGainKeywordAbility::TriggerContextType& triggerContext, 
										CCard* pCard) const
{
	triggerContext.m_pCard = (CCard*)this;
	return true;
}

//____________________________________________________________________________
//
CHorizonSeedCard::CHorizonSeedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Horizon Seed"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(1))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHorizonSeedCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::Regeneration);

	AddAbility(cpAbility.GetPointer());
}

void CHorizonSeedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CRegenerateModifier pModifier = CRegenerateModifier();

	pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CPainwrackerOniCard::CPainwrackerOniCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Painwracker Oni"), CardType::Creature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddFear(FALSE);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ogre), false));

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPainwrackerOniCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPainwrackerOniCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CPainwrackerOniCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CPainwrackerOniCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CJunkyoBellCard::CJunkyoBellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Junkyo Bell"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CJunkyoBellCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

void CJunkyoBellCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CPowerModifier pModifier1 = CPowerModifier(Power(+nDomainCount));
	CLifeModifier pModifier2 = CLifeModifier(Life(+nDomainCount), NULL, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, TRUE);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	CCountedCardContainer pSubjects;
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier3.ApplyTo(pController);
}

//____________________________________________________________________________
//
CStrengthOfCedarsCard::CStrengthOfCedarsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strength of Cedars"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("4") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStrengthOfCedarsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CStrengthOfCedarsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	int nDomainCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pBattlefield->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue context(+nDomainCount, +nDomainCount);

	const CCard* pCard = pTargetAction->GetTargetGroup().GetFirstCardSubject();
	pTargetAction->GetTargetGroup().SetValue(pCard, context);

	return true;
}

//____________________________________________________________________________
//
CBrutalDeceiverCard::CBrutalDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brutal Deceiver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBrutalDeceiverCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2"),
				1));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CBrutalDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;
	if (!pLibrary->GetTopCard()->GetCardType().IsLand()) return;

	CPowerModifier modifier1(Power(+1));
	CCreatureKeywordModifier modifier2 = CCreatureKeywordModifier(CreatureKeyword::FirstStrike, true);

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);
}

//____________________________________________________________________________
//
CCallousDeceiverCard::CCallousDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Callous Deceiver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCallousDeceiverCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2"),
				1));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CCallousDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;
	if (!pLibrary->GetTopCard()->GetCardType().IsLand()) return;

	CPowerModifier modifier1(Power(+1));
	CCreatureKeywordModifier modifier2(CreatureKeyword::Flying, true);

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);
}

//____________________________________________________________________________
//
CFeralDeceiverCard::CFeralDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Feral Deceiver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFeralDeceiverCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2"),
				1));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CFeralDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;
	if (!pLibrary->GetTopCard()->GetCardType().IsLand()) return;

	CPowerModifier modifier1(Power(+2));
	CLifeModifier modifier2(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CCreatureKeywordModifier modifier3(CreatureKeyword::Trample, true);

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);
	modifier3.ApplyTo(this);
}

//____________________________________________________________________________
//
CHarshDeceiverCard::CHarshDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harsh Deceiver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHarshDeceiverCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2"),
				1));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CHarshDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;
	if (!pLibrary->GetTopCard()->GetCardType().IsLand()) return;

	CPowerModifier modifier1(Power(+1));
	CLifeModifier modifier2(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);
}

//____________________________________________________________________________
//
CCruelDeceiverCard::CCruelDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cruel Deceiver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCruelDeceiverCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("2"),
				1));

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CCruelDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;
	if (!pLibrary->GetTopCard()->GetCardType().IsLand()) return;

	CScheduledCardModifier modifier(GetGame(),
			new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,&CCruelDeceiverCard::CreateAdditionalAbility)),
			TurnNumberDelta(-1), NodeId::EndStep, true,
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater);

	modifier.ApplyTo(this);
}

counted_ptr<CAbility> CCruelDeceiverCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCruelDeceiverCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CCruelDeceiverCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CEightAndAHalfTailsCard::CEightAndAHalfTailsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eight-and-a-Half-Tails"), CardType::_LegendaryCreature, CREATURE_TYPE2(Fox, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new TrueCardComparer));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//target spell
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new TrueCardComparer,
				false));

		cpAbility->GetTargeting()->SetSubjectZoneId(ZoneId::Stack);
		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardColorModifier(CardType::White, true));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//target permanent
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new TrueCardComparer,
				false));

		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardColorModifier(CardType::White, true));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPiousKitsuneCard::CPiousKitsuneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pious Kitsune"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPiousKitsuneCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DEVOTION_COUNTER, +1));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+1), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DEVOTION_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

void CPiousKitsuneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCounterCount = GetCounterContainer()->GetCounter(DEVOTION_COUNTER)->GetCount();

	CLifeModifier pModifier = CLifeModifier(Life(nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Eight-and-a-Half-Tails")));

	int nCardCount = (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppBattlefield->GetCardContainer()));

	if (nCardCount != 0) pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
COtherworldlyJourneyCard::COtherworldlyJourneyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Otherworldly Journey"), CardType::Instant | CardType::Arcane, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others)
    , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&COtherworldlyJourneyCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void COtherworldlyJourneyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Otherworldly Journey Effect"), 61085, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CKodamasReachCard::CKodamasReachCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kodama's Reach"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CKodamasReachSpell> cpSpell(
		::CreateObject<CKodamasReachSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")), ZoneId::Library, ZoneId::Library, TRUE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpSpell->SetRevealCards(FALSE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGiftsUngivenCard::CGiftsUngivenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gifts Ungiven"), CardType::Instant, nID)
{
	counted_ptr<CGiftsUngivenSpell> cpSpell(
		::CreateObject<CGiftsUngivenSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT, new TrueCardComparer));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CKikiJikiMirrorBreakerCard::CKikiJikiMirrorBreakerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Kiki-Jiki, Mirror Breaker"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Legendary, false));		
	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKikiJikiMirrorBreakerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKikiJikiMirrorBreakerCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	CCountedCardContainer pTokens;

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
	pModifier1->GetModifier().SetOneTurnOnly(FALSE);
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Haste);

	CCardCopyModifier pModifier2 = CCardCopyModifier(GetGame(), pTarget, NULL, pModifier1, &pTokens);
	pModifier2.ApplyTo(pTarget);

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pTokens);
	pModifier3.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CMyojinOfCleansingFireCard::CMyojinOfCleansingFireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myojin of Cleansing Fire"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
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
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CMyojinOfCleansingFireCard::SetTriggerContext));
			
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(DIVINITY_COUNTER, 1));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T(""), 
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->SetExceptParent();

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DIVINITY_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyojinOfCleansingFireCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
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
CMyojinOfInfiniteRageCard::CMyojinOfInfiniteRageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myojin of Infinite Rage"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("7") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(4))
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
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CMyojinOfInfiniteRageCard::SetTriggerContext));
			
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(DIVINITY_COUNTER, 1));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T(""), 
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DIVINITY_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyojinOfInfiniteRageCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
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
CMyojinOfLifesWebCard::CMyojinOfLifesWebCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myojin of Life's Web"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
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
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CMyojinOfLifesWebCard::SetTriggerContext));
			
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(DIVINITY_COUNTER, 1));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), 
				CCardFilter::GetFilter(_T("creatures")),
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
		cpAbility->SetFromZoneId(ZoneId::Hand);
		
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DIVINITY_COUNTER), -1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyojinOfLifesWebCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
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
CMyojinOfNightsReachCard::CMyojinOfNightsReachCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myojin of Night's Reach"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(2))
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
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CMyojinOfNightsReachCard::SetTriggerContext));
			
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(DIVINITY_COUNTER, 1));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T(""), 
				new TrueCardComparer,
				ZoneId::Graveyard, TRUE, MoveType::Discard, ZoneId::Hand));

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DIVINITY_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyojinOfNightsReachCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
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
CMyojinOfSeeingWindsCard::CMyojinOfSeeingWindsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myojin of Seeing Winds"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
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
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CMyojinOfSeeingWindsCard::SetTriggerContext));
			
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetConditionFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(DIVINITY_COUNTER, 1));
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell2>>(this,
				_T(""), 
				ZoneId::Battlefield, TRUE, FALSE));

		cpAbility->GetSurveyCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(DIVINITY_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyojinOfSeeingWindsCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
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
CGlimpseofNatureCard::CGlimpseofNatureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glimpse of Nature"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Glimpse of Nature Effect"), 61023, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShimatsuTheBloodcloakedCard::CShimatsuTheBloodcloakedCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Shimatsu the Bloodcloaked"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(0),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CShimatsuTheBloodcloakedCard::OnZoneChanged))
	, m_CardFilter(_T("1 permanent"), _T("permanents"), new TrueCardComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);
}

void CShimatsuTheBloodcloakedCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount();

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSquelchCard::CSquelchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Squelch"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterAbilitySpell> cpSpell(
			::CreateObject<CCounterAbilitySpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT, CCardFilter::GetFilter(_T("cards")), TRUE, FALSE));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(),MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CHearthKamiCard::CHearthKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hearth Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));		

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->AddSacrificeCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CSerpentSkinCard::CSerpentSkinCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Serpent Skin"), nID, 
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+1), Life(+1))
{
	GetCardKeyword()->AddFlash(FALSE);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSerpentSkinCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSerpentSkinCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("") GREEN_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeartbeatOfSpringCard::CHeartbeatOfSpringCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heartbeat of Spring"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeartbeatOfSpringCard::SetTriggerContext));

    m_pTriggeredAbility = cpAbility.GetPointer();
    AddAbility(m_pTriggeredAbility);
}
	
bool CHeartbeatOfSpringCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
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
bool CHeartbeatOfSpringCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}

//____________________________________________________________________________
//
CYoseiTheMorningStarCard::CYoseiTheMorningStarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Yosei, the Morning Star"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredDoubleTargetAbility< CTriggeredYoseiAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting1().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(FALSE_CARD_COMPARER); 
	cpAbility->GetTargeting2().SetIncludePlayers(FALSE);
	cpAbility->GetTargeting2().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new TrueCardComparer); 
	cpAbility->GetTargeting2().SetSubjectCount(0,5);
	cpAbility->SetTargetingOverride();

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

CYoseiTheMorningStarCard::CTriggeredYoseiAbility::CTriggeredYoseiAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

void CYoseiTheMorningStarCard::CTriggeredYoseiAbility::GetSelections(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
{
	
	__super::GetSelections(actions, pPlayer, triggerContext, info, bSetNames);

	CActionContainer& pActionContainer1 = CActionContainer();

	bool add = false;
	
	while (!add)
	{
	add = true;
	for (int l = actions.GetSize() - 1; l >= 0; --l)
	{
		add = true;
		const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(actions.GetAt(l).GetPointer());
		
		const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
		const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();

		const CPlayer* controller; 

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
					it != targetGroup1.PlayerSubjectEnd(); ++it)
				{
					controller = *it;
				}
		
		for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{
			if ( (*it)->GetController() != controller)

			add = false;
		}

		if (!add || !targetGroup1.GetSubjectCount())
		{
		actions.RemoveAt(l);
		//break;
		}
	}
	}
}

BOOL CYoseiTheMorningStarCard::CTriggeredYoseiAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;
	
	const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(pAction);
	if (!pTargetAction) return FALSE;
	const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();		
	CPlayerEffectModifier pModifier1 = CPlayerEffectModifier(PlayerEffectType::SkipNextUntapStep);
	CCardOrientationModifier pModifier2 = CCardOrientationModifier(TRUE);	


	if (targetGroup1.GetPlayerSubjectCount())
	{
	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
					it != targetGroup1.PlayerSubjectEnd(); ++it)
				{
					pModifier1.ApplyTo((CPlayer*)*it);
				}
		
	if (targetGroup2.GetCardSubjectCount())
	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{		
				pModifier2.ApplyTo((CCard*)it->GetPointer());
		}
	}
	return FALSE;
}

//____________________________________________________________________________
//
CHinderCard::CHinderCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Hinder"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Graveyard, TRUE, CardPlacement::TopOrBottom);
}

//____________________________________________________________________________
//
CMysticRestraintsCard::CMysticRestraintsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mystic Restraints"), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CMysticRestraintsCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddFlash(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	m_pChgPwrTghAttrEnchant->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CMysticRestraintsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(true);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CHankyuCard::CHankyuCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hankyu"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHankyuCard::CreateEquipmentAbility1)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHankyuCard::CreateEquipmentAbility2)));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CHankyuCard::CreateEquipmentAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pCard,
			_T("")));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetAbilityText(_T("Put an aim counter on Hankyu with"));
	cpEquipAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHankyuCard::BeforeResolution));
	//cpEquipAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(AIM_COUNTER, +1, false));

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

counted_ptr<CAbility> CHankyuCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, true,
			Life(-0), PreventableType::Preventable));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(AIM_COUNTER), SpecialNumber::All);
	cpEquipAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpEquipAbility->SetExtraActionValueVector(ContextValue(+1));

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CHankyuCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardCounterModifier* pModifier = new CCardCounterModifier(AIM_COUNTER, +1, false);
	pModifier->ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
COrochiEggwatcherCard::COrochiEggwatcherCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Orochi Eggwatcher"), CardType::Creature, CREATURE_TYPE2(Snake, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1), Power(3), Life(3), _T("Shidako, Broodmistress"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&COrochiEggwatcherCard::OnResolutionCompleted))
{	
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			_T("Snake F"), 2877, 1));	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CFlipCreatureCard::CanPlayUnflipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+3), Life(+3),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

void COrochiEggwatcherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pSurvey->GetCardContainer());

	if (nCount >= 10 && this->GetZoneId() == ZoneId::Battlefield)
		Flip();
}

//____________________________________________________________________________
//
CNezumiShortfangCard::CNezumiShortfangCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Nezumi Shortfang"), CardType::Creature, CREATURE_TYPE2(Rat, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1), Power(3), Life(3), _T("Stabwhisker the Odious"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNezumiShortfangCard::OnResolutionCompleted))
{	
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Rogue, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, TRUE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE, TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayUnflipped)));
  
		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNezumiShortfangCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNezumiShortfangCard::BeforeResolution));
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNezumiShortfangCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsFlipped() == TRUE);
}

bool CNezumiShortfangCard::BeforeResolution(CNezumiShortfangCard::TriggeredAbility::TriggeredActionType* pAction)
{
	if (!GetOrientation()->IsFlipped()) return false; 

	CZone* pHand = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() >= 3)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(3 - pHand->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

void CNezumiShortfangCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize() == 0)
		Flip();
}

//____________________________________________________________________________
//
CAkkiLavarunnerCard::CAkkiLavarunnerCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Akki Lavarunner"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1), Power(2), Life(2), _T("Tok-Tok, Volcano Born"))
{	
	GetCreatureKeyword()->AddHaste(false);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Warrior, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier(CreatureKeyword::Haste, false, false);
	CCardKeywordModifier* pModifier4 = new CCardKeywordModifier(CardKeyword::ProtectionFromRed, true, false);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);
	AddCardModifier(pModifier4);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback,
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkkiLavarunnerCard::SetTriggerContext1));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback,
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		cpAbility->SetSkipStack(true);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Red, false));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkkiLavarunnerCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAkkiLavarunnerCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	return !GetOrientation()->IsFlipped();
}

bool CAkkiLavarunnerCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{
	if (!GetOrientation()->IsFlipped()) return false;
	if ((damage.m_DamageType & DamageType::_NonLoopDamage).Any()) return false;

	triggerContext.m_LifeModifier.SetSourceCard(pFromCard);
	triggerContext.m_LifeModifier.SetDamageType(damage.m_DamageType | DamageType::_NonLoopDamage);

	return true;
}

//____________________________________________________________________________
//
CBudokaGardenerCard::CBudokaGardenerCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Budoka Gardener"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1), Power(3), Life(3), _T("Dokai, Weaver of Life"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CBudokaGardenerCard::OnResolutionCompleted))
{	
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>( this,
				_T(""),
				CCardFilter::GetFilter(_T("lands")),
				ZoneId::Battlefield, false, true, false));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		cpAbility->AddTapCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CFlipCreatureCard::CanPlayUnflipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBudokaGardenerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

void CBudokaGardenerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pSurvey->GetCardContainer());

	if (nCount >= 10 && this->GetZoneId() == ZoneId::Battlefield)
		Flip();
}

bool CBudokaGardenerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Elemental N"), 2933));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2933); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Elemental N")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nLands));
		pCreature->SetPrintedToughness(Life(nLands));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CBushiTenderfootCard::CBushiTenderfootCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Bushi Tenderfoot"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1), Power(3), Life(4), _T("Kenzo the Hardhearted"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Soldier, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Samurai, TRUE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier(CreatureKeyword::DoubleStrike, true, false);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBushiTenderfootCard::SetTriggerContext1));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Bushido 2
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBushiTenderfootCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBushiTenderfootCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CBushiTenderfootCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	return (GetOrientation()->IsFlipped() == TRUE);
}

//____________________________________________________________________________
//
CInitiateOfBloodCard::CInitiateOfBloodCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Initiate of Blood"), CardType::Creature, CREATURE_TYPE2(Ogre, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2), Power(4), Life(4), _T("Goka the Unjust"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CInitiateOfBloodCard::OnResolutionCompleted))
{	
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false,
				Life(-1),
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CFlipCreatureCard::CanPlayUnflipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false,
				Life(-4),
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

void CInitiateOfBloodCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Initiate of Blood Effect"), 61051, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CJushiApprenticeCard::CJushiApprenticeCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Jushi Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2), Power(2), Life(3), _T("Tomoya the Revealer"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CJushiApprenticeCard::OnResolutionCompleted))
{	
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2") BLUE_MANA_TEXT, 1));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CFlipCreatureCard::CanPlayUnflipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 0));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJushiApprenticeCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

void CJushiApprenticeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (pAbilityAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize() >= 9)
		Flip();
}

bool CJushiApprenticeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue context(pAction->GetValue());
	context.nValue1 = pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize();

	const CPlayer* pPlayer = pTargetAction->GetTargetGroup().GetFirstPlayerSubject();
	pTargetAction->GetTargetGroup().SetValue(pPlayer, context);

	return true;
}

//____________________________________________________________________________
//
CGhostlyPrisonCard::CGhostlyPrisonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ghostly Prison"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
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
CNezumiGraverobberCard::CNezumiGraverobberCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Nezumi Graverobber"), CardType::Creature, CREATURE_TYPE2(Rat, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1), Power(4), Life(2), _T("Nighteyes the Desecrator"))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNezumiGraverobberCard::OnResolutionCompleted))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Rogue, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Wizard, TRUE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new NegateCardComparer(new CardControllerComparer(this)),
				ZoneId::Graveyard, ZoneId::Exile, true, MoveType::Others));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CFlipCreatureCard::CanPlayUnflipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				__T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, false, MoveType::Others));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

void CNezumiGraverobberCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pGrave = pAbilityAction->GetAssociatedCard()->GetController()->GetZoneById(ZoneId::Graveyard);
	if ((pGrave->GetSize() == 0) && bResult)
		Flip();
}

//____________________________________________________________________________
//
CStudentOfElementsCard::CStudentOfElementsCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Student of Elements"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1), Power(3), Life(3), _T("Tobita, Master of Winds"))
	, m_cpListener(VAR_NAME(m_cpListener), CCreatureKeyword::Listener::EventCallback(this,
			&CStudentOfElementsCard::OnCreatureKeywordChanged))
{
	GetCreatureKeyword()->AddListener(m_cpListener.GetPointer());

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Flying));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new FlippedComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

void CStudentOfElementsCard::OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword)
{
	if (!GetOrientation()->IsFlipped() && pCreatureKeyword->Flying())
		Flip();
}

//____________________________________________________________________________
//
CDevouringGreedCard::CDevouringGreedCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Devouring Greed"), CardType::Sorcery | CardType::Arcane, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-2),
		PreventableType::NotPreventable)
	, m_CardFilter(_T("a Spirit"), _T("Spirits"), new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))
{
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(SpecialNumber::Any, &m_CardFilter);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevouringGreedCard::BeforeResolution));

}

bool CDevouringGreedCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue context(pAction->GetValue());
	context.nValue1 += -2 * nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), context);

	return true;
}

//____________________________________________________________________________
//
CDevouringRageCard::CDevouringRageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Devouring Rage"), CardType::Instant | CardType::Arcane, nID, AbilityType::Instant,
		_T("4") RED_MANA_TEXT,
		Power(+3), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		true, PreventableType::NotPreventable)
	, m_CardFilter(_T("a Spirit"), _T("Spirits"), new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))
{
	m_pTargetChgPwrTghAttrSpell->GetCost().AddSacrificeCardCost(SpecialNumber::Any, &m_CardFilter);
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevouringRageCard::BeforeResolution));
}

bool CDevouringRageCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue context(pAction->GetValue());
	context.nValue2 += 3 * nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), context);

	return true;
}

//____________________________________________________________________________
//
CNightDealingsCard::CNightDealingsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Night Dealings"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(_T("a nonland card with converted mana cost X"), _T("nonland cards with converted mana cost X"), new TrueCardComparer)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().SetToOpponentsOnly(true);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightDealingsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNightDealingsCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter, 
				ZoneId::Hand,
				false, true, false));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNightDealingsCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				&m_CardFilter, 
				ZoneId::Hand,
				false, true, false));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(THEFT_COUNTER), SpecialNumber::AnyNegative);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNightDealingsCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNightDealingsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage damage) const
{
	int nPoints = GET_INTEGER(damage.m_nLifeDelta);
	if (nPoints >= 0) return false;

	triggerContext.nValue1 = -nPoints;

	return true;
}

bool CNightDealingsCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(THEFT_COUNTER, triggerContext.nValue1, false);
	pModifier.ApplyTo(this);
	
	return true;
}

bool CNightDealingsCard::BeforeResolution2(CAbilityAction* pAction)
{
	m_CardFilter.RemoveAllComparers();
	m_CardFilter.AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(0));

	return true;
}

bool CNightDealingsCard::BeforeResolution3(CAbilityAction* pAction)
{
	int nCMC = -pAction->GetCostConfigEntry().GetExtraValue();

	m_CardFilter.RemoveAllComparers();
	m_CardFilter.AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));

	return true;
}

//____________________________________________________________________________
//
CKikuNightsFlowerCard::CKikuNightsFlowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiku, Night's Flower"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Assassin), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericTargetCreatureSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericTargetCreatureSpell>>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, new AnyCreatureComparer()));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(new CDamagetoItselfModifier(DamageType::AbilityDamage | DamageType::NonCombatDamage));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHisokaMinamoSenseiCard::CHisokaMinamoSenseiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hisoka, Minamo Sensei"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHisokaMinamoSenseiCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHisokaMinamoSenseiCard::BeforeResolution(CAbilityAction* pAction) const
{
	return pAction->GetCostConfigEntry().GetDiscardCards()->GetAt(0)->GetConvertedManaCost() == pAction->GetAssociatedCard()->GetConvertedManaCost();
}

//____________________________________________________________________________
//
CYamabushisFlameCard::CYamabushisFlameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yamabushi's Flame"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-3), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::NonCombatDamage | DamageType::SpellDamage |  DamageType::ToExileDamage);

	cpSpell->AddAbilityTag(AbilityTag::DamageSource);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CYamabushisStormCard::CYamabushisStormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Yamabushi's Storm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		Life(-1),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage |  DamageType::ToExileDamage)
{
}

//____________________________________________________________________________
//
CBenBenAkkiHermitCard::CBenBenAkkiHermitCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ben-Ben, Akki Hermit"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CBenBenAkkiHermitCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericTargetCreatureSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericTargetCreatureSpell>>(this,
			_T(""),
			new AttackingCreatureComparer));
		
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

void CBenBenAkkiHermitCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::Mountain, false));
	m_CardFilter_temp.AddComparer(new UntappedComparer);

	int n = m_CardFilter_temp.CountIncluded(pInplay->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier(Life(-n), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CUyoSilentProphetCard::CUyoSilentProphetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Uyo, Silent Prophet"), CardType::_LegendaryCreature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddReturnFromPlayCardCost(2, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSamuraiOfThePaleCurtainCard::CSamuraiOfThePaleCurtainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Samurai of the Pale Curtain"), CardType::Creature, CREATURE_TYPE2(Fox, Samurai), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PermanentsExileInsteadGraveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CManaSeismCard::CManaSeismCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mana Seism"), CardType::Sorcery, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CManaSeismCard::OnNumberSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaSeismCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CManaSeismCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

	int nLands = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nLands > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nLands; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Sacrifice %d land"),
					i);
			else
				entry.strText.Format(_T("Sacrifice %d lands"),
					i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CManaSeismCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
						strMessage.Format(_T("%s sacrifices %d land"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s sacrifices %d lands"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new CardTypeComparer(CardType::_Land, false));

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
				
				CManaPoolModifier pModifier2 =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));

				pModifier1.ApplyTo(pSelectionPlayer);
				for (int i=0; i<nValue; i++) pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CBrothersYamazakiCard::CBrothersYamazakiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brothers Yamazaki"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardNameComparer(_T("Brothers Yamazaki")),
				Power(+2), Life(+2), CreatureKeyword::Haste));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMindblazeCard::CMindblazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mindblaze"), CardType::Sorcery, nID)
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMindblazeCard::OnNameSelected))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMindblazeCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindblazeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMindblazeCard::BeforeResolution(CAbilityAction* pAction)
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

void CMindblazeCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				if (pTarget->GetZoneById(ZoneId::Library)->GetSize() > 0)
				{
					std::vector<SelectionEntry> entries;
					for (int i = 1; i <= pTarget->GetZoneById(ZoneId::Library)->GetSize() + 1; ++i)
						{
							SelectionEntry selectionEntry;

							selectionEntry.dwContext = i;
							selectionEntry.strText.Format(_T("Guess that there are %d cards named %s in %s's library"), i, pSelected->GetPrintedCardName(), pTarget->GetPlayerName());

							entries.push_back(selectionEntry);
						}
					m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, (DWORD)pTarget, (DWORD)pSelected);
				}
				
				return;
			}
		}
}

void CMindblazeCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nNumber = (int)it->dwContext;
			CCard* pSelected = (CCard*)dwContext2;
			CPlayer* pTarget = (CPlayer*)dwContext1;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s guesses that there are %d cards named %s in %s's library"), pSelectionPlayer->GetPlayerName(), nNumber, pSelected->GetPrintedCardName(), pTarget->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			CCardFilter m_CardFilter;
			m_CardFilter.SetComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

			CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		
			pModifier1.ApplyTo(pTarget);

			if (m_CardFilter.CountIncluded(pTarget->GetZoneById(ZoneId::Library)->GetCardContainer()) == nNumber)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(-8), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				pModifier2.ApplyTo(pTarget);
			}

			pTarget->GetZoneById(ZoneId::Library)->Shuffle();

			return;
		}
}

//____________________________________________________________________________
//
CSoilshaperCard::CSoilshaperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soilshaper"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoilshaperCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSoilshaperCard::BeforeResolution(CAbilityAction* pAction) const
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

CGodoBanditWarlordCard::CGodoBanditWarlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Godo, Bandit Warlord"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Barbarian), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(3))
		,bFirstAttack(true)
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, 
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
		cpAbility->SetToZone(ZoneId::Battlefield);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGodoBanditWarlordCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGodoBanditWarlordCard::BeforeResolution));
		
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

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGodoBanditWarlordCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGodoBanditWarlordCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGodoBanditWarlordCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
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

bool CGodoBanditWarlordCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardOrientationModifier* pModifier1 = new CCardOrientationModifier(FALSE);
	pModifier1->ApplyTo(this);

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Samurai), false));

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(pModifier1));

	pModifier2.ApplyTo(pController);

	CFastCombatModifier pModifier3 = CFastCombatModifier(m_pGame);

	pModifier3.ApplyTo(pController);
	
	return true;
}

bool CGodoBanditWarlordCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	bFirstAttack = TRUE;

	return true;
}

//____________________________________________________________________________
//
CWickedAkubaCard::CWickedAkubaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wicked Akuba"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, pDamagedPlayers(2)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE, new CWickedAkubaTargeting));
		ATLASSERT(cpAbility);

		cpAbility->GetTargetModifier().CPlayerModifiers::Add(
			new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWickedAkubaCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWickedAkubaCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWickedAkubaCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CWickedAkubaCard::CWickedAkubaTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	int PlayerID = 0;
	const CWickedAkubaCard* pThisCard = (CWickedAkubaCard*)this->GetSourceCard();

	for (int ip = 0; ip < pThisCard->GetGame()->GetPlayerCount(); ++ip)
		if ((pThisCard->GetGame()->GetPlayer(ip) == pPlayer) && (pThisCard->pDamagedPlayers[ip] == 1))
			return true;	

	return false;
}

BOOL CWickedAkubaCard::CWickedAkubaTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

bool CWickedAkubaCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) == pPlayer)
		{
			pDamagedPlayers[ip] = 1;
			break;
		}

	return false;
}

bool CWickedAkubaCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pDamagedPlayers[ip] = 0;

	return false;
}

bool CWickedAkubaCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCMC = pAction->GetCostConfigEntry().GetExtraValue();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pDamagedPlayers[ip] == 1)
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CTatsumasaTheDragonsFangCard::CTatsumasaTheDragonsFangCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tatsumasa, the Dragon's Fang"), CardType::_LegendaryArtifact | CardType::Equipment, nID, 
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+5), FALSE));
		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+5), this, 
			PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("6")));

		cpAbility->AddExileCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTatsumasaTheDragonsFangCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTatsumasaTheDragonsFangCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CCountedCardContainer pSubjects;
	CCountedCardContainer pTokens;

	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Dragon Spirit"), 62045, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CDoubleContainerEffectModifier pModifier2 = CDoubleContainerEffectModifier(GetGame(), _T("Tatsumasa, the Dragon's Fang Effect"), 61073, &pTokens, &pSubjects);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKashiTribeReaverCard::CKashiTribeReaverCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Kashi-Tribe Reaver"), CardType::Creature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2),
		_T("1") GREEN_MANA_TEXT)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKashiTribeReaverCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKashiTribeReaverCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKashiTribeReaverCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CKashiTribeReaverCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	
	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CKashiTribeWarriorsCard::CKashiTribeWarriorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kashi-Tribe Warriors"), CardType::Creature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKashiTribeWarriorsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKashiTribeWarriorsCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKashiTribeWarriorsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CKashiTribeWarriorsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	
	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
COrochiRangerCard::COrochiRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orochi Ranger"), CardType::Creature, CREATURE_TYPE2(Snake, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrochiRangerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrochiRangerCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool COrochiRangerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool COrochiRangerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	
	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
