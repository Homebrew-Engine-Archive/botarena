#include "stdafx.h"
#include "CardAvacynRestored.h"

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

		DEFINE_CARD(CAbundantGrowthCard);
		DEFINE_CARD(CAggravateCard);
		DEFINE_CARD(CAlchemistsApprenticeCard);
		DEFINE_CARD(CAlchemistsRefugeCard);
		DEFINE_CARD(CAmassTheComponentsCard);
		DEFINE_CARD(CAngelicArmamentsCard);
		DEFINE_CARD(CAngelOfGlorysRiseCard);
		DEFINE_CARD(CAngelsTombCard);
		DEFINE_CARD(CAppetiteForBrainsCard);
		DEFINE_CARD(CArcaneMeleeCard);
		DEFINE_CARD(CArchwingDragonCard);
		DEFINE_CARD(CAvacynAngelOfHopeCard);
		DEFINE_CARD(CBanishingStrokeCard);
		DEFINE_CARD(CBannersRaisedCard);
		DEFINE_CARD(CBattleHymnCard);
		//DEFINE_CARD(CBladedBracersCard);
		DEFINE_CARD(CBloodArtistCard);
		DEFINE_CARD(CBloodflowConnoisseurCard);
		DEFINE_CARD(CBonfireOfTheDamnedCard);
		DEFINE_CARD(CBowerPassageCard);
		DEFINE_CARD(CBuildersBlessingCard);
		DEFINE_CARD(CBurnAtTheStakeCard);
		DEFINE_CARD(CButcherGhoulCard);
		DEFINE_CARD(CCallToServeCard);
		DEFINE_CARD(CCaptainOfTheMistsCard);
		DEFINE_CARD(CCatharsCrusadeCard);
		DEFINE_CARD(CCathedralSanctifierCard);
		DEFINE_CARD(CChampionOfLambholtCard);
		DEFINE_CARD(CCloudshiftCard);
		DEFINE_CARD(CCommandersAuthorityCard);
		DEFINE_CARD(CConjurersClosetCard);
		DEFINE_CARD(CCorpseTradersCard);
		DEFINE_CARD(CCraterhoofBehemothCard);
		DEFINE_CARD(CCripplingChillCard);
		DEFINE_CARD(CCursebreakCard);
		DEFINE_CARD(CDangerousWagerCard);
		DEFINE_CARD(CDeathWindCard);
		DEFINE_CARD(CDescentIntoMadnessCard);
		DEFINE_CARD(CDefangCard);
		DEFINE_CARD(CDefyDeathCard);
		DEFINE_CARD(CDemonicRisingCard);
		DEFINE_CARD(CDemonicTaskmasterCard);
		DEFINE_CARD(CDemonlordOfAshmouthCard);
		DEFINE_CARD(CDesolateLighthouseCard);
		DEFINE_CARD(CDevastationTideCard);
		DEFINE_CARD(CDevoutChaplainCard);
		//DEFINE_CARD(CDiregrafEscortCard);
		DEFINE_CARD(CDreadwatersCard);
		DEFINE_CARD(CDriverOfTheDeadCard);
		DEFINE_CARD(CDruidsFamiliarCard);
		DEFINE_CARD(CDruidsRepositoryCard);
		DEFINE_CARD(CDualCastingCard);
		DEFINE_CARD(CEatenBySpidersCard);
		DEFINE_CARD(CElgaudShieldmateCard);
		DEFINE_CARD(CEmancipationAngelCard);
		DEFINE_CARD(CEntreatTheAngelsCard);
		DEFINE_CARD(CEssenceHarvestCard);
		DEFINE_CARD(CEvernightShadeCard);
		DEFINE_CARD(CExquisiteBloodCard);
		DEFINE_CARD(CFalkenrathExterminatorCard);
		DEFINE_CARD(CFarbogExplorerCard);
		DEFINE_CARD(CFavorableWindsCard);
		DEFINE_CARD(CFerventCatharCard);
		DEFINE_CARD(CGallowsAtWillowHillCard);
		DEFINE_CARD(CGalvanicAlchemistCard);
		DEFINE_CARD(CGangOfDevilsCard);
		DEFINE_CARD(CGeistSnatchCard);
		DEFINE_CARD(CGeistTrappersCard);
		DEFINE_CARD(CGhostformCard);
		DEFINE_CARD(CGhostlyFlickerCard);
		DEFINE_CARD(CGriselbrandCard);
		DEFINE_CARD(CGroundedCard);
		DEFINE_CARD(CGoldnightCommanderCard);
		DEFINE_CARD(CGoldnightRedeemerCard);
		DEFINE_CARD(CGryffVanguardCard);
		DEFINE_CARD(CGuiseOfFireCard);
		DEFINE_CARD(CHanweirLancerCard);
		DEFINE_CARD(CHarvesterOfSoulsCard);
		DEFINE_CARD(CHauntedGuardianCard);
		DEFINE_CARD(CHavengulSkaabCard);
		DEFINE_CARD(CHavengulVampireCard);
		DEFINE_CARD(CHeirsOfStromkirkCard);
		DEFINE_CARD(CHeraldOfWarCard);
		DEFINE_CARD(CHolyJusticiarCard);
		DEFINE_CARD(CHomicidalSeclusionCard);
		DEFINE_CARD(CHoundOfGriselbrandCard);
		DEFINE_CARD(CHowlgeistCard);
		DEFINE_CARD(CHumanFrailtyCard);
		DEFINE_CARD(CHuntedGhoulCard);
		DEFINE_CARD(CIntoTheVoidCard);
		DEFINE_CARD(CKessigMalcontentsCard);
		DEFINE_CARD(CKruinStrikerCard);
		DEFINE_CARD(CLairDelveCard);
		DEFINE_CARD(CLatchSeekerCard);
		DEFINE_CARD(CLeapOfFaithCard);
		DEFINE_CARD(CLightningMaulerCard);
		DEFINE_CARD(CLightningProwessCard);
		DEFINE_CARD(CLoneRevenantCard);
		DEFINE_CARD(CLunarMysticCard);
		DEFINE_CARD(CMaalfeldTwinsCard);
		DEFINE_CARD(CMadProphetCard);
		DEFINE_CARD(CMaliciousIntentCard);
		DEFINE_CARD(CMalignusCard);
		DEFINE_CARD(CMarrowBatsCard);
		DEFINE_CARD(CMassAppealCard);
		DEFINE_CARD(CMentalAgonyCard);
		DEFINE_CARD(CMidnightDuelistCard);
		DEFINE_CARD(CMidvastProtectorCard);
		DEFINE_CARD(CMistRavenCard);
		DEFINE_CARD(CMoonlightGeistCard);
		DEFINE_CARD(CMoonsilverSpearCard);
		DEFINE_CARD(CMoorlandInquisitorCard);
		DEFINE_CARD(CNarstadScrapperCard);
		DEFINE_CARD(CNaturalEndCard);
		DEFINE_CARD(CNearheathPilgrimCard);
		DEFINE_CARD(CNecrobiteCard);
		DEFINE_CARD(CNephaliaSmugglerCard);
		DEFINE_CARD(CNettleSwineCard);
		DEFINE_CARD(CNightshadePeddlerCard);
		DEFINE_CARD(COtherworldAtlasCard);
		DEFINE_CARD(CPathbreakerWurmCard);
		DEFINE_CARD(CPillarOfFlameCard);
		DEFINE_CARD(CPollutedDeadCard);
		DEFINE_CARD(CPrimalSurgeCard);
		DEFINE_CARD(CRagingPoltergeistCard);
		DEFINE_CARD(CReforgeTheSoulCard);
		DEFINE_CARD(CRenegadeDemonCard);
		DEFINE_CARD(CRestorationAngelCard);
		DEFINE_CARD(CRevengeOfTheHuntedCard);
		DEFINE_CARD(CRighteousBlowCard);
		DEFINE_CARD(CRiotRingleaderCard);
		DEFINE_CARD(CRotcrownGhoulCard);
		DEFINE_CARD(CRushOfBloodCard);
		DEFINE_CARD(CScaldingDevilCard);
		DEFINE_CARD(CScrapskinDrakeCard);
		DEFINE_CARD(CScrollOfAvacynCard);
		DEFINE_CARD(CScrollOfGriselbrandCard);
		DEFINE_CARD(CSearchlightGeistCard);
		DEFINE_CARD(CSeraphOfDawnCard);
		DEFINE_CARD(CSeraphSanctuaryCard);
		DEFINE_CARD(CShelteringWordCard);
		DEFINE_CARD(CSilverbladePaladinCard);
		DEFINE_CARD(CSlayersStrongholdCard);
		DEFINE_CARD(CSnareTheSkiesCard);
		DEFINE_CARD(CSomberwaldVigilanteCard);
		DEFINE_CARD(CSoulcageFiendCard);
		DEFINE_CARD(CSoulOfTheHarvestCard);
		DEFINE_CARD(CSpectralGateguardsCard);
		DEFINE_CARD(CSpectralPrisonCard);
		DEFINE_CARD(CSpiritAwayCard);
		DEFINE_CARD(CSternMentorCard);
		DEFINE_CARD(CStonewrightCard);
		DEFINE_CARD(CTamiyoTheMoonSageCard);
		DEFINE_CARD(CTemporalMasteryCard);
		DEFINE_CARD(CTerminusCard);
		DEFINE_CARD(CThatcherRevoltCard);
		DEFINE_CARD(CThrabenValiantCard);
		DEFINE_CARD(CThunderousWrathCard);
		DEFINE_CARD(CTibaltTheFiendBloodedCard);
		DEFINE_CARD(CTimberlandGuideCard);
		DEFINE_CARD(CTormentorsTridentCard);
		DEFINE_CARD(CTreacherousPitDwellerCard);
		DEFINE_CARD(CTriumphOfCrueltyCard);
		DEFINE_CARD(CTriumphOfFerocityCard);
		DEFINE_CARD(CTrustedForcemageCard);
		DEFINE_CARD(CTyrantOfDiscordCard);
		DEFINE_CARD(CUlvenwaldTrackerCard);
		DEFINE_CARD(CUncannySpeedCard);
		DEFINE_CARD(CUndeadExecutionerCard);
		DEFINE_CARD(CUnhallowedPactCard);
		DEFINE_CARD(CVanguardsShieldCard);
		DEFINE_CARD(CVanishmentCard);
		DEFINE_CARD(CVesselOfEndlessRestCard);
		DEFINE_CARD(CVexingDevilCard);
		DEFINE_CARD(CVigilanteJusticeCard);
		DEFINE_CARD(CVoiceOfTheProvincesCard);
		DEFINE_CARD(CVorstclawCard);
		DEFINE_CARD(CWanderingWolfCard);
		DEFINE_CARD(CWildDefianceCard);
		DEFINE_CARD(CWingcrafterCard);
		DEFINE_CARD(CWolfirAvengerCard);
		DEFINE_CARD(CWolfirSilverheartCard);
		DEFINE_CARD(CYewSpiritCard);
		DEFINE_CARD(CZealousConscriptsCard);
		DEFINE_CARD(CZealousStrikeCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAvacynAngelOfHopeCard::CAvacynAngelOfHopeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Avacyn, Angel of Hope"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new TrueCardComparer,
				Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().
			AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDemonlordOfAshmouthCard::CDemonlordOfAshmouthCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Demonlord of Ashmouth"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4))
	, CUndyingKeyword(this)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDemonicTaskmasterCard::CDemonicTaskmasterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Demonic Taskmaster"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("2") BLACK_MANA_TEXT, Power(4), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
// 
 CGriselbrandCard::CGriselbrandCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Griselbrand"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	GetCardKeyword()->AddLifelink(FALSE);

	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 7));

		cpAbility->AddPayLifeDeltaCost(Life(-7));

		AddAbility(cpAbility.GetPointer());
	}
} 

//____________________________________________________________________________
//
CHowlgeistCard::CHowlgeistCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Howlgeist"), CardType::Creature, CREATURE_TYPE2(Spirit, Wolf), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(2),
		&m_CardFilter)
	, CUndyingKeyword(this)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureCreaturePowerComparer<std::greater_equal<int>>(this));	
}

//____________________________________________________________________________
//
CCloudshiftCard::CCloudshiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cloudshift"), CardType::Instant, nID)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCloudshiftCard::OnResolutionCompleted1))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
			WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCloudshiftCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);
	
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));

	/*CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));*/

	pModifier1->ApplyTo(target->GetOwner());
	//pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CRestorationAngelCard::CRestorationAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Restoration Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRestorationAngelCard::OnResolutionCompleted1))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Angel), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

void CRestorationAngelCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);
	
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));

	/*CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));*/

	pModifier1->ApplyTo(target->GetOwner());
	//pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CCraterhoofBehemothCard::CCraterhoofBehemothCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Craterhoof Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCraterhoofBehemothCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CCraterhoofBehemothCard::BeforeResolution(CCraterhoofBehemothCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	int n = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(n));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(n));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CDruidsRepositoryCard::CDruidsRepositoryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Druids' Repository"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback,
								&CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

        cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLatchSeekerCard::CLatchSeekerCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Latch Seeker"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CMoonsilverSpearCard::CMoonsilverSpearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moonsilver Spear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));
	
	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CMoonsilverSpearCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CMoonsilverSpearCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Angel G"), 2969, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	return counted_ptr<CAbility>(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CAngelsTombCard::CAngelsTombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angel's Tomb"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier( _T("Angel AA"), 64012, GetController());
	cpAbility->GetTriggeredCardModifiers().push_back(new CScheduledCardModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, true,  CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcaneMeleeCard::CArcaneMeleeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arcane Melee"), CardType::GlobalEnchantment, nID,
		_T("4") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			_T("2")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHarvesterOfSoulsCard::CHarvesterOfSoulsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harvester of Souls"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmancipationAngelCard::CEmancipationAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emancipation Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
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
CTamiyoTheMoonSageCard::CTamiyoTheMoonSageCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Tamiyo, the Moon Sage"), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
		PlaneswalkerType::Tamiyo, 4)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTamiyoTheMoonSageCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new TrueCardComparer, FALSE));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
				_T("")));	

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Tamiyo, the Moon Sage Emblem"), 61011, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - You have no maximum hand size and Whenever a card is put into your graveyard from anywhere, you may return it to your hand."));
		cpAbility->SetAbilityText(_T("You get an emblem with - You have no maximum hand size and Whenever a card is put into your graveyard from anywhere, you may return it to your hand."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);

		AddAbility(cpAbility.GetPointer());			
	}
}

void CTamiyoTheMoonSageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	CZone* pInplay = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddComparer(new TappedComparer);

	int n = m_CardFilter_temp.CountIncluded(pInplay->GetCardContainer());

	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));
	modifier1.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CCatharsCrusadeCard::CCatharsCrusadeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cathars' Crusade"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTibaltTheFiendBloodedCard::CTibaltTheFiendBloodedCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Tibalt, the Fiend-Blooded"), nID,
		RED_MANA_TEXT RED_MANA_TEXT, 
		PlaneswalkerType::Tibalt, 2)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTibaltTheFiendBloodedCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeBySurveySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeBySurveySpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				ZoneId::Hand, FALSE,
				new TrueCardComparer, PreventableType::Preventable));	

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -4);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalChgPwrTghSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgPwrTghSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				new AnyCreatureComparer));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);
		
		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	
		CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
		CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
			pGame, pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCardModifier::Operation::ApplyToLater);

		CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier();
		pModifier3->GetModifier().SetOneTurnOnly(TRUE);
		pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	
		cpAbility->GetSubjectModifier().CCardModifiers::push_back(pModifier1);
		cpAbility->GetSubjectModifier().CCardModifiers::push_back(pModifier2);
		cpAbility->GetSubjectModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
		cpAbility->GetSubjectModifier().CCreatureModifiers::push_back(pModifier3);
	
		AddAbility(cpAbility.GetPointer());			
	}
}

void CTibaltTheFiendBloodedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CRandomDiscardModifier modifier = CRandomDiscardModifier(1);
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDesolateLighthouseCard::CDesolateLighthouseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Desolate Lighthouse"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHeraldOfWarCard::CHeraldOfWarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Herald of War"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CTriggeredCounterAffinityAbility> cpAbility(
			::CreateObject<CTriggeredCounterAffinityAbility>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Angel) | CREATURE_TYPE(Human), false), _T("+1/+1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAppetiteForBrainsCard::CAppetiteForBrainsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Appetite for Brains"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::greater<int>>(3));

	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Others, ZoneId::Exile, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	// Exclude land cards

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGoldnightRedeemerCard::CGoldnightRedeemerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goldnight Redeemer"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));	

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
			&CGoldnightRedeemerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoldnightRedeemerCard::BeforeResolution(CGoldnightRedeemerCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(2*
		m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CNephaliaSmugglerCard::CNephaliaSmugglerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nephalia Smuggler"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNephaliaSmugglerCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));
	
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CNephaliaSmugglerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);
	
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));

	/*CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));*/

	pModifier1->ApplyTo(target->GetOwner());
	//pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CAngelOfGlorysRiseCard::CAngelOfGlorysRiseCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Glory's Rise"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(6))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAngelOfGlorysRiseCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
	
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CAngelOfGlorysRiseCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);
	m_CardFilter_temp.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)));

	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDefyDeathCard::CDefyDeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Defy Death"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDefyDeathCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->FlagTargets(TRUE,  // flag targets
						TRUE); // until end of turn

	m_CardFilter.AddComparer(new CardAbilityFlagComparer(cpSpell.GetPointer())); // flagged by this spell

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CDefyDeathCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();

	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Angel), false)); // only Angels

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter, // do something with the flagged card
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +2)));

	pModifier.ApplyTo(cont);
}

//____________________________________________________________________________
//
CDemonicRisingCard::CDemonicRisingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Demonic Rising"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Demon C"), 2901, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDemonicRisingCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDemonicRisingCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDemonicRisingCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
									  CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer()) == 1);
}

bool CDemonicRisingCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer()) == 1);
}

//____________________________________________________________________________
//
CHumanFrailtyCard::CHumanFrailtyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Human Frailty"), CardType::Instant, nID,
		BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Human), false));
}

//____________________________________________________________________________
//
CThrabenValiantCard::CThrabenValiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thraben Valiant"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CSlayersStrongholdCard::CSlayersStrongholdCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Slayers' Stronghold"), nID)
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
				RED_MANA_TEXT WHITE_MANA_TEXT,
				Power(+2), Life(+0),
				CreatureKeyword::Vigilance | CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCommandersAuthorityCard::CCommandersAuthorityCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Commander's Authority"), nID,
		_T("4") WHITE_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CCommandersAuthorityCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CCommandersAuthorityCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Human C"), 62013, 1);
	
	cpAbility->SetAbilityName(_T("token creation ability"));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTreacherousPitDwellerCard::CTreacherousPitDwellerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treacherous Pit-Dweller"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
	, CUndyingKeyword(this)
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->GetTriggeredPlayerModifiers().push_back(
		new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	cpAbility->SetAbilityName(_T("gain control ability"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTriumphOfCrueltyCard::CTriumphOfCrueltyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Triumph of Cruelty"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTriumphOfCrueltyCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTriumphOfCrueltyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	int nGreatestPower = 0;

	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pContInplay->GetCardContainer()) == 0) return false;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard2 = pContInplay->GetAt(i);
		if (pContCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature2 = (CCreatureCard*)pContCard2;
			if (GET_INTEGER(pContCreature2->GetLastKnownPower()) > nGreatestPower)
			nGreatestPower = GET_INTEGER(pContCreature2->GetLastKnownPower());
		}
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard2 = pOppInplay->GetAt(i);
		if (pOppCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature2 = (CCreatureCard*)pOppCard2;
			if (GET_INTEGER(pOppCreature2->GetLastKnownPower()) > nGreatestPower)
				return false;
		}
	}

	return true;
}

//____________________________________________________________________________
//
CTriumphOfFerocityCard::CTriumphOfFerocityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Triumph of Ferocity"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTriumphOfFerocityCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTriumphOfFerocityCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	int nGreatestPower = 0;

	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pContInplay->GetCardContainer()) == 0) return false;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pContCard2 = pContInplay->GetAt(i);
		if (pContCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature2 = (CCreatureCard*)pContCard2;
			if (GET_INTEGER(pContCreature2->GetLastKnownPower()) > nGreatestPower)
			nGreatestPower = GET_INTEGER(pContCreature2->GetLastKnownPower());
		}
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard2 = pOppInplay->GetAt(i);
		if (pOppCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature2 = (CCreatureCard*)pOppCard2;
			if (GET_INTEGER(pOppCreature2->GetLastKnownPower()) > nGreatestPower)
				return false;
		}
	}

	return true;
}

//____________________________________________________________________________
//
CSoulOfTheHarvestCard::CSoulOfTheHarvestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul of the Harvest"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlchemistsRefugeCard::CAlchemistsRefugeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Alchemist's Refuge"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpAbility(
			::CreateObject<CGenericSpell>(this, AbilityType::Activated,
				GREEN_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->SetToActivatedAbility();
		cpAbility->AddTapCost();
		
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Alchemist's Refuge Effect"), 61013, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArchwingDragonCard::CArchwingDragonCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Archwing Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddFlying(FALSE);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExquisiteBloodCard::CExquisiteBloodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Exquisite Blood"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CExquisiteBloodCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CExquisiteBloodCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife < nFromLife)
	{
		triggerContext.m_LifeModifier.SetLifeDelta(Life(nFromLife - nToLife));
		triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);
		triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
		return true;
	}

	return false;
}

//____________________________________________________________________________
//
CPillarOfFlameCard::CPillarOfFlameCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pillar of Flame"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::NonCombatDamage | DamageType::SpellDamage |  DamageType::ToExileDamage);

	cpSpell->AddAbilityTag(AbilityTag::DamageSource);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUlvenwaldTrackerCard::CUlvenwaldTrackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ulvenwald Tracker"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CUlvenwaldTrackerSpell>> cpAbility(
		::CreateObject <CActivatedAbility<CUlvenwaldTrackerSpell>>(this,
			_T("1") GREEN_MANA_TEXT));
	
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

CUlvenwaldTrackerCard::CUlvenwaldTrackerSpell::CUlvenwaldTrackerSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""), TRUE)
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CUlvenwaldTrackerCard::CUlvenwaldTrackerSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
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
CWolfirAvengerCard::CWolfirAvengerCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Wolfir Avenger"), CardType::Creature, CREATURE_TYPE2(Wolf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3),
		_T("1") GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CThatcherRevoltCard::CThatcherRevoltCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thatcher Revolt"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThatcherRevoltCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CThatcherRevoltCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Human B"), 2958, 3, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}


//____________________________________________________________________________
//
CFarbogExplorerCard::CFarbogExplorerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Farbog Explorer"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CLeapOfFaithCard::CLeapOfFaithCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Leap of Faith"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CVoiceOfTheProvincesCard::CVoiceOfTheProvincesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of the Provinces"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Human C"), 62013, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHavengulSkaabCard::CHavengulSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Havengul Skaab"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("5") BLUE_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
						CWhenSelfAttackedBlocked::AttackEventCallback, 
						&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLunarMysticCard::CLunarMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lunar Mystic"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRotcrownGhoulCard::CRotcrownGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotcrown Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
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
CSpectralPrisonCard::CSpectralPrisonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Spectral Prison"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, true, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpectralPrisonCard::SetTriggerContext));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CSpectralPrisonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* byPlayer) const
{
	return GetGame()->GetStack().GetTopAction()->IsSpell() == TRUE;
}

//____________________________________________________________________________
//
CEvernightShadeCard::CEvernightShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Evernight Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CMaalfeldTwinsCard::CMaalfeldTwinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maalfeld Twins"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("5") BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Zombie L"), 2962, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGangOfDevilsCard::CGangOfDevilsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gang of Devils"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDistributeValues();
	cpAbility->SetValueToDistribute(-3);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHavengulVampireCard::CHavengulVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Havengul Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
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
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
		ATLASSERT(cpAbility);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHoundOfGriselbrandCard::CHoundOfGriselbrandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hound of Griselbrand"), CardType::Creature, CREATURE_TYPE2(Elemental, Hound), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
	, CUndyingKeyword(this)
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CKessigMalcontentsCard::CKessigMalcontentsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kessig Malcontents"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
	, m_CardFilter(_T("a Human"), _T("Humans"), new CreatureTypeComparer(CREATURE_TYPE(Human), false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKessigMalcontentsCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CKessigMalcontentsCard::BeforeResolution(CKessigMalcontentsCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CKruinStrikerCard::CKruinStrikerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kruin Striker"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiotRingleaderCard::CRiotRingleaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riot Ringleader"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRushOfBloodCard::CRushOfBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rush of Blood"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			Power(SpecialNumber::MultiplyBy2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSomberwaldVigilanteCard::CSomberwaldVigilanteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Somberwald Vigilante"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSomberwaldVigilanteCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CSomberwaldVigilanteCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return true;
}

//____________________________________________________________________________
//
CGroundedCard::CGroundedCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Grounded"), nID,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
}

//____________________________________________________________________________
//
CBuildersBlessingCard::CBuildersBlessingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Builder's Blessing"), CardType::GlobalEnchantment, nID,
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
CCallToServeCard::CCallToServeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Call to Serve"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2),
		CreatureKeyword::Flying)
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	m_pChgPwrTghAttrEnchant->AddCreatureModifier(new CCreatureTypeModifier(SingleCreatureType::Angel));
}

//____________________________________________________________________________
//
CCathedralSanctifierCard::CCathedralSanctifierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cathedral Sanctifier"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCursebreakCard::CCursebreakCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Cursebreak"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCursebreakCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CCursebreakCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(+2), this, PreventableType::NotPreventable);
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDefangCard::CDefangCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Defang"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::DealNoNoncombatDamage)
{
}

//____________________________________________________________________________
//
CDevoutChaplainCard::CDevoutChaplainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devout Chaplain"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoldnightCommanderCard::CGoldnightCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goldnight Commander"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHolyJusticiarCard::CHolyJusticiarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Holy Justiciar"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(1))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHolyJusticiarCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			TRUE,	// tap
			FALSE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

void CHolyJusticiarCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target = pAbilityAction->GetAssociatedCard();

	CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others);

	if (bResult && (((CCreatureCard*)target)->GetCreatureType().HasType(SingleCreatureType::Zombie)) || target->GetCardKeyword()->HasChangeling())
	pModifier->ApplyTo(target);
}

//____________________________________________________________________________
//
CMidnightDuelistCard::CMidnightDuelistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Midnight Duelist"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CMidvastProtectorCard::CMidvastProtectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Midvast Protector"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredGainKeywordAbility , CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);		
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoonlightGeistCard::CMoonlightGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moonlight Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("3") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoorlandInquisitorCard::CMoorlandInquisitorCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Moorland Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2),
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::FirstStrike)
{
}

//____________________________________________________________________________
//
CRighteousBlowCard::CRighteousBlowCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Righteous Blow"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-2), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CSeraphOfDawnCard::CSeraphOfDawnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Seraph of Dawn"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CZealousStrikeCard::CZealousStrikeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Zealous Strike"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CAlchemistsApprenticeCard::CAlchemistsApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alchemist's Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmassTheComponentsCard::CAmassTheComponentsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Amass the Components"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT, 3));

	cpSpell->SetDiscard(1, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCaptainOfTheMistsCard::CCaptainOfTheMistsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Captain of the Mists"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				TRUE,	// tap
				TRUE,	// untap
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CCripplingChillCard::CCripplingChillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crippling Chill"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCripplingChillCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 
			new AnyCreatureComparer,
			FALSE));
	
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	AddSpell(cpSpell.GetPointer());
}

void CCripplingChillCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDreadwatersCard::CDreadwatersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dreadwaters"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			0));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetRevealCardsToOthers(TRUE);
	cpSpell->SetReorder(true, ZoneId::Graveyard, CardPlacement::Top);	
		
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDreadwatersCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDreadwatersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pLib = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library);

	int n = (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()));

	if (n > pLib->GetSize()) n = pLib->GetSize();

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = n;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return n > 0;
}

//____________________________________________________________________________
//
CFavorableWindsCard::CFavorableWindsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Favorable Winds"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(+1), Life(+1)));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->SetListenToKeyword();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGeistSnatchCard::CGeistSnatchCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Geist Snatch"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new AnyCreatureComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGeistSnatchCard::OnResolutionCompleted))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CGeistSnatchCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit M"), 2959, 1);
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CGhostformCard::CGhostformCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghostform"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGryffVanguardCard::CGryffVanguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Gryff Vanguard"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(2))
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
CIntoTheVoidCard::CIntoTheVoidCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Into the Void"), CardType::Sorcery, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, 2);
}

//____________________________________________________________________________
//
CLoneRevenantCard::CLoneRevenantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lone Revenant"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));	

	GetCardKeyword()->AddHexproof(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLoneRevenantCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLoneRevenantCard::BeforeResolution));

	CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4));	
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

bool CLoneRevenantCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0);
}

bool CLoneRevenantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) == 0);
}

//____________________________________________________________________________
//
CMassAppealCard::CMassAppealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mass Appeal"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpSpell->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMistRavenCard::CMistRavenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mist Raven"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScrapskinDrakeCard::CScrapskinDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scrapskin Drake"), CardType::Creature, CREATURE_TYPE2(Zombie, Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CSpiritAwayCard::CSpiritAwayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spirit Away"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlPumpEnchant> cpSpell(
		::CreateObject<CControlPumpEnchant>(this,
			_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+2),
			CardKeyword::Null,
			CreatureKeyword::Flying));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBloodArtistCard::CBloodArtistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Artist"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
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
CBloodflowConnoisseurCard::CBloodflowConnoisseurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodflow Connoisseur"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CButcherGhoulCard::CButcherGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Butcher Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CCorpseTradersCard::CCorpseTradersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Traders"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this, 
			_T("2") BLACK_MANA_TEXT, 
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// targeted player chooses?
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathWindCard::CDeathWindCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Death Wind"), CardType::Instant  | CardType::Arcane, nID, AbilityType::Instant,
		BLACK_MANA_TEXT, 
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(-1, -1 /*power*/));
}

//____________________________________________________________________________
//
CDriverOfTheDeadCard::CDriverOfTheDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Driver of the Dead"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEssenceHarvestCard::CEssenceHarvestCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Essence Harvest"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE, // Target player?
		Life(0), // Life delta
		PreventableType::NotPreventable) // Preventable?
{
	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();
	m_pTargetChgLifeSpell->SetDamageType(DamageType::NotDealingDamage);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEssenceHarvestCard::BeforeResolution));
}

bool CEssenceHarvestCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	if (pInplay->GetSize() > 0)
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				int nCost = GET_INTEGER(((CCreatureCard*)pCard)->GetPower());
				if (nCost > nMaxCost)
				{
					nMaxCost = nCost;
				}
			}
		}

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -nMaxCost;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
	it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CHuntedGhoulCard::CHuntedGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunted Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

	GetCreatureKeyword()->AddCantBlock(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CMarrowBatsCard::CMarrowBatsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Marrow Bats"), CardType::Creature, CREATURE_TYPE2(Bat, Skeleton), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(1))
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("")));

	cpAbility->AddPayLifeDeltaCost(Life(-4));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMentalAgonyCard::CMentalAgonyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mental Agony"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CMentalAgonyCard::OnResolutionCompleted))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CMentalAgonyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target=pAbilityAction->GetAssociatedPlayer();
	CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CNecrobiteCard::CNecrobiteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Necrobite"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNecrobiteCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CNecrobiteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreatureCard = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	pCreatureCard->AddRegenerationShield();
}

//____________________________________________________________________________
//
CPollutedDeadCard::CPollutedDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Polluted Dead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRenegadeDemonCard::CRenegadeDemonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Renegade Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
}

//____________________________________________________________________________
//
CSearchlightGeistCard::CSearchlightGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Searchlight Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("3") BLACK_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulcageFiendCard::CSoulcageFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulcage Fiend"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
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
CUndeadExecutionerCard::CUndeadExecutionerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Executioner"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnhallowedPactCard::CUnhallowedPactCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Unhallowed Pact"), CardType::EnchantCreature, nID,
		_T("2") BLACK_MANA_TEXT,
		new AnyCreatureComparer)		
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUnhallowedPactCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CUnhallowedPactCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CUnhallowedPactCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pEnchantedCard;
	return true;
}

bool CUnhallowedPactCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
CBannersRaisedCard::CBannersRaisedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Banners Raised"), CardType::Instant, nID)
{
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			new AnyCreatureComparer));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBattleHymnCard::CBattleHymnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Battle Hymn"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBattleHymnCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBattleHymnCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n>0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CDangerousWagerCard::CDangerousWagerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dangerous Wager"), CardType::Instant, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT, 2, 2));

	cpSpell->SetDiscardHand(TRUE);
	cpSpell->SetTargetControllerPlayerOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFalkenrathExterminatorCard::CFalkenrathExterminatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Falkenrath Exterminator"), CardType::Creature, CREATURE_TYPE2(Vampire, Archer), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFalkenrathExterminatorCard::OnResolutionCompleted))
{
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
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericTargetCreatureSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericTargetCreatureSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer));
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
}

void CFalkenrathExterminatorCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CLifeModifier pModifier = CLifeModifier(Life(-nCounterCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CFerventCatharCard::CFerventCatharCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Fervent Cathar"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
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
CGuiseOfFireCard::CGuiseOfFireCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Guise of Fire"), nID,
		RED_MANA_TEXT,
		Power(+1), Life(-1),
		CreatureKeyword::MustAttack)
{
}

//____________________________________________________________________________
//
CHeirsOfStromkirkCard::CHeirsOfStromkirkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heirs of Stromkirk"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	
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
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLightningProwessCard::CLightningProwessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Lightning Prowess"), nID,
		_T("2") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CLightningProwessCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CLightningProwessCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMadProphetCard::CMadProphetCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Mad Prophet"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();
	
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaliciousIntentCard::CMaliciousIntentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Malicious Intent"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CMaliciousIntentCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CMaliciousIntentCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pCard,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRagingPoltergeistCard::CRagingPoltergeistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raging Poltergeist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") RED_MANA_TEXT, Power(6), Life(1))
{
}

//____________________________________________________________________________
//
CScaldingDevilCard::CScaldingDevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scalding Devil"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTyrantOfDiscordCard::CTyrantOfDiscordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tyrant of Discord"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(
		this, &CTyrantOfDiscordCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CTyrantOfDiscordCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* target= pAction->GetAssociatedPlayer();
	CZone* targetBattle = target->GetZoneById(ZoneId::Battlefield);
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
	
	int n = targetBattle->GetSize();

	for (int i = 0; i < n; ++i)
	{
		CCard* pCard = targetBattle->GetAt(pAction->GetController()->GetRand() % targetBattle->GetSize());

		if (pCard->GetCardType().IsLand())
		{
			pModifier.ApplyTo(pCard);
			break;
		}

		else pModifier.ApplyTo(pCard);
	}

	return true;
}

//____________________________________________________________________________
//
CUncannySpeedCard::CUncannySpeedCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Uncanny Speed"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			Power(+3), Life(0), 
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVigilanteJusticeCard::CVigilanteJusticeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vigilante Justice"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBowerPassageCard::CBowerPassageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bower Passage"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(+0), Life(+0), CreatureKeyword::CantBlock));

	cpAbility->SetAffectOpponentCardsOnly();

	cpAbility->SetListenToKeyword();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEatenBySpidersCard::CEatenBySpidersCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Eaten by Spiders"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CreatureKeywordComparer(CreatureKeyword::Flying, false),
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEatenBySpidersCard::BeforeResolution));
}

bool CEatenBySpidersCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EquippedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CLairDelveCard::CLairDelveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lair Delve"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a land or creature"), _T("lands or creatures"), new CardTypeComparer(CardType::Creature | CardType::_Land, false))
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			2));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
	cpSpell->SetSelectionOptions(MinimumValue(SpecialNumber::All), MaximumValue(SpecialNumber::Any), ZoneId::Hand, CardPlacement::NotApplicable, 
		&m_CardFilter);
	
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNaturalEndCard::CNaturalEndCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Natural End"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment | CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNaturalEndCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CNaturalEndCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(+3), this, PreventableType::NotPreventable);
	if (bResult) pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CNettleSwineCard::CNettleSwineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nettle Swine"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CSnareTheSkiesCard::CSnareTheSkiesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Snare the Skies"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Reach, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTimberlandGuideCard::CTimberlandGuideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timberland Guide"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVorstclawCard::CVorstclawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vorstclaw"), CardType::Creature, CREATURE_TYPE2(Elemental, Horror), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
}

//____________________________________________________________________________
//
CWanderingWolfCard::CWanderingWolfCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Wandering Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		&m_CardFilter)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureCreaturePowerComparer<std::greater_equal<int>>(this));	
}

//____________________________________________________________________________
//
CWildDefianceCard::CWildDefianceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wild Defiance"), CardType::GlobalEnchantment, nID, 
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWildDefianceCard::SetTriggerContext));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CWildDefianceCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	CZone* pStack = byPlayer->GetZoneById(ZoneId::Stack);
	triggerContext.m_pCreature = (CCreatureCard*)pToCard;

	if (GetGame()->GetStack().GetTopAction()->IsSpell())
		return (((CCard*)pStack->GetAt(pStack->GetSize() - 1))->GetCardType() & (CardType::Instant | CardType::Sorcery)).Any();
	return false;
}

//____________________________________________________________________________
//
CYewSpiritCard::CYewSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yew Spirit"), CardType::Creature, CREATURE_TYPE2(Spirit, Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CYewSpiritCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CYewSpiritCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPowerModifier pModifier1 = CPowerModifier(Power(this->GetLastKnownPower()));
	CLifeModifier pModifier2 = CLifeModifier(Life(GET_INTEGER(this->GetLastKnownPower())));
	pModifier1.ApplyTo((CCreatureCard*)this);
	pModifier2.ApplyTo((CCreatureCard*)this);

	return true;
}

//____________________________________________________________________________
//
CAngelicArmamentsCard::CAngelicArmamentsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Armaments"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4"),
			new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));
	
	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);
	
	CCardTypeModifier* pModifier1 = new CCardTypeModifier(CardType::White);
		
	cpAbility->AddCardModifier(pModifier1);	

	cpAbility->AddCreatureModifier(new CCreatureTypeModifier(SingleCreatureType::Angel));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConjurersClosetCard::CConjurersClosetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Conjurer's Closet"), CardType::Artifact, nID, 
		_T("5"), AbilityType::Artifact)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CConjurersClosetCard::OnResolutionCompleted1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CConjurersClosetCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);
	
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));

	pModifier1->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//
CGallowsAtWillowHillCard::CGallowsAtWillowHillCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gallows at Willow Hill"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	cpAbility->GetCost().AddTapCardCost(3, &m_CardFilter);

	cpAbility->GetCardControllerModifier().CPlayerModifiers::Add(new CTokenCreationModifier(GetGame(), _T("Spirit L"), 2946, 1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHauntedGuardianCard::CHauntedGuardianCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Haunted Guardian"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(2), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CNarstadScrapperCard::CNarstadScrapperCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Narstad Scrapper"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(3), Life(3),
		_T("2"), Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
COtherworldAtlasCard::COtherworldAtlasCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Otherworld Atlas"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a charge counter on"));

		AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		
		cpAbility->SetAbilityText(_T("Each player draws a card for each charge counter on"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COtherworldAtlasCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool COtherworldAtlasCard::BeforeResolution(CAbilityAction* pAction)
{
	int n = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));
	modifier1.ApplyTo(pAction->GetController());
	modifier1.ApplyTo(m_pGame->GetNextPlayer(pAction->GetController()));

	return true;
}

//____________________________________________________________________________
//
CScrollOfAvacynCard::CScrollOfAvacynCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scroll of Avacyn"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1"), 1));

	cpAbility->AddSacrificeCost();
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScrollOfAvacynCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CScrollOfAvacynCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Angel), false));

	CLifeModifier pModifier = CLifeModifier(Life(+5), this, PreventableType::NotPreventable);

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(pAction->GetController());	

	return true;
}

//____________________________________________________________________________
//
CScrollOfGriselbrandCard::CScrollOfGriselbrandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scroll of Griselbrand"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CScrollOfGriselbrandCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("1"),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->AddSacrificeCost();
	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

void CScrollOfGriselbrandCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());
}

//____________________________________________________________________________
//
CTormentorsTridentCard::CTormentorsTridentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tormentor's Trident"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3"),
			new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVesselOfEndlessRestCard::CVesselOfEndlessRestCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vessel of Endless Rest"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(FALSE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
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
CSeraphSanctuaryCard::CSeraphSanctuaryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seraph Sanctuary"), nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Angel), false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVanguardsShieldCard::CVanguardsShieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vanguard's Shield"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));
	
	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+3), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));
	
	cpAbility->AddCreatureModifier(new CCreatureCanBlockAdditionModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZealousConscriptsCard::CZealousConscriptsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Zealous Conscripts"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CZealousConscriptsCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	
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

void CZealousConscriptsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();

	if (pTarget->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifier1;
		pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier1.GetModifier().SetOneTurnOnly(TRUE);

		pModifier1.ApplyTo((CCreatureCard*)pTarget);
	}
	else
	{
		CCardKeywordModifier pModifier2;
		pModifier2.GetModifier().SetToAdd(CardKeyword::CardHaste);
		pModifier2.GetModifier().SetOneTurnOnly(TRUE);

		pModifier2.ApplyTo(pTarget);
	}

	CCardOrientationModifier pModifier3 = CCardOrientationModifier(FALSE);

	pModifier3.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CDualCastingCard::CDualCastingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dual Casting"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDualCastingCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDualCastingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(pEnchantedCard,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
			ZoneId::Stack));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}
//____________________________________________________________________________
//
CShelteringWordCard::CShelteringWordCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sheltering Word"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CShelteringWordCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CShelteringWordCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	CLifeModifier modifier = CLifeModifier(Life(GET_INTEGER(pCreature->GetLife())), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CVexingDevilCard::CVexingDevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vexing Devil"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		RED_MANA_TEXT, Power(4), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVexingDevilCard::OnPunisherSelected))
	, bSomeonePaid(FALSE)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVexingDevilCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CVexingDevilCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}


	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CVexingDevilCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);

	if (pPlayer != GetController())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Take 4 damage"));

			bSomeonePaid = false;

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Don't take damage"));

			bSomeonePaid = true;

			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}

void CVexingDevilCard::Advance(int PlayerID, CPlayer* pController)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer, pController);
	else if (bSomeonePaid)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
		pModifier.ApplyTo(this);
	}
}

void CVexingDevilCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s takes 4 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-4), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				
				bSomeonePaid = FALSE;

				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}

//____________________________________________________________________________
//
CPrimalSurgeCard::CPrimalSurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Primal Surge"), CardType::Sorcery, nID)
	, m_BattlefieldSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPrimalSurgeCard::OnBattlefieldSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("8") GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimalSurgeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPrimalSurgeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	if (pLibrary->GetSize() > 0)
	{
		CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pController);

		pModifier.ApplyTo(pNextDraw);

		if (pNextDraw->GetCardType().IsPermanent())
			BattlefieldChoice(pNextDraw);
	}

	return true;
}

void CPrimalSurgeCard::BattlefieldChoice(CCard* pCard)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Put %s on the battlefield"), pCard->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Leave %s in exile"), pCard->GetCardName());

		entries.push_back(selectionEntry);
	}
	m_BattlefieldSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(),(DWORD)pCard);
}

void CPrimalSurgeCard::OnBattlefieldSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				
				pModifier.ApplyTo(pCard);

				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				if (pLibrary->GetSize()>0)
				{
					CCard* pNextDraw = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);

					pModifier.ApplyTo(pNextDraw);

					if (pNextDraw->GetCardType().IsPermanent())
						BattlefieldChoice(pNextDraw);
				}

				return;
			}
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s leaves %s in exile"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName());
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
/*
CBladedBracersCard::CBladedBracersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bladed Bracers"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Angel) | CREATURE_TYPE(Human), false),
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new EquippedByComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}
*/
//____________________________________________________________________________
//
CWolfirSilverheartCard::CWolfirSilverheartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wolfir Silverheart"), CardType::Creature, CREATURE_TYPE2(Wolf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+4), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CWolfirSilverheartCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWolfirSilverheartCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CWolfirSilverheartCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+4), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWolfirSilverheartCard::BeforeResolution1(CWolfirSilverheartCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CWolfirSilverheartCard::BeforeResolution2(CWolfirSilverheartCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CWolfirSilverheartCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CTemporalMasteryCard::CTemporalMasteryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Mastery"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CTemporalMasteryCard::OnYesNoSelected))
{
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT ,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetAbilityName(_T("Miracle"));
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CTemporalMasteryCard::CanPlay1)));

			cpSpell->Add(cpTrait.GetPointer());

			cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTemporalMasteryCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CTemporalMasteryCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CTemporalMasteryCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CBanishingStrokeCard::CBanishingStrokeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Banishing Stroke"), CardType::Instant, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CBanishingStrokeCard::OnYesNoSelected))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("5") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->SetCardPlacement(CardPlacement::Bottom);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		cpSpell->SetCardPlacement(CardPlacement::Bottom);

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CBanishingStrokeCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CBanishingStrokeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CBanishingStrokeCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CBanishingStrokeCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CBonfireOfTheDamnedCard::CBonfireOfTheDamnedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bonfire of the Damned"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CBonfireOfTheDamnedCard::OnYesNoSelected))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(
			SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetPropagateToTargetedPlayersCreatures();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT,
				FALSE_CARD_COMPARER, true,
				Life(0), PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(
			SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetPropagateToTargetedPlayersCreatures();

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CBonfireOfTheDamnedCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CBonfireOfTheDamnedCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CBonfireOfTheDamnedCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CBonfireOfTheDamnedCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CDevastationTideCard::CDevastationTideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devastation Tide"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CDevastationTideCard::OnYesNoSelected))
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CDevastationTideCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDevastationTideCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CDevastationTideCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CDevastationTideCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CEntreatTheAngelsCard::CEntreatTheAngelsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Entreat the Angels"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CEntreatTheAngelsCard::OnYesNoSelected))
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Angel G"), 2969,
				0));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
		cpSpell->SetExtraActionValueVector();

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Angel G"), 2969,
				0));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector();

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CEntreatTheAngelsCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CEntreatTheAngelsCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CEntreatTheAngelsCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CEntreatTheAngelsCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CReforgeTheSoulCard::CReforgeTheSoulCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reforge the Soul"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CReforgeTheSoulCard::OnYesNoSelected))
{
	{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT, 7, 7));

		cpSpell->SetDiscardHand(TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT, 7, 7));

		cpSpell->SetDiscardHand(TRUE);

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CReforgeTheSoulCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CReforgeTheSoulCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CReforgeTheSoulCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CReforgeTheSoulCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CRevengeOfTheHuntedCard::CRevengeOfTheHuntedCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Revenge of the Hunted"), CardType::Sorcery, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRevengeOfTheHuntedCard::OnYesNoSelected))
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				Power(+6), Life(+6),
				CreatureKeyword::Trample | CreatureKeyword::Lure, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				GREEN_MANA_TEXT,
				Power(+6), Life(+6),
				CreatureKeyword::Trample | CreatureKeyword::Lure, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CRevengeOfTheHuntedCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CRevengeOfTheHuntedCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CRevengeOfTheHuntedCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CRevengeOfTheHuntedCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CTerminusCard::CTerminusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Terminus"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTerminusCard::OnResolutionCompleted))
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CTerminusCard::OnYesNoSelected))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				WHITE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CTerminusCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTerminusCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CTerminusCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CTerminusCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

void CTerminusCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
		int pInplay = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(pInplay), MaximumValue(pInplay), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pPlayer);
	}
}

//____________________________________________________________________________
//
CThunderousWrathCard::CThunderousWrathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thunderous Wrath"), CardType::Instant, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CThunderousWrathCard::OnYesNoSelected))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					_T("4") RED_MANA_TEXT RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(-5), PreventableType::Preventable));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(-5), PreventableType::Preventable));

		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CThunderousWrathCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CThunderousWrathCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CThunderousWrathCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CThunderousWrathCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
CVanishmentCard::CVanishmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vanishment"), CardType::Instant, nID)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CVanishmentCard::OnYesNoSelected))
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				ZoneId::Battlefield,
				ZoneId::Library,
				true, MoveType::Others));

		cpSpell->SetAbilityName(_T("Miracle"));
		
		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CVanishmentCard::CanPlay1)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(MIRACLE_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

void CVanishmentCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if	( GetController()->GetTurnDrawCount() == 1 && ( moveType == MoveType::Draw ||  moveType == MoveType::NormalDraw))
	{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s miracle ability (remember to get mana before resolution)"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Passes the draw"));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
}

void CVanishmentCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, MIRACLE_TRIGGER_ID);
				pModifier.ApplyTo(this);
			}
		}
}

BOOL CVanishmentCard::CanPlay1(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFreecast();
}

//____________________________________________________________________________
//
/*
CDiregrafEscortCard::CDiregrafEscortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Diregraf Escort"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionSpecial);
		pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CDiregrafEscortCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDiregrafEscortCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CDiregrafEscortCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionSpecial);
		pModifier1->GetModifier().SetAdditionData((DWORD)&m_CardFilter);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDiregrafEscortCard::BeforeResolution1(CDiregrafEscortCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CDiregrafEscortCard::BeforeResolution2(CDiregrafEscortCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CDiregrafEscortCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}
*/
//____________________________________________________________________________
//
CDruidsFamiliarCard::CDruidsFamiliarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Druid's Familiar"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+2), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CDruidsFamiliarCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDruidsFamiliarCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CDruidsFamiliarCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+2), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDruidsFamiliarCard::BeforeResolution1(CDruidsFamiliarCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CDruidsFamiliarCard::BeforeResolution2(CDruidsFamiliarCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CDruidsFamiliarCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CElgaudShieldmateCard::CElgaudShieldmateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elgaud Shieldmate"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::Hexproof);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CElgaudShieldmateCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElgaudShieldmateCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CElgaudShieldmateCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::Hexproof);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CElgaudShieldmateCard::BeforeResolution1(CElgaudShieldmateCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CElgaudShieldmateCard::BeforeResolution2(CElgaudShieldmateCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CElgaudShieldmateCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CGalvanicAlchemistCard::CGalvanicAlchemistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Galvanic Alchemist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CGalvanicAlchemistCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CGalvanicAlchemistCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGalvanicAlchemistCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CGalvanicAlchemistCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CGalvanicAlchemistCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGalvanicAlchemistCard::BeforeResolution1(CGalvanicAlchemistCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CGalvanicAlchemistCard::BeforeResolution2(CGalvanicAlchemistCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CGalvanicAlchemistCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

counted_ptr<CAbility> CGalvanicAlchemistCard::CreateUntapAbility(CCard* pCard)
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(pCard,
			_T("2") BLUE_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGeistTrappersCard::CGeistTrappersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geist Trappers"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Reach);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CGeistTrappersCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGeistTrappersCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CGeistTrappersCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Reach);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGeistTrappersCard::BeforeResolution1(CGeistTrappersCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CGeistTrappersCard::BeforeResolution2(CGeistTrappersCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CGeistTrappersCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CHanweirLancerCard::CHanweirLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hanweir Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::FirstStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CHanweirLancerCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHanweirLancerCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CHanweirLancerCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::FirstStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHanweirLancerCard::BeforeResolution1(CHanweirLancerCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CHanweirLancerCard::BeforeResolution2(CHanweirLancerCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CHanweirLancerCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CLightningMaulerCard::CLightningMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lightning Mauler"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CLightningMaulerCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLightningMaulerCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CLightningMaulerCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLightningMaulerCard::BeforeResolution1(CLightningMaulerCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CLightningMaulerCard::BeforeResolution2(CLightningMaulerCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CLightningMaulerCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CNearheathPilgrimCard::CNearheathPilgrimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nearheath Pilgrim"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::Lifelink);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CNearheathPilgrimCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNearheathPilgrimCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CNearheathPilgrimCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CardKeyword::Lifelink);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardModifiers().Add(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier2);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNearheathPilgrimCard::BeforeResolution1(CNearheathPilgrimCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CNearheathPilgrimCard::BeforeResolution2(CNearheathPilgrimCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CNearheathPilgrimCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CNightshadePeddlerCard::CNightshadePeddlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nightshade Peddler"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::Deathtouch);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier1);
		cpAbility->GetCardModifiers().Add(pModifier2);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CNightshadePeddlerCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNightshadePeddlerCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CNightshadePeddlerCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::Deathtouch);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier1);
		cpAbility->GetCardModifiers().Add(pModifier2);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNightshadePeddlerCard::BeforeResolution1(CNightshadePeddlerCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CNightshadePeddlerCard::BeforeResolution2(CNightshadePeddlerCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CNightshadePeddlerCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CPathbreakerWurmCard::CPathbreakerWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pathbreaker Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Trample);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CPathbreakerWurmCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPathbreakerWurmCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CPathbreakerWurmCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Trample);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPathbreakerWurmCard::BeforeResolution1(CPathbreakerWurmCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CPathbreakerWurmCard::BeforeResolution2(CPathbreakerWurmCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CPathbreakerWurmCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CSilverbladePaladinCard::CSilverbladePaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverblade Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::DoubleStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSilverbladePaladinCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverbladePaladinCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSilverbladePaladinCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::DoubleStrike);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSilverbladePaladinCard::BeforeResolution1(CSilverbladePaladinCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CSilverbladePaladinCard::BeforeResolution2(CSilverbladePaladinCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CSilverbladePaladinCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CSpectralGateguardsCard::CSpectralGateguardsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spectral Gateguards"), CardType::Creature, CREATURE_TYPE2(Spirit, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Vigilance);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSpectralGateguardsCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpectralGateguardsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSpectralGateguardsCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Vigilance);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpectralGateguardsCard::BeforeResolution1(CSpectralGateguardsCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CSpectralGateguardsCard::BeforeResolution2(CSpectralGateguardsCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CSpectralGateguardsCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CTrustedForcemageCard::CTrustedForcemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trusted Forcemage"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+1), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CTrustedForcemageCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTrustedForcemageCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CTrustedForcemageCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+1), FALSE));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTrustedForcemageCard::BeforeResolution1(CTrustedForcemageCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CTrustedForcemageCard::BeforeResolution2(CTrustedForcemageCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CTrustedForcemageCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CWingcrafterCard::CWingcrafterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wingcrafter"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Flying);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CWingcrafterCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWingcrafterCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CWingcrafterCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired | CreatureKeyword::Flying);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWingcrafterCard::BeforeResolution1(CWingcrafterCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CWingcrafterCard::BeforeResolution2(CWingcrafterCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CWingcrafterCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CStonewrightCard::CStonewrightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonewright"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CStonewrightCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CStonewrightCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStonewrightCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CStonewrightCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CStonewrightCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStonewrightCard::BeforeResolution1( CStonewrightCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CStonewrightCard::BeforeResolution2( CStonewrightCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CStonewrightCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

counted_ptr<CAbility> CStonewrightCard::CreateUntapAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSternMentorCard::CSternMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stern Mentor"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddSoulbond(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Paired, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetSubjectCount(0,1);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CSternMentorCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCreatureModifiers().Add(pModifier);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSternMentorCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSternMentorCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSternMentorCard::BeforeResolution2));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CSternMentorCard::CreateUntapAbility)));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Paired);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetAbilityName(_T("Soulbond 2"));
		cpAbility->SetAbilityText(_T("Soulbond 2"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSternMentorCard::BeforeResolution1( CSternMentorCard::TriggeredAbility1::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;

	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() ||  (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;
	
	return true;
}

bool CSternMentorCard::BeforeResolution2( CSternMentorCard::TriggeredAbility2::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	if (!GetCardType().IsCreature()) return false;
	if (GetCreatureKeyword()->Paired() || (this->GetZoneId() != ZoneId::Battlefield) || (GetController() != pController)) return false;
	
	TriggeredAbility2::TriggerContextType triggerContext(pAction->GetTriggerContext());
	if (!triggerContext.m_pCard->GetCardType().IsCreature()) return false;
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;

	if (pCard->GetCreatureKeyword()->Paired() || (pCard->GetZoneId() != ZoneId::Battlefield) || (pCard->GetController() != pController)) return false;

	return true;
}

bool CSternMentorCard::SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	if (!pCard->GetCardType().IsCreature())
		return false;

	if (GetCreatureKeyword()->Paired())
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

counted_ptr<CAbility> CSternMentorCard::CreateUntapAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(pCard,
			_T(""), 2));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHomicidalSeclusionCard::CHomicidalSeclusionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Homicidal Seclusion"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+3), Life(+1),
			CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Battlefield);
	cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetConditionValue(1);
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMalignusCard::CMalignusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Malignus"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMalignusCard::OnZoneChanged))
{
	GetCardKeyword()->AddUnpreventableDamage(FALSE);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CMalignusCard::BeforeResolution1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this,
			ZoneId::Battlefield, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CMalignusCard::BeforeResolution2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMalignusCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	Life p;
	bool bFirst = true;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetController() != GetGame()->GetPlayer(ip))
		{
			Life LifeVal = GetGame()->GetPlayer(ip)->GetLife() + 1;
			LifeVal = LifeVal / 2;
			if (bFirst)
			{
				p = LifeVal;
				bFirst = false;
			}
			else if (LifeVal > p)
				p = LifeVal;
		}

	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

bool CMalignusCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	Life p;
	bool bFirst = true;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetController() != GetGame()->GetPlayer(ip))
		{
			Life LifeVal = GetGame()->GetPlayer(ip)->GetLife() + 1;
			LifeVal = LifeVal / 2;
			if (bFirst)
			{
				p = LifeVal;
				bFirst = false;
			}
			else if (LifeVal > p)
				p = LifeVal;
		}

	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

void CMalignusCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		Life p;
		bool bFirst = true;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (GetController() != GetGame()->GetPlayer(ip))
			{
				Life LifeVal = GetGame()->GetPlayer(ip)->GetLife() + 1;
				LifeVal = LifeVal / 2;
				if (bFirst)
				{
					p = LifeVal;
					bFirst = false;
				}
				else if (LifeVal > p)
					p = LifeVal;
			}

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(GET_INTEGER(p)));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(p));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDescentIntoMadnessCard::CDescentIntoMadnessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Descent into Madness"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CDescentIntoMadnessCard::OnCounterMoved))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CDescentIntoMadnessCard::OnSelected))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDescentIntoMadnessCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDescentIntoMadnessCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(DESPAIR_COUNTER, +1);
		pModifier1.ApplyTo(this);
		m_nCounterCount = GetCounterContainer()->GetCounter(DESPAIR_COUNTER)->GetCount();
	}

	if (m_nCounterCount > 0)
	{
		CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
		int pActivePlayerID;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (pActivePlayer == GetGame()->GetPlayer(ip))
			{
				pActivePlayerID = ip;
				break;
			}

		SelectionFunction(pActivePlayerID);

		return true;
	}

	return true;
}

void CDescentIntoMadnessCard::SelectionFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	
	if (pHand->GetSize() + pBattlefield->GetSize() <= m_nCounterCount)
	{
		CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("cards")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)));
		pModifier1->ApplyTo(pPlayer);

		CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
		pModifier2->ApplyTo(pPlayer);
	}
	else
	{
		int cMinSelection = m_nCounterCount - pHand->GetSize();
		if (cMinSelection < 0) cMinSelection = 0;

		int cMaxSelection = pBattlefield->GetSize();
		if (cMaxSelection > m_nCounterCount) cMaxSelection = m_nCounterCount;
		
		int nCounters = m_nCounterCount; // necessary to prevent weird display

		std::vector<SelectionEntry> entries;
		for (int i = cMinSelection; i <= cMaxSelection; ++i)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i;
			if (i == 0)
				selectionEntry.strText.Format(_T("Exile %d cards from your hand"), nCounters);
			else if (i == m_nCounterCount)
				selectionEntry.strText.Format(_T("Exile %d permanents you control"), nCounters);
			else
				selectionEntry.strText.Format(_T("Exile %d permanents you control and %d cards from your hand"), i, nCounters - i);

			entries.push_back(selectionEntry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
	}
}

void CDescentIntoMadnessCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		SelectionFunction(NextPlayer);
}

void CDescentIntoMadnessCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nValue = it->dwContext;
			int nCounters = m_nCounterCount; // necessary to prevent weird display

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (nValue == 0)
					strMessage.Format(_T("%s exiles %d cards from his hand"), pSelectionPlayer->GetPlayerName(), nCounters);
				else if (nValue == m_nCounterCount)
					strMessage.Format(_T("%s exiles %d permanents he controls"), pSelectionPlayer->GetPlayerName(), nCounters);
				else
					strMessage.Format(_T("%s exiles %d permanents he controls and %d cards from his hand"), pSelectionPlayer->GetPlayerName(), nValue, nCounters - nValue);

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			if (nValue > 0)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);
			}
			if (nValue < m_nCounterCount)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(m_nCounterCount - nValue), MaximumValue(m_nCounterCount - nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);
			}

			Advance(dwContext1);

			return;
		}
}

void CDescentIntoMadnessCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CDescentIntoMadnessCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != DESPAIR_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CBurnAtTheStakeCard::CBurnAtTheStakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burn at the Stake"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, 
			new AnyCreatureComparer,
			true));
	
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->GetCost().AddTapCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("creatures")));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBurnAtTheStakeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBurnAtTheStakeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();
	int nValue = pAction->GetCostConfigEntry().GetTapCards()->GetSize();

	if (nValue > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-3*nValue), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	
		if (pTargetCreature)
			pModifier.ApplyTo(pTargetCreature);
		else
			pModifier.ApplyTo(pTargetPlayer);
	}

	return true;
}

//____________________________________________________________________________
//
CAbundantGrowthCard::CAbundantGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Abundant Growth"), CardType::EnchantLand, nID)
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
			    GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CardKeyword::Null));
		
		CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CAbundantGrowthCard::CreateAdditionalAbility));
				CCardAbilityModifier* pModifier1 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CAbundantGrowthCard::CreateAdditionalAbility1));
						CCardAbilityModifier* pModifier2 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CAbundantGrowthCard::CreateAdditionalAbility2));
								CCardAbilityModifier* pModifier3 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CAbundantGrowthCard::CreateAdditionalAbility3));
										CCardAbilityModifier* pModifier4 = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
			&CAbundantGrowthCard::CreateAdditionalAbility4));

		cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
			cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier1);
				cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier2);
					cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier3);
						cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier4);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CAbundantGrowthCard::CreateAdditionalAbility(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}
counted_ptr<CAbility> CAbundantGrowthCard::CreateAdditionalAbility1(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}
counted_ptr<CAbility> CAbundantGrowthCard::CreateAdditionalAbility2(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}
counted_ptr<CAbility> CAbundantGrowthCard::CreateAdditionalAbility3(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}
counted_ptr<CAbility> CAbundantGrowthCard::CreateAdditionalAbility4(CCard* pCard)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapThisCardCost(pCard);

		return cpAbility.GetPointer();
	}
}

//____________________________________________________________________________
//
CGhostlyFlickerCard::CGhostlyFlickerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ghostly Flicker"), CardType::Instant, nID)

{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::_Effects, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->SetToZoneIfSuccess(ZoneId::_Effects, TRUE);

		AddSpell(cpSpell.GetPointer());
	}

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Stack, ZoneId::_Effects));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Effects, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//Old Code
/*{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
			false));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);
	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGhostlyFlickerCard::BeforeResolution));

	m_pTargetSpell = cpSpell.GetPointer();
	AddSpell(cpSpell.GetPointer());
}*/



/*bool CGhostlyFlickerCard::BeforeResolution(CAbilityAction* pAction)
{
		CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue Context(pAction->GetValue());

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, false, MoveType::Others, pAction->GetController()); 
	CMoveCardModifier pModifier2 = CMoveCardModifier( ZoneId::Exile, ZoneId::Battlefield, false, MoveType::Others, pAction->GetController()); 

	BOOL bTrick;
	CCountedCardContainer pCards;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		
		if (m_pTargetSpell->GetTargeting()->TargetAllowed(const_cast<const CCard*>(it->GetPointer()), TRUE, bTrick))
		{
			pModifier1.ApplyTo(const_cast<CCard*>(it->GetPointer()));
			pCards.AddCard(const_cast<CCard*>(it->GetPointer()), CardPlacement::Top);
		}
	}
	
	for (int i = 0; i < pCards.GetSize(); ++i)
	{
		pModifier2.ApplyTo(pCards.GetAt(i));

	}

	return pCards.GetSize()>0;
	
}*/

//____________________________________________________________________________
//
CChampionOfLambholtCard::CChampionOfLambholtCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Champion of Lambholt"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ChampionOfLambholtEffect));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAggravateCard::CAggravateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aggravate"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAggravateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAggravateCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::AttackEnforceDamage)));
	pModifier.ApplyTo(pAction->GetAssociatedPlayer());

	return true;
}

//____________________________________________________________________________
//