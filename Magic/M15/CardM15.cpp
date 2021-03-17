#include "stdafx.h"
#include "CardM15.h"

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
		DEFINE_CARD(CBattleMasteryCard);
		DEFINE_CARD(CBlackCatCard);
		DEFINE_CARD(CBronzeSableCard);
		DEFINE_CARD(CCausticTarCard);
		DEFINE_CARD(CChargingRhinoCard);
		DEFINE_CARD(CClearAPathCard);
		DEFINE_CARD(CCrucibleOfFireCard);
		DEFINE_CARD(CDarksteelCitadelCard);
		DEFINE_CARD(CDissipateCard);
		DEFINE_CARD(CForgeDevilCard);
		DEFINE_CARD(CFoundryStreetDenizenCard);
		DEFINE_CARD(CFrenziedGoblinCard);
		DEFINE_CARD(CGoblinRoughriderCard);
		DEFINE_CARD(CGrindclockCard);
		DEFINE_CARD(CHeatRayCard);
		DEFINE_CARD(CHornetQueenCard);
		DEFINE_CARD(CIllusoryAngelCard);
		DEFINE_CARD(CIntoTheVoidCard);
		DEFINE_CARD(CKinsbaileSkirmisherCard);
		DEFINE_CARD(CLightningStrikeCard);
		DEFINE_CARD(CMassCalcifyCard);
		DEFINE_CARD(CMidnightGuardCard);
		DEFINE_CARD(CNecrobiteCard);
		DEFINE_CARD(CNecrogenScudderCard);
		DEFINE_CARD(COreskosSwiftclawCard);
		DEFINE_CARD(CPeelFromRealityCard);
		DEFINE_CARD(CPhyrexianRevokerCard);
		DEFINE_CARD(CPreeminentCaptainCard);
		DEFINE_CARD(CRaiseTheAlarmCard);
		DEFINE_CARD(CRestockCard);
		DEFINE_CARD(CSanctifiedChargeCard);
		DEFINE_CARD(CSatyrWayfinderCard);
		DEFINE_CARD(CSelflessCatharCard);
		DEFINE_CARD(CShrapnelBlastCard);
		DEFINE_CARD(CStabWoundCard);
		DEFINE_CARD(CTerraStomperCard);
		DEFINE_CARD(CTyphoidRatsCard);
		DEFINE_CARD(CUrborgTombOfYawgmothCard);
		DEFINE_CARD(CWallOfEssenceCard);
		DEFINE_CARD(CWallOfMulchCard);
		DEFINE_CARD(CWasteNotCard);
		DEFINE_CARD(CZofShadeCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CWasteNotCard::CWasteNotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Waste Not"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	//Draw a card when opponent discard a noncreature, non land card
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}

	//Add mana when opponent discard a land
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT BLACK_MANA_TEXT)));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	}


	//Create a zombie token when opponent discard a creature
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility,  CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)));

		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie A"), 2724, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}

}

//____________________________________________________________________________
//
CBattleMasteryCard::CBattleMasteryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Battle Mastery"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::DoubleStrike)
{
}

//____________________________________________________________________________
//
CKinsbaileSkirmisherCard::CKinsbaileSkirmisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kinsbaile Skirmisher"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMassCalcifyCard::CMassCalcifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mass Calcify"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::White, false)));

	AddSpell(cpSpell.GetPointer());
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
COreskosSwiftclawCard::COreskosSwiftclawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oreskos Swiftclaw"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CPreeminentCaptainCard::CPreeminentCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Preeminent Captain"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	{
	typedef
		TTriggeredSubjectAbility< CMoveAttackingAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier),false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->SetFromZoneId(ZoneId::Hand);	

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRaiseTheAlarmCard::CRaiseTheAlarmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Raise the Alarm"), CardType::Instant, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			_T("Soldier F"), 2916,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSelflessCatharCard::CSelflessCatharCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Selfless Cathar"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(+1),
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->SetToActivatedAbility();
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfEssenceCard::CWallOfEssenceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Essence"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this,
			&CWallOfEssenceCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfEssenceCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const

//SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CDissipateCard::CDissipateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dissipate"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CIllusoryAngelCard::CIllusoryAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusory Angel"), CardType::Creature, CREATURE_TYPE2(Angel, Illusion), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CIllusoryAngelCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

BOOL CIllusoryAngelCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainAntiTypeCastedCount(CardType::_Land) > 0);
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
CPeelFromRealityCard::CPeelFromRealityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Peel from Reality"), CardType::Instant, nID)
{
	counted_ptr<CDoubleTargetSpell> cpSpell(
		::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer, false,
			new AnyCreatureComparer, false,
			_T("")));

	cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
	cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
	cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPeelFromRealityCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPeelFromRealityCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
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
CCausticTarCard::CCausticTarCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Caustic Tar"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CCausticTarCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CCausticTarCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pEnchantedCard,
			_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-3), PreventableType::NotPreventable));
	ATLASSERT(cpEnchantAbility);

	cpEnchantAbility->AddTapCost();

	cpEnchantAbility->SetDamageType(DamageType::NotDealingDamage);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
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
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
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
CNecrogenScudderCard::CNecrogenScudderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Necrogen Scudder"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
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

//____________________________________________________________________________
//
CStabWoundCard::CStabWoundCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Stab Wound"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(-2), Life(-2))
{
	m_pEnchantSpell = m_pChgPwrTghAttrEnchant;

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStabWoundCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStabWoundCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CTyphoidRatsCard::CTyphoidRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Typhoid Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDeathtouch(false);
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
CClearAPathCard::CClearAPathCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Clear a Path"), CardType::Sorcery, nID,
		RED_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Defender, false));
}

//____________________________________________________________________________
//
CCrucibleOfFireCard::CCrucibleOfFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crucible of Fire"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
			Power(+3), Life(+3)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();
	AddAbility(cpAbility.GetPointer());
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
CFrenziedGoblinCard::CFrenziedGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frenzied Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetResolutionCost(RED_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinRoughriderCard::CGoblinRoughriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Roughrider"), CardType::Creature, CREATURE_TYPE2(Goblin, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
}

//____________________________________________________________________________
//
CHeatRayCard::CHeatRayCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Heat Ray"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE, // Target player?
		Life(0), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CLightningStrikeCard::CLightningStrikeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Lightning Strike"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,							// Target player?
		Life(-3),						// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CShrapnelBlastCard::CShrapnelBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shrapnel Blast"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,							// Target player?
		Life(-5),						// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards"))); // sacrifice a artifact in addition to cast
}

//____________________________________________________________________________
//
CChargingRhinoCard::CChargingRhinoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Charging Rhino"), CardType::Creature, CREATURE_TYPE(Rhino), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddCantBeBlockedByMultiple(FALSE);
}

//____________________________________________________________________________
//
CHornetQueenCard::CHornetQueenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hornet Queen"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect E"), 2926, 4);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//______________________________________________________________________________
//
CRestockCard::CRestockCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Restock"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
}

//____________________________________________________________________________
//
CSatyrWayfinderCard::CSatyrWayfinderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Satyr Wayfinder"), CardType::Creature, CREATURE_TYPE(Satyr), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	,m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSatyrWayfinderCard::OnCardSelected))

{
	typedef
		TTriggeredAbility< CTriggeredAbility<>,CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSatyrWayfinderCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}


bool CSatyrWayfinderCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int n = pLibrary->GetSize();
	
	if (n == 0) 
		return true;
	
	if (n > 4) 
		n = 4;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pController);
	
	CCountedCardContainer_ pLands;

	for (int i = 1; i <= n; ++i)
	{
		CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i);
		if (pCard->GetCardType().IsLand())
			pLands.AddCard(pCard, CardPlacement::Top);
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't select anything"));

		entries.push_back(selectionEntry);
	}
	if (pLands.GetSize() > 0)
	{
		for (int i = 0; i < pLands.GetSize(); ++i)
		{
			CCard* pCard = pLands.GetAt(i);
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Select %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, n);

	return true;
}

void CSatyrWayfinderCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, dwContext1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);
				pModifier.ApplyTo(pSelectionPlayer);

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
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);
				
				if (dwContext1 > 1)
				{
					CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Library, dwContext1 - 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier3.SetReorderInformation(true, ZoneId::Graveyard);
					pModifier3.ApplyTo(pSelectionPlayer);
				}

				return;
			}
		}
}

//____________________________________________________________________________
//
CWallOfMulchCard::CWallOfMulchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Mulch"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(4))

	, m_CardFilter(_T("a Wall"), _T("Walls"), new CreatureTypeComparer(CREATURE_TYPE(Wall), false))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				GREEN_MANA_TEXT, 1));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTerraStomperCard::CTerraStomperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terra Stomper"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddCantBeCountered(FALSE);
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
CUrborgTombOfYawgmothCard::CUrborgTombOfYawgmothCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urborg, Tomb of Yawgmoth"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),
				CardType::Swamp, CardType::Null));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CUrborgTombOfYawgmothCard::CreateAbility)));	

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CUrborgTombOfYawgmothCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T("Tap"), AbilityType::Activated, BLACK_MANA_TEXT));		
	ATLASSERT(m_pBasicLandManaAbility);

	cpBasicLandManaAbility->AddTapCost();

	return counted_ptr<CAbility>(cpBasicLandManaAbility.GetPointer());
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
CGrindclockCard::CGrindclockCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grindclock"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetRevealCardsToOthers(true);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrindclockCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrindclockCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CPhyrexianRevokerCard::CPhyrexianRevokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Revoker"), CardType::_ArtifactCreature, CREATURE_TYPE(Horror), nID,
		_T("2"), Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility2, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCardFilters(CCardFilter::GetFilter(_T("non-lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSelectByControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, FALSE);
	cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSanctifiedChargeCard::CSanctifiedChargeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sanctified Charge"), CardType::Instant, nID)
{
	//Creatures you control get +2/+1 until end of turn. 
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("4") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+1)));

	cpSpell->SetAffectControllerCardsOnly();								  // SetAffectControllerCardsOnly is applied to <CPwrTghAttrEnchantment> only
	
	//White creatures you control also gain first strike until end of turn.
	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetOneTurnOnly(TRUE);
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);

	CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
																  std::auto_ptr<CCreatureModifier>(pModifier1));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//