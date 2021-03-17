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
		DEFINE_CARD(CAggressiveMiningCard);
		DEFINE_CARD(CAltacBloodseekerCard);
		DEFINE_CARD(CBattleMasteryCard);
		DEFINE_CARD(CBelligerentSliverCard);
		DEFINE_CARD(CBlackCatCard);
		DEFINE_CARD(CBlastfireBoltCard);
		DEFINE_CARD(CBloodHostCard);
		DEFINE_CARD(CBorderlandMarauderCard);
		DEFINE_CARD(CBroodKeeperCard);
		DEFINE_CARD(CBronzeSableCard);
		DEFINE_CARD(CBurningAngerCard);
		DEFINE_CARD(CCarnivorousMossBeastCard);
		DEFINE_CARD(CCarrionCrowCard);
		DEFINE_CARD(CCausticTarCard);
		DEFINE_CARD(CChargingRhinoCard);
		DEFINE_CARD(CClearAPathCard);
		DEFINE_CARD(CCrucibleOfFireCard);
		DEFINE_CARD(CCruelSadistCard);
		DEFINE_CARD(CDarksteelCitadelCard);
		DEFINE_CARD(CDissipateCard);
		DEFINE_CARD(CFeastOnTheFallenCard);
		DEFINE_CARD(CFestergloomCard);
		DEFINE_CARD(CFirstResponseCard);
		DEFINE_CARD(CFleshToDustCard);
		DEFINE_CARD(CForgeDevilCard);
		DEFINE_CARD(CFoundryStreetDenizenCard);
		DEFINE_CARD(CFrenziedGoblinCard);
		DEFINE_CARD(CGoblinRabblemasterCard);
		DEFINE_CARD(CGoblinRoughriderCard);
		DEFINE_CARD(CGrindclockCard);
		DEFINE_CARD(CHammerhandCard);
		DEFINE_CARD(CHeatRayCard);
		DEFINE_CARD(CHornetNestCard);
		DEFINE_CARD(CHornetQueenCard);
		DEFINE_CARD(CHuntersAmbushCard);
		DEFINE_CARD(CIllusoryAngelCard);
		DEFINE_CARD(CIndulgentTormentorCard);
		DEFINE_CARD(CInfernoFistCard);
		DEFINE_CARD(CInGarruksWakeCard);
		DEFINE_CARD(CIntoTheVoidCard);
		DEFINE_CARD(CInvasiveSpeciesCard);
		DEFINE_CARD(CKalonianTwingroveCard);
		DEFINE_CARD(CKinsbaileSkirmisherCard);
		DEFINE_CARD(CKirdChieftainCard);
		DEFINE_CARD(CKrenkosEnforcerCard);
		DEFINE_CARD(CLeechingSliverCard);
		DEFINE_CARD(CLifesLegacyCard);
		DEFINE_CARD(CLightningStrikeCard);
		DEFINE_CARD(CMassCalcifyCard);
		DEFINE_CARD(CMidnightGuardCard);
		DEFINE_CARD(CMinersBaneCard);
		DEFINE_CARD(CNissaWorldwakerCard);
		DEFINE_CARD(CNecrobiteCard);
		DEFINE_CARD(CNecromancersAssistantCard);
		DEFINE_CARD(CNecromancersStockpileCard);
		DEFINE_CARD(CNecrogenScudderCard);
		DEFINE_CARD(CNetcasterSpiderCard);
		DEFINE_CARD(COreskosSwiftclawCard);
		DEFINE_CARD(CParagonOfEternalWildsCard);
		DEFINE_CARD(CParagonOfFierceDefianceCard);
		DEFINE_CARD(CParagonOfGatheringMistsCard);
		DEFINE_CARD(CParagonOfNewDawnsCard);
		DEFINE_CARD(CParagonOfOpenGravesCard);
		DEFINE_CARD(CPeelFromRealityCard);
		DEFINE_CARD(CPhyrexianRevokerCard);
		DEFINE_CARD(CPhytotitanCard);
		DEFINE_CARD(CPreeminentCaptainCard);
		DEFINE_CARD(CRaiseTheAlarmCard);
		DEFINE_CARD(CReclamationSageCard);
		DEFINE_CARD(CRestockCard);
		DEFINE_CARD(CSanctifiedChargeCard);
		DEFINE_CARD(CSatyrWayfinderCard);
		DEFINE_CARD(CScrapyardMongrelCard);
		DEFINE_CARD(CSelflessCatharCard);
		DEFINE_CARD(CShamanOfSpringCard);
		DEFINE_CARD(CShrapnelBlastCard);
		DEFINE_CARD(CSiegeDragonCard);
		DEFINE_CARD(CSoulOfZendikarCard);
		DEFINE_CARD(CStabWoundCard);
		DEFINE_CARD(CSunbladeElfCard);
		DEFINE_CARD(CTerraStomperCard);
		DEFINE_CARD(CTyphoidRatsCard);
		DEFINE_CARD(CUrborgTombOfYawgmothCard);
		DEFINE_CARD(CVenomSliverCard);
		DEFINE_CARD(CVineweftCard);
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
	{//Draw a card when opponent discard a noncreature, non land card
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{//Add mana when opponent discard a land
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
	{//Create a zombie token when opponent discard a creature
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility,  CWhenCardDiscarded > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::Creature, false)));
		
		cpAbility->SetCreateTokenOption(TRUE, _T("Zombie S"), 55035, 1);
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
CReclamationSageCard::CReclamationSageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reclamation Sage"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShamanOfSpringCard::CShamanOfSpringCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shaman of Spring"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
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
CSoulOfZendikarCard::CSoulOfZendikarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soul of Zendikar"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	m_CardFilter.AddComparer(new SpecificCardComparer(this));
	GetCreatureKeyword()->AddReach(FALSE);
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast O"), 55037,
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast O"), 55037,
				1));
		ATLASSERT(cpAbility);
		
		cpAbility->SetGraveyardOnly();
		cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSunbladeElfCard::CSunbladeElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunblade Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	{//Sunblade Elf gets +1/+1 as long as you control a Plains.
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{//{4W}: Creatures you control get +1/+1 until end of turn.
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( 
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("4") WHITE_MANA_TEXT,
				Power(+1), Life(+1),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVenomSliverCard::CVenomSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Venom Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVineweftCard::CVineweftCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Vineweft"), nID,
		GREEN_MANA_TEXT,
		Power(+1), Life(+1))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("4") GREEN_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));
	
	cpAbility->SetGraveyardOnly();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHuntersAmbushCard::CHuntersAmbushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunter's Ambush"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage));
	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Green, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCarnivorousMossBeastCard::CCarnivorousMossBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carnivorous Moss-Beast"), CardType::Creature, CREATURE_TYPE3(Plant, Elemental, Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))

{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//______________________________________________________________________________
//
CHornetNestCard::CHornetNestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hornet Nest"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect I"), 55039, 0);

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHornetNestCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation); 

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
}

bool CHornetNestCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = GET_INTEGER(-damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CInvasiveSpeciesCard::CInvasiveSpeciesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Invasive Species"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card
	
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//__________________________________________________________________________________
//
CKalonianTwingroveCard::CKalonianTwingroveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalonian Twingrove"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("5") GREEN_MANA_TEXT, Power(0), Life(0))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Treefolk Warrior A"), 55043, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLifesLegacyCard::CLifesLegacyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Life's Legacy"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell6> cpSpell(
		::CreateObject<CDrawCardSpell6>(this,
			AbilityType::Sorcery, _T("1") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CNetcasterSpiderCard::CNetcasterSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Netcaster Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		typedef
			TTriggeredAbility<CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							  CWhenSelfAttackedBlocked::BlockEventCallback2, 
							  &CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback> TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNetcasterSpiderCard::SetTriggerContext));

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNetcasterSpiderCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											 CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CNissaWorldwakerCard::CNissaWorldwakerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Nissa, Worldwaker"), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, 
		PlaneswalkerType::Nissa, 3)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CNissaWorldwakerCard::OnResolutionCompleted))
{
	{//+1: Untap up to four target Forests.
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				FALSE, TRUE,
				new CardTypeComparer(CardType::Forest, false)));

		cpAbility->GetTargeting()->SetSubjectCount(0, 4);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());	
	}
	{//+1: Target land you control becomes a 4/4 Elemental creature with trample. It's still a land.
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false), false));
		ATLASSERT(cpAbility);
		
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNissaWorldwakerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
	{//-7: Search your library for any number of basic land cards, put them onto the battlefield, then shuffle your library. 
	 //Those lands become 4/4 Elemental creatures with trample. They're still lands.
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CNissaWorldwakerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard                      = pAction->GetAssociatedCard();
	CCardIsAlsoAModifier*  pModifier1 = new CCardIsAlsoAModifier( _T("Elemental AN"), 64093, pAction->GetController());
	CScheduledCardModifier pModifier2 = CScheduledCardModifier(GetGame(), 
		                                                       pModifier1,
															   TurnNumberDelta(-1), 
															   NodeId::CleanupStep2, 
															   true,  
															   CScheduledCardModifier::Operation::RemoveFromLater);
	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);
	return true;
}

void CNissaWorldwakerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CPlayer* pController = pAbilityAction->GetController();

	CCountedCardContainer pFound;
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pController,
		                                                     MinimumValue(0), MaximumValue(SpecialNumber::Any), 
															 pController, 
															 ZoneId::Library, 
															 CCardFilter::GetFilter(_T("Lands")), 
															 ZoneId::Battlefield, 
															 TRUE, 
															 CardPlacement::Top, 
															 FALSE, TRUE, FALSE, &pFound);
	pModifier1.ApplyTo(pController);
	CCardIsAlsoAModifier  pModifier2 = CCardIsAlsoAModifier( _T("Elemental AN"), 64093, pController);
	for (int i = 0; i < pFound.GetSize(); ++i)
	{
		CCard* pCard = pFound.GetAt(i);
		pModifier2.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CParagonOfEternalWildsCard::CParagonOfEternalWildsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paragon of Eternal Wilds"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{//Other green creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//{G}, {T}: Another target green creature you control gains trample until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Creature | CardType::Green, true)));
		
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhytotitanCard::CPhytotitanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phytotitan"), CardType::Creature, CREATURE_TYPE2(Plant, Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPhytotitanCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

void CPhytotitanCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	if (IsInGraveyard())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier1 = CContainerEffectModifier(GetGame(), _T("Upkeep Step Reanimate Effect"), 61139, &pSubjects);
	pModifier1.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CAggressiveMiningCard::CAggressiveMiningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aggressive Mining"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{//You can't play lands.
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlayLands,
				(int)CCardFilter::GetFilter(_T("lands"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 2));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
		cpAbility->SetMaxTurnUsageCount(1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAltacBloodseekerCard::CAltacBloodseekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Altac Bloodseeker"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	//Whenever a creature an opponent controls dies
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));								
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike | CreatureKeyword::Haste);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBelligerentSliverCard::CBelligerentSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Belligerent Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlastfireBoltCard::CBlastfireBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Blastfire Bolt"), CardType::Instant, nID, AbilityType::Instant,
		_T("5") RED_MANA_TEXT,
		new AnyCreatureComparer,
		false,
		Life(-5),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlastfireBoltCard::BeforeResolution));
}

bool CBlastfireBoltCard::BeforeResolution(CAbilityAction* pAction) const
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
CBorderlandMarauderCard::CBorderlandMarauderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borderland Marauder"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
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
CBroodKeeperCard::CBroodKeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brood Keeper"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfEnchantCountChanged, 
						   CWhenSelfEnchantCountChanged::EventCallback, 
						   &CWhenSelfEnchantCountChanged::SetEnchantEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon I"), 55042, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurningAngerCard::CBurningAngerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burning Anger"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("4") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBurningAngerCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBurningAngerCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpEnchantAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(pEnchantedCard, 
			_T(""),	new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpEnchantAbility);
	cpEnchantAbility->AddTapCost();
	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CScrapyardMongrelCard::CScrapyardMongrelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scrapyard Mongrel"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->SetConditionValue(1);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinRabblemasterCard::CGoblinRabblemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Rabblemaster"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	/*
		!Outstanding Issue!
		When there are no attack-able creatures with Goblin Rabblemaster, the BeginningOfCombatStep/Combat phase 
		becomes skipped(!) and the put a 1/1 red Goblin creature token with haste onto the battlefield doesn't trigger. 
		When there is an attack-able creature with Goblin Rabblemaster, it triggers as it should.
	*/
	{//Other Goblin creatures you control attack each turn if able.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//At the beginning of combat on your turn, put a 1/1 red Goblin creature token with haste onto the battlefield.
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Goblin P"), 55036, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{//Whenever Goblin Rabblemaster attacks, it gets +1/+0 until end of turn for each other attacking Goblin.
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Goblin"), _T("other attacking Goblins"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGoblinRabblemasterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGoblinRabblemasterCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));
	pAction->SetTriggerContext(triggerContext);
	return true;
}

//____________________________________________________________________________
//
CHammerhandCard::CHammerhandCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Hammerhand"), nID,
		RED_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Haste)
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
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInfernoFistCard::CInfernoFistCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Inferno Fist"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetTargeting()->SetIncludeControllerCardsOnly();
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-2), PreventableType::Preventable));
	
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKirdChieftainCard::CKirdChieftainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kird Chieftain"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	{//Kird Chieftain gets +1/+1 as long as you control a Forest.
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{//Target creature gets +2/+2 and gains trample until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("4") GREEN_MANA_TEXT,
				Power(+2), Life(+2),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrenkosEnforcerCard::CKrenkosEnforcerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krenko's Enforcer"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
}

//____________________________________________________________________________
//
CMinersBaneCard::CMinersBaneCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Miner's Bane"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(3),
		_T("2") RED_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Trample)
{
}

//____________________________________________________________________________
//
CParagonOfFierceDefianceCard::CParagonOfFierceDefianceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paragon of Fierce Defiance"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{//Other red creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));			// Not this card
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//Another target red creature you control gains haste until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Creature | CardType::Red, true)));
		
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CParagonOfGatheringMistsCard::CParagonOfGatheringMistsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paragon of Gathering Mists"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{//Other blue creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));			// Not this card
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//Another target blue creature you control gains flying until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true)));
		
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CParagonOfNewDawnsCard::CParagonOfNewDawnsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paragon of New Dawns"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{//Other white creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));			// Not this card
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//Another target white creature you control gains vigilance until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Vigilance, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Creature | CardType::White, true)));
		
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
	
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CParagonOfOpenGravesCard::CParagonOfOpenGravesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paragon of Open Graves"), CardType::Creature, CREATURE_TYPE2(Skeleton, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{//Other black creatures you control get +1/+1.
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));			// Not this card
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{//Another target black creature you control gains deathtouch until end of turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::Creature | CardType::Black, true)));
		
		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
		
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSiegeDragonCard::CSiegeDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Siege Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{//When Siege Dragon enters the battlefield, destroy all Walls your opponents control.
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{//Whenever Siege Dragon attacks, if defending player controls no Walls, it deals 2 damage to each 
	 //creature without flying that player controls.
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							   CWhenSelfAttackedBlocked::AttackEventCallback, 
							   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardControllerComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSiegeDragonCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSiegeDragonCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSiegeDragonCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
										 AttackSubject attacked) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone*   pInplay     = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	if (CCardFilter::GetFilter(_T("Walls"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;
	return true;
}

bool CSiegeDragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone*   pInplay	 = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	if (CCardFilter::GetFilter(_T("Walls"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;
	return true;
}

//____________________________________________________________________________
//
CBloodHostCard::CBloodHostCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Host"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarrionCrowCard::CCarrionCrowCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Carrion Crow"), CardType::Creature, CREATURE_TYPE2(Zombie, Bird), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	SetIntoPlayTapped();
}

//____________________________________________________________________________
//
CCruelSadistCard::CCruelSadistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cruel Sadist"), CardType::Creature, CREATURE_TYPE2(Human, Assassin), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	{//{B},{T}, Pay 1 life: Put a +1/+1 counter on Cruel Sadist.
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				BLACK_MANA_TEXT));

		cpAbility->AddPayLifeDeltaCost(Life(-1));
		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));
		AddAbility(cpAbility.GetPointer());
	}
	{//X = 0 case
	 //{2B}, Tap, Remove X +1/+1 counters from Cruel Sadist: Cruel Sadist deals X damage to target creature.
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Remove 0 +1/+1 counters from"));
		AddAbility(cpAbility.GetPointer());
	}
	{//X > 0 case
	 //{2B}, Tap, Remove X +1/+1 counters from Cruel Sadist: Cruel Sadist deals X damage to target creature.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				Power(-0), Life(-0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), SpecialNumber::AnyNegative);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCruelSadistCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCruelSadistCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetExtraValue();

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCount;						// deal X damage (reduce toughness by X)

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CFirstResponseCard::CFirstResponseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("First Response"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFirstResponseCard::SetTriggerContext));
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier R"), 55034, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CFirstResponseCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetController()->GetTotalLifeLossTakenLastTurn() > 0;
}

//____________________________________________________________________________
//
CFeastOnTheFallenCard::CFeastOnTheFallenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Feast in the Fallen"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFeastOnTheFallenCard::SetTriggerContext));
	
	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());

}

bool CFeastOnTheFallenCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		//if player being checked is not the controller of Feast on the Fallen and has been damaged last turn
		if(pPlayer != GetController() && pPlayer->GetTotalLifeLossTakenLastTurn() > 0)
			return true;
	}
	return false;
}

//____________________________________________________________________________
//
CFestergloomCard::CFestergloomCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Festergloom"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFleshToDustCard::CFleshToDustCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Flesh to Dust"), CardType::Instant, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
}

//____________________________________________________________________________
//
CInGarruksWakeCard::CInGarruksWakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("In Garruk's Wake"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	
	cpSpell->SetAffectOpponentCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
// Note: The computer seems to always the same option "Allow %s to draw a card".
CIndulgentTormentorCard::CIndulgentTormentorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Indulgent Tormentor"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIndulgentTormentorCard::OnPunisherSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIndulgentTormentorCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIndulgentTormentorCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget	 = pAction->GetAssociatedPlayer();
	PunisherChoice(pTarget, pController);
	return true;
}

void CIndulgentTormentorCard::PunisherChoice(CPlayer* pTarget, CPlayer* pController)
{
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	CZone* pHand		= pTarget->GetZoneById(ZoneId::Hand);
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Lose 3 life"));

		entries.push_back(selectionEntry);
	}
	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Sacrifice a creature"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Allow %s to draw a card"), pController->GetPlayerName());

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController);
}

void CIndulgentTormentorCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s loses 3 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier1 = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s sacrifices a creature"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
														CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.AddSelection(MinimumValue(1), MaximumValue(1),	   // select cards to reorder
									   CZoneModifier::RoleType::PrimaryPlayer, // select by 
									   CZoneModifier::RoleType::None,		   // reveal to
									   &m_CardFilter,						   // what cards
									   ZoneId::Graveyard,					   // if selected, move cards to
									   CZoneModifier::RoleType::PrimaryPlayer, // select by this player
									   CardPlacement::Top,					   // put selected cards on 
									   MoveType::Sacrifice,					   // move type
									   CZoneModifier::RoleType::PrimaryPlayer);// order selected cards by this player
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CPlayer* pController = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s allows %s to draw a card"), pSelectionPlayer->GetPlayerName(), pController->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CDrawCardModifier pModifier3 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
				pModifier3.ApplyTo(pController); // card's controller draws a card not the target opponent
				return;
			}
		}
}
//____________________________________________________________________________
//
CLeechingSliverCard::CLeechingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Leeching Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
						   CWhenAttackedBlocked::PlayerEventCallback,
						   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLeechingSliverCard::SetTriggerContext));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

    cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
    cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
    cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	
	AddAbility(cpAbility.GetPointer());
}

bool CLeechingSliverCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, AttackSubject attacked) const
{
	return (pCreature->GetCreatureType().HasType(SingleCreatureType::Sliver) || pCreature->GetCardKeyword()->HasChangeling());
}

//____________________________________________________________________________
//
CNecromancersAssistantCard::CNecromancersAssistantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necromancer's Assistant"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(3);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNecromancersStockpileCard::CNecromancersStockpileCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necromancer's Stockpile"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
						&CNecromancersStockpileCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT, 1));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddAbility(cpAbility.GetPointer());
}

void CNecromancersStockpileCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureCard* pCreature = (CCreatureCard*)pAbilityAction->GetCostConfigEntry().GetDiscardCards()->GetAt(0);
	if(pCreature->GetCreatureType().HasType(SingleCreatureType::Zombie) || 
	   pCreature->GetCardKeyword()->HasChangeling())
	{
		CPlayer* pController = pAbilityAction->GetController();

		int nTokenCount = 1;
		int nMultiplyBy = 1;

		int nMultiplier = 0;
		// for Doubling Season, etc.
		if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;
		// for Primal Vigor
		if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;
	
		for (int j = 0; j < nTokenCount * nMultiplyBy; ++j)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Zombie S"), 55035));		
			if (!m_pGame->IsThinking()) 
			{
				((CTokenCreature*)cpToken.GetPointer())->SetUID(55035); 
				((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Zombie S")); 
			}
			pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken.GetPointer()->SetIntoPlayTapped();
			cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}
}

//____________________________________________________________________________
//
