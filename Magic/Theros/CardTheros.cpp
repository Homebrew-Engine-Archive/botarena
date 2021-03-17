#include "stdafx.h"
#include "CardTheros.h"

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
		DEFINE_CARD(CAbhorrentOverlordCard);
		DEFINE_CARD(CAgentOfHorizonsCard);
		DEFINE_CARD(CAgentOfTheFatesCard);
		DEFINE_CARD(CAkroanCrusaderCard);
		DEFINE_CARD(CAkroanHopliteCard);
		DEFINE_CARD(CAkroanHorseCard);
		DEFINE_CARD(CAnaxAndCymedeCard);
		DEFINE_CARD(CAngerOfTheGodsCard);
		DEFINE_CARD(CAnthousaSetessanHeroCard);
		DEFINE_CARD(CAnvilwroughtRaptorCard);
		DEFINE_CARD(CAqueousFormCard);
		DEFINE_CARD(CArborColossusCard);
		DEFINE_CARD(CArenaAthleteCard);
		DEFINE_CARD(CArtisansSorrowCard);
		DEFINE_CARD(CAshenRiderCard);
		DEFINE_CARD(CAshiokNightmareWeaverCard);
		DEFINE_CARD(CAsphodelWandererCard);
		DEFINE_CARD(CBattlewiseHopliteCard);
		DEFINE_CARD(CBattlewiseValorCard);
		DEFINE_CARD(CBenthicGiantCard);
		DEFINE_CARD(CBidentOfThassaCard);
		DEFINE_CARD(CBloodTollHarpyCard);
		DEFINE_CARD(CBoonOfErebosCard);
		DEFINE_CARD(CBorderlandMinotaurCard);
		DEFINE_CARD(CBoulderfallCard);
		DEFINE_CARD(CBowOfNyleaCard);
		DEFINE_CARD(CBreachingHippocampCard);
		DEFINE_CARD(CBronzeSableCard);
		DEFINE_CARD(CBurnishedHartCard);
		DEFINE_CARD(CCavalryPegasusCard);
		DEFINE_CARD(CCentaurBattlemasterCard);
		DEFINE_CARD(CChosenByHeliodCard);
		DEFINE_CARD(CChroniclerOfHeroesCard);
		DEFINE_CARD(CCoastlineChimeraCard);
		DEFINE_CARD(CColossusOfAkrosCard);
		DEFINE_CARD(CCommuneWithTheGodsCard);
		DEFINE_CARD(CCoordinatedAssaultCard);
		DEFINE_CARD(CCracklingTritonCard);
		DEFINE_CARD(CCurseOfTheSwineCard);
		DEFINE_CARD(CCutthroatManeuverCard);
		DEFINE_CARD(CDarkBetrayalCard);
		DEFINE_CARD(CDauntlessOnslaughtCard);
		DEFINE_CARD(CDeathbellowRaiderCard);
		DEFINE_CARD(CDefendTheHearthCard);
		DEFINE_CARD(CDestructiveRevelryCard);
		DEFINE_CARD(CDiscipleOfPhenaxCard);
		DEFINE_CARD(CDissolveCard);
		DEFINE_CARD(CDragonMantleCard);
		DEFINE_CARD(CElspethSunsChampionCard);
		DEFINE_CARD(CEmberSwallowerCard);
		DEFINE_CARD(CEpharasWardenCard);
		DEFINE_CARD(CEvangelOfHeliodCard);
		DEFINE_CARD(CFabledHeroCard);
		DEFINE_CARD(CFadeIntoAntiquityCard);
		DEFINE_CARD(CFanaticOfMogisCard);
		DEFINE_CARD(CFateForetoldCard);
		DEFINE_CARD(CFavoredHopliteCard);
		DEFINE_CARD(CFelhideMinotaurCard);
		DEFINE_CARD(CFeralInvocationCard);
		DEFINE_CARD(CFiredrinkerSatyrCard);
		DEFINE_CARD(CFlamecastWheelCard);
		DEFINE_CARD(CFlamespeakerAdeptCard);
		DEFINE_CARD(CFleecemaneLionCard);
		DEFINE_CARD(CFleetfeatherSandalsCard);
		DEFINE_CARD(CFleshmadSteedCard);
		DEFINE_CARD(CGiftOfImmortalityCard);
		DEFINE_CARD(CGlareOfHeresyCard);
		DEFINE_CARD(CGodsWillingCard);
		DEFINE_CARD(CGrayMerchantOfAsphodelCard);
		DEFINE_CARD(CGuardiansOfMeletisCard);
		DEFINE_CARD(CHammerOfPurphorosCard);
		DEFINE_CARD(CHerosDownfallCard);
		DEFINE_CARD(CHorizonChimeraCard);
		DEFINE_CARD(CHorizonScholarCard);
		DEFINE_CARD(CHundredHandedOneCard);
		DEFINE_CARD(CHuntTheHunterCard);
		DEFINE_CARD(CHythoniaTheCruelCard);
		DEFINE_CARD(CIllTemperedCyclopsCard);
		DEFINE_CARD(CInsatiableHarpyCard);
		DEFINE_CARD(CKarametrasAcolyteCard);
		DEFINE_CARD(CKeepsakeGorgonCard);
		DEFINE_CARD(CKragmaWarcallerCard);
		DEFINE_CARD(CLabyrinthChampionCard);
		DEFINE_CARD(CLagonnaBandElderCard);
		DEFINE_CARD(CLashOfTheWhipCard);
		DEFINE_CARD(CLeoninSnarecasterCard);
		DEFINE_CARD(CLightningStrikeCard);
		DEFINE_CARD(CLostInALabyrinthCard);
		DEFINE_CARD(CMarchOfTheReturnedCard);
		DEFINE_CARD(CMasterOfWavesCard);
		//DEFINE_CARD(CMeletisCharlatanCard);
		DEFINE_CARD(CMessengersSpeedCard);
		DEFINE_CARD(CMinotaurSkullcleaverCard);
		DEFINE_CARD(CMistcutterHydraCard);
		DEFINE_CARD(CNessianAspCard);
		DEFINE_CARD(CNykthosShrineToNyxCard);
		DEFINE_CARD(CNyleasDiscipleCard);
		//DEFINE_CARD(CNyleasPresenceCard);
		DEFINE_CARD(COmenspeakerCard);
		DEFINE_CARD(COpalineUnicornCard);
		DEFINE_CARD(COrdealOfErebosCard);
		DEFINE_CARD(COrdealOfHeliodCard);
		DEFINE_CARD(COrdealOfNyleaCard);
		DEFINE_CARD(COrdealOfPurphorosCard);
		DEFINE_CARD(COrdealOfThassaCard);
		DEFINE_CARD(CPeakEruptionCard);
		DEFINE_CARD(CPhalanxLeaderCard);
		DEFINE_CARD(CPharikasCureCard);
		DEFINE_CARD(CPharikasMenderCard);
		DEFINE_CARD(CPheresBandCentaursCard);
		DEFINE_CARD(CPolisCrusherCard);
		DEFINE_CARD(CPortentOfBetrayalCard);
		DEFINE_CARD(CPrescientChimeraCard);
		DEFINE_CARD(CPriestOfIroasCard);
		DEFINE_CARD(CPrognosticSphinxCard);
		DEFINE_CARD(CProphetOfKruphixCard);
		DEFINE_CARD(CProwlersHelmCard);
		DEFINE_CARD(CPyxisOfPandemoniumCard);
		DEFINE_CARD(CRageOfPurphorosCard);
		DEFINE_CARD(CRagebloodShamanCard);
		DEFINE_CARD(CRayOfDissolutionCard);
		DEFINE_CARD(CReadTheBonesCard);
		DEFINE_CARD(CReaperOfTheWildsCard);
		DEFINE_CARD(CRescueFromTheUnderworldCard);
		DEFINE_CARD(CReturnedCentaurCard);
		DEFINE_CARD(CReturnedPhalanxCard);
		DEFINE_CARD(CReverentHunterCard);
		DEFINE_CARD(CSatyrHedonistCard);
		DEFINE_CARD(CSatyrRamblerCard);
		DEFINE_CARD(CScholarOfAthreosCard);
		DEFINE_CARD(CScourgemarkCard);
		DEFINE_CARD(CSeaGodsRevengeCard);
		DEFINE_CARD(CSealockMonsterCard);
		DEFINE_CARD(CSedgeScorpionCard);
		DEFINE_CARD(CSentryOfTheUnderworldCard);
		DEFINE_CARD(CSetessanBattlePriestCard);
		DEFINE_CARD(CSetessanGriffinCard);
		DEFINE_CARD(CShipwreckSingerCard);
		DEFINE_CARD(CShreddingWindsCard);
		DEFINE_CARD(CSilentArtisanCard);
		DEFINE_CARD(CSipOfHemlockCard);
		DEFINE_CARD(CSoldierOfThePantheonCard);
		DEFINE_CARD(CSparkJoltCard);
		//DEFINE_CARD(CSpearOfHeliodCard);
		DEFINE_CARD(CSpellheartChimeraCard);
		DEFINE_CARD(CStaunchHeartedWarriorCard);
		DEFINE_CARD(CSteamAuguryCard);
		DEFINE_CARD(CStoneshockGiantCard);
		DEFINE_CARD(CStormbreathDragonCard);
		DEFINE_CARD(CStymiedHopesCard);
		DEFINE_CARD(CSwanSongCard);
		DEFINE_CARD(CSylvanCaryatidCard);
		DEFINE_CARD(CTempleOfAbandonCard);
		DEFINE_CARD(CTempleOfDeceitCard);
		DEFINE_CARD(CTempleOfMysteryCard);
		DEFINE_CARD(CTempleOfSilenceCard);
		DEFINE_CARD(CTempleOfTriumphCard);
		DEFINE_CARD(CThassasBountyCard);
		DEFINE_CARD(CTimeToFeedCard);
		DEFINE_CARD(CTitanOfEternalFireCard);
		DEFINE_CARD(CTitansStrengthCard);
		DEFINE_CARD(CTormentedHeroCard);
		DEFINE_CARD(CTravelingPhilosopherCard);
		DEFINE_CARD(CTriadOfFatesCard);
		DEFINE_CARD(CTritonFortuneHunterCard);
		DEFINE_CARD(CTritonShorethiefCard);
		DEFINE_CARD(CTwoHeadedCerberusCard);
		DEFINE_CARD(CTymaretTheMurderKingCard);
		DEFINE_CARD(CUnderworldCerberusCard);
		DEFINE_CARD(CUnknownShoresCard);
		DEFINE_CARD(CVanquishTheFoulCard);
		DEFINE_CARD(CVaporkinCard);
		DEFINE_CARD(CVipersKissCard);
		DEFINE_CARD(CVoyagesEndCard);
		DEFINE_CARD(CVoyagingSatyrCard);
		DEFINE_CARD(CVulpineGoliathCard);
		DEFINE_CARD(CWavecrashTritonCard);
		DEFINE_CARD(CWhipOfErebosCard);
		DEFINE_CARD(CWildCelebrantsCard);
		DEFINE_CARD(CWingsteedRiderCard);
		DEFINE_CARD(CWitchesEyeCard);
		DEFINE_CARD(CXenagosTheRevelerCard);
		DEFINE_CARD(CYokedOxCard);		
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CCavalryPegasusCard::CCavalryPegasusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cavalry Pegasus"), CardType::Creature, CREATURE_TYPE(Pegasus), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Human"), _T("Humans"), new CreatureTypeComparer(CREATURE_TYPE(Human), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
	m_CardFilter.AddComparer(new AttackingCreatureComparer);
	m_CardFilter.SetFilterName(_T("attacking Human"), _T("attacking Humans"));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbhorrentOverlordCard::CAbhorrentOverlordCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abhorrent Overlord"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	{
		// token creation
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Harpy"), 62057, 0);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAbhorrentOverlordCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		// upkeep sacrifice a creature
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAbhorrentOverlordCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) 
{

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.nValue1 = pAction->GetController()->GetDevotion(CManaCost::Color::Black);

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CMasterOfWavesCard::CMasterOfWavesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of Waves"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
	{
		// token creation
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Elemental U"), 62058, 0);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMasterOfWavesCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//elementals you control get +1/+1
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Elemental), false),	
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	} 
}

bool CMasterOfWavesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) 
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.nValue1 = pAction->GetController()->GetDevotion(CManaCost::Color::Blue);

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CGrayMerchantOfAsphodelCard::CGrayMerchantOfAsphodelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gray Merchant of Asphodel"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGrayMerchantOfAsphodelCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrayMerchantOfAsphodelCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) 
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	int LifeDelta = pController->GetDevotion(CManaCost::Color::Black); // life change amount

	CLifeModifier pModifier1 = CLifeModifier(Life(-LifeDelta), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
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
CFanaticOfMogisCard::CFanaticOfMogisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fanatic of Mogis"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFanaticOfMogisCard::BeforeResolution));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	
}

bool CFanaticOfMogisCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCount = pController->GetDevotion(CManaCost::Color::Red);
	CLifeModifier pModifier = CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{		
			pModifier.ApplyTo(pPlayer);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CKarametrasAcolyteCard::CKarametrasAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karametra's Acolyte"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add an amount of {G} to your mana pool equal to your devotion to green"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKarametrasAcolyteCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CKarametrasAcolyteCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCount = pAction->GetController()->GetDevotion(CManaCost::Color::Green); 
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (nCount > 0) 
	{
		for (int i=0; i<nCount; i++) 
			pModifier.ApplyTo(GetController());
	}
	return true;
	
}

//____________________________________________________________________________
//
CReverentHunterCard::CReverentHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reverent Hunter"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::CardChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReverentHunterCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CReverentHunterCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay()) return true;

	int nCounterCount = pAction->GetController()->GetDevotion(CManaCost::Color::Green); 

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nCounterCount, true);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CVanquishTheFoulCard::CVanquishTheFoulCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Vanquish the Foul"), CardType::Sorcery, nID,
		_T("5") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CVanquishTheFoulCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::greater_equal<int>>(4));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CVanquishTheFoulCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CWingsteedRiderCard::CWingsteedRiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wingsteed Rider"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWingsteedRiderCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CWingsteedRiderCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CIllTemperedCyclopsCard::CIllTemperedCyclopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ill-Tempered Cyclops"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("5") RED_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Monstrosity 3:"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIllTemperedCyclopsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIllTemperedCyclopsCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CArborColossusCard::CArborColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arbor Colossus"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArborColossusCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArborColossusCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CColossusOfAkrosCard::CColossusOfAkrosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Colossus of Akros"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("8"), Power(10), Life(10))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("10")));

		cpAbility->SetAbilityText(_T("Monstrosity 10:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CColossusOfAkrosCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Monstrous, false));
		cpAbility->SetListenToKeyword();
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample | CreatureKeyword::DefenderMayAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CColossusOfAkrosCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +10);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CEmberSwallowerCard::CEmberSwallowerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ember Swallower"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEmberSwallowerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->GetGatherer().SetSubjectCount(3, 3, TRUE);

		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEmberSwallowerCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CFleecemaneLionCard::CFleecemaneLionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleecemane Lion"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 1:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFleecemaneLionCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Monstrous, false));
		cpAbility->SetListenToKeyword();
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof | CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFleecemaneLionCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CHundredHandedOneCard::CHundredHandedOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hundred-Handed One"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHundredHandedOneCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Monstrous, false));
		cpAbility->SetListenToKeyword();
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Reach);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHundredHandedOneCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CHythoniaTheCruelCard::CHythoniaTheCruelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hythonia the Cruel"), CardType::_LegendaryCreature, CREATURE_TYPE(Gorgon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(6))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHythoniaTheCruelCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Gorgon), false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHythoniaTheCruelCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CKeepsakeGorgonCard::CKeepsakeGorgonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keepsake Gorgon"), CardType::Creature, CREATURE_TYPE(Gorgon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 1:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKeepsakeGorgonCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Gorgon), false));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKeepsakeGorgonCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CNessianAspCard::CNessianAspCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nessian Asp"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("6") GREEN_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Monstrosity 4:"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNessianAspCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CNessianAspCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +4);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPolisCrusherCard::CPolisCrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nessian Asp"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		GetCreatureKeyword()->AddTrample(FALSE);
		GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("enchantments")));

		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPolisCrusherCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPolisCrusherCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPolisCrusherCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPolisCrusherCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CPolisCrusherCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	if (GetCreatureKeyword()->HasMonstrous()) return true;
	else return false;
}

bool CPolisCrusherCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (IsInplay() && !GetCreatureKeyword()->HasMonstrous()) return false;
	
	CCard* pTarget = pAction->GetAssociatedCard();
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());

	pModifier.ApplyTo(pTarget);
	return false;
}

//____________________________________________________________________________
//
CStoneshockGiantCard::CStoneshockGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stoneshock Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("6") RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStoneshockGiantCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Stoneshock Giant Effect"), 61130, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("Monstrous trigger"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStoneshockGiantCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSealockMonsterCard::CSealockMonsterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sealock Monster"), CardType::Creature, CREATURE_TYPE(Octopus), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CSealockMonsterCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSealockMonsterCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSealockMonsterCard::BeforeResolution2));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSealockMonsterCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CSealockMonsterCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CSealockMonsterCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardTypeModifier pModifier1 = CCardTypeModifier(CardType::Island);
	CCardAbilityModifier pModifier2 = CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CSealockMonsterCard::CreateAbility));

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	return true;
}

counted_ptr<CAbility> CSealockMonsterCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLUE_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormbreathDragonCard::CStormbreathDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormbreath Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Monstrosity 3:"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStormbreathDragonCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(MONSTROUS_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStormbreathDragonCard::BeforeResolution2));
	
		cpAbility->SetAbilityName(_T("Monstrous trigger"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStormbreathDragonCard::BeforeResolution1(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCreatureKeyword()->HasMonstrous()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +3);
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Monstrous, TRUE, FALSE);
	CSpecialEffectModifier pModifier3 = CSpecialEffectModifier(this, MONSTROUS_TRIGGER_ID);       

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(this);

	return true;
}

bool CStormbreathDragonCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			CLifeModifier pModifier = CLifeModifier(Life(-pPlayer->GetZoneById(ZoneId::Hand)->GetSize()), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			pModifier.ApplyTo(pPlayer);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CAgentOfTheFatesCard::CAgentOfTheFatesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Agent of the Fates"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	//Heroic

	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAgentOfTheFatesCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	
	AddAbility(cpAbility.GetPointer());
}

bool CAgentOfTheFatesCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CAkroanCrusaderCard::CAkroanCrusaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkroanCrusaderCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier N"), 62059, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CAkroanCrusaderCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CAnaxAndCymedeCard::CAnaxAndCymedeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anax and Cymede"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);

	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnaxAndCymedeCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAnaxAndCymedeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CAnthousaSetessanHeroCard::CAnthousaSetessanHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anthousa, Setessan Hero"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	//Heroic

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAnthousaSetessanHeroCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectCount(0, 3);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnthousaSetessanHeroCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAnthousaSetessanHeroCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

bool CAnthousaSetessanHeroCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetActionCommon* pTargetAction = dynamic_cast<CTargetActionCommon*>(pAction);

	CCountedCardContainer pTargets;
	pTargetAction->GetTargetGroup().GetCardSubjects(pTargets);

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier(_T("Warrior AB"), 64086, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	for (int i = 0; i < pTargets.GetSize(); ++i)
	{
		CCard* pCard = pTargets.GetAt(i);

		if (!pCard->IsInplay()) break;
		if (pCard->GetController() != pAction->GetController()) break;
		if (!pCard->GetCardType().IsLand()) break;
		if (pCard->HasProtectionFrom(this, FALSE)) break;
		if (pCard->GetCardKeyword()->HasShroud(this)) break;

		pModifier1->ApplyTo(pCard);
		pModifier2.ApplyTo(pCard);
	}

	return true;
}

//____________________________________________________________________________
//
CArenaAthleteCard::CArenaAthleteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arena Athlete"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	//Heroic

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArenaAthleteCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CArenaAthleteCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CFlamespeakerAdeptCard::CFlamespeakerAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flamespeaker Adept"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetTriggerIndex(SCRY_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
	cpAbility->GetTrigger().SetTriggerinZone(ZoneId::Battlefield);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattlewiseHopliteCard::CBattlewiseHopliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battlewise Hoplite"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CBattlewiseHopliteCard::OnResolutionCompleted))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBattlewiseHopliteCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CBattlewiseHopliteCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

void CBattlewiseHopliteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CCentaurBattlemasterCard::CCentaurBattlemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Battlemaster"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCentaurBattlemasterCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +3));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCentaurBattlemasterCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CFabledHeroCard::CFabledHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fabled Hero"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFabledHeroCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CFabledHeroCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CFavoredHopliteCard::CFavoredHopliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Favored Hoplite"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CFavoredHopliteCard::OnResolutionCompleted))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFavoredHopliteCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CFavoredHopliteCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

void CFavoredHopliteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage, TRUE);
	pModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CLabyrinthChampionCard::CLabyrinthChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Labyrinth Champion"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	//Heroic

	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLabyrinthChampionCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CLabyrinthChampionCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CPhalanxLeaderCard::CPhalanxLeaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phalanx Leader"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CPhalanxLeaderCard::OnResolutionCompleted))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhalanxLeaderCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CPhalanxLeaderCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

void CPhalanxLeaderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			pModifier.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CSetessanBattlePriestCard::CSetessanBattlePriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Setessan Battle Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSetessanBattlePriestCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSetessanBattlePriestCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CStaunchHeartedWarriorCard::CStaunchHeartedWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Staunch-Hearted Warrior"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStaunchHeartedWarriorCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +2));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CStaunchHeartedWarriorCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CTormentedHeroCard::CTormentedHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tormented Hero"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		BLACK_MANA_TEXT, Power(2), Life(1))
{
	SetIntoPlayTapped();

	//Heroic

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTormentedHeroCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTormentedHeroCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CTormentedHeroCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

bool CTormentedHeroCard::BeforeResolution(CAbilityAction* pAction)
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
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
CTritonFortuneHunterCard::CTritonFortuneHunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Triton Fortune Hunter"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	//Heroic

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTritonFortuneHunterCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CTritonFortuneHunterCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

//____________________________________________________________________________
//
CWavecrashTritonCard::CWavecrashTritonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wavecrash Triton"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
	//Heroic

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWavecrashTritonCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWavecrashTritonCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CWavecrashTritonCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	
	m_CardFilter1.AddComparer(new SpecificCardComparer(this));
	m_CardFilter2.AddComparer(new StackTargetingComparer(&m_CardFilter1));

	if (m_CardFilter2.IsCardIncluded(pCard)) return true;
	else return false;
}

bool CWavecrashTritonCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CAkroanHorseCard::CAkroanHorseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Horse"), CardType::_ArtifactCreature, CREATURE_TYPE(Horse), nID,
		_T("4"), Power(0), Life(4))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAkroanHorseCard::OnSelectionDone))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAkroanHorseCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef	TTriggeredAbility<CTriggeredAbility<>, CWhenNodeChanged>
			TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAkroanHorseCard::BeforeResolution2));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAkroanHorseCard::BeforeResolution1(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pAction->GetController() != GetGame()->GetPlayer(ip))
		{
			SelectionEntry entry;
			entry.dwContext = ip;
			entry.strText.Format(_T("choose %s"), GetGame()->GetPlayer(ip)->GetPlayerName());
			entries.push_back(entry);
		}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());	

	return true;
}

void CAkroanHorseCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(it->dwContext);

			Move(pPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);
		
			return;
		}
}

bool CAkroanHorseCard::BeforeResolution2(CAbilityAction* pAction)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Soldier O"), 62060, 1);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetController() != GetGame()->GetPlayer(ip))
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
CElspethSunsChampionCard::CElspethSunsChampionCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Elspeth, Sun's Champion"), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Elspeth, 4)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Soldier P"), 62061,
				3)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T(""),
				new CreaturePowerComparer<std::greater<int>>(3),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Elspeth, Sun's Champion Emblem"), 61131, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Creatures you control get +2/+2 and have flying."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Creatures you control get +2/+2 and have flying."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());			
	}
}

//____________________________________________________________________________
//
CEvangelOfHeliodCard::CEvangelOfHeliodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Evangel of Heliod"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier P"), 62061, 0);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEvangelOfHeliodCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CEvangelOfHeliodCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) 
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.nValue1 = pAction->GetController()->GetDevotion(CManaCost::Color::White);

	pAction->SetTriggerContext(triggerContext);
	
	return true;
}

//____________________________________________________________________________
//
CBidentOfThassaCard::CBidentOfThassaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bident of Thassa"), CardType::Legendary | CardType::Artifact | CardType::GlobalEnchantment, nID,
	_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") BLUE_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Bident of Thassa Effect"), 61132, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhipOfErebosCard::CWhipOfErebosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Whip of Erebos"), CardType::Legendary | CardType::Artifact | CardType::GlobalEnchantment, nID,
	_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CWhipOfErebosCard::OnResolutionCompleted))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		AddAbility(cpAbility.GetPointer());
	}
}

void CWhipOfErebosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
	pModifier1.ApplyTo(pTarget);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());

	CReplacementKeywordModifier pModifier3 = CReplacementKeywordModifier();
		pModifier3.GetModifier().SetToAdd(ReplacementKeyword::PseudoUnearth);
		pModifier3.GetModifier().SetOneTurnOnly(FALSE);
	pModifier3.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CHammerOfPurphorosCard::CHammerOfPurphorosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hammer of Purphoros"), CardType::Legendary | CardType::Artifact | CardType::GlobalEnchantment, nID,
	_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
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
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") RED_MANA_TEXT,
				_T("Golem E"), 62062,
				1));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBowOfNyleaCard::CBowOfNyleaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bow of Nylea"), CardType::Legendary | CardType::Artifact | CardType::GlobalEnchantment, nID,
	_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AttackingCreatureComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-2),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
	   counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,_T("1") GREEN_MANA_TEXT,
				Life(+3), PreventableType::NotPreventable));

	   cpAbility->AddTapCost();
	   AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetSubjectCount(1, 4);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") GREEN_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Choose no targets. Activates"));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCurseOfTheSwineCard::CCurseOfTheSwineCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Curse of the Swine"), CardType::Sorcery, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCurseOfTheSwineCard::OnResolutionCompleted))
	, nBattlefieldCount(2)
{
	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCurseOfTheSwineCard::BeforeResolution));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

bool CCurseOfTheSwineCard::BeforeResolution(CAbilityAction* pAction)
{
	nBattlefieldCount.reserve(GetGame()->GetPlayerCount());

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nBattlefieldCount[ip] = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetSize();

	return true;
}

void CCurseOfTheSwineCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	for (int ip = 0, nDelta; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		nDelta = nBattlefieldCount[ip] - GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetSize();
		if (nDelta > 0)
		{
			CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Boar B"), 62063, nDelta, false);
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

//____________________________________________________________________________
//
CSwanSongCard::CSwanSongCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Swan Song"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant, 
		new CardTypeComparer(CardType::_Enchantment | CardType::Instant | CardType::Sorcery, false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSwanSongCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CSwanSongCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Bird I"), 62064, 1, false);
	pModifier->ApplyTo(pAbilityAction->GetAssociatedCard()->GetController());
}

//____________________________________________________________________________
//
CXenagosTheRevelerCard::CXenagosTheRevelerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Xenagos, the Reveler"), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT,
		PlaneswalkerType::Xenagos, 3)
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CXenagosTheRevelerCard::OnNumberSelected))
	, m_CardSelection(pGame,CSelectionSupport::SelectionCallback(this, &CXenagosTheRevelerCard::OnCardSelected))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->SetAbilityText(_T("add X mana in any combination of {R} and/or {G} to your mana pool, where X is the number of creatures you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CXenagosTheRevelerCard::BeforeResolution1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Satyr"), 62065,
				1)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), 0);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CXenagosTheRevelerCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());			
	}
}

bool CXenagosTheRevelerCard::BeforeResolution1(CAbilityAction* pAction)
{
	CZone* pBattle = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	if (n > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= n; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;

			if (i == 0)
				selectionEntry.strText.Format(_T("%d green mana"), n);
			else if (i == n)
				selectionEntry.strText.Format(_T("%d red mana"), n);
			else
				selectionEntry.strText.Format(_T("%d red mana, %d green mana"), i, n - i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), n);
	}

	return true;
}

void CXenagosTheRevelerCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CXenagosTheRevelerCard::BeforeResolution2(CAbilityAction* pAction)
{
	CZone* pLibrary = pAction->GetController()->GetZoneById(ZoneId::Library);
	
	int n = pLibrary->GetSize();

	if (n > 0)
	{
		if (n > 7) n = 7;

		pExiled.RemoveAll();
		pSelected.RemoveAll();

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &pExiled);
		pModifier.AddSelection(MinimumValue(n), MaximumValue(n), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pAction->GetController());

		for (int i = 0; i < pExiled.GetSize(); ++i)
		{
			CCard* pCard = pExiled.GetAt(i);
			if (!pCard->GetCardType().IsCreature() && !pCard->GetCardType().IsLand())
				pExiled.RemoveCard(pCard);
		}

		if (pExiled.GetSize() > 0)
			Selection(pAction->GetController());
	}

	return true;
}

void CXenagosTheRevelerCard::Selection(CPlayer* pController)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't put anything onto the battlefield"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < pExiled.GetSize(); i++)
	{
		CCard* pCard = pExiled.GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Put %s onto the battlefield."),
			pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}

	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CXenagosTheRevelerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't select anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < pSelected.GetSize(); ++i)
					pModifier.ApplyTo(pSelected.GetAt(i));

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

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
				pSelected.AddCard(pCard, CardPlacement::Top);
				pExiled.RemoveCard(pCard);

				Selection(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CAgentOfHorizonsCard::CAgentOfHorizonsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Agent of Horizons"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2),
		_T("2") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
}

//____________________________________________________________________________
//
CAkroanHopliteCard::CAkroanHopliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akroan Hoplite"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		RED_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAkroanHopliteCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAkroanHopliteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AttackingCreatureComparer);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	CPowerModifier pModifier = CPowerModifier(Power(+nCount));
	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CAngerOfTheGodsCard::CAngerOfTheGodsCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Anger of the Gods"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::ToExileDamage)
{
}

//____________________________________________________________________________
//
CAnvilwroughtRaptorCard::CAnvilwroughtRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Anvilwrought Raptor"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		_T("4"), Power(2), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CAqueousFormCard::CAqueousFormCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Aqueous Form"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAqueousFormCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAqueousFormCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CAqueousFormCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	if (pCreature != m_pChgPwrTghAttrEnchant->GetEnchantedOnCard()) return false;

	return true;
}

bool CAqueousFormCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);	

	return true;
}

//____________________________________________________________________________
//
CArtisansSorrowCard::CArtisansSorrowCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Artisan's Sorrow"), CardType::Instant, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CArtisansSorrowCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CArtisansSorrowCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CAshenRiderCard::CAshenRiderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ashen Rider"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		 _T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAshiokNightmareWeaverCard::CAshiokNightmareWeaverCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Ashiok, Nightmare Weaver"), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Ashiok, 3)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAshiokNightmareWeaverCard::OnZoneChanged))
	, m_CardSelection(pGame,CSelectionSupport::SelectionCallback(this, &CAshiokNightmareWeaverCard::OnCardSelected))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);
		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAshiokNightmareWeaverCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), SpecialNumber::AnyNegative);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAshiokNightmareWeaverCard::BeforeResolution2a));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), 0);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAshiokNightmareWeaverCard::BeforeResolution2b));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -10);
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAshiokNightmareWeaverCard::BeforeResolution3));

		cpAbility->SetAbilityText(_T("exile all opponents' hands and graveyards with"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CAshiokNightmareWeaverCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAshiokNightmareWeaverCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);
	
	int n = pLibrary->GetSize();

	if (n > 0)
	{
		CCountedCardContainer pExiled_aux;

		if (n > 3) n = 3;

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &pExiled_aux);
		pModifier.AddSelection(MinimumValue(n), MaximumValue(n), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Exile, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pTarget);

		if (IsInplay())
		{
			for (int i = 0; i < pExiled_aux.GetSize(); ++i)
			{
				CCard* pCard = pExiled_aux.GetAt(i);
				if (pCard->GetCardType().IsCreature())
					pExiled.AddCard(pCard, CardPlacement::Top);
			}
		}
	}

	return true;
}

bool CAshiokNightmareWeaverCard::BeforeResolution2a(CAbilityAction* pAction)
{
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	bool bValid = false;

	for (int i = 0; i < pExiled.GetSize(); i++)
	{
		CCard* pCard = pExiled.GetAt(i);

		if (pCard->GetConvertedManaCost() == nCounterCount)
		{
			bValid = true;
			break;
		}
	}

	if (bValid)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pExiled.GetSize(); i++)
		{
			CCard* pCard = pExiled.GetAt(i);

			if (pCard->GetConvertedManaCost() == nCounterCount)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}

		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}

	return true;
}

bool CAshiokNightmareWeaverCard::BeforeResolution2b(CAbilityAction* pAction)
{
	bool bValid = false;

	for (int i = 0; i < pExiled.GetSize(); i++)
	{
		CCard* pCard = pExiled.GetAt(i);

		if (pCard->GetConvertedManaCost() == 0)
		{
			bValid = true;
			break;
		}
	}

	if (bValid)
	{
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pExiled.GetSize(); i++)
		{
			CCard* pCard = pExiled.GetAt(i);

			if (pCard->GetConvertedManaCost() == 0)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Put %s onto the battlefield."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}

		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	}

	return true;
}

void CAshiokNightmareWeaverCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
				CCreatureCard* pCard = (CCreatureCard*)it->dwContext;

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
				pExiled.RemoveCard(pCard);

				CCreatureTypeModifier pModifier = CCreatureTypeModifier(SingleCreatureType::Nightmare);
				pModifier.ApplyTo(pCard);
				
				pCard->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);

				return;
		}
}

bool CAshiokNightmareWeaverCard::BeforeResolution3(CAbilityAction* pAction)
{
	CCountedCardContainer pExiled_aux;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{

		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pAction->GetController())
		{
			pExiled_aux.RemoveAll();

			CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
			CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
	
			int nHand = pHand->GetSize();
			int nGraveyard = pGraveyard->GetSize();

			CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, nHand, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &pExiled_aux);
			pModifier1.AddSelection(MinimumValue(nHand), MaximumValue(nHand), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Exile, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier1.ApplyTo(pPlayer);

			if (IsInplay())
			{
				for (int i = 0; i < pExiled_aux.GetSize(); ++i)
				{
					CCard* pCard = pExiled_aux.GetAt(i);
					if (pCard->GetCardType().IsCreature())
						pExiled.AddCard(pCard, CardPlacement::Top);
				}
			}

			pExiled_aux.RemoveAll();

			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, nGraveyard, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers, &pExiled_aux);
			pModifier2.AddSelection(MinimumValue(nGraveyard), MaximumValue(nGraveyard), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Exile, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pModifier2.ApplyTo(pPlayer);

			if (IsInplay())
			{
				for (int i = 0; i < pExiled_aux.GetSize(); ++i)
				{
					CCard* pCard = pExiled_aux.GetAt(i);
					if (pCard->GetCardType().IsCreature())
						pExiled.AddCard(pCard, CardPlacement::Top);
				}
			}
		}
	}
	return true;
}

bool CAshiokNightmareWeaverCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pExiled.HasCard(pCard)) 
		pExiled.RemoveCard(pCard);

	return false;
}

void CAshiokNightmareWeaverCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CAsphodelWandererCard::CAsphodelWandererCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Asphodel Wanderer"), CardType::Creature, CREATURE_TYPE2(Skeleton, Soldier), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		_T("2") BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CBattlewiseValorCard::CBattlewiseValorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Battlewise Valor"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CBattlewiseValorCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CBattlewiseValorCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CBenthicGiantCard::CBenthicGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benthic Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(5))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CBloodTollHarpyCard::CBloodTollHarpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Blood-Toll Harpy"), CardType::Creature, CREATURE_TYPE(Harpy), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoonOfErebosCard::CBoonOfErebosCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Boon of Erebos"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBoonOfErebosCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CBoonOfErebosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreatureCard = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	pCreatureCard->AddRegenerationShield();

	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CBorderlandMinotaurCard::CBorderlandMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borderland Minotaur"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CBoulderfallCard::CBoulderfallCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Boulderfall"), CardType::Instant, nID, AbilityType::Instant,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-5),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CBreachingHippocampCard::CBreachingHippocampCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Breaching Hippocamp"), CardType::Creature, CREATURE_TYPE2(Horse, Fish), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBronzeSableCard::CBronzeSableCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bronze Sable"), CardType::_ArtifactCreature, CREATURE_TYPE(Sable), nID,
		_T("2"), Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CBurnishedHartCard::CBurnishedHartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burnished Hart"), CardType::_ArtifactCreature, CREATURE_TYPE(Elk), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->AddSacrificeCost();

	cpAbility->SetRevealCards(TRUE); // need to reveal the searched cards, yes
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2)); // search up to two cards

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChosenByHeliodCard::CChosenByHeliodCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Chosen by Heliod"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//_______________________________________________________________________________________
//
CChroniclerOfHeroesCard::CChroniclerOfHeroesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chronicler of Heroes"), CardType::Creature, CREATURE_TYPE2(Centaur, Wizard), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChroniclerOfHeroesCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
}

bool CChroniclerOfHeroesCard::BeforeResolution(CAbilityAction* pAction)
{
	bool bValid = false;

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature() && (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0))
		{
			bValid = true;
			break;
		}
	}

	if (bValid)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CCoastlineChimeraCard::CCoastlineChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Coastline Chimera"), CardType::Creature, CREATURE_TYPE(Chimera), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(5))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") WHITE_MANA_TEXT));

	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCommuneWithTheGodsCard::CCommuneWithTheGodsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Commune with the Gods"), CardType::Sorcery, nID)
	, m_CardFilter(_T("creature or enchantment"), _T("creatures and enchantments"), new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, &m_CardFilter);
	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCoordinatedAssaultCard::CCoordinatedAssaultCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Coordinated Assault"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(0,2);
}

//____________________________________________________________________________
//
CCracklingTritonCard::CCracklingTritonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crackling Triton"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCutthroatManeuverCard::CCutthroatManeuverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Cutthroat Maneuver"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") BLACK_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(0,2);
}

//____________________________________________________________________________
//
CDarkBetrayalCard::CDarkBetrayalCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Dark Betrayal"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Black | CardType::Creature, true),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CDauntlessOnslaughtCard::CDauntlessOnslaughtCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Dauntless Onslaught"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(0,2);
}

//____________________________________________________________________________
//
CDeathbellowRaiderCard::CDeathbellowRaiderCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Deathbellow Raider"), CardType::Creature, CREATURE_TYPE2(Minotaur, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(3),
		_T("2") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CDefendTheHearthCard::CDefendTheHearthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Defend the Hearth"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			PlayerEffectType::PreventPlayerCombatDamage, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDestructiveRevelryCard::CDestructiveRevelryCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Destructive Revelry"), CardType::Instant, nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CDiscipleOfPhenaxCard::CDiscipleOfPhenaxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Phenax"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(3))
	, m_CardSelection1(pGame, CSelectionSupport::SelectionCallback(this, &CDiscipleOfPhenaxCard::OnCardSelected1))
	, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CDiscipleOfPhenaxCard::OnCardSelected2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscipleOfPhenaxCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CDiscipleOfPhenaxCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	int nValue = pController->GetDevotion(CManaCost::Color::Black);
	
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
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard);
				}
			}
		}
		PickDiscard(pController, pTarget);
	}
	else
		PickCards(pController, pTarget, nValue);
	
	return true;
}

void CDiscipleOfPhenaxCard::PickCards (CPlayer* pController, CPlayer* pTarget, int nValue)
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
		PickDiscard(pController, pTarget);
}

void CDiscipleOfPhenaxCard::OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

void CDiscipleOfPhenaxCard::PickDiscard (CPlayer* pController, CPlayer* pTarget)
{
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pPickedCards.GetSize(); ++i)
	{
		CCard* pCard = pPickedCards.GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
		
		if (pController == pTarget)
			entry.strText.Format(_T("Discard %s"), pCard->GetCardName(TRUE));
		else
			entry.strText.Format(_T("Have %s discard %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
}

void CDiscipleOfPhenaxCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				if (pSelectionPlayer == pTarget)
					strMessage.Format(_T("%s discards %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				else
					strMessage.Format(_T("%s has %s discard %s"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);
			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CDissolveCard::CDissolveCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dissolve"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDissolveCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CDissolveCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CDragonMantleCard::CDragonMantleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dragon Mantle"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CDragonMantleCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

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

counted_ptr<CAbility> CDragonMantleCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pEnchantedCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//_______________________________________________________________________________________
//
CEpharasWardenCard::CEpharasWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ephara's Warden"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new CreaturePowerComparer<std::less<int>>(4)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CFadeIntoAntiquityCard::CFadeIntoAntiquityCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Fade into Antiquity"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CFateForetoldCard::CFateForetoldCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Fate Foretold"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFelhideMinotaurCard::CFelhideMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Felhide Minotaur"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CFeralInvocationCard::CFeralInvocationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Feral Invocation"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+2), Life(+2))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CFiredrinkerSatyrCard::CFiredrinkerSatyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Firedrinker Satyr"), CardType::Creature, CREATURE_TYPE2(Satyr, Shaman), nID,
		RED_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFiredrinkerSatyrCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") RED_MANA_TEXT,
				Power(+1), Life(+0)));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFiredrinkerSatyrCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CFlamecastWheelCard::CFlamecastWheelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("FlamecastWheel"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("5"),
			new AnyCreatureComparer, FALSE,
			Life(-3), PreventableType::Preventable));

	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleetfeatherSandalsCard::CFleetfeatherSandalsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fleetfeather Sandals"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying | CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleshmadSteedCard::CFleshmadSteedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleshmad Steed"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
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

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiftOfImmortalityCard::CGiftOfImmortalityCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Gift of Immortality"), CardType::EnchantCreature, nID,
		_T("2") WHITE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiftOfImmortalityCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGiftOfImmortalityCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGiftOfImmortalityCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CGiftOfImmortalityCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others);
	pModifier1.ApplyTo(pCard);

	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	if (IsInGraveyard())
		pSubjects1.AddCard(this, CardPlacement::Top);

	if (pCard->IsInplay())
		pSubjects2.AddCard(pCard, CardPlacement::Top);
	
	CDoubleContainerEffectModifier pModifier2 = CDoubleContainerEffectModifier(GetGame(), _T("Gift of Immortality Effect"), 61133, &pSubjects1, &pSubjects2);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGlareOfHeresyCard::CGlareOfHeresyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Glare of Heresy"), CardType::Sorcery, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::White, true),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CGodsWillingCard::CGodsWillingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gods Willing"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGodsWillingCard::OnResolutionCompleted))
{
	counted_ptr<CTargetGainKeywordSpell> cpSpell(
		::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CGodsWillingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CGuardiansOfMeletisCard::CGuardiansOfMeletisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardians of Meletis"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CHerosDownfallCard::CHerosDownfallCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hero's Downfall"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CHorizonChimeraCard::CHorizonChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Horizon Chimera"), CardType::Creature, CREATURE_TYPE(Chimera), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHorizonScholarCard::CHorizonScholarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Horizon Scholar"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHorizonScholarCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHorizonScholarCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CHuntTheHunterCard::CHuntTheHunterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunt the Hunter"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CHuntTheHunterSpell> cpSpell(
		::CreateObject <CHuntTheHunterSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CHuntTheHunterCard::CHuntTheHunterSpell::CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new CardTypeComparer(CardType::Green | CardType::Creature, true), false,
		new CardTypeComparer(CardType::Green | CardType::Creature, true), false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CHuntTheHunterCard::CHuntTheHunterSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize()) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	CPowerModifier pModifier1 = CPowerModifier(Power(+2));
	CLifeModifier pModifier2 = CLifeModifier(Life(+2), this->GetCard(), PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo((CCreatureCard*)pCreature1);
	pModifier2.ApplyTo((CCreatureCard*)pCreature1);
	
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
}

//____________________________________________________________________________
//
CInsatiableHarpyCard::CInsatiableHarpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Insatiable Harpy"), CardType::Creature, CREATURE_TYPE(Harpy), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CKragmaWarcallerCard::CKragmaWarcallerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kragma Warcaller"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKragmaWarcallerCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKragmaWarcallerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	if (pCreature->GetCreatureType().HasType(SingleCreatureType::Minotaur) || pCreature->GetCardKeyword()->HasChangeling())
	{
		triggerContext.m_pCreature = pCreature;
		return true;
	}
	else
		return false;
}

//____________________________________________________________________________
//
CLagonnaBandElderCard::CLagonnaBandElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lagonna-Band Elder"), CardType::Creature, CREATURE_TYPE2(Centaur, Advisor), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLagonnaBandElderCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLagonnaBandElderCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CLagonnaBandElderCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

bool CLagonnaBandElderCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pInplay->GetCardContainer()) > 0);
}

//____________________________________________________________________________
//
CLashOfTheWhipCard::CLashOfTheWhipCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lash of the Whip"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			Power(-4), Life(-4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CLeoninSnarecasterCard::CLeoninSnarecasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Snarecaster"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightningStrikeCard::CLightningStrikeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lightning Strike"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CLostInALabyrinthCard::CLostInALabyrinthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Lost in a Labyrinth"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(-3), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CLostInALabyrinthCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CLostInALabyrinthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CMarchOfTheReturnedCard::CMarchOfTheReturnedCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("March of the Returned"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CTempleOfSilenceCard::CTempleOfSilenceCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Silence"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfDeceitCard::CTempleOfDeceitCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Deceit"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfMysteryCard::CTempleOfMysteryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Mystery"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfAbandonCard::CTempleOfAbandonCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Abandon"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CTempleOfTriumphCard::CTempleOfTriumphCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of Triumph"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//Scry 1 start----------------------
		CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		//Scry 1 end----------------------

		CSpecialEffectModifier* pScryModifier = new CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(pScryModifier);

		AddAbility(cpAbility.GetPointer());
	}
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
CUnknownShoresCard::CUnknownShoresCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Unknown Shores"), nID, CardType::NonbasicLand)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*
CMeletisCharlatanCard::CMeletisCharlatanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meletis Charlatan"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		__T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CActivatedAbility<CMeletisCharlatanSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CMeletisCharlatanSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Stack));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
		
	AddAbility(cpAbility.GetPointer());
}
*/
//____________________________________________________________________________
//
CMessengersSpeedCard::CMessengersSpeedCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Messenger's Speed"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Trample | CreatureKeyword::Haste)
{
}

//____________________________________________________________________________
//
CMinotaurSkullcleaverCard::CMinotaurSkullcleaverCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Minotaur Skullcleaver"), CardType::Creature, CREATURE_TYPE2(Minotaur, Berserker), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMistcutterHydraCard::CMistcutterHydraCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Mistcutter Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMistcutterHydraCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
}

void CMistcutterHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CNykthosShrineToNyxCard::CNykthosShrineToNyxCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nykthos, Shrine to Nyx"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {W} to your mana pool equal to your devotion to white"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNykthosShrineToNyxCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {U} to your mana pool equal to your devotion to blue"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNykthosShrineToNyxCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {B} to your mana pool equal to your devotion to black"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNykthosShrineToNyxCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {R} to your mana pool equal to your devotion to red"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNykthosShrineToNyxCard::BeforeResolution4));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T("2"), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("2"));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool equal to your devotion to green"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNykthosShrineToNyxCard::BeforeResolution5));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNykthosShrineToNyxCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int n = pAction->GetController()->GetDevotion(CManaCost::Color::White);

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CNykthosShrineToNyxCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int n = pAction->GetController()->GetDevotion(CManaCost::Color::Blue);

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CNykthosShrineToNyxCard::BeforeResolution3(CAbilityAction* pAction) const
{
	int n = pAction->GetController()->GetDevotion(CManaCost::Color::Black);

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CNykthosShrineToNyxCard::BeforeResolution4(CAbilityAction* pAction) const
{
	int n = pAction->GetController()->GetDevotion(CManaCost::Color::Red);

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CNykthosShrineToNyxCard::BeforeResolution5(CAbilityAction* pAction) const
{
	int n = pAction->GetController()->GetDevotion(CManaCost::Color::Green);

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CNyleasDiscipleCard::CNyleasDiscipleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nylea's Disciple"), CardType::Creature, CREATURE_TYPE2(Centaur, Archer), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNyleasDiscipleCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CNyleasDiscipleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int n = pController->GetDevotion(CManaCost::Color::Green);

	CLifeModifier pModifier = CLifeModifier(Life(+n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
/*
CNyleasPresenceCard::CNyleasPresenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nylea's Presence"), CardType::EnchantLand, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCardKeywordEnchant> cpSpell(
			::CreateObject<CCardKeywordEnchant>(this,
			    _T("1") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CardKeyword::Null));
		
		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CNyleasPresenceCard::CreateAdditionalAbility));
				CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CNyleasPresenceCard::CreateAdditionalAbility1));
						CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CNyleasPresenceCard::CreateAdditionalAbility2));
								CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CNyleasPresenceCard::CreateAdditionalAbility3));
										CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CNyleasPresenceCard::CreateAdditionalAbility4));

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
			cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier1);
				cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier2);
					cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier3);
						cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier4);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new EnchantedByComparer(this),
				CardType::Forest | CardType::Island | CardType::Mountain | CardType::Plains | CardType::Swamp, CardType::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CNyleasPresenceCard::CreateAdditionalAbility(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}

counted_ptr<CAbility> CNyleasPresenceCard::CreateAdditionalAbility1(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}

counted_ptr<CAbility> CNyleasPresenceCard::CreateAdditionalAbility2(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}

counted_ptr<CAbility> CNyleasPresenceCard::CreateAdditionalAbility3(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}

counted_ptr<CAbility> CNyleasPresenceCard::CreateAdditionalAbility4(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}
*/
//____________________________________________________________________________
//
COmenspeakerCard::COmenspeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Omenspeaker"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COmenspeakerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool COmenspeakerCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
COpalineUnicornCard::COpalineUnicornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Opaline Unicorn"), CardType::_ArtifactCreature, CREATURE_TYPE(Unicorn), nID,
		_T("3"), Power(1), Life(2))
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
COrdealOfErebosCard::COrdealOfErebosCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Ordeal of Erebos"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfErebosCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrdealOfErebosCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDiscardCount(2);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfErebosCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COrdealOfErebosCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	if (!m_CardFilter.IsCardIncluded(pCreature)) return false;

	triggerContext.nValue1 = (DWORD)pCreature;

	return true;
}

bool COrdealOfErebosCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInplay()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(pCard);

	if (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool COrdealOfErebosCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const
{
	return (mType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
COrdealOfHeliodCard::COrdealOfHeliodCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Ordeal of Heliod"), CardType::EnchantCreature, nID,
		_T("1") WHITE_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfHeliodCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrdealOfHeliodCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+10));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfHeliodCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		AddAbility(cpAbility.GetPointer());
	}
}

bool COrdealOfHeliodCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	if (!m_CardFilter.IsCardIncluded(pCreature)) return false;

	triggerContext.nValue1 = (DWORD)pCreature;

	return true;
}

bool COrdealOfHeliodCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInplay()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(pCard);

	if (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool COrdealOfHeliodCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const
{
	return (mType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
COrdealOfNyleaCard::COrdealOfNyleaCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Ordeal of Nylea"), CardType::EnchantCreature, nID,
		_T("1") GREEN_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfNyleaCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrdealOfNyleaCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(TRUE);
		cpAbility->SetTapped(TRUE);
				
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfNyleaCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));
		AddAbility(cpAbility.GetPointer());
	}
}

bool COrdealOfNyleaCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	if (!m_CardFilter.IsCardIncluded(pCreature)) return false;

	triggerContext.nValue1 = (DWORD)pCreature;

	return true;
}

bool COrdealOfNyleaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInplay()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(pCard);

	if (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool COrdealOfNyleaCard::SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const
{
	return (mType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
COrdealOfPurphorosCard::COrdealOfPurphorosCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Ordeal of Purphoros"), CardType::EnchantCreature, nID,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfPurphorosCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrdealOfPurphorosCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfPurphorosCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COrdealOfPurphorosCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	if (!m_CardFilter.IsCardIncluded(pCreature)) return false;

	triggerContext.nValue1 = (DWORD)pCreature;

	return true;
}

bool COrdealOfPurphorosCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInplay()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(pCard);

	if (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool COrdealOfPurphorosCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const
{
	return (mType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
COrdealOfThassaCard::COrdealOfThassaCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Ordeal of Thassa"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT,
		new AnyCreatureComparer)		
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfThassaCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrdealOfThassaCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetDrawCount(2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrdealOfThassaCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Battlefield));
		AddAbility(cpAbility.GetPointer());
	}
}

bool COrdealOfThassaCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new EnchantedByComparer(this));

	if (!m_CardFilter.IsCardIncluded(pCreature)) return false;

	triggerContext.nValue1 = (DWORD)pCreature;

	return true;
}

bool COrdealOfThassaCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInplay()) return true;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo(pCard);

	if (pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool COrdealOfThassaCard::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const
{
	return (mType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
CPeakEruptionCard::CPeakEruptionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Peak Eruption"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Mountain, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(-3), this, PreventableType::Preventable,
																  DamageType::SpellDamage | DamageType::NonCombatDamage));
}

//____________________________________________________________________________
//
CPharikasCureCard::CPharikasCureCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Pharika's Cure"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CPharikasMenderCard::CPharikasMenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pharika's Mender"), CardType::Creature, CREATURE_TYPE(Gorgon), nID,
		_T("3") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPheresBandCentaursCard::CPheresBandCentaursCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pheres-Band Centaurs"), CardType::Creature, CREATURE_TYPE2(Centaur, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(7))
{
}

//____________________________________________________________________________
//
CPortentOfBetrayalCard::CPortentOfBetrayalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Portent of Betrayal"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CPortentOfBetrayalCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPortentOfBetrayalCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CPrescientChimeraCard::CPrescientChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Prescient Chimera"), CardType::Creature, CREATURE_TYPE(Chimera), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrescientChimeraCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CPrescientChimeraCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPriestOfIroasCard::CPriestOfIroasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Priest of Iroas"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrognosticSphinxCard::CPrognosticSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Prognostic Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(5))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0)));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));//To tap this card on resolution.

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrognosticSphinxCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPrognosticSphinxCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 3 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(3), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 3 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CProphetOfKruphixCard::CProphetOfKruphixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prophet of Kruphix"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UntapStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CProwlersHelmCard::CProwlersHelmCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prowler's Helm"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	m_CardFilter.SetFilterName(_T("a Wall creature"), _T("Wall creatures"));

	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		pModifier->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPyxisOfPandemoniumCard::CPyxisOfPandemoniumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyxis of Pandemonium"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPyxisOfPandemoniumCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::_ExileFaceDown));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPyxisOfPandemoniumCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("7")));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Exile));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPyxisOfPandemoniumCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbilityAux;

		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CPyxisOfPandemoniumCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPyxisOfPandemoniumCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pExiled.HasCard(pCard))
		pExiled.RemoveCard(pCard);
	return false;
}

bool CPyxisOfPandemoniumCard::BeforeResolution1(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
	
		if (pLibrary->GetSize() > 0)
		{
			CCard* pCard = pLibrary->GetTopCard();
			pExiled.AddCard(pCard, CardPlacement::Top);

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pPlayer);
			pModifier.ApplyTo(pCard);
		}
	}
	return true;
}

bool CPyxisOfPandemoniumCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCountedCardContainer pToBattlefield;

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Exile, TRUE, MoveType::Others, pCard->GetOwner());
		pModifier1.ApplyTo(pCard);

		if (pCard->GetCardType().IsPermanent())
			pToBattlefield.AddCard(pCard, CardPlacement::Top);
	}

	while (pToBattlefield.GetSize() > 0)
	{
		CCard* pCard = pToBattlefield.GetAt(0);
		pToBattlefield.RemoveCard(pCard);

		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pCard->GetOwner());
		pModifier2.ApplyTo(pCard);
	}

	return true;
}

void CPyxisOfPandemoniumCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CRageOfPurphorosCard::CRageOfPurphorosCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Rage of Purphoros"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CRageOfPurphorosCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier(CreatureKeyword::CantRegenerate, TRUE);
	m_pTargetChgLifeSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CRageOfPurphorosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CRagebloodShamanCard::CRagebloodShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rageblood Shaman"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Minotaur), false));
	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRayOfDissolutionCard::CRayOfDissolutionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ray of Dissolution"), CardType::Instant, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRayOfDissolutionCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CRayOfDissolutionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(+3), this, PreventableType::NotPreventable);
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CReadTheBonesCard::CReadTheBonesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Read the Bones"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReadTheBonesCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CReadTheBonesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	//Scry 2 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(2), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 2 end--------------------------
	pModifier->ApplyTo(pController);

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
	pModifier1.ApplyTo(pController);

	CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CReaperOfTheWildsCard::CReaperOfTheWildsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reaper of the Wilds"), CardType::Creature, CREATURE_TYPE(Gorgon), nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReaperOfTheWildsCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
	{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T("1") GREEN_MANA_TEXT, Power(+0), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CReaperOfTheWildsCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CRescueFromTheUnderworldCard::CRescueFromTheUnderworldCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rescue from the Underworld"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			false));
	
	cpSpell->GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRescueFromTheUnderworldCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRescueFromTheUnderworldCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	CCard* pSacrificed = pAction->GetSacrificeCards()->GetAt(0);
	
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	if (pTarget->IsInGraveyard())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);

	if (pSacrificed->IsInGraveyard() || (pSacrificed->GetZoneId() == ZoneId::Exile) || (pSacrificed->GetZoneId() == ZoneId::_Effects))
		pSubjects2.AddCard(pSacrificed, CardPlacement::Top);
	
	CDoubleContainerEffectModifier pModifier1 = CDoubleContainerEffectModifier(GetGame(), _T("Rescue from the Underworld Effect"), 61134, &pSubjects1, &pSubjects2);
	pModifier1.ApplyTo(pAction->GetController());

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Stack, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pModifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CReturnedCentaurCard::CReturnedCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Returned Centaur"), CardType::Creature, CREATURE_TYPE2(Zombie, Centaur), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(4);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReturnedPhalanxCard::CReturnedPhalanxCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Returned Phalanx"), CardType::Creature, CREATURE_TYPE2(Zombie, Soldier), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::DefenderMayAttack)
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CSatyrHedonistCard::CSatyrHedonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Hedonist"), CardType::Creature, CREATURE_TYPE(Satyr), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, RED_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSatyrRamblerCard::CSatyrRamblerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Rambler"), CardType::Creature, CREATURE_TYPE(Satyr), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CScholarOfAthreosCard::CScholarOfAthreosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scholar of Athreos"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") BLACK_MANA_TEXT));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScholarOfAthreosCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScholarOfAthreosCard::BeforeResolution(CAbilityAction* pAction)
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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
CScourgemarkCard::CScourgemarkCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Scourgemark"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(+1), Life(+0))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

//_______________________________________________________________________________________
//
CSeaGodsRevengeCard::CSeaGodsRevengeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Sea God's Revenge"), CardType::Sorcery, nID,
		_T("5") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CSeaGodsRevengeCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1,3);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CSeaGodsRevengeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CSedgeScorpionCard::CSedgeScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sedge Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDeathtouch(false);
}

//____________________________________________________________________________
//
CSentryOfTheUnderworldCard::CSentryOfTheUnderworldCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sentry of the Underworld"), CardType::Creature, CREATURE_TYPE2(Griffin, Skeleton), nID,
		_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			WHITE_MANA_TEXT BLACK_MANA_TEXT));

	cpAbility->AddPayLifeDeltaCost(Life(-3));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSetessanGriffinCard::CSetessanGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Setessan Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+2), Life(+2)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShipwreckSingerCard::CShipwreckSingerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shipwreck Singer"), CardType::Creature, CREATURE_TYPE(Siren), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") BLUE_MANA_TEXT,	// No mana cost
				Power(+0), Life(+0),
				CreatureKeyword::MustAttack, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1") BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				new AttackingCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShreddingWindsCard::CShreddingWindsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shredding Winds"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		new CreatureKeywordComparer(CreatureKeyword::Flying, false),
		FALSE,	// Target player?
		Life(-7),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CSilentArtisanCard::CSilentArtisanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silent Artisan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CSipOfHemlockCard::CSipOfHemlockCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hideous End"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CSoldierOfThePantheonCard::CSoldierOfThePantheonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soldier of the Pantheon"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(new CardMulticoloredComparer)
{
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardMulticoloredComparer);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSparkJoltCard::CSparkJoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Spark Jolt"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CSparkJoltCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CSparkJoltCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CSpellheartChimeraCard::CSpellheartChimeraCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spellheart Chimera"), CardType::Creature, CREATURE_TYPE(Chimera), nID,
		_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
/*
CSpearOfHeliodCard::CSpearOfHeliodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spear of Heliod"), CardType::Legendary | CardType::GlobalEnchantment | CardType::Artifact, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+1), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new DamagedPlayerThisTurnComparer(this));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}
*/
//____________________________________________________________________________
//
CSteamAuguryCard::CSteamAuguryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fact or Fiction"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSteamAuguryCard::OnResolutionCompleted))
	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSteamAuguryCard::OnTargetZoneSelected))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CSteamAuguryCard::OnSelectionDone))
{	
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT RED_MANA_TEXT));	

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
}

void CSteamAuguryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	int size = 5;
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);	

	if (pLibrary->GetSize()<5) 
		size = pLibrary->GetSize();

	CCountedCardContainer SelectFrom;
	//CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

	for (int i = pLibrary->GetSize() - 1; i >= 0 && (pLibrary->GetSize() - i) < 6; --i)
		SelectFrom.AddCard(pLibrary->GetAt(i), CardPlacement::Top);

	if(SelectFrom.GetSize())

		if (m_pGame->IsThinking() || pController->IsComputer())
		{
			SelectFrom.Sort(TRUE);

			for (int i = 0; i < SelectFrom.GetSize(); ++i)
			{
				if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
					m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				else
					m_SelectedCards1.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
			}

			if (!m_pGame->IsThinking())
			{
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
			}
		}
		else
		{
			SelectCardsData selectCardData;

			selectCardData.pCardContainer = &SelectFrom;
			selectCardData.nMinSelect = MinimumValue(0);
			selectCardData.nMaxSelect = MaximumValue(SelectFrom.GetSize());
			selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

			pController->GetInterface()->SelectCard(&selectCardData);
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
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
			{
				CString strMessage;
				strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

				m_pGame->Message(
					strMessage,
					pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
		}

	std::vector<SelectionEntry> entries;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pAbilityAction->GetController() != GetGame()->GetPlayer(ip))
		{
			SelectionEntry entry;
			entry.dwContext = ip;
			entry.strText.Format(_T("choose %s to pick a pile"), GetGame()->GetPlayer(ip)->GetPlayerName());
			entries.push_back(entry);
		}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());	
}

void CSteamAuguryCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			ProcessPiling(GetGame()->GetPlayer(it->dwContext));
		}

}

void CSteamAuguryCard::ProcessPiling(CPlayer* pPlayer)
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

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL,  pPlayer);
}

void CSteamAuguryCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CStymiedHopesCard::CStymiedHopesCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Stymied Hopes"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CStymiedHopesCard::OnResolutionCompleted))
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));

	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CStymiedHopesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CSylvanCaryatidCard::CSylvanCaryatidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Caryatid"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddHexproof(FALSE);

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
CThassasBountyCard::CThassasBountyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thassa's Bounty"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("5") BLUE_MANA_TEXT,
			3));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThassasBountyCard::BeforeResolution));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

bool CThassasBountyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CTimeToFeedCard::CTimeToFeedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time to Feed"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CTimeToFeedSpell> cpSpell(
		::CreateObject <CTimeToFeedSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CTimeToFeedCard::CTimeToFeedSpell::CTimeToFeedSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeNonControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeControllerCardsOnly();
}

void CTimeToFeedCard::CTimeToFeedSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize()) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	CCountedCardContainer pSubjects;
	pSubjects.AddCard((CCard*)pCreature1, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Time to Feed Effect"), 61135, &pSubjects);
	pModifier.ApplyTo(GetController());

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature1));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature2));
	}
	
}

//____________________________________________________________________________
//
CTitanOfEternalFireCard::CTitanOfEternalFireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Titan of Eternal Fire"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(6))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Human), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CTitanOfEternalFireCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CTitanOfEternalFireCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTitansStrengthCard::CTitansStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Titan's Strength"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+3), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CTitansStrengthCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTitansStrengthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CTravelingPhilosopherCard::CTravelingPhilosopherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Traveling Philosopher"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CTriadOfFatesCard::CTriadOfFatesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Triad of Fates"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(FATE_COUNTER, +1));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add a fate counter with"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(FATE_COUNTER, 1));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTriadOfFatesCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(FATE_COUNTER, 1));

		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTriadOfFatesCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CTriadOfFatesCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pModifier1.ApplyTo(pTarget);

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield , TRUE, MoveType::Others, pController);
	pModifier2.ApplyTo(pTarget);

	return true;
}

bool CTriadOfFatesCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pModifier1.ApplyTo(pTarget);

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
	pModifier2.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CTritonShorethiefCard::CTritonShorethiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Triton Shorethief"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CTwoHeadedCerberusCard::CTwoHeadedCerberusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Two-Headed Cerberus"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CTymaretTheMurderKingCard::CTymaretTheMurderKingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tymaret, the Murder King"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Warrior), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-2),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLACK_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();		
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUnderworldCerberusCard::CUnderworldCerberusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Underworld Cerberus"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddCantBeBlockedByOneOrTwo(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::GraveShroud));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	    counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnderworldCerberusCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUnderworldCerberusCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInGraveyard())
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(this);
	}

	return true;
}

//____________________________________________________________________________
//
CVaporkinCard::CVaporkinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vaporkin"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);
}

//____________________________________________________________________________
//
CVipersKissCard::CVipersKissCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Viper's Kiss"), nID,
		BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::Null)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);
}

//____________________________________________________________________________
//
CVoyagesEndCard::CVoyagesEndCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Voyage's End"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CVoyagesEndCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CVoyagesEndCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAbilityAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
CVoyagingSatyrCard::CVoyagingSatyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voyaging Satyr"), CardType::Creature, CREATURE_TYPE2(Satyr, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
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
CVulpineGoliathCard::CVulpineGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vulpine Goliath"), CardType::Creature, CREATURE_TYPE(Fox), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWildCelebrantsCard::CWildCelebrantsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Celebrants"), CardType::Creature, CREATURE_TYPE(Satyr), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWitchesEyeCard::CWitchesEyeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Witches' Eye"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CWitchesEyeCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CWitchesEyeCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pCard,
			_T("1")));

	cpEquipAbility->AddTapCost();
	cpEquipAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWitchesEyeCard::BeforeResolution));

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CWitchesEyeCard::BeforeResolution(CAbilityAction* pAction)
{
	//Scry 1 start----------------------
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));	
		pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier->GetSelection(0).moveType = MoveType::Others;
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bottom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL,									// any cards
			ZoneId::Library,						// if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom,					// put selected cards on top
			MoveType::Others,						// move type
			CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player

		// and finally put the last ones on top of the library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
//Scry 1 end--------------------------
	pModifier->ApplyTo(pAction->GetController());

	CSpecialEffectModifier pScryModifier = CSpecialEffectModifier(this, SCRY_TRIGGER_ID);
	pScryModifier.ApplyTo(pAction->GetOriginatingCard());

	return true;
}

//____________________________________________________________________________
//
CYokedOxCard::CYokedOxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yoked Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		WHITE_MANA_TEXT, Power(0), Life(4))
{
}

//____________________________________________________________________________
//