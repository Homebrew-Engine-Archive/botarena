#include "stdafx.h"
#include "CardM11.h"

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
		
		DEFINE_CARD(CAEtherAdeptCard);
		DEFINE_CARD(CAirServantCard);
		DEFINE_CARD(CAjanisMantraCard);
		DEFINE_CARD(CAjanisPridemateCard);
		DEFINE_CARD(CAncientHellkiteCard);
		DEFINE_CARD(CArcRunnerCard);
		DEFINE_CARD(CArmoredCancrixCard);
		DEFINE_CARD(CAssaultGriffinCard);
		DEFINE_CARD(CAuguryOwlCard);
		DEFINE_CARD(CAutumnsVeilCard);
		DEFINE_CARD(CBackToNatureCard);
		DEFINE_CARD(CBaronyVampireCard);
		DEFINE_CARD(CBloodcrazedGoblinCard);
		DEFINE_CARD(CBloodthroneVampireCard);
		DEFINE_CARD(CBloodTitheCard);
		DEFINE_CARD(CBogRaidersCard);
		DEFINE_CARD(CBrindleBoarCard);
		DEFINE_CARD(CBrittleEffigyCard);
		DEFINE_CARD(CCallToMindCard);
		DEFINE_CARD(CCaptivatingVampireCard)
		DEFINE_CARD(CChandrasOutrageCard);
		DEFINE_CARD(CChandrasSpitfireCard);
		DEFINE_CARD(CCloudCrusaderCard);
		DEFINE_CARD(CCombustCard);
		DEFINE_CARD(CConundrumSphinxCard);
		DEFINE_CARD(CCrystalBallCard);
		DEFINE_CARD(CCultivateCard);
		DEFINE_CARD(CCyclopsGladiatorCard);
		DEFINE_CARD(CDarkTutelageCard);
		DEFINE_CARD(CDayOfJudgmentCard);
		DEFINE_CARD(CDemonOfDeathsGateCard);
		DEFINE_CARD(CDestructiveForceCard);
		DEFINE_CARD(CDiminishCard);
		DEFINE_CARD(CDryadsFavorCard);
		DEFINE_CARD(CDuskdaleWurmCard);
		DEFINE_CARD(CEarthServantCard);
		DEFINE_CARD(CElixirOfImmortalityCard);
		DEFINE_CARD(CEmberHaulerCard);
		DEFINE_CARD(CFaunaShamanCard);
		DEFINE_CARD(CFlingCard);
		DEFINE_CARD(CForeseeCard);
		DEFINE_CARD(CFrostTitanCard);
		DEFINE_CARD(CGaeasRevengeCard);
		DEFINE_CARD(CGargoyleSentinelCard);
		DEFINE_CARD(CGarruksCompanionCard);
		DEFINE_CARD(CGarruksPackleaderCard);
		DEFINE_CARD(CGoblinTunnelerCard);
		DEFINE_CARD(CGoldenglowMothCard);
		DEFINE_CARD(CGraveTitanCard);
		DEFINE_CARD(CGreaterBasiliskCard);
		DEFINE_CARD(CHarborSerpentCard);
		DEFINE_CARD(CHoardingDragonCard);
		DEFINE_CARD(CHornetStingCard);
		DEFINE_CARD(CHuntersFeastCard);
		DEFINE_CARD(CInciteCard);
		DEFINE_CARD(CInfernoTitanCard);
		DEFINE_CARD(CInspiredChargeCard);
		DEFINE_CARD(CJacesErasureCard);
		DEFINE_CARD(CJacesIngenuityCard);
		DEFINE_CARD(CJinxedIdolCard);
		DEFINE_CARD(CKnightExemplarCard);
		DEFINE_CARD(CLeylineOfAnticipationCard);
		DEFINE_CARD(CLeylineOfPunishmentCard);
		DEFINE_CARD(CLeylineOfTheVoidCard);
		DEFINE_CARD(CLeylineofSanctityCard);
		DEFINE_CARD(CLeylineOfVitalityCard);
		DEFINE_CARD(CLilianasCaressCard);
		DEFINE_CARD(CLilianasSpecterCard);
		DEFINE_CARD(CManicVandalCard);
		DEFINE_CARD(CMaritimeGuardCard);
		DEFINE_CARD(CMassPolymorphCard);
		DEFINE_CARD(CMerfolkSpyCard);
		DEFINE_CARD(CMightyLeapCard);
		DEFINE_CARD(CMitoticSlimeCard);
		//DEFINE_CARD(CMystifyingMazeCard);
		DEFINE_CARD(CNantukoShadeCard);
		DEFINE_CARD(CNecroticPlagueCard);
		DEFINE_CARD(CNetherHorrorCard);
		DEFINE_CARD(CNightwingShadeCard);
		DEFINE_CARD(CObstinateBalothCard);
		DEFINE_CARD(COverwhelmingStampedeCard);
		DEFINE_CARD(CPhantomBeastCard);
		DEFINE_CARD(CPhylacteryLichCard);
		DEFINE_CARD(CPlummetCard);
		DEFINE_CARD(CPreordainCard);
		DEFINE_CARD(CPrimalCocoonCard);
		DEFINE_CARD(CPrimevalTitanCard);
		DEFINE_CARD(CPyreticRitualCard);
		DEFINE_CARD(CQuagSicknessCard);
		DEFINE_CARD(CReassemblingSkeletonCard);
		DEFINE_CARD(CReverberateCard);
		DEFINE_CARD(CRocEggCard);
		DEFINE_CARD(CRottingLegionCard);
		DEFINE_CARD(CSacredWolfCard);
		DEFINE_CARD(CScrollThiefCard);
		DEFINE_CARD(CSerraAscendantCard);
		DEFINE_CARD(CShivsEmbraceCard);
		DEFINE_CARD(CSorcerersStrongboxCard);
		DEFINE_CARD(CSquadronHawkCard);
		DEFINE_CARD(CStabbingPainCard);
		DEFINE_CARD(CSteelOverseerCard);
		DEFINE_CARD(CStoneGolemCard);
		DEFINE_CARD(CStormtideLeviathanCard);
		DEFINE_CARD(CSunTitanCard);
		DEFINE_CARD(CSwordOfVengeanceCard);
		DEFINE_CARD(CSylvanRangerCard);
		DEFINE_CARD(CTempleBellCard);
		DEFINE_CARD(CThunderStrikeCard);
		DEFINE_CARD(CTimeReversalCard);
		DEFINE_CARD(CTirelessMissionariesCard);
		DEFINE_CARD(CVisceraSeerCard);
		DEFINE_CARD(CVolcanicStrengthCard);
		DEFINE_CARD(CVoltaicKeyCard);
		DEFINE_CARD(CVulshokBerserkerCard);
		DEFINE_CARD(CWallOfVinesCard);
		DEFINE_CARD(CWarlordsAxeCard);
		DEFINE_CARD(CWarPriestOfThuneCard);
		DEFINE_CARD(CWaterServantCard);
		DEFINE_CARD(CYavimayaWurmCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CChandrasOutrageCard::CChandrasOutrageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Chandra's Outrage"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CChandrasOutrageCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CChandrasOutrageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CPlummetCard::CPlummetCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Plummet"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CReassemblingSkeletonCard::CReassemblingSkeletonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reassembling Skeleton"), CardType::Creature, CREATURE_TYPE2(Skeleton, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") BLACK_MANA_TEXT,
			ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->SetGraveyardOnly();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));//To tap this card on resolution.

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuguryOwlCard::CAuguryOwlCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Augury Owl"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	//Scry 3.
	CZoneModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
	pModifier->GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier->GetSelection(0).moveType = MoveType::Others;
	pModifier->AddSelection(MinimumValue(0), MaximumValue(3), // select cards to bootom
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

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAjanisMantraCard::CAjanisMantraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ajani's Mantra"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAjanisPridemateCard::CAjanisPridemateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ajani's Pridemate"), CardType::Creature, CREATURE_TYPE2(Cat, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAjanisPridemateCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAjanisPridemateCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife) return true;

	return false;
}

//____________________________________________________________________________
//
CAssaultGriffinCard::CAssaultGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Assault Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CDiminishCard::CDiminishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diminish"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(0), Life(0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(1));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	CLifeModifier* pLifeModifier = new CLifeModifier;
	pLifeModifier->SetLifeDelta(Life(1));
	pLifeModifier->SetPreventable(PreventableType::NotPreventable);
	pLifeModifier->SetToBase(TRUE);
	pLifeModifier->SetReplacement(TRUE);
	pLifeModifier->SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEmberHaulerCard::CEmberHaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ember Hauler"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGarruksCompanionCard::CGarruksCompanionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Garruk's Companion"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CGarruksPackleaderCard::CGarruksPackleaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Garruk's Packleader"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::greater<int>>(2));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreaterBasiliskCard::CGreaterBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greater Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CHarborSerpentCard::CHarborSerpentCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Harbor Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5),
		CreatureKeyword::Islandwalk)
{	
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CHarborSerpentCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CHarborSerpentCard::CanAttack(BOOL bIncludeTricks)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if ((pCard->GetCardType() & CardType::Island).Any())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if ((pCard->GetCardType() & CardType::Island).Any())
            ++nCount2;
    }

	{
		if ((nCount1 + nCount2) > 4)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
CJacesErasureCard::CJacesErasureCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jace's Erasure"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->SetRevealCount(1);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJacesIngenuityCard::CJacesIngenuityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jace's Ingenuity"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLilianasCaressCard::CLilianasCaressCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Liliana's Caress"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLilianasSpecterCard::CLilianasSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Liliana's Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNightwingShadeCard::CNightwingShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Nightwing Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CNetherHorrorCard::CNetherHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nether Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(2))
{
}

//____________________________________________________________________________
//
CPreordainCard::CPreordainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Preordain"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CPreordainCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			2)); // Get 3 cards

	cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(2), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpSpell->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CPreordainCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CSacredWolfCard::CSacredWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sacred Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CTirelessMissionariesCard::CTirelessMissionariesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tireless Missionaries"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVolcanicStrengthCard::CVolcanicStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Volcanic Strength"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
CWallOfVinesCard::CWallOfVinesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Vines"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CYavimayaWurmCard::CYavimayaWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CAncientHellkiteCard::CAncientHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ancient Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));

	cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CAncientHellkiteCard::CanPlay)));
	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CAncientHellkiteCard::CanPlay(BOOL bIncludeTricks)
{
	return (IsAttacking() == TRUE);
}

//____________________________________________________________________________
//
CSunTitanCard::CSunTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sun Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

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
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAEtherAdeptCard::CAEtherAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Æther Adept"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAirServantCard::CAirServantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Air Servant"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2") BLUE_MANA_TEXT,
			TRUE, FALSE,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinTunnelerCard::CGoblinTunnelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Tunneler"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CreaturePowerComparer<std::less<int>>(3)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCloudCrusaderCard::CCloudCrusaderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud Crusader"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CMightyLeapCard::CMightyLeapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mighty Leap"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+2), Life(+2), 
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWaterServantCard::CWaterServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Water Servant"), CardType::Creature, CREATURE_TYPE(Elemental), nID, 
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+1), Life(-1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(-1), Life(+1), CreatureKeyword::Null));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSylvanRangerCard::CSylvanRangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Ranger"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBaronyVampireCard::CBaronyVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barony Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CBloodTitheCard::CBloodTitheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blood Tithe"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT));

	cpSpell->AddAbilityTag(AbilityTag::LifeLost);
	cpSpell->AddAbilityTag(AbilityTag::LifeGain);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBloodTitheCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBloodTitheCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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
CStabbingPainCard::CStabbingPainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stabbing Pain"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CArcRunnerCard::CArcRunnerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Arc Runner"), CardType::Creature, CREATURE_TYPE2(Elemental, Ox), nID,
		_T("2") RED_MANA_TEXT, Power(5), Life(1))
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

//____________________________________________________________________________
//
CGoldenglowMothCard::CGoldenglowMothCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Goldenglow Moth"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		WHITE_MANA_TEXT, Power(0), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::BlockEventCallback,
									&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlingCard::CFlingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fling"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeSpell2> cpSpell(
		::CreateObject<CTargetChgLifeSpell2>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			CCardFilter::GetFilter(_T("creatures")),
			PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpSpell);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCrystalBallCard::CCrystalBallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crystal Ball"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpellEx>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpellEx>>(this,
			_T("1"),
			2)); // Get 3 cards

	cpAbility->AddTapCost();

	cpAbility->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpAbility->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpAbility->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpAbility->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(2), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpAbility->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightExemplarCard::CKnightExemplarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight Exemplar"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Knight), false),
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTimeReversalCard::CTimeReversalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Reversal"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 7, 7));

	cpSpell->SetMergeGraveyard(TRUE);
	cpSpell->SetMergeHand(TRUE);

	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBackToNatureCard::CBackToNatureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Back to Nature"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGargoyleSentinelCard::CGargoyleSentinelCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Gargoyle Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("3"), Power(3), Life(3),
		_T("3"), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Defender);
	m_pPumpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CObstinateBalothCard::CObstinateBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Obstinate Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
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
}
	void CObstinateBalothCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Hand) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) && (moveType == MoveType::Discard ) && (pByPlayer == m_pGame->GetNextPlayer(GetController())))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Battlefield);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSquadronHawkCard::CSquadronHawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Squadron Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Squadron Hawk")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteelOverseerCard::CSteelOverseerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steel Overseer"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSteelOverseerCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
		::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
			_T(""),
			new CardTypeComparer(CardType::_ArtifactCreature, true),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each artifact creature you control. Activates"));

	AddAbility(cpAbility.GetPointer());
}

void CSteelOverseerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pOppCard = pBattle->GetAt(i);
		if ((pOppCard->GetCardType().IsCreature()) && (pOppCard->GetCardType().IsArtifact()))
			pModifier.ApplyTo(pOppCard);
	}
}

//____________________________________________________________________________
//
CBloodcrazedGoblinCard::CBloodcrazedGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodcrazed Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this, &CBloodcrazedGoblinCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CBloodcrazedGoblinCard::CanAttack(BOOL bIncludeTricks)
{
	return GetGame()->GetNextPlayer(GetController())->GetDamageTakenThisTurn() > Life(0);
}

//____________________________________________________________________________
//
CGaeasRevengeCard::CGaeasRevengeCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Gaea's Revenge"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(5))
	, m_CardFilter(new CardTypeComparer(CardType::Green, false))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	GetCardKeyword()->AddShroud(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CGraveTitanCard::CGraveTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grave Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie"), 2724, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie"), 2724, 2);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrimevalTitanCard::CPrimevalTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primeval Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);
		cpAbility->SetTapped(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);
		cpAbility->SetTapped(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRocEggCard::CRocEggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roc Egg"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Bird D"), 2873, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CScrollThiefCard::CScrollThiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scroll Thief"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarPriestOfThuneCard::CWarPriestOfThuneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("War Priest of Thune"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimalCocoonCard::CPrimalCocoonCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Primal Cocoon"), CardType::EnchantCreature, nID,
		GREEN_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalCocoonCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlocked, 
								CWhenAttackedBlocked::EventCallback, 
								&CWhenAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimalCocoonCard::SetTriggerContext2));
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPrimalCocoonCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (m_pEnchantSpell->GetEnchantedOnCard() != NULL);
}

bool CPrimalCocoonCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCreatureCard* pCreature) const
{
	return (m_pEnchantSpell->GetEnchantedOnCard() == pCreature);
}

//____________________________________________________________________________
//
CMitoticSlimeCard::CMitoticSlimeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mitotic Slime"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Ooze B"), 2874, 2);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCombustCard::CCombustCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Combust"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-5),
		PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Blue, false));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CDemonOfDeathsGateCard::CDemonOfDeathsGateCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Demon of Death's Gate"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("black creatures")));
		cpSpell->AddPayLifeDeltaCost(Life(-6));
		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDemonOfDeathsGateCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CDemonOfDeathsGateCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CPyreticRitualCard::CPyreticRitualCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pyretic Ritual"), CardType::Instant, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Instant,					
			_T("1") RED_MANA_TEXT,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPhantomBeastCard::CPhantomBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Beast"), CardType::Creature, CREATURE_TYPE2(Illusion, Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStoneGolemCard::CStoneGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stone Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CTempleBellCard::CTempleBellCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Temple Bell"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGlobalDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalDrawCardSpell>>(this,
			_T(""), 1, 1));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Each player draws a card. Activates"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFaunaShamanCard::CFaunaShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fauna Shaman"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures")),
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVisceraSeerCard::CVisceraSeerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viscera Seer"), CardType::Creature, CREATURE_TYPE2(Vampire, Wizard), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpellEx>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpellEx>>(this,
			_T(""),
			1)); // Get 3 cards

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpAbility->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpAbility->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpAbility->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpAbility->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElixirOfImmortalityCard::CElixirOfImmortalityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elixir of Immortality"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("2"),
			Life(+5), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CElixirOfImmortalityCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CElixirOfImmortalityCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetOriginatingCard(); //=Source card

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others);

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)));

	pModifier.ApplyTo(pCard);
	pModifier1.ApplyTo(GetController());
	pCard->GetController()->GetZoneById(ZoneId::Library)->Shuffle(); //if you don't own this card
	GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CDarkTutelageCard::CDarkTutelageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dark Tutelage"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDarkTutelageCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDarkTutelageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
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
CSerraAscendantCard::CSerraAscendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serra Ascendant"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddLifelink(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+5), Life(+5)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckLife();
		cpAbility->SetConditionValue(30);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVoltaicKeyCard::CVoltaicKeyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Voltaic Key"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("1"),
			FALSE, TRUE,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNantukoShadeCard::CNantukoShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Nantuko Shade"), CardType::Creature, CREATURE_TYPE2(Insect, Shade), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
}

//____________________________________________________________________________
//
CBrittleEffigyCard::CBrittleEffigyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Brittle Effigy"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("4"),
			new CardTypeComparer(CardType::Creature, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
	cpAbility->AddTapCost();
	cpAbility->AddExileCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEarthServantCard::CEarthServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earth Servant"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false)));

	cpAbility->SetChangeToughnessOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornetStingCard::CHornetStingCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hornet Sting"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CQuagSicknessCard::CQuagSicknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Quag Sickness"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CQuagSicknessCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CQuagSicknessCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CQuagSicknessCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->SetPowerMultiplier(Power(-1));
	cpEnchantAbility->SetToughnessMultiplier(Life(-1));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CQuagSicknessCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CSwordOfVengeanceCard::CSwordOfVengeanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Vengeance"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
	pModifier1->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	CCreatureKeywordModifier* pModifier3 = new CCreatureKeywordModifier;
	pModifier3->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier3->GetModifier().SetOneTurnOnly(FALSE);
	
	cpAbility->AddCreatureModifier(pModifier);
	cpAbility->AddCreatureModifier(pModifier1);
	cpAbility->AddCreatureModifier(pModifier2);
	cpAbility->AddCreatureModifier(pModifier3);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCallToMindCard::CCallToMindCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Call to Mind"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Sorcery | CardType::Instant, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CDestructiveForceCard::CDestructiveForceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Destructive Force"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			_T("5") RED_MANA_TEXT RED_MANA_TEXT,
			Life(-5),
			new CardTypeComparer(CardType::Creature, false), PreventableType::Preventable,
			5,
			new CardTypeComparer(CardType::_Land, false), DamageType::SpellDamage | DamageType::NonCombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInspiredChargeCard::CInspiredChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Inspired Charge"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
//"Mystifying Maze\n\nLand\nM11,R\n{T}: Add {1} to your mana pool.\r{4}, {T}: Exile target attacking creature an opponent controls. At the beginning of the next end step, return it to the battlefield tapped under its owner's control."
//Crashes in opponent's turn before you could get use of Mystifying Maze's second ability for unknown reasons.
//CMystifyingMazeCard::CMystifyingMazeCard(CGame* pGame, UINT nID)
//	: CNonbasicLandCard(pGame, _T("Mystifying Maze"), nID)
//
//    , m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
//			&CMystifyingMazeCard::OnResolutionCompleted1))
//{
//	{
//		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
//			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));
//
//		cpNonbasicLandManaAbility->AddTapCost();
//
//		AddAbility(cpNonbasicLandManaAbility.GetPointer());
//	}
//	{
//		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
//			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
//				_T("4"),
//				new AttackingCreatureComparer,
//				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));
//
//		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
//
//		cpAbility->AddTapCost();
//
//		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//void CMystifyingMazeCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
//{
//	CCard* target = pAbilityAction->GetAssociatedCard();
//	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
//	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
//	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());
//
//	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();
//
//	m_CardFlagModifier1.ApplyTo(target);
//
//	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
//	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());
//
//	//CCardFilter m_CardFilter_temp;
//	m_CardFilter_temp.SetComparer(new TrueCardComparer);
//	m_CardFilter_temp.AddComparer(pComparer);
//
//	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
//		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others)));
//
//	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
//		GetGame() , pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
//		CScheduledPlayerModifier::Operation::ApplyToLater);
//
//	CCardOrientationModifier* pModifier3 = new CCardOrientationModifier(TRUE);
//
//	pModifier2->ApplyTo(target->GetOwner());
//	pModifier3->ApplyTo(target);
//}
//
////____________________________________________________________________________
////
CManicVandalCard::CManicVandalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Manic Vandal"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarlordsAxeCard::CWarlordsAxeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Warlord's Axe"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArmoredCancrixCard::CArmoredCancrixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Cancrix"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(5))
{
}

//____________________________________________________________________________
//
CMaritimeGuardCard::CMaritimeGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maritime Guard"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CRottingLegionCard::CRottingLegionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rotting Legion"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(5))
{
	SetIntoPlayTapped();
}

//____________________________________________________________________________
//
CInciteCard::CInciteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Incite"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThunderStrikeCard::CThunderStrikeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Thunder Strike"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CBrindleBoarCard::CBrindleBoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brindle Boar"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+4), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDryadsFavorCard::CDryadsFavorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dryad's Favor"), nID,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CHuntersFeastCard::CHuntersFeastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Hunters' Feast"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") GREEN_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(+6), PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
}

//____________________________________________________________________________
//
CDayOfJudgmentCard::CDayOfJudgmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Day of Judgment"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBloodthroneVampireCard::CBloodthroneVampireCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Bloodthrone Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CBogRaidersCard::CBogRaidersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Bog Raiders"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CVulshokBerserkerCard::CVulshokBerserkerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Vulshok Berserker"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CDuskdaleWurmCard::CDuskdaleWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Duskdale Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CForeseeCard::CForeseeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Foresee"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CForeseeCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpellEx> cpSpell(
		::CreateObject<CDrawCardSpellEx>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			4)); // Get 3 cards

	cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

	// and 1 to the top of library, ...
	cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(4), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	// and finally reorder the last one to the bottom of library
	cpSpell->GetZoneModifier().SetReorderInformation(
		true, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Top);
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CForeseeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CLeylineOfPunishmentCard::CLeylineOfPunishmentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Punishment"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantPreventDamage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantGainLife));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeylineOfTheVoidCard::CLeylineOfTheVoidCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of the Void"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
		PlayerEffectType::ExileInsteadGraveyard));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeylineOfVitalityCard::CLeylineOfVitalityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Vitality"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+1)));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLeylineOfAnticipationCard::CLeylineOfAnticipationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Anticipation"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//_____________________________________________________________________________
//
CLeylineofSanctityCard::CLeylineofSanctityCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Leyline of Sanctity"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargetedByOpponentsSpells));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantBeTargetedByOpponentsAbilities));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
	}
}

//_____________________________________________________________________________
//
CStormtideLeviathanCard::CStormtideLeviathanCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Stormtide Leviathan"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(8), Life(8),
		CreatureKeyword::Islandwalk)
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				CardType::Island, CardType::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CStormtideLeviathanCard::CreateAbility)));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying | CreatureKeyword::Islandwalk, false));

		counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
			::CreateObject<CCanBeAttackedByEnchantment>(this,
				&m_CardFilter));

		cpAbility->SetAffectPlayers();

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CStormtideLeviathanCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLUE_MANA_TEXT));		
	ATLASSERT(cpBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
}

//____________________________________________________________________________
//
CCultivateCard::CCultivateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cultivate"), CardType::Sorcery, nID)
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
CPhylacteryLichCard::CPhylacteryLichCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phylactery Lich"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
	, m_CardFilter(new CardCounterComparer<std::greater<int>>(PHYLACTERY_COUNTER, 0))
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhylacteryLichCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(PHYLACTERY_COUNTER, +1));
		
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhylacteryLichCard::SetTriggerContext2));
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetAbilityName(_T("Sacrifice Phylactery Lich"));
		AddAbility(cpAbility.GetPointer());
	}
	{	
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhylacteryLichCard::SetTriggerContext1));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));	

		cpAbility->SetAbilityName(_T("Sacrifice Phylactery Lich"));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhylacteryLichCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	CStack& stack = GetGame()->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (!pStackAction->IsSpell() && pStackAction->GetAbility()->GetAbilityName() == _T("Sacrifice Phylactery Lich"))
			return false;
	}

	return (old =! 0) && (n_value == 0) && ((CString)name == PHYLACTERY_COUNTER) 
		&& m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0;
}

bool CPhylacteryLichCard::SetTriggerContext3(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0)
		return true;

	CSpecialEffectModifier modifier = CSpecialEffectModifier(this, 1);
	modifier.ApplyTo(this);

	return false;
}

bool CPhylacteryLichCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CStack& stack = GetGame()->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (!pStackAction->IsSpell() && pStackAction->GetAbility()->GetAbilityName() == _T("Sacrifice Phylactery Lich"))
			return false;
	}

	return (m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0);
}

//____________________________________________________________________________
//
CInfernoTitanCard::CInfernoTitanCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Inferno Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6),
		RED_MANA_TEXT, Power(+1), Life(0))
{
	{
		typedef
		TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	//cpAbility->GetTargeting().SetSubjectCount(1,3);
	cpAbility->GetTargeting().SetDistributeValues();
	cpAbility->SetValueToDistribute(-3);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(3));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	//cpAbility->GetTargeting().SetSubjectCount(1,3);
	cpAbility->GetTargeting().SetDistributeValues();
	cpAbility->SetValueToDistribute(-3);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrostTitanCard::CFrostTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frost Titan"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CFrostTitanCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAllCounterSpellAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		
		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().AddManaCost(CManaCost::Color::Generic, 2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrostTitanCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFrostTitanCard::SetTriggerContext(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	CStack& stack = m_pGame->GetStack();
	if (stack.GetStackSize()>0) triggerContext.m_pStackAction = stack.GetTopAction(); else  triggerContext.m_pStackAction = NULL;
	triggerContext.m_pTargetedCard = pToCard;
	return (byPlayer == m_pGame->GetNextPlayer(GetController()));
}

void CFrostTitanCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	pModifier->ApplyTo(pAbilityAction->GetAssociatedCard()); // Last known controller should be used here
}

//____________________________________________________________________________
//
COverwhelmingStampedeCard::COverwhelmingStampedeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Overwhelming Stampede"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpSpell->SetAffectControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COverwhelmingStampedeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool COverwhelmingStampedeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int p = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pContCard2 = pInplay->GetAt(i);
		if (pContCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature2 = (CCreatureCard*)pContCard2;
			if (GET_INTEGER(pContCreature2->GetLastKnownPower()) > p)
			p = GET_INTEGER(pContCreature2->GetLastKnownPower());
		}
	}

	if (p > 0)
		{				
			CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(p), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(p), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			return true;
		}

	return true;
}

//____________________________________________________________________________
//
CJinxedIdolCard::CJinxedIdolCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jinxed Idol"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		typedef	TTriggeredAbility<CTriggeredModifyLifeAbility, CWhenNodeChanged>
			TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		// To set the damage to the player who triggered the Jinxed Idol, not the controller at resolution 
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE));

		cpAbility->GetCost().AddSacrificeCardCost(
			1, CCardFilter::GetFilter(_T("creatures")));

		// CTransferControlModifier(pGame, pSentCard, pSenderCard)
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(
			new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShivsEmbraceCard::CShivsEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Shiv's Embrace"), nID, 
		_T("2") RED_MANA_TEXT RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CShivsEmbraceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CShivsEmbraceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChandrasSpitfireCard::CChandrasSpitfireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chandra's Spitfire"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenDamageDealt, 
				CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetNonCombatDamageOnly(TRUE);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecroticPlagueCard::CNecroticPlagueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Necrotic Plague"), CardType::EnchantCreature, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CNecroticPlagueCard::OnResolutionCompleted))
{
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CNecroticPlagueCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));
		ATLASSERT(cpSpell);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));
		ATLASSERT(cpAbility);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CNecroticPlagueCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pEnchantedCard, NodeId::UpkeepStep));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CNecroticPlagueCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
	modifier.ApplyTo(this);

	CCard* pCard = pAbilityAction->GetAssociatedCard();

	for (int i = 0; i < this->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(this->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(pCard, GetController(), this->GetSpells().GetAt(i)->GetActionValue());
	}
}

//____________________________________________________________________________
//
CCaptivatingVampireCard::CCaptivatingVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Captivating Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Vampire"), _T("Vampires"), new CreatureTypeComparer(CREATURE_TYPE(Vampire), false))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(
			new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetEnchantmentCardFilter().SetThisCardsControllerOnly(this);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetCost().AddTapCardCost(5, &m_CardFilter);
		cpAbility->GetTargetModifier().CCreatureModifiers::Add(new CCreatureTypeModifier(SingleCreatureType::Vampire, true));
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReverberateCard::CReverberateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reverberate"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetCopyCastSpell> cpSpell(
			::CreateObject<CTargetCopyCastSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CSorcerersStrongboxCard::CSorcerersStrongboxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sorcerer's Strongbox"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSorcerersStrongboxCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSorcerersStrongboxCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CSorcerersStrongboxCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
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
		CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
		pModifier1->ApplyTo(this);
		CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
		pModifier2->ApplyTo(pController);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CSorcerersStrongboxCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier1->ApplyTo(this);
				CDrawCardModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));
				pModifier2->ApplyTo(pSelectionPlayer);
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
CCyclopsGladiatorCard::CCyclopsGladiatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cyclops Gladiator"), CardType::Creature, CREATURE_TYPE2(Cyclops, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))

{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCyclopsGladiatorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCyclopsGladiatorCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	int nPower1 = GetLastKnownPower();
	CLifeModifier pModifier1 = CLifeModifier(Life(-nPower1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	pModifier1.ApplyTo(pTarget);

	int nPower2 = pTarget->GetLastKnownPower();
	CLifeModifier pModifier2 = CLifeModifier(Life(-nPower2), pTarget, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	pModifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CConundrumSphinxCard::CConundrumSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Conundrum Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CConundrumSphinxCard::OnNameSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConundrumSphinxCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CConundrumSphinxCard::BeforeResolution(CAbilityAction* pAction)
{
	pNamedCards.RemoveAll();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	NameCard(pActivePlayerID);
	return true;
}

void CConundrumSphinxCard::NameCard(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	int nZoneCount = pPlayer->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pPlayer->GetZone(nZone);
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)PlayerID);
}

void CConundrumSphinxCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				Advance(dwContext1);

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
			
				pNamedCards.AddCard(pSelected, CardPlacement::Top);

				Advance(dwContext1);

				return;
			}
		}
}

void CConundrumSphinxCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		NameCard(NextPlayer);
	else
	{
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			pModifier1.ApplyTo(GetGame()->GetPlayer(ip));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			bool bGuessedRight = false;
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetTopCard();
			for (int i = 0; i < pNamedCards.GetSize(); ++i)
				if ((pNamedCards.GetAt(i)->GetController() == pPlayer) && (pNamedCards.GetAt(i)->GetPrintedCardName() == pCard->GetPrintedCardName()))
				{
					bGuessedRight = true;
				}

			if (bGuessedRight)
			{
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pPlayer);
				pModifier2.ApplyTo(pCard);
			}
			else
				pCard->Move(pPlayer->GetZoneById(ZoneId::Library), pPlayer, MoveType::Others, CardPlacement::Bottom);
		}
	}
}


//____________________________________________________________________________
//
CMassPolymorphCard::CMassPolymorphCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mass Polymorph"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("5") BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMassPolymorphCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMassPolymorphCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nCreatures > 0)
	{
		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController)));

		pModifier1.ApplyTo(pController);
	
		int n = 0;
		int nCreaturesFound = 0;
		bool bSearch = true;
		CCountedCardContainer pFound;
		pFound.RemoveAll();
				
		CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

		for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
		{		
			if (!bSearch)
				break;
			else
			{
				++n;
				if (pLibrary->GetAt(i)->GetCardType().IsCreature())
				{
					pFound.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
					++nCreaturesFound;
					if (nCreaturesFound >= nCreatures)
						bSearch = false;
				}
			}
		}

		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new AnyCreatureComparer);
	
		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier2.AddSelection(MinimumValue(nCreaturesFound), MaximumValue(nCreaturesFound), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				&m_CardFilter, // any cards
				ZoneId::Battlefield, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
		pModifier2.ApplyTo(pController);
		pLibrary->Shuffle();
	}
	return true;
}

//____________________________________________________________________________
//
CHoardingDragonCard::CHoardingDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hoarding Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
	_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CHoardingDragonCard::OnZoneChanged))
	, m_Selection1(pGame, CSelectionSupport::SelectionCallback(this, &CHoardingDragonCard::OnSelected1))
	, m_Selection2(pGame, CSelectionSupport::SelectionCallback(this, &CHoardingDragonCard::OnSelected2))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHoardingDragonCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHoardingDragonCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHoardingDragonCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHoardingDragonCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHoardingDragonCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CHoardingDragonCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CHoardingDragonCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CHoardingDragonCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Search your library for an artifact card"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Don't search"));

		entries.push_back(selectionEntry);
	}
	m_Selection1.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

bool CHoardingDragonCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CHoardingDragonCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (pExiled.GetAt(0)->GetOwner() == pController)
				selectionEntry.strText.Format(_T("Put %s into your hand"), pCard->GetCardName(TRUE));
			else
				selectionEntry.strText.Format(_T("Put %s into %s's hand"), pCard->GetCardName(TRUE), pExiled.GetAt(0)->GetOwner()->GetPlayerName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("Leave %s in exile"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_Selection2.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pCard);
	}
	
	return true;
}

void CHoardingDragonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

void CHoardingDragonCard::OnSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s searches his library"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCountedCardContainer SelectedCards;
				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(1),
					GetController(), ZoneId::Library,
					CCardFilter::GetFilter(_T("artifact cards")), 
					ZoneId::Exile, TRUE, CardPlacement::Top,
					FALSE, FALSE, FALSE,
					&SelectedCards);
				pModifier.ApplyTo(pSelectionPlayer);

				if (SelectedCards.GetSize() > 0)
					pExiled.AddCard(SelectedCards.GetAt(0), CardPlacement::Top);
	
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

void CHoardingDragonCard::OnSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (pExiled.GetAt(0)->GetOwner() == pSelectionPlayer)
						strMessage.Format(_T("%s puts %s in his hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					else
						strMessage.Format(_T("%s puts %s in %s's hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier.ApplyTo(pCard);
	
				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s leaves %s in exile"), pSelectionPlayer->GetPlayerName(), ((CCard*)dwContext1)->GetCardName(TRUE));
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
CMerfolkSpyCard::CMerfolkSpyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Spy"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Islandwalk, FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMerfolkSpyCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMerfolkSpyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();

	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);

		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pPlayer->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//
CAutumnsVeilCard::CAutumnsVeilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Autumn's Veil"), CardType::Instant, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue | CardType::Black, false));

	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT));

	CPlayerEffectModifier* pModifier1 = new CPlayerEffectModifier(PlayerEffectType::SpellsCantBeCounteredBySpells, reinterpret_cast<int>(&m_CardFilter), TRUE);	
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);
	pModifier1->LinkPlayerModifier(pModifier2);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier1);		

	CPlayerEffectModifier* pModifier3 = new CPlayerEffectModifier(PlayerEffectType::CreaturesCantBeTargetedBySpells, reinterpret_cast<int>(&m_CardFilter), TRUE);	
	CScheduledPlayerModifier* pModifier4 = new CScheduledPlayerModifier(
		GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::RemoveFromLater);
	pModifier3->LinkPlayerModifier(pModifier4);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);		

	AddSpell(cpSpell.GetPointer());
}
