#include "stdafx.h"
#include "CardDarksteel.h"

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

		DEFINE_CARD(CAEtherSnapCard);
		DEFINE_CARD(CAEtherVialCard);
		DEFINE_CARD(CAgelessEntityCard);
		DEFINE_CARD(CArcaneSpyglassCard);
		DEFINE_CARD(CArcboundBruiserCard);
		DEFINE_CARD(CArcboundCrusherCard);
		DEFINE_CARD(CArcboundFiendCard);
		DEFINE_CARD(CArcboundHybridCard);
		DEFINE_CARD(CArcboundLancerCard);
		DEFINE_CARD(CArcboundOverseerCard);
		DEFINE_CARD(CArcboundRavagerCard);
		DEFINE_CARD(CArcboundReclaimerCard);
		DEFINE_CARD(CArcboundSlithCard);
		DEFINE_CARD(CArcboundStingerCard);
		DEFINE_CARD(CArcboundWorkerCard);
		DEFINE_CARD(CAuriokGlaivemasterCard);
		DEFINE_CARD(CBarbedLightningCard);
		DEFINE_CARD(CBlinkmothNexusCard);
		DEFINE_CARD(CChimericEggCard);
		DEFINE_CARD(CChitteringRatsCard);
		DEFINE_CARD(CChromescaleDrakeCard);
		DEFINE_CARD(CCoretapperCard);
		DEFINE_CARD(CCrazedGoblinCard);
		DEFINE_CARD(CDarksteelBruteCard);
		DEFINE_CARD(CDarksteelCitadelCard);
		DEFINE_CARD(CDarksteelGargoyleCard);
		DEFINE_CARD(CDarksteelPendantCard);
		DEFINE_CARD(CDarksteelReactorCard);
		DEFINE_CARD(CDeathCloudCard);
		DEFINE_CARD(CDrillSkimmerCard);
		DEFINE_CARD(CDroolingOgreCard);
		DEFINE_CARD(CDrossGolemCard);
		DEFINE_CARD(CEaterOfDaysCard);
		DEFINE_CARD(CEchoingCalmCard);
		DEFINE_CARD(CEchoingCourageCard);
		DEFINE_CARD(CEchoingDecayCard);
		DEFINE_CARD(CEchoingRuinCard);
		DEFINE_CARD(CEchoingTruthCard);
		DEFINE_CARD(CEmissaryOfDespairCard);
		DEFINE_CARD(CEmissaryOfHopeCard);
		DEFINE_CARD(CFangrenFirstbornCard);
		DEFINE_CARD(CFlamebreakCard);
		DEFINE_CARD(CFurnaceDragonCard);
		DEFINE_CARD(CGeminiEngineCard);
		DEFINE_CARD(CGenesisChamberCard);
		DEFINE_CARD(CGethsGrimoireCard);
		DEFINE_CARD(CGoblinArchaeologistCard);
		DEFINE_CARD(CGreaterHarvesterCard);
		DEFINE_CARD(CGrimclawBatsCard);
		DEFINE_CARD(CHoverguardObserverCard);
		DEFINE_CARD(CHungerOfTheNimCard);
		DEFINE_CARD(CInfestedRootholdCard);
		DEFINE_CARD(CLastWordCard);
		DEFINE_CARD(CLeoninBattlemageCard);
		DEFINE_CARD(CKarstodermCard);
		DEFINE_CARD(CKrarkClanStokerCard);
		DEFINE_CARD(CMachinateCard);
		DEFINE_CARD(CMagneticFluxCard);
		DEFINE_CARD(CMemnarchCard);
		DEFINE_CARD(CMephiticOozeCard);
		DEFINE_CARD(CMetalFatigueCard);
		DEFINE_CARD(CMirrodinsCoreCard);
		DEFINE_CARD(CMurderousSpoilsCard);
		DEFINE_CARD(CMyrLandshaperCard);
		DEFINE_CARD(CMyrMatrixCard);
		DEFINE_CARD(CMyrMoonvesselCard);
		DEFINE_CARD(CNemesisMaskCard);
		DEFINE_CARD(CNeurokProdigyCard);
		DEFINE_CARD(CNeurokTransmuterCard);
		DEFINE_CARD(CNimAbominationCard);
		DEFINE_CARD(CNourishCard);
		DEFINE_CARD(COxiddaGolemCard);
		DEFINE_CARD(COxidizeCard);
		DEFINE_CARD(CPristineAngelCard);
		DEFINE_CARD(CPsychicOverloadCard);
		DEFINE_CARD(CPteronGhostCard);
		DEFINE_CARD(CPulseOfTheDrossCard);
		DEFINE_CARD(CPulseOfTheFieldsCard);
		DEFINE_CARD(CPulseOfTheForgeCard);
		DEFINE_CARD(CPulseOfTheGridCard);
		DEFINE_CARD(CPulseOfTheTangleCard);
		DEFINE_CARD(CPurgeCard);
		DEFINE_CARD(CQuicksilverBehemothCard);
		DEFINE_CARD(CRazorGolemCard);
		DEFINE_CARD(CReapAndSowCard);
		DEFINE_CARD(CRebukingCeremonyCard);
		DEFINE_CARD(CReshapeCard);
		DEFINE_CARD(CRetractCard);
		DEFINE_CARD(CRitualOfRestorationCard);
		DEFINE_CARD(CRoaringSlagwurmCard);
		DEFINE_CARD(CSavageBeatingCard);
		DEFINE_CARD(CScavengingScarabCard);
		DEFINE_CARD(CScreamsFromWithinCard);
		DEFINE_CARD(CSecondSightCard);
		DEFINE_CARD(CShieldOfKaldraCard);
		DEFINE_CARD(CSkullclampCard);
		DEFINE_CARD(CSlobadGoblinTinkererCard);
		DEFINE_CARD(CSoulscourCard);
		DEFINE_CARD(CSpawningPitCard);
		DEFINE_CARD(CSpectersShroudCard);
		DEFINE_CARD(CSpincrusherCard);
		DEFINE_CARD(CSpireGolemCard);
		DEFINE_CARD(CStandTogetherCard);
		DEFINE_CARD(CSteelshaperApprenticeCard);
		DEFINE_CARD(CSunderingTitanCard);
		DEFINE_CARD(CSwordOfFireAndIceCard);
		DEFINE_CARD(CSwordOfLightAndShadowCard);
		DEFINE_CARD(CSynodArtificerCard);
		DEFINE_CARD(CTangleGolemCard);
		DEFINE_CARD(CTanglewalkerCard);
		DEFINE_CARD(CTearsOfRageCard);
		DEFINE_CARD(CTelJiladOutriderCard);
		DEFINE_CARD(CTelJiladWolfCard);
		DEFINE_CARD(CThoughtDissectorCard);
		DEFINE_CARD(CUnforgeCard);
		DEFINE_CARD(CViridianAcolyteCard);
		DEFINE_CARD(CViridianZealotCard);
		DEFINE_CARD(CVoltaicConstructCard);
		DEFINE_CARD(CVulshokWarBoarCard);
		DEFINE_CARD(CWandOfTheElementsCard);
		DEFINE_CARD(CWireflyHiveCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CNemesisMaskCard::CNemesisMaskCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nemesis Mask"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Lure);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COxidizeCard::COxidizeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Oxidize"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CRebukingCeremonyCard::CRebukingCeremonyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rebuking Ceremony"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CRetractCard::CRetractCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Retract"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRoaringSlagwurmCard::CRoaringSlagwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roaring Slagwurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoulscourCard::CSoulscourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soulscour"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("7") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::Artifact, false)),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSkullclampCard::CSkullclampCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skullclamp"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(-1), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSkullclampCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSkullclampCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetDrawCount(2);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEchoingTruthCard::CEchoingTruthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Echoing Truth"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEchoingTruthCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			ZoneId::Battlefield,
			ZoneId::Hand,
			true, MoveType::Others));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEchoingTruthCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Return target nonland permanent and all other permanents with the same name as that permanent to their owners' hands. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CEchoingTruthCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CEchoingTruthCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CSwordOfFireAndIceCard::CSwordOfFireAndIceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Fire and Ice"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier1);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CAgelessEntityCard::CAgelessEntityCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ageless Entity"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAgelessEntityCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAgelessEntityCard::BeforeResolution1));
	//m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(cpAbility.GetPointer());
}

bool CAgelessEntityCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	triggerContext.nValue1 = 0;

	if (nToLife > nFromLife)
	{
	//	m_pTriggeredAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +GET_INTEGER(nToLife - nFromLife), false));
		triggerContext.nValue1 = GET_INTEGER(nToLife - nFromLife);
			 
		return true;
	}

	return false;
}
bool CAgelessEntityCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), triggerContext.nValue1, false);

	pModifier.ApplyTo(this);
	
	return true;
}
//____________________________________________________________________________
//
CChitteringRatsCard::CChitteringRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chittering Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetToZone(ZoneId::Library); //"discard" on top of the library.

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrazedGoblinCard::CCrazedGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crazed Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CFangrenFirstbornCard::CFangrenFirstbornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fangren Firstborn"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreaterHarvesterCard::CGreaterHarvesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greater Harvester"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(6))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
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
		cpAbility->GetGatherer().SetSubjectCount(2, 2, TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGrimclawBatsCard::CGrimclawBatsCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Grimclaw Bats"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	m_pPumpAbility->AddPayLifeDeltaCost(Life(-1));

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CHoverguardObserverCard::CHoverguardObserverCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hoverguard Observer"), CardType::Creature, CREATURE_TYPE(Drone), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CKrarkClanStokerCard::CKrarkClanStokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krark-Clan Stoker"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CLeoninBattlemageCard::CLeoninBattlemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leonin Battlemage"), CardType::Creature, CREATURE_TYPE2(Cat, Wizard), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());	
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLeoninBattlemageCard::BeforeResolution));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLeoninBattlemageCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CMephiticOozeCard::CMephiticOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mephitic Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("4") BLACK_MANA_TEXT, Power(0), Life(5))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->SetChangePowerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMephiticOozeCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMephiticOozeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CNeurokProdigyCard::CNeurokProdigyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Neurok Prodigy"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNimAbominationCard::CNimAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nim Abomination"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);

	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPteronGhostCard::CPteronGhostCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pteron Ghost"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScavengingScarabCard::CScavengingScarabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scavenging Scarab"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CSteelshaperApprenticeCard::CSteelshaperApprenticeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steelshaper Apprentice"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))

	, m_CardFilter(_T("an Equipment card"), _T("Equipment cards"), new CardTypeComparer(CardType::Equipment, false))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			WHITE_MANA_TEXT,
			&m_CardFilter, 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->AddTapCost();	
	cpAbility->GetCost().AddReturnThisCardCost(this);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSynodArtificerCard::CSynodArtificerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Synod Artificer"), CardType::Creature, CREATURE_TYPE2(Vedalken, Artificer), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE, FALSE,	// Tap, Untap
				new CardTypeComparer(CardType::Artifact, false)));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->AdjustTargetCountWithExtraCostValue();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,	// Tap, Untap
				new CardTypeComparer(CardType::Artifact, false)));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->AdjustTargetCountWithExtraCostValue();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTelJiladWolfCard::CTelJiladWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViridianAcolyteCard::CViridianAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Acolyte"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
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
CViridianZealotCard::CViridianZealotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viridian Zealot"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVulshokWarBoarCard::CVulshokWarBoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vulshok War Boar"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEaterOfDaysCard::CEaterOfDaysCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Eater of Days"), CardType::_ArtifactCreature, CREATURE_TYPE(Leviathan), nID,
		_T("4"), Power(9), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetPlayerEffect(PlayerEffectType::TimeWalk, FALSE, 2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMemnarchCard::CMemnarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Memnarch"), CardType::_LegendaryCreature | CardType::Artifact, CREATURE_TYPE(Wizard), nID,
		_T("7"), Power(4), Life(5))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpAbility->AddCardTypeToSelection(CardType::Artifact, CardType::Null, FALSE, _T("artifact permanent"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMyrLandshaperCard::CMyrLandshaperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Landshaper"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddCardTypeToSelection(CardType::Artifact, CardType::Null, TRUE, _T("artifact permanent"));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNeurokTransmuterCard::CNeurokTransmuterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Neurok Transmuter"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->AddCardTypeToSelection(CardType::Artifact, CardType::Null, TRUE, _T("artifact creature"));

		cpAbility->SetAbilityText(_T("Target creature becomes an artifact in addition to its other types until end of turn. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::Artifact, TRUE, _T("nonartifact, blue creature"));

		cpAbility->SetAbilityText(_T("Until end of turn, target artifact creature becomes blue and isn't an artifact. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMyrMoonvesselCard::CMyrMoonvesselCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Moonvessel"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("1"), Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoltaicConstructCard::CVoltaicConstructCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voltaic Construct"), CardType::_ArtifactCreature, CREATURE_TYPE2(Golem, Construct), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2"),
			FALSE, TRUE,
			new CardTypeComparer(CardType::_ArtifactCreature, true)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlinkmothNexusCard::CBlinkmothNexusCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Blinkmoth Nexus"), nID)
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
				_T("1"),
				_T("Blinkmoth AA"), 64018));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1"),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Blinkmoth), false)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGenesisChamberCard::CGenesisChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Genesis Chamber"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("nontoken creatures")));
	cpAbility->GetTrigger().SetThisIsUntappedOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetCreateTokenOption(TRUE, _T("Myr A"), 2795, 1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGethsGrimoireCard::CGethsGrimoireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Geth's Grimoire"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpectersShroudCard::CSpectersShroudCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Specter's Shroud"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CSwordOfLightAndShadowCard::CSwordOfLightAndShadowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Light and Shadow"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier1);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetSubjectCount(0, 1);
	
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
	}
}
//____________________________________________________________________________
//
CWandOfTheElementsCard::CWandOfTheElementsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wand of the Elements"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Elemental D"), 2796,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Elemental E"), 2797,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Mountains")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarbedLightningCard::CBarbedLightningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Barbed Lightning"), CardType::Instant, nID)
	, m_EntwineCost(_T("2"))
{
	{
		//Barbed Lightning deals 3 damage to target creature.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Barbed Lightning deals 3 damage to target player.
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Entwine: Barbed Lightning deals 3 damage to target creature. Barbed Lightning deals 3 damage to target player.
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, false, 
				FALSE_CARD_COMPARER, true, _T("")));

		cpSpell->GetCost().AddManaCost(m_EntwineCost);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBarbedLightningCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CBarbedLightningCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCreatureCard* pTargetCreature = (CCreatureCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CPlayer* pTargetPlayer = (CPlayer*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();

	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pTargetCreature);
	pModifier.ApplyTo(pTargetPlayer);

	return true;
}

//____________________________________________________________________________
//
CEchoingCalmCard::CEchoingCalmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Echoing Calm"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEchoingCalmCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield,
			ZoneId::Graveyard,
			true, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEchoingCalmCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Destroy target enchantment and all other enchantments with the same name as that enchantment. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CEchoingCalmCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Enchantment, false));
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CEchoingCalmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CMagneticFluxCard::CMagneticFluxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magnetic Flux"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_ArtifactCreature, true),
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMetalFatigueCard::CMetalFatigueCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Metal Fatigue"), CardType::Instant, nID)
{
	counted_ptr<CGlobalTapSpell> cpSpell(
		::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNourishCard::CNourishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Nourish"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Life(+6), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPurgeCard::CPurgeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Purge"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Artifact creatures OR black creatures
}

//____________________________________________________________________________
//
CStandTogetherCard::CStandTogetherCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Stand Together"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(2, 2);

	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

//____________________________________________________________________________
//
CEchoingRuinCard::CEchoingRuinCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Echoing Ruin"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEchoingRuinCard::OnResolutionCompleted))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield,
			ZoneId::Graveyard,
			true, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEchoingRuinCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Destroy target artifact and all other artifacts with the same name as that artifact. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CEchoingRuinCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Artifact, false));
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CEchoingRuinCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CFlamebreakCard::CFlamebreakCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Flamebreak"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,	// Cost
			Life(-3),		// life delta
			new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),	// Affects creatures without flying
			TRUE,	// Affects players
			PreventableType::Preventable,	// Preventable
			DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration)); //No regeneration

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHungerOfTheNimCard::CHungerOfTheNimCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunger of the Nim"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHungerOfTheNimCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CHungerOfTheNimCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue2 = nArtifactCount;

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
CReapAndSowCard::CReapAndSowCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reap and Sow"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CReapAndSowCard::OnResolutionCompleted))
	, m_EntwineCost(_T("1") GREEN_MANA_TEXT)
{
	{
		//Destroy target land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Search your library for a land card, put that card onto the battlefield, then shuffle your library.
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType:: Sorcery,
				_T("3") GREEN_MANA_TEXT, 
				CCardFilter::GetFilter(_T("lands")), 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
}

void CReapAndSowCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost) && bResult)
	{
		CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
			MinimumValue(0), MaximumValue(1),
			GetController(), ZoneId::Library,
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Battlefield, FALSE, CardPlacement::Top, FALSE, FALSE);

		pModifier.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CRitualOfRestorationCard::CRitualOfRestorationCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Ritual of Restoration"), CardType::Sorcery, nID,
		WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CEchoingCourageCard::CEchoingCourageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Echoing Courage"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEchoingCourageCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEchoingCourageCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Target creature and all other creatures with the same name as that creature get +2/+2 until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CEchoingCourageCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CEchoingCourageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CPowerModifier modifier1 = CPowerModifier(Power(+2));
	CLifeModifier modifier2 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(ic));
		if (!pCreature) continue;

		modifier1.ApplyTo(pCreature);
		modifier2.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CEchoingDecayCard::CEchoingDecayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Echoing Decay"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CEchoingDecayCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT,
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEchoingDecayCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpSpell->SetAbilityText(_T("Target creature and all other creatures with the same name as that creature get -2/-2 until end of turn. Casts"));

	AddSpell(cpSpell.GetPointer());
}

bool CEchoingDecayCard::BeforeResolution(CAbilityAction* pAction)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pAction->GetAssociatedCard()));

	return true;
}

void CEchoingDecayCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCountedCardContainer cards;

	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CPowerModifier modifier1 = CPowerModifier(Power(-2));
	CLifeModifier modifier2 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	for (int ic = 0; ic < cards.GetSize(); ++ic)
	{
		CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(ic));
		if (!pCreature) continue;

		modifier1.ApplyTo(pCreature);
		modifier2.ApplyTo(pCreature);
	}
}

//____________________________________________________________________________
//
CLastWordCard::CLastWordCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Last Word"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CMirrodinsCoreCard::CMirrodinsCoreCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mirrodin's Core"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
    {
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
    {
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
    {
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
    }
    {
        counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

        cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

        AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArcaneSpyglassCard::CArcaneSpyglassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arcane Spyglass"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpawningPitCard::CSpawningPitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spawning Pit"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
    
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Spawn"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

	    cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChimericEggCard::CChimericEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chimeric Egg"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Artifact, true)))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T(""),
				_T("Construct AC"), 64023));
        
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCoretapperCard::CCoretapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coretapper"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false), FALSE));
		
		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(
			new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false), FALSE));

		cpAbility->AddSacrificeCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(
			new CCardCounterModifier(CHARGE_COUNTER, +2));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKarstodermCard::CKarstodermCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karstoderm"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 5, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), -1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpincrusherCard::CSpincrusherCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Spincrusher"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("2"), Power(0), Life(2),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	m_pPumpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathCloudCard::CDeathCloudCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death Cloud"), CardType::Sorcery, nID)	
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CDeathCloudCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,	// Cost
			Life(0),		// life delta
			new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),	// Affects creatures without flying
			TRUE,	// Affects players
			PreventableType::Preventable,	// Preventable
			DamageType::NotDealingDamage)); //No regeneration

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		
	AddSpell(cpSpell.GetPointer());

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
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathCloudCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathCloudCard::SetTriggerContext3));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);		

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDeathCloudCard::SetTriggerContext5));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility3 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility3);
	}
}

bool CDeathCloudCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;

	n =  this->GetLastCastingExtraValue();

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CDeathCloudCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	
	n = this->GetLastCastingExtraValue();
	
	m_pTriggeredAbility1->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CDeathCloudCard::SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int n = 0;
	
	n =  this->GetLastCastingExtraValue();
	
	m_pTriggeredAbility3->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

void CDeathCloudCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCount = this->GetLastCastingExtraValue();
	CPlayer* cont = GetController();
	CPlayer* opp = m_pGame->GetNextPlayer(GetController());	
	CLifeModifier* pModifier1 = new CLifeModifier(Life(-nCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier* pModifier2 = new CLifeModifier(Life(-nCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1->ApplyTo(cont);
	pModifier2->ApplyTo(opp);
}

//____________________________________________________________________________
//
CAEtherVialCard::CAEtherVialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Æther Vial"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAEtherVialCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		counted_ptr<CActivatedAbility<CAEtherVialSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CAEtherVialSpell>>(this,
				_T(""), CCardFilter::GetFilter(_T("creatures")), CHARGE_COUNTER));

		cpAbility->AddTapCost();
		AddAbility(cpAbility.GetPointer());
	}	
}
bool CAEtherVialCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());	
	apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount()));

	std::auto_ptr<CCardFilter> apFilter1(CCardFilter::GetFilter(_T("creatures"))->Clone());	
	apFilter1->AddComparer(new ConvertedManaCostComparer<std::greater<int>>(GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount()));

	if (GetController()->IsComputer() && 
		apFilter1->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 
		apFilter->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()))
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	else
		m_pTriggeredAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	
	return TRUE;
}
//____________________________________________________________________________
//
CSlobadGoblinTinkererCard::CSlobadGoblinTinkererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slobad, Goblin Tinkerer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Artificer), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::Artifact, false)));
	
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelGargoyleCard::CDarksteelGargoyleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Darksteel Gargoyle"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("7"), Power(3), Life(3))
{
	GetCardKeyword()->AddIndestructible(FALSE);
}

//____________________________________________________________________________
//
CDarksteelCitadelCard::CDarksteelCitadelCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Darksteel Citadel"), nID, CardType::NonbasicLand | CardType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarksteelBruteCard::CDarksteelBruteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Brute"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("3"),
				_T("Beast AA"), 64015));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarksteelPendantCard::CDarksteelPendantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Pendant"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T("1"),
				1));

		cpAbility->AddTapCost();

		cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Library, CardPlacement::Bottom, CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);
		cpAbility->SetRevealCardsToOthers(
			TRUE,	// reveal cards to others
			TRUE);	// reveal only selected cards

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMyrMatrixCard::CMyrMatrixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Myr Matrix"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Myr), false),	
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
						
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("5"),
				_T("Myr A"), 2795,
				1));
		ATLASSERT(cpAbility);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShieldOfKaldraCard::CShieldOfKaldraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shield of Kaldra"), CardType::_LegendaryArtifact | CardType::Equipment, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new FalseCardComparer));

		CCardFilter* pHelmFilter = new CCardFilter(new CardNameComparer(_T("Helm of Kaldra")));
		CCardFilter* pShieldFilter = new CCardFilter(new CardNameComparer(_T("Shield of Kaldra")));
		CCardFilter* pSwordFilter = new CCardFilter(new CardNameComparer(_T("Sword of Kaldra")));

		pHelmFilter->AddComparer(new CardTypeComparer(CardType::Equipment, false));
		pShieldFilter->AddComparer(new CardTypeComparer(CardType::Equipment, false));
		pSwordFilter->AddComparer(new CardTypeComparer(CardType::Equipment, false));

		cpAbility->GetEnchantmentCardFilter().AddChildFilter(pHelmFilter);
		cpAbility->GetEnchantmentCardFilter().AddChildFilter(pShieldFilter);
		cpAbility->GetEnchantmentCardFilter().AddChildFilter(pSwordFilter);

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod()->GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCardModifier(new CCardKeywordModifier(CardKeyword::Indestructible, true, false));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInfestedRootholdCard::CInfestedRootholdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infested Roothold"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
		
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect H"), 62012, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTelJiladOutriderCard::CTelJiladOutriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Outrider"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CPulseOfTheTangleCard::CPulseOfTheTangleCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Pulse of the Tangle"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast I"), 2794,
				1));

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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_Tokens, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPulseOfTheTangleCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPulseOfTheTangleCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPulseOfTheTangleCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

bool CPulseOfTheTangleCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPulseOfTheGridCard::CPulseOfTheGridCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pulse of the Grid"), CardType::Instant, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(1, FALSE, MoveType::Discard);

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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_Tokens, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPulseOfTheGridCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPulseOfTheGridCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPulseOfTheGridCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Hand);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Hand);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

bool CPulseOfTheGridCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Hand);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Hand);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPulseOfTheDrossCard::CPulseOfTheDrossCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pulse of the Dross"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				3, MoveType::Discard, ZoneId::Null, FALSE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSecondaryAction(1, MoveType::Discard, ZoneId::Graveyard, TRUE, FALSE, new TrueCardComparer, TRUE, FALSE,
									CardPlacement::Top, TRUE);

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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_Tokens, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPulseOfTheDrossCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPulseOfTheDrossCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPulseOfTheDrossCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Hand);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Hand);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

bool CPulseOfTheDrossCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Hand);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Hand);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (CCardFilter::GetFilter(_T("cards"))->IsCardIncluded(pCard))
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPulseOfTheFieldsCard::CPulseOfTheFieldsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pulse of the Fields"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Life(+4), PreventableType::NotPreventable));

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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_Tokens, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPulseOfTheFieldsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPulseOfTheFieldsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPulseOfTheFieldsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	Life nLifeTotalCon = GetController()->GetLife();

	Life nLifeTotalOpp = m_pGame->GetNextPlayer(GetController())->GetLife();

	{
		if (nLifeTotalCon >= nLifeTotalOpp)
			return false;
	}

	return true;
}

bool CPulseOfTheFieldsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	Life nLifeTotalCon = GetController()->GetLife();

	Life nLifeTotalOpp = m_pGame->GetNextPlayer(GetController())->GetLife();

	{
		if (nLifeTotalCon >= nLifeTotalOpp)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CPulseOfTheForgeCard::CPulseOfTheForgeCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Pulse of the Forge"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr< CTargetChgLifeSpell>cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,	// Target player?
				Life(-4),		// Life delta
				PreventableType::Preventable));	// Preventable?

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

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
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_Tokens, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPulseOfTheForgeCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPulseOfTheForgeCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPulseOfTheForgeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	Life nLifeTotalCon = GetController()->GetLife();

	Life nLifeTotalOpp = m_pGame->GetNextPlayer(GetController())->GetLife();

	{
		if (nLifeTotalCon >= nLifeTotalOpp)
			return false;
	}

	return true;
}

bool CPulseOfTheForgeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	Life nLifeTotalCon = GetController()->GetLife();

	Life nLifeTotalOpp = m_pGame->GetNextPlayer(GetController())->GetLife();

	{
		if (nLifeTotalCon >= nLifeTotalOpp)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CArcboundBruiserCard::CArcboundBruiserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Bruiser"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundBruiserCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundBruiserCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundCrusherCard::CArcboundCrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Crusher"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("4"), Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundCrusherCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundCrusherCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundHybridCard::CArcboundHybridCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Arcbound Hybrid"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("4"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundHybridCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundHybridCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundLancerCard::CArcboundLancerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Arcbound Lancer"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("7"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundLancerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundLancerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundRavagerCard::CArcboundRavagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Ravager"), CardType::_ArtifactCreature, CREATURE_TYPE(Beast), nID,
		_T("2"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundRavagerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundRavagerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundReclaimerCard::CArcboundReclaimerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Reclaimer"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundReclaimerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundReclaimerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundSlithCard::CArcboundSlithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Slith"), CardType::_ArtifactCreature, CREATURE_TYPE(Slith), nID,
		_T("2"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundSlithCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
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

bool CArcboundSlithCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundStingerCard::CArcboundStingerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Arcbound Stinger"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("2"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundStingerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundStingerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundWorkerCard::CArcboundWorkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Worker"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("1"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundWorkerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundWorkerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CArcboundOverseerCard::CArcboundOverseerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Overseer"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("8"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 6, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundOverseerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardAbilityNameComparer(_T("Modular ability")));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundOverseerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CQuicksilverBehemothCard::CQuicksilverBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Quicksilver Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") BLUE_MANA_TEXT, Power(4), Life(5))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::EventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CQuicksilverBehemothCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuicksilverBehemothCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Bounce Effect"), 61040, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDrossGolemCard::CDrossGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(2))

	, m_CardFilter(_T("a Swamp"), _T("Swamps"), new CardTypeComparer(CardType::Swamp, false))
{
	GetCreatureKeyword()->AddFear(FALSE);
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COxiddaGolemCard::COxiddaGolemCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Oxidda Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(2))

	, m_CardFilter(_T("a Mountain"), _T("Mountains"), new CardTypeComparer(CardType::Mountain, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRazorGolemCard::CRazorGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razor Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(4))

	, m_CardFilter(_T("a Plains"), _T("Plains"), new CardTypeComparer(CardType::Plains, false))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpireGolemCard::CSpireGolemCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spire Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(2), Life(4))

	, m_CardFilter(_T("an Island"), _T("Islands"), new CardTypeComparer(CardType::Island, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTangleGolemCard::CTangleGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tangle Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(5), Life(4))

	, m_CardFilter(_T("a Forest"), _T("Forests"), new CardTypeComparer(CardType::Forest, false))
{
	counted_ptr<CTriggeredAffinityAbility> cpAbility(
		::CreateObject<CTriggeredAffinityAbility>(this,
			&m_CardFilter));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChromescaleDrakeCard::CChromescaleDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chromescale Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CChromescaleDrakeCard::OnResolutionCompleted))
	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(3);
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
}

void CChromescaleDrakeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLibrary = GetController()->GetZoneById(ZoneId::Library);
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Graveyard);
	CCountedCardContainer revealedCards;
	CCountedCardContainer matchingCards;

	int nRevealCount = 3;
	if (nRevealCount > pLibrary->GetSize())
		nRevealCount = pLibrary->GetSize();

	for (int i = 0; i < nRevealCount; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

		if ((pCard->GetCardType() & CardType::Artifact).Any())
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
			pGrave->AddCard(revealedCards.GetAt(0), GetController(), MoveType::Others, CardPlacement::Top);
		}
		else
		{
			// Order cards

			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				revealedCards.Sort();	// ascending
				pGrave->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Top);
			}
			else
			{
				OrderCardsData orderCardsData;
				orderCardsData.bReadOnly = FALSE;
				orderCardsData.strCaption = _T("Order Revealed Cards");
				orderCardsData.pCardContainer = &revealedCards;

				if (GetController()->GetInterface()->OrderCards(&orderCardsData))
					pGrave->AddCards(revealedCards, GetController(), MoveType::Others, CardPlacement::Top);
			}
		}
	}
}

//____________________________________________________________________________
//
CAEtherSnapCard::CAEtherSnapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Æther Snap"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Token, false),
			ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAEtherSnapCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAEtherSnapCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new TrueCardComparer);

	CZoneCardModifier pModifier0 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCounterMultiplyModifier(0)));
	

	pModifier0.ApplyTo(GetController());
	pModifier0.ApplyTo(m_pGame->GetNextPlayer(GetController()));
	

	return true;
}

//____________________________________________________________________________
//
CEmissaryOfDespairCard::CEmissaryOfDespairCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emissary of Despair"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		//combat damage to controller
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmissaryOfDespairCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//combat damage to opponent
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmissaryOfDespairCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEmissaryOfDespairCard::BeforeResolution1(CEmissaryOfDespairCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pBattlefield->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nArtifactCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CEmissaryOfDespairCard::BeforeResolution2(CEmissaryOfDespairCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pOppBattlefield->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nArtifactCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CEmissaryOfHopeCard::CEmissaryOfHopeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emissary of Hope"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	{
		//combat damage to controller
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmissaryOfHopeCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//combat damage to opponent
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetCombatDamageOnly();
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //change bool "BeforeResolution" for life gain or life lost
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEmissaryOfHopeCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEmissaryOfHopeCard::BeforeResolution1(CEmissaryOfHopeCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pBattlefield->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nArtifactCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CEmissaryOfHopeCard::BeforeResolution2(CEmissaryOfHopeCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pOppBattlefield = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nArtifactCount = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pOppBattlefield->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nArtifactCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CDrillSkimmerCard::CDrillSkimmerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drill-Skimmer"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("4"), Power(2), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));
	cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFurnaceDragonCard::CFurnaceDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Furnace Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))

	, m_CardFilter(_T("artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, false))
{
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				&m_CardFilter));

		AddAbility(cpAbility.GetPointer());
	}
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
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, 
			&CFurnaceDragonCard::SetTriggerContext));
			
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFurnaceDragonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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
CDroolingOgreCard::CDroolingOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Drooling Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		 _T("1") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->GetTriggeredPlayerModifiers().push_back(
		new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuriokGlaivemasterCard::CAuriokGlaivemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Glaivemaster"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CEquipPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CEquipPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1), CreatureKeyword::FirstStrike));		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CReshapeCard::CReshapeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reshape"), CardType::Sorcery, nID)

{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));		

		cpSpell->SetAbilityText(_T("Search your library for an artifact card with converted mana cost X or less. Casts"));
		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReshapeCard::BeforeResolution));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CReshapeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Artifact, false));
	m_CardFilter_temp.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(n));

	CPlayerSearchModifier pModifier = CPlayerSearchModifier(
			GetController(),
			MinimumValue(0),
			MaximumValue(1),
			GetController(),
			ZoneId::Library,
			&m_CardFilter_temp,
			ZoneId::Battlefield,
			FALSE,
			CardPlacement::Top,
			FALSE,
			TRUE);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CPristineAngelCard::CPristineAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pristine Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_cpOListener(VAR_NAME(m_cpOListener), COrientation::Listener::EventCallback(this, &CPristineAngelCard::OnOrientationChanged))
{
	GetOrientation()->AddListener(m_cpOListener.GetPointer());

	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::_ProtectionFromColors);
		cpAbility->SetDisableWhenTapped();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPristineAngelCard::BeforeResolution));
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetAbilityName(_T("untap ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

void CPristineAngelCard::OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{
	if ((fromOrientation & Orientation::Untap).Any() && (toOrientation & Orientation::Tap).Any())
		GetCardKeyword()->RemoveSpecialProtection(FALSE);
	else if ((fromOrientation & Orientation::Tap).Any() && (toOrientation & Orientation::Untap).Any())
		GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

bool CPristineAngelCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CPsychicOverloadCard::CPsychicOverloadCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Overload"), CardType::EnchantPermanent, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CPsychicOverloadCard::OnResolutionCompleted))
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("3") BLUE_MANA_TEXT,
			new TrueCardComparer,
			CardKeyword::NoUntapInUntapPhase));

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
		&CPsychicOverloadCard::CreateAdditionalAbility));
	cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPsychicOverloadCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(pCard,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("artifact cards")));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CPsychicOverloadCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(TRUE);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CTanglewalkerCard::CTanglewalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tanglewalker"), CardType::Creature, CREATURE_TYPE(Dryad), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0), CreatureKeyword::NonBasicWalk));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetAdditionData((DWORD)&m_CardFilter);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnforgeCard::CUnforgeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unforge"), CardType::Instant, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Equipment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnforgeCard::BeforeResolution));
}

bool CUnforgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	if (!(pCard->GetCardType() & CardType::Equipment).Any()) return true;

	for (int i = 0; i < pCard->GetAbilities().GetSize(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbilities().GetAt(i).GetPointer());
		if (!pEquipAbility) continue;

		CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable);
		pModifier->ApplyTo(pEquipAbility->GetEquippedOnCreature());

		break;
	}

	return true;
}

//____________________________________________________________________________
//
CMurderousSpoilsCard::CMurderousSpoilsCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Murderous Spoils"), CardType::Instant, nID,
		_T("5") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMurderousSpoilsCard::BeforeResolution));
}

bool CMurderousSpoilsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EquippedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CScreamsFromWithinCard::CScreamsFromWithinCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Screams from Within"), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(-1), Life(-1))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	// Cards are always put into their owner's graveyard, but Screams from Within's ability looks for the card only in its controller's graveyard.
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelReactorCard::CDarksteelReactorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Reactor"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1, false));
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDarksteelReactorCard::SetTriggerContext));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDarksteelReactorCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (pFromCard == this) && (old < 20) && (n_value >= 20) && ((CString)name == CHARGE_COUNTER);
}


//____________________________________________________________________________
//
CSunderingTitanCard::CSunderingTitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sundering Titan"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("8"), Power(7), Life(10))
		, m_cpSelectionListener1(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingTitanCard::OnSelectionDone1))
		, m_cpSelectionListener2(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingTitanCard::OnSelectionDone2))
		, m_cpSelectionListener3(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingTitanCard::OnSelectionDone3))
		, m_cpSelectionListener4(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingTitanCard::OnSelectionDone4))
		, m_cpSelectionListener5(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CSunderingTitanCard::OnSelectionDone5))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSunderingTitanCard::OnResolutionCompleted))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSunderingTitanCard::BeforeResolution1));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSunderingTitanCard::BeforeResolution2));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunderingTitanCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	int nPlains = 0;
	int nIsland = 0;
	int nSwamp = 0;
	int nMountain = 0;
	int nForest = 0;

	CCardFilter temp;

	pLands.RemoveAll();
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nPlains += CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pZone->GetCardContainer());
		nIsland += CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pZone->GetCardContainer());
		nSwamp += CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pZone->GetCardContainer());
		nMountain += CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pZone->GetCardContainer());
		nForest += CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pZone->GetCardContainer());
	}

	if (nPlains > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Plains, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Plains"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener1.GetPointer(), entries, 1, 1,
				NULL,
		GetController()); 
	}

	if (nIsland > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Island, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Island"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener2.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nSwamp > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Swamp"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener3.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nMountain > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Mountain"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener4.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nForest > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Forest, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Forest"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener5.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	return true;
}

bool CSunderingTitanCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	int nPlains = 0;
	int nIsland = 0;
	int nSwamp = 0;
	int nMountain = 0;
	int nForest = 0;

	CCardFilter temp;

	pLands.RemoveAll();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nPlains += CCardFilter::GetFilter(_T("Plains"))->CountIncluded(pZone->GetCardContainer());
		nIsland += CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pZone->GetCardContainer());
		nSwamp += CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pZone->GetCardContainer());
		nMountain += CCardFilter::GetFilter(_T("Mountains"))->CountIncluded(pZone->GetCardContainer());
		nForest += CCardFilter::GetFilter(_T("Forests"))->CountIncluded(pZone->GetCardContainer());
	}

	if (nPlains > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Plains, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Plains"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener1.GetPointer(), entries, 1, 1,
				NULL,
		GetController()); 
	}

	if (nIsland > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Island, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Island"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener2.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nSwamp > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Swamp, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Swamp"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener3.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nMountain > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Mountain"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener4.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	if (nForest > 0)
	{
		temp.SetComparer(new CardTypeComparer(CardType::Forest, false));
		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pZone->GetSize(); ++i)
			{
				CCard* pCard = pZone->GetAt(i);
				if (temp.IsCardIncluded(pCard))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("select %s for Forest"),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
					
			}
		}
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener5.GetPointer(), entries, 1, 1,
			NULL,
		GetController()); 
	}

	return true;
}

void CSunderingTitanCard::OnSelectionDone1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener1->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!pLands.HasCard(pCard))
				pLands.AddCard(pCard, CardPlacement::Top);
		}
}

void CSunderingTitanCard::OnSelectionDone2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener2->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!pLands.HasCard(pCard))
				pLands.AddCard(pCard, CardPlacement::Top);
		}
}

void CSunderingTitanCard::OnSelectionDone3(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener3->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!pLands.HasCard(pCard))
				pLands.AddCard(pCard, CardPlacement::Top);
		}
}

void CSunderingTitanCard::OnSelectionDone4(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener4->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!pLands.HasCard(pCard))
				pLands.AddCard(pCard, CardPlacement::Top);
		}
}

void CSunderingTitanCard::OnSelectionDone5(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener1->RemoveAllEventSources();
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			if (!pLands.HasCard(pCard))
				pLands.AddCard(pCard, CardPlacement::Top);
		}
}

void CSunderingTitanCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy);
	
	for (int i = 0; i < pLands.GetSize(); ++i)
	{
		CCard* pCard = pLands.GetAt(i);
		pModifier->ApplyTo(pCard);
	}

}

//____________________________________________________________________________
//
CGoblinArchaeologistCard::CGoblinArchaeologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Archaeologist"), CardType::Creature, CREATURE_TYPE2(Goblin, Artificer), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinArchaeologistCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false), FALSE));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinArchaeologistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGoblinArchaeologistCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		pModifier->ApplyTo(this);
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
		CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
		pModifier1->ApplyTo(pTarget);
		CCardOrientationModifier* pModifier2 = new CCardOrientationModifier(false);
		pModifier2->ApplyTo(this);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo((CCard*)this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pTarget);
	}
	return false;
}

void CGoblinArchaeologistCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
				pModifier1->ApplyTo((CCard*)dwContext1);
				CCardOrientationModifier* pModifier2 = new CCardOrientationModifier(false);
				pModifier2->ApplyTo(this);
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CWireflyHiveCard::CWireflyHiveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wirefly Hive"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CWireflyHiveCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
		_T("3")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWireflyHiveCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CWireflyHiveCard::BeforeResolution (CAbilityAction* pAction)
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
		CCardFilter m_CardFilter;
		m_CardFilter.AddComparer(new CardNameComparer(_T("Wirefly")));
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pModifier->ApplyTo(GetGame()->GetPlayer(ip));
		}
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
		CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Wirefly"), 2895, 1);
		pModifier->ApplyTo(pController);
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

void CWireflyHiveCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Wirefly"), 2895, 1);
				pModifier->ApplyTo(pSelectionPlayer);
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
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardNameComparer(_T("Wirefly")));
				CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				{
					pModifier->ApplyTo(GetGame()->GetPlayer(ip));
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				return;
			}
		}
}

//____________________________________________________________________________
//
CSecondSightCard::CSecondSightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Second Sight"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSecondSightCard::OnResolutionCompleted))
	, m_EntwineCost(BLUE_MANA_TEXT)
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				5));

		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpSpell->SetReorder(TRUE, ZoneId::Library);

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				5));

		cpSpell->SetRevealCardsToOthers(FALSE, FALSE);	

		cpSpell->SetReorder(TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}

void CSecondSightCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost) && bResult)
	{
		CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 5, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.SetReorderInformation(true);
		pModifier2.ApplyTo(pAbilityAction->GetController());
	}
}

//____________________________________________________________________________
//
CArcboundFiendCard::CArcboundFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arcbound Fiend"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("6"), Power(0), Life(0))
{
	GetCreatureKeyword()->AddFear(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArcboundFiendCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_ArtifactCreature, true));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->SetAbilityName(_T("Modular ability"));
		cpAbility->SetAbilityText(_T("Modular ability"));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArcboundFiendCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArcboundFiendCard::BeforeResolution1 (CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (IsInplay() && (pTarget != this) && (pTarget->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0) && !GetCardKeyword()->HasCantGetCounters())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -1);
		CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), 1);

		pModifier1.ApplyTo(pTarget);
		pModifier2.ApplyTo(this);
	}

	return true;
}

bool CArcboundFiendCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), + GetLastKnownp11Counters());

	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CThoughtDissectorCard::CThoughtDissectorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Thought Dissector"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThoughtDissectorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CThoughtDissectorCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCards = pAction->GetCostConfigEntry().GetExtraValue();
	
	if (nCards > 0)
	{
		CPlayer* pController = pAction->GetController();
		CPlayer* pTarget = pAction->GetAssociatedPlayer();
	
		int n = 0;
		bool bSearch = true;
		CCard* pFound;
				
		CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);

		for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
		{		
			if (!bSearch)
				break;
			else
			{
				++n;
				if (pLibrary->GetAt(i)->GetCardType().IsArtifact())
				{
					bSearch = false;
					pFound = pLibrary->GetAt(i);
				}
				else if (n == nCards)
					bSearch = false;
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

			pFound->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

			CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
			pModifier3.ApplyTo(this);
		}
		else
		{
			CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier1.SetReorderInformation(true, ZoneId::Graveyard);
		
			pModifier1.ApplyTo(pTarget);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CMachinateCard::CMachinateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Machinate"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMachinateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMachinateCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nSize = CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nSize > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nSize,
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
CSavageBeatingCard::CSavageBeatingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Savage Beating"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSavageBeatingCard::OnResolutionCompleted))
	, m_EntwineCost(_T("1") RED_MANA_TEXT)
{
	{
		//Creatures you control gain double strike until end of turn.
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetCost().AddOptionalManaCost(m_EntwineCost);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpSpell->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSavageBeatingCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetAbilityName(_T("Mode 1"));
		cpSpell->SetAbilityText(_T("Creatures you control gain double strike until end of turn."));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Untap all creatures you control and after this phase, there is an additional combat phase.
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType:: Instant,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSavageBeatingCard::BeforeResolution));
		
		cpSpell->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);
		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSavageBeatingCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetAbilityName(_T("Mode 2"));
		cpSpell->SetAbilityText(_T("Untap all creatures you control and after this phase, there is an additional combat phase."));

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSavageBeatingCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

bool CSavageBeatingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
	pModifier1.ApplyTo(pController);

	CFastCombatModifier pModifier2 = CFastCombatModifier(m_pGame);
	pModifier2.ApplyTo(pController);

	return true;
}

void CSavageBeatingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetLastCastingCostConfigEntry().HasOptionalManaCost(m_EntwineCost) && bResult)
	{
		CPlayer* pController = pAbilityAction->GetController();

		CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));
		pModifier1.ApplyTo(pController);

		CFastCombatModifier pModifier2 = CFastCombatModifier(m_pGame);
		pModifier2.ApplyTo(pController);
	}
}

//____________________________________________________________________________
//
CTearsOfRageCard::CTearsOfRageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tears of Rage"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
			&CTearsOfRageCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTearsOfRageCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

BOOL CTearsOfRageCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2);
}

bool CTearsOfRageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCountedCardContainer pSubjects;

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AttackingCreatureComparer);
	
	int nAttacking = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nAttacking += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nAttacking > 0)
	{
		CPowerModifier pModifier1 = CPowerModifier(Power(+nAttacking));

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsCreature() && ((CCreatureCard*)pCard)->IsAttacking())
			{
				pModifier1.ApplyTo((CCreatureCard*)pCard);
				pSubjects.AddCard(pCard, CardPlacement::Top);
			}
		}
	}

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier2.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CGeminiEngineCard::CGeminiEngineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gemini Engine"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("6"), Power(3), Life(4))
	, m_SubjectSelection(pGame,CSelectionSupport::SelectionCallback(this, &CGeminiEngineCard::OnSubjectSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGeminiEngineCard::BeforeResolution));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());
}

bool CGeminiEngineCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCountedCardContainer pTokens;

	Power nPower;
	Life nToughness;

	if (IsInplay())
	{
		nPower = GetPower();
		nToughness = GetLife();
	}
	else
	{
		Power nPower = GetLastKnownPower();
		Life nToughness = GetLastKnownToughness();
	}

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Twin"), 62047));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62047); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Twin")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(nPower);
		pCreature->SetPrintedToughness(nToughness);		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

		pTokens.AddCard(pCreature, CardPlacement::Top);
	}

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End of Combat Sacrifice Effect"), 61106, &pTokens);
	pModifier2.ApplyTo(pController);

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

void CGeminiEngineCard::OnSubjectSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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