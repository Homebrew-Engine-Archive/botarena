#include "stdafx.h"
#include "CardDarkAscension.h"

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

		DEFINE_CARD(CAlphaBrawlCard);
		DEFINE_CARD(CArchangelsLightCard);
		DEFINE_CARD(CArchdemonOfGreedCard);
		DEFINE_CARD(CArtfulDodgeCard);
		DEFINE_CARD(CBarTheDoorCard);
		DEFINE_CARD(CBlackCatCard);
		DEFINE_CARD(CBloodFeudCard);
		DEFINE_CARD(CBoneToAshCard);
		DEFINE_CARD(CBreakOfDayCard);
		DEFINE_CARD(CBriarpackAlphaCard);
		DEFINE_CARD(CBurdenOfGuiltCard);
		DEFINE_CARD(CBurningOilCard);
		DEFINE_CARD(CChantOfTheSkifsangCard);
		DEFINE_CARD(CChillOfForebodingCard);
		DEFINE_CARD(CChosenOfMarkovCard);
		//DEFINE_CARD(CCounterlashCard);
		DEFINE_CARD(CCrushingVinesCard);
		DEFINE_CARD(CDawntreaderElkCard);
		DEFINE_CARD(CDeathsCaressCard);
		DEFINE_CARD(CDerangedOutcastCard);
		DEFINE_CARD(CDiregrafCaptainCard);
		DEFINE_CARD(CDrogskolCaptainCard);
		DEFINE_CARD(CDrogskolReaverCard);
		DEFINE_CARD(CElbrustheBindingBladeCard);
		DEFINE_CARD(CElgaudInquisitorCard);
		DEFINE_CARD(CErdwalRipperCard);
		DEFINE_CARD(CExecutionersHoodCard);
		DEFINE_CARD(CFaithlessLootingCard);
		DEFINE_CARD(CFalkenrathAristocratCard);
		DEFINE_CARD(CFalkenrathTorturerCard);
		DEFINE_CARD(CFarbogBoneflingerCard);
		DEFINE_CARD(CFeedThePackCard);
		DEFINE_CARD(CFiresOfUndeathCard);
		DEFINE_CARD(CFlayerOfTheHateboundCard);
		DEFINE_CARD(CForgeDevilCard);
		DEFINE_CARD(CGatherTheTownsfolkCard);
		DEFINE_CARD(CGavonyIronwrightCard);
		DEFINE_CARD(CGeralfsMessengerCard);
		DEFINE_CARD(CGeralfsMindcrusherCard);
		DEFINE_CARD(CGhoultreeCard);
		DEFINE_CARD(CGrafdiggersCageCard);
		DEFINE_CARD(CGravecrawlerCard);
		DEFINE_CARD(CGravepurgeCard);
		DEFINE_CARD(CGravetillerWurmCard);
		DEFINE_CARD(CGrimBackwoodsCard);
		DEFINE_CARD(CGrimFloweringCard);
		DEFINE_CARD(CGriptideCard);
		DEFINE_CARD(CHarrowingJourneyCard);
		DEFINE_CARD(CHauntedFengrafCard);
		DEFINE_CARD(CHavengulRunebinderCard);
		DEFINE_CARD(CHeadlessSkaabCard);
		DEFINE_CARD(CHecklingFiendsCard);
		DEFINE_CARD(CHellriderCard);
		DEFINE_CARD(CHelvaultCard);
		DEFINE_CARD(CHighbornGhoulCard);
		DEFINE_CARD(CHollowhengeBeastCard);
		DEFINE_CARD(CHollowhengeSpiritCard);
		DEFINE_CARD(CHungerOfTheHowlpackCard);
		DEFINE_CARD(CHuntmasteroftheFellsCard);
		DEFINE_CARD(CImmerwolfCard);
		DEFINE_CARD(CIncreasingAmbitionCard);
		DEFINE_CARD(CIncreasingConfusionCard);
		DEFINE_CARD(CIncreasingDevotionCard);
		DEFINE_CARD(CIncreasingSavageryCard);
		DEFINE_CARD(CJarOfEyeballsCard);
		DEFINE_CARD(CKessigRecluseCard);
		DEFINE_CARD(CKrallenhordeKillerCard);
		DEFINE_CARD(CLambholtElderCard);
		DEFINE_CARD(CLingeringSoulsCard);
		DEFINE_CARD(CLostInTheWoodsCard);
		DEFINE_CARD(CMarkovBlademasterCard);
		DEFINE_CARD(CMarkovsServantCard);
		DEFINE_CARD(CMarkovWarlordCard);
		DEFINE_CARD(CMidnightGuardCard);
		DEFINE_CARD(CMikaeusTheUnhallowedCard);
		DEFINE_CARD(CMondronenShamanCard);
		DEFINE_CARD(CMoonscarredWerewolfCard);
		DEFINE_CARD(CMoonveilDragonCard);
		DEFINE_CARD(CMysticRetrievalCard);
		DEFINE_CARD(CNearheathStalkerCard);
		DEFINE_CARD(CNephaliaSeakiteCard);
		DEFINE_CARD(CNiblisOfTheBreathCard);
		DEFINE_CARD(CNiblisOfTheMistCard);
		DEFINE_CARD(CNiblisOfTheUrnCard);
		DEFINE_CARD(CPredatorOozeCard);
		DEFINE_CARD(CPyreheartWolfCard);
		DEFINE_CARD(CRavageroftheFellsCard);
		DEFINE_CARD(CRavenousDemonCard);
		DEFINE_CARD(CReapTheSeagrafCard);
		DEFINE_CARD(CRelentlessSkaabsCard);
		DEFINE_CARD(CRequiemAngelCard);
		DEFINE_CARD(CRussetWolvesCard);
		DEFINE_CARD(CSanctuaryCatCard);
		DEFINE_CARD(CSavingGraspCard);
		DEFINE_CARD(CScorchTheFieldsCard);
		DEFINE_CARD(CScornedVillagerCard);
		DEFINE_CARD(CScreechingSkaabCard);
		DEFINE_CARD(CSecretsOfTheDeadCard);
		DEFINE_CARD(CShatteredPerceptionCard);
		DEFINE_CARD(CShriekgeistCard);
		DEFINE_CARD(CSightlessGhoulCard);
		DEFINE_CARD(CSilverclawGriffinCard);
		DEFINE_CARD(CSilverpeltWerewolfCard);
		DEFINE_CARD(CSkillfulLungeCard);
		DEFINE_CARD(CSkirsdagFlayerCard);
		DEFINE_CARD(CSomberwaldDryadCard);
		DEFINE_CARD(CSorinLordofInnistradCard);
		DEFINE_CARD(CStormboundGeistCard);
		DEFINE_CARD(CStranglerootGeistCard);
		DEFINE_CARD(CStromkirkCaptainCard);
		DEFINE_CARD(CTalonsOfFalkenrathCard);
		DEFINE_CARD(CThaliaGuardianOfThrabenCard);
		DEFINE_CARD(CThoughtScourCard);
		DEFINE_CARD(CThrabenDoomsayerCard);
		DEFINE_CARD(CThrabenHereticCard);
		DEFINE_CARD(CTovolarsMagehunterCard);
		DEFINE_CARD(CTowerGeistCard);
		DEFINE_CARD(CTrackersInstinctsCard);
		DEFINE_CARD(CTragicSlipCard);
		DEFINE_CARD(CUndyingEvilCard);
		DEFINE_CARD(CVaultOfTheArchangelCard);
		DEFINE_CARD(CVengefulVampireCard);
		DEFINE_CARD(CVillageSurvivorsCard);
		DEFINE_CARD(CVorapedeCard);
		DEFINE_CARD(CWakedancerCard);
		DEFINE_CARD(CWildHungerCard);
		DEFINE_CARD(CWithengarUnboundCard);
		DEFINE_CARD(CWolfbittenCaptiveCard);
		DEFINE_CARD(CWolfhuntersQuiverCard);
		DEFINE_CARD(CWrackwithMadnessCard);
		DEFINE_CARD(CYoungWolfCard);
		DEFINE_CARD(CZombieApocalypseCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CFaithlessLootingCard::CFaithlessLootingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Faithless Looting"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject <CDrawCardSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT, 2));
		ATLASSERT(cpSpell);

		cpSpell->SetDiscard(2, false);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject <CDrawCardSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT, 2));
		ATLASSERT(cpSpell);

		cpSpell->SetDiscard(2, false);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGatherTheTownsfolkCard::CGatherTheTownsfolkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gather the Townsfolk"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			_T("Human A"), 2948,
			2));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGatherTheTownsfolkCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGatherTheTownsfolkCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetLife() > Life(5))
		return true;

	ContextValue Context(5);
	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CGravecrawlerCard::CGravecrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravecrawler"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//cast from graveyard
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetGraveyardOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CGravecrawlerCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CGravecrawlerCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CRavenousDemonCard::CRavenousDemonCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ravenous Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4), Power(9), Life(9), _T("Archdemon of Greed"))
	, m_CardFilter(_T("a Human"), _T("Humans"), new CreatureTypeComparer(CREATURE_TYPE(Human), false))
{
	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CRavenousDemonCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Transform"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-9), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavenousDemonCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRavenousDemonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetOrientation()->IsSecondFaced() == TRUE;
}

//____________________________________________________________________________
//
CArchdemonOfGreedCard::CArchdemonOfGreedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archdemon of Greed"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T(""), Power(9), Life(9))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(false);
	GetCreatureKeyword()->AddTrample(false);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-9), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardOrientationModifier);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
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
CMondronenShamanCard::CMondronenShamanCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Mondronen Shaman"), CardType::Creature, CREATURE_TYPE3(Human, Werewolf, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2), Power(5), Life(5), _T("Tovolar's Magehunter"))
{	
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, FALSE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMondronenShamanCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMondronenShamanCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
				cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMondronenShamanCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMondronenShamanCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return GetOrientation()->IsSecondFaced() == TRUE;
}

bool CMondronenShamanCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CMondronenShamanCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CTovolarsMagehunterCard::CTovolarsMagehunterCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Tovolar's Magehunter"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(5), Life(5), Power(3), Life(2), _T("Mondronen Shaman"))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Shaman, TRUE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTovolarsMagehunterCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTovolarsMagehunterCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTovolarsMagehunterCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTovolarsMagehunterCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return GetOrientation()->IsSecondFaced() == FALSE;
}

bool CTovolarsMagehunterCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CTovolarsMagehunterCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CGhoultreeCard::CGhoultreeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghoultree"), CardType::Creature, CREATURE_TYPE2(Zombie, Treefolk), nID,
		_T("7") GREEN_MANA_TEXT, Power(10), Life(10))
		, m_CardFilter(_T("creature card"), _T("creatures"), new CardTypeComparer(CardType::Creature, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			 &m_CardFilter));

	cpAbility->SetManaReductionColor(CManaCostBase::Color::Generic);
	cpAbility->SetCountingZone(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHungerOfTheHowlpackCard::CHungerOfTheHowlpackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunger of the Howlpack"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CHungerOfTheHowlpackCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CHungerOfTheHowlpackCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	int n = 1;
	if (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0)
	n = 3;

	CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), n);
	modifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CDrogskolReaverCard::CDrogskolReaverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drogskol Reaver"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(5))
{
	GetCardKeyword()->AddLifelink(FALSE);
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDrogskolReaverCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CDrogskolReaverCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife) return true;

	return false;
}

//____________________________________________________________________________
//
CSecretsOfTheDeadCard::CSecretsOfTheDeadCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Secrets of the Dead"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::Stack));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);	
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFalkenrathAristocratCard::CFalkenrathAristocratCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Falkenrath Aristocrat"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddHaste(false);

	{
		m_CardFilter1.AddComparer(new AnyCreatureComparer);
		m_CardFilter1.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		m_CardFilter1.SetFilterName(_T("a non-Human creature"), _T("non-Human creatures"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("0"),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCost().AddSacrificeCardCost(1,&m_CardFilter1);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter2.AddComparer(new AnyCreatureComparer);
		m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		m_CardFilter2.SetFilterName(_T("a Human creature"), _T("Human creatures"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("0"),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCost().AddSacrificeCardCost(1,&m_CardFilter2);

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoonveilDragonCard::CMoonveilDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Moonveil Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScornedVillagerCard::CScornedVillagerCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Scorned Villager"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1), Power(2), Life(2), _T("Moonscarred Werewolf"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CScornedVillagerCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CScornedVillagerCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScornedVillagerCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScornedVillagerCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CScornedVillagerCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CScornedVillagerCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CMoonscarredWerewolfCard::CMoonscarredWerewolfCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Moonscarred Werewolf"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(2), Life(2), Power(1), Life(1), _T("Scorned Villager"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToRemove(CreatureKeyword::Vigilance);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CMoonscarredWerewolfCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CMoonscarredWerewolfCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoonscarredWerewolfCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoonscarredWerewolfCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMoonscarredWerewolfCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CMoonscarredWerewolfCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CThaliaGuardianOfThrabenCard::CThaliaGuardianOfThrabenCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Thalia, Guardian of Thraben"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new NegateCardComparer(new AnyCreatureComparer),
			_T("1")));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLambholtElderCard::CLambholtElderCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Lambholt Elder"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(2), Power(4), Life(5), _T("Silverpelt Werewolf"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	AddCreatureModifier(pModifier1);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLambholtElderCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLambholtElderCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLambholtElderCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLambholtElderCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const
{
	return (GetOrientation()->IsSecondFaced() == TRUE);
}

bool CLambholtElderCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CLambholtElderCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CSilverpeltWerewolfCard::CSilverpeltWerewolfCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Silverpelt Werewolf"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(4), Life(5), Power(1), Life(2), _T("Lambholt Elder"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);
	AddCreatureModifier(pModifier1);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverpeltWerewolfCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverpeltWerewolfCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverpeltWerewolfCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSilverpeltWerewolfCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const
{
	return (GetOrientation()->IsSecondFaced() == FALSE);
}

bool CSilverpeltWerewolfCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CSilverpeltWerewolfCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CWolfbittenCaptiveCard::CWolfbittenCaptiveCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Wolfbitten Captive"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1), Power(2), Life(2), _T("Krallenhorde Killer"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);

	AddCreatureModifier(pModifier1);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") GREEN_MANA_TEXT,
				Power(+2), Life(+2), CreatureKeyword::Null));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CWolfbittenCaptiveCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("3") GREEN_MANA_TEXT,
				Power(+4), Life(+4), CreatureKeyword::Null));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CWolfbittenCaptiveCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWolfbittenCaptiveCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWolfbittenCaptiveCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWolfbittenCaptiveCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CWolfbittenCaptiveCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CKrallenhordeKillerCard::CKrallenhordeKillerCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Krallenhorde Killer"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(2), Life(2), Power(1), Life(1), _T("Wolfbitten Captive"))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);

	AddCreatureModifier(pModifier1);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("1") GREEN_MANA_TEXT,
				Power(+2), Life(+2), CreatureKeyword::Null));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CKrallenhordeKillerCard::CanPlaySecondFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("3") GREEN_MANA_TEXT,
				Power(+4), Life(+4), CreatureKeyword::Null));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CKrallenhordeKillerCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrallenhordeKillerCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrallenhordeKillerCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrallenhordeKillerCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CKrallenhordeKillerCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}

//____________________________________________________________________________
//
CZombieApocalypseCard::CZombieApocalypseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Zombie Apocalypse"), CardType::Sorcery, nID)

	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Human), false), ZoneId::Graveyard, TRUE,
			MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CZombieApocalypseCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CZombieApocalypseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(TRUE)));
	CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)));

	pModifier1->ApplyTo(GetController());
	pModifier2->ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CVaultOfTheArchangelCard::CVaultOfTheArchangelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Vault of the Archangel"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpAbility->SetToActivatedAbility();

		cpAbility->AddTapCost();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch | CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CPredatorOozeCard::CPredatorOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Predator Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddIndestructible(FALSE);

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
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHellriderCard::CHellriderCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Hellrider"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
						   CWhenAttackedBlocked::PlayerEventCallback,
						   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

    cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
    cpAbility->GetLifeModifier().SetDamageType(DamageType::NonCombatDamage | DamageType::AbilityDamage);
    cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChantOfTheSkifsangCard::CChantOfTheSkifsangCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Chant of the Skifsang"), nID,
		_T("2") BLUE_MANA_TEXT,
		Power(-13), Life(-0))
{
}

//____________________________________________________________________________
//
CLingeringSoulsCard::CLingeringSoulsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lingering Souls"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT,
				_T("Spirit D"), 2752,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT,
				_T("Spirit D"), 2752,
				2));

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
CThoughtScourCard::CThoughtScourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thought Scour"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CThoughtScourCard::OnResolutionCompleted))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			2));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CThoughtScourCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CDrawCardModifier modifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CStromkirkCaptainCard::CStromkirkCaptainCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Stromkirk Captain"), CardType::Creature, CREATURE_TYPE2(Vampire, Soldier), nID,
		_T("1") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter().
	AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarkovBlademasterCard::CMarkovBlademasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Markov Blademaster"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

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
CBriarpackAlphaCard::CBriarpackAlphaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Briarpack Alpha"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMikaeusTheUnhallowedCard::CMikaeusTheUnhallowedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mikaeus, the Unhallowed"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Cleric), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMikaeusTheUnhallowedCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMikaeusTheUnhallowedCard::CreateAdditionalAbility)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMikaeusTheUnhallowedCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage) 
{
	if (pCard->GetZone()->GetZoneId() != ZoneId::Battlefield) return FALSE;

	else triggerContext.m_pCard = pCard;

	return TRUE;
}

counted_ptr<CAbility> CMikaeusTheUnhallowedCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredUndyingAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMikaeusTheUnhallowedCard::SetTriggerContextU1));
	cpAbility->SetAbilityName(_T("Undying ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CMikaeusTheUnhallowedCard::SetTriggerContextU1(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownp11Counters() == 0;
}

//____________________________________________________________________________
//
CNearheathStalkerCard::CNearheathStalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nearheath Stalker"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(1))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CFalkenrathTorturerCard::CFalkenrathTorturerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Falkenrath Torturer"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Creature, false));
		m_CardFilter1.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		m_CardFilter1.SetFilterName(_T("a non-Human creature"), _T("non-Human creatures"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("0"),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetCost().AddSacrificeCardCost(1,&m_CardFilter1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Creature, false));
		m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		m_CardFilter2.SetFilterName(_T("a Human creature"), _T("Human creatures"));

		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("0"),
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->GetCost().AddSacrificeCardCost(1,&m_CardFilter2);

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkirsdagFlayerCard::CSkirsdagFlayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skirsdag Flayer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("a Human"), _T("Humans"), new CreatureTypeComparer(CREATURE_TYPE(Human), false))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTalonsOfFalkenrathCard::CTalonsOfFalkenrathCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Talons of Falkenrath"), nID, 
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Null)
{
	GetCardKeyword()->AddFlash(FALSE);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CTalonsOfFalkenrathCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CTalonsOfFalkenrathCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") RED_MANA_TEXT,
			Power(+2), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravetillerWurmCard::CGravetillerWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gravetiller Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGravetillerWurmCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(false);
}

void CGravetillerWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 4, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CHecklingFiendsCard::CHecklingFiendsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heckling Fiends"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") RED_MANA_TEXT,	// No mana cost
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CHeadlessSkaabCard::CHeadlessSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Headless Skaab"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(6))
{
	SetIntoPlayTapped();

	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

}

//____________________________________________________________________________
//
CTragicSlipCard::CTragicSlipCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Tragic Slip"), CardType::Instant, nID, AbilityType::Instant,
	    BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTragicSlipCard::BeforeResolution));
}

bool CTragicSlipCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0)
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -13;
		Context.nValue2 = -13;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return TRUE;
	}
	return TRUE;
}

//____________________________________________________________________________
//
CHavengulRunebinderCard::CHavengulRunebinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Havengul Runebinder"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHavengulRunebinderCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			_T("Zombie"), 2724,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CHavengulRunebinderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Zombie) || pCreatureCard->GetCardKeyword()->HasChangeling())
			pModifier.ApplyTo(pCard);
		}
	}
}

//____________________________________________________________________________
//
CForgeDevilCard::CForgeDevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forge Devil"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																   DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIncreasingDevotionCard::CIncreasingDevotionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Increasing Devotion"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Human A"), 2948,
				5));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingDevotionCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("7") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Human A"), 2948,
				5));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingDevotionCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Graveyard, ZoneId::Stack));

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
}

bool CIncreasingDevotionCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetCardFlag()->HasAbilityFlag(0) != TRUE)
		return true;

	ContextValue Context(10);
	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CIncreasingConfusionCard::CIncreasingConfusionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Increasing Confusion"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				0));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingConfusionCard::BeforeResolution));
		
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				0));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingConfusionCard::BeforeResolution));
		
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Graveyard, ZoneId::Stack));

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
}

bool CIncreasingConfusionCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nExtraCount = pAction->GetCostConfigEntry().GetExtraValue();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	if (GetCardFlag()->HasAbilityFlag(0) == TRUE)
		nExtraCount = nExtraCount * 2;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nExtraCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CGeralfsMessengerCard::CGeralfsMessengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geralf's Messenger"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
	, CUndyingKeyword(this)
{
	SetIntoPlayTapped();

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
		
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlayerOfTheHateboundCard::CFlayerOfTheHateboundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flayer of the Hatebound"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(2))
	, CUndyingKeyword(this)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlayerOfTheHateboundCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFlayerOfTheHateboundCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CFlayerOfTheHateboundCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CFlayerOfTheHateboundCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nDamage = GET_INTEGER(pCreature->GetLastKnownPower());
	
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nDamage));
	pAction->SetTriggerContext(triggerContext);

	return nDamage > 0;
}

//____________________________________________________________________________
//
CPyreheartWolfCard::CPyreheartWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pyreheart Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
	, CUndyingKeyword(this)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBeBlockedBy1);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(true);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIncreasingSavageryCard::CIncreasingSavageryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Increasing Savagery"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CIncreasingSavageryCard::OnResolutionCompleted))
{
	{
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				false));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				false));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Graveyard, ZoneId::Stack));

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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIncreasingSavageryCard::SetTriggerContext));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIncreasingSavageryCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (moveType != MoveType::Cast);
}

void CIncreasingSavageryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	int n = 5;

	if (GetCardFlag()->HasAbilityFlag(0) == TRUE)
	{
		CCardFlagModifier* pModifier2 = new CCardFlagModifier;
		pModifier2->GetModifier().SetToRemove(CardFlag::AbilityFlag);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		pModifier2->ApplyTo(this);
		n = 10;
	}

	CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), n);
	modifier.ApplyTo(pCreature);
}

//____________________________________________________________________________
//
CStranglerootGeistCard::CStranglerootGeistCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Strangleroot Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CGrimBackwoodsCard::CGrimBackwoodsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Grim Backwoods"), nID)
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
				_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, 1));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CHauntedFengrafCard::CHauntedFengrafCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Haunted Fengraf"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHauntedFengrafCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CHauntedFengrafCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pZone = pAction->GetController()->GetZoneById(ZoneId::Graveyard);

	CCountedCardContainer cards;
	if (!CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, cards)) return true;
	cards.Shuffle(pAction->GetController());

	CZone* pToZone = pAction->GetController()->GetZoneById(ZoneId::Hand);

	cards.GetAt(0)->Move(pToZone, pAction->GetController(), MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CIncreasingAmbitionCard::CIncreasingAmbitionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Increasing Ambition"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("cards")),
				ZoneId::Hand,
				true, false, false));

		cpSpell->SetRevealCards(FALSE);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingAmbitionCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("7") BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("cards")),
				ZoneId::Hand,
				true, false, false));

		cpSpell->SetRevealCards(FALSE);

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIncreasingAmbitionCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Graveyard, ZoneId::Stack));

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
}

bool CIncreasingAmbitionCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetCardFlag()->HasAbilityFlag(0) == TRUE)
	{
		ContextValue Context(pAction->GetValue());

		Context.nValue1 = 2;
		Context.nValue2 = 2;

		pAction->SetValue(Context);
	}

	return true;
}

//____________________________________________________________________________
//
CDiregrafCaptainCard::CDiregrafCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Diregraf Captain"), CardType::Creature, CREATURE_TYPE2(Zombie, Soldier), nID,
		_T("1") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVorapedeCard::CVorapedeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vorapede"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4))
	, CUndyingKeyword(this)
{
	GetCreatureKeyword()->AddVigilance(false);
	GetCreatureKeyword()->AddTrample(false);
}

//____________________________________________________________________________
//
CArchangelsLightCard::CArchangelsLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Archangel's Light"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("7") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArchangelsLightCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CArchangelsLightCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = pAction->GetController();
	CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
	int n = 2 * CCardFilter::GetFilter(_T("cards"))->CountIncluded(pGraveyard->GetCardContainer());

	CLifeModifier modifier1(Life(+n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	CZoneCardModifier modifier2(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)));

	modifier1.ApplyTo(pPlayer);
	modifier2.ApplyTo(pPlayer);
	pPlayer->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CBarTheDoorCard::CBarTheDoorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bar the Door"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+4)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBreakOfDayCard::CBreakOfDayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Break of Day"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBreakOfDayCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBreakOfDayCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (GetController()->GetLife() > Life(5)) return true;

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardKeywordModifier(CardKeyword::Indestructible, true, true)));

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CBurdenOfGuiltCard::CBurdenOfGuiltCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Burden of Guilt"), CardType::EnchantCreature, nID,
		WHITE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<CModifyEnchantedCardAbility> cpAbility(
		::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
			_T("1")));

	cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(true));

	cpAbility->SetAbilityText(_T("Tap enchanted creature. Activates"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElgaudInquisitorCard::CElgaudInquisitorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elgaud Inquisitor"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit D"), 2752, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMidnightGuardCard::CMidnightGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Midnight Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNiblisOfTheMistCard::CNiblisOfTheMistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niblis of the Mist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
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
CNiblisOfTheUrnCard::CNiblisOfTheUrnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niblis of the Urn"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
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
CRequiemAngelCard::CRequiemAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Requiem Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit D"), 2752, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSanctuaryCatCard::CSanctuaryCatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanctuary Cat"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CSilverclawGriffinCard::CSilverclawGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silverclaw Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(false);
}

//____________________________________________________________________________
//
CSkillfulLungeCard::CSkillfulLungeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skillful Lunge"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+2), Life(+0), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThrabenHereticCard::CThrabenHereticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thraben Heretic"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArtfulDodgeCard::CArtfulDodgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Artful Dodge"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				Power(0), Life(0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

		cpSpell->AddAbilityTag(AbilityTag::CreatureChange);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT,
				Power(0), Life(0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));
		ATLASSERT(cpSpell);

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
CBoneToAshCard::CBoneToAshCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Bone to Ash"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CChillOfForebodingCard::CChillOfForebodingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chill of Foreboding"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalRevealLibrarySpell> cpSpell(
			::CreateObject<CGlobalRevealLibrarySpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT, 5));

		cpSpell->SetRevealCardsToOthers(true, false);
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGlobalRevealLibrarySpell> cpSpell(
			::CreateObject<CGlobalRevealLibrarySpell>(this, AbilityType::Sorcery,
				_T("7") BLUE_MANA_TEXT, 5));

		cpSpell->SetRevealCardsToOthers(true, false);
		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CGeralfsMindcrusherCard::CGeralfsMindcrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geralf's Mindcrusher"), CardType::Creature, CREATURE_TYPE2(Zombie, Horror), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
	, CUndyingKeyword(this)
{
	typedef TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(5);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGriptideCard::CGriptideCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Griptide"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CMysticRetrievalCard::CMysticRetrievalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mystic Retrieval"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery | CardType::Instant, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Sorcery | CardType::Instant, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

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
CNephaliaSeakiteCard::CNephaliaSeakiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nephalia Seakite"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CNiblisOfTheBreathCard::CNiblisOfTheBreathCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Niblis of the Breath"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT,
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRelentlessSkaabsCard::CRelentlessSkaabsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Relentless Skaabs"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
	, CUndyingKeyword(this)
{
	GetSpells().GetAt(0)->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CSavingGraspCard::CSavingGraspCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Saving Grasp"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new CardOwnerComparer(this),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new CardOwnerComparer(this),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

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
CScreechingSkaabCard::CScreechingSkaabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Screeching Skaab"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShriekgeistCard::CShriekgeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shriekgeist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetRevealCount(2);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormboundGeistCard::CStormboundGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stormbound Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, CUndyingKeyword(this)
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CTowerGeistCard::CTowerGeistCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tower Geist"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
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
		ZoneId::Graveyard,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlackCatCard::CBlackCatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Black Cat"), CardType::Creature, CREATURE_TYPE2(Zombie, Cat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChosenOfMarkovCard::CChosenOfMarkovCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Chosen of Markov"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2), Power(4), Life(4), _T("Markov's Servant"))
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Vampire, TRUE);
	
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CChosenOfMarkovCard::CanPlayFirstFace)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Transform"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarkovsServantCard::CMarkovsServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Markov's Servant"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T(""), Power(4), Life(4))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CFarbogBoneflingerCard::CFarbogBoneflingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Farbog Boneflinger"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
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
CGravepurgeCard::CGravepurgeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Gravepurge"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CGravepurgeCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT, 1));

		cpSpell->SetAbilityText(_T("Choose zero targets. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

void CGravepurgeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CDrawCardModifier pmodifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pmodifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CHarrowingJourneyCard::CHarrowingJourneyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harrowing Journey"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Sorcery,
		_T("4")  BLACK_MANA_TEXT, 
		3));

	cpSpell->GetTargetModifier().CPlayerModifiers::push_back(
		new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHighbornGhoulCard::CHighbornGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Highborn Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
}

//____________________________________________________________________________
//
CReapTheSeagrafCard::CReapTheSeagrafCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reap the Seagraf"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT,
				_T("Zombie"), 2724,
				1));
		ATLASSERT(cpSpell);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				_T("Zombie"), 2724,
				1));
		ATLASSERT(cpSpell);
		
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
CSightlessGhoulCard::CSightlessGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sightless Ghoul"), CardType::Creature, CREATURE_TYPE2(Zombie, Soldier), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, CUndyingKeyword(this)
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CUndyingEvilCard::CUndyingEvilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Undying Evil"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);	

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUndyingEvilCard::CreateAdditionalAbility));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CScheduledCardModifier(GetGame(),
			pModifier,
			TurnNumberDelta(-1),
			NodeId::EndStep,
			true, // in-play only
			CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CUndyingEvilCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredUndyingAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUndyingEvilCard::SetTriggerContextU1));
	cpAbility->SetAbilityName(_T("Undying ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CUndyingEvilCard::SetTriggerContextU1(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownp11Counters() == 0;
}

//____________________________________________________________________________
//
CVengefulVampireCard::CVengefulVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vengeful Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CWakedancerCard::CWakedancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wakedancer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWakedancerCard::SetTriggerContext));
	cpAbility->SetCreateTokenOption(TRUE, _T("Zombie"), 2724, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CWakedancerCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetGame()->GetCertainTypeDiedCount(CardType::Creature) > 0);
}

//____________________________________________________________________________
//
CBurningOilCard::CBurningOilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burning Oil"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				false,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				new AttackingBlockingCreatureComparer,
				false,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

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
CErdwalRipperCard::CErdwalRipperCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Erdwal Ripper"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(1))
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

//____________________________________________________________________________
//
CFiresOfUndeathCard::CFiresOfUndeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fires of Undeath"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("5") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				true,
				Life(-2), PreventableType::Preventable));
		ATLASSERT(cpSpell);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->AddAbilityTag(AbilityTag::DamageSource);
		
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
CMarkovWarlordCard::CMarkovWarlordCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Markov Warlord"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility,
								 CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetTargeting().SetSubjectCount(1, 2);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRussetWolvesCard::CRussetWolvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Russet Wolves"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CScorchTheFieldsCard::CScorchTheFieldsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Scorch the Fields"), CardType::Sorcery, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CScorchTheFieldsCard::OnResolutionCompleted))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
	m_CardFilter.SetFilterName(_T("a Human creature"), _T("Human creatures"));

	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CScorchTheFieldsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

	pModifier.ApplyTo(pAbilityAction->GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(pAbilityAction->GetController()));
}

//____________________________________________________________________________
//
CShatteredPerceptionCard::CShatteredPerceptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shattered Perception"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CDrawCardSpell3> cpSpell(
			::CreateObject<CDrawCardSpell3>(this, AbilityType::Sorcery,
				_T("2") RED_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CDrawCardSpell3> cpSpell(
			::CreateObject<CDrawCardSpell3>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrushingVinesCard::CCrushingVinesCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Crushing Vines"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDawntreaderElkCard::CDawntreaderElkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dawntreader Elk"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT, 
			CCardFilter::GetFilter(_T("basic lands")),		
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDerangedOutcastCard::CDerangedOutcastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deranged Outcast"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a Human"), _T("Humans"), new CreatureTypeComparer(CREATURE_TYPE(Human), false))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));
	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrimFloweringCard::CGrimFloweringCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grim Flowering"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("5") GREEN_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpSpell->GetSurveyCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHollowhengeBeastCard::CHollowhengeBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hollowhenge Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
}

//____________________________________________________________________________
//
CKessigRecluseCard::CKessigRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kessig Recluse"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CSomberwaldDryadCard::CSomberwaldDryadCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Somberwald Dryad"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CTrackersInstinctsCard::CTrackersInstinctsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tracker's Instincts"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				4));

		cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, 
			CCardFilter::GetFilter(_T("creatures")));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT,
				4));

		cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, 
			CCardFilter::GetFilter(_T("creatures")));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

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
CWildHungerCard::CWildHungerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wild Hunger"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+3), Life(+1),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT,
				Power(+3), Life(+1),
				CreatureKeyword::Trample, CreatureKeyword::Null,
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
CYoungWolfCard::CYoungWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Young Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
	, CUndyingKeyword(this)
{
}

//____________________________________________________________________________
//
CDrogskolCaptainCard::CDrogskolCaptainCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drogskol Captain"), CardType::Creature, CREATURE_TYPE2(Spirit, Soldier), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWolfhuntersQuiverCard::CWolfhuntersQuiverCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wolfhunter's Quiver"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("5")));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CWolfhuntersQuiverCard::CreateEquipmentAbility1)));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CWolfhuntersQuiverCard::CreateEquipmentAbility2)));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CWolfhuntersQuiverCard::CreateEquipmentAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

counted_ptr<CAbility> CWolfhuntersQuiverCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-3), PreventableType::Preventable));

	cpEquipAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CWrackwithMadnessCard::CWrackwithMadnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wrack with Madness"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericTargetCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetCreatureSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT, new AnyCreatureComparer()));
		
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(new CDamagetoItselfModifier(DamageType::SpellDamage | DamageType::NonCombatDamage));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CSorinLordofInnistradCard::CSorinLordofInnistradCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Sorin, Lord of Innistrad"), nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Sorin, 3)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSorinLordofInnistradCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Vampire C"), 2950,
			1));
	//ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(LOYALTY_COUNTER), +1);

	AddAbility(cpAbility.GetPointer());
	}
/*	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Power Pump Emblem"), 2951, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Creatures you control get +1/+0."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Creatures you control get +1/+0."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());			
	}*/
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Power Pump Emblem"), 2951,
			1));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSorinLordofInnistradCard::BeforeResolution));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting()->SetSubjectCount(0,3);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CSorinLordofInnistradCard::BeforeResolution(CAbilityAction* pAction)
{
	m_SelectedCards1.RemoveAll();
	
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	const CSubjectGroup& targetGroup = pTargetAction->GetTargetGroup();

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{		
		m_SelectedCards1.AddCard(const_cast<CCard*>(it->GetPointer()),CardPlacement::Top);
		if ((const_cast<CCard*>(it->GetPointer()))->GetIsAlsoOf())
			m_SelectedCards1.AddCard((const_cast<CCard*>(it->GetPointer()))->GetIsAlsoOf(),CardPlacement::Top);
	}

	return true;
}
void CSorinLordofInnistradCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
	CGainControlModifier modifier = CGainControlModifier(GetGame(),(CCard*)this);

	for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
	{
		CCard* pCard = m_SelectedCards1.GetAt(i);

		if (pCard->GetZoneId() == ZoneId::Graveyard)
			modifier.ApplyTo(pCard);
		
	}
	}
}
//____________________________________________________________________________
//
CExecutionersHoodCard::CExecutionersHoodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Executioner's Hood"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CDeathsCaressCard::CDeathsCaressCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death's Caress"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDeathsCaressCard::OnResolutionCompleted))
		, m_pLife(0)
{	
		m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDeathsCaressCard::BeforeResolution));
}
bool CDeathsCaressCard::BeforeResolution(CAbilityAction* pAction)
{
	m_pLife = 0;

	if (pAction->GetAssociatedCard() && pAction->GetAssociatedCard()->GetCardType().IsCreature())
	{
		CCreatureCard* pCard = (CCreatureCard*)pAction->GetAssociatedCard();
		if (pCard->GetCreatureType().HasType(SingleCreatureType::Human) || pCard->GetCardKeyword()->HasChangeling())
			m_pLife = GET_INTEGER(pCard->GetToughness());

		return true;
	}

	else

	return false;
}
void CDeathsCaressCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult && m_pLife)
	{
		CLifeModifier pModifier = CLifeModifier(Life(m_pLife), pAbilityAction->GetAbility()->GetCard(), PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);
		pModifier.ApplyTo(pAbilityAction->GetController());
	}
}
//____________________________________________________________________________
//
CElbrustheBindingBladeCard::CElbrustheBindingBladeCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Elbrus, the Binding Blade"), CardType::Artifact | CardType::Equipment | CardType::Legendary, CREATURE_TYPE(Demon), nID,
		_T("7"), Power(13), Life(13), Power(13), Life(13), _T("Withengar Unbound"))	
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CElbrustheBindingBladeCard::OnResolutionCompleted))
{
	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Flying);
		pModifier1->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	CCardTypeModifier* pModifier3 = new CCardTypeModifier(CardType::Creature | CardType::Black, false, CardType::Artifact | CardType::Equipment);	

	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier;
	pModifier4->GetModifier().SetToAdd(CreatureKeyword::Intimidate);
	pModifier4->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCardModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		//cpAbility->AddCardModifier(new CCardAbilityModifier(
			//CCardAbilityModifier::CreateAbilityCallback(this,
				//&CElbrustheBindingBladeCard::CreateEquipmentAbility)));

		counted_ptr<CPlayableIfTrait> cpTrait(
					::CreateObject<CPlayableIfTrait>(
						m_pUntapAbility,
						CPlayableIfTrait::PlayableCallback(this,
						&CRavenousDemonCard::CanPlayFirstFace)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		AddAbility(cpAbility.GetPointer());
		}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
		AddAbility(cpAbility.GetPointer());
	}
}
/*
	counted_ptr<CAbility> CElbrustheBindingBladeCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
								 CWhenSelfDamageDealt::PlayerEventCallback, 
								 &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
*/
void CElbrustheBindingBladeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CFaceTransformModifier pModifier = CFaceTransformModifier();
		pModifier.ApplyTo(this);
	}
}
//____________________________________________________________________________
//
CWithengarUnboundCard::CWithengarUnboundCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Withengar Unboundn"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T(""), Power(13), Life(13))	
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddIntimidate(FALSE);
}

//____________________________________________________________________________
//
CAlphaBrawlCard::CAlphaBrawlCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Alpha Brawl"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAlphaBrawlCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("6") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer,
			false));

	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CAlphaBrawlCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCreatureCard* pTarget = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pTarget) return;

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new NegateCardComparer(new SpecificCardComparer(pAbilityAction->GetAssociatedCard())));	
	m_CardFilter_temp.AddComparer(new AnyCreatureComparer);

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-GET_INTEGER(pTarget->GetPower())), pTarget,
										 PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

	pModifier.ApplyTo(pTarget->GetController());

	CZone* pBattle = pTarget->GetController()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
			if (pCreatureCard == pTarget) continue;
			CLifeModifier pLifeModifier = CLifeModifier(Life(-GET_INTEGER(pCreatureCard->GetPower())), pCreatureCard,
														PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			pLifeModifier.ApplyTo(pTarget);
		}
	}
}

//____________________________________________________________________________
//
CBloodFeudCard::CBloodFeudCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blood Feud"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CBloodFeudSpell> cpSpell(
		::CreateObject <CBloodFeudSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CBloodFeudCard::CBloodFeudSpell::CBloodFeudSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""), TRUE)
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	
}

void CBloodFeudCard::CBloodFeudSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
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
CImmerwolfCard::CImmerwolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Immerwolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);

	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::CantTransform);	

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().
	AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wolf) | CREATURE_TYPE(Werewolf), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Werewolf), false), // Not this card
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCardKeywordMod().LinkCardModifier(&m_CardFlagModifier1);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHuntmasteroftheFellsCard::CHuntmasteroftheFellsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Huntmaster of the Fells"), CardType::Creature, CREATURE_TYPE2(Human, Werewolf), nID,
		_T("2") GREEN_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2), Power(4), Life(4), _T("Ravager of the Fells"))
{	
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);	
	
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	AddCreatureModifier(pModifier1);	
	AddCreatureModifier(pModifier2);	

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntmasteroftheFellsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}



	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntmasteroftheFellsCard::SetTriggerContext3));

		cpAbility->GetTrigger().SetTriggerIndex(TRANSFORM_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef
			TTriggeredDoubleTargetAbility< CTriggeredDoubleTargetingModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
			
		cpAbility->GetTargeting1().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting2().SetSubjectCount(0,1);

		cpAbility->GetLifeModifier1().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier1().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetLifeModifier2().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier2().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTrigger().SetTriggerIndex(TRANSFORM_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntmasteroftheFellsCard::SetTriggerContext4));


		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntmasteroftheFellsCard::SetTriggerContext1));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
				cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntmasteroftheFellsCard::SetTriggerContext2));
		
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CHuntmasteroftheFellsCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetOrientation()->IsSecondFaced() == FALSE;
}

bool CHuntmasteroftheFellsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CHuntmasteroftheFellsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}
bool CHuntmasteroftheFellsCard::SetTriggerContext3(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const
{
	if (GetZoneId() != ZoneId::Battlefield) return false;
	return GetOrientation()->IsSecondFaced() == FALSE;
}

bool CHuntmasteroftheFellsCard::SetTriggerContext4(CTriggeredDoubleTargetingModifyLifeAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const
{
	if (GetZoneId() != ZoneId::Battlefield) return false;
	return GetOrientation()->IsSecondFaced() == TRUE;
}
//____________________________________________________________________________
//
CRavageroftheFellsCard::CRavageroftheFellsCard(CGame* pGame, UINT nID)
	: CDoubleFacedCreatureCard(pGame, _T("Ravager of the Fells"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T(""), Power(4), Life(4), Power(2), Life(2), _T("Huntmaster of the Fells"))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);

	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, TRUE);	

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier();
		pModifier2->GetModifier().SetToRemove(CreatureKeyword::Trample);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	
	AddCreatureModifier(pModifier1);	
	AddCreatureModifier(pModifier2);	

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavageroftheFellsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}

	
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetCreateTokenOption(TRUE, _T("Wolf A"), 2725, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavageroftheFellsCard::SetTriggerContext3));

		cpAbility->GetTrigger().SetTriggerIndex(TRANSFORM_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef
			TTriggeredDoubleTargetAbility< CTriggeredDoubleTargetingModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
			
		cpAbility->GetTargeting1().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting2().SetSubjectCount(0,1);

		cpAbility->GetLifeModifier1().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier1().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetLifeModifier2().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier2().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTrigger().SetTriggerIndex(TRANSFORM_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavageroftheFellsCard::SetTriggerContext4));


		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavageroftheFellsCard::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavageroftheFellsCard::SetTriggerContext2));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CFaceTransformModifier);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CRavageroftheFellsCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetOrientation()->IsSecondFaced() == TRUE;
}
bool CRavageroftheFellsCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetOrientation()->IsSecondFaced() && GetGame()->GetLastTurnCastedSpellCount() == 0);
}

bool CRavageroftheFellsCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (GetOrientation()->IsSecondFaced()) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLastTurnCastedSpellCount() >= 2)
			return true;

	return false;
}
bool CRavageroftheFellsCard::SetTriggerContext3(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const
{
	if (GetZoneId() != ZoneId::Battlefield) return false;
	return GetOrientation()->IsSecondFaced() == TRUE;
}
bool CRavageroftheFellsCard::SetTriggerContext4(CTriggeredDoubleTargetingModifyLifeAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const
{
	if (GetZoneId() != ZoneId::Battlefield) return false;
	return GetOrientation()->IsSecondFaced() == FALSE;
}
//____________________________________________________________________________
//
CGrafdiggersCageCard::CGrafdiggersCageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grafdigger's Cage"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::GrafdiggersCage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGavonyIronwrightCard::CGavonyIronwrightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gavony Ironwright"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(+4)));
	
	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetAffectControllerCardsOnly();
	
	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckLife();
	cpAbility->SetConditionValue(5);
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrabenDoomsayerCard::CThrabenDoomsayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thraben Doomsayer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Human A"), 2948, 1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+2), Life(+2)));
	
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();
	
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckLife();
		cpAbility->SetConditionValue(5);
		cpAbility->SetConditionIsMaximum();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVillageSurvivorsCard::CVillageSurvivorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Village Survivors"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0)));
	
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->SetAffectControllerCardsOnly();
	
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckLife();
		cpAbility->SetConditionValue(5);
		cpAbility->SetConditionIsMaximum();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFeedThePackCard::CFeedThePackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Feed the Pack"), CardType::GlobalEnchantment, nID, 
		_T("5") GREEN_MANA_TEXT, AbilityType::Enchantment)
{

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFeedThePackCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CFeedThePackCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	const CCard* Sacrificed = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetFirstCardSubject();
	int n;

	if (Sacrificed->GetCardType().IsCreature()) 
	{CCreatureCard* pCreature = (CCreatureCard*)Sacrificed;
	  n = pCreature->GetLastKnownToughness();
	}
	
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Wolf A"), 2725, n);
	
	pModifier.ApplyTo(GetController());
	
	return true;
}

//____________________________________________________________________________
//
CHollowhengeSpiritCard::CHollowhengeSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hollowhenge Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AttackingBlockingCreatureComparer);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHollowhengeSpiritCard::BeforeResolveSelection));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CHollowhengeSpiritCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	pCreature->RemoveFromCombat(FALSE);

	return true;
}
//____________________________________________________________________________
//
CLostInTheWoodsCard::CLostInTheWoodsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lost in the Woods"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLostInTheWoodsCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLostInTheWoodsCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CLostInTheWoodsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.nValue1 = (int)pCreature;
	return true;
}

bool CLostInTheWoodsCard::BeforeResolution(CLostInTheWoodsCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CPlayer* pController = GetController();
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.nValue1;
	CCard* pNextDraw = pController->GetZoneById(ZoneId::Library)->GetTopCard();

	if ((pNextDraw->GetCardType() & CardType::Forest).Any())
		pCard->RemoveFromCombat(FALSE);

	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
	pModifier->AddSelection(MinimumValue(1), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier->ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CJarOfEyeballsCard::CJarOfEyeballsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jar of Eyeballs"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(EYEBALL_COUNTER, +2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(EYEBALL_COUNTER), SpecialNumber::All);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJarOfEyeballsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJarOfEyeballsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounters = -pAction->GetCostConfigEntry().GetExtraValue();

	if (nCounters > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nCounters,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
//Counterlash\n{4UU}\nInstant\nDKA,R\nCounter target spell. You may cast a nonland card in your hand that shares a card type with that spell without paying its mana cost.

/*CCounterlashCard::CCounterlashCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Counterlash"), CardType::Instant, nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CCounterlashCard::OnResolutionCompleted))
	, m_CardSelection(pGame,CSelectionSupport::SelectionCallback(this, &CCounterlashCard::OnCardSelectionDone))
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCounterlashCard::OnSelectionDone))
{
	m_pCounterSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CCounterlashCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	
	toCastCard.RemoveAll();
	
	CPlayer* pController = pAbilityAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);
		if ((!pCard->GetCardType().IsLand()) &&
			((pTarget->GetCardType().IsArtifact() && pCard->GetCardType().IsArtifact()) ||
			(pTarget->GetCardType().IsCreature() && pCard->GetCardType().IsCreature()) ||
			(pTarget->GetCardType().IsEnchantment() && pCard->GetCardType().IsEnchantment()) ||
			(pTarget->GetCardType().IsInstant() && pCard->GetCardType().IsInstant()) ||
			(pTarget->GetCardType().IsPlaneswalker() && pCard->GetCardType().IsPlaneswalker()) ||
			(pTarget->GetCardType().IsSorcery() && pCard->GetCardType().IsSorcery()) ||
			(pTarget->GetCardType().IsTribal() && pCard->GetCardType().IsTribal())))
			toCastCard.AddCard(pCard,CardPlacement::Top);
	}

	if (toCastCard.GetSize() == 0) return;


	// ------------------------------------- Choosing what cards to cast -----------------------------------------------------------------

	CardtoCastSelectionRun(pController);	

	return;
}

void CCounterlashCard::CardtoCastSelectionRun(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't cast"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i < toCastCard.GetSize(); ++i)
		{
			CCard* pCard = toCastCard.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("cast %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}		

		}

	m_CardSelection.AddSelectionRequest(
		 entries, 1, 1, NULL, const_cast<CPlayer*>(pPlayer), toCastCard.GetSize());
}

void CCounterlashCard::FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer)
{
	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	this->m_Selection.clear();
	int n=0;

	std::vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));	

	entries.push_back(entry);

	BOOL Controlled = FALSE;

	if (toCast->GetController() != pPlayer){ toCast->SetController(pPlayer); Controlled = TRUE;}
	for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
	{		
		FreecastCardActionsSelection sel_entry;
		sel_entry.SpellIndex = i;
		sel_entry.AddReductionCost(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);

		std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

		if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
		if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

		for (int j = 0; j < pActionContainer->GetSize(); ++n,++j)
		{
			sel_entry.ActionIndex = j;
				
			this->m_Selection.push_back(sel_entry);

			SelectionEntry entry;	
			entry.dwContext = n;				
			entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

			entries.push_back(entry);
		}		
	}		

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, this, pPlayer, (DWORD)toCast);	
}

void CCounterlashCard::OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
	DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext)
			{
				CCard* pCard = (CCard*)it->dwContext;
				FreeCastSelectionRun(pCard, pSelectionPlayer);
			}
			else
			{
				toCastCard.RemoveAll();
				return;
			}

			return;
		}
	
	return;
}

void CCounterlashCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;			
			int j = (int)it->dwContext;

			if (j == 99999)
			{
				break;
			}
			else
			{
				this->m_Selection[j].PerformAction(toCast);

				toCast->GetCardKeyword()->AddFreecast(TRUE);
				this->m_Selection[j].RemoveReductionCost(toCast);
			}
		}
}*/
//____________________________________________________________________________
//
CHelvaultCard::CHelvaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Helvault"), CardType::_LegendaryArtifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHelvaultCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelvaultCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("7"),
				new AnyCreatureComparer, false));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelvaultCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Hand));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHelvaultCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CHelvaultCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CHelvaultCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHelvaultCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CHelvaultCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CHelvaultCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
	
	pExiled.AddCard(pTarget, CardPlacement::Top);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(pTarget);

	return true;
}

bool CHelvaultCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

void CHelvaultCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//