#include "stdafx.h"
#include "CardExodus.h"

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

		DEFINE_CARD(CAllayCard);
		DEFINE_CARD(CAvengingDruidCard);
		DEFINE_CARD(CBequeathalCard);
		DEFINE_CARD(CCarnophageCard);
		DEFINE_CARD(CCartographerCard);
		DEFINE_CARD(CCataclysmCard);
		DEFINE_CARD(CCatBurglarCard);
		DEFINE_CARD(CCinderCrawlerCard);
		DEFINE_CARD(CCityOfTraitorsCard);
		DEFINE_CARD(CConvalescenceCard);
		DEFINE_CARD(CCullingTheWeakCard);
		DEFINE_CARD(CCursedFleshCard);
		DEFINE_CARD(CDauthiCutthroatCard);
		DEFINE_CARD(CDauthiJackalCard);
		DEFINE_CARD(CDauthiWarlordCard);
		DEFINE_CARD(CDeathsDuetCard);
		DEFINE_CARD(CDizzyingGazeCard);
		DEFINE_CARD(CElvenPalisadeCard);
		DEFINE_CARD(CEntropicSpecterCard);
		DEFINE_CARD(CEphemeronCard);
		DEFINE_CARD(CErraticPortalCard);
		DEFINE_CARD(CErtaiWizardAdeptCard);
		DEFINE_CARD(CForbidCard);
		DEFINE_CARD(CFurnaceBroodCard);
		DEFINE_CARD(CGrollubCard);
		DEFINE_CARD(CHatredCard);
		DEFINE_CARD(CJackalopeHerdCard);
		DEFINE_CARD(CKeeperOfTheBeastsCard);
		DEFINE_CARD(CKeeperOfTheMindCard);
		DEFINE_CARD(CKillerWhaleCard);
		DEFINE_CARD(CManabondCard);
		DEFINE_CARD(CManiacalRageCard);
		DEFINE_CARD(CMedicineBagCard);
		DEFINE_CARD(CMindMaggotsCard);
		DEFINE_CARD(CMindlessAutomatonCard);
		DEFINE_CARD(CMindOverMatterCard);
		DEFINE_CARD(CMirozelCard);
		DEFINE_CARD(CNullBroochCard);
		DEFINE_CARD(COathOfDruidsCard);
		DEFINE_CARD(COathOfGhoulsCard);
		DEFINE_CARD(COathOfLiegesCard);
		DEFINE_CARD(COathOfMagesCard);
		DEFINE_CARD(COathOfScholarsCard);
		DEFINE_CARD(COnslaughtCard);
		DEFINE_CARD(CPandemoniumCard);
		DEFINE_CARD(CParoxysmCard);
		DEFINE_CARD(CPegasusStampedeCard);
		DEFINE_CARD(CPitSpawnCard);
		DEFINE_CARD(CPlaguebearerCard);
		DEFINE_CARD(CPlatedRootwallaCard);
		DEFINE_CARD(CPredatoryHungerCard);
		DEFINE_CARD(CPriceOfProgressCard);
		DEFINE_CARD(CPygmyTrollCard);
		DEFINE_CARD(CRabidWolverinesCard);
		DEFINE_CARD(CRavenousBaboonsCard);
		DEFINE_CARD(CReapingTheRewardsCard);
		DEFINE_CARD(CRecklessOgreCard);
		DEFINE_CARD(CReconnaissanceCard);
		DEFINE_CARD(CRecurringNightmareCard);
		DEFINE_CARD(CResuscitateCard);
		DEFINE_CARD(CRootwaterAlligatorCard);
		DEFINE_CARD(CRootwaterMysticCard);
		DEFINE_CARD(CSabertoothWyvernCard);
		DEFINE_CARD(CScaldingSalamanderCard);
		DEFINE_CARD(CScareTacticsCard);
		DEFINE_CARD(CSchoolOfPiranhaCard);
		DEFINE_CARD(CScrivenerCard);
		DEFINE_CARD(CShacklesCard);
		DEFINE_CARD(CShatteringPulseCard);
		DEFINE_CARD(CShieldMateCard);
		DEFINE_CARD(CSlaughterCard);
		DEFINE_CARD(CSkyshaperCard);
		DEFINE_CARD(CSkyshroudEliteCard);
		DEFINE_CARD(CSkyshroudWarBeastCard);
		DEFINE_CARD(CSpellshockCard);
		DEFINE_CARD(CSphereOfResistanceCard);
		DEFINE_CARD(CSpikeCannibalCard);
		DEFINE_CARD(CSpikeHatcherCard);
		DEFINE_CARD(CSpikeRogueCard);
		DEFINE_CARD(CSpikeWeaverCard);
		DEFINE_CARD(CSurvivalOfTheFittestCard);
		DEFINE_CARD(CThalakosDriftersCard);
		DEFINE_CARD(CThalakosScoutCard);
		DEFINE_CARD(CThopterSquadronCard);
		DEFINE_CARD(CVampireHoundsCard);
		DEFINE_CARD(CWaywardSoulCard);
		DEFINE_CARD(CWelkinHawkCard);
		DEFINE_CARD(CWhiptongueFrogCard);
		DEFINE_CARD(CWorkhorseCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAllayCard::CAllayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Allay"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CAllayCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CErtaiWizardAdeptCard::CErtaiWizardAdeptCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ertai, Wizard Adept"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShatteringPulseCard::CShatteringPulseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shattering Pulse"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CShatteringPulseCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CVampireHoundsCard::CVampireHoundsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Hounds"), CardType::Creature, CREATURE_TYPE2(Vampire, Hound), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMindOverMatterCard::CMindOverMatterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mind Over Matter"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCityOfTraitorsCard::CCityOfTraitorsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("City of Traitors"), nID)

	//, m_CardFilter(_T("No Itself"), _T("No Themselves"), new NegateCardComparer(new SpecificCardComparer(this)))
{
	{
		counted_ptr<CManaProductionAbility> cpNonBasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

		cpNonBasicLandManaAbility->AddTapCost();

		AddAbility(cpNonBasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCityOfTraitorsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CCityOfTraitorsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return  (moveType == MoveType::Play);
}
//____________________________________________________________________________
//
CCullingTheWeakCard::CCullingTheWeakCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Culling the Weak"), CardType::Instant, nID)
{
	counted_ptr<CManaFilterSpell> cpSpell(
		::CreateObject<CManaFilterSpell>(this, AbilityType::Instant,					
			BLACK_MANA_TEXT,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CForbidCard::CForbidCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Forbid"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)

	, m_CardFilter(_T("No Itself"), _T("No Themselves"), new NegateCardComparer(new SpecificCardComparer(this)))
{
	//Buyback cost
	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant,					
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->GetCost().AddDiscardCardCost(2, &m_CardFilter);

	cpSpell->SetAbilityText(_T("Buyback. Casts"));

	cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNullBroochCard::CNullBroochCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Null Brooch"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("2"),
			new NegateCardComparer(new CardTypeComparer(CardType::Creature, false))));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(SpecialNumber::All,CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSphereOfResistanceCard::CSphereOfResistanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sphere of Resistance"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this, 
			new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
			_T("1")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManiacalRageCard::CManiacalRageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Maniacal Rage"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::CantBlock)
{
}

//____________________________________________________________________________
//
CCartographerCard::CCartographerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cartographer"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCatBurglarCard::CCatBurglarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cat Burglar"), CardType::Creature, CREATURE_TYPE3(Kor, Rogue, Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEphemeronCard::CEphemeronCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ephemeron"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJackalopeHerdCard::CJackalopeHerdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jackalope Herd"), CardType::Creature, CREATURE_TYPE2(Rabbit, Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKillerWhaleCard::CKillerWhaleCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Killer Whale"), CardType::Creature, CREATURE_TYPE(Whale), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(5),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CMirozelCard::CMirozelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mirozel"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPitSpawnCard::CPitSpawnCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Pit Spawn"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	AddUpkeepCost(BLACK_MANA_TEXT BLACK_MANA_TEXT);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
			&CPitSpawnCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPitSpawnCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CPlatedRootwallaCard::CPlatedRootwallaCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Plated Rootwalla"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3),
		_T("2") GREEN_MANA_TEXT, Power(+3), Life(+3))
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
}

//____________________________________________________________________________
//
CPygmyTrollCard::CPygmyTrollCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Pygmy Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRabidWolverinesCard::CRabidWolverinesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rabid Wolverines"), CardType::Creature, CREATURE_TYPE(Wolverine), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavenousBaboonsCard::CRavenousBaboonsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ravenous Baboons"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRecklessOgreCard::CRecklessOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reckless Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootwaterAlligatorCard::CRootwaterAlligatorCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Rootwater Alligator"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));
}

//____________________________________________________________________________
//
CRootwaterMysticCard::CRootwaterMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rootwater Mystic"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT, 1));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(FALSE);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSabertoothWyvernCard::CSabertoothWyvernCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sabertooth Wyvern"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSchoolOfPiranhaCard::CSchoolOfPiranhaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("School of Piranha"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("1") BLUE_MANA_TEXT, Power(3), Life(3))
{
	AddUpkeepCost(_T("1") BLUE_MANA_TEXT);
}

//____________________________________________________________________________
//
CScrivenerCard::CScrivenerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scrivener"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Instant, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShieldMateCard::CShieldMateCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shield Mate"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CWaywardSoulCard::CWaywardSoulCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wayward Soul"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Library, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhiptongueFrogCard::CWhiptongueFrogCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Whiptongue Frog"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(3),
		BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CErraticPortalCard::CErraticPortalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Erratic Portal"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMedicineBagCard::CMedicineBagCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Medicine Bag"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("1"),
			new AnyCreatureComparer));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshaperCard::CSkyshaperCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skyshaper"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			_T(""),
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->SetToActivatedAbility();

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCursedFleshCard::CCursedFleshCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cursed Flesh"), nID,
		BLACK_MANA_TEXT,
		Power(-1), Life(-1), CreatureKeyword::Fear)
{
}

//____________________________________________________________________________
//
CElvenPalisadeCard::CElvenPalisadeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Elven Palisade"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-3), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
COnslaughtCard::COnslaughtCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Onslaught"), CardType::GlobalEnchantment, nID, 
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShacklesCard::CShacklesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Shackles"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			WHITE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpellshockCard::CSpellshockCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spellshock"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSurvivalOfTheFittestCard::CSurvivalOfTheFittestCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Survival of the Fittest"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures")),
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCards(TRUE);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReapingTheRewardsCard::CReapingTheRewardsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reaping the Rewards"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Life(+2), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Buyback cost
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				Life(+2), PreventableType::NotPreventable));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands"))); // sacrifice card Buyback cost

		cpSpell->SetAbilityText(_T("Buyback. Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CScareTacticsCard::CScareTacticsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scare Tactics"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+0)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSlaughterCard::CSlaughterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slaughter"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Buyback cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));

		cpSpell->AddPayLifeDeltaCost(Life(-4)); // pay life Buyback cost

		cpSpell->SetAbilityText(_T("Buyback. Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathsDuetCard::CDeathsDuetCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death's Duet"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CPegasusStampedeCard::CPegasusStampedeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pegasus Stampede"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				_T("Pegasus B"), 2896,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Buyback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") WHITE_MANA_TEXT,
				_T("Pegasus B"), 2896,
				1));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands"))); // sacrifice card Buyback cost

		cpSpell->SetAbilityText(_T("Buyback. Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CKeeperOfTheBeastsCard::CKeeperOfTheBeastsCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Keeper of the Beasts"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
        GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
    counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
            GREEN_MANA_TEXT,
            _T("Beast B"), 2758,
            1));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CKeeperOfTheBeastsCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

    AddAbility(cpAbility.GetPointer());
}

BOOL CKeeperOfTheBeastsCard::CanPlay(BOOL bIncludeTricks)
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
CPriceOfProgressCard::CPriceOfProgressCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Price of Progress"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this,	AbilityType::Instant,
			_T("1") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPriceOfProgressCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPriceOfProgressCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		Life nDelta = Life(-2 * m_CardFilter.CountIncluded(pZone->GetCardContainer()));
		CLifeModifier modifier(nDelta, this, PreventableType::Preventable, DamageType::NonCombatDamage | DamageType::SpellDamage);
		modifier.ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CRecurringNightmareCard::CRecurringNightmareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Recurring Nightmare"), CardType::GlobalEnchantment, nID,
    	_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	cpAbility->GetCost().AddReturnThisCardCost(this);
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

    AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPandemoniumCard::CPandemoniumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pandemonium"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPandemoniumCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPandemoniumCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CPandemoniumCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CPandemoniumCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
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
CCarnophageCard::CCarnophageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carnophage"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(2), Life(2))
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCarnophageCard::OnPaymentSelected))
{ 
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCarnophageCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCarnophageCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	if ((pController->GetLife() > Life(0)) && (!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Pay 1 life"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Tap %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CCarnophageCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s pays 1 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s taps %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				if (IsInplay())
				{
					CCardOrientationModifier pModifier = CCardOrientationModifier(TRUE);
					pModifier.ApplyTo(this);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CSkyshroudEliteCard::CSkyshroudEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Elite"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false)); //"nonbasic lands"
	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(2));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKeeperOfTheMindCard::CKeeperOfTheMindCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Keeper of the Mind"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
        BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
    counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
        ::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
            BLUE_MANA_TEXT,
            1));

    cpAbility->AddTapCost();

    counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CKeeperOfTheMindCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

    AddAbility(cpAbility.GetPointer());
}

BOOL CKeeperOfTheMindCard::CanPlay(BOOL bIncludeTricks)
{
	int nContHand = GetController()->GetZoneById(ZoneId::Hand)->GetSize();	
	int nOppHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize();

	return nOppHand - nContHand >= 2;
}

//____________________________________________________________________________
//
CMindMaggotsCard::CMindMaggotsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mind Maggots"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMindMaggotsCard::OnNumberSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback,
									&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindMaggotsCard::BeforeResolution));		
	AddAbility(cpAbility.GetPointer());
}

bool CMindMaggotsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	CCardFilter temp;
	temp.SetComparer(new AnyCreatureComparer);

	int nCreatures = temp.CountIncluded(pHand->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't discard anything"));

		entries.push_back(selectionEntry);
	}
	for (int i = 1; i <= nCreatures; ++i)
	{
		SelectionEntry entry;

		entry.dwContext = (DWORD)i;

		if (i == 1)
			entry.strText.Format(_T("Discard %d creature card"),
				i);
		else
			entry.strText.Format(_T("Discard %d creature cards"),
				i);

		entries.push_back(entry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CMindMaggotsCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't discard anything"), pSelectionPlayer->GetPlayerName());
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
						strMessage.Format(_T("%s discards %d creature card"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s discards %d creature cards"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new AnyCreatureComparer);

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CCardCounterModifier pModifier2 =  CCardCounterModifier(_T("+1/+1"), 2*nValue);

				pModifier1.ApplyTo(pSelectionPlayer);
				pModifier2.ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CEntropicSpecterCard::CEntropicSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Entropic Specter"), CardType::Creature, CREATURE_TYPE2(Specter, Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Hand, //"hand"
				new TrueCardComparer)); //"cards"

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFurnaceBroodCard::CFurnaceBroodCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Furnace Brood"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantRegenerate, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrollubCard::CGrollubCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grollub"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGrollubCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CGrollubCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CScaldingSalamanderCard::CScaldingSalamanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scalding Salamander"), CardType::Creature, CREATURE_TYPE(Salamander), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						CWhenSelfAttackedBlocked::AttackEventCallback, 
						&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardControllerComparer(this));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshroudWarBeastCard::CSkyshroudWarBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud War Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::NonbasicLand, false)));

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false)); //"Nonbasic Lands"
		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWelkinHawkCard::CWelkinHawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Welkin Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Welkin Hawk")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDizzyingGazeCard::CDizzyingGazeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dizzying Gaze"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDizzyingGazeCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDizzyingGazeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantCard,
			RED_MANA_TEXT,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false), FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpEnchantAbility);
	
	// CTargetChgLifeSpell does not support setting damage source and targeting source independently
	// Both are set to the enchanted card below, but targeting should stay with the enchant card
	cpEnchantAbility->GetTargeting()->SetSourceCard(pEnchantedCard);
	cpEnchantAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CPredatoryHungerCard::CPredatoryHungerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Predatory Hunger"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CPredatoryHungerCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CPredatoryHungerCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
	cpAbility->SetToCard(pEnchantedCard);
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CResuscitateCard::CResuscitateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Resuscitate"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Null));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CResuscitateCard::CreateRegenerationAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CResuscitateCard::CreateRegenerationAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, _T("1")));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpikeWeaverCard::CSpikeWeaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Weaver"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
				_T("1"),
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeHatcherCard::CSpikeHatcherCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Spike Hatcher"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("6") GREEN_MANA_TEXT, Power(0), Life(0),
		_T("1"))
{
	m_pRegenerationAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 6, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWorkhorseCard::CWorkhorseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Workhorse"), CardType::_ArtifactCreature, CREATURE_TYPE(Horse), nID,
		_T("6"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvengingDruidCard::CAvengingDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avenging Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAvengingDruidCard::OnResolutionCompleted))
{
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, //trigger when the creature damage to a player
							CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));//here is the triggered effect

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CAvengingDruidCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZone* pLibrary = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Library);

	int nReveal;
	for (nReveal = 1; nReveal <= pLibrary->GetSize(); ++nReveal)
		if (pLibrary->GetAt(pLibrary->GetSize() - nReveal)->GetCardType().IsLand())
			break;

	CZoneModifier modifier(GetGame(), ZoneId::Library, nReveal,
		CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

	modifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("lands")), // what cards
		ZoneId::Battlefield, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::NotApplicable, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	modifier.SetReorderInformation(true, ZoneId::Graveyard);

	modifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
COathOfDruidsCard::COathOfDruidsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of Druids"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility<CTriggeredOathOfDruidsAbility, CWhenNodeChanged,
			CWhenNodeChanged::EventCallback, &CWhenNodeChanged::SetEventCallback, COathOfDruidsTargeting> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

COathOfDruidsCard::CTriggeredOathOfDruidsAbility::CTriggeredOathOfDruidsAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener),
		SelectionEventSource::Listener::EventCallback(this, &COathOfDruidsCard::CTriggeredOathOfDruidsAbility::OnSelectionDone))
{}

BOOL COathOfDruidsCard::CTriggeredOathOfDruidsAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetGame()->GetActivePlayer());

	return TRUE;
}

void COathOfDruidsCard::CTriggeredOathOfDruidsAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
																		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext > 0)
			{
				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				int nReveal;
				for (nReveal = 1; nReveal <= pLibrary->GetSize(); ++nReveal)
					if (pLibrary->GetAt(pLibrary->GetSize() - nReveal)->GetCardType().IsCreature())
						break;

				CZoneModifier modifier(GetGame(), ZoneId::Library, nReveal,
					CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

				modifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					CCardFilter::GetFilter(_T("creatures")), // what cards
					ZoneId::Battlefield, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::NotApplicable, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				modifier.SetReorderInformation(true, ZoneId::Graveyard);

				modifier.ApplyTo(pSelectionPlayer);
			}
			return;
		}
}

BOOL COathOfDruidsCard::COathOfDruidsTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CZone* pZone;

	pZone = GetController()->GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);
	int nRefCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

	pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	int nSubjectCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

	return nSubjectCreatures > nRefCreatures;
}

BOOL COathOfDruidsCard::COathOfDruidsTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
COathOfGhoulsCard::COathOfGhoulsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of Ghouls"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility<CTriggeredOathOfGhoulsAbility, CWhenNodeChanged,
			CWhenNodeChanged::EventCallback, &CWhenNodeChanged::SetEventCallback, COathOfGhoulsTargeting> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

COathOfGhoulsCard::CTriggeredOathOfGhoulsAbility::CTriggeredOathOfGhoulsAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener),
		SelectionEventSource::Listener::EventCallback(this, &COathOfGhoulsCard::CTriggeredOathOfGhoulsAbility::OnSelectionDone))
{}

BOOL COathOfGhoulsCard::CTriggeredOathOfGhoulsAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	CZone* pZone = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Graveyard);
	CCountedCardContainer cards;
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, cards);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < cards.GetSize(); ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)cards.GetAt(i);
		selectionEntry.strText.Format(_T("Select %s"), cards.GetAt(i)->GetCardName());

		entries.push_back(selectionEntry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetGame()->GetActivePlayer());

	return TRUE;
}

void COathOfGhoulsCard::CTriggeredOathOfGhoulsAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
																		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext > 0)
			{
				CMoveCardModifier modifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others);
				modifier.ApplyTo((CCard*)it->dwContext);
			}
			return;
		}
}

BOOL COathOfGhoulsCard::COathOfGhoulsTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CZone* pZone;

	pZone = GetController()->GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Graveyard);
	int nRefCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

	pZone = pPlayer->GetZoneById(ZoneId::Graveyard);
	int nSubjectCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pZone->GetCardContainer());

	return nSubjectCreatures < nRefCreatures;
}

BOOL COathOfGhoulsCard::COathOfGhoulsTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
COathOfLiegesCard::COathOfLiegesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of Lieges"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility<CTriggeredOathOfLiegesAbility, CWhenNodeChanged,
			CWhenNodeChanged::EventCallback, &CWhenNodeChanged::SetEventCallback, COathOfLiegesTargeting> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

COathOfLiegesCard::CTriggeredOathOfLiegesAbility::CTriggeredOathOfLiegesAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener),
		SelectionEventSource::Listener::EventCallback(this, &COathOfLiegesCard::CTriggeredOathOfLiegesAbility::OnSelectionDone))
{}

BOOL COathOfLiegesCard::CTriggeredOathOfLiegesAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetGame()->GetActivePlayer());

	return TRUE;
}

void COathOfLiegesCard::CTriggeredOathOfLiegesAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
																		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext > 0)
			{
				CPlayerSearchModifier modifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(1),
					pSelectionPlayer, ZoneId::Library,
					CCardFilter::GetFilter(_T("basic lands")),
					ZoneId::Battlefield);

				modifier.ApplyTo(pSelectionPlayer);
			}
			return;
		}
}

BOOL COathOfLiegesCard::COathOfLiegesTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CZone* pZone;

	pZone = GetController()->GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);
	int nRefLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pZone->GetCardContainer());

	pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	int nSubjectLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pZone->GetCardContainer());

	return nSubjectLands > nRefLands;
}

BOOL COathOfLiegesCard::COathOfLiegesTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
COathOfMagesCard::COathOfMagesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of Mages"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility<CTriggeredOathOfMagesAbility, CWhenNodeChanged,
			CWhenNodeChanged::EventCallback, &CWhenNodeChanged::SetEventCallback, COathOfMagesTargeting> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

COathOfMagesCard::CTriggeredOathOfMagesAbility::CTriggeredOathOfMagesAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener),
		SelectionEventSource::Listener::EventCallback(this, &COathOfMagesCard::CTriggeredOathOfMagesAbility::OnSelectionDone))
{}

BOOL COathOfMagesCard::CTriggeredOathOfMagesAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)pTriggeredPlayer;
		selectionEntry.strText.Format(_T("Use %s Oath ability and deal damage to %s"), GetCard()->GetCardName(), pTriggeredPlayer->GetPlayerName());

		entries.push_back(selectionEntry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetGame()->GetActivePlayer());

	return TRUE;
}

void COathOfMagesCard::CTriggeredOathOfMagesAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
																		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext > 0)
			{
				CLifeModifier modifier(Life(-1), GetCard(), PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				modifier.ApplyTo((CPlayer*)it->dwContext);
			}
			return;
		}
}

BOOL COathOfMagesCard::COathOfMagesTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::TargetAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	int nRefLife = GET_INTEGER(GetController()->GetGame()->GetActivePlayer()->GetLife());
	int nSubjectLife = GET_INTEGER(pPlayer->GetLife());

	return nSubjectLife > nRefLife;
}

BOOL COathOfMagesCard::COathOfMagesTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
COathOfScholarsCard::COathOfScholarsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of Scholars"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredTargetAbility<CTriggeredOathOfScholarsAbility, CWhenNodeChanged,
			CWhenNodeChanged::EventCallback, &CWhenNodeChanged::SetEventCallback, COathOfScholarsTargeting> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

COathOfScholarsCard::CTriggeredOathOfScholarsAbility::CTriggeredOathOfScholarsAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener),
		SelectionEventSource::Listener::EventCallback(this, &COathOfScholarsCard::CTriggeredOathOfScholarsAbility::OnSelectionDone))
{}

BOOL COathOfScholarsCard::CTriggeredOathOfScholarsAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s Oath ability"), GetCard()->GetCardName());

		entries.push_back(selectionEntry);
	}

	GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetGame()->GetActivePlayer());

	return TRUE;
}

void COathOfScholarsCard::CTriggeredOathOfScholarsAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
																		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext > 0)
			{
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, true, MoveType::Discard);		
				CZoneCardModifier modifier1(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")), std::auto_ptr<CCardModifier>(pModifier));
				CDrawCardModifier modifier2(GetGame(), MinimumValue(3), MaximumValue(3));

				modifier1.ApplyTo(pSelectionPlayer);
				modifier2.ApplyTo(pSelectionPlayer);
			}
			return;
		}
}

BOOL COathOfScholarsCard::COathOfScholarsTargeting::TargetAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	int nRefCards = GetController()->GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Hand)->GetSize();
	int nSubjectCards = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	return nSubjectCards > nRefCards;
}

BOOL COathOfScholarsCard::COathOfScholarsTargeting::TargetAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	return FALSE;
}

//____________________________________________________________________________
//
CMindlessAutomatonCard::CMindlessAutomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindless Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThopterSquadronCard::CThopterSquadronCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thopter Squadron"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("5"), Power(0), Life(0))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Thopter), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Thopter B"), 2850, 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauthiCutthroatCard::CDauthiCutthroatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Cutthroat"), CardType::Creature, CREATURE_TYPE2(Dauthi, Minion), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new CreatureKeywordComparer(CreatureKeyword::Shadow, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauthiJackalCard::CDauthiJackalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Jackal"), CardType::Creature, CREATURE_TYPE2(Dauthi, Hound), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new BlockingCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDauthiWarlordCard::CDauthiWarlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Warlord"), CardType::Creature, CREATURE_TYPE2(Dauthi, Soldier), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CreatureKeywordComparer(CreatureKeyword::Shadow, false)));

		cpAbility->SetChangePowerOnly();

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosDriftersCard::CThalakosDriftersCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Thalakos Drifters"), CardType::Creature, CREATURE_TYPE(Thalakos), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Shadow)
{
	m_pPumpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CThalakosScoutCard::CThalakosScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thalakos Scout"), CardType::Creature, CREATURE_TYPE3(Thalakos, Soldier, Scout), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T(""),
				ZoneId::Hand, TRUE, MoveType::Others));
		
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeRogueCard::CSpikeRogueCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Rogue"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCinderCrawlerCard::CCinderCrawlerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Cinder Crawler"), CardType::Creature, CREATURE_TYPE(Salamander), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2),
		RED_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CCinderCrawlerCard::CanPlay)));
	m_pPumpAbility->Add(cpTrait.GetPointer());
}

BOOL CCinderCrawlerCard::CanPlay(BOOL bIncludeTricks)
{
	return (IsBlocked() == TRUE);
}

//____________________________________________________________________________
//
CConvalescenceCard::CConvalescenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Convalescence"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CConvalescenceCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CConvalescenceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CConvalescenceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetController()->GetLife() <= Life(10);
}

bool CConvalescenceCard::BeforeResolution(CAbilityAction* pAction) const
{
	return GetController()->GetLife() <= Life(10);
}

//____________________________________________________________________________
//
CManabondCard::CManabondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Manabond"), CardType::GlobalEnchantment, nID, 
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CManabondCard::OnSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManabondCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CManabondCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't use Manabond"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Reveal your hand, put lands onto the battlefield and discard the rest"));

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CManabondCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't use the effect of Manabond"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s uses the effect of Manabond"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneModifier modifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

				CZoneCardModifier modifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("lands")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others)));

				modifier1.ApplyTo(pSelectionPlayer);
				modifier2.ApplyTo(pSelectionPlayer);

				int nDiscard = pSelectionPlayer->GetZoneById(ZoneId::Hand)->GetSize();

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new TrueCardComparer);

				CZoneModifier modifier3 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				modifier3.AddSelection(MinimumValue(nDiscard), MaximumValue(nDiscard), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&m_CardFilter, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	
				modifier3.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CParoxysmCard::CParoxysmCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Paroxysm"), CardType::EnchantCreature, nID,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParoxysmCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CParoxysmCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CParoxysmCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

bool CParoxysmCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pZone = pAction->GetTriggeredPlayer()->GetZoneById(ZoneId::Library);
	if (pZone->GetSize() == 0) return false;
	CCard* pRevealedCard = pZone->GetTopCard();

	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(m_pEnchantSpell->GetEnchantedOnCard());
	if (!pCreature) return false;

	if (pRevealedCard->GetCardType().IsLand())
	{
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
		modifier.ApplyTo(pCreature);
	}
	else
	{
		CPowerModifier modifier1 = CPowerModifier(Power(+3));
		CLifeModifier modifier2 = CLifeModifier(Life(+3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		modifier1.ApplyTo(pCreature);
		modifier2.ApplyTo(pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CHatredCard::CHatredCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hatred"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject <CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	cpSpell->AddPayLifeDeltaCost(Life(SpecialNumber::Any));
	cpSpell->SetExtraActionValueVector(ContextValue(0, +1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPlaguebearerCard::CPlaguebearerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plaguebearer"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));		

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBequeathalCard::CBequeathalCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bequeathal"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CEnchant> cpSpell(
			::CreateObject<CEnchant>(this,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->SetDrawCount(2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReconnaissanceCard::CReconnaissanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Reconnaissance"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(::CreateObject<CActivatedAbility<CTargetSpell>>(
		this,
		_T(""),
		new AttackingCreatureComparer,
		FALSE));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReconnaissanceCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CReconnaissanceCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	pCreature->RemoveFromCombat(FALSE);
	
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(pCreature);
	
	return true;
}

//____________________________________________________________________________
//
CCataclysmCard::CCataclysmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cataclysm"), CardType::Sorcery, nID)
	, m_ArtifactSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCataclysmCard::OnArtifactSelected))
	, m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCataclysmCard::OnCreatureSelected))
	, m_EnchantmentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCataclysmCard::OnEnchantmentSelected))
	, m_LandSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCataclysmCard::OnLandSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCataclysmCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CCataclysmCard::BeforeResolution(CAbilityAction* pAction)
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

	ArtifactSelection(0);
	return true;
}

void CCataclysmCard::ArtifactSelection(int nPlayer)
{
	if (nPlayer < Players.GetSize())
	{
		CPlayer* pPlayer = Players.GetAt(nPlayer);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard->GetCardType().IsArtifact())
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Select %s."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_ArtifactSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
		}
		else
			CreatureSelection(nPlayer);
	}
	else
	{
		CCardFilter m_CardFilter;
		m_CardFilter.AddNegateComparer(new ContainedinComparer(&Cards));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, GetGame()->GetPlayer(ip))));

			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}
}

void CCataclysmCard::CreatureSelection(int nPlayer)
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
		m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		EnchantmentSelection(nPlayer);
}

void CCataclysmCard::EnchantmentSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("enchantments"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsEnchantment())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_EnchantmentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		LandSelection(nPlayer);
}

void CCataclysmCard::LandSelection(int nPlayer)
{
	CPlayer* pPlayer = Players.GetAt(nPlayer);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsLand())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s."),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_LandSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)nPlayer);
	}
	else
		ArtifactSelection(nPlayer + 1);
}

void CCataclysmCard::OnArtifactSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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

			CreatureSelection(nPlayer);
				
			return;
		}
}

void CCataclysmCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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

			EnchantmentSelection(nPlayer);
				
			return;
		}
}

void CCataclysmCard::OnEnchantmentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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

			LandSelection(nPlayer);
				
			return;
		}
}

void CCataclysmCard::OnLandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nPlayer = (int)dwContext1;

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

			ArtifactSelection(nPlayer + 1);
				
			return;
		}
}

//____________________________________________________________________________
//
CSpikeCannibalCard::CSpikeCannibalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Cannibal"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpikeCannibalCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSpikeCannibalCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay() || GetCardKeyword()->HasCantGetCounters()) 
		return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			int n = pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

			if ((n > 0) && (pCard != this) && pCard->GetCardType().IsCreature())
			{
				CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -n);
				CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), +n);

				pModifier1.ApplyTo(pCard);
				pModifier2.ApplyTo(this);
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//