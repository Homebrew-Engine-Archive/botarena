#include "stdafx.h"
#include "CardRiseOfTheEldrazi.h"

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

		DEFINE_CARD(CAffaGuardHoundCard);
		DEFINE_CARD(CAkoumBoulderfootCard);
		DEFINE_CARD(CAllIsDustCard);
		DEFINE_CARD(CAncientStirringsCard);
		DEFINE_CARD(CAngelheartVialCard);
		DEFINE_CARD(CArrogantBloodlordCard);
		DEFINE_CARD(CArtisanOfKozilekCard);
		DEFINE_CARD(CAuraGnarlidCard);
		DEFINE_CARD(CAwakeningZoneCard);
		DEFINE_CARD(CBalaGedScorpionCard);
		DEFINE_CARD(CBanefulOmenCard);
		DEFINE_CARD(CBattleRattleShamanCard);
		DEFINE_CARD(CBearUmbraCard);
		DEFINE_CARD(CBeastbreakerOfBalaGedCard);
		DEFINE_CARD(CBloodriteInvokerCard);
		DEFINE_CARD(CBoarUmbraCard);
		DEFINE_CARD(CBramblesnapCard);
		DEFINE_CARD(CBrimstoneMageCard);
		DEFINE_CARD(CBroodBirthingCard);
		DEFINE_CARD(CBroodwardenCard);
		DEFINE_CARD(CCadaverImpCard);
		DEFINE_CARD(CCaravanEscortCard);
		DEFINE_CARD(CChampionsDrakeCard);
		DEFINE_CARD(CConqueringManticoreCard);
		DEFINE_CARD(CConsumeTheMeekCard);
		DEFINE_CARD(CConsumingVaporsCard);
		DEFINE_CARD(CContaminatedGroundCard);
		DEFINE_CARD(CCoralhelmCommanderCard);
		DEFINE_CARD(CCorpsehatchCard);
		DEFINE_CARD(CCrabUmbraCard);
		DEFINE_CARD(CCurseOfWizardryCard);
		DEFINE_CARD(CDaggerbackBasiliskCard);
		DEFINE_CARD(CDawnglareInvokerCard);
		DEFINE_CARD(CDeathCultistCard);
		DEFINE_CARD(CDeathlessAngelCard);
		DEFINE_CARD(CDemonicAppetiteCard);
		DEFINE_CARD(CDepriveCard);
		DEFINE_CARD(CDevastatingSummonsCard);
		DEFINE_CARD(CDistortionStrikeCard);
		DEFINE_CARD(CDomesticationCard);
		DEFINE_CARD(CDrakeUmbraCard);
		DEFINE_CARD(CDranaKalastriaBloodchiefCard);
		DEFINE_CARD(CDreadDroneCard);
		DEFINE_CARD(CDreamstoneHedronCard);
		DEFINE_CARD(CEelUmbraCard);
		DEFINE_CARD(CElandUmbraCard);
		DEFINE_CARD(CEldraziConscriptionCard);
		DEFINE_CARD(CEmergeUnscathedCard);
		DEFINE_CARD(CEmrakulsHatcherCard);
		DEFINE_CARD(CEmrakulTheAeonsTornCard);
		DEFINE_CARD(CEnclaveCryptologistCard);
		DEFINE_CARD(CEnatuGolemCard);
		DEFINE_CARD(CEscapedNullCard);
		DEFINE_CARD(CEssenceFeedCard);
		DEFINE_CARD(CExplosiveRevelationCard);
		DEFINE_CARD(CFissureVentCard);
		DEFINE_CARD(CFlameSlashCard);
		DEFINE_CARD(CFleetingDistractionCard);
		DEFINE_CARD(CForkedBoltCard);
		DEFINE_CARD(CFrostwindInvokerCard);
		DEFINE_CARD(CGelatinousGenesisCard);
		DEFINE_CARD(CGigantomancerCard);
		DEFINE_CARD(CGloomhunterCard);
		DEFINE_CARD(CGravitationalShiftCard);
		DEFINE_CARD(CGravityWellCard);
		DEFINE_CARD(CGrotagSiegeRunnerCard);
		DEFINE_CARD(CGrowthSpasmCard);
		DEFINE_CARD(CGuardDutyCard);
		DEFINE_CARD(CGuardGomazoaCard);
		DEFINE_CARD(CGuulDrazAssassinCard);
		DEFINE_CARD(CHadaSpyPatrolCard);
		DEFINE_CARD(CHalimarWavewatchCard);
		DEFINE_CARD(CHandOfEmrakulCard);
		DEFINE_CARD(CHarmlessAssaultCard);
		DEFINE_CARD(CHazeFrogCard);
		DEFINE_CARD(CHedronMatrixCard);
		DEFINE_CARD(CHellionEruptionCard);
		DEFINE_CARD(CHyenaUmbraCard);
		DEFINE_CARD(CIkiralOutriderCard);
		DEFINE_CARD(CInquisitionOfKozilekCard);
		DEFINE_CARD(CItThatBetraysCard);
		DEFINE_CARD(CJaddiLifestriderCard);
		DEFINE_CARD(CJoragaTreespeakerCard);
		DEFINE_CARD(CJwariScuttlerCard);
		DEFINE_CARD(CKabiraVindicatorCard);
		DEFINE_CARD(CKarganDragonlordCard);
		DEFINE_CARD(CKazanduTuskcallerCard);
		DEFINE_CARD(CKeeningStoneCard);
		DEFINE_CARD(CKhalniHydraCard);
		DEFINE_CARD(CKilnFiendCard);
		DEFINE_CARD(CKnightOfCliffhavenCard);
		DEFINE_CARD(CKorLineSlingerCard);
		DEFINE_CARD(CKorSpiritdancerCard);
		DEFINE_CARD(CKozilekButcherOfTruthCard);
		DEFINE_CARD(CKozileksPredatorCard);
		DEFINE_CARD(CLagacLizardCard);
		DEFINE_CARD(CLastKissCard);
		DEFINE_CARD(CLavafumeInvokerCard);
		DEFINE_CARD(CLayBareCard);
		DEFINE_CARD(CLeafArrowCard);
		DEFINE_CARD(CLighthouseChronologistCard);
		DEFINE_CARD(CLinvalaKeeperOfSilenceCard);
		//DEFINE_CARD(CLivingDestinyCard);
		DEFINE_CARD(CLoneMissionaryCard);
		DEFINE_CARD(CLordOfShatterskullPassCard);
		DEFINE_CARD(CLuminousWakeCard);
		DEFINE_CARD(CLustForWarCard);
		DEFINE_CARD(CMagmawCard);
		DEFINE_CARD(CMakindiGriffinCard);
		DEFINE_CARD(CMammothUmbraCard);
		DEFINE_CARD(CMerfolkObserverCard);
		DEFINE_CARD(CMerfolkSkyscoutCard);
		DEFINE_CARD(CMightOfTheMassesCard);
		DEFINE_CARD(CMnemonicWallCard);
		DEFINE_CARD(CMomentousFallCard);
		DEFINE_CARD(CMorticianBeetleCard);
		DEFINE_CARD(CMulDayaChannelersCard);
		DEFINE_CARD(CNarcolepsyCard);
		DEFINE_CARD(CNearDeathExperienceCard);
		DEFINE_CARD(CNemaSiltlurkerCard);
		DEFINE_CARD(CNestInvaderCard);
		DEFINE_CARD(CNighthazeCard);
		DEFINE_CARD(CNirkanaCutthroatCard);
		DEFINE_CARD(CNirkanaRevenantCard);
		DEFINE_CARD(CNomadsAssemblyCard);
		DEFINE_CARD(CNullChampionCard);
		DEFINE_CARD(COgresCleaverCard);
		DEFINE_CARD(COgreSentryCard);
		DEFINE_CARD(COnduGiantCard);
		DEFINE_CARD(COustCard);
		DEFINE_CARD(COvergrownBattlementCard);
		DEFINE_CARD(CPathrazerOfUlamogCard);
		DEFINE_CARD(CPawnOfUlamogCard);
		DEFINE_CARD(CPelakkaWurmCard);
		DEFINE_CARD(CPennonBladeCard);
		DEFINE_CARD(CPestilenceDemonCard);
		DEFINE_CARD(CPhantasmalAbominationCard);
		DEFINE_CARD(CPreysVengeanceCard);
		DEFINE_CARD(CPropheticPrismCard);
		DEFINE_CARD(CPuncturingLightCard);
		DEFINE_CARD(CRageNimbusCard);
		DEFINE_CARD(CRaidBombardmentCard);
		DEFINE_CARD(CRapaciousOneCard);
		DEFINE_CARD(CRealitySpasmCard);
		DEFINE_CARD(CRealmsUnchartedCard);
		DEFINE_CARD(CRecurringInsightCard);
		DEFINE_CARD(CReinforcedBulwarkCard);
		DEFINE_CARD(CRepayInKindCard);
		DEFINE_CARD(CRepelTheDarknessCard);
		DEFINE_CARD(CRunedServitorCard);
		DEFINE_CARD(CSarkhantheMadCard);
		DEFINE_CARD(CSeaGateOracleCard);
		DEFINE_CARD(CSeeBeyondCard);
		DEFINE_CARD(CSharedDiscoveryCard);
		DEFINE_CARD(CShrivelCard);
		DEFINE_CARD(CSkeletalWurmCard);
		DEFINE_CARD(CSkitteringInvasionCard);
		DEFINE_CARD(CSkywatcherAdeptCard);
		DEFINE_CARD(CSnakeUmbraCard);
		DEFINE_CARD(CSoulboundGuardiansCard);
		DEFINE_CARD(CSoulsAttendantCard);
		DEFINE_CARD(CSoulsurgeElementalCard);
		DEFINE_CARD(CSpawningBreathCard);
		DEFINE_CARD(CSpawnsireOfUlamogCard);
		DEFINE_CARD(CSphinxOfMagosiCard);
		DEFINE_CARD(CSphinxBoneWandCard);
		DEFINE_CARD(CSpiderUmbraCard);
		DEFINE_CARD(CSplinterTwinCard);
		DEFINE_CARD(CSporecapSpiderCard);
		DEFINE_CARD(CStaggershockCard);
		DEFINE_CARD(CStalwartShieldBearersCard);
		DEFINE_CARD(CStomperCubCard);
		DEFINE_CARD(CStudentOfWarfareCard);
		DEFINE_CARD(CSurrealMemoirCard);
		DEFINE_CARD(CSurvivalCacheCard);
		DEFINE_CARD(CThoughtGorgerCard);
		DEFINE_CARD(CTimeofHeroesCard);
		DEFINE_CARD(CTotemGuideHartebeestCard);
		DEFINE_CARD(CTraitorousInstinctCard);
		DEFINE_CARD(CTranscendentMasterCard);
		DEFINE_CARD(CTuktukTheExplorerCard);
		DEFINE_CARD(CUlamogsCrusherCard);
		DEFINE_CARD(CUlamogTheInfiniteGyreCard);
		DEFINE_CARD(CUnifiedWillCard);
		DEFINE_CARD(CValakutFireboarCard);
		DEFINE_CARD(CVengevineCard);
		DEFINE_CARD(CVeneratedTeacherCard);
		DEFINE_CARD(CVentSentinelCard);
		DEFINE_CARD(CVirulentSwipeCard);
		DEFINE_CARD(CWallOfOmensCard);
		DEFINE_CARD(CWarmongersChariotCard);
		DEFINE_CARD(CWildheartInvokerCard);
		DEFINE_CARD(CWrapInFlamesCard);
		DEFINE_CARD(CZofShadeCard);
		DEFINE_CARD(CZulaportEnforcerCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CCorpsehatchCard::CCorpsehatchCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Corpsehatch"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Eldrazi Spawn C"), 2833, 2));
}

//____________________________________________________________________________
//
CMnemonicWallCard::CMnemonicWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mnemonic Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("4") BLUE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPathrazerOfUlamogCard::CPathrazerOfUlamogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pathrazer of Ulamog"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("11"), Power(9), Life(9))
{
	GetCreatureKeyword()->AddCantBeBlockedByOneOrTwo(FALSE, 0);

	{
		//Annihilator 3 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(3, 3, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKozilekButcherOfTruthCard::CKozilekButcherOfTruthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kozilek, Butcher of Truth"), CardType::_LegendaryCreature, CREATURE_TYPE(Eldrazi), nID,
		_T("10"), Power(12), Life(12))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDrawCount(4);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Annihilator 4 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(4, 4, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Shuffle on library
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUlamogsCrusherCard::CUlamogsCrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ulamog's Crusher"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("8"), Power(8), Life(8))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		//Annihilator 2 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGuardDutyCard::CGuardDutyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Guard Duty"), nID,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Defender)
{
}

//____________________________________________________________________________
//
CEmrakulsHatcherCard::CEmrakulsHatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Emrakul's Hatcher"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn B"), 2832, 3);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPawnOfUlamogCard::CPawnOfUlamogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pawn of Ulamog"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn A"), 2848, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkitteringInvasionCard::CSkitteringInvasionCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Skittering Invasion"), CardType::Sorcery, nID, CREATURE_TYPE(Eldrazi))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("7"),
			_T("Eldrazi Spawn A"), 2848, 3));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Eldrazi Spawn B"), 2832, 1));
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Eldrazi Spawn C"), 2833, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAllIsDustCard::CAllIsDustCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("All is Dust"), CardType::Sorcery, nID, CREATURE_TYPE(Eldrazi))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAllIsDustCard::OnResolutionCompleted))
{
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("7")));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

    AddSpell(cpSpell.GetPointer());
}

void CAllIsDustCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_ColorMask, false));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));

	pModifier->ApplyTo(GetController());
	pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CArtisanOfKozilekCard::CArtisanOfKozilekCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Artisan of Kozilek"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("9"), Power(10), Life(9))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Annihilator 2 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNearDeathExperienceCard::CNearDeathExperienceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Near-Death Experience"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNearDeathExperienceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNearDeathExperienceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CNearDeathExperienceCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();

	return pPlayer->GetLife() == Life(1);
}

bool CNearDeathExperienceCard::BeforeResolution(CNearDeathExperienceCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();

	return pPlayer->GetLife() == Life(1);
}

//____________________________________________________________________________
//
CTraitorousInstinctCard::CTraitorousInstinctCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Traitorous Instinct"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CPowerModifier(Power(+2), TRUE, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDreamstoneHedronCard::CDreamstoneHedronCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dreamstone Hedron"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("3"), 3));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAffaGuardHoundCard::CAffaGuardHoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Affa Guard Hound"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNirkanaRevenantCard::CNirkanaRevenantCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Nirkana Revenant"), CardType::Creature, CREATURE_TYPE2(Vampire, Shade), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
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

//____________________________________________________________________________
//
CMagmawCard::CMagmawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magmaw"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSphinxOfMagosiCard::CSphinxOfMagosiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx of Magosi"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT, 1));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPelakkaWurmCard::CPelakkaWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pelakka Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+7));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPestilenceDemonCard::CPestilenceDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pestilence Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(6))
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
CKozileksPredatorCard::CKozileksPredatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kozilek's Predator"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn C"), 2833, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfOmensCard::CWallOfOmensCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Omens"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(4))
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
CTuktukTheExplorerCard::CTuktukTheExplorerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Tuktuk the Explorer"), CardType::_LegendaryCreature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, 
			CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Tuktuk the Returned"), TOKEN_ID_BY_NAME, 1);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConsumeTheMeekCard::CConsumeTheMeekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consume the Meek"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpSpell->GetGlobalCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHandOfEmrakulCard::CHandOfEmrakulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of Emrakul"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("9"), Power(7), Life(7))
{
	{
		//Alternative cost
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Eldrazi) | CREATURE_TYPE(Spawn), true));

		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddSacrificeCardCost(4, &m_CardFilter);
		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CHandOfEmrakulCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Annihilator 1 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CHandOfEmrakulCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CInquisitionOfKozilekCard::CInquisitionOfKozilekCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inquisition of Kozilek"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	// Exclude land cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CForkedBoltCard::CForkedBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Forked Bolt"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CGloomhunterCard::CGloomhunterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gloomhunter"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CLuminousWakeCard::CLuminousWakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Luminous Wake"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CLuminousWakeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CLuminousWakeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeaGateOracleCard::CSeaGateOracleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sea Gate Oracle"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));	
	pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier3->GetSelection(0).moveType = MoveType::Others;
	pModifier3->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally put the last ones on the bottom of the library
	pModifier3->SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Bottom);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAwakeningZoneCard::CAwakeningZoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Awakening Zone"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn A"), 2848, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBroodwardenCard::CBroodwardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Broodwarden"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Eldrazi) | CREATURE_TYPE(Spawn), true),
			Power(+2), Life(+1)));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSarkhantheMadCard::CSarkhantheMadCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Sarkhan the Mad"), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Sarkhan, 7)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSarkhantheMadCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSarkhantheMadCard::OnResolutionCompleted2))
	, m_cpEventListener3(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSarkhantheMadCard::OnResolutionCompleted3))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T(""),	1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +0);

		cpAbility->SetRevealCardsToOthers(TRUE, TRUE);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				false));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -4);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener3.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CSarkhantheMadCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetController()->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;

	int nCMC = pLibrary->GetTopCard()->GetConvertedManaCost();

	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
	modifier1.ApplyTo(pAbilityAction->GetController());

    CLifeModifier modifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::NotPreventable);
	modifier2.ApplyTo(this);
}

void CSarkhantheMadCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CPlayer* pPlayer = pAbilityAction->GetAssociatedCard()->GetController();

	CMoveCardModifier modifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice);
	modifier1.ApplyTo(pAbilityAction->GetAssociatedCard());

	CTokenCreationModifier modifier2 = CTokenCreationModifier(GetGame(), _T("Dragon C"), 2714, 1);
	modifier2.ApplyTo(pPlayer);
}

void CSarkhantheMadCard::OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CCountedCardContainer creatures;
	if (m_CardFilter.GetIncluded(*pBattlefield, creatures))
		for (int i = 0; i < creatures.GetSize(); ++i)
		{
			CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(creatures.GetAt(i));
			if (!pCreature) continue;

			Life nDamage = Life(-GET_INTEGER(pCreature->GetPower()));
			CLifeModifier modifier = CLifeModifier(nDamage, pCreature, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
			modifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());
		}
}

//____________________________________________________________________________
//
CAkoumBoulderfootCard::CAkoumBoulderfootCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akoum Boulderfoot"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);	

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalaGedScorpionCard::CBalaGedScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bala Ged Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(2));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodriteInvokerCard::CBloodriteInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodrite Invoker"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("8"),
			FALSE_CARD_COMPARER, TRUE,
			Life(-3), PreventableType::NotPreventable));
	
	cpAbility->SetReverseLifeDeltaToController();

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CBramblesnapCard::CBramblesnapCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Bramblesnap"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CCadaverImpCard::CCadaverImpCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cadaver Imp"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

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
CDaggerbackBasiliskCard::CDaggerbackBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daggerback Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CDeathCultistCard::CDeathCultistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death Cultist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetReverseLifeDeltaToController();

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CDreadDroneCard::CDreadDroneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dread Drone"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn C"), 2833, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEscapedNullCard::CEscapedNullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Escaped Null"), CardType::Creature, CREATURE_TYPE2(Zombie, Berserker), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+5));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrostwindInvokerCard::CFrostwindInvokerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Frostwind Invoker"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			_T("8"),
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGuardGomazoaCard::CGuardGomazoaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Guard Gomazoa"), CardType::Creature, CREATURE_TYPE(Jellyfish), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddPreventAllCombatDamage(FALSE);
}

//____________________________________________________________________________
//
CHazeFrogCard::CHazeFrogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Haze Frog"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DealNoCombatDamage);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJwariScuttlerCard::CJwariScuttlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jwari Scuttler"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CKilnFiendCard::CKilnFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kiln Fiend"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKorLineSlingerCard::CKorLineSlingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Line-Slinger"), CardType::Creature, CREATURE_TYPE2(Kor, Scout), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(1))
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
CLagacLizardCard::CLagacLizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lagac Lizard"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CLavafumeInvokerCard::CLavafumeInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lavafume Invoker"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("8"),
			Power(+3), Life(+0),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLinvalaKeeperOfSilenceCard::CLinvalaKeeperOfSilenceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Linvala, Keeper of Silence"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPlayActivatedAbilities,
			(int)CCardFilter::GetFilter(_T("creature permanents"))));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoneMissionaryCard::CLoneMissionaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lone Missionary"), CardType::Creature, CREATURE_TYPE2(Kor, Monk), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMakindiGriffinCard::CMakindiGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Makindi Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CMerfolkObserverCard::CMerfolkObserverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Observer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerfolkSkyscoutCard::CMerfolkSkyscoutCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Merfolk Skyscout"), CardType::Creature, CREATURE_TYPE2(Merfolk, Scout), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::EventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNemaSiltlurkerCard::CNemaSiltlurkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nema Siltlurker"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CNestInvaderCard::CNestInvaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nest Invader"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn B"), 2832, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COgreSentryCard::COgreSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Sentry"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
COnduGiantCard::COnduGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ondu Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COvergrownBattlementCard::COvergrownBattlementCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Overgrown Battlement"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("add {G} to your mana pool for each creature with defender you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COvergrownBattlementCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COvergrownBattlementCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, false));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CPhantasmalAbominationCard::CPhantasmalAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantasmal Abomination"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRageNimbusCard::CRageNimbusCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rage Nimbus"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(5), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::MustAttack, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkeletalWurmCard::CSkeletalWurmCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skeletal Wurm"), CardType::Creature, CREATURE_TYPE2(Skeleton, Wurm), nID,
		_T("7") BLACK_MANA_TEXT, Power(7), Life(6),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSoulboundGuardiansCard::CSoulboundGuardiansCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soulbound Guardians"), CardType::Creature, CREATURE_TYPE2(Kor, Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(4), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CSoulsAttendantCard::CSoulsAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul's Attendant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulsurgeElementalCard::CSoulsurgeElementalCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Soulsurge Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSporecapSpiderCard::CSporecapSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sporecap Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CStalwartShieldBearersCard::CStalwartShieldBearersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stalwart Shield-Bearers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Defender, false),
				Power(+0), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //Not this
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetListenToKeyword();
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStomperCubCard::CStomperCubCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stomper Cub"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CTotemGuideHartebeestCard::CTotemGuideHartebeestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Totem-Guide Hartebeest"), CardType::Creature, CREATURE_TYPE(Antelope), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("aura cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildheartInvokerCard::CWildheartInvokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wildheart Invoker"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("8"),
			Power(+5), Life(+5),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CZofShadeCard::CZofShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Zof Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("2") BLACK_MANA_TEXT, Power(+2), Life(+2))
{
}

//____________________________________________________________________________
//
CEnatuGolemCard::CEnatuGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enatu Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReinforcedBulwarkCard::CReinforcedBulwarkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reinforced Bulwark"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("3"), Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				_T(""),
				Life(1), SourceColor::_AllSources, 
				TRUE)); // prevent damage to this card's controller

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COgresCleaverCard::COgresCleaverCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ogre's Cleaver"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("5")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+5), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPennonBladeCard::CPennonBladeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pennon Blade"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));
	
	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CPennonBladeCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CPennonBladeCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEquipAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	cpEquipAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CPropheticPrismCard::CPropheticPrismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Prophetic Prism"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
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
CEldraziConscriptionCard::CEldraziConscriptionCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Eldrazi Conscription"), CardType::EnchantCreature, nID, CREATURE_TYPE(Eldrazi))
{
	counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
		::CreateObject<CChgPwrTghAttrEnchant>(this, 
			_T("8"),
			Power(+10), Life(+10), CreatureKeyword::Trample));

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CEldraziConscriptionCard::CreateAdditionalAbility));

	cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
	
	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CEldraziConscriptionCard::CreateAdditionalAbility(CCard* pCard)
{
	//Annihilator 2 (Whenever this creature attacks, defending player sacrifices X permanents.)
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetSubjectCount(2, 2, true);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravitationalShiftCard::CGravitationalShiftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gravitational Shift"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),
				Power(+2), Life(+0), CreatureKeyword::Null));

		cpAbility->SetListenToKeyword();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,//new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),
				Power(-2), Life(+0), CreatureKeyword::Null));

		cpAbility->SetListenToKeyword();

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, FALSE));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGravityWellCard::CGravityWellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gravity Well"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGravityWellCard::SetTriggerContext));

//	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGravityWellCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
		if (CCardFilter::GetFilter(_T("flying creatures"))->IsCardIncluded(pCreature))
	return true;

	return false;
}

//____________________________________________________________________________
//
CLustForWarCard::CLustForWarCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lust for War"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::MustAttack)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CLustForWarCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CLustForWarCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFleetingDistractionCard::CFleetingDistractionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fleeting Distraction"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(-1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CHarmlessAssaultCard::CHarmlessAssaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harmless Assault"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage));
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLastKissCard::CLastKissCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Last Kiss"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
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
CLeafArrowCard::CLeafArrowCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Leaf Arrow"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		new CreatureKeywordComparer(CreatureKeyword::Flying, false),
		FALSE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CMightOfTheMassesCard::CMightOfTheMassesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Might of the Masses"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMightOfTheMassesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMightOfTheMassesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCreatureCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = nCreatureCount;
		Context.nValue2 = nCreatureCount;

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
CPuncturingLightCard::CPuncturingLightCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Puncturing Light"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingBlockingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard,	TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(4));
}

//____________________________________________________________________________
//
CRealitySpasmCard::CRealitySpasmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reality Spasm"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				TRUE, FALSE,
				new TrueCardComparer));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				FALSE, TRUE,
				new TrueCardComparer));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->AdjustTargetCountWithExtraCostValue();

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRepelTheDarknessCard::CRepelTheDarknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Repel the Darkness"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSpawningBreathCard::CSpawningBreathCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Spawning Breath"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Eldrazi Spawn C"), 2833, 1));
}

//____________________________________________________________________________
//
CEssenceFeedCard::CEssenceFeedCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Essence Feed"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("5") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
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
            TTriggeredAbility<  CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));
        
        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn C"), 2833, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CFissureVentCard::CFissureVentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fissure Vent"), CardType::Sorcery, nID)
{
	{
		//Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target nonbasic land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose both.
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false), false, 
				new CardTypeComparer(CardType::_Land, false), false, _T("")));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFissureVentCard::BeforeResolution));
		cpSpell->GetTargeting2()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CFissureVentCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
	pModifier.ApplyTo(pTarget1);
	pModifier.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
CFlameSlashCard::CFlameSlashCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flame Slash"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer, FALSE,	
		Life(-4), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

}

//____________________________________________________________________________
//
CGrowthSpasmCard::CGrowthSpasmCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Growth Spasm"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	m_pSearchLibrarySpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Eldrazi Spawn A"), 2848, 1));
}

//____________________________________________________________________________
//
CNighthazeCard::CNighthazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nighthaze"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Swampwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSharedDiscoveryCard::CSharedDiscoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shared Discovery"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT, 3));

	cpSpell->GetCost().AddTapCardCost(4, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CShrivelCard::CShrivelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shrivel"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-1),	// power delta
			Life(-1)));	// life delta

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWrapInFlamesCard::CWrapInFlamesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wrap in Flames"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT,
		Power(+0), Life(-1),
		CreatureKeyword::CantBlock, CreatureKeyword::Null,
		TRUE, PreventableType::Preventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(0, 3);
}

//____________________________________________________________________________
//
CRunedServitorCard::CRunedServitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Runed Servitor"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathlessAngelCard::CDeathlessAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Deathless Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(7))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUlamogTheInfiniteGyreCard::CUlamogTheInfiniteGyreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ulamog, the Infinite Gyre"), CardType::_LegendaryCreature, CREATURE_TYPE(Eldrazi), nID,
		_T("11"), Power(10), Life(10))
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Annihilator 4 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(4, 4, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Shuffle on library
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRapaciousOneCard::CRapaciousOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rapacious One"), CardType::Creature, CREATURE_TYPE2(Eldrazi, Drone), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRapaciousOneCard::SetTriggerContextL));
		cpAbility->SetCreateTokenOption(TRUE, _T("Eldrazi Spawn C"), 2833, 0); 

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CRapaciousOneCard::SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer,
																										Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CDepriveCard::CDepriveCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Deprive"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("Lands")));
}

//____________________________________________________________________________
//
CSeeBeyondCard::CSeeBeyondCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("See Beyond"), CardType::Sorcery, nID)

	, m_CardFilter(_T("a token"), _T("tokens"), new CardTypeComparer(CardType::Token, false))
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(1, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);

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
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConqueringManticoreCard::CConqueringManticoreCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Conquering Manticore"), CardType::Creature, CREATURE_TYPE(Manticore), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CConqueringManticoreCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1->LinkCardModifier(pModifier2);

	cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CConqueringManticoreCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAbilityAction->GetAssociatedCard();

	CCreatureKeywordModifier pModifier1;
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);

	pModifier1.ApplyTo(pTarget);

	CCardOrientationModifier pModifier2 = CCardOrientationModifier(FALSE);

	pModifier2.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CEmrakulTheAeonsTornCard::CEmrakulTheAeonsTornCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emrakul, the Aeons Torn"), CardType::_LegendaryCreature, CREATURE_TYPE(Eldrazi), nID,
		_T("15"), Power(15), Life(15))

{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery | CardType::EnchantCreature |  CardType::EnchantPermanent, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black | CardType::Blue | CardType::Red | CardType::Green | CardType::White, false));

	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddSpecialProtectionSpellsOnly(FALSE, &m_CardFilter);
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::TimeWalk, FALSE, 1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Annihilator 6 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(6, 6, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Shuffle on library
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDemonicAppetiteCard::CDemonicAppetiteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Demonic Appetite"), nID,
		BLACK_MANA_TEXT,
		Power(+3), Life(+3))
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->SetIncludeControllerCardsOnly();

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

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
CMomentousFallCard::CMomentousFallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Momentous Fall"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Life(+0), PreventableType::NotPreventable));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMomentousFallCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMomentousFallCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());
	int nToughness = GET_INTEGER(pCreature->GetLastKnownToughness());

	CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(nPower), MaximumValue(nPower));
	CLifeModifier pModifier2 = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
//"Living Destiny\n{3G}\nInstant\nROE,C\nAs an additional cost to cast Living Destiny, reveal a creature card from your hand.\rYou gain life equal to the revealed card's converted mana cost."
//You don't get life.
//CLivingDestinyCard::CLivingDestinyCard(CGame* pGame, UINT nID)
//	: CCard(pGame, _T("Living Destiny"), CardType::Instant, nID)
//{
//	counted_ptr<CChgLifeSpell> cpSpell(
//		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
//			_T("3") GREEN_MANA_TEXT,
//			Life(+0), PreventableType::NotPreventable));
//
//	cpSpell->GetCost().AddRevealCardCost(1, CCardFilter::GetFilter(_T("creatures")));
//
//	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLivingDestinyCard::BeforeResolution));
//
//	AddSpell(cpSpell.GetPointer());
//}
//
//bool CLivingDestinyCard::BeforeResolution(CAbilityAction* pAction) const
//{
//	CCard* pCard = pAction->GetRevealCards()->GetAt(0);
//	if (!pCard->GetCardType().IsCreature())
//	return false;
//
//	CCreatureCard* pCreature = (CCreatureCard*)pCard;
//	int converted = pCreature->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
//
//	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
//
//	pModifier.ApplyTo(GetController());
//
//	return true;
//}
//
////____________________________________________________________________________
////
CVengevineCard::CVengevineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vengevine"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))	
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengevineCard::SetTriggerContext));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVengevineCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return ((this->GetZone()->GetZoneId() == ZoneId::Graveyard) && (GetController()->GetCertainTypeCastedCount(CardType::Creature) == 2));
}

//____________________________________________________________________________
//
CValakutFireboarCard::CValakutFireboarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Valakut Fireboar"), CardType::Creature, CREATURE_TYPE2(Elemental, Boar), nID,
		_T("4") RED_MANA_TEXT, Power(1), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::SwitchedPT);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVentSentinelCard::CVentSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vent Sentinel"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeBySurveySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeBySurveySpell>>(this,
				_T("1") RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				ZoneId::Battlefield, TRUE,
				new CreatureKeywordComparer(CreatureKeyword::Defender, false), PreventableType::Preventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorticianBeetleCard::CMorticianBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mortician Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMorticianBeetleCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CMorticianBeetleCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (moveType == MoveType::Sacrifice);
}

//____________________________________________________________________________
//
CCaravanEscortCard::CCaravanEscortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Caravan Escort"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CCaravanEscortCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(5));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CCaravanEscortCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 7; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CVeneratedTeacherCard::CVeneratedTeacherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venerated Teacher"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardAbilityNameComparer(_T("Level Up")));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(LEVEL_COUNTER, +2));
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJoragaTreespeakerCard::CJoragaTreespeakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Joraga Treespeaker"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") GREEN_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CJoragaTreespeakerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CJoragaTreespeakerCard::LevelUpAbility)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Elf), false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CJoragaTreespeakerCard::LevelUpAbility)));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetCertainCountersActivation();
		cpAbility->GetActivationCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CJoragaTreespeakerCard::LevelUpAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CJoragaTreespeakerCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 7; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CBeastbreakerOfBalaGedCard::CBeastbreakerOfBalaGedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Beastbreaker of Bala Ged"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") GREEN_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CBeastbreakerOfBalaGedCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Trample));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(6));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CBeastbreakerOfBalaGedCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CBrimstoneMageCard::CBrimstoneMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brimstone Mage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3") RED_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CBrimstoneMageCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CBrimstoneMageCard::LevelUpAbility1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CBrimstoneMageCard::LevelUpAbility2)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CBrimstoneMageCard::LevelUpAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE, 
			Life(-1),
			PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CBrimstoneMageCard::LevelUpAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE, 
			Life(-3),
			PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CBrimstoneMageCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CCoralhelmCommanderCard::CCoralhelmCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coralhelm Commander"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CCoralhelmCommanderCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 1));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetCertainCountersActivation();
		cpAbility->GetActivationCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CCoralhelmCommanderCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CEnclaveCryptologistCard::CEnclaveCryptologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Enclave Cryptologist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLUE_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CEnclaveCryptologistCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(0));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(0));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CEnclaveCryptologistCard::LevelUpAbility1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(0));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CEnclaveCryptologistCard::LevelUpAbility2)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CEnclaveCryptologistCard::LevelUpAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pCard,
			_T(""), 1));
	
	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CEnclaveCryptologistCard::LevelUpAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pCard,
			_T(""), 1));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CEnclaveCryptologistCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CGuulDrazAssassinCard::CGuulDrazAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guul Draz Assassin"), CardType::Creature, CREATURE_TYPE2(Vampire, Assassin), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CGuulDrazAssassinCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 1));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CGuulDrazAssassinCard::LevelUpAbility1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CGuulDrazAssassinCard::LevelUpAbility2)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGuulDrazAssassinCard::LevelUpAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			BLACK_MANA_TEXT,
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CGuulDrazAssassinCard::LevelUpAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			BLACK_MANA_TEXT,
			Power(-4), Life(-4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CGuulDrazAssassinCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CHadaSpyPatrolCard::CHadaSpyPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hada Spy Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") BLUE_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CHadaSpyPatrolCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Unblockable));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Unblockable));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CHadaSpyPatrolCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}
//____________________________________________________________________________
//
CHalimarWavewatchCard::CHalimarWavewatchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Halimar Wavewatch"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CHalimarWavewatchCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(0));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(0));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Islandwalk));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(6));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CHalimarWavewatchCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 7; //set max level counter count = max level up + 2
}
//____________________________________________________________________________
//
CIkiralOutriderCard::CIkiralOutriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ikiral Outrider"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CIkiralOutriderCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Vigilance));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Vigilance));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(10));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CIkiralOutriderCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}
//____________________________________________________________________________
//
CKabiraVindicatorCard::CKabiraVindicatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kabira Vindicator"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CKabiraVindicatorCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 1));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetCertainCountersActivation();
		cpAbility->GetActivationCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetActivationCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 4));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(8));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetCertainCountersActivation();
		cpAbility->GetActivationCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 5));

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CKabiraVindicatorCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 7; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CKarganDragonlordCard::CKarganDragonlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kargan Dragonlord"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			RED_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CKarganDragonlordCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 7));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying | CreatureKeyword::Trample));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 8));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(8));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(8));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CKarganDragonlordCard::LevelUpAbility)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CKarganDragonlordCard::LevelUpAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CKarganDragonlordCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 10; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CKazanduTuskcallerCard::CKazanduTuskcallerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kazandu Tuskcaller"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") GREEN_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CKazanduTuskcallerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 1));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CKazanduTuskcallerCard::LevelUpAbility1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 6));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CKazanduTuskcallerCard::LevelUpAbility2)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CKazanduTuskcallerCard::LevelUpAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pCard,
			_T(""),
			_T("Elephant A"), 2771,
			1));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CKazanduTuskcallerCard::LevelUpAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pCard,
			_T(""),
			_T("Elephant A"), 2771,
			2));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CKazanduTuskcallerCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 8; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CKnightOfCliffhavenCard::CKnightOfCliffhavenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of Cliffhaven"), CardType::Creature, CREATURE_TYPE2(Kor, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CKnightOfCliffhavenCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying | CreatureKeyword::Vigilance));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CKnightOfCliffhavenCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CLighthouseChronologistCard::CLighthouseChronologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lighthouse Chronologist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLUE_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CLighthouseChronologistCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 6));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 7));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::TimeWalk, FALSE, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLighthouseChronologistCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLighthouseChronologistCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLighthouseChronologistCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();
	if (nCounterCount < 7) return false;

	return true;
}

bool CLighthouseChronologistCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();
	if (nCounterCount < 7) return false;

	return true;
}
BOOL CLighthouseChronologistCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 9; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CLordOfShatterskullPassCard::CLordOfShatterskullPassCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of Shatterskull Pass"), CardType::Creature, CREATURE_TYPE2(Minotaur, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CLordOfShatterskullPassCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(6));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 6));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(6));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardControllerComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-6));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLordOfShatterskullPassCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLordOfShatterskullPassCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLordOfShatterskullPassCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													AttackSubject attacked) const
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();
	if (nCounterCount < 6) return false;

	return true;
}

bool CLordOfShatterskullPassCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();
	if (nCounterCount < 6) return false;

	return true;
}
BOOL CLordOfShatterskullPassCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 8; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CNirkanaCutthroatCard::CNirkanaCutthroatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nirkana Cutthroat"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") BLACK_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CNirkanaCutthroatCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(5));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CNirkanaCutthroatCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CNullChampionCard::CNullChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Null Champion"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CNullChampionCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 4));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(7));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CNullChampionCard::LevelUpAbility)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CNullChampionCard::LevelUpAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(pCard,
			BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
BOOL CNullChampionCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 6; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CSkywatcherAdeptCard::CSkywatcherAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skywatcher Adept"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CSkywatcherAdeptCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(2));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Flying));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CSkywatcherAdeptCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CStudentOfWarfareCard::CStudentOfWarfareCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Student of Warfare"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				WHITE_MANA_TEXT));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CStudentOfWarfareCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 1));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 2));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 6));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::DoubleStrike));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 7));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(4));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(4));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CStudentOfWarfareCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 9; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CTranscendentMasterCard::CTranscendentMasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Transcendent Master"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Avatar), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CTranscendentMasterCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 5));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 6));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 11));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(6));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 12));		
				
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(9));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(9));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 12));		
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);		
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
BOOL CTranscendentMasterCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 14; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CZulaportEnforcerCard::CZulaportEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zulaport Enforcer"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4")));

		cpAbility->SetAbilityName(_T("Level Up"));
		cpAbility->SetAbilityText(_T("Level Up"));

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(LEVEL_COUNTER, +1, false));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CZulaportEnforcerCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 0));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(1));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 1));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(LEVEL_COUNTER, 2));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(3));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::Unblockable));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));

		cpAbility->GetCreatureKeywordMod().GetModifier().
			SetAdditionData((DWORD)CCardFilter::GetFilter(_T("black creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(5));
		cpAbility->GetPowerModifier().SetToBase(TRUE);
		cpAbility->GetPowerModifier().SetReplacement(TRUE);
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetToBase(TRUE);
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CZulaportEnforcerCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(LEVEL_COUNTER)->GetCount();

	return nCounterCount < 5; //set max level counter count = max level up + 2
}

//____________________________________________________________________________
//
CBoarUmbraCard::CBoarUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Boar Umbra"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+3), Life(+3))
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CBearUmbraCard::CBearUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Bear Umbra"), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+2), Life(+2))
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CBearUmbraCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CBearUmbraCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrabUmbraCard::CCrabUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Crab Umbra"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Null)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pChgPwrTghAttrEnchant,
				_T("2") BLUE_MANA_TEXT));

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

		cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrakeUmbraCard::CDrakeUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Drake Umbra"), nID,
		_T("4") BLUE_MANA_TEXT,
		Power(+3), Life(+3), CreatureKeyword::Flying)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CEelUmbraCard::CEelUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Eel Umbra"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+1), Life(+1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CElandUmbraCard::CElandUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Eland Umbra"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+4))
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CHyenaUmbraCard::CHyenaUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Hyena Umbra"), nID,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::FirstStrike)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CMammothUmbraCard::CMammothUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mammoth Umbra"), nID,
		_T("4") WHITE_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Vigilance)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CSnakeUmbraCard::CSnakeUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Snake Umbra"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+1), Life(+1))
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CSnakeUmbraCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CSnakeUmbraCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiderUmbraCard::CSpiderUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Spider Umbra"), nID,
		GREEN_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Reach)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CGigantomancerCard::CGigantomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gigantomancer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("7") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(0), Life(0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(7));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	CLifeModifier* pLifeModifier = new CLifeModifier;
	pLifeModifier->SetLifeDelta(Life(7));
	pLifeModifier->SetPreventable(PreventableType::NotPreventable);
	pLifeModifier->SetToBase(TRUE);
	pLifeModifier->SetReplacement(TRUE);
	pLifeModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBanefulOmenCard::CBanefulOmenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Baneful Omen"), CardType::GlobalEnchantment, nID, 
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetRevealCardsToOthers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBanefulOmenCard::BeforeResolution));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CBanefulOmenCard::BeforeResolution(CBanefulOmenCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	int converted = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		converted = pNextDraw->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}

	CLifeModifier pModifier = CLifeModifier(Life(-converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CItThatBetraysCard::CItThatBetraysCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("It That Betrays"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("12"), Power(11), Life(11))
		,m_pSacrififcedCard(NULL)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		//cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CItThatBetraysCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CItThatBetraysCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Annihilator 2 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(2, 2, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CItThatBetraysCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if ((this->GetZoneId() == ZoneId::Battlefield) && (pByPlayer == m_pGame->GetNextPlayer(GetController())) && (moveType == MoveType::Sacrifice))
	{
		triggerContext.m_pCard = pCard;
		return TRUE;
	}
	else
	return FALSE;

}
bool CItThatBetraysCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CGainControlModifier pModifier = CGainControlModifier(m_pGame, this);
	if (triggerContext.m_pCard->GetZoneId() == ZoneId::Graveyard)
	{
		pModifier.ApplyTo(triggerContext.m_pCard);
	}
	return false;
}
//____________________________________________________________________________
//
CRealmsUnchartedCard::CRealmsUnchartedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Realms Uncharted"), CardType::Instant, nID)
{
	counted_ptr<CGiftsUngivenSpell> cpSpell(
		::CreateObject<CGiftsUngivenSpell>(this, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT, new CardTypeComparer(CardType::_Land, false)));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
COustCard::COustCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Oust"), CardType::Sorcery, nID,
		WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &COustCard::OnResolutionCompleted))
{
	 m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	
}
void COustCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller = pAbilityAction->GetAssociatedCard()->GetController();
		CZone* library = controller->GetZoneById(ZoneId::Library);
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Library, TRUE, MoveType::Others, pAbilityAction->GetController());
		pModifier.SetToTop(TRUE);
		if (library->GetSize() > 1)
			{
				//CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Library, TRUE, MoveType::Others, pAbilityAction->GetController());
				//pModifier.SetToTop(TRUE);
				library->GetAt(library->GetSize()-2)->Move(library, pAbilityAction->GetController(), MoveType::Others,CardPlacement::Top);
				//library->GetTopCard();
			}
		CLifeModifier pModifier2 = CLifeModifier(Life(+3), this);
		pModifier2.ApplyTo(controller);
	}
}
//____________________________________________________________________________
//
CAncientStirringsCard::CAncientStirringsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ancient Stirrings"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a colorless card"), _T("a colorless cards"), new CardMulticoloredComparer(CardMulticoloredComparer::ColorlessCards))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, &m_CardFilter);
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnifiedWillCard::CUnifiedWillCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Unified Will"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
		, m_CardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer)
{		
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnifiedWillCard::BeforeResolution));
}

bool CUnifiedWillCard::BeforeResolution(CAbilityAction* pAction) const
{
	int cont_creatures = m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	int opp_creatures = m_CardFilter.CountIncluded(pAction->GetAssociatedCard()->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return cont_creatures>opp_creatures;
}

//____________________________________________________________________________
//
CStaggershockCard::CStaggershockCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Staggershock"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CStaggershockCard::OnResolutionCompleted))	  		
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CStaggershockCard::CanPlay1)));

	m_pTargetChgLifeSpell->Add(cpTrait.GetPointer());	
	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	{		
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-2), PreventableType::Preventable));		

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CStaggershockCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStaggershockCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStaggershockCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStaggershockCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
	}
}
bool CStaggershockCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CStaggershockCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CStaggershockCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CStaggershockCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CStaggershockCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CStaggershockCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CDistortionStrikeCard::CDistortionStrikeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Distortion Strike"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLUE_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::Unblockable, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDistortionStrikeCard::OnResolutionCompleted))	  		
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CDistortionStrikeCard::CanPlay1)));

	m_pTargetChgPwrTghAttrSpell->Add(cpTrait.GetPointer());	
	m_pTargetChgPwrTghAttrSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	{		
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			Power(+1), Life(+0), 
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CDistortionStrikeCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDistortionStrikeCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDistortionStrikeCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDistortionStrikeCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CDistortionStrikeCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CDistortionStrikeCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CDistortionStrikeCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CDistortionStrikeCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CDistortionStrikeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CDistortionStrikeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CConsumingVaporsCard::CConsumingVaporsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Consuming Vapors"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CConsumingVaporsCard::OnResolutionCompleted))	  		
	{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	
	{
		counted_ptr<CTargetSacrificePlusSpell> cpSpell(
		::CreateObject<CTargetSacrificePlusSpell>(this, AbilityType::Sorcery,					
			_T("3") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->SetGainLifeEqualToughness(TRUE);

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CConsumingVaporsCard::CanPlay1)));

	cpSpell->Add(cpTrait.GetPointer());	
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CTargetSacrificePlusSpell> cpSpell(
		::CreateObject<CTargetSacrificePlusSpell>(this, AbilityType::Sorcery,					
			_T("3") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

		cpSpell->SetGainLifeEqualToughness(TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CConsumingVaporsCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConsumingVaporsCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CConsumingVaporsCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConsumingVaporsCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CConsumingVaporsCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CConsumingVaporsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CConsumingVaporsCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CConsumingVaporsCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CConsumingVaporsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CConsumingVaporsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CEmergeUnscathedCard::CEmergeUnscathedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Emerge Unscathed"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CEmergeUnscathedCard::OnResolutionCompleted))	  		
	{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	
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

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CEmergeUnscathedCard::CanPlay1)));

	cpSpell->Add(cpTrait.GetPointer());	
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
	}
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

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CEmergeUnscathedCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmergeUnscathedCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmergeUnscathedCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEmergeUnscathedCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CEmergeUnscathedCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CEmergeUnscathedCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CEmergeUnscathedCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CEmergeUnscathedCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CEmergeUnscathedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CEmergeUnscathedCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CNomadsAssemblyCard::CNomadsAssemblyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nomads' Assembly"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CNomadsAssemblyCard::OnResolutionCompleted))	  		
	{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	
	{
		counted_ptr<CTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE, FALSE,
			_T("Kor Soldier"), TOKEN_ID_BY_NAME, 1));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CNomadsAssemblyCard::CanPlay1)));

	cpSpell->Add(cpTrait.GetPointer());	
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CTokenProductionBySurveySpell> cpSpell(
		::CreateObject<CTokenProductionBySurveySpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			FALSE, FALSE,
			_T("Kor Soldier"), TOKEN_ID_BY_NAME, 1));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CNomadsAssemblyCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNomadsAssemblyCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNomadsAssemblyCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNomadsAssemblyCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CNomadsAssemblyCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CNomadsAssemblyCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CNomadsAssemblyCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CNomadsAssemblyCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CNomadsAssemblyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CNomadsAssemblyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CSurvivalCacheCard::CSurvivalCacheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Survival Cache"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSurvivalCacheCard::OnResolutionCompleted))	  
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSurvivalCacheCard::OnResolutionCompleted1))
	{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	
	{
		counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			Life(+2), PreventableType::NotPreventable));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CSurvivalCacheCard::CanPlay1)));

	cpSpell->Add(cpTrait.GetPointer());	
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			Life(+2), PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CSurvivalCacheCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSurvivalCacheCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSurvivalCacheCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSurvivalCacheCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CSurvivalCacheCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CSurvivalCacheCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CSurvivalCacheCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CSurvivalCacheCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CSurvivalCacheCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
	if (pAbilityAction->GetController()->GetLife() > m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetLife())
	{
		CDrawCardModifier pModifier = CDrawCardModifier(m_pGame, MinimumValue(1), MaximumValue(1));
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}
void CSurvivalCacheCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	if (pAbilityAction->GetController()->GetLife() > m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetLife())
	{
		CDrawCardModifier pModifier = CDrawCardModifier(m_pGame, MinimumValue(1), MaximumValue(1));
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}
bool CSurvivalCacheCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CDevastatingSummonsCard::CDevastatingSummonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devastating Summons"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
	::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
		RED_MANA_TEXT));

	cpSpell->GetCost().AddSacrificeCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("lands")));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevastatingSummonsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDevastatingSummonsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();

	int nTokenCount = 2;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Elemental O"), 2905));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2905); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Elemental O")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(nValue));
		pCreature->SetPrintedToughness(Life(nValue));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CTimeofHeroesCard::CTimeofHeroesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Time of Heroes"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardCounterComparer<std::greater<int>>(LEVEL_COUNTER, 0),	
			Power(+2), Life(+2), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}


//____________________________________________________________________________
//
CVirulentSwipeCard::CVirulentSwipeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Virulent Swipe"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVirulentSwipeCard::OnResolutionCompleted))	  		
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CVirulentSwipeCard::CanPlay1)));

	m_pTargetChgPwrTghAttrSpell->Add(cpTrait.GetPointer());	
	m_pTargetChgPwrTghAttrSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	{		
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			Power(+2), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CVirulentSwipeCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVirulentSwipeCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVirulentSwipeCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVirulentSwipeCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CVirulentSwipeCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CVirulentSwipeCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CVirulentSwipeCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CVirulentSwipeCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CVirulentSwipeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CVirulentSwipeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CKorSpiritdancerCard::CKorSpiritdancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Spiritdancer"), CardType::Creature, CREATURE_TYPE2(Kor, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantmentCount> cpAbility(
			::CreateObject<CPwrTghAttrEnchantmentCount>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));		

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("aura cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArrogantBloodlordCard::CArrogantBloodlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arrogant Bloodlord"), CardType::Creature, CREATURE_TYPE2(Vampire, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
		, m_CardFilter(_T("a creature with power 1 or less"), _T("creatures with power 1 or less"), new CreaturePowerComparer<std::less_equal<int>>(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArrogantBloodlordCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CArrogantBloodlordCard::BeforeResolution(CAbilityAction* pAction)
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
CPreysVengeanceCard::CPreysVengeanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Prey's Vengeance"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPreysVengeanceCard::OnResolutionCompleted))	  		
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CPreysVengeanceCard::CanPlay1)));

	m_pTargetChgPwrTghAttrSpell->Add(cpTrait.GetPointer());	
	m_pTargetChgPwrTghAttrSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	{		
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(+2), Life(+2), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CPreysVengeanceCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
{
	typedef
		TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPreysVengeanceCard::SetTriggerContext));	

	AddAbility(cpAbility.GetPointer());
}
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetPlayableFrom(ZoneId::Exile);
	cpAbility->SetSkipStack(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPreysVengeanceCard::BeforeResolution));	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPreysVengeanceCard::SetTriggerContext1));	

	AddAbility(cpAbility.GetPointer());
}
}
bool CPreysVengeanceCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CPreysVengeanceCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CPreysVengeanceCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CPreysVengeanceCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CPreysVengeanceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CPreysVengeanceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
		m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}
//____________________________________________________________________________
//
CDawnglareInvokerCard::CDawnglareInvokerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dawnglare Invoker"), CardType::Creature, CREATURE_TYPE2(Kor, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))

{
		counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerCardsSpell>>(this, //AbilityType::Instant,
				_T("8"), 
				ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures"))));

		cpAbility->AddCardModifier(new CCardOrientationModifier(TRUE));

		cpAbility->SetAbilityText(_T("Tap all creatures target player controls. Activate"));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSplinterTwinCard::CSplinterTwinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Splinter Twin"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSplinterTwinCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSplinterTwinCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(pEnchantedCard,
			_T("")));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();
	cpEnchantAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSplinterTwinCard::BeforeResolution));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

bool CSplinterTwinCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pTokens;

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);

	CCardCopyModifier pModifier2 = CCardCopyModifier(GetGame(), GetEnchantedOn(), NULL, pModifier1, &pTokens);
	pModifier2.ApplyTo(GetEnchantedOn());

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier3.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKhalniHydraCard::CKhalniHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Khalni Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
	, m_CardFilter(_T("green creature card"), _T("green creatures"), new CardTypeComparer(CardType::Green | CardType::Creature, true))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	cpAbility->SetManaReductionColor(CManaCostBase::Color::Green);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngelheartVialCard::CAngelheartVialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelheart Vial"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelheartVialCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAngelheartVialCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -4);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAngelheartVialCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const
{
	triggerContext.nValue1 = GET_INTEGER(-pDamage.m_nLifeDelta);
	return true;
}

bool CAngelheartVialCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCardCounterModifier modifier(CHARGE_COUNTER, triggerContext.nValue1, false);
	modifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CRepayInKindCard::CRepayInKindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Repay in Kind"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRepayInKindCard::OnResolutionCompleted))
{
    counted_ptr<CChgLifeBySurveySpell> cpSpell(
        ::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			false, false));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->AddAbilityTag(AbilityTag::LifeLost);

    AddSpell(cpSpell.GetPointer());
}

void CRepayInKindCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pPlayer;
	Life nMaxLife(std::numeric_limits<int>::max());
	Life nCurrentLife;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		nCurrentLife = pPlayer->GetLife();
		if (nCurrentLife < nMaxLife) nMaxLife = nCurrentLife;
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CLifeModifier* pModifier = new CLifeModifier(nMaxLife, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->SetReplacement(true);
		pPlayer = GetGame()->GetPlayer(ip);
		pModifier->ApplyTo(pPlayer);
	}

}

//____________________________________________________________________________
//
CDomesticationCard::CDomesticationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Domestication"), CardType::EnchantCreature, nID)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false)));
		ATLASSERT(cpSpell);

		pSpell = cpSpell.GetPointer();
		AddSpell(pSpell);
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDomesticationCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDomesticationCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDomesticationCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CNode* pToNode) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pSpell->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

bool CDomesticationCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pCreature = (CCreatureCard*)pSpell->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

//____________________________________________________________________________
//
CKeeningStoneCard::CKeeningStoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Keening Stone"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("5"), 0));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetRevealCardsToOthers(true);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKeeningStoneCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKeeningStoneCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Graveyard)->GetSize();

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CNarcolepsyCard::CNarcolepsyCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Narcolepsy"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNarcolepsyCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNarcolepsyCard::BeforeResolution));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	AddAbility(cpAbility.GetPointer());
}

bool CNarcolepsyCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();
	return m_pEnchantSpell->GetEnchantedOnCard()->GetOrientation()->IsUntapped() == TRUE;
}

bool CNarcolepsyCard::BeforeResolution(CAbilityAction* pAction) const
{
	return m_pEnchantSpell->GetEnchantedOnCard()->GetOrientation()->IsUntapped() == TRUE;
}

//____________________________________________________________________________
//
CBroodBirthingCard::CBroodBirthingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brood Birthing"), CardType::Sorcery, nID)
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Eldrazi) | CREATURE_TYPE(Spawn), true))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			_T("Eldrazi Spawn A"), 2848, 1));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBroodBirthingCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBroodBirthingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	int	nCreatures = m_CardFilter.CountIncluded(pZone->GetCardContainer());

	if (nCreatures == 0) return true;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = 3;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CRaidBombardmentCard::CRaidBombardmentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Raid Bombardment"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
						   CWhenAttackedBlocked::PlayerEventCallback,
						   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRaidBombardmentCard::SetTriggerContext));

    cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
    cpAbility->GetLifeModifier().SetDamageType(DamageType::NonCombatDamage | DamageType::AbilityDamage);
    cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

	AddAbility(cpAbility.GetPointer());
}

bool CRaidBombardmentCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, AttackSubject attacked) const
{
	return GET_INTEGER(pCreature->GetPower()) <= 2;
}

//____________________________________________________________________________
//
CHedronMatrixCard::CHedronMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hedron Matrix"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));

	cpAbility->AddCreatureModifier(new CPTCostModifier());

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuraGnarlidCard::CAuraGnarlidCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Aura Gnarlid"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		&m_CardFilter)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureCreaturePowerComparer<std::greater_equal<int>>(this));	

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::_Aura, false)));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMulDayaChannelersCard::CMulDayaChannelersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mul Daya Channelers"), CardType::Creature, CREATURE_TYPE3(Elf, Druid, Shaman), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
		, m_CardFilter1(_T("creature card"), _T("creatures"), new CardTypeComparer(CardType::Creature, false))
		, m_CardFilter2(_T("land card"), _T("land cards"), new CardTypeComparer(CardType::_Land, false))
		, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMulDayaChannelersCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	{
		counted_ptr<CTriggeredTopCardEnchantAbility> cpAbility(
		::CreateObject<CTriggeredTopCardEnchantAbility>(this, &m_CardFilter1));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer());
		cpAbility->GetEnchantment()->GetPowerModifier().SetPowerDelta(Power(+3));
		cpAbility->GetEnchantment()->GetLifeModifier().SetLifeDelta(Power(+3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredTopCardEnchantAbility> cpAbility(
		::CreateObject<CTriggeredTopCardEnchantAbility>(this, &m_CardFilter2));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantment()->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMulDayaChannelersCard::CreateAbility1)));	
		cpAbility->GetEnchantment()->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMulDayaChannelersCard::CreateAbility2)));	
		cpAbility->GetEnchantment()->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMulDayaChannelersCard::CreateAbility3)));	
		cpAbility->GetEnchantment()->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMulDayaChannelersCard::CreateAbility4)));	
		cpAbility->GetEnchantment()->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMulDayaChannelersCard::CreateAbility5)));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
void CMulDayaChannelersCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
counted_ptr<CAbility> CMulDayaChannelersCard::CreateAbility1(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CMulDayaChannelersCard::CreateAbility2(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CMulDayaChannelersCard::CreateAbility3(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CMulDayaChannelersCard::CreateAbility4(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
counted_ptr<CAbility> CMulDayaChannelersCard::CreateAbility5(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHellionEruptionCard::CHellionEruptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hellion Eruption"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT,
			_T("Hellion B"), 2964, 0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHellionEruptionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHellionEruptionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Battlefield);
	int	nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());
	
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));
	
	pModifier.ApplyTo(pAction->GetController());
	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCreatures;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CWarmongersChariotCard::CWarmongersChariotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Warmonger's Chariot"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::DefenderMayAttack);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCreatureModifier(pModifier); 		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChampionsDrakeCard::CChampionsDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Champion's Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+3), Life(+3)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetConditionFilter().AddComparer(
			new CardCounterComparer<std::greater_equal<int>>(LEVEL_COUNTER, 3));
	cpAbility->SetConditionValue(1);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrotagSiegeRunnerCard::CGrotagSiegeRunnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grotag Siege-Runner"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CGrotagSiegeRunnerCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			RED_MANA_TEXT,
			new CreatureKeywordComparer(CreatureKeyword::Defender, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->AddSacrificeCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CGrotagSiegeRunnerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CBattleRattleShamanCard::CBattleRattleShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battle-Rattle Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDranaKalastriaBloodchiefCard::CDranaKalastriaBloodchiefCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drana, Kalastria Bloodchief"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDranaKalastriaBloodchiefCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDranaKalastriaBloodchiefCard::BeforeResolution(CAbilityAction* pAction)
{
	int n = pAction->GetCostConfigEntry().GetExtraValue();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	
	CLifeModifier pModifier1 = CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CPowerModifier pModifier2 = CPowerModifier(Power(+n));

	pModifier1.ApplyTo(pTarget);
	pModifier2.ApplyTo(this);

	return true;
}
//____________________________________________________________________________
//
CJaddiLifestriderCard::CJaddiLifestriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jaddi Lifestrider"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(8))
  , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CJaddiLifestriderCard::OnCreatureSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJaddiLifestriderCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	
	AddAbility(cpAbility.GetPointer());
}

bool CJaddiLifestriderCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new UntappedComparer);

	pCreatures.RemoveAll();
	pRemainingCreatures.RemoveAll();

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				pRemainingCreatures.AddCard(pCard, CardPlacement::Top);
			}
		}
		CreatureSelection(pController);
	}

	return true;
}

void CJaddiLifestriderCard::CreatureSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop tapping creatures"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingCreatures.GetSize(); ++i)
	{
		CCard* pCard = pRemainingCreatures.GetAt(i);
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Tap %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}
	m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CJaddiLifestriderCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops tapping creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pCreatures.GetSize() > 0)
					Finale(pSelectionPlayer);
				
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
				pCreatures.AddCard(pCard, CardPlacement::Top);
				pRemainingCreatures.RemoveCard(pCard);

				CreatureSelection(pSelectionPlayer);

				return;
			}
		}
}

void CJaddiLifestriderCard::Finale(CPlayer* pPlayer)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	int nNumber = pCreatures.GetSize();

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pCreatures.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	
	CLifeModifier pModifier2 = CLifeModifier(Life(2*nNumber), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CSpawnsireOfUlamogCard::CSpawnsireOfUlamogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spawnsire of Ulamog"), CardType::Creature, CREATURE_TYPE(Eldrazi), nID,
		_T("10"), Power(7), Life(11))
	, m_CardFilter(_T("an Eldrazi"), _T("Eldrazi"), new CreatureTypeComparer(CREATURE_TYPE(Eldrazi), false))
{
	{
		//Annihilator 1 (Whenever this creature attacks, defending player sacrifices X permanents.)
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("4"),
				_T("Eldrazi Spawn A"), 2848,
				2));

		AddAbility(cpAbility.GetPointer());
	}
	{

		counted_ptr<CActivatedAbility<CSpawnsireOfUlamogSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSpawnsireOfUlamogSpell>>(this,
				_T("20"), &m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLayBareCard::CLayBareCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Lay Bare"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CLayBareCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CLayBareCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CDiscardCardCommon::ResolveRevealHand(pAbilityAction->GetAssociatedCard()->GetController(), pAbilityAction->GetController(), pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CCurseOfWizardryCard::CCurseOfWizardryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Curse of Wizardry"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CCurseOfWizardryCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCurseOfWizardryCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

void CCurseOfWizardryCard::Move(CZone* pToZone,
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

void CCurseOfWizardryCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

bool CCurseOfWizardryCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (cWhite && pCard->IsColor(CManaPoolBase::Color::White)) ||
		(cBlue && pCard->IsColor(CManaPoolBase::Color::Blue)) ||
		(cBlack && pCard->IsColor(CManaPoolBase::Color::Black)) ||
		(cRed && pCard->IsColor(CManaPoolBase::Color::Red)) ||
		(cGreen && pCard->IsColor(CManaPoolBase::Color::Green));
}

//____________________________________________________________________________
//
CExplosiveRevelationCard::CExplosiveRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Explosive Revelation"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExplosiveRevelationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CExplosiveRevelationCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

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
			if (!pLibrary->GetAt(i)->GetCardType().IsLand())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	if (pFound && (pFound->GetConvertedManaCost() > 0))
	{
		int nCMC = pFound->GetConvertedManaCost();

		CLifeModifier pModifier1 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

		if (pTargetCreature)
			pModifier1.ApplyTo(pTargetCreature);
		else
			pModifier1.ApplyTo(pTargetPlayer);
	}

	CCardFilter m_CardFilter;
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CRecurringInsightCard::CRecurringInsightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Recurring Insight"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CRecurringInsightCard::OnResolutionCompleted))	  		
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRecurringInsightCard::BeforeResolution1));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(
					this, &CRecurringInsightCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());	
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRecurringInsightCard::BeforeResolution1));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CRecurringInsightCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRecurringInsightCard::SetTriggerContext));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayableFrom(ZoneId::Exile);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRecurringInsightCard::BeforeResolution2));	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRecurringInsightCard::SetTriggerContext1));	

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRecurringInsightCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int nHand = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Hand)->GetSize();

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(nHand), MaximumValue(nHand));
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CRecurringInsightCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CRecurringInsightCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CRecurringInsightCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CRecurringInsightCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CRecurringInsightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CRecurringInsightCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CSurrealMemoirCard::CSurrealMemoirCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Surreal Memoir"), CardType::Sorcery, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSurrealMemoirCard::OnResolutionCompleted))	  		
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());

	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSurrealMemoirCard::BeforeResolution1));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(
					this, &CSurrealMemoirCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());	
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddSpell(cpSpell.GetPointer());
	}
	{		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSurrealMemoirCard::BeforeResolution1));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CSurrealMemoirCard::CanPlay2)));

		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredFreeCastAbility, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayableFrom(ZoneId::Exile);	

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSurrealMemoirCard::SetTriggerContext));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayableFrom(ZoneId::Exile);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSurrealMemoirCard::BeforeResolution2));	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSurrealMemoirCard::SetTriggerContext1));	

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSurrealMemoirCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("instant cards"))->GetIncluded(*pZone, cards)) return true;
	cards.Shuffle(pAction->GetController());

	CZone* pToZone = pAction->GetController()->GetZoneById(ZoneId::Hand);

	cards.GetAt(0)->Move(pToZone, pAction->GetController(), MoveType::Others);

	return true;
}

bool CSurrealMemoirCard::SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	

	return (this->GetZoneId() == ZoneId::Exile && GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
bool CSurrealMemoirCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	return (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData());
}
BOOL CSurrealMemoirCard::CanPlay1(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return true;
	else return false;
}
BOOL CSurrealMemoirCard::CanPlay2(BOOL bIncludeTricks)
{
	if (this->GetZoneId() == ZoneId::Hand && this->GetZone()->GetPlayer() == this->GetController())
    return false;
	else
	return true;
}
void CSurrealMemoirCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (this->GetZoneId() == ZoneId::Exile) m_CardFlagModifier1.ApplyTo(this);
}
bool CSurrealMemoirCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	if (GetCardFlag()->GetData(CardFlag::AbilityFlag) == m_CardFlagModifier1.GetModifier().GetAdditionData())
	{
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());
	m_CardFlagModifier2.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CSphinxBoneWandCard::CSphinxBoneWandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sphinx-Bone Wand"), CardType::Artifact, nID,
		_T("7"), AbilityType::Artifact)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CSphinxBoneWandCard::OnSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSphinxBoneWandCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSphinxBoneWandCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay() && !GetCardKeyword()->HasCantGetCounters())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Put a charge counter on %s"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Don't put a charge counter on %s"), GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pAction->GetAssociatedCard(), (DWORD)pAction->GetAssociatedPlayer());
	}

	return true;
}

void CSphinxBoneWandCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCreatureCard* pTargetCreature = (CCreatureCard*)dwContext1;
				CPlayer* pTargetPlayer = (CPlayer*)dwContext2;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts a charge counter on %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardCounterModifier pModifier1 = CCardCounterModifier(CHARGE_COUNTER, +1);
				pModifier1.ApplyTo(this);

				int nCounters = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

				CLifeModifier pModifier2 = CLifeModifier(Life(-nCounters), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				if (pTargetCreature)
					pModifier2.ApplyTo(pTargetCreature);
				else
					pModifier2.ApplyTo(pTargetPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't search his library"), pSelectionPlayer->GetPlayerName());
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
CThoughtGorgerCard::CThoughtGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thought Gorger"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, 	&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThoughtGorgerCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
	{ 
		typedef 
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required); 
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThoughtGorgerCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThoughtGorgerCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay() && !GetCardKeyword()->HasCantGetCounters())
	{
		CPlayer* pController = pAction->GetController();
		CZone* pHand = pController->GetZoneById(ZoneId::Hand);
		int nHandSize = pHand->GetSize();

		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +nHandSize);
		pModifier1.ApplyTo(this);

		CZoneModifier pModifier2 = CZoneModifier(GetGame(),
			ZoneId::Hand, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.SetReorderInformation(true, ZoneId::Graveyard, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, MoveType::Discard);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

bool CThoughtGorgerCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	int nCount = GetLastKnownp11Counters();

	triggerContext.nValue1 = nCount; 

	return true;
}

//____________________________________________________________________________
//
CContaminatedGroundCard::CContaminatedGroundCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Contaminated Ground"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CCardTypeEnchant> cpSpell(
			::CreateObject<CCardTypeEnchant>(this,
				_T("1") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->AddCardTypeToAdd(CardType::Swamp | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Swamp"));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		m_pEnchantSpell = cpSpell.GetPointer();

		AddSpell(m_pEnchantSpell);
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
		cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CContaminatedGroundCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CContaminatedGroundCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CContaminatedGroundCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, Orientation fromOrientation, Orientation toOrientation) const
{
	CCard* pEnchantedCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pEnchantedCard) return false;
	if (pEnchantedCard != pCard) return false;

	triggerContext.nValue1 = (DWORD)m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

bool CContaminatedGroundCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pCard->GetController());
	
	return true;
}

//____________________________________________________________________________
//
CGelatinousGenesisCard::CGelatinousGenesisCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gelatinous Genesis"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGelatinousGenesisCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGelatinousGenesisCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int n = pAction->GetCostConfigEntry().GetExtraValue();

	int nTokenCount = n;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Ooze F"), 62017));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62017); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Ooze F")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(n));
		pCreature->SetPrintedToughness(Life(n));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
