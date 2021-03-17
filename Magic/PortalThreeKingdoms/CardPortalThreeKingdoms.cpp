#include "stdafx.h"
#include "CardPortalThreeKingdoms.h"

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

		DEFINE_CARD(CAlertShuInfantryCard);
		DEFINE_CARD(CBarbarianGeneralCard);
		DEFINE_CARD(CBarbarianHordeCard);
		DEFINE_CARD(CBorrowing100000ArrowsCard);
		DEFINE_CARD(CBorrowingTheEastWindCard);
		DEFINE_CARD(CBrilliantPlanCard);
		DEFINE_CARD(CBrokenDamCard);
		DEFINE_CARD(CBurningFieldsCard);
		DEFINE_CARD(CCaoCaoLordOfWeiCard);
		DEFINE_CARD(CCaoRenWeiCommanderCard);
		DEFINE_CARD(CCaptureOfJingzhouCard);
		DEFINE_CARD(CControlOfTheCourtCard);
		DEFINE_CARD(CCorruptCourtOfficialCard);
		DEFINE_CARD(CCorruptEunuchsCard);
		DEFINE_CARD(CCouncilOfAdvisorsCard);
		DEFINE_CARD(CCounterintelligenceCard);
		DEFINE_CARD(CCunningAdvisorCard);
		DEFINE_CARD(CDeceptionCard);
		DEFINE_CARD(CDesertSandstormCard);
		DEFINE_CARD(CDesperateChargeCard);
		DEFINE_CARD(CEmptyCityRuseCard);
		DEFINE_CARD(CFalseDefeatCard);
		DEFINE_CARD(CFalseMourningCard);
		DEFINE_CARD(CFamineCard);
		DEFINE_CARD(CFireAmbushCard);
		DEFINE_CARD(CFireBowmanCard);
		DEFINE_CARD(CFlankingTroopsCard);
		DEFINE_CARD(CForcedRetreatCard);
		DEFINE_CARD(CForestBearCard);
		DEFINE_CARD(CGhostlyVisitCard);
		DEFINE_CARD(CGuanYus1000LiMarchCard);
		DEFINE_CARD(CGuanYuSaintedWarriorCard);
		DEFINE_CARD(CHuangZhongShuGeneralCard);
		DEFINE_CARD(CHuaTuoHonoredPhysicianCard);
		DEFINE_CARD(CHuntingCheetahCard);
		DEFINE_CARD(CImperialEdictCard);
		DEFINE_CARD(CImperialRecruiterCard);
		DEFINE_CARD(CImperialSealCard);
		DEFINE_CARD(CIndependentTroopsCard);
		DEFINE_CARD(CKongmingSleepingDragonCard);
		DEFINE_CARD(CLadySunCard);
		DEFINE_CARD(CLadyZhurongWarriorQueenCard);
		DEFINE_CARD(CLiuBeiLordOfShuCard);
		DEFINE_CARD(CLoyalRetainersCard);
		DEFINE_CARD(CLuBuMasterAtArmsCard);
		DEFINE_CARD(CLuMengWuGeneralCard);
		DEFINE_CARD(CLuSuWuAdvisorCard);
		DEFINE_CARD(CLuXunScholarGeneralCard);
		DEFINE_CARD(CMaChaoWesternWarriorCard);
		DEFINE_CARD(CMarshalingTheTroopsCard);
		DEFINE_CARD(CMengHuoBarbarianKingCard);
		DEFINE_CARD(CMengHuosHordeCard);
		DEFINE_CARD(CMisfortunesGainCard);
		DEFINE_CARD(CMountainBanditCard);
		DEFINE_CARD(COverwhelmingForcesCard);
		DEFINE_CARD(CPangTongYoungPhoenixCard);
		DEFINE_CARD(CPoisonArrowCard);
		DEFINE_CARD(CPreemptiveStrikeCard);
		DEFINE_CARD(CRavagesOfWarCard);
		DEFINE_CARD(CRavagingHordeCard);
		DEFINE_CARD(CRedCliffsArmadaCard);
		DEFINE_CARD(CRenegadeTroopsCard);
		DEFINE_CARD(CReturnToBattleCard);
		DEFINE_CARD(CRidingRedHareCard);
		DEFINE_CARD(CRidingTheDiluHorseCard);
		DEFINE_CARD(CRockslideAmbushCard);
		DEFINE_CARD(CRollingEarthquakeCard);
		DEFINE_CARD(CSagesKnowledgeCard);
		DEFINE_CARD(CShuCavalryCard);
		DEFINE_CARD(CShuDefenderCard);
		DEFINE_CARD(CShuEliteCompanionsCard);
		DEFINE_CARD(CShuEliteInfantryCard);
		DEFINE_CARD(CShuFarmerCard);
		DEFINE_CARD(CShuFootSoldiersCard);
		DEFINE_CARD(CShuGeneralCard);
		DEFINE_CARD(CShuGrainCaravanCard);
		DEFINE_CARD(CShuSoldierFarmersCard);
		DEFINE_CARD(CSimaYiWeiFieldMarshalCard);
		DEFINE_CARD(CSlashingTigerCard);
		DEFINE_CARD(CSouthernElephantCard);
		DEFINE_CARD(CSpoilsOfVictoryCard);
		DEFINE_CARD(CSpringOfEternalPeaceCard);
		DEFINE_CARD(CStolenGrainCard);
		DEFINE_CARD(CStoneCatapultCard);
		DEFINE_CARD(CStrategicPlanningCard);
		DEFINE_CARD(CStrawSoldiersCard);
		DEFINE_CARD(CSunCeYoungConquererCard);
		DEFINE_CARD(CSunQuanLordOfWuCard);
		DEFINE_CARD(CTaoistHermitCard);
		DEFINE_CARD(CTaoistMysticCard);
		DEFINE_CARD(CTauntingChallengeCard);
		DEFINE_CARD(CThreeVisitsCard);
		DEFINE_CARD(CTrainedCheetahCard);
		DEFINE_CARD(CTrainedJackalCard);
		DEFINE_CARD(CTripWireCard);
		DEFINE_CARD(CVirtuousChargeCard);
		DEFINE_CARD(CWarriorsOathCard);
		DEFINE_CARD(CWeiAmbushForceCard);
		DEFINE_CARD(CWeiAssassinsCard);
		DEFINE_CARD(CWeiEliteCompanionsCard);
		DEFINE_CARD(CWeiInfantryCard);
		DEFINE_CARD(CWeiNightRaidersCard);
		DEFINE_CARD(CWeiScoutCard);
		DEFINE_CARD(CWeiStrikeForceCard);
		DEFINE_CARD(CWieldingTheGreenDragonCard);
		DEFINE_CARD(CWolfPackCard);
		DEFINE_CARD(CWuAdmiralCard);
		DEFINE_CARD(CWuEliteCavalryCard);
		DEFINE_CARD(CWuInfantryCard);
		DEFINE_CARD(CWuLightCavalryCard);
		DEFINE_CARD(CWuLongbowmanCard);
		DEFINE_CARD(CWuScoutCard);
		DEFINE_CARD(CWuSpyCard);
		DEFINE_CARD(CWuWarshipCard);
		DEFINE_CARD(CXiahouDunTheOneEyedCard);
		DEFINE_CARD(CXunYuWeiAdvisorCard);
		DEFINE_CARD(CYellowScarvesCavalryCard);
		DEFINE_CARD(CYellowScarvesGeneralCard);
		DEFINE_CARD(CYellowScarvesTroopsCard);
		DEFINE_CARD(CYoungWeiRecruitsCard);
		DEFINE_CARD(CYuanShaosInfantryCard);
		DEFINE_CARD(CYuanShaoTheIndecisiveCard);
		DEFINE_CARD(CZhangFeiFierceWarriorCard);
		DEFINE_CARD(CZhangHeWeiGeneralCard);
		DEFINE_CARD(CZhangLiaoHeroOfHefeiCard);
		DEFINE_CARD(CZhaoZilongTigerGeneralCard);
		DEFINE_CARD(CZhouYuChiefCommanderCard);
		DEFINE_CARD(CZhugeJinWuStrategistCard);
		DEFINE_CARD(CZodiacDogCard);
		DEFINE_CARD(CZodiacDragonCard);
		DEFINE_CARD(CZodiacGoatCard);
		DEFINE_CARD(CZodiacHorseCard);
		DEFINE_CARD(CZodiacOxCard);
		DEFINE_CARD(CZodiacPigCard);
		DEFINE_CARD(CZodiacRabbitCard);
		DEFINE_CARD(CZodiacRatCard);
		DEFINE_CARD(CZodiacRoosterCard);
		DEFINE_CARD(CZodiacSnakeCard);
		DEFINE_CARD(CZodiacTigerCard);
		DEFINE_CARD(CZuoCiTheMockingSageCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAlertShuInfantryCard::CAlertShuInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alert Shu Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CBarbarianHordeCard::CBarbarianHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian Horde"), CardType::Creature, CREATURE_TYPE3(Human, Barbarian, Soldier), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CBorrowing100000ArrowsCard::CBorrowing100000ArrowsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Borrowing 100,000 Arrows"), CardType::Sorcery, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CBorrowing100000ArrowsCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CBorrowing100000ArrowsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CBrilliantPlanCard::CBrilliantPlanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brilliant Plan"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBurningFieldsCard::CBurningFieldsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Burning Fields"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
}

//____________________________________________________________________________
//
CCaptureOfJingzhouCard::CCaptureOfJingzhouCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Capture of Jingzhou"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			PlayerEffectType::TimeWalk, FALSE, 1));

	cpSpell->SetAffectControllerOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCorruptCourtOfficialCard::CCorruptCourtOfficialCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corrupt Court Official"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorruptEunuchsCard::CCorruptEunuchsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corrupt Eunuchs"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
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

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCouncilOfAdvisorsCard::CCouncilOfAdvisorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Council of Advisors"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
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
CCounterintelligenceCard::CCounterintelligenceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Counterintelligence"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, 2);
}

//____________________________________________________________________________
//
CDeceptionCard::CDeceptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deception"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDesertSandstormCard::CDesertSandstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Desert Sandstorm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		Life(-1),
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CDesperateChargeCard::CDesperateChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Desperate Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+0)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFalseDefeatCard::CFalseDefeatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("False Defeat"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CFalseMourningCard::CFalseMourningCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("False Mourning"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CFamineCard::CFamineCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Famine"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CFireAmbushCard::CFireAmbushCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Fire Ambush"), CardType::Sorcery, nID, AbilityType::Sorcery,
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
CFlankingTroopsCard::CFlankingTroopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flanking Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CForcedRetreatCard::CForcedRetreatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Forced Retreat"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CForestBearCard::CForestBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forest Bear"), CardType::Creature, CREATURE_TYPE(Bear), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGhostlyVisitCard::CGhostlyVisitCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ghostly Visit"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CGuanYus1000LiMarchCard::CGuanYus1000LiMarchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Guan Yu's 1,000-Li March"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new TappedComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHuangZhongShuGeneralCard::CHuangZhongShuGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Huang Zhong, Shu General"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CHuntingCheetahCard::CHuntingCheetahCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunting Cheetah"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfDamageDealt, //trigger when the creature deals damage to a player
							CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Forests")));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImperialRecruiterCard::CImperialRecruiterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Imperial Recruiter"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::less_equal<int>>(2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImperialSealCard::CImperialSealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Imperial Seal"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Library, TRUE, TRUE, FALSE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIndependentTroopsCard::CIndependentTroopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Independent Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CKongmingSleepingDragonCard::CKongmingSleepingDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kongming, Sleeping Dragon"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMengHuoBarbarianKingCard::CMengHuoBarbarianKingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meng Huo, Barbarian King"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Barbarian, Soldier), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMengHuosHordeCard::CMengHuosHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Meng Huo's Horde"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CMisfortunesGainCard::CMisfortunesGainCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Misfortune's Gain"), CardType::Sorcery, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CMountainBanditCard::CMountainBanditCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Mountain Bandit"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Rogue), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CPoisonArrowCard::CPoisonArrowCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Poison Arrow"), CardType::Sorcery, nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+3), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CPreemptiveStrikeCard::CPreemptiveStrikeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Preemptive Strike"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
}

//____________________________________________________________________________
//
CRavagesOfWarCard::CRavagesOfWarCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ravages of War"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRavagingHordeCard::CRavagingHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravaging Horde"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRedCliffsArmadaCard::CRedCliffsArmadaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Red Cliffs Armada"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLUE_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CRedCliffsArmadaCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CRedCliffsArmadaCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CRenegadeTroopsCard::CRenegadeTroopsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Renegade Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CReturnToBattleCard::CReturnToBattleCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Return to Battle"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CRockslideAmbushCard::CRockslideAmbushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rockslide Ambush"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			ZoneId::Battlefield, TRUE,
			new CardTypeComparer(CardType::Mountain, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSagesKnowledgeCard::CSagesKnowledgeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Sage's Knowledge"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Sorcery, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CShuDefenderCard::CShuDefenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Defender"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShuEliteInfantryCard::CShuEliteInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Elite Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CShuFarmerCard::CShuFarmerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Farmer"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+1), PreventableType::NotPreventable));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CShuFarmerCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

    AddAbility(cpAbility.GetPointer());    
}

BOOL CShuFarmerCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CShuFootSoldiersCard::CShuFootSoldiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Foot Soldiers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CShuGrainCaravanCard::CShuGrainCaravanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Grain Caravan"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShuSoldierFarmersCard::CShuSoldierFarmersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Soldier-Farmers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(4))
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

//____________________________________________________________________________
//
CSimaYiWeiFieldMarshalCard::CSimaYiWeiFieldMarshalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sima Yi, Wei Field Marshal"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("5") BLACK_MANA_TEXT, Power(0), Life(4))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpAbility->SetChangePowerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlashingTigerCard::CSlashingTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slashing Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSouthernElephantCard::CSouthernElephantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Southern Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(4))
{
}

//____________________________________________________________________________
//
CSpringOfEternalPeaceCard::CSpringOfEternalPeaceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spring of Eternal Peace"), CardType::Sorcery, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Life(+8), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStolenGrainCard::CStolenGrainCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Stolen Grain"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+5), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CStrategicPlanningCard::CStrategicPlanningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Strategic Planning"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			3));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStrawSoldiersCard::CStrawSoldiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Straw Soldiers"), CardType::Creature, CREATURE_TYPE2(Scarecrow, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CTaoistHermitCard::CTaoistHermitCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Taoist Hermit"), CardType::Creature, CREATURE_TYPE2(Human, Mystic), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CTauntingChallengeCard::CTauntingChallengeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Taunting Challenge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Lure, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CThreeVisitsCard::CThreeVisitsCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Three Visits"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CTrainedCheetahCard::CTrainedCheetahCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Cheetah"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrainedJackalCard::CTrainedJackalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Jackal"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CVirtuousChargeCard::CVirtuousChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Virtuous Charge"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWarriorsOathCard::CWarriorsOathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Warrior's Oath"), CardType::Sorcery, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT,
			PlayerEffectType::TimeWalk, false, 1));

	cpSpell->SetAffectControllerOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CScheduledPlayerModifier(GetGame(),
			new CPlayerLostModifier,
			TurnNumberDelta(+1), NodeId::EndStep, 
			CScheduledPlayerModifier::Operation::ApplyToLater));
			//,CScheduledPlayerModifier::DeltaOption::ActivePlayerTurn));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWeiAmbushForceCard::CWeiAmbushForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Ambush Force"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeiInfantryCard::CWeiInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CWieldingTheGreenDragonCard::CWieldingTheGreenDragonCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wielding the Green Dragon"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CWolfPackCard::CWolfPackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wolf Pack"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(6))
{
	GetCreatureKeyword()->AddCanAssignDamageToPlayer(FALSE);
}

//____________________________________________________________________________
//
CWuAdmiralCard::CWuAdmiralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Admiral"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Island, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWuInfantryCard::CWuInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CWuWarshipCard::CWuWarshipCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Warship"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CWuWarshipCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CWuWarshipCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CYellowScarvesTroopsCard::CYellowScarvesTroopsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yellow Scarves Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CYoungWeiRecruitsCard::CYoungWeiRecruitsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Young Wei Recruits"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CYuanShaosInfantryCard::CYuanShaosInfantryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yuan Shao's Infantry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToRemove(CreatureKeyword::Unblockable);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

	CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(
		GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCreatureModifier::Operation::ApplyToLater, CScheduledCreatureModifier::DeltaOption::ActivePlayerTurn);

	cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZhangLiaoHeroOfHefeiCard::CZhangLiaoHeroOfHefeiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhang Liao, Hero of Hefei"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CZhouYuChiefCommanderCard::CZhouYuChiefCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhou Yu, Chief Commander"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(8))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CZhouYuChiefCommanderCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CZhouYuChiefCommanderCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CZodiacDogCard::CZodiacDogCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Dog"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CZodiacDragonCard::CZodiacDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zodiac Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("7") RED_MANA_TEXT RED_MANA_TEXT, Power(8), Life(8))
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
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZodiacDragonCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

bool CZodiacDragonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	return (pFromZone->GetPlayer() == GetOwner());
}

//____________________________________________________________________________
//
CZodiacGoatCard::CZodiacGoatCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Goat"), CardType::Creature, CREATURE_TYPE(Goat), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CZodiacHorseCard::CZodiacHorseCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Horse"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CZodiacOxCard::CZodiacOxCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CZodiacPigCard::CZodiacPigCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Pig"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CZodiacRabbitCard::CZodiacRabbitCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Rabbit"), CardType::Creature, CREATURE_TYPE(Rabbit), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CZodiacRatCard::CZodiacRatCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Rat"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CZodiacRoosterCard::CZodiacRoosterCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Rooster"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1),
		CreatureKeyword::Plainswalk)
{
}

//____________________________________________________________________________
//
CZodiacSnakeCard::CZodiacSnakeCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Snake"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CZodiacTigerCard::CZodiacTigerCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Zodiac Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CCaoCaoLordOfWeiCard::CCaoCaoLordOfWeiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cao Cao, Lord of Wei"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCaoCaoLordOfWeiCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CCaoCaoLordOfWeiCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CCunningAdvisorCard::CCunningAdvisorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cunning Advisor"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCunningAdvisorCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CCunningAdvisorCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CFireBowmanCard::CFireBowmanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fire Bowman"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

    cpAbility->AddSacrificeCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CFireBowmanCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

    AddAbility(cpAbility.GetPointer());    
}

BOOL CFireBowmanCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CHuaTuoHonoredPhysicianCard::CHuaTuoHonoredPhysicianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hua Tuo, Honored Physician"), CardType::_LegendaryCreature, CREATURE_TYPE(Human), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CHuaTuoHonoredPhysicianCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CHuaTuoHonoredPhysicianCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CLoyalRetainersCard::CLoyalRetainersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loyal Retainers"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_LegendaryCreature, true),
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddSacrificeCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CLoyalRetainersCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CLoyalRetainersCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CLuSuWuAdvisorCard::CLuSuWuAdvisorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lu Su, Wu Advisor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
   	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CLuSuWuAdvisorCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());    
}

BOOL CLuSuWuAdvisorCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CPangTongYoungPhoenixCard::CPangTongYoungPhoenixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pang Tong, Young Phoenix"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CPangTongYoungPhoenixCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

BOOL CPangTongYoungPhoenixCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CStoneCatapultCard::CStoneCatapultCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone Catapult"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CStoneCatapultCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CStoneCatapultCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CWuLongbowmanCard::CWuLongbowmanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Longbowman"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
   	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CWuLongbowmanCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());    
}

BOOL CWuLongbowmanCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CXunYuWeiAdvisorCard::CXunYuWeiAdvisorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Xun Yu, Wei Advisor"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CXunYuWeiAdvisorCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());	
}

BOOL CXunYuWeiAdvisorCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CZhugeJinWuStrategistCard::CZhugeJinWuStrategistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhuge Jin, Wu Strategist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CZhugeJinWuStrategistCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CZhugeJinWuStrategistCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CControlOfTheCourtCard::CControlOfTheCourtCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Control of the Court"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CControlOfTheCourtCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CControlOfTheCourtCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4));
	CRandomDiscardModifier modifier2 = CRandomDiscardModifier(3);
	modifier1.ApplyTo(pAction->GetController());
	modifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CWeiEliteCompanionsCard::CWeiEliteCompanionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Elite Companions"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CBarbarianGeneralCard::CBarbarianGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbarian General"), CardType::Creature, CREATURE_TYPE3(Human, Barbarian, Soldier), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CCaoRenWeiCommanderCard::CCaoRenWeiCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cao Ren, Wei Commander"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGuanYuSaintedWarriorCard::CGuanYuSaintedWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guan Yu, Sainted Warrior"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

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
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuanYuSaintedWarriorCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGuanYuSaintedWarriorCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	return (pFromZone->GetPlayer() == GetOwner());
}

//____________________________________________________________________________
//
CLadyZhurongWarriorQueenCard::CLadyZhurongWarriorQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lady Zhurong, Warrior Queen"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CLiuBeiLordOfShuCard::CLiuBeiLordOfShuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Liu Bei, Lord of Shu"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardNameComparer(_T("Guan Yu, Sainted Warrior"))));

		cpAbility->GetSurveyCardFilter().AddChildFilter(new CCardFilter(new CardNameComparer(_T("Zhang Fei, Fierce Warrior"))));

		cpAbility->SetMaximumAddedPower(Power(2));
		cpAbility->SetMaximumAddedToughness(Life(2));

		cpAbility->SetPowerMultiplier(Power(2));
		cpAbility->SetToughnessMultiplier(Life(2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLuBuMasterAtArmsCard::CLuBuMasterAtArmsCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Lu Bu, Master-at-Arms"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CLuMengWuGeneralCard::CLuMengWuGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lu Meng, Wu General"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CLuXunScholarGeneralCard::CLuXunScholarGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lu Xun, Scholar General"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMaChaoWesternWarriorCard::CMaChaoWesternWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ma Chao, Western Warrior"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToRemove(CreatureKeyword::Unblockable);
			pModifier->GetModifier().SetOneTurnOnly(TRUE);

		CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(
			GetGame(), pModifier, TurnNumberDelta(+0), NodeId::EndOfCombatStep, true, CScheduledCreatureModifier::Operation::ApplyToLater, CScheduledCreatureModifier::DeltaOption::ActivePlayerTurn);

		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShuCavalryCard::CShuCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CShuEliteCompanionsCard::CShuEliteCompanionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu Elite Companions"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CShuGeneralCard::CShuGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shu General"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CSunCeYoungConquererCard::CSunCeYoungConquererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sun Ce, Young Conquerer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunQuanLordOfWuCard::CSunQuanLordOfWuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sun Quan, Lord of Wu"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Horsemanship));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTaoistMysticCard::CTaoistMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Taoist Mystic"), CardType::Creature, CREATURE_TYPE2(Human, Mystic), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false)));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CWeiNightRaidersCard::CWeiNightRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Night Raiders"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWeiScoutCard::CWeiScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Scout"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CWeiStrikeForceCard::CWeiStrikeForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Strike Force"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CWuEliteCavalryCard::CWuEliteCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Elite Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CWuLightCavalryCard::CWuLightCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Light Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CWuScoutCard::CWuScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Scout"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
			&CWuScoutCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWuScoutCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}

//____________________________________________________________________________
//
CXiahouDunTheOneEyedCard::CXiahouDunTheOneEyedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Xiahou Dun, the One-Eyed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(	
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Black, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CXiahouDunTheOneEyedCard::CanPlay)));
	    cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CXiahouDunTheOneEyedCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CYellowScarvesCavalryCard::CYellowScarvesCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yellow Scarves Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CYellowScarvesGeneralCard::CYellowScarvesGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yellow Scarves General"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CYuanShaoTheIndecisiveCard::CYuanShaoTheIndecisiveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yuan Shao, the Indecisive"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBeBlockedByMultiple));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZhangFeiFierceWarriorCard::CZhangFeiFierceWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhang Fei, Fierce Warrior"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddHorsemanship(FALSE);
}

//____________________________________________________________________________
//
CZhangHeWeiGeneralCard::CZhangHeWeiGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhang He, Wei General"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(2))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZhaoZilongTigerGeneralCard::CZhaoZilongTigerGeneralCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zhao Zilong, Tiger General"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Soldier, Warrior), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddHorsemanship(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZuoCiTheMockingSageCard::CZuoCiTheMockingSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zuo Ci, the Mocking Sage"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false)));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CBorrowingTheEastWindCard::CBorrowingTheEastWindCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Borrowing the East Wind"), CardType::Sorcery, nID, AbilityType::Sorcery,
		GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false));

	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	
	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CBrokenDamCard::CBrokenDamCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Broken Dam"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false));
	cpSpell->GetTargeting()->SetSubjectCount(1, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRidingRedHareCard::CRidingRedHareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Riding Red Hare"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			Power(+3), Life(+3), 
			CreatureKeyword::Horsemanship, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRidingTheDiluHorseCard::CRidingTheDiluHorseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Riding the Dilu Horse"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT,
			Power(+2), Life(+2), 
			CreatureKeyword::Horsemanship, CreatureKeyword::Null,
			FALSE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRollingEarthquakeCard::CRollingEarthquakeCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Rolling Earthquake"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false));

	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	
	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CTripWireCard::CTripWireCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Trip Wire"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Horsemanship, false));
}

//____________________________________________________________________________
//
CSpoilsOfVictoryCard::CSpoilsOfVictoryCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Spoils of Victory"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter, 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains | CardType::Island | CardType::Swamp | CardType::Mountain | CardType::Forest, false));

	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CWeiAssassinsCard::CWeiAssassinsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wei Assassins"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Assassin), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredSubjectAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImperialEdictCard::CImperialEdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Imperial Edict"), CardType::Sorcery, nID)
{
	counted_ptr<CImperialEdictSpell> cpSpell(
		::CreateObject<CImperialEdictSpell>(this, AbilityType::Sorcery,					
			_T("1") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLadySunCard::CLadySunCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lady Sun"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

    counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
            m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CLadySunCard::CanPlay)));
    cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CLadySunCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (m_pGame->GetActivePlayer() == GetController() &&
			(pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep));
}

//____________________________________________________________________________
//
CEmptyCityRuseCard::CEmptyCityRuseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Empty City Ruse"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CEmptyCityRuseCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);	
	AddSpell(cpSpell.GetPointer());
}

void CEmptyCityRuseCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CScheduledPlayerModifier pModifier = CScheduledPlayerModifier (
		GetGame(), new CPlayerEffectModifier(PlayerEffectType::SkipAllCombatPhases),
		TurnNumberDelta(0), NodeId::BeginningStep, CScheduledPlayerModifier::Operation::ApplyToLater,
		CScheduledPlayerModifier::DeltaOption::CustomPlayerTurn, target);
	if (bResult) pModifier.ApplyTo(target);
}
//____________________________________________________________________________
//
COverwhelmingForcesCard::COverwhelmingForcesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Overwhelming Forces"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&COverwhelmingForcesCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Sorcery,
				_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures"))));
		ATLASSERT(cpSpell);

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		
		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
		cpSpell->AddCardModifier(pCardModifier);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COverwhelmingForcesCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

bool COverwhelmingForcesCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay;
	m_nCards = 0;
	CPlayer* target = pAction->GetAssociatedPlayer();
	pInplay = target->GetZoneById(ZoneId::Battlefield);
	m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	/*for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}
	*/
	return true;
}

void COverwhelmingForcesCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pInplay;
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	pInplay = target->GetZoneById(ZoneId::Battlefield);
	m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	/*for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}
	*/
	CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(m_nCards), MaximumValue(m_nCards));
	pModifier->ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CMarshalingTheTroopsCard::CMarshalingTheTroopsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Marshaling the Troops"), CardType::Sorcery, nID)
   , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMarshalingTheTroopsCard::OnCreatureSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMarshalingTheTroopsCard::BeforeResolution));
	cpSpell->AddAbilityTag(AbilityTag::LifeGain);
	AddSpell(cpSpell.GetPointer());	
}

bool CMarshalingTheTroopsCard::BeforeResolution(CAbilityAction* pAction)
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

void CMarshalingTheTroopsCard::CreatureSelection(CPlayer* pPlayer)
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

void CMarshalingTheTroopsCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

void CMarshalingTheTroopsCard::Finale(CPlayer* pPlayer)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	int nNumber = pCreatures.GetSize();

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pCreatures.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	
	CLifeModifier pModifier2 = CLifeModifier(Life(4*nNumber), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier2.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CWuSpyCard::CWuSpyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wu Spy"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Rogue), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CWuSpyCard::OnResolutionCompleted))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWuSpyCard::OnCardSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(FALSE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CWuSpyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CPlayer* pTarget = pAbilityAction->GetAssociatedPlayer();
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);
	int nLibrarySize = pLibrary->GetSize();

	CCard* pNextDraw = pLibrary->GetTopCard();

	if (nLibrarySize == 1)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pController);
		pModifier.ApplyTo(pNextDraw);
	}
	if (nLibrarySize > 1)
	{
		CCard* pSecondDraw = pLibrary->GetAt(nLibrarySize - 2);
			std::vector<SelectionEntry> entries;
			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pNextDraw;
			selectionEntry.strText.Format(_T("Put %s to the graveyard"), pNextDraw->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pSecondDraw;
			selectionEntry.strText.Format(_T("Put %s to the graveyard"), pSecondDraw->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
	
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pNextDraw);
	}
	return;
}

void CWuSpyCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

			pModifier.ApplyTo(pCard);

			return;
		return;
		}
}
//____________________________________________________________________________
//